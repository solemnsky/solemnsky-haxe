#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_constraint_AngleJoint
#include <nape/constraint/AngleJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
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

Void ZPP_AngleJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","new",0xa49c0ade,"zpp_nape.constraint.ZPP_AngleJoint.new","zpp_nape/constraint/AngleJoint.hx",174,0x575b2617)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(244)
	this->stepped = false;
	HX_STACK_LINE(243)
	this->bias = ((Float)0.0);
	HX_STACK_LINE(242)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(241)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(240)
	this->jAcc = ((Float)0.0);
	HX_STACK_LINE(239)
	this->kMass = ((Float)0.0);
	HX_STACK_LINE(238)
	this->b2 = null();
	HX_STACK_LINE(237)
	this->b1 = null();
	HX_STACK_LINE(181)
	this->scale = ((Float)0.0);
	HX_STACK_LINE(180)
	this->equal = false;
	HX_STACK_LINE(179)
	this->slack = false;
	HX_STACK_LINE(178)
	this->jointMax = ((Float)0.0);
	HX_STACK_LINE(177)
	this->jointMin = ((Float)0.0);
	HX_STACK_LINE(176)
	this->ratio = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(293)
	super::__construct();
	HX_STACK_LINE(294)
	this->ratio = (int)1;
	HX_STACK_LINE(295)
	this->jAcc = (int)0;
	HX_STACK_LINE(296)
	this->slack = false;
	HX_STACK_LINE(297)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	this->jMax = tmp;
	HX_STACK_LINE(298)
	this->stepped = false;
}
;
	return null();
}

//ZPP_AngleJoint_obj::~ZPP_AngleJoint_obj() { }

Dynamic ZPP_AngleJoint_obj::__CreateEmpty() { return  new ZPP_AngleJoint_obj; }
hx::ObjectPtr< ZPP_AngleJoint_obj > ZPP_AngleJoint_obj::__new()
{  hx::ObjectPtr< ZPP_AngleJoint_obj > _result_ = new ZPP_AngleJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AngleJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AngleJoint_obj > _result_ = new ZPP_AngleJoint_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_AngleJoint_obj::is_slack( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","is_slack",0x891b1dbd,"zpp_nape.constraint.ZPP_AngleJoint.is_slack","zpp_nape/constraint/AngleJoint.hx",184,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		Float tmp = this->ratio;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		Float tmp2 = tmp1->rot;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Float tmp5 = tmp4->rot;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		Float C = tmp6;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(188)
		bool tmp7 = this->equal;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		if ((tmp7)){
			HX_STACK_LINE(189)
			Float tmp8 = this->jointMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			hx::SubEq(C,tmp8);
			HX_STACK_LINE(190)
			slack = false;
			HX_STACK_LINE(191)
			this->scale = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(194)
			Float tmp8 = C;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			Float tmp9 = this->jointMin;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			if ((tmp10)){
				HX_STACK_LINE(195)
				Float tmp11 = this->jointMin;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(195)
				Float tmp12 = C;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(195)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(195)
				C = tmp13;
				HX_STACK_LINE(196)
				this->scale = ((Float)-1.0);
				HX_STACK_LINE(197)
				slack = false;
			}
			else{
				HX_STACK_LINE(199)
				Float tmp11 = C;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(199)
				Float tmp12 = this->jointMax;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(199)
				bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(199)
				if ((tmp13)){
					HX_STACK_LINE(200)
					Float tmp14 = this->jointMax;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(200)
					hx::SubEq(C,tmp14);
					HX_STACK_LINE(201)
					this->scale = ((Float)1.0);
					HX_STACK_LINE(202)
					slack = false;
				}
				else{
					HX_STACK_LINE(205)
					this->scale = ((Float)0.0);
					HX_STACK_LINE(206)
					C = (int)0;
					HX_STACK_LINE(207)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(210)
		C;
	}
	HX_STACK_LINE(212)
	bool tmp = slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AngleJoint_obj,is_slack,return )

::nape::geom::Vec3 ZPP_AngleJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","bodyImpulse",0x10865eb1,"zpp_nape.constraint.ZPP_AngleJoint.bodyImpulse","zpp_nape/constraint/AngleJoint.hx",214,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(215)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	if ((tmp)){
		HX_STACK_LINE(216)
		::zpp_nape::phys::ZPP_Body tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		if ((tmp3)){
			HX_STACK_LINE(216)
			Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(216)
			Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(216)
			::nape::geom::Vec3 tmp8 = ::nape::geom::Vec3_obj::get((int)0,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			return tmp8;
		}
		else{
			HX_STACK_LINE(217)
			Float tmp4 = this->ratio;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			Float tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			::nape::geom::Vec3 tmp9 = ::nape::geom::Vec3_obj::get((int)0,(int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			return tmp9;
		}
	}
	else{
		HX_STACK_LINE(219)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		return tmp1;
	}
	HX_STACK_LINE(215)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AngleJoint_obj,bodyImpulse,return )

Void ZPP_AngleJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","activeBodies",0xd17fefa8,"zpp_nape.constraint.ZPP_AngleJoint.activeBodies","zpp_nape/constraint/AngleJoint.hx",221,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(223)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(223)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			if ((tmp1)){
				HX_STACK_LINE(223)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(223)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(225)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		if ((tmp2)){
			HX_STACK_LINE(226)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			if ((tmp4)){
				HX_STACK_LINE(226)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","inactiveBodies",0xf88b838d,"zpp_nape.constraint.ZPP_AngleJoint.inactiveBodies","zpp_nape/constraint/AngleJoint.hx",229,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(231)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(231)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			if ((tmp1)){
				HX_STACK_LINE(231)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		if ((tmp2)){
			HX_STACK_LINE(234)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			if ((tmp4)){
				HX_STACK_LINE(234)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_AngleJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","copy",0x5cafaf77,"zpp_nape.constraint.ZPP_AngleJoint.copy","zpp_nape/constraint/AngleJoint.hx",245,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(246)
	Float tmp = this->jointMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	Float tmp1 = this->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	Float tmp2 = this->ratio;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	::nape::constraint::AngleJoint ret = ::nape::constraint::AngleJoint_obj::__new(null(),null(),tmp,tmp1,tmp2);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(247)
	::nape::constraint::AngleJoint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(247)
	this->copyto(tmp3);
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		if ((tmp4)){
			HX_STACK_LINE(249)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(249)
			tmp5 = false;
		}
		HX_STACK_LINE(249)
		if ((tmp5)){
			HX_STACK_LINE(258)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(259)
				while((true)){
					HX_STACK_LINE(259)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					if ((tmp7)){
						HX_STACK_LINE(259)
						break;
					}
					HX_STACK_LINE(259)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(259)
					++(_g);
					HX_STACK_LINE(260)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(260)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(260)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(260)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(260)
					if ((tmp12)){
						HX_STACK_LINE(261)
						b = idc->bc;
						HX_STACK_LINE(262)
						break;
					}
				}
			}
			HX_STACK_LINE(265)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			if ((tmp6)){
				HX_STACK_LINE(265)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(266)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::AngleJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/AngleJoint.hx",266,0x575b2617)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(266)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(266)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(270)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		if ((tmp4)){
			HX_STACK_LINE(270)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(270)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(270)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(270)
			tmp5 = false;
		}
		HX_STACK_LINE(270)
		if ((tmp5)){
			HX_STACK_LINE(279)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(280)
				while((true)){
					HX_STACK_LINE(280)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(280)
					if ((tmp7)){
						HX_STACK_LINE(280)
						break;
					}
					HX_STACK_LINE(280)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(280)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(280)
					++(_g);
					HX_STACK_LINE(281)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					if ((tmp12)){
						HX_STACK_LINE(282)
						b = idc->bc;
						HX_STACK_LINE(283)
						break;
					}
				}
			}
			HX_STACK_LINE(286)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(286)
			if ((tmp6)){
				HX_STACK_LINE(286)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(287)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::AngleJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/AngleJoint.hx",287,0x575b2617)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(287)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(287)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(290)
	::nape::constraint::AngleJoint tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(290)
	return tmp4;
}


Void ZPP_AngleJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","validate",0xef80cd58,"zpp_nape.constraint.ZPP_AngleJoint.validate","zpp_nape/constraint/AngleJoint.hx",300,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(301)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(301)
			tmp3 = true;
		}
		HX_STACK_LINE(301)
		if ((tmp3)){
			HX_STACK_LINE(301)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint cannot be simulated null bodies","\xfe","\x18","\x41","\x78"));
		}
		HX_STACK_LINE(302)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(302)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		if ((tmp6)){
			HX_STACK_LINE(302)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint cannot be simulated with body1 == body2","\x60","\xe2","\xc2","\x00"));
		}
		HX_STACK_LINE(303)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(303)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(303)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(303)
		if ((tmp11)){
			HX_STACK_LINE(303)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(303)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(303)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(303)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(303)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(303)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(303)
			tmp12 = true;
		}
		HX_STACK_LINE(303)
		if ((tmp12)){
			HX_STACK_LINE(303)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(304)
		Float tmp13 = this->jointMin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(304)
		Float tmp14 = this->jointMax;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(304)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(304)
		if ((tmp15)){
			HX_STACK_LINE(304)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint must have jointMin <= jointMax","\x7d","\x6c","\xb7","\x43"));
		}
		HX_STACK_LINE(305)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(305)
		int tmp17 = tmp16->type;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(305)
		int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(305)
		bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(305)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(305)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(305)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(305)
		if ((tmp21)){
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(305)
			int tmp25 = tmp24->type;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(305)
			int tmp26 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(305)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(305)
			bool tmp28 = (tmp25 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(305)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(305)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(305)
			tmp22 = !(tmp30);
		}
		else{
			HX_STACK_LINE(305)
			tmp22 = false;
		}
		HX_STACK_LINE(305)
		if ((tmp22)){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic","\xcb","\xb3","\x6c","\xeb"));
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","wake_connected",0xa9a3c9f0,"zpp_nape.constraint.ZPP_AngleJoint.wake_connected","zpp_nape/constraint/AngleJoint.hx",307,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		if ((tmp1)){
			HX_STACK_LINE(308)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(308)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(308)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(308)
			tmp2 = false;
		}
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(308)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			tmp3->wake();
		}
		HX_STACK_LINE(309)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		if ((tmp4)){
			HX_STACK_LINE(309)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(309)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(309)
			tmp5 = false;
		}
		HX_STACK_LINE(309)
		if ((tmp5)){
			HX_STACK_LINE(309)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","forest",0xdfe9751f,"zpp_nape.constraint.ZPP_AngleJoint.forest","zpp_nape/constraint/AngleJoint.hx",311,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(313)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(314)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(314)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(314)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(314)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(314)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(314)
				if ((tmp9)){
					HX_STACK_LINE(314)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(314)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(316)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(316)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(317)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(318)
					while((true)){
						HX_STACK_LINE(318)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(318)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(318)
						if ((tmp12)){
							HX_STACK_LINE(318)
							break;
						}
						HX_STACK_LINE(319)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(320)
						obj->parent = stack;
						HX_STACK_LINE(321)
						stack = obj;
						HX_STACK_LINE(322)
						obj = nxt;
					}
					HX_STACK_LINE(324)
					while((true)){
						HX_STACK_LINE(324)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(324)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(324)
						if ((tmp12)){
							HX_STACK_LINE(324)
							break;
						}
						HX_STACK_LINE(325)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(326)
						stack->parent = obj;
						HX_STACK_LINE(327)
						stack = nxt;
					}
					HX_STACK_LINE(329)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(313)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(332)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			{
				HX_STACK_LINE(333)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(333)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(333)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(333)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(333)
				if ((tmp9)){
					HX_STACK_LINE(333)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(335)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(336)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(337)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(337)
						if ((tmp12)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(338)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(339)
						obj->parent = stack;
						HX_STACK_LINE(340)
						stack = obj;
						HX_STACK_LINE(341)
						obj = nxt;
					}
					HX_STACK_LINE(343)
					while((true)){
						HX_STACK_LINE(343)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(343)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(343)
						if ((tmp12)){
							HX_STACK_LINE(343)
							break;
						}
						HX_STACK_LINE(344)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(345)
						stack->parent = obj;
						HX_STACK_LINE(346)
						stack = nxt;
					}
					HX_STACK_LINE(348)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(332)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(351)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			if ((tmp6)){
				HX_STACK_LINE(352)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				if ((tmp7)){
					HX_STACK_LINE(352)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(353)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(353)
					if ((tmp8)){
						HX_STACK_LINE(353)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(355)
						yr->parent = xr;
						HX_STACK_LINE(356)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(360)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(360)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(360)
		if ((tmp7)){
			HX_STACK_LINE(361)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(362)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(362)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(362)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(362)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(362)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(362)
				if ((tmp13)){
					HX_STACK_LINE(362)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(362)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(364)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(364)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(365)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(366)
					while((true)){
						HX_STACK_LINE(366)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(366)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(366)
						if ((tmp16)){
							HX_STACK_LINE(366)
							break;
						}
						HX_STACK_LINE(367)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(368)
						obj->parent = stack;
						HX_STACK_LINE(369)
						stack = obj;
						HX_STACK_LINE(370)
						obj = nxt;
					}
					HX_STACK_LINE(372)
					while((true)){
						HX_STACK_LINE(372)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(372)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(372)
						if ((tmp16)){
							HX_STACK_LINE(372)
							break;
						}
						HX_STACK_LINE(373)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(374)
						stack->parent = obj;
						HX_STACK_LINE(375)
						stack = nxt;
					}
					HX_STACK_LINE(377)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(361)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(380)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(381)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(381)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(381)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(381)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(381)
				if ((tmp13)){
					HX_STACK_LINE(381)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(383)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(383)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(384)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(385)
					while((true)){
						HX_STACK_LINE(385)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(385)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(385)
						if ((tmp16)){
							HX_STACK_LINE(385)
							break;
						}
						HX_STACK_LINE(386)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(387)
						obj->parent = stack;
						HX_STACK_LINE(388)
						stack = obj;
						HX_STACK_LINE(389)
						obj = nxt;
					}
					HX_STACK_LINE(391)
					while((true)){
						HX_STACK_LINE(391)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(391)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(391)
						if ((tmp16)){
							HX_STACK_LINE(391)
							break;
						}
						HX_STACK_LINE(392)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(393)
						stack->parent = obj;
						HX_STACK_LINE(394)
						stack = nxt;
					}
					HX_STACK_LINE(396)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(380)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(399)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(399)
			if ((tmp10)){
				HX_STACK_LINE(400)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(400)
				if ((tmp11)){
					HX_STACK_LINE(400)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(401)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(401)
					if ((tmp12)){
						HX_STACK_LINE(401)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(403)
						yr->parent = xr;
						HX_STACK_LINE(404)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_AngleJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","pair_exists",0x1a3c531f,"zpp_nape.constraint.ZPP_AngleJoint.pair_exists","zpp_nape/constraint/AngleJoint.hx",409,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(410)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(410)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(410)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(410)
	if ((tmp4)){
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(410)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(410)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(410)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(410)
		tmp5 = false;
	}
	HX_STACK_LINE(410)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(410)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(410)
	if ((tmp6)){
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(410)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(410)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(410)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(410)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(410)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(410)
		if ((tmp14)){
			HX_STACK_LINE(410)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(410)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(410)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(410)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(410)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(410)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(410)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(410)
		tmp7 = true;
	}
	HX_STACK_LINE(410)
	return tmp7;
}


Void ZPP_AngleJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","clearcache",0x0c589ad7,"zpp_nape.constraint.ZPP_AngleJoint.clearcache","zpp_nape/constraint/AngleJoint.hx",412,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		this->jAcc = (int)0;
		HX_STACK_LINE(414)
		this->pre_dt = ((Float)-1.0);
		HX_STACK_LINE(415)
		this->slack = false;
	}
return null();
}


bool ZPP_AngleJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","preStep",0x572b128d,"zpp_nape.constraint.ZPP_AngleJoint.preStep","zpp_nape/constraint/AngleJoint.hx",417,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(418)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(418)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(419)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(419)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(419)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(420)
	this->pre_dt = dt;
	HX_STACK_LINE(421)
	this->stepped = true;
	HX_STACK_LINE(422)
	Float tmp5 = this->jointMin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(422)
	Float tmp6 = this->jointMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(422)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(422)
	this->equal = tmp7;
	HX_STACK_LINE(423)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(424)
		Float tmp9 = this->ratio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(424)
		Float tmp11 = tmp10->rot;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(424)
		Float tmp14 = tmp13->rot;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(424)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(424)
		Float C = tmp15;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(425)
		bool tmp16 = this->equal;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(425)
		if ((tmp16)){
			HX_STACK_LINE(426)
			Float tmp17 = this->jointMax;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			hx::SubEq(C,tmp17);
			HX_STACK_LINE(427)
			this->slack = false;
			HX_STACK_LINE(428)
			this->scale = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(431)
			Float tmp17 = C;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(431)
			Float tmp18 = this->jointMin;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(431)
			bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(431)
			if ((tmp19)){
				HX_STACK_LINE(432)
				Float tmp20 = this->jointMin;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(432)
				Float tmp21 = C;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(432)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(432)
				C = tmp22;
				HX_STACK_LINE(433)
				this->scale = ((Float)-1.0);
				HX_STACK_LINE(434)
				this->slack = false;
			}
			else{
				HX_STACK_LINE(436)
				Float tmp20 = C;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(436)
				Float tmp21 = this->jointMax;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(436)
				bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(436)
				if ((tmp22)){
					HX_STACK_LINE(437)
					Float tmp23 = this->jointMax;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(437)
					hx::SubEq(C,tmp23);
					HX_STACK_LINE(438)
					this->scale = ((Float)1.0);
					HX_STACK_LINE(439)
					this->slack = false;
				}
				else{
					HX_STACK_LINE(442)
					this->scale = ((Float)0.0);
					HX_STACK_LINE(443)
					C = (int)0;
					HX_STACK_LINE(444)
					this->slack = true;
				}
			}
		}
		HX_STACK_LINE(447)
		tmp8 = C;
	}
	HX_STACK_LINE(423)
	Float C = tmp8;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(449)
	bool tmp9 = this->slack;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(449)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(449)
	if ((tmp10)){
		HX_STACK_LINE(450)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(451)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(451)
			Float tmp13 = tmp12->sinertia;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(451)
			Float tmp14 = this->ratio;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(451)
			Float tmp15 = this->ratio;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(451)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(451)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(451)
			Float tmp18 = tmp17->sinertia;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(451)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(451)
			tmp11 = (tmp13 + tmp19);
		}
		HX_STACK_LINE(450)
		this->kMass = tmp11;
		HX_STACK_LINE(453)
		Float tmp12 = this->kMass;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(453)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(453)
		if ((tmp13)){
			HX_STACK_LINE(453)
			Float tmp14 = this->kMass;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(453)
			Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(453)
			this->kMass = tmp15;
		}
		else{
			HX_STACK_LINE(454)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(455)
		bool tmp14 = this->stiff;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(455)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(455)
		if ((tmp15)){
			HX_STACK_LINE(456)
			bool tmp16 = this->breakUnderError;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(456)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(456)
			if ((tmp16)){
				HX_STACK_LINE(456)
				Float tmp18 = (C * C);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(456)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(456)
				Float tmp20 = this->maxError;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(456)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(456)
				Float tmp22 = this->maxError;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(456)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(456)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(456)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(456)
				tmp17 = (tmp19 > tmp25);
			}
			else{
				HX_STACK_LINE(456)
				tmp17 = false;
			}
			HX_STACK_LINE(456)
			if ((tmp17)){
				HX_STACK_LINE(456)
				return true;
			}
			HX_STACK_LINE(457)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			HX_STACK_LINE(458)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(459)
				Float tmp19 = ::Math_obj::PI;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(459)
				Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(459)
				Float tmp21 = this->frequency;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(459)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(459)
				Float omega = tmp22;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(460)
				Float tmp23 = (dt * omega);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(460)
				Float tmp24 = this->damping;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(460)
				Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(460)
				Float tmp26 = (omega * dt);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(460)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(460)
				Float tmp28 = (tmp23 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(460)
				Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(460)
				this->gamma = tmp29;
				HX_STACK_LINE(461)
				Float tmp30 = this->gamma;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(461)
				Float tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(461)
				Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(461)
				Float ig = tmp32;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(462)
				Float tmp33 = (dt * omega);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(462)
				Float tmp34 = omega;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(462)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(462)
				Float tmp36 = this->gamma;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(462)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(462)
				biasCoef = tmp37;
				HX_STACK_LINE(463)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(464)
				tmp18 = ig;
			}
			HX_STACK_LINE(458)
			hx::MultEq(this->kMass,tmp18);
			HX_STACK_LINE(466)
			Float tmp19 = C;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(466)
			Float tmp21 = biasCoef;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(466)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(466)
			this->bias = tmp22;
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(468)
				Float tmp23 = this->bias;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(468)
				Float tmp24 = this->maxError;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(468)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(468)
				bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(468)
				if ((tmp26)){
					HX_STACK_LINE(468)
					Float tmp27 = this->maxError;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(468)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(468)
					this->bias = tmp28;
				}
				else{
					HX_STACK_LINE(469)
					Float tmp27 = this->bias;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(469)
					Float tmp28 = this->maxError;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(469)
					bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(469)
					if ((tmp29)){
						HX_STACK_LINE(469)
						Float tmp30 = this->maxError;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(469)
						this->bias = tmp30;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(473)
			this->bias = (int)0;
			HX_STACK_LINE(474)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(476)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(477)
		Float tmp16 = this->maxForce;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(477)
		Float tmp17 = dt;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(477)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(477)
		this->jMax = tmp18;
	}
	HX_STACK_LINE(479)
	return false;
}


Void ZPP_AngleJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","warmStart",0x49c354db,"zpp_nape.constraint.ZPP_AngleJoint.warmStart","zpp_nape/constraint/AngleJoint.hx",481,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_LINE(482)
		bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		if ((tmp1)){
			HX_STACK_LINE(488)
			Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			Float tmp4 = tmp3->iinertia;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(488)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(488)
			Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(488)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(488)
			hx::SubEq(tmp8->angvel,tmp7);
			HX_STACK_LINE(489)
			Float tmp9 = this->ratio;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			Float tmp10 = this->scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(489)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(489)
			Float tmp13 = tmp12->iinertia;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(489)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(489)
			Float tmp15 = this->jAcc;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(489)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(489)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(489)
			hx::AddEq(tmp17->angvel,tmp16);
		}
	}
return null();
}


bool ZPP_AngleJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","applyImpulseVel",0x00c5c734,"zpp_nape.constraint.ZPP_AngleJoint.applyImpulseVel","zpp_nape/constraint/AngleJoint.hx",493,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	if ((tmp)){
		HX_STACK_LINE(494)
		return false;
	}
	HX_STACK_LINE(495)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		Float tmp3 = this->ratio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(496)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(496)
		Float tmp5 = tmp4->angvel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(496)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(496)
		Float tmp7 = tmp6->kinangvel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(496)
		Float tmp9 = (tmp3 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		Float tmp11 = tmp10->angvel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(496)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(496)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(496)
		Float tmp14 = tmp13->kinangvel;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(496)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(496)
		tmp1 = (tmp2 * tmp15);
	}
	HX_STACK_LINE(495)
	Float E = tmp1;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(498)
	Float tmp2 = this->kMass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	Float tmp3 = this->bias;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	Float tmp4 = E;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(498)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(498)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(498)
	Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(498)
	Float tmp8 = this->gamma;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(498)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(498)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(498)
	Float j = tmp10;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(499)
	{
		HX_STACK_LINE(508)
		Float tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		Float jOld = tmp11;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(509)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(511)
			bool tmp12 = this->equal;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(511)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(511)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(511)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(511)
			if ((tmp14)){
				HX_STACK_LINE(511)
				Float tmp16 = this->jAcc;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(511)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(511)
				tmp15 = (tmp17 > (int)0);
			}
			else{
				HX_STACK_LINE(511)
				tmp15 = false;
			}
			HX_STACK_LINE(511)
			if ((tmp15)){
				HX_STACK_LINE(511)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(512)
			bool tmp16 = this->breakUnderForce;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(512)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(512)
			if ((tmp16)){
				HX_STACK_LINE(512)
				Float tmp18 = this->jAcc;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(512)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(512)
				Float tmp20 = this->jMax;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(512)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(512)
				bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(512)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(512)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(512)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(512)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(512)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(512)
				if ((tmp27)){
					HX_STACK_LINE(512)
					Float tmp28 = this->jAcc;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(512)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(512)
					Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(512)
					Float tmp31 = this->jMax;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(512)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(512)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(512)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(512)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(512)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(512)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(512)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(512)
					tmp17 = (tmp30 < tmp38);
				}
				else{
					HX_STACK_LINE(512)
					tmp17 = true;
				}
			}
			else{
				HX_STACK_LINE(512)
				tmp17 = false;
			}
			HX_STACK_LINE(512)
			if ((tmp17)){
				HX_STACK_LINE(512)
				return true;
			}
			HX_STACK_LINE(513)
			bool tmp18 = this->stiff;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(513)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(513)
			if ((tmp19)){
				HX_STACK_LINE(514)
				Float tmp20 = this->jAcc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(514)
				Float tmp21 = this->jMax;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(514)
				bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(514)
				if ((tmp22)){
					HX_STACK_LINE(514)
					Float tmp23 = this->jMax;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(514)
					this->jAcc = tmp23;
				}
				else{
					HX_STACK_LINE(515)
					Float tmp23 = this->jAcc;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(515)
					Float tmp24 = this->jMax;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(515)
					Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(515)
					bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(515)
					if ((tmp26)){
						HX_STACK_LINE(515)
						Float tmp27 = this->jMax;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(515)
						Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(515)
						this->jAcc = tmp28;
					}
				}
			}
		}
		HX_STACK_LINE(518)
		Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(518)
		Float tmp13 = jOld;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(518)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(518)
		j = tmp14;
	}
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(526)
		Float tmp11 = this->scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(526)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(526)
		Float tmp13 = tmp12->iinertia;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(526)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(526)
		Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(526)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(526)
		::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(526)
		hx::SubEq(tmp17->angvel,tmp16);
		HX_STACK_LINE(527)
		Float tmp18 = this->ratio;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(527)
		Float tmp19 = this->scale;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(527)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(527)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(527)
		Float tmp22 = tmp21->iinertia;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(527)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(527)
		Float tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(527)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(527)
		::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(527)
		hx::AddEq(tmp26->angvel,tmp25);
	}
	HX_STACK_LINE(530)
	return false;
}


bool ZPP_AngleJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","applyImpulsePos",0x00c1426b,"zpp_nape.constraint.ZPP_AngleJoint.applyImpulsePos","zpp_nape/constraint/AngleJoint.hx",532,0x575b2617)
	HX_STACK_THIS(this)
	HX_STACK_LINE(533)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(534)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(535)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(536)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(537)
		Float tmp1 = this->ratio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		Float tmp3 = tmp2->rot;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(537)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(537)
		Float tmp6 = tmp5->rot;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(537)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		Float C = tmp7;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(538)
		bool tmp8 = this->equal;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(538)
		if ((tmp8)){
			HX_STACK_LINE(539)
			Float tmp9 = this->jointMax;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			hx::SubEq(C,tmp9);
			HX_STACK_LINE(540)
			slack = false;
			HX_STACK_LINE(541)
			this->scale = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(544)
			Float tmp9 = C;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			Float tmp10 = this->jointMin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			if ((tmp11)){
				HX_STACK_LINE(545)
				Float tmp12 = this->jointMin;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(545)
				Float tmp13 = C;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(545)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(545)
				C = tmp14;
				HX_STACK_LINE(546)
				this->scale = ((Float)-1.0);
				HX_STACK_LINE(547)
				slack = false;
			}
			else{
				HX_STACK_LINE(549)
				Float tmp12 = C;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(549)
				Float tmp13 = this->jointMax;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(549)
				bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(549)
				if ((tmp14)){
					HX_STACK_LINE(550)
					Float tmp15 = this->jointMax;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(550)
					hx::SubEq(C,tmp15);
					HX_STACK_LINE(551)
					this->scale = ((Float)1.0);
					HX_STACK_LINE(552)
					slack = false;
				}
				else{
					HX_STACK_LINE(555)
					this->scale = ((Float)0.0);
					HX_STACK_LINE(556)
					C = (int)0;
					HX_STACK_LINE(557)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(560)
		tmp = C;
	}
	HX_STACK_LINE(536)
	E = tmp;
	HX_STACK_LINE(562)
	bool tmp1 = slack;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	if ((tmp2)){
		HX_STACK_LINE(563)
		bool tmp3 = this->breakUnderError;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(563)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(563)
		if ((tmp3)){
			HX_STACK_LINE(563)
			Float tmp5 = (E * E);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			Float tmp7 = this->maxError;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(563)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(563)
			Float tmp9 = this->maxError;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(563)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(563)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(563)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(563)
			tmp4 = (tmp6 > tmp12);
		}
		else{
			HX_STACK_LINE(563)
			tmp4 = false;
		}
		HX_STACK_LINE(563)
		if ((tmp4)){
			HX_STACK_LINE(563)
			return true;
		}
		HX_STACK_LINE(564)
		hx::MultEq(E,((Float)0.5));
		HX_STACK_LINE(565)
		Float tmp5 = E;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(565)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(565)
		Float tmp7 = this->kMass;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(565)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(565)
		j = tmp8;
		HX_STACK_LINE(566)
		bool tmp9 = this->equal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(566)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(566)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(566)
		if ((tmp10)){
			HX_STACK_LINE(566)
			tmp11 = (j < (int)0);
		}
		else{
			HX_STACK_LINE(566)
			tmp11 = true;
		}
		HX_STACK_LINE(566)
		if ((tmp11)){
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(568)
				::zpp_nape::phys::ZPP_Body _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(568)
				Float tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(568)
				Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(568)
				Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(568)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(568)
				::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(568)
				Float tmp18 = tmp17->iinertia;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(568)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(568)
				Float dr = tmp19;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(568)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(568)
				Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(568)
				bool tmp21 = (tmp20 > ((Float)0.0001));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(568)
				if ((tmp21)){
					HX_STACK_LINE(568)
					Float tmp22 = _this->rot;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(568)
					Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(568)
					_this->axisx = tmp23;
					HX_STACK_LINE(568)
					Float tmp24 = _this->rot;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(568)
					Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(568)
					_this->axisy = tmp25;
					HX_STACK_LINE(568)
					Dynamic();
				}
				else{
					HX_STACK_LINE(568)
					Float tmp22 = (dr * dr);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(568)
					Float d2 = tmp22;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(568)
					Float tmp23 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(568)
					Float tmp24 = ((int)1 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(568)
					Float p = tmp24;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(568)
					Float tmp25 = (d2 * d2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(568)
					Float tmp26 = (Float(tmp25) / Float((int)8));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(568)
					Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(568)
					Float m = tmp27;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(568)
					Float tmp28 = (p * _this->axisx);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(568)
					Float tmp29 = (dr * _this->axisy);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(568)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(568)
					Float tmp31 = m;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(568)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(568)
					Float nx = tmp32;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(568)
					Float tmp33 = (p * _this->axisy);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(568)
					Float tmp34 = (dr * _this->axisx);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(568)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(568)
					Float tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(568)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(568)
					_this->axisy = tmp37;
					HX_STACK_LINE(568)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(569)
				::zpp_nape::phys::ZPP_Body _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(569)
				Float tmp13 = this->ratio;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(569)
				Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(569)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(569)
				Float tmp16 = j;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(569)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(569)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(569)
				Float tmp19 = tmp18->iinertia;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(569)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(569)
				Float dr = tmp20;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(569)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(569)
				Float tmp21 = (dr * dr);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(569)
				bool tmp22 = (tmp21 > ((Float)0.0001));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(569)
				if ((tmp22)){
					HX_STACK_LINE(569)
					Float tmp23 = _this->rot;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(569)
					Float tmp24 = ::Math_obj::sin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(569)
					_this->axisx = tmp24;
					HX_STACK_LINE(569)
					Float tmp25 = _this->rot;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(569)
					Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(569)
					_this->axisy = tmp26;
					HX_STACK_LINE(569)
					Dynamic();
				}
				else{
					HX_STACK_LINE(569)
					Float tmp23 = (dr * dr);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(569)
					Float d2 = tmp23;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(569)
					Float tmp24 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(569)
					Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(569)
					Float p = tmp25;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(569)
					Float tmp26 = (d2 * d2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(569)
					Float tmp27 = (Float(tmp26) / Float((int)8));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(569)
					Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(569)
					Float m = tmp28;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(569)
					Float tmp29 = (p * _this->axisx);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(569)
					Float tmp30 = (dr * _this->axisy);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(569)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(569)
					Float tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(569)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(569)
					Float nx = tmp33;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(569)
					Float tmp34 = (p * _this->axisy);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(569)
					Float tmp35 = (dr * _this->axisx);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(569)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(569)
					Float tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(569)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(569)
					_this->axisy = tmp38;
					HX_STACK_LINE(569)
					_this->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(577)
	return false;
}


Void ZPP_AngleJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleJoint","draw",0x5d5b1fc6,"zpp_nape.constraint.ZPP_AngleJoint.draw","zpp_nape/constraint/AngleJoint.hx",579,0x575b2617)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_AngleJoint_obj::ZPP_AngleJoint_obj()
{
}

void ZPP_AngleJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AngleJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_AngleJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_AngleJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"is_slack") ) { return is_slack_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AngleJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::AngleJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AngleJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_AngleJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"));
	outFields->push(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("b2","\x90","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"));
	outFields->push(HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("bias","\x79","\xea","\x16","\x41"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::AngleJoint*/ ,(int)offsetof(ZPP_AngleJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,ratio),HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,jointMin),HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,jointMax),HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55")},
	{hx::fsBool,(int)offsetof(ZPP_AngleJoint_obj,slack),HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e")},
	{hx::fsBool,(int)offsetof(ZPP_AngleJoint_obj,equal),HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_AngleJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_AngleJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,kMass),HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_AngleJoint_obj,bias),HX_HCSTRING("bias","\x79","\xea","\x16","\x41")},
	{hx::fsBool,(int)offsetof(ZPP_AngleJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"),
	HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"),
	HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"),
	HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("is_slack","\xfb","\x20","\x7e","\x9e"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"),
	HX_HCSTRING("b2","\x90","\x55","\x00","\x00"),
	HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"),
	HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("bias","\x79","\xea","\x16","\x41"),
	HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("wake_connected","\xae","\xcf","\xdd","\x3d"),
	HX_HCSTRING("forest","\xdd","\x8c","\x88","\xfd"),
	HX_HCSTRING("pair_exists","\xa1","\x6a","\x58","\x69"),
	HX_HCSTRING("clearcache","\x95","\x69","\xf1","\x82"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AngleJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AngleJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_AngleJoint_obj::__mClass;

void ZPP_AngleJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_AngleJoint","\xec","\x03","\x92","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_AngleJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AngleJoint_obj >;
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
