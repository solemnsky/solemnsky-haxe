#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_SpaceArbiterList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","new",0xed598891,"zpp_nape.dynamics.ZPP_SpaceArbiterList.new","zpp_nape/dynamics/SpaceArbiterList.hx",174,0x1150d7c4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(260)
	this->at_index_3 = (int)0;
	HX_STACK_LINE(259)
	this->at_index_2 = (int)0;
	HX_STACK_LINE(258)
	this->at_index_1 = (int)0;
	HX_STACK_LINE(257)
	this->at_index_0 = (int)0;
	HX_STACK_LINE(256)
	this->ite_3 = null();
	HX_STACK_LINE(255)
	this->ite_2 = null();
	HX_STACK_LINE(254)
	this->ite_1 = null();
	HX_STACK_LINE(253)
	this->ite_0 = null();
	HX_STACK_LINE(252)
	this->lengths = null();
	HX_STACK_LINE(177)
	this->zip_length = false;
	HX_STACK_LINE(176)
	this->_length = (int)0;
	HX_STACK_LINE(175)
	this->space = null();
	HX_STACK_LINE(179)
	super::__construct();
	HX_STACK_LINE(180)
	this->at_index_0 = (int)0;
	HX_STACK_LINE(181)
	this->at_index_1 = (int)0;
	HX_STACK_LINE(182)
	this->at_index_2 = (int)0;
	HX_STACK_LINE(183)
	this->at_index_3 = (int)0;
	HX_STACK_LINE(184)
	this->zip_length = true;
	HX_STACK_LINE(185)
	this->_length = (int)0;
	HX_STACK_LINE(186)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	this->lengths = tmp;
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			bool tmp1 = (_g < (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			if ((tmp2)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(187)
			Array< int > tmp4 = this->lengths;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			tmp4->push((int)0);
		}
	}
}
;
	return null();
}

//ZPP_SpaceArbiterList_obj::~ZPP_SpaceArbiterList_obj() { }

Dynamic ZPP_SpaceArbiterList_obj::__CreateEmpty() { return  new ZPP_SpaceArbiterList_obj; }
hx::ObjectPtr< ZPP_SpaceArbiterList_obj > ZPP_SpaceArbiterList_obj::__new()
{  hx::ObjectPtr< ZPP_SpaceArbiterList_obj > _result_ = new ZPP_SpaceArbiterList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SpaceArbiterList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SpaceArbiterList_obj > _result_ = new ZPP_SpaceArbiterList_obj();
	_result_->__construct();
	return _result_;}

int ZPP_SpaceArbiterList_obj::zpp_gl( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","zpp_gl",0x927c0ff9,"zpp_nape.dynamics.ZPP_SpaceArbiterList.zpp_gl","zpp_nape/dynamics/SpaceArbiterList.hx",189,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	this->zpp_vm();
	HX_STACK_LINE(191)
	bool tmp = this->zip_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	if ((tmp)){
		HX_STACK_LINE(192)
		this->_length = (int)0;
		HX_STACK_LINE(193)
		int ind = (int)0;		HX_STACK_VAR(ind,"ind");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(196)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(198)
					::zpp_nape::space::ZPP_Space tmp1 = this->space;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(198)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = tmp1->c_arbiters_true->head;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(198)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(199)
					while((true)){
						HX_STACK_LINE(199)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(199)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(199)
						if ((tmp4)){
							HX_STACK_LINE(199)
							break;
						}
						HX_STACK_LINE(200)
						::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(201)
						bool tmp5 = i->active;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(201)
						if ((tmp5)){
							HX_STACK_LINE(201)
							(len)++;
						}
						HX_STACK_LINE(202)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(205)
				Array< int > tmp1 = this->lengths;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(205)
				int tmp2 = (ind)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(205)
				int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(205)
				tmp1[tmp2] = tmp3;
				HX_STACK_LINE(206)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(209)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(211)
					::zpp_nape::space::ZPP_Space tmp1 = this->space;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(211)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp2 = tmp1->c_arbiters_false->head;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(211)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(212)
					while((true)){
						HX_STACK_LINE(212)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(212)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(212)
						if ((tmp4)){
							HX_STACK_LINE(212)
							break;
						}
						HX_STACK_LINE(213)
						::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(214)
						bool tmp5 = i->active;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(214)
						if ((tmp5)){
							HX_STACK_LINE(214)
							(len)++;
						}
						HX_STACK_LINE(215)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(218)
				Array< int > tmp1 = this->lengths;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(218)
				int tmp2 = (ind)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(218)
				tmp1[tmp2] = tmp3;
				HX_STACK_LINE(219)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(222)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(224)
					::zpp_nape::space::ZPP_Space tmp1 = this->space;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(224)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp2 = tmp1->f_arbiters->head;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(224)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(225)
					while((true)){
						HX_STACK_LINE(225)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(225)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(225)
						if ((tmp4)){
							HX_STACK_LINE(225)
							break;
						}
						HX_STACK_LINE(226)
						::zpp_nape::dynamics::ZPP_FluidArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(227)
						bool tmp5 = i->active;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(227)
						if ((tmp5)){
							HX_STACK_LINE(227)
							(len)++;
						}
						HX_STACK_LINE(228)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(231)
				Array< int > tmp1 = this->lengths;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(231)
				int tmp2 = (ind)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				tmp1[tmp2] = tmp3;
				HX_STACK_LINE(232)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(235)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(237)
					::zpp_nape::space::ZPP_Space tmp1 = this->space;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(237)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp2 = tmp1->s_arbiters->head;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(237)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = tmp2;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(238)
					while((true)){
						HX_STACK_LINE(238)
						bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(238)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(238)
						if ((tmp4)){
							HX_STACK_LINE(238)
							break;
						}
						HX_STACK_LINE(239)
						::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(240)
						bool tmp5 = i->active;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(240)
						if ((tmp5)){
							HX_STACK_LINE(240)
							(len)++;
						}
						HX_STACK_LINE(241)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(244)
				Array< int > tmp1 = this->lengths;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(244)
				int tmp2 = (ind)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(244)
				tmp1[tmp2] = tmp3;
				HX_STACK_LINE(245)
				hx::AddEq(this->_length,len);
			}
		}
		HX_STACK_LINE(248)
		this->zip_length = false;
	}
	HX_STACK_LINE(250)
	int tmp1 = this->_length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	return tmp1;
}


Void ZPP_SpaceArbiterList_obj::zpp_vm( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","zpp_vm",0x927c1d0b,"zpp_nape.dynamics.ZPP_SpaceArbiterList.zpp_vm","zpp_nape/dynamics/SpaceArbiterList.hx",261,0x1150d7c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		bool modified = false;		HX_STACK_VAR(modified,"modified");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(264)
			::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(264)
			bool tmp1 = tmp->c_arbiters_true->modified;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			if ((tmp1)){
				HX_STACK_LINE(265)
				modified = true;
				HX_STACK_LINE(266)
				::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				tmp2->c_arbiters_true->modified = false;
			}
			HX_STACK_LINE(268)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			bool tmp3 = tmp2->c_arbiters_false->modified;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			if ((tmp3)){
				HX_STACK_LINE(269)
				modified = true;
				HX_STACK_LINE(270)
				::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(270)
				tmp4->c_arbiters_false->modified = false;
			}
			HX_STACK_LINE(272)
			::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(272)
			bool tmp5 = tmp4->f_arbiters->modified;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(272)
			if ((tmp5)){
				HX_STACK_LINE(273)
				modified = true;
				HX_STACK_LINE(274)
				::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(274)
				tmp6->f_arbiters->modified = false;
			}
			HX_STACK_LINE(276)
			::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			bool tmp7 = tmp6->s_arbiters->modified;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			if ((tmp7)){
				HX_STACK_LINE(277)
				modified = true;
				HX_STACK_LINE(278)
				::zpp_nape::space::ZPP_Space tmp8 = this->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				tmp8->s_arbiters->modified = false;
			}
		}
		HX_STACK_LINE(281)
		bool tmp = modified;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		if ((tmp)){
			HX_STACK_LINE(282)
			this->zip_length = true;
			HX_STACK_LINE(283)
			this->_length = (int)0;
			HX_STACK_LINE(284)
			this->ite_0 = null();
			HX_STACK_LINE(285)
			this->ite_1 = null();
			HX_STACK_LINE(286)
			this->ite_2 = null();
			HX_STACK_LINE(287)
			this->ite_3 = null();
		}
	}
return null();
}


bool ZPP_SpaceArbiterList_obj::push( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","push",0xc25c8489,"zpp_nape.dynamics.ZPP_SpaceArbiterList.push","zpp_nape/dynamics/SpaceArbiterList.hx",290,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(292)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	HX_STACK_LINE(294)
	return false;
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","pop",0xed5b15c2,"zpp_nape.dynamics.ZPP_SpaceArbiterList.pop","zpp_nape/dynamics/SpaceArbiterList.hx",296,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	HX_STACK_LINE(300)
	return null();
}


bool ZPP_SpaceArbiterList_obj::unshift( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","unshift",0xbd98083a,"zpp_nape.dynamics.ZPP_SpaceArbiterList.unshift","zpp_nape/dynamics/SpaceArbiterList.hx",302,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(304)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	HX_STACK_LINE(306)
	return false;
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::shift( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","shift",0x002bd2f3,"zpp_nape.dynamics.ZPP_SpaceArbiterList.shift","zpp_nape/dynamics/SpaceArbiterList.hx",308,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	HX_STACK_LINE(312)
	return null();
}


bool ZPP_SpaceArbiterList_obj::remove( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","remove",0x084958b3,"zpp_nape.dynamics.ZPP_SpaceArbiterList.remove","zpp_nape/dynamics/SpaceArbiterList.hx",314,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(316)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	HX_STACK_LINE(318)
	return false;
}


Void ZPP_SpaceArbiterList_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","clear",0xcc6457fe,"zpp_nape.dynamics.ZPP_SpaceArbiterList.clear","zpp_nape/dynamics/SpaceArbiterList.hx",322,0x1150d7c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: ArbiterList is immutable","\xd3","\x21","\x2d","\xd5"));
	}
return null();
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::at( int index){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","at",0x01106de2,"zpp_nape.dynamics.ZPP_SpaceArbiterList.at","zpp_nape/dynamics/SpaceArbiterList.hx",325,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(326)
	this->zpp_vm();
	HX_STACK_LINE(328)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	if ((tmp1)){
		HX_STACK_LINE(328)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		int tmp4 = this->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(328)
		tmp2 = true;
	}
	HX_STACK_LINE(328)
	if ((tmp2)){
		HX_STACK_LINE(328)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Index out of bounds","\x10","\xf3","\x5b","\x3f"));
	}
	HX_STACK_LINE(330)
	::nape::dynamics::Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(331)
	int accum_length = (int)0;		HX_STACK_VAR(accum_length,"accum_length");
	HX_STACK_LINE(333)
	bool tmp3 = (ret == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(333)
	if ((tmp3)){
		HX_STACK_LINE(334)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		int tmp5 = accum_length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		Array< int > tmp6 = this->lengths;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		int tmp7 = tmp6->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(334)
		bool tmp9 = (tmp4 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		if ((tmp9)){
			HX_STACK_LINE(335)
			int tmp10 = (index - accum_length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(335)
			int offset = tmp10;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(336)
			int tmp11 = offset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(336)
			int tmp12 = this->at_index_0;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(336)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(336)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(336)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(336)
			if ((tmp14)){
				HX_STACK_LINE(336)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp16 = this->ite_0;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(336)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(336)
				tmp15 = (tmp17 == null());
			}
			else{
				HX_STACK_LINE(336)
				tmp15 = true;
			}
			HX_STACK_LINE(336)
			if ((tmp15)){
				HX_STACK_LINE(337)
				this->at_index_0 = (int)0;
				HX_STACK_LINE(338)
				::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(338)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp17 = tmp16->c_arbiters_true->head;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(338)
				this->ite_0 = tmp17;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(340)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp18 = this->ite_0;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(340)
					::zpp_nape::dynamics::ZPP_ColArbiter x = tmp18->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(341)
					bool tmp19 = x->active;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(341)
					if ((tmp19)){
						HX_STACK_LINE(341)
						break;
					}
					HX_STACK_LINE(342)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp20 = this->ite_0;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(342)
					this->ite_0 = tmp20->next;
				}
			}
			HX_STACK_LINE(345)
			while((true)){
				HX_STACK_LINE(345)
				int tmp16 = this->at_index_0;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(345)
				int tmp17 = offset;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(345)
				bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(345)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(345)
				if ((tmp19)){
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(346)
				(this->at_index_0)++;
				HX_STACK_LINE(347)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp20 = this->ite_0;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(347)
				this->ite_0 = tmp20->next;
				HX_STACK_LINE(348)
				while((true)){
					HX_STACK_LINE(349)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp21 = this->ite_0;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(349)
					::zpp_nape::dynamics::ZPP_ColArbiter x = tmp21->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(350)
					bool tmp22 = x->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(350)
					if ((tmp22)){
						HX_STACK_LINE(350)
						break;
					}
					HX_STACK_LINE(351)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp23 = this->ite_0;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(351)
					this->ite_0 = tmp23->next;
				}
			}
			HX_STACK_LINE(354)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp16 = this->ite_0;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(354)
			::nape::dynamics::Arbiter tmp17 = tmp16->elt->wrapper();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(354)
			ret = tmp17;
		}
		else{
			HX_STACK_LINE(356)
			Array< int > tmp10 = this->lengths;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			int tmp11 = tmp10->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(356)
			hx::AddEq(accum_length,tmp11);
		}
	}
	HX_STACK_LINE(358)
	bool tmp4 = (ret == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(358)
	if ((tmp4)){
		HX_STACK_LINE(359)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		int tmp6 = accum_length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		Array< int > tmp7 = this->lengths;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		int tmp8 = tmp7->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(359)
		bool tmp10 = (tmp5 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(359)
		if ((tmp10)){
			HX_STACK_LINE(360)
			int tmp11 = (index - accum_length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(360)
			int offset = tmp11;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(361)
			int tmp12 = offset;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(361)
			int tmp13 = this->at_index_1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(361)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(361)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(361)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(361)
			if ((tmp15)){
				HX_STACK_LINE(361)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp17 = this->ite_1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(361)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(361)
				tmp16 = (tmp18 == null());
			}
			else{
				HX_STACK_LINE(361)
				tmp16 = true;
			}
			HX_STACK_LINE(361)
			if ((tmp16)){
				HX_STACK_LINE(362)
				this->at_index_1 = (int)0;
				HX_STACK_LINE(363)
				::zpp_nape::space::ZPP_Space tmp17 = this->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(363)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp18 = tmp17->c_arbiters_false->head;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(363)
				this->ite_1 = tmp18;
				HX_STACK_LINE(364)
				while((true)){
					HX_STACK_LINE(365)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp19 = this->ite_1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(365)
					::zpp_nape::dynamics::ZPP_ColArbiter x = tmp19->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(366)
					bool tmp20 = x->active;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(366)
					if ((tmp20)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(367)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp21 = this->ite_1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(367)
					this->ite_1 = tmp21->next;
				}
			}
			HX_STACK_LINE(370)
			while((true)){
				HX_STACK_LINE(370)
				int tmp17 = this->at_index_1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(370)
				int tmp18 = offset;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(370)
				bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(370)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(370)
				if ((tmp20)){
					HX_STACK_LINE(370)
					break;
				}
				HX_STACK_LINE(371)
				(this->at_index_1)++;
				HX_STACK_LINE(372)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp21 = this->ite_1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(372)
				this->ite_1 = tmp21->next;
				HX_STACK_LINE(373)
				while((true)){
					HX_STACK_LINE(374)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp22 = this->ite_1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(374)
					::zpp_nape::dynamics::ZPP_ColArbiter x = tmp22->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(375)
					bool tmp23 = x->active;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(375)
					if ((tmp23)){
						HX_STACK_LINE(375)
						break;
					}
					HX_STACK_LINE(376)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp24 = this->ite_1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(376)
					this->ite_1 = tmp24->next;
				}
			}
			HX_STACK_LINE(379)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp17 = this->ite_1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(379)
			::nape::dynamics::Arbiter tmp18 = tmp17->elt->wrapper();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(379)
			ret = tmp18;
		}
		else{
			HX_STACK_LINE(381)
			Array< int > tmp11 = this->lengths;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			int tmp12 = tmp11->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			hx::AddEq(accum_length,tmp12);
		}
	}
	HX_STACK_LINE(383)
	bool tmp5 = (ret == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(383)
	if ((tmp5)){
		HX_STACK_LINE(384)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		int tmp7 = accum_length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		Array< int > tmp8 = this->lengths;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		int tmp9 = tmp8->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11 = (tmp6 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		if ((tmp11)){
			HX_STACK_LINE(385)
			int tmp12 = (index - accum_length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			int offset = tmp12;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(386)
			int tmp13 = offset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			int tmp14 = this->at_index_2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(386)
			bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(386)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(386)
			if ((tmp16)){
				HX_STACK_LINE(386)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp18 = this->ite_2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(386)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(386)
				tmp17 = (tmp19 == null());
			}
			else{
				HX_STACK_LINE(386)
				tmp17 = true;
			}
			HX_STACK_LINE(386)
			if ((tmp17)){
				HX_STACK_LINE(387)
				this->at_index_2 = (int)0;
				HX_STACK_LINE(388)
				::zpp_nape::space::ZPP_Space tmp18 = this->space;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(388)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp19 = tmp18->f_arbiters->head;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(388)
				this->ite_2 = tmp19;
				HX_STACK_LINE(389)
				while((true)){
					HX_STACK_LINE(390)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp20 = this->ite_2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(390)
					::zpp_nape::dynamics::ZPP_FluidArbiter x = tmp20->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(391)
					bool tmp21 = x->active;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(391)
					if ((tmp21)){
						HX_STACK_LINE(391)
						break;
					}
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp22 = this->ite_2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(392)
					this->ite_2 = tmp22->next;
				}
			}
			HX_STACK_LINE(395)
			while((true)){
				HX_STACK_LINE(395)
				int tmp18 = this->at_index_2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(395)
				int tmp19 = offset;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(395)
				bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(395)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(395)
				if ((tmp21)){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(396)
				(this->at_index_2)++;
				HX_STACK_LINE(397)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp22 = this->ite_2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(397)
				this->ite_2 = tmp22->next;
				HX_STACK_LINE(398)
				while((true)){
					HX_STACK_LINE(399)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp23 = this->ite_2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_FluidArbiter x = tmp23->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(400)
					bool tmp24 = x->active;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(400)
					if ((tmp24)){
						HX_STACK_LINE(400)
						break;
					}
					HX_STACK_LINE(401)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp25 = this->ite_2;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(401)
					this->ite_2 = tmp25->next;
				}
			}
			HX_STACK_LINE(404)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp18 = this->ite_2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(404)
			::nape::dynamics::Arbiter tmp19 = tmp18->elt->wrapper();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(404)
			ret = tmp19;
		}
		else{
			HX_STACK_LINE(406)
			Array< int > tmp12 = this->lengths;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			int tmp13 = tmp12->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(406)
			hx::AddEq(accum_length,tmp13);
		}
	}
	HX_STACK_LINE(408)
	bool tmp6 = (ret == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(408)
	if ((tmp6)){
		HX_STACK_LINE(409)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(409)
		int tmp8 = accum_length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(409)
		Array< int > tmp9 = this->lengths;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(409)
		int tmp10 = tmp9->__get((int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(409)
		int tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		bool tmp12 = (tmp7 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(409)
		if ((tmp12)){
			HX_STACK_LINE(410)
			int tmp13 = (index - accum_length);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			int offset = tmp13;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(411)
			int tmp14 = offset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			int tmp15 = this->at_index_3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(411)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(411)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(411)
			if ((tmp17)){
				HX_STACK_LINE(411)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp19 = this->ite_3;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(411)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(411)
				tmp18 = (tmp20 == null());
			}
			else{
				HX_STACK_LINE(411)
				tmp18 = true;
			}
			HX_STACK_LINE(411)
			if ((tmp18)){
				HX_STACK_LINE(412)
				this->at_index_3 = (int)0;
				HX_STACK_LINE(413)
				::zpp_nape::space::ZPP_Space tmp19 = this->space;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(413)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp20 = tmp19->s_arbiters->head;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(413)
				this->ite_3 = tmp20;
				HX_STACK_LINE(414)
				while((true)){
					HX_STACK_LINE(415)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp21 = this->ite_3;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(415)
					::zpp_nape::dynamics::ZPP_SensorArbiter x = tmp21->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(416)
					bool tmp22 = x->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(416)
					if ((tmp22)){
						HX_STACK_LINE(416)
						break;
					}
					HX_STACK_LINE(417)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp23 = this->ite_3;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(417)
					this->ite_3 = tmp23->next;
				}
			}
			HX_STACK_LINE(420)
			while((true)){
				HX_STACK_LINE(420)
				int tmp19 = this->at_index_3;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(420)
				int tmp20 = offset;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(420)
				bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(420)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(420)
				if ((tmp22)){
					HX_STACK_LINE(420)
					break;
				}
				HX_STACK_LINE(421)
				(this->at_index_3)++;
				HX_STACK_LINE(422)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp23 = this->ite_3;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(422)
				this->ite_3 = tmp23->next;
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(424)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp24 = this->ite_3;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(424)
					::zpp_nape::dynamics::ZPP_SensorArbiter x = tmp24->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(425)
					bool tmp25 = x->active;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(425)
					if ((tmp25)){
						HX_STACK_LINE(425)
						break;
					}
					HX_STACK_LINE(426)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp26 = this->ite_3;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(426)
					this->ite_3 = tmp26->next;
				}
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp19 = this->ite_3;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(429)
			::nape::dynamics::Arbiter tmp20 = tmp19->elt->wrapper();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(429)
			ret = tmp20;
		}
		else{
			HX_STACK_LINE(431)
			Array< int > tmp13 = this->lengths;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(431)
			int tmp14 = tmp13->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(431)
			hx::AddEq(accum_length,tmp14);
		}
	}
	HX_STACK_LINE(433)
	::nape::dynamics::Arbiter tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(433)
	return tmp7;
}



ZPP_SpaceArbiterList_obj::ZPP_SpaceArbiterList_obj()
{
}

void ZPP_SpaceArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SpaceArbiterList);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(lengths,"lengths");
	HX_MARK_MEMBER_NAME(ite_0,"ite_0");
	HX_MARK_MEMBER_NAME(ite_1,"ite_1");
	HX_MARK_MEMBER_NAME(ite_2,"ite_2");
	HX_MARK_MEMBER_NAME(ite_3,"ite_3");
	HX_MARK_MEMBER_NAME(at_index_0,"at_index_0");
	HX_MARK_MEMBER_NAME(at_index_1,"at_index_1");
	HX_MARK_MEMBER_NAME(at_index_2,"at_index_2");
	HX_MARK_MEMBER_NAME(at_index_3,"at_index_3");
	::nape::dynamics::ArbiterList_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SpaceArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(lengths,"lengths");
	HX_VISIT_MEMBER_NAME(ite_0,"ite_0");
	HX_VISIT_MEMBER_NAME(ite_1,"ite_1");
	HX_VISIT_MEMBER_NAME(ite_2,"ite_2");
	HX_VISIT_MEMBER_NAME(ite_3,"ite_3");
	HX_VISIT_MEMBER_NAME(at_index_0,"at_index_0");
	HX_VISIT_MEMBER_NAME(at_index_1,"at_index_1");
	HX_VISIT_MEMBER_NAME(at_index_2,"at_index_2");
	HX_VISIT_MEMBER_NAME(at_index_3,"at_index_3");
	::nape::dynamics::ArbiterList_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SpaceArbiterList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"ite_0") ) { return ite_0; }
		if (HX_FIELD_EQ(inName,"ite_1") ) { return ite_1; }
		if (HX_FIELD_EQ(inName,"ite_2") ) { return ite_2; }
		if (HX_FIELD_EQ(inName,"ite_3") ) { return ite_3; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"lengths") ) { return lengths; }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
		if (HX_FIELD_EQ(inName,"at_index_0") ) { return at_index_0; }
		if (HX_FIELD_EQ(inName,"at_index_1") ) { return at_index_1; }
		if (HX_FIELD_EQ(inName,"at_index_2") ) { return at_index_2; }
		if (HX_FIELD_EQ(inName,"at_index_3") ) { return at_index_3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SpaceArbiterList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_0") ) { ite_0=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_1") ) { ite_1=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_2") ) { ite_2=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_3") ) { ite_3=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengths") ) { lengths=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_0") ) { at_index_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_1") ) { at_index_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_2") ) { at_index_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_3") ) { at_index_3=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SpaceArbiterList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_SpaceArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"));
	outFields->push(HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"));
	outFields->push(HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87"));
	outFields->push(HX_HCSTRING("ite_0","\x8b","\x9f","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("ite_1","\x8c","\x9f","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("ite_2","\x8d","\x9f","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("ite_3","\x8e","\x9f","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("at_index_0","\xf7","\xaf","\x12","\x8c"));
	outFields->push(HX_HCSTRING("at_index_1","\xf8","\xaf","\x12","\x8c"));
	outFields->push(HX_HCSTRING("at_index_2","\xf9","\xaf","\x12","\x8c"));
	outFields->push(HX_HCSTRING("at_index_3","\xfa","\xaf","\x12","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,_length),HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d")},
	{hx::fsBool,(int)offsetof(ZPP_SpaceArbiterList_obj,zip_length),HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,lengths),HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_0),HX_HCSTRING("ite_0","\x8b","\x9f","\x0c","\xc2")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_1),HX_HCSTRING("ite_1","\x8c","\x9f","\x0c","\xc2")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_FluidArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_2),HX_HCSTRING("ite_2","\x8d","\x9f","\x0c","\xc2")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_3),HX_HCSTRING("ite_3","\x8e","\x9f","\x0c","\xc2")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_0),HX_HCSTRING("at_index_0","\xf7","\xaf","\x12","\x8c")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_1),HX_HCSTRING("at_index_1","\xf8","\xaf","\x12","\x8c")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_2),HX_HCSTRING("at_index_2","\xf9","\xaf","\x12","\x8c")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_3),HX_HCSTRING("at_index_3","\xfa","\xaf","\x12","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"),
	HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"),
	HX_HCSTRING("zpp_gl","\x8a","\x53","\xbb","\x8e"),
	HX_HCSTRING("lengths","\xcd","\xb4","\x9a","\x87"),
	HX_HCSTRING("ite_0","\x8b","\x9f","\x0c","\xc2"),
	HX_HCSTRING("ite_1","\x8c","\x9f","\x0c","\xc2"),
	HX_HCSTRING("ite_2","\x8d","\x9f","\x0c","\xc2"),
	HX_HCSTRING("ite_3","\x8e","\x9f","\x0c","\xc2"),
	HX_HCSTRING("at_index_0","\xf7","\xaf","\x12","\x8c"),
	HX_HCSTRING("at_index_1","\xf8","\xaf","\x12","\x8c"),
	HX_HCSTRING("at_index_2","\xf9","\xaf","\x12","\x8c"),
	HX_HCSTRING("at_index_3","\xfa","\xaf","\x12","\x8c"),
	HX_HCSTRING("zpp_vm","\x9c","\x60","\xbb","\x8e"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SpaceArbiterList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SpaceArbiterList_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_SpaceArbiterList_obj::__mClass;

void ZPP_SpaceArbiterList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_SpaceArbiterList","\x1f","\xec","\xcb","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_SpaceArbiterList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SpaceArbiterList_obj >;
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
} // end namespace dynamics
