#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
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
namespace dynamics{

Void ZPP_InteractionFilter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","new",0xf48737fe,"zpp_nape.dynamics.ZPP_InteractionFilter.new","zpp_nape/dynamics/InteractionFilter.hx",174,0x8f5b39cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(298)
	this->fluidMask = (int)0;
	HX_STACK_LINE(297)
	this->fluidGroup = (int)0;
	HX_STACK_LINE(291)
	this->sensorMask = (int)0;
	HX_STACK_LINE(290)
	this->sensorGroup = (int)0;
	HX_STACK_LINE(284)
	this->collisionMask = (int)0;
	HX_STACK_LINE(283)
	this->collisionGroup = (int)0;
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
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		this->shapes = tmp;
	}
	HX_STACK_LINE(253)
	int tmp = this->fluidGroup = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	int tmp1 = this->sensorGroup = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	this->collisionGroup = tmp1;
	HX_STACK_LINE(254)
	int tmp2 = this->fluidMask = (int)-1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	int tmp3 = this->sensorMask = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	this->collisionMask = tmp3;
}
;
	return null();
}

//ZPP_InteractionFilter_obj::~ZPP_InteractionFilter_obj() { }

Dynamic ZPP_InteractionFilter_obj::__CreateEmpty() { return  new ZPP_InteractionFilter_obj; }
hx::ObjectPtr< ZPP_InteractionFilter_obj > ZPP_InteractionFilter_obj::__new()
{  hx::ObjectPtr< ZPP_InteractionFilter_obj > _result_ = new ZPP_InteractionFilter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_InteractionFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionFilter_obj > _result_ = new ZPP_InteractionFilter_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::InteractionFilter ZPP_InteractionFilter_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","wrapper",0xd62763f1,"zpp_nape.dynamics.ZPP_InteractionFilter.wrapper","zpp_nape/dynamics/InteractionFilter.hx",202,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::nape::dynamics::InteractionFilter tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::nape::dynamics::InteractionFilter tmp2 = ::nape::dynamics::InteractionFilter_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		this->outer = tmp2;
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::nape::dynamics::InteractionFilter tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::zpp_nape::dynamics::ZPP_InteractionFilter o = tmp3->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			o->next = tmp4;
			HX_STACK_LINE(217)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		::nape::dynamics::InteractionFilter tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	::nape::dynamics::InteractionFilter tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,wrapper,return )

Void ZPP_InteractionFilter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","free",0xfc89df4e,"zpp_nape.dynamics.ZPP_InteractionFilter.free","zpp_nape/dynamics/InteractionFilter.hx",229,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,free,(void))

Void ZPP_InteractionFilter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","alloc",0x1726af93,"zpp_nape.dynamics.ZPP_InteractionFilter.alloc","zpp_nape/dynamics/InteractionFilter.hx",233,0x8f5b39cd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,alloc,(void))

Void ZPP_InteractionFilter_obj::feature_cons( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","feature_cons",0x8cbd03fc,"zpp_nape.dynamics.ZPP_InteractionFilter.feature_cons","zpp_nape/dynamics/InteractionFilter.hx",238,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		this->shapes = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,feature_cons,(void))

Void ZPP_InteractionFilter_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","addShape",0xd6f444e2,"zpp_nape.dynamics.ZPP_InteractionFilter.addShape","zpp_nape/dynamics/InteractionFilter.hx",243,0x8f5b39cd)
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,addShape,(void))

Void ZPP_InteractionFilter_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","remShape",0x66198f09,"zpp_nape.dynamics.ZPP_InteractionFilter.remShape","zpp_nape/dynamics/InteractionFilter.hx",248,0x8f5b39cd)
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,remShape,(void))

::zpp_nape::dynamics::ZPP_InteractionFilter ZPP_InteractionFilter_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","copy",0xfa8bfe57,"zpp_nape.dynamics.ZPP_InteractionFilter.copy","zpp_nape/dynamics/InteractionFilter.hx",256,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	::zpp_nape::dynamics::ZPP_InteractionFilter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(259)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		if ((tmp1)){
			HX_STACK_LINE(260)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(266)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			ret = tmp2;
			HX_STACK_LINE(267)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = ret->next;
			HX_STACK_LINE(268)
			ret->next = null();
		}
		HX_STACK_LINE(273)
		Dynamic();
	}
	HX_STACK_LINE(275)
	int tmp = this->collisionGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	ret->collisionGroup = tmp;
	HX_STACK_LINE(276)
	int tmp1 = this->collisionMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	ret->collisionMask = tmp1;
	HX_STACK_LINE(277)
	int tmp2 = this->sensorGroup;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	ret->sensorGroup = tmp2;
	HX_STACK_LINE(278)
	int tmp3 = this->sensorMask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	ret->sensorMask = tmp3;
	HX_STACK_LINE(279)
	int tmp4 = this->fluidGroup;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	ret->fluidGroup = tmp4;
	HX_STACK_LINE(280)
	int tmp5 = this->fluidMask;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	ret->fluidMask = tmp5;
	HX_STACK_LINE(281)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(281)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,copy,return )

bool ZPP_InteractionFilter_obj::shouldCollide( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldCollide",0x365844a9,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldCollide","zpp_nape/dynamics/InteractionFilter.hx",287,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(288)
	int tmp = this->collisionMask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	int tmp1 = x->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(288)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(288)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(288)
	if ((tmp3)){
		HX_STACK_LINE(288)
		int tmp5 = x->collisionMask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		int tmp6 = this->collisionGroup;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(288)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		int tmp8 = (int(tmp5) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		tmp4 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(288)
		tmp4 = false;
	}
	HX_STACK_LINE(288)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldCollide,return )

bool ZPP_InteractionFilter_obj::shouldSense( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldSense",0x626d8399,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldSense","zpp_nape/dynamics/InteractionFilter.hx",294,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(295)
	int tmp = this->sensorMask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	int tmp1 = x->sensorGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(295)
	if ((tmp3)){
		HX_STACK_LINE(295)
		int tmp5 = x->sensorMask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		int tmp6 = this->sensorGroup;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		int tmp8 = (int(tmp5) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(295)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(295)
		tmp4 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(295)
		tmp4 = false;
	}
	HX_STACK_LINE(295)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldSense,return )

bool ZPP_InteractionFilter_obj::shouldFlow( ::zpp_nape::dynamics::ZPP_InteractionFilter x){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","shouldFlow",0xb42369e3,"zpp_nape.dynamics.ZPP_InteractionFilter.shouldFlow","zpp_nape/dynamics/InteractionFilter.hx",301,0x8f5b39cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(302)
	int tmp = this->fluidMask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	int tmp1 = x->fluidGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(302)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(302)
	if ((tmp3)){
		HX_STACK_LINE(302)
		int tmp5 = x->fluidMask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(302)
		int tmp6 = this->fluidGroup;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		int tmp8 = (int(tmp5) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(302)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(302)
		tmp4 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(302)
		tmp4 = false;
	}
	HX_STACK_LINE(302)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionFilter_obj,shouldFlow,return )

Void ZPP_InteractionFilter_obj::invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionFilter","invalidate",0x6864019d,"zpp_nape.dynamics.ZPP_InteractionFilter.invalidate","zpp_nape/dynamics/InteractionFilter.hx",305,0x8f5b39cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp = this->shapes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			if ((tmp2)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(309)
			s->invalidate_filter();
			HX_STACK_LINE(310)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionFilter_obj,invalidate,(void))

::zpp_nape::dynamics::ZPP_InteractionFilter ZPP_InteractionFilter_obj::zpp_pool;


ZPP_InteractionFilter_obj::ZPP_InteractionFilter_obj()
{
}

void ZPP_InteractionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionFilter);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_MARK_MEMBER_NAME(collisionMask,"collisionMask");
	HX_MARK_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_MARK_MEMBER_NAME(sensorMask,"sensorMask");
	HX_MARK_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_MARK_MEMBER_NAME(fluidMask,"fluidMask");
	HX_MARK_END_CLASS();
}

void ZPP_InteractionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_VISIT_MEMBER_NAME(collisionMask,"collisionMask");
	HX_VISIT_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_VISIT_MEMBER_NAME(sensorMask,"sensorMask");
	HX_VISIT_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_VISIT_MEMBER_NAME(fluidMask,"fluidMask");
}

Dynamic ZPP_InteractionFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { return fluidMask; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { return sensorMask; }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { return fluidGroup; }
		if (HX_FIELD_EQ(inName,"shouldFlow") ) { return shouldFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { return sensorGroup; }
		if (HX_FIELD_EQ(inName,"shouldSense") ) { return shouldSense_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { return collisionMask; }
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return collisionGroup; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_InteractionFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_InteractionFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::InteractionFilter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { fluidMask=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { sensorMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { fluidGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { sensorGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { collisionMask=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { collisionGroup=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_InteractionFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return true; }
	}
	return false;
}

void ZPP_InteractionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07"));
	outFields->push(HX_HCSTRING("collisionGroup","\x6d","\x9d","\xf5","\xe8"));
	outFields->push(HX_HCSTRING("collisionMask","\x7e","\x36","\x8c","\x28"));
	outFields->push(HX_HCSTRING("sensorGroup","\xa5","\x9e","\x4f","\xe0"));
	outFields->push(HX_HCSTRING("sensorMask","\x46","\x44","\xfe","\x14"));
	outFields->push(HX_HCSTRING("fluidGroup","\xd5","\x24","\xb2","\xf6"));
	outFields->push(HX_HCSTRING("fluidMask","\x16","\x94","\x81","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(ZPP_InteractionFilter_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_InteractionFilter_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsObject /*::nape::dynamics::InteractionFilter*/ ,(int)offsetof(ZPP_InteractionFilter_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Shape*/ ,(int)offsetof(ZPP_InteractionFilter_obj,shapes),HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_InteractionFilter_obj,wrap_shapes),HX_HCSTRING("wrap_shapes","\x47","\xdf","\xb8","\x07")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,collisionGroup),HX_HCSTRING("collisionGroup","\x6d","\x9d","\xf5","\xe8")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,collisionMask),HX_HCSTRING("collisionMask","\x7e","\x36","\x8c","\x28")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,sensorGroup),HX_HCSTRING("sensorGroup","\xa5","\x9e","\x4f","\xe0")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,sensorMask),HX_HCSTRING("sensorMask","\x46","\x44","\xfe","\x14")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,fluidGroup),HX_HCSTRING("fluidGroup","\xd5","\x24","\xb2","\xf6")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionFilter_obj,fluidMask),HX_HCSTRING("fluidMask","\x16","\x94","\x81","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(void *) &ZPP_InteractionFilter_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
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
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("collisionGroup","\x6d","\x9d","\xf5","\xe8"),
	HX_HCSTRING("collisionMask","\x7e","\x36","\x8c","\x28"),
	HX_HCSTRING("shouldCollide","\x8b","\xeb","\xf7","\xdd"),
	HX_HCSTRING("sensorGroup","\xa5","\x9e","\x4f","\xe0"),
	HX_HCSTRING("sensorMask","\x46","\x44","\xfe","\x14"),
	HX_HCSTRING("shouldSense","\xfb","\x4d","\xfc","\x30"),
	HX_HCSTRING("fluidGroup","\xd5","\x24","\xb2","\xf6"),
	HX_HCSTRING("fluidMask","\x16","\x94","\x81","\xf1"),
	HX_HCSTRING("shouldFlow","\xc1","\x81","\xe9","\xd2"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionFilter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionFilter_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_InteractionFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_InteractionFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_InteractionFilter","\x0c","\x21","\xd8","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_InteractionFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_InteractionFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_InteractionFilter_obj >;
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

void ZPP_InteractionFilter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
