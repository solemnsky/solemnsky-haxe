#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace dynamics{

Void InteractionFilter_obj::__construct(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{
HX_STACK_FRAME("nape.dynamics.InteractionFilter","new",0xe0918fe8,"nape.dynamics.InteractionFilter.new","nape/dynamics/InteractionFilter.hx",206,0x3ee48c68)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_collisionGroup,"collisionGroup")
HX_STACK_ARG(__o_collisionMask,"collisionMask")
HX_STACK_ARG(__o_sensorGroup,"sensorGroup")
HX_STACK_ARG(__o_sensorMask,"sensorMask")
HX_STACK_ARG(__o_fluidGroup,"fluidGroup")
HX_STACK_ARG(__o_fluidMask,"fluidMask")
int collisionGroup = __o_collisionGroup.Default(1);
int collisionMask = __o_collisionMask.Default(-1);
int sensorGroup = __o_sensorGroup.Default(1);
int sensorMask = __o_sensorMask.Default(-1);
int fluidGroup = __o_fluidGroup.Default(1);
int fluidMask = __o_fluidMask.Default(-1);
{
	HX_STACK_LINE(210)
	this->zpp_inner = null();
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(366)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		if ((tmp1)){
			HX_STACK_LINE(367)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			this->zpp_inner = tmp2;
		}
		else{
			HX_STACK_LINE(373)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			this->zpp_inner = tmp2;
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = tmp3->next;
			HX_STACK_LINE(375)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			tmp4->next = null();
		}
		HX_STACK_LINE(380)
		Dynamic();
	}
	HX_STACK_LINE(382)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	tmp->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(383)
			int tmp2 = tmp1->collisionGroup;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			int tmp3 = collisionGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			if ((tmp4)){
				HX_STACK_LINE(383)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				tmp5->collisionGroup = collisionGroup;
				HX_STACK_LINE(383)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(383)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		tmp1->collisionGroup;
	}
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(384)
			int tmp2 = tmp1->collisionMask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(384)
			int tmp3 = collisionMask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			if ((tmp4)){
				HX_STACK_LINE(384)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(384)
				tmp5->collisionMask = collisionMask;
				HX_STACK_LINE(384)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(384)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(384)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		tmp1->collisionMask;
	}
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(385)
			int tmp2 = tmp1->sensorGroup;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(385)
			int tmp3 = sensorGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			if ((tmp4)){
				HX_STACK_LINE(385)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				tmp5->sensorGroup = sensorGroup;
				HX_STACK_LINE(385)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(385)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(385)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		tmp1->sensorGroup;
	}
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(386)
			int tmp2 = tmp1->sensorMask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			int tmp3 = sensorMask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			if ((tmp4)){
				HX_STACK_LINE(386)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				tmp5->sensorMask = sensorMask;
				HX_STACK_LINE(386)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(386)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(386)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		tmp1->sensorMask;
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(387)
			int tmp2 = tmp1->fluidGroup;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			int tmp3 = fluidGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			if ((tmp4)){
				HX_STACK_LINE(387)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(387)
				tmp5->fluidGroup = fluidGroup;
				HX_STACK_LINE(387)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(387)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		tmp1->fluidGroup;
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(388)
			int tmp2 = tmp1->fluidMask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(388)
			int tmp3 = fluidMask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			if ((tmp4)){
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(388)
				tmp5->fluidMask = fluidMask;
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(388)
				tmp6->invalidate();
			}
		}
		HX_STACK_LINE(388)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		tmp1->fluidMask;
	}
}
;
	return null();
}

//InteractionFilter_obj::~InteractionFilter_obj() { }

Dynamic InteractionFilter_obj::__CreateEmpty() { return  new InteractionFilter_obj; }
hx::ObjectPtr< InteractionFilter_obj > InteractionFilter_obj::__new(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{  hx::ObjectPtr< InteractionFilter_obj > _result_ = new InteractionFilter_obj();
	_result_->__construct(__o_collisionGroup,__o_collisionMask,__o_sensorGroup,__o_sensorMask,__o_fluidGroup,__o_fluidMask);
	return _result_;}

Dynamic InteractionFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionFilter_obj > _result_ = new InteractionFilter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Dynamic InteractionFilter_obj::get_userData( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_userData",0x21645996,"nape.dynamics.InteractionFilter.get_userData","nape/dynamics/InteractionFilter.hx",224,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/InteractionFilter.hx",226,0x3ee48c68)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(226)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(228)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(228)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_userData,return )

::nape::shape::ShapeList InteractionFilter_obj::get_shapes( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_shapes",0x65060b73,"nape.dynamics.InteractionFilter.get_shapes","nape/dynamics/InteractionFilter.hx",239,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	::nape::shape::ShapeList tmp1 = tmp->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	if ((tmp2)){
		HX_STACK_LINE(240)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = tmp3->shapes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		::nape::shape::ShapeList tmp5 = ::zpp_nape::util::ZPP_ShapeList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		tmp6->wrap_shapes = tmp5;
	}
	HX_STACK_LINE(241)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(241)
	::nape::shape::ShapeList tmp4 = tmp3->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_shapes,return )

int InteractionFilter_obj::get_collisionGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_collisionGroup",0x313677ae,"nape.dynamics.InteractionFilter.get_collisionGroup","nape/dynamics/InteractionFilter.hx",249,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	int tmp1 = tmp->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionGroup,return )

int InteractionFilter_obj::set_collisionGroup( int collisionGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_collisionGroup",0x0de5aa22,"nape.dynamics.InteractionFilter.set_collisionGroup","nape/dynamics/InteractionFilter.hx",252,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionGroup,"collisionGroup")
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		int tmp1 = tmp->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		int tmp2 = collisionGroup;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		if ((tmp3)){
			HX_STACK_LINE(255)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			tmp4->collisionGroup = collisionGroup;
			HX_STACK_LINE(256)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(259)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	int tmp1 = tmp->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionGroup,return )

int InteractionFilter_obj::get_collisionMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_collisionMask",0x01d71f5d,"nape.dynamics.InteractionFilter.get_collisionMask","nape/dynamics/InteractionFilter.hx",267,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = tmp->collisionMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionMask,return )

int InteractionFilter_obj::set_collisionMask( int collisionMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_collisionMask",0x2544f769,"nape.dynamics.InteractionFilter.set_collisionMask","nape/dynamics/InteractionFilter.hx",270,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionMask,"collisionMask")
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(272)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		int tmp1 = tmp->collisionMask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		int tmp2 = collisionMask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		if ((tmp3)){
			HX_STACK_LINE(273)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			tmp4->collisionMask = collisionMask;
			HX_STACK_LINE(274)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(277)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	int tmp1 = tmp->collisionMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionMask,return )

int InteractionFilter_obj::get_sensorGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_sensorGroup",0x14d441c4,"nape.dynamics.InteractionFilter.get_sensorGroup","nape/dynamics/InteractionFilter.hx",285,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	int tmp1 = tmp->sensorGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorGroup,return )

int InteractionFilter_obj::set_sensorGroup( int sensorGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_sensorGroup",0x109fbed0,"nape.dynamics.InteractionFilter.set_sensorGroup","nape/dynamics/InteractionFilter.hx",288,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sensorGroup,"sensorGroup")
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(290)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		int tmp1 = tmp->sensorGroup;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		int tmp2 = sensorGroup;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		if ((tmp3)){
			HX_STACK_LINE(291)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			tmp4->sensorGroup = sensorGroup;
			HX_STACK_LINE(292)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(295)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	int tmp1 = tmp->sensorGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorGroup,return )

int InteractionFilter_obj::get_sensorMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_sensorMask",0x8a52aa07,"nape.dynamics.InteractionFilter.get_sensorMask","nape/dynamics/InteractionFilter.hx",303,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(304)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	int tmp1 = tmp->sensorMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorMask,return )

int InteractionFilter_obj::set_sensorMask( int sensorMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_sensorMask",0xaa72927b,"nape.dynamics.InteractionFilter.set_sensorMask","nape/dynamics/InteractionFilter.hx",306,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sensorMask,"sensorMask")
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(308)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		int tmp1 = tmp->sensorMask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		int tmp2 = sensorMask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		if ((tmp3)){
			HX_STACK_LINE(309)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			tmp4->sensorMask = sensorMask;
			HX_STACK_LINE(310)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(310)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(313)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	int tmp1 = tmp->sensorMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorMask,return )

int InteractionFilter_obj::get_fluidGroup( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_fluidGroup",0x6c068a96,"nape.dynamics.InteractionFilter.get_fluidGroup","nape/dynamics/InteractionFilter.hx",321,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	int tmp1 = tmp->fluidGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidGroup,return )

int InteractionFilter_obj::set_fluidGroup( int fluidGroup){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_fluidGroup",0x8c26730a,"nape.dynamics.InteractionFilter.set_fluidGroup","nape/dynamics/InteractionFilter.hx",324,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidGroup,"fluidGroup")
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		int tmp1 = tmp->fluidGroup;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		int tmp2 = fluidGroup;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		if ((tmp3)){
			HX_STACK_LINE(327)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(327)
			tmp4->fluidGroup = fluidGroup;
			HX_STACK_LINE(328)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(331)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	int tmp1 = tmp->fluidGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidGroup,return )

int InteractionFilter_obj::get_fluidMask( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","get_fluidMask",0x8990e175,"nape.dynamics.InteractionFilter.get_fluidMask","nape/dynamics/InteractionFilter.hx",339,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	int tmp1 = tmp->fluidMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidMask,return )

int InteractionFilter_obj::set_fluidMask( int fluidMask){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","set_fluidMask",0xce96c381,"nape.dynamics.InteractionFilter.set_fluidMask","nape/dynamics/InteractionFilter.hx",342,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidMask,"fluidMask")
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(344)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		int tmp1 = tmp->fluidMask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		int tmp2 = fluidMask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		if ((tmp3)){
			HX_STACK_LINE(345)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			tmp4->fluidMask = fluidMask;
			HX_STACK_LINE(346)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			tmp5->invalidate();
		}
	}
	HX_STACK_LINE(349)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	int tmp1 = tmp->fluidMask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidMask,return )

bool InteractionFilter_obj::shouldCollide( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldCollide",0xb4a36513,"nape.dynamics.InteractionFilter.shouldCollide","nape/dynamics/InteractionFilter.hx",400,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(402)
	bool tmp = (filter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	if ((tmp)){
		HX_STACK_LINE(402)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: filter argument cannot be null for shouldCollide","\xa4","\xda","\x53","\x36"));
	}
	HX_STACK_LINE(404)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(404)
		::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(404)
		::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(404)
		int tmp3 = (int(_this->collisionMask) & int(x->collisionGroup));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		if ((tmp4)){
			HX_STACK_LINE(404)
			int tmp5 = (int(x->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(404)
			tmp1 = (tmp6 != (int)0);
		}
		else{
			HX_STACK_LINE(404)
			tmp1 = false;
		}
	}
	HX_STACK_LINE(404)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldCollide,return )

bool InteractionFilter_obj::shouldSense( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldSense",0x43d0d583,"nape.dynamics.InteractionFilter.shouldSense","nape/dynamics/InteractionFilter.hx",416,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(418)
	bool tmp = (filter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	if ((tmp)){
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: filter argument cannot be null for shouldSense","\xd4","\x14","\x36","\x72"));
	}
	HX_STACK_LINE(420)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(420)
		int tmp3 = (int(_this->sensorMask) & int(x->sensorGroup));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(420)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		if ((tmp4)){
			HX_STACK_LINE(420)
			int tmp5 = (int(x->sensorMask) & int(_this->sensorGroup));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(420)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(420)
			tmp1 = (tmp6 != (int)0);
		}
		else{
			HX_STACK_LINE(420)
			tmp1 = false;
		}
	}
	HX_STACK_LINE(420)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldSense,return )

bool InteractionFilter_obj::shouldFlow( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","shouldFlow",0x2a3e4339,"nape.dynamics.InteractionFilter.shouldFlow","nape/dynamics/InteractionFilter.hx",432,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(434)
	bool tmp = (filter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	if ((tmp)){
		HX_STACK_LINE(434)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: filter argument cannot be null for shouldFlow","\x08","\x19","\xf4","\x9a"));
	}
	HX_STACK_LINE(436)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(436)
		::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(436)
		int tmp3 = (int(_this->fluidMask) & int(x->fluidGroup));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		if ((tmp4)){
			HX_STACK_LINE(436)
			int tmp5 = (int(x->fluidMask) & int(_this->fluidGroup));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(436)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(436)
			tmp1 = (tmp6 != (int)0);
		}
		else{
			HX_STACK_LINE(436)
			tmp1 = false;
		}
	}
	HX_STACK_LINE(436)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldFlow,return )

::nape::dynamics::InteractionFilter InteractionFilter_obj::copy( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","copy",0x978e932d,"nape.dynamics.InteractionFilter.copy","nape/dynamics/InteractionFilter.hx",444,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	int tmp1 = tmp->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(445)
	int tmp3 = tmp2->collisionMask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(445)
	int tmp5 = tmp4->sensorGroup;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(445)
	int tmp7 = tmp6->sensorMask;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(445)
	int tmp9 = tmp8->fluidGroup;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(445)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(445)
	int tmp11 = tmp10->fluidMask;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(445)
	::nape::dynamics::InteractionFilter tmp12 = ::nape::dynamics::InteractionFilter_obj::__new(tmp1,tmp3,tmp5,tmp7,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(445)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,copy,return )

::String InteractionFilter_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.InteractionFilter","toString",0xe585c424,"nape.dynamics.InteractionFilter.toString","nape/dynamics/InteractionFilter.hx",451,0x3ee48c68)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	int tmp1 = tmp->collisionGroup;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	::String tmp2 = ::StringTools_obj::hex(tmp1,(int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(452)
	::String tmp3 = (HX_HCSTRING("{ collision: ","\x73","\x5c","\xf5","\xd8") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	::String tmp4 = (tmp3 + HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(452)
	int tmp6 = tmp5->collisionMask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(452)
	::String tmp7 = ::StringTools_obj::hex(tmp6,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(452)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(452)
	::String tmp9 = (tmp8 + HX_HCSTRING(" sensor: ","\x80","\x07","\xda","\xf3"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(452)
	int tmp11 = tmp10->sensorGroup;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(452)
	::String tmp12 = ::StringTools_obj::hex(tmp11,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(452)
	::String tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(452)
	::String tmp14 = (tmp13 + HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(452)
	int tmp16 = tmp15->sensorMask;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(452)
	::String tmp17 = ::StringTools_obj::hex(tmp16,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(452)
	::String tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(452)
	::String tmp19 = (tmp18 + HX_HCSTRING(" fluid: ","\x10","\xe7","\xfb","\x89"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(452)
	int tmp21 = tmp20->fluidGroup;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(452)
	::String tmp22 = ::StringTools_obj::hex(tmp21,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(452)
	::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(452)
	::String tmp24 = (tmp23 + HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(452)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(452)
	int tmp26 = tmp25->fluidMask;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(452)
	::String tmp27 = ::StringTools_obj::hex(tmp26,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(452)
	::String tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(452)
	::String tmp29 = (tmp28 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(452)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,toString,return )


InteractionFilter_obj::InteractionFilter_obj()
{
}

void InteractionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionFilter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void InteractionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic InteractionFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { if (inCallProp == hx::paccAlways) return get_shapes(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"fluidMask") ) { if (inCallProp == hx::paccAlways) return get_fluidMask(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"sensorMask") ) { if (inCallProp == hx::paccAlways) return get_sensorMask(); }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { if (inCallProp == hx::paccAlways) return get_fluidGroup(); }
		if (HX_FIELD_EQ(inName,"shouldFlow") ) { return shouldFlow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { if (inCallProp == hx::paccAlways) return get_sensorGroup(); }
		if (HX_FIELD_EQ(inName,"shouldSense") ) { return shouldSense_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { if (inCallProp == hx::paccAlways) return get_collisionMask(); }
		if (HX_FIELD_EQ(inName,"get_fluidMask") ) { return get_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidMask") ) { return set_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { if (inCallProp == hx::paccAlways) return get_collisionGroup(); }
		if (HX_FIELD_EQ(inName,"get_sensorMask") ) { return get_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorMask") ) { return set_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidGroup") ) { return get_fluidGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidGroup") ) { return set_fluidGroup_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_sensorGroup") ) { return get_sensorGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorGroup") ) { return set_sensorGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_collisionMask") ) { return get_collisionMask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_collisionMask") ) { return set_collisionMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_collisionGroup") ) { return get_collisionGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_collisionGroup") ) { return set_collisionGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidMask") ) { if (inCallProp == hx::paccAlways) return set_fluidMask(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sensorMask") ) { if (inCallProp == hx::paccAlways) return set_sensorMask(inValue); }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { if (inCallProp == hx::paccAlways) return set_fluidGroup(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { if (inCallProp == hx::paccAlways) return set_sensorGroup(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { if (inCallProp == hx::paccAlways) return set_collisionMask(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { if (inCallProp == hx::paccAlways) return set_collisionGroup(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractionFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InteractionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
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
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(InteractionFilter_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_shapes","\xfb","\x49","\xb1","\x0d"),
	HX_HCSTRING("get_collisionGroup","\x36","\x7e","\x8f","\x84"),
	HX_HCSTRING("set_collisionGroup","\xaa","\xb0","\x3e","\x61"),
	HX_HCSTRING("get_collisionMask","\xd5","\x41","\xfc","\x2e"),
	HX_HCSTRING("set_collisionMask","\xe1","\x19","\x6a","\x52"),
	HX_HCSTRING("get_sensorGroup","\x3c","\x56","\x31","\xa1"),
	HX_HCSTRING("set_sensorGroup","\x48","\xd3","\xfc","\x9c"),
	HX_HCSTRING("get_sensorMask","\x8f","\xcc","\xf3","\x8a"),
	HX_HCSTRING("set_sensorMask","\x03","\xb5","\x13","\xab"),
	HX_HCSTRING("get_fluidGroup","\x1e","\xad","\xa7","\x6c"),
	HX_HCSTRING("set_fluidGroup","\x92","\x95","\xc7","\x8c"),
	HX_HCSTRING("get_fluidMask","\xed","\x67","\xe5","\xb2"),
	HX_HCSTRING("set_fluidMask","\xf9","\x49","\xeb","\xf7"),
	HX_HCSTRING("shouldCollide","\x8b","\xeb","\xf7","\xdd"),
	HX_HCSTRING("shouldSense","\xfb","\x4d","\xfc","\x30"),
	HX_HCSTRING("shouldFlow","\xc1","\x81","\xe9","\xd2"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractionFilter_obj::__mClass;

void InteractionFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.InteractionFilter","\xf6","\xbb","\x49","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InteractionFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionFilter_obj >;
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

} // end namespace nape
} // end namespace dynamics
