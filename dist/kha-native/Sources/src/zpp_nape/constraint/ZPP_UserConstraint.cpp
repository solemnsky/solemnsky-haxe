#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_UserConstraint_obj::__construct(int dim,bool velonly)
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","new",0x54ee5fef,"zpp_nape.constraint.ZPP_UserConstraint.new","zpp_nape/constraint/UserConstraint.hx",174,0x968ba4a6)
HX_STACK_THIS(this)
HX_STACK_ARG(dim,"dim")
HX_STACK_ARG(velonly,"velonly")
{
	HX_STACK_LINE(498)
	this->jOld = null();
	HX_STACK_LINE(497)
	this->J = null();
	HX_STACK_LINE(476)
	this->vec3 = null();
	HX_STACK_LINE(440)
	this->Keff = null();
	HX_STACK_LINE(439)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(438)
	this->velonly = false;
	HX_STACK_LINE(437)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(436)
	this->soft = ((Float)0.0);
	HX_STACK_LINE(414)
	this->y = null();
	HX_STACK_LINE(391)
	this->L = null();
	HX_STACK_LINE(253)
	this->stepped = false;
	HX_STACK_LINE(182)
	this->bias = null();
	HX_STACK_LINE(181)
	this->jAcc = null();
	HX_STACK_LINE(180)
	this->dim = (int)0;
	HX_STACK_LINE(179)
	this->bodies = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(261)
	super::__construct();
	HX_STACK_LINE(262)
	Array< ::Dynamic > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	tmp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(262)
	this->bodies = tmp;
	HX_STACK_LINE(265)
	this->dim = dim;
	HX_STACK_LINE(266)
	this->velonly = velonly;
	HX_STACK_LINE(267)
	Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	tmp1 = Array_obj< Float >::__new();
	HX_STACK_LINE(267)
	this->jAcc = tmp1;
	HX_STACK_LINE(270)
	Array< Float > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	tmp2 = Array_obj< Float >::__new();
	HX_STACK_LINE(270)
	this->bias = tmp2;
	HX_STACK_LINE(273)
	Array< Float > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	tmp3 = Array_obj< Float >::__new();
	HX_STACK_LINE(273)
	this->L = tmp3;
	HX_STACK_LINE(276)
	Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(277)
	tmp4 = Array_obj< Float >::__new();
	HX_STACK_LINE(276)
	this->J = tmp4;
	HX_STACK_LINE(279)
	Array< Float > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	tmp5 = Array_obj< Float >::__new();
	HX_STACK_LINE(279)
	this->jOld = tmp5;
	HX_STACK_LINE(282)
	Array< Float > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(283)
	tmp6 = Array_obj< Float >::__new();
	HX_STACK_LINE(282)
	this->y = tmp6;
	HX_STACK_LINE(285)
	Array< Float > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(286)
	tmp7 = Array_obj< Float >::__new();
	HX_STACK_LINE(285)
	this->Keff = tmp7;
	HX_STACK_LINE(288)
	::nape::geom::Vec3 tmp8 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(288)
	this->vec3 = tmp8;
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			bool tmp9 = (_g < dim);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			if ((tmp10)){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(290)
			Array< Float > tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(290)
			Array< Float > tmp14 = this->bias;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(290)
			int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(290)
			Array< Float > tmp16 = this->J;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(290)
			int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(290)
			Array< Float > tmp18 = this->jOld;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(290)
			int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(290)
			Array< Float > tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(290)
			int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(290)
			Float tmp22 = tmp20[tmp21] = ((Float)0.0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(290)
			Float tmp23 = tmp18[tmp19] = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(290)
			Float tmp24 = tmp16[tmp17] = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(290)
			Float tmp25 = tmp14[tmp15] = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(290)
			tmp12[tmp13] = tmp25;
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(291)
				while((true)){
					HX_STACK_LINE(291)
					bool tmp26 = (_g1 < dim);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(291)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(291)
					if ((tmp27)){
						HX_STACK_LINE(291)
						break;
					}
					HX_STACK_LINE(291)
					int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(291)
					int j = tmp28;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(291)
					Array< Float > tmp29 = this->L;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(291)
					int tmp30 = (i * dim);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(291)
					int tmp31 = j;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(291)
					int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(291)
					tmp29[tmp32] = ((Float)0.0);
				}
			}
		}
	}
	HX_STACK_LINE(293)
	this->stepped = false;
}
;
	return null();
}

//ZPP_UserConstraint_obj::~ZPP_UserConstraint_obj() { }

Dynamic ZPP_UserConstraint_obj::__CreateEmpty() { return  new ZPP_UserConstraint_obj; }
hx::ObjectPtr< ZPP_UserConstraint_obj > ZPP_UserConstraint_obj::__new(int dim,bool velonly)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > _result_ = new ZPP_UserConstraint_obj();
	_result_->__construct(dim,velonly);
	return _result_;}

Dynamic ZPP_UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > _result_ = new ZPP_UserConstraint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZPP_UserConstraint_obj::bindVec2_invalidate( ::zpp_nape::geom::ZPP_Vec2 _){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","bindVec2_invalidate",0x941f4c4e,"zpp_nape.constraint.ZPP_UserConstraint.bindVec2_invalidate","zpp_nape/constraint/UserConstraint.hx",176,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(177)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		tmp->__invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bindVec2_invalidate,(void))

Void ZPP_UserConstraint_obj::addBody( ::zpp_nape::phys::ZPP_Body b){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","addBody",0xca33c072,"zpp_nape.constraint.ZPP_UserConstraint.addBody","zpp_nape/constraint/UserConstraint.hx",183,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(192)
		::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				if ((tmp2)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(193)
				::zpp_nape::constraint::ZPP_UserBody x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(194)
				bool tmp4 = (x->body == b);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(194)
				if ((tmp4)){
					HX_STACK_LINE(195)
					match = x;
					HX_STACK_LINE(196)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		bool tmp = (match == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		if ((tmp)){
			HX_STACK_LINE(200)
			Array< ::Dynamic > tmp1 = this->bodies;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			::zpp_nape::constraint::ZPP_UserBody tmp2 = ::zpp_nape::constraint::ZPP_UserBody_obj::__new((int)1,b);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			tmp1->push(tmp2);
			HX_STACK_LINE(201)
			bool tmp3 = this->active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			if ((tmp3)){
				HX_STACK_LINE(201)
				::zpp_nape::space::ZPP_Space tmp5 = this->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::zpp_nape::space::ZPP_Space tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp4 = (tmp6 != null());
			}
			else{
				HX_STACK_LINE(201)
				tmp4 = false;
			}
			HX_STACK_LINE(201)
			if ((tmp4)){
				HX_STACK_LINE(202)
				bool tmp5 = (b != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				if ((tmp5)){
					HX_STACK_LINE(202)
					b->constraints->add(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		else{
			HX_STACK_LINE(205)
			(match->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,addBody,(void))

bool ZPP_UserConstraint_obj::remBody( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","remBody",0x2217382b,"zpp_nape.constraint.ZPP_UserConstraint.remBody","zpp_nape/constraint/UserConstraint.hx",207,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(216)
	::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(217)
	Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	int bl = tmp2;		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	while((true)){
		HX_STACK_LINE(219)
		bool tmp3 = (i < bl);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		if ((tmp4)){
			HX_STACK_LINE(219)
			break;
		}
		HX_STACK_LINE(220)
		Array< ::Dynamic > tmp5 = this->bodies;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_UserBody tmp7 = tmp5->__get(tmp6).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_UserBody x = tmp7;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(221)
		bool tmp8 = (x->body == b);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		if ((tmp8)){
			HX_STACK_LINE(222)
			(x->cnt)--;
			HX_STACK_LINE(223)
			bool tmp9 = (x->cnt == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			if ((tmp9)){
				HX_STACK_LINE(224)
				bool tmp10 = (bl > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(224)
				if ((tmp10)){
					HX_STACK_LINE(224)
					Array< ::Dynamic > tmp11 = this->bodies;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(224)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(224)
					Array< ::Dynamic > tmp13 = this->bodies;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(224)
					int tmp14 = (bl - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(224)
					::zpp_nape::constraint::ZPP_UserBody tmp15 = tmp13->__get(tmp14).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(224)
					tmp11[tmp12] = tmp15;
				}
				HX_STACK_LINE(225)
				Array< ::Dynamic > tmp11 = this->bodies;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(225)
				tmp11->pop().StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();
				HX_STACK_LINE(226)
				bool tmp12 = this->active;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(226)
				if ((tmp12)){
					HX_STACK_LINE(226)
					::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(226)
					::zpp_nape::space::ZPP_Space tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(226)
					tmp13 = (tmp15 != null());
				}
				else{
					HX_STACK_LINE(226)
					tmp13 = false;
				}
				HX_STACK_LINE(226)
				if ((tmp13)){
					HX_STACK_LINE(227)
					bool tmp14 = (b != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					if ((tmp14)){
						HX_STACK_LINE(227)
						b->constraints->remove(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			HX_STACK_LINE(230)
			match = x;
			HX_STACK_LINE(231)
			break;
		}
		HX_STACK_LINE(233)
		(i)++;
	}
	HX_STACK_LINE(235)
	bool tmp3 = (match != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(235)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,remBody,return )

::nape::geom::Vec3 ZPP_UserConstraint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","bodyImpulse",0x8cbdacc2,"zpp_nape.constraint.ZPP_UserConstraint.bodyImpulse","zpp_nape/constraint/UserConstraint.hx",237,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			if ((tmp2)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(238)
			Array< Float > tmp4 = this->J;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			Array< Float > tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			Float tmp8 = tmp6->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			tmp4[tmp5] = tmp8;
		}
	}
	HX_STACK_LINE(239)
	::nape::geom::Vec3 tmp = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::nape::geom::Vec3 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	bool tmp1 = this->stepped;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	if ((tmp1)){
		HX_STACK_LINE(240)
		::nape::constraint::UserConstraint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		Array< Float > tmp3 = this->J;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		::nape::phys::Body tmp4 = b->outer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		::nape::geom::Vec3 tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		tmp2->__impulse(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(241)
	::nape::geom::Vec3 tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bodyImpulse,return )

Void ZPP_UserConstraint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","activeBodies",0x05acf077,"zpp_nape.constraint.ZPP_UserConstraint.activeBodies","zpp_nape/constraint/UserConstraint.hx",244,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(244)
		while((true)){
			HX_STACK_LINE(244)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			if ((tmp2)){
				HX_STACK_LINE(244)
				break;
			}
			HX_STACK_LINE(244)
			::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			::zpp_nape::constraint::ZPP_UserBody b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(244)
			++(_g);
			HX_STACK_LINE(245)
			bool tmp4 = (b->body != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(245)
			if ((tmp4)){
				HX_STACK_LINE(245)
				::zpp_nape::util::ZNPList_ZPP_Constraint tmp5 = b->body->constraints;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(245)
				tmp5->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","inactiveBodies",0x5295961c,"zpp_nape.constraint.ZPP_UserConstraint.inactiveBodies","zpp_nape/constraint/UserConstraint.hx",249,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			if ((tmp2)){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_UserBody b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(250)
			bool tmp4 = (b->body != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			if ((tmp4)){
				HX_STACK_LINE(250)
				::zpp_nape::util::ZNPList_ZPP_Constraint tmp5 = b->body->constraints;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				tmp5->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_UserConstraint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","copy",0xf467c946,"zpp_nape.constraint.ZPP_UserConstraint.copy","zpp_nape/constraint/UserConstraint.hx",254,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint tmp1 = tmp->__copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	::nape::constraint::UserConstraint tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	this->copyto(tmp2);
	HX_STACK_LINE(257)
	HX_STACK_DO_THROW(HX_HCSTRING("not done yet","\x37","\x63","\x5d","\x38"));
	HX_STACK_LINE(258)
	::nape::constraint::UserConstraint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	return tmp3;
}


Void ZPP_UserConstraint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","validate",0xf7ab7aa7,"zpp_nape.constraint.ZPP_UserConstraint.validate","zpp_nape/constraint/UserConstraint.hx",295,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				if ((tmp2)){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(296)
				::zpp_nape::constraint::ZPP_UserBody b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(296)
				++(_g);
				HX_STACK_LINE(296)
				::zpp_nape::space::ZPP_Space tmp4 = b->body->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				::zpp_nape::space::ZPP_Space tmp5 = this->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(296)
				if ((tmp6)){
					HX_STACK_LINE(296)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same sapce to which the constraint has been assigned","\xe6","\xbc","\x3b","\x9a"));
				}
			}
		}
		HX_STACK_LINE(297)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		tmp->__validate();
	}
return null();
}


Void ZPP_UserConstraint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","wake_connected",0x03addc7f,"zpp_nape.constraint.ZPP_UserConstraint.wake_connected","zpp_nape/constraint/UserConstraint.hx",300,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(300)
		Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(300)
		while((true)){
			HX_STACK_LINE(300)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			if ((tmp2)){
				HX_STACK_LINE(300)
				break;
			}
			HX_STACK_LINE(300)
			::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			::zpp_nape::constraint::ZPP_UserBody b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(300)
			++(_g);
			HX_STACK_LINE(301)
			int tmp4 = b->body->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			if ((tmp6)){
				HX_STACK_LINE(301)
				b->body->wake();
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","forest",0xe936e0ae,"zpp_nape.constraint.ZPP_UserConstraint.forest","zpp_nape/constraint/UserConstraint.hx",305,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			if ((tmp2)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			::zpp_nape::constraint::ZPP_UserBody b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(306)
			int tmp4 = b->body->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			if ((tmp6)){
				HX_STACK_LINE(307)
				::zpp_nape::space::ZPP_Component tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp8 = b->body->component;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp9 = b->body->component;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(308)
					::zpp_nape::space::ZPP_Component tmp10 = tmp9->parent;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(308)
					bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(308)
					if ((tmp11)){
						HX_STACK_LINE(308)
						tmp7 = b->body->component;
					}
					else{
						HX_STACK_LINE(310)
						::zpp_nape::space::ZPP_Component tmp12 = b->body->component;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(310)
						::zpp_nape::space::ZPP_Component obj = tmp12;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(311)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							bool tmp13 = (obj != obj->parent);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(312)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(312)
							if ((tmp14)){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(313)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(314)
							obj->parent = stack;
							HX_STACK_LINE(315)
							stack = obj;
							HX_STACK_LINE(316)
							obj = nxt;
						}
						HX_STACK_LINE(318)
						while((true)){
							HX_STACK_LINE(318)
							bool tmp13 = (stack != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(318)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(318)
							if ((tmp14)){
								HX_STACK_LINE(318)
								break;
							}
							HX_STACK_LINE(319)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(320)
							stack->parent = obj;
							HX_STACK_LINE(321)
							stack = nxt;
						}
						HX_STACK_LINE(323)
						tmp7 = obj;
					}
				}
				HX_STACK_LINE(307)
				::zpp_nape::space::ZPP_Component xr = tmp7;		HX_STACK_VAR(xr,"xr");
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp9 = this->component;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(327)
					::zpp_nape::space::ZPP_Component tmp11 = tmp10->parent;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(327)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(327)
					if ((tmp12)){
						HX_STACK_LINE(327)
						tmp8 = this->component;
					}
					else{
						HX_STACK_LINE(329)
						::zpp_nape::space::ZPP_Component tmp13 = this->component;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(329)
						::zpp_nape::space::ZPP_Component obj = tmp13;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(330)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(331)
						while((true)){
							HX_STACK_LINE(331)
							bool tmp14 = (obj != obj->parent);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(331)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(331)
							if ((tmp15)){
								HX_STACK_LINE(331)
								break;
							}
							HX_STACK_LINE(332)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(333)
							obj->parent = stack;
							HX_STACK_LINE(334)
							stack = obj;
							HX_STACK_LINE(335)
							obj = nxt;
						}
						HX_STACK_LINE(337)
						while((true)){
							HX_STACK_LINE(337)
							bool tmp14 = (stack != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(337)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(337)
							if ((tmp15)){
								HX_STACK_LINE(337)
								break;
							}
							HX_STACK_LINE(338)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(339)
							stack->parent = obj;
							HX_STACK_LINE(340)
							stack = nxt;
						}
						HX_STACK_LINE(342)
						tmp8 = obj;
					}
				}
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Component yr = tmp8;		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(345)
				bool tmp9 = (xr != yr);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(345)
				if ((tmp9)){
					HX_STACK_LINE(346)
					bool tmp10 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(346)
					if ((tmp10)){
						HX_STACK_LINE(346)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(347)
						bool tmp11 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(347)
						if ((tmp11)){
							HX_STACK_LINE(347)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(349)
							yr->parent = xr;
							HX_STACK_LINE(350)
							(xr->rank)++;
						}
					}
				}
			}
		}
	}
return null();
}


bool ZPP_UserConstraint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","pair_exists",0x9673a130,"zpp_nape.constraint.ZPP_UserConstraint.pair_exists","zpp_nape/constraint/UserConstraint.hx",356,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(357)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	int bl = tmp2;		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp3 = (_g < bl);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(359)
			if ((tmp4)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(359)
			int bi = tmp5;		HX_STACK_VAR(bi,"bi");
			HX_STACK_LINE(360)
			Array< ::Dynamic > tmp6 = this->bodies;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			int tmp7 = bi;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(360)
			::zpp_nape::constraint::ZPP_UserBody tmp8 = tmp6->__get(tmp7).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(360)
			::zpp_nape::phys::ZPP_Body b = tmp8->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				int tmp9 = (bi + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(361)
				int _g1 = tmp9;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(361)
				while((true)){
					HX_STACK_LINE(361)
					bool tmp10 = (_g1 < bl);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(361)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(361)
					if ((tmp11)){
						HX_STACK_LINE(361)
						break;
					}
					HX_STACK_LINE(361)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(361)
					int ci = tmp12;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(362)
					Array< ::Dynamic > tmp13 = this->bodies;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(362)
					int tmp14 = ci;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(362)
					::zpp_nape::constraint::ZPP_UserBody tmp15 = tmp13->__get(tmp14).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(362)
					::zpp_nape::phys::ZPP_Body c = tmp15->body;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(363)
					bool tmp16 = (b->id == id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(363)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(363)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(363)
					if ((tmp17)){
						HX_STACK_LINE(363)
						tmp18 = (c->id == di);
					}
					else{
						HX_STACK_LINE(363)
						tmp18 = false;
					}
					HX_STACK_LINE(363)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(363)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(363)
					if ((tmp19)){
						HX_STACK_LINE(363)
						bool tmp21 = (b->id == di);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(363)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(363)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(363)
						if ((tmp23)){
							HX_STACK_LINE(363)
							tmp20 = (c->id == id);
						}
						else{
							HX_STACK_LINE(363)
							tmp20 = false;
						}
					}
					else{
						HX_STACK_LINE(363)
						tmp20 = true;
					}
					HX_STACK_LINE(363)
					if ((tmp20)){
						HX_STACK_LINE(364)
						ret = true;
						HX_STACK_LINE(365)
						break;
					}
				}
			}
			HX_STACK_LINE(368)
			bool tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(368)
			if ((tmp9)){
				HX_STACK_LINE(368)
				break;
			}
		}
	}
	HX_STACK_LINE(370)
	bool tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	return tmp3;
}


Void ZPP_UserConstraint_obj::broken( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","broken",0x08060a26,"zpp_nape.constraint.ZPP_UserConstraint.broken","zpp_nape/constraint/UserConstraint.hx",372,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(373)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		tmp->__broken();
	}
return null();
}


Void ZPP_UserConstraint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","clearcache",0x768479e6,"zpp_nape.constraint.ZPP_UserConstraint.clearcache","zpp_nape/constraint/UserConstraint.hx",375,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(376)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			while((true)){
				HX_STACK_LINE(376)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(376)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(376)
				if ((tmp2)){
					HX_STACK_LINE(376)
					break;
				}
				HX_STACK_LINE(376)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(376)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(376)
				Array< Float > tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(376)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(376)
				tmp4[tmp5] = ((Float)0.0);
			}
		}
		HX_STACK_LINE(377)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


Float ZPP_UserConstraint_obj::lsq( Array< Float > v){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","lsq",0x54ece799,"zpp_nape.constraint.ZPP_UserConstraint.lsq","zpp_nape/constraint/UserConstraint.hx",379,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(380)
	Float sum = ((Float)0.0);		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			if ((tmp2)){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(381)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(381)
			Float tmp4 = v->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			Float tmp5 = v->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			hx::AddEq(sum,tmp6);
		}
	}
	HX_STACK_LINE(382)
	Float tmp = sum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,lsq,return )

Void ZPP_UserConstraint_obj::_clamp( Array< Float > v,Float max){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","_clamp",0x2fee0e0d,"zpp_nape.constraint.ZPP_UserConstraint._clamp","zpp_nape/constraint/UserConstraint.hx",384,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(385)
		Array< Float > tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		Float tmp1 = this->lsq(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		Float x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(386)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		Float tmp3 = (max * max);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(386)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		if ((tmp4)){
			HX_STACK_LINE(387)
			Float tmp5 = max;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			Float scale = tmp8;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(388)
				int tmp9 = this->dim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(388)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(388)
				while((true)){
					HX_STACK_LINE(388)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(388)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(388)
					if ((tmp11)){
						HX_STACK_LINE(388)
						break;
					}
					HX_STACK_LINE(388)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(388)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(388)
					Float tmp13 = scale;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(388)
					hx::MultEq(v[i],tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,_clamp,(void))

Array< Float > ZPP_UserConstraint_obj::solve( Array< Float > m){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","solve",0x1cce90ce,"zpp_nape.constraint.ZPP_UserConstraint.solve","zpp_nape/constraint/UserConstraint.hx",392,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(393)
	int ind = (int)0;		HX_STACK_VAR(ind,"ind");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(394)
		int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		while((true)){
			HX_STACK_LINE(394)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(394)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(394)
			if ((tmp2)){
				HX_STACK_LINE(394)
				break;
			}
			HX_STACK_LINE(394)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(394)
			int j = tmp3;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(395)
			Float sum = ((Float)0.0);		HX_STACK_VAR(sum,"sum");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(396)
				int tmp4 = (j - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(396)
				while((true)){
					HX_STACK_LINE(396)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(396)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(396)
					if ((tmp6)){
						HX_STACK_LINE(396)
						break;
					}
					HX_STACK_LINE(396)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					int k = tmp7;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(396)
					Array< Float > tmp8 = this->L;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					int tmp9 = j;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(396)
					int tmp10 = this->dim;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(396)
					int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(396)
					int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(396)
					int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(396)
					Float tmp14 = tmp8->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(396)
					Array< Float > tmp15 = this->L;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(396)
					int tmp16 = j;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(396)
					int tmp17 = this->dim;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(396)
					int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(396)
					int tmp19 = k;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(396)
					int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(396)
					Float tmp21 = tmp15->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(396)
					Float tmp22 = (tmp14 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(396)
					hx::AddEq(sum,tmp22);
				}
			}
			HX_STACK_LINE(397)
			Array< Float > tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			int tmp5 = (ind)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			Float tmp6 = tmp4->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			Float tmp7 = sum;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(397)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(397)
			Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(397)
			Float rec = tmp9;		HX_STACK_VAR(rec,"rec");
			HX_STACK_LINE(398)
			Array< Float > tmp10 = this->L;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(398)
			int tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(398)
			int tmp12 = this->dim;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(398)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			Float tmp16 = rec;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(398)
			tmp10[tmp15] = tmp16;
			HX_STACK_LINE(399)
			bool tmp17 = (rec != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(399)
			if ((tmp17)){
				HX_STACK_LINE(400)
				Float tmp18 = (Float(((Float)1.0)) / Float(rec));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(400)
				rec = tmp18;
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					int tmp19 = (j + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(401)
					int _g3 = tmp19;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(401)
					int tmp20 = this->dim;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(401)
					int _g2 = tmp20;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(401)
					while((true)){
						HX_STACK_LINE(401)
						bool tmp21 = (_g3 < _g2);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(401)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(401)
						if ((tmp22)){
							HX_STACK_LINE(401)
							break;
						}
						HX_STACK_LINE(401)
						int tmp23 = (_g3)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(401)
						int i = tmp23;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(402)
						Float sum1 = ((Float)0.0);		HX_STACK_VAR(sum1,"sum1");
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(403)
							int tmp24 = (j - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(403)
							int _g4 = tmp24;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(403)
							while((true)){
								HX_STACK_LINE(403)
								bool tmp25 = (_g5 < _g4);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(403)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(403)
								if ((tmp26)){
									HX_STACK_LINE(403)
									break;
								}
								HX_STACK_LINE(403)
								int tmp27 = (_g5)++;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(403)
								int k = tmp27;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(403)
								Array< Float > tmp28 = this->L;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(403)
								int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(403)
								int tmp30 = this->dim;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(403)
								int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(403)
								int tmp32 = k;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(403)
								int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(403)
								Float tmp34 = tmp28->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(403)
								Array< Float > tmp35 = this->L;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(403)
								int tmp36 = j;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(403)
								int tmp37 = this->dim;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(403)
								int tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(403)
								int tmp39 = k;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(403)
								int tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(403)
								Float tmp41 = tmp35->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(403)
								Float tmp42 = (tmp34 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(403)
								hx::AddEq(sum1,tmp42);
							}
						}
						HX_STACK_LINE(404)
						Array< Float > tmp24 = this->L;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(404)
						int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(404)
						int tmp26 = this->dim;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(404)
						int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(404)
						int tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(404)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(404)
						Float tmp30 = rec;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(404)
						Array< Float > tmp31 = m;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(404)
						int tmp32 = (ind)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(404)
						Float tmp33 = tmp31->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(404)
						Float tmp34 = sum1;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(404)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(404)
						Float tmp36 = (tmp30 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(404)
						tmp24[tmp29] = tmp36;
					}
				}
			}
			else{
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int tmp18 = (j + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(408)
					int _g3 = tmp18;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(408)
					int tmp19 = this->dim;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(408)
					int _g2 = tmp19;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(408)
					while((true)){
						HX_STACK_LINE(408)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(408)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(408)
						if ((tmp21)){
							HX_STACK_LINE(408)
							break;
						}
						HX_STACK_LINE(408)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(408)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(408)
						Array< Float > tmp23 = this->L;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(408)
						int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(408)
						int tmp25 = this->dim;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(408)
						int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(408)
						int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(408)
						int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(408)
						tmp23[tmp28] = ((Float)0.0);
					}
				}
				HX_STACK_LINE(409)
				int tmp18 = this->dim;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(409)
				int tmp19 = j;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(409)
				int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(409)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(409)
				hx::AddEq(ind,tmp21);
			}
		}
	}
	HX_STACK_LINE(412)
	Array< Float > tmp = this->L;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,solve,return )

Void ZPP_UserConstraint_obj::transform( Array< Float > L,Array< Float > x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","transform",0xc180523b,"zpp_nape.constraint.ZPP_UserConstraint.transform","zpp_nape/constraint/UserConstraint.hx",415,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(L,"L")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(416)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(416)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			while((true)){
				HX_STACK_LINE(416)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(416)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(416)
				if ((tmp2)){
					HX_STACK_LINE(416)
					break;
				}
				HX_STACK_LINE(416)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(417)
				Float tmp4 = x->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				Float sum = tmp4;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(418)
				Array< Float > tmp5 = L;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				int tmp7 = this->dim;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(418)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(418)
				int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				Float tmp11 = tmp5->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(418)
				Float lii = tmp11;		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(419)
				bool tmp12 = (lii != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(419)
				if ((tmp12)){
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(420)
						while((true)){
							HX_STACK_LINE(420)
							bool tmp13 = (_g2 < i);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(420)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(420)
							if ((tmp14)){
								HX_STACK_LINE(420)
								break;
							}
							HX_STACK_LINE(420)
							int tmp15 = (_g2)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(420)
							int k = tmp15;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(420)
							Array< Float > tmp16 = L;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(420)
							int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(420)
							int tmp18 = this->dim;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(420)
							int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(420)
							int tmp20 = k;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(420)
							int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(420)
							Float tmp22 = tmp16->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(420)
							Array< Float > tmp23 = this->y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(420)
							int tmp24 = k;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(420)
							Float tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(420)
							Float tmp26 = (tmp22 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(420)
							hx::SubEq(sum,tmp26);
						}
					}
					HX_STACK_LINE(421)
					Array< Float > tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(421)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(421)
					Float tmp15 = (Float(sum) / Float(lii));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					tmp13[tmp14] = tmp15;
				}
				else{
					HX_STACK_LINE(423)
					Array< Float > tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(423)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(423)
					tmp13[tmp14] = ((Float)0.0);
				}
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(425)
			int tmp = this->dim;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(425)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(425)
			while((true)){
				HX_STACK_LINE(425)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(425)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(425)
				if ((tmp2)){
					HX_STACK_LINE(425)
					break;
				}
				HX_STACK_LINE(425)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(425)
				int ix = tmp3;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(426)
				int tmp4 = this->dim;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(426)
				int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(426)
				int tmp6 = ix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(426)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(426)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(427)
				Array< Float > tmp8 = L;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				int tmp10 = this->dim;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(427)
				int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(427)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(427)
				int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(427)
				Float tmp14 = tmp8->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(427)
				Float lii = tmp14;		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(428)
				bool tmp15 = (lii != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(428)
				if ((tmp15)){
					HX_STACK_LINE(429)
					Array< Float > tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(429)
					int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(429)
					Float tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(429)
					Float sum = tmp18;		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						int tmp19 = (i + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(430)
						int _g3 = tmp19;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(430)
						int tmp20 = this->dim;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(430)
						int _g2 = tmp20;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(430)
						while((true)){
							HX_STACK_LINE(430)
							bool tmp21 = (_g3 < _g2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(430)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(430)
							if ((tmp22)){
								HX_STACK_LINE(430)
								break;
							}
							HX_STACK_LINE(430)
							int tmp23 = (_g3)++;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(430)
							int k = tmp23;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(430)
							Array< Float > tmp24 = L;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(430)
							int tmp25 = k;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(430)
							int tmp26 = this->dim;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(430)
							int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(430)
							int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(430)
							int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(430)
							Float tmp30 = tmp24->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(430)
							Float tmp31 = x->__get(k);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(430)
							Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(430)
							hx::SubEq(sum,tmp32);
						}
					}
					HX_STACK_LINE(431)
					Float tmp19 = (Float(sum) / Float(lii));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(431)
					x[i] = tmp19;
				}
				else{
					HX_STACK_LINE(433)
					x[i] = ((Float)0.0);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,transform,(void))

bool ZPP_UserConstraint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","preStep",0x719bc41e,"zpp_nape.constraint.ZPP_UserConstraint.preStep","zpp_nape/constraint/UserConstraint.hx",441,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(445)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(445)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	if ((tmp1)){
		HX_STACK_LINE(445)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(446)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(446)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(447)
	this->pre_dt = dt;
	HX_STACK_LINE(448)
	this->stepped = true;
	HX_STACK_LINE(449)
	::nape::constraint::UserConstraint tmp5 = this->outer_zn;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(449)
	tmp5->__prepare();
	HX_STACK_LINE(450)
	::nape::constraint::UserConstraint tmp6 = this->outer_zn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(450)
	Array< Float > tmp7 = this->Keff;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(450)
	tmp6->__eff_mass(tmp7);
	HX_STACK_LINE(451)
	Array< Float > tmp8 = this->Keff;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(451)
	Array< Float > tmp9 = this->solve(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(451)
	this->L = tmp9;
	HX_STACK_LINE(452)
	bool tmp10 = this->stiff;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(452)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(452)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(452)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(452)
	if ((tmp12)){
		HX_STACK_LINE(452)
		bool tmp14 = this->velonly;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(452)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(452)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(452)
		tmp13 = !(tmp16);
	}
	else{
		HX_STACK_LINE(452)
		tmp13 = false;
	}
	HX_STACK_LINE(452)
	if ((tmp13)){
		HX_STACK_LINE(453)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(454)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(455)
			Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(455)
			Float tmp16 = ((int)2 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(455)
			Float tmp17 = this->frequency;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(455)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(455)
			Float omega = tmp18;		HX_STACK_VAR(omega,"omega");
			HX_STACK_LINE(456)
			Float tmp19 = (dt * omega);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(456)
			Float tmp20 = this->damping;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(456)
			Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(456)
			Float tmp22 = (omega * dt);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(456)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(456)
			Float tmp24 = (tmp19 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(456)
			Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(456)
			this->gamma = tmp25;
			HX_STACK_LINE(457)
			Float tmp26 = this->gamma;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(457)
			Float tmp27 = ((int)1 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(457)
			Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(457)
			Float ig = tmp28;		HX_STACK_VAR(ig,"ig");
			HX_STACK_LINE(458)
			Float tmp29 = (dt * omega);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(458)
			Float tmp30 = omega;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(458)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(458)
			Float tmp32 = this->gamma;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(458)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(458)
			biasCoef = tmp33;
			HX_STACK_LINE(459)
			hx::MultEq(this->gamma,ig);
			HX_STACK_LINE(460)
			tmp14 = ig;
		}
		HX_STACK_LINE(454)
		this->soft = tmp14;
		HX_STACK_LINE(462)
		::nape::constraint::UserConstraint tmp15 = this->outer_zn;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(462)
		Array< Float > tmp16 = this->bias;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(462)
		tmp15->__position(tmp16);
		HX_STACK_LINE(463)
		bool tmp17 = this->breakUnderError;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(463)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(463)
		if ((tmp17)){
			HX_STACK_LINE(463)
			Array< Float > tmp19 = this->bias;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(463)
			Array< Float > tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(463)
			Array< Float > tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(463)
			Float tmp22 = this->lsq(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(463)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(463)
			Float tmp24 = this->maxError;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(463)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(463)
			Float tmp26 = this->maxError;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(463)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(463)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(463)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(463)
			tmp18 = (tmp23 > tmp29);
		}
		else{
			HX_STACK_LINE(463)
			tmp18 = false;
		}
		HX_STACK_LINE(463)
		if ((tmp18)){
			HX_STACK_LINE(463)
			return true;
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(464)
			int tmp19 = this->dim;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(464)
			int _g = tmp19;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			while((true)){
				HX_STACK_LINE(464)
				bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(464)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(464)
				if ((tmp21)){
					HX_STACK_LINE(464)
					break;
				}
				HX_STACK_LINE(464)
				int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(464)
				int i = tmp22;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(464)
				Array< Float > tmp23 = this->bias;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(464)
				int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(464)
				Float tmp25 = biasCoef;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(464)
				Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(464)
				hx::MultEq(tmp23[tmp24],tmp26);
			}
		}
		HX_STACK_LINE(465)
		Array< Float > tmp19 = this->bias;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(465)
		Float tmp20 = this->maxError;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(465)
		this->_clamp(tmp19,tmp20);
	}
	else{
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(468)
			int tmp14 = this->dim;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(468)
			int _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			while((true)){
				HX_STACK_LINE(468)
				bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				if ((tmp16)){
					HX_STACK_LINE(468)
					break;
				}
				HX_STACK_LINE(468)
				int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				int i = tmp17;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(468)
				Array< Float > tmp18 = this->bias;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(468)
				int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(468)
				tmp18[tmp19] = ((Float)0.0);
			}
		}
		HX_STACK_LINE(469)
		this->gamma = ((Float)0.0);
		HX_STACK_LINE(470)
		this->soft = ((Float)1.0);
	}
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(472)
		int tmp14 = this->dim;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(472)
		int _g = tmp14;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(472)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(472)
			if ((tmp16)){
				HX_STACK_LINE(472)
				break;
			}
			HX_STACK_LINE(472)
			int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(472)
			int i = tmp17;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(472)
			Array< Float > tmp18 = this->jAcc;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(472)
			int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(472)
			Float tmp20 = dtratio;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(472)
			hx::MultEq(tmp18[tmp19],tmp20);
		}
	}
	HX_STACK_LINE(473)
	Float tmp14 = this->maxForce;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(473)
	Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(473)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(473)
	this->jMax = tmp16;
	HX_STACK_LINE(474)
	return false;
}


Void ZPP_UserConstraint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","warmStart",0x66f04cac,"zpp_nape.constraint.ZPP_UserConstraint.warmStart","zpp_nape/constraint/UserConstraint.hx",478,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		Array< ::Dynamic > tmp = this->bodies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			if ((tmp2)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(478)
			::zpp_nape::constraint::ZPP_UserBody tmp3 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(478)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp3;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(478)
			++(_g);
			HX_STACK_LINE(479)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(480)
			::nape::constraint::UserConstraint tmp4 = this->outer_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			Array< Float > tmp5 = this->jAcc;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(480)
			::nape::phys::Body tmp6 = b->outer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(480)
			::nape::geom::Vec3 tmp7 = this->vec3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(480)
			tmp4->__impulse(tmp5,tmp6,tmp7);
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(482)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(491)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					::nape::geom::Vec3 tmp9 = this->vec3;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(491)
					::nape::geom::Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(491)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(491)
						if ((tmp10)){
							HX_STACK_LINE(491)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(491)
							tmp11 = false;
						}
						HX_STACK_LINE(491)
						if ((tmp11)){
							HX_STACK_LINE(491)
							::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(491)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(491)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(491)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(491)
						if ((tmp10)){
							HX_STACK_LINE(491)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(491)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(491)
				Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(491)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(491)
				hx::AddEq(b->velx,tmp10);
				HX_STACK_LINE(492)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::nape::geom::Vec3 tmp12 = this->vec3;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(492)
					::nape::geom::Vec3 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(492)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(492)
						if ((tmp13)){
							HX_STACK_LINE(492)
							tmp14 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(492)
							tmp14 = false;
						}
						HX_STACK_LINE(492)
						if ((tmp14)){
							HX_STACK_LINE(492)
							::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(492)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(492)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(492)
						bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(492)
						if ((tmp13)){
							HX_STACK_LINE(492)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(492)
					tmp11 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(492)
				Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(492)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(492)
				hx::AddEq(b->vely,tmp13);
			}
			HX_STACK_LINE(494)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::nape::geom::Vec3 tmp9 = this->vec3;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(494)
				::nape::geom::Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(494)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(494)
					if ((tmp10)){
						HX_STACK_LINE(494)
						tmp11 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(494)
						tmp11 = false;
					}
					HX_STACK_LINE(494)
					if ((tmp11)){
						HX_STACK_LINE(494)
						::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(494)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(494)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(494)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(494)
					if ((tmp10)){
						HX_STACK_LINE(494)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(494)
				tmp8 = _this->zpp_inner->z;
			}
			HX_STACK_LINE(494)
			Float tmp9 = b->iinertia;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(494)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(494)
			hx::AddEq(b->angvel,tmp10);
		}
	}
return null();
}


bool ZPP_UserConstraint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","applyImpulseVel",0x6f8bf1c5,"zpp_nape.constraint.ZPP_UserConstraint.applyImpulseVel","zpp_nape/constraint/UserConstraint.hx",499,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	Array< Float > tmp1 = this->J;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	tmp->__velocity(tmp1);
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(501)
		int tmp2 = this->dim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		while((true)){
			HX_STACK_LINE(501)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(501)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(501)
			if ((tmp4)){
				HX_STACK_LINE(501)
				break;
			}
			HX_STACK_LINE(501)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(501)
			Array< Float > tmp6 = this->J;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			Array< Float > tmp8 = this->bias;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			Float tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(501)
			Array< Float > tmp11 = this->J;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(501)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(501)
			Float tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(501)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(501)
			tmp6[tmp7] = tmp14;
		}
	}
	HX_STACK_LINE(502)
	Array< Float > tmp2 = this->L;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(502)
	Array< Float > tmp3 = this->J;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(502)
	this->transform(tmp2,tmp3);
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(503)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(503)
		int tmp4 = this->dim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		int _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(503)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(503)
			if ((tmp6)){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(503)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(504)
			Array< Float > tmp8 = this->jOld;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(504)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(504)
			Array< Float > tmp10 = this->jAcc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(504)
			int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(504)
			Float tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(504)
			tmp8[tmp9] = tmp12;
			HX_STACK_LINE(505)
			Array< Float > tmp13 = this->jAcc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(505)
			int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(505)
			Array< Float > tmp15 = this->J;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(505)
			int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(505)
			Array< Float > tmp17 = this->J;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(505)
			int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(505)
			Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(505)
			Float tmp20 = this->soft;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(505)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(505)
			Array< Float > tmp22 = this->jAcc;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(505)
			int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(505)
			Float tmp24 = tmp22->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(505)
			Float tmp25 = this->gamma;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(505)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(505)
			Float tmp27 = (tmp21 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(505)
			Float tmp28 = tmp15[tmp16] = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(505)
			hx::AddEq(tmp13[tmp14],tmp28);
		}
	}
	HX_STACK_LINE(507)
	::nape::constraint::UserConstraint tmp4 = this->outer_zn;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(507)
	Array< Float > tmp5 = this->jAcc;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(507)
	tmp4->__clamp(tmp5);
	HX_STACK_LINE(508)
	bool tmp6 = this->breakUnderForce;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(508)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(508)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(508)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(508)
	if ((tmp8)){
		HX_STACK_LINE(508)
		bool tmp10 = this->stiff;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(508)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(508)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(508)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(508)
		tmp9 = !(tmp14);
	}
	else{
		HX_STACK_LINE(508)
		tmp9 = true;
	}
	HX_STACK_LINE(508)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(508)
	if ((tmp9)){
		HX_STACK_LINE(508)
		Array< Float > tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		Array< Float > tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(508)
		Array< Float > tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(508)
		Float tmp14 = this->lsq(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(508)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(508)
		Float tmp16 = this->jMax;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(508)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(508)
		Float tmp18 = this->jMax;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(508)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(508)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(508)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(508)
		tmp10 = (tmp15 > tmp21);
	}
	else{
		HX_STACK_LINE(508)
		tmp10 = false;
	}
	HX_STACK_LINE(508)
	if ((tmp10)){
		HX_STACK_LINE(509)
		bool tmp11 = this->breakUnderForce;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(509)
		if ((tmp11)){
			HX_STACK_LINE(509)
			return true;
		}
		else{
			HX_STACK_LINE(510)
			bool tmp12 = this->stiff;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(510)
			if ((tmp13)){
				HX_STACK_LINE(510)
				Array< Float > tmp14 = this->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(510)
				Float tmp15 = this->jMax;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(510)
				this->_clamp(tmp14,tmp15);
			}
		}
	}
	HX_STACK_LINE(512)
	{
		HX_STACK_LINE(512)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(512)
		int tmp11 = this->dim;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(512)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		while((true)){
			HX_STACK_LINE(512)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(512)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(512)
			if ((tmp13)){
				HX_STACK_LINE(512)
				break;
			}
			HX_STACK_LINE(512)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(512)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(512)
			Array< Float > tmp15 = this->J;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(512)
			int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(512)
			Array< Float > tmp17 = this->jAcc;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(512)
			int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(512)
			Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(512)
			Array< Float > tmp20 = this->jOld;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(512)
			int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(512)
			Float tmp22 = tmp20->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(512)
			Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(512)
			tmp15[tmp16] = tmp23;
		}
	}
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		Array< ::Dynamic > tmp11 = this->bodies;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(513)
		Array< ::Dynamic > _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(513)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(513)
			if ((tmp13)){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(513)
			::zpp_nape::constraint::ZPP_UserBody tmp14 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(513)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp14;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(513)
			++(_g);
			HX_STACK_LINE(514)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(515)
			::nape::constraint::UserConstraint tmp15 = this->outer_zn;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(515)
			Array< Float > tmp16 = this->J;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(515)
			::nape::phys::Body tmp17 = b->outer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(515)
			::nape::geom::Vec3 tmp18 = this->vec3;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(515)
			tmp15->__impulse(tmp16,tmp17,tmp18);
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(517)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(526)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					::nape::geom::Vec3 tmp20 = this->vec3;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(526)
					::nape::geom::Vec3 _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						bool tmp21 = (_this != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(526)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(526)
						if ((tmp21)){
							HX_STACK_LINE(526)
							tmp22 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(526)
							tmp22 = false;
						}
						HX_STACK_LINE(526)
						if ((tmp22)){
							HX_STACK_LINE(526)
							::String tmp23 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(526)
							::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(526)
							HX_STACK_DO_THROW(tmp24);
						}
					}
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(526)
						bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(526)
						if ((tmp21)){
							HX_STACK_LINE(526)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(526)
					tmp19 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(526)
				Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(526)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(526)
				hx::AddEq(b->velx,tmp21);
				HX_STACK_LINE(527)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					::nape::geom::Vec3 tmp23 = this->vec3;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(527)
					::nape::geom::Vec3 _this = tmp23;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						bool tmp24 = (_this != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(527)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(527)
						if ((tmp24)){
							HX_STACK_LINE(527)
							tmp25 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(527)
							tmp25 = false;
						}
						HX_STACK_LINE(527)
						if ((tmp25)){
							HX_STACK_LINE(527)
							::String tmp26 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(527)
							::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(527)
							HX_STACK_DO_THROW(tmp27);
						}
					}
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(527)
						bool tmp24 = (_this1->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(527)
						if ((tmp24)){
							HX_STACK_LINE(527)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(527)
					tmp22 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(527)
				Float tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(527)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(527)
				hx::AddEq(b->vely,tmp24);
			}
			HX_STACK_LINE(529)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(529)
				::nape::geom::Vec3 tmp20 = this->vec3;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(529)
				::nape::geom::Vec3 _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(529)
					bool tmp21 = (_this != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(529)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					if ((tmp21)){
						HX_STACK_LINE(529)
						tmp22 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(529)
						tmp22 = false;
					}
					HX_STACK_LINE(529)
					if ((tmp22)){
						HX_STACK_LINE(529)
						::String tmp23 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(529)
						::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(529)
						HX_STACK_DO_THROW(tmp24);
					}
				}
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(529)
					::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(529)
					bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(529)
					if ((tmp21)){
						HX_STACK_LINE(529)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(529)
				tmp19 = _this->zpp_inner->z;
			}
			HX_STACK_LINE(529)
			Float tmp20 = b->iinertia;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(529)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			hx::AddEq(b->angvel,tmp21);
		}
	}
	HX_STACK_LINE(531)
	return false;
}


bool ZPP_UserConstraint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","applyImpulsePos",0x6f876cfc,"zpp_nape.constraint.ZPP_UserConstraint.applyImpulsePos","zpp_nape/constraint/UserConstraint.hx",533,0x968ba4a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(534)
	bool tmp = this->velonly;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	if ((tmp)){
		HX_STACK_LINE(534)
		return false;
	}
	HX_STACK_LINE(535)
	::nape::constraint::UserConstraint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	tmp1->__prepare();
	HX_STACK_LINE(536)
	::nape::constraint::UserConstraint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(536)
	Array< Float > tmp3 = this->J;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(536)
	tmp2->__position(tmp3);
	HX_STACK_LINE(537)
	Array< Float > tmp4 = this->J;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(537)
	Float tmp5 = this->lsq(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(537)
	Float lj = tmp5;		HX_STACK_VAR(lj,"lj");
	HX_STACK_LINE(538)
	bool tmp6 = this->breakUnderError;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(538)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(538)
	if ((tmp6)){
		HX_STACK_LINE(538)
		Float tmp8 = lj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(538)
		Float tmp9 = this->maxError;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(538)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(538)
		Float tmp11 = this->maxError;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(538)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(538)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(538)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(538)
		tmp7 = (tmp8 > tmp14);
	}
	else{
		HX_STACK_LINE(538)
		tmp7 = false;
	}
	HX_STACK_LINE(538)
	if ((tmp7)){
		HX_STACK_LINE(538)
		return true;
	}
	else{
		HX_STACK_LINE(539)
		Float tmp8 = lj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		Float tmp9 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		Float tmp10 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(539)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(539)
		bool tmp12 = (tmp8 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(539)
		if ((tmp12)){
			HX_STACK_LINE(539)
			return false;
		}
	}
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(540)
		int tmp8 = this->dim;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(540)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		while((true)){
			HX_STACK_LINE(540)
			bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(540)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(540)
			if ((tmp10)){
				HX_STACK_LINE(540)
				break;
			}
			HX_STACK_LINE(540)
			int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(540)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(540)
			Array< Float > tmp12 = this->J;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(540)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(540)
			hx::MultEq(tmp12[tmp13],(int)-1);
		}
	}
	HX_STACK_LINE(541)
	::nape::constraint::UserConstraint tmp8 = this->outer_zn;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(541)
	Array< Float > tmp9 = this->Keff;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(541)
	tmp8->__eff_mass(tmp9);
	HX_STACK_LINE(542)
	Array< Float > tmp10 = this->Keff;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(542)
	Array< Float > tmp11 = this->solve(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(542)
	Array< Float > tmp12 = this->J;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(542)
	this->transform(tmp11,tmp12);
	HX_STACK_LINE(543)
	::nape::constraint::UserConstraint tmp13 = this->outer_zn;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(543)
	Array< Float > tmp14 = this->J;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(543)
	tmp13->__clamp(tmp14);
	HX_STACK_LINE(544)
	{
		HX_STACK_LINE(544)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		Array< ::Dynamic > tmp15 = this->bodies;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(544)
		Array< ::Dynamic > _g1 = tmp15;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(544)
		while((true)){
			HX_STACK_LINE(544)
			bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(544)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(544)
			if ((tmp17)){
				HX_STACK_LINE(544)
				break;
			}
			HX_STACK_LINE(544)
			::zpp_nape::constraint::ZPP_UserBody tmp18 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(544)
			::zpp_nape::constraint::ZPP_UserBody bs = tmp18;		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(544)
			++(_g);
			HX_STACK_LINE(545)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(546)
			::nape::constraint::UserConstraint tmp19 = this->outer_zn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(546)
			Array< Float > tmp20 = this->J;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(546)
			::nape::phys::Body tmp21 = b->outer;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(546)
			::nape::geom::Vec3 tmp22 = this->vec3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(546)
			tmp19->__impulse(tmp20,tmp21,tmp22);
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(548)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(557)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					::nape::geom::Vec3 tmp24 = this->vec3;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(557)
					::nape::geom::Vec3 _this = tmp24;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						bool tmp25 = (_this != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(557)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(557)
						if ((tmp25)){
							HX_STACK_LINE(557)
							tmp26 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(557)
							tmp26 = false;
						}
						HX_STACK_LINE(557)
						if ((tmp26)){
							HX_STACK_LINE(557)
							::String tmp27 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(557)
							::String tmp28 = (tmp27 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(557)
							HX_STACK_DO_THROW(tmp28);
						}
					}
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(557)
						bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(557)
						if ((tmp25)){
							HX_STACK_LINE(557)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(557)
					tmp23 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(557)
				Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(557)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(557)
				hx::AddEq(b->posx,tmp25);
				HX_STACK_LINE(558)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(558)
				{
					HX_STACK_LINE(558)
					::nape::geom::Vec3 tmp27 = this->vec3;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(558)
					::nape::geom::Vec3 _this = tmp27;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(558)
					{
						HX_STACK_LINE(558)
						bool tmp28 = (_this != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(558)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(558)
						if ((tmp28)){
							HX_STACK_LINE(558)
							tmp29 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(558)
							tmp29 = false;
						}
						HX_STACK_LINE(558)
						if ((tmp29)){
							HX_STACK_LINE(558)
							::String tmp30 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(558)
							::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(558)
							HX_STACK_DO_THROW(tmp31);
						}
					}
					HX_STACK_LINE(558)
					{
						HX_STACK_LINE(558)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(558)
						bool tmp28 = (_this1->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(558)
						if ((tmp28)){
							HX_STACK_LINE(558)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(558)
					tmp26 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(558)
				Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(558)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(558)
				hx::AddEq(b->posy,tmp28);
			}
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					::nape::geom::Vec3 tmp24 = this->vec3;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(560)
					::nape::geom::Vec3 _this = tmp24;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(560)
					bool tmp25 = (_this != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(560)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(560)
					if ((tmp25)){
						HX_STACK_LINE(560)
						tmp26 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(560)
						tmp26 = false;
					}
					HX_STACK_LINE(560)
					if ((tmp26)){
						HX_STACK_LINE(560)
						::String tmp27 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(560)
						::String tmp28 = (tmp27 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(tmp28);
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(560)
						bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(560)
						if ((tmp27)){
							HX_STACK_LINE(560)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(560)
					tmp23 = _this->zpp_inner->z;
				}
				HX_STACK_LINE(560)
				Float tmp24 = b->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(560)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(560)
				Float dr = tmp25;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(560)
				hx::AddEq(b->rot,dr);
				HX_STACK_LINE(560)
				Float tmp26 = (dr * dr);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(560)
				bool tmp27 = (tmp26 > ((Float)0.0001));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(560)
				if ((tmp27)){
					HX_STACK_LINE(560)
					Float tmp28 = b->rot;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(560)
					Float tmp29 = ::Math_obj::sin(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(560)
					b->axisx = tmp29;
					HX_STACK_LINE(560)
					Float tmp30 = b->rot;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(560)
					Float tmp31 = ::Math_obj::cos(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(560)
					b->axisy = tmp31;
					HX_STACK_LINE(560)
					Dynamic();
				}
				else{
					HX_STACK_LINE(560)
					Float tmp28 = (dr * dr);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(560)
					Float d2 = tmp28;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(560)
					Float tmp29 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(560)
					Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(560)
					Float p = tmp30;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(560)
					Float tmp31 = (d2 * d2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(560)
					Float tmp32 = (Float(tmp31) / Float((int)8));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(560)
					Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(560)
					Float m = tmp33;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(560)
					Float tmp34 = (p * b->axisx);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(560)
					Float tmp35 = (dr * b->axisy);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(560)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(560)
					Float tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(560)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(560)
					Float nx = tmp38;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(560)
					Float tmp39 = (p * b->axisy);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(560)
					Float tmp40 = (dr * b->axisx);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(560)
					Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(560)
					Float tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(560)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(560)
					b->axisy = tmp43;
					HX_STACK_LINE(560)
					b->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(562)
	return false;
}


Void ZPP_UserConstraint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_UserConstraint","draw",0xf5133995,"zpp_nape.constraint.ZPP_UserConstraint.draw","zpp_nape/constraint/UserConstraint.hx",564,0x968ba4a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(565)
		::nape::constraint::UserConstraint tmp = this->outer_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		::nape::util::Debug tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		tmp->__draw(tmp1);
	}
return null();
}



ZPP_UserConstraint_obj::ZPP_UserConstraint_obj()
{
}

void ZPP_UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserConstraint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(dim,"dim");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(L,"L");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(soft,"soft");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(velonly,"velonly");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(Keff,"Keff");
	HX_MARK_MEMBER_NAME(vec3,"vec3");
	HX_MARK_MEMBER_NAME(J,"J");
	HX_MARK_MEMBER_NAME(jOld,"jOld");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(dim,"dim");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(L,"L");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(soft,"soft");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(velonly,"velonly");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(Keff,"Keff");
	HX_VISIT_MEMBER_NAME(vec3,"vec3");
	HX_VISIT_MEMBER_NAME(J,"J");
	HX_VISIT_MEMBER_NAME(jOld,"jOld");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_UserConstraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { return dim; }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"soft") ) { return soft; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"Keff") ) { return Keff; }
		if (HX_FIELD_EQ(inName,"vec3") ) { return vec3; }
		if (HX_FIELD_EQ(inName,"jOld") ) { return jOld; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return bodies; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken_dyn(); }
		if (HX_FIELD_EQ(inName,"_clamp") ) { return _clamp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		if (HX_FIELD_EQ(inName,"remBody") ) { return remBody_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"velonly") ) { return velonly; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bindVec2_invalidate") ) { return bindVec2_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { dim=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soft") ) { soft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Keff") ) { Keff=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vec3") ) { vec3=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jOld") ) { jOld=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velonly") ) { velonly=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_UserConstraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"));
	outFields->push(HX_HCSTRING("bias","\x79","\xea","\x16","\x41"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	outFields->push(HX_HCSTRING("L","\x4c","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31"));
	outFields->push(HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e"));
	outFields->push(HX_HCSTRING("J","\x4a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::UserConstraint*/ ,(int)offsetof(ZPP_UserConstraint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ZPP_UserConstraint_obj,bodies),HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a")},
	{hx::fsInt,(int)offsetof(ZPP_UserConstraint_obj,dim),HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,bias),HX_HCSTRING("bias","\x79","\xea","\x16","\x41")},
	{hx::fsBool,(int)offsetof(ZPP_UserConstraint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,L),HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,soft),HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsBool,(int)offsetof(ZPP_UserConstraint_obj,velonly),HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05")},
	{hx::fsFloat,(int)offsetof(ZPP_UserConstraint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,Keff),HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(ZPP_UserConstraint_obj,vec3),HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,J),HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ZPP_UserConstraint_obj,jOld),HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("bindVec2_invalidate","\xbf","\x6e","\x04","\x93"),
	HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"),
	HX_HCSTRING("dim","\x48","\x3d","\x4c","\x00"),
	HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"),
	HX_HCSTRING("bias","\x79","\xea","\x16","\x41"),
	HX_HCSTRING("addBody","\x63","\xbd","\x58","\x7d"),
	HX_HCSTRING("remBody","\x1c","\x35","\x3c","\xd5"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("wake_connected","\xae","\xcf","\xdd","\x3d"),
	HX_HCSTRING("forest","\xdd","\x8c","\x88","\xfd"),
	HX_HCSTRING("pair_exists","\xa1","\x6a","\x58","\x69"),
	HX_HCSTRING("broken","\x55","\xb6","\x57","\x1c"),
	HX_HCSTRING("clearcache","\x95","\x69","\xf1","\x82"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("_clamp","\x3c","\xba","\x3f","\x44"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("solve","\x7f","\xbf","\xc5","\x80"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("velonly","\x49","\x5a","\xe9","\x05"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("Keff","\x7a","\xfd","\xdf","\x31"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("jOld","\x5d","\xee","\x4c","\x46"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_UserConstraint_obj::__mClass;

void ZPP_UserConstraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_UserConstraint","\x7d","\x3c","\x4e","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_UserConstraint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_UserConstraint_obj >;
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
} // end namespace constraint
