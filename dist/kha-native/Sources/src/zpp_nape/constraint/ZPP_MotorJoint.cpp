#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_MotorJoint
#include <nape/constraint/MotorJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
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

Void ZPP_MotorJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","new",0xa79859fc,"zpp_nape.constraint.ZPP_MotorJoint.new","zpp_nape/constraint/MotorJoint.hx",174,0x608da4b9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(206)
	this->stepped = false;
	HX_STACK_LINE(205)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(204)
	this->jAcc = ((Float)0.0);
	HX_STACK_LINE(203)
	this->kMass = ((Float)0.0);
	HX_STACK_LINE(202)
	this->b2 = null();
	HX_STACK_LINE(201)
	this->b1 = null();
	HX_STACK_LINE(177)
	this->rate = ((Float)0.0);
	HX_STACK_LINE(176)
	this->ratio = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(255)
	super::__construct();
	HX_STACK_LINE(256)
	this->jAcc = (int)0;
	HX_STACK_LINE(257)
	this->stepped = false;
	HX_STACK_LINE(258)
	this->__velocity = true;
}
;
	return null();
}

//ZPP_MotorJoint_obj::~ZPP_MotorJoint_obj() { }

Dynamic ZPP_MotorJoint_obj::__CreateEmpty() { return  new ZPP_MotorJoint_obj; }
hx::ObjectPtr< ZPP_MotorJoint_obj > ZPP_MotorJoint_obj::__new()
{  hx::ObjectPtr< ZPP_MotorJoint_obj > _result_ = new ZPP_MotorJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_MotorJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MotorJoint_obj > _result_ = new ZPP_MotorJoint_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec3 ZPP_MotorJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","bodyImpulse",0xa733fbcf,"zpp_nape.constraint.ZPP_MotorJoint.bodyImpulse","zpp_nape/constraint/MotorJoint.hx",178,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(179)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	if ((tmp)){
		HX_STACK_LINE(180)
		::zpp_nape::phys::ZPP_Body tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		if ((tmp3)){
			HX_STACK_LINE(180)
			Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			::nape::geom::Vec3 tmp6 = ::nape::geom::Vec3_obj::get((int)0,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			return tmp6;
		}
		else{
			HX_STACK_LINE(181)
			Float tmp4 = this->ratio;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			Float tmp5 = this->jAcc;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			::nape::geom::Vec3 tmp7 = ::nape::geom::Vec3_obj::get((int)0,(int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			return tmp7;
		}
	}
	else{
		HX_STACK_LINE(183)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		return tmp1;
	}
	HX_STACK_LINE(179)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MotorJoint_obj,bodyImpulse,return )

Void ZPP_MotorJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","activeBodies",0x12bbccca,"zpp_nape.constraint.ZPP_MotorJoint.activeBodies","zpp_nape/constraint/MotorJoint.hx",185,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(187)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			if ((tmp1)){
				HX_STACK_LINE(187)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(189)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			if ((tmp4)){
				HX_STACK_LINE(190)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(190)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","inactiveBodies",0xe6526d2f,"zpp_nape.constraint.ZPP_MotorJoint.inactiveBodies","zpp_nape/constraint/MotorJoint.hx",193,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(195)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			if ((tmp1)){
				HX_STACK_LINE(195)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(197)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		if ((tmp2)){
			HX_STACK_LINE(198)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			if ((tmp4)){
				HX_STACK_LINE(198)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(198)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_MotorJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","copy",0xf6789a99,"zpp_nape.constraint.ZPP_MotorJoint.copy","zpp_nape/constraint/MotorJoint.hx",207,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(208)
	Float tmp = this->rate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	Float tmp1 = this->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	::nape::constraint::MotorJoint ret = ::nape::constraint::MotorJoint_obj::__new(null(),null(),tmp,tmp1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(209)
	::nape::constraint::MotorJoint tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	this->copyto(tmp2);
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(211)
		bool tmp3 = (dict != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		if ((tmp3)){
			HX_STACK_LINE(211)
			::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(211)
			tmp4 = false;
		}
		HX_STACK_LINE(211)
		if ((tmp4)){
			HX_STACK_LINE(220)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(221)
				while((true)){
					HX_STACK_LINE(221)
					bool tmp5 = (_g < dict->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(221)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(221)
					if ((tmp6)){
						HX_STACK_LINE(221)
						break;
					}
					HX_STACK_LINE(221)
					::zpp_nape::constraint::ZPP_CopyHelper tmp7 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp7;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(221)
					++(_g);
					HX_STACK_LINE(222)
					int tmp8 = idc->id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(222)
					::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(222)
					bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					if ((tmp11)){
						HX_STACK_LINE(223)
						b = idc->bc;
						HX_STACK_LINE(224)
						break;
					}
				}
			}
			HX_STACK_LINE(227)
			bool tmp5 = (b != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			if ((tmp5)){
				HX_STACK_LINE(227)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(228)
				::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(228)
				int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::MotorJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/MotorJoint.hx",228,0x608da4b9)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(228)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(228)
				::zpp_nape::constraint::ZPP_CopyHelper tmp8 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp7, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(228)
				todo->push(tmp8);
			}
		}
	}
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(232)
		bool tmp3 = (dict != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(232)
			tmp4 = false;
		}
		HX_STACK_LINE(232)
		if ((tmp4)){
			HX_STACK_LINE(241)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(242)
				while((true)){
					HX_STACK_LINE(242)
					bool tmp5 = (_g < dict->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(242)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(242)
					if ((tmp6)){
						HX_STACK_LINE(242)
						break;
					}
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_CopyHelper tmp7 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp7;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(242)
					++(_g);
					HX_STACK_LINE(243)
					int tmp8 = idc->id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(243)
					::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(243)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(243)
					bool tmp11 = (tmp8 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(243)
					if ((tmp11)){
						HX_STACK_LINE(244)
						b = idc->bc;
						HX_STACK_LINE(245)
						break;
					}
				}
			}
			HX_STACK_LINE(248)
			bool tmp5 = (b != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			if ((tmp5)){
				HX_STACK_LINE(248)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(249)
				::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(249)
				int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::MotorJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/MotorJoint.hx",249,0x608da4b9)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(249)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(249)
				::zpp_nape::constraint::ZPP_CopyHelper tmp8 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp7, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				todo->push(tmp8);
			}
		}
	}
	HX_STACK_LINE(252)
	::nape::constraint::MotorJoint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	return tmp3;
}


Void ZPP_MotorJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","validate",0xcb3af17a,"zpp_nape.constraint.ZPP_MotorJoint.validate","zpp_nape/constraint/MotorJoint.hx",260,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		if ((tmp2)){
			HX_STACK_LINE(261)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(261)
			tmp3 = true;
		}
		HX_STACK_LINE(261)
		if ((tmp3)){
			HX_STACK_LINE(261)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint cannot be simulated null bodies","\xfe","\x18","\x41","\x78"));
		}
		HX_STACK_LINE(262)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(262)
		if ((tmp6)){
			HX_STACK_LINE(262)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MotorJoint cannot be simulated with body1 == body2","\x7e","\x50","\x4d","\xd1"));
		}
		HX_STACK_LINE(263)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(263)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(263)
		if ((tmp11)){
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(263)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(263)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(263)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(263)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(263)
			tmp12 = true;
		}
		HX_STACK_LINE(263)
		if ((tmp12)){
			HX_STACK_LINE(263)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(264)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(264)
		int tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(264)
		int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(264)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(264)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(264)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(264)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(264)
		if ((tmp18)){
			HX_STACK_LINE(264)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(264)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(264)
			int tmp22 = tmp21->type;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(264)
			int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(264)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(264)
			bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(264)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(264)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(264)
			tmp19 = !(tmp27);
		}
		else{
			HX_STACK_LINE(264)
			tmp19 = false;
		}
		HX_STACK_LINE(264)
		if ((tmp19)){
			HX_STACK_LINE(264)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic","\xcb","\xb3","\x6c","\xeb"));
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","wake_connected",0x976ab392,"zpp_nape.constraint.ZPP_MotorJoint.wake_connected","zpp_nape/constraint/MotorJoint.hx",266,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		if ((tmp1)){
			HX_STACK_LINE(267)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(267)
			tmp2 = false;
		}
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(267)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			tmp3->wake();
		}
		HX_STACK_LINE(268)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		if ((tmp4)){
			HX_STACK_LINE(268)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(268)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(268)
			tmp5 = false;
		}
		HX_STACK_LINE(268)
		if ((tmp5)){
			HX_STACK_LINE(268)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","forest",0x2e1cecc1,"zpp_nape.constraint.ZPP_MotorJoint.forest","zpp_nape/constraint/MotorJoint.hx",270,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		if ((tmp3)){
			HX_STACK_LINE(272)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(273)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(273)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				if ((tmp9)){
					HX_STACK_LINE(273)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(273)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(275)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(275)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(276)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(277)
					while((true)){
						HX_STACK_LINE(277)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(277)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(277)
						if ((tmp12)){
							HX_STACK_LINE(277)
							break;
						}
						HX_STACK_LINE(278)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(279)
						obj->parent = stack;
						HX_STACK_LINE(280)
						stack = obj;
						HX_STACK_LINE(281)
						obj = nxt;
					}
					HX_STACK_LINE(283)
					while((true)){
						HX_STACK_LINE(283)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(283)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(283)
						if ((tmp12)){
							HX_STACK_LINE(283)
							break;
						}
						HX_STACK_LINE(284)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(285)
						stack->parent = obj;
						HX_STACK_LINE(286)
						stack = nxt;
					}
					HX_STACK_LINE(288)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(272)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(291)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(292)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(292)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(292)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(292)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(292)
				if ((tmp9)){
					HX_STACK_LINE(292)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(294)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(294)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(295)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(296)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						if ((tmp12)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(297)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(298)
						obj->parent = stack;
						HX_STACK_LINE(299)
						stack = obj;
						HX_STACK_LINE(300)
						obj = nxt;
					}
					HX_STACK_LINE(302)
					while((true)){
						HX_STACK_LINE(302)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(302)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(302)
						if ((tmp12)){
							HX_STACK_LINE(302)
							break;
						}
						HX_STACK_LINE(303)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(304)
						stack->parent = obj;
						HX_STACK_LINE(305)
						stack = nxt;
					}
					HX_STACK_LINE(307)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(291)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(310)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(310)
			if ((tmp6)){
				HX_STACK_LINE(311)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(311)
				if ((tmp7)){
					HX_STACK_LINE(311)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(312)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(312)
					if ((tmp8)){
						HX_STACK_LINE(312)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(314)
						yr->parent = xr;
						HX_STACK_LINE(315)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(319)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(319)
		if ((tmp7)){
			HX_STACK_LINE(320)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(321)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(321)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(321)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(321)
				if ((tmp13)){
					HX_STACK_LINE(321)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(321)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(323)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(324)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(325)
					while((true)){
						HX_STACK_LINE(325)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(325)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(325)
						if ((tmp16)){
							HX_STACK_LINE(325)
							break;
						}
						HX_STACK_LINE(326)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(327)
						obj->parent = stack;
						HX_STACK_LINE(328)
						stack = obj;
						HX_STACK_LINE(329)
						obj = nxt;
					}
					HX_STACK_LINE(331)
					while((true)){
						HX_STACK_LINE(331)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(331)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(331)
						if ((tmp16)){
							HX_STACK_LINE(331)
							break;
						}
						HX_STACK_LINE(332)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(333)
						stack->parent = obj;
						HX_STACK_LINE(334)
						stack = nxt;
					}
					HX_STACK_LINE(336)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(320)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(339)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(340)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(340)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(340)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(340)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(340)
				if ((tmp13)){
					HX_STACK_LINE(340)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(342)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(342)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(343)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(344)
					while((true)){
						HX_STACK_LINE(344)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(344)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(344)
						if ((tmp16)){
							HX_STACK_LINE(344)
							break;
						}
						HX_STACK_LINE(345)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(346)
						obj->parent = stack;
						HX_STACK_LINE(347)
						stack = obj;
						HX_STACK_LINE(348)
						obj = nxt;
					}
					HX_STACK_LINE(350)
					while((true)){
						HX_STACK_LINE(350)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(350)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(350)
						if ((tmp16)){
							HX_STACK_LINE(350)
							break;
						}
						HX_STACK_LINE(351)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(352)
						stack->parent = obj;
						HX_STACK_LINE(353)
						stack = nxt;
					}
					HX_STACK_LINE(355)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(339)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(358)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			if ((tmp10)){
				HX_STACK_LINE(359)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(359)
				if ((tmp11)){
					HX_STACK_LINE(359)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(360)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(360)
					if ((tmp12)){
						HX_STACK_LINE(360)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(362)
						yr->parent = xr;
						HX_STACK_LINE(363)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_MotorJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","pair_exists",0xb0e9f03d,"zpp_nape.constraint.ZPP_MotorJoint.pair_exists","zpp_nape/constraint/MotorJoint.hx",368,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(369)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(369)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(369)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(369)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(369)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(369)
	if ((tmp4)){
		HX_STACK_LINE(369)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(369)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(369)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(369)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(369)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(369)
		tmp5 = false;
	}
	HX_STACK_LINE(369)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(369)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(369)
	if ((tmp6)){
		HX_STACK_LINE(369)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(369)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(369)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(369)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(369)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(369)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(369)
		if ((tmp14)){
			HX_STACK_LINE(369)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(369)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(369)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(369)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(369)
		tmp7 = true;
	}
	HX_STACK_LINE(369)
	return tmp7;
}


Void ZPP_MotorJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","clearcache",0xe5fd8b79,"zpp_nape.constraint.ZPP_MotorJoint.clearcache","zpp_nape/constraint/MotorJoint.hx",371,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		this->jAcc = (int)0;
		HX_STACK_LINE(373)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_MotorJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","preStep",0x760048ab,"zpp_nape.constraint.ZPP_MotorJoint.preStep","zpp_nape/constraint/MotorJoint.hx",375,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(376)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	if ((tmp1)){
		HX_STACK_LINE(376)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(377)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(377)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(377)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(377)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(378)
	this->pre_dt = dt;
	HX_STACK_LINE(379)
	this->stepped = true;
	HX_STACK_LINE(380)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(380)
	{
		HX_STACK_LINE(381)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(381)
		Float tmp7 = tmp6->sinertia;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(381)
		Float tmp8 = this->ratio;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(381)
		Float tmp9 = this->ratio;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(381)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(381)
		Float tmp12 = tmp11->sinertia;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(381)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(381)
		tmp5 = (tmp7 + tmp13);
	}
	HX_STACK_LINE(380)
	this->kMass = tmp5;
	HX_STACK_LINE(391)
	Float tmp6 = this->kMass;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(391)
	Float tmp7 = (Float(((Float)1.0)) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(391)
	this->kMass = tmp7;
	HX_STACK_LINE(392)
	hx::MultEq(this->jAcc,dtratio);
	HX_STACK_LINE(393)
	Float tmp8 = this->maxForce;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(393)
	Float tmp9 = dt;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(393)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(393)
	this->jMax = tmp10;
	HX_STACK_LINE(394)
	return false;
}


Void ZPP_MotorJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","warmStart",0xb0e8ce79,"zpp_nape.constraint.ZPP_MotorJoint.warmStart","zpp_nape/constraint/MotorJoint.hx",397,0x608da4b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		Float tmp1 = tmp->iinertia;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Float tmp2 = this->jAcc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		hx::SubEq(tmp4->angvel,tmp3);
		HX_STACK_LINE(399)
		Float tmp5 = this->ratio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		Float tmp7 = tmp6->iinertia;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		Float tmp9 = this->jAcc;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(399)
		hx::AddEq(tmp11->angvel,tmp10);
	}
return null();
}


bool ZPP_MotorJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","applyImpulseVel",0x210b4b52,"zpp_nape.constraint.ZPP_MotorJoint.applyImpulseVel","zpp_nape/constraint/MotorJoint.hx",402,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(404)
		Float tmp1 = this->ratio;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(404)
		Float tmp3 = tmp2->angvel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		Float tmp5 = tmp4->kinangvel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		Float tmp7 = (tmp1 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		Float tmp9 = tmp8->angvel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(404)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(404)
		Float tmp12 = tmp11->kinangvel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(404)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(404)
		Float tmp14 = this->rate;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(404)
		tmp = (tmp13 - tmp14);
	}
	HX_STACK_LINE(403)
	Float E = tmp;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(406)
	Float tmp1 = this->kMass;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	Float tmp3 = E;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(406)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(406)
	Float j = tmp4;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(407)
	{
		HX_STACK_LINE(416)
		Float tmp5 = this->jAcc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		Float jOld = tmp5;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(417)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(419)
			bool tmp6 = this->breakUnderForce;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			if ((tmp6)){
				HX_STACK_LINE(420)
				Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(420)
				Float tmp8 = this->jMax;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(420)
				bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(420)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(420)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(420)
				if ((tmp10)){
					HX_STACK_LINE(420)
					Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(420)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(420)
					Float tmp14 = this->jMax;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(420)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(420)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(420)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(420)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(420)
					tmp11 = (tmp13 < tmp18);
				}
				else{
					HX_STACK_LINE(420)
					tmp11 = true;
				}
				HX_STACK_LINE(420)
				if ((tmp11)){
					HX_STACK_LINE(420)
					return true;
				}
			}
			else{
				HX_STACK_LINE(423)
				Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(423)
				Float tmp8 = this->jMax;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(423)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(423)
				bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(423)
				if ((tmp10)){
					HX_STACK_LINE(423)
					Float tmp11 = this->jMax;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(423)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(423)
					this->jAcc = tmp12;
				}
				else{
					HX_STACK_LINE(424)
					Float tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(424)
					Float tmp12 = this->jMax;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(424)
					bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(424)
					if ((tmp13)){
						HX_STACK_LINE(424)
						Float tmp14 = this->jMax;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(424)
						this->jAcc = tmp14;
					}
				}
			}
		}
		HX_STACK_LINE(427)
		Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		Float tmp7 = jOld;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(427)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(427)
		j = tmp8;
	}
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(430)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(430)
		Float tmp6 = tmp5->iinertia;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(430)
		Float tmp7 = j;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(430)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(430)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(430)
		hx::SubEq(tmp9->angvel,tmp8);
		HX_STACK_LINE(431)
		Float tmp10 = this->ratio;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		Float tmp12 = tmp11->iinertia;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(431)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(431)
		Float tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(431)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(431)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(431)
		hx::AddEq(tmp16->angvel,tmp15);
	}
	HX_STACK_LINE(433)
	return false;
}


bool ZPP_MotorJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_MotorJoint","applyImpulsePos",0x2106c689,"zpp_nape.constraint.ZPP_MotorJoint.applyImpulsePos","zpp_nape/constraint/MotorJoint.hx",436,0x608da4b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	return false;
}



ZPP_MotorJoint_obj::ZPP_MotorJoint_obj()
{
}

void ZPP_MotorJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MotorJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MotorJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MotorJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
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

Dynamic ZPP_MotorJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::MotorJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_MotorJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_MotorJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("b2","\x90","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"));
	outFields->push(HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::MotorJoint*/ ,(int)offsetof(ZPP_MotorJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_MotorJoint_obj,ratio),HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4")},
	{hx::fsFloat,(int)offsetof(ZPP_MotorJoint_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_MotorJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_MotorJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_MotorJoint_obj,kMass),HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf")},
	{hx::fsFloat,(int)offsetof(ZPP_MotorJoint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_MotorJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsBool,(int)offsetof(ZPP_MotorJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"),
	HX_HCSTRING("b2","\x90","\x55","\x00","\x00"),
	HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"),
	HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MotorJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MotorJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_MotorJoint_obj::__mClass;

void ZPP_MotorJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_MotorJoint","\x0a","\xec","\xf4","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_MotorJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MotorJoint_obj >;
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
