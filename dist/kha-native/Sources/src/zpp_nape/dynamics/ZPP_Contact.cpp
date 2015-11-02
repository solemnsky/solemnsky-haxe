#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_Contact_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","new",0xb5c4a1f4,"zpp_nape.dynamics.ZPP_Contact.new","zpp_nape/dynamics/Contact.hx",174,0xe7cc00d7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(282)
	this->length = (int)0;
	HX_STACK_LINE(281)
	this->pushmod = false;
	HX_STACK_LINE(280)
	this->modified = false;
	HX_STACK_LINE(279)
	this->_inuse = false;
	HX_STACK_LINE(268)
	this->next = null();
	HX_STACK_LINE(232)
	this->elasticity = ((Float)0.0);
	HX_STACK_LINE(231)
	this->dist = ((Float)0.0);
	HX_STACK_LINE(230)
	this->fresh = false;
	HX_STACK_LINE(229)
	this->hash = (int)0;
	HX_STACK_LINE(228)
	this->stamp = (int)0;
	HX_STACK_LINE(227)
	this->posOnly = false;
	HX_STACK_LINE(226)
	this->active = false;
	HX_STACK_LINE(225)
	this->inner = null();
	HX_STACK_LINE(224)
	this->arbiter = null();
	HX_STACK_LINE(213)
	this->wrap_position = null();
	HX_STACK_LINE(187)
	this->py = ((Float)0.0);
	HX_STACK_LINE(186)
	this->px = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(234)
	::zpp_nape::dynamics::ZPP_IContact tmp = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	this->inner = tmp;
}
;
	return null();
}

//ZPP_Contact_obj::~ZPP_Contact_obj() { }

Dynamic ZPP_Contact_obj::__CreateEmpty() { return  new ZPP_Contact_obj; }
hx::ObjectPtr< ZPP_Contact_obj > ZPP_Contact_obj::__new()
{  hx::ObjectPtr< ZPP_Contact_obj > _result_ = new ZPP_Contact_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Contact_obj > _result_ = new ZPP_Contact_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::Contact ZPP_Contact_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","wrapper",0x316000e7,"zpp_nape.dynamics.ZPP_Contact.wrapper","zpp_nape/dynamics/Contact.hx",177,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::nape::dynamics::Contact tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	if ((tmp1)){
		HX_STACK_LINE(179)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = true;
		HX_STACK_LINE(180)
		::nape::dynamics::Contact tmp2 = ::nape::dynamics::Contact_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		this->outer = tmp2;
		HX_STACK_LINE(181)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = false;
		HX_STACK_LINE(182)
		::nape::dynamics::Contact tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(184)
	::nape::dynamics::Contact tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,wrapper,return )

Void ZPP_Contact_obj::position_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","position_validate",0xb6a936c0,"zpp_nape.dynamics.ZPP_Contact.position_validate","zpp_nape/dynamics/Contact.hx",188,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		bool tmp = this->inactiveme();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		if ((tmp)){
			HX_STACK_LINE(190)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Contact not currently in use","\x01","\x5d","\x35","\x04"));
		}
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(193)
			Float tmp1 = this->px;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			::nape::geom::Vec2 tmp2 = this->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			tmp2->zpp_inner->x = tmp1;
			HX_STACK_LINE(194)
			Float tmp3 = this->py;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			::nape::geom::Vec2 tmp4 = this->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			tmp4->zpp_inner->y = tmp3;
			HX_STACK_LINE(203)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,position_validate,(void))

Void ZPP_Contact_obj::getposition( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","getposition",0xc6f72cd3,"zpp_nape.dynamics.ZPP_Contact.getposition","zpp_nape/dynamics/Contact.hx",214,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		::zpp_nape::dynamics::ZPP_Contact me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(216)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(216)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(216)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(216)
			bool tmp1 = (x != x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			if ((tmp2)){
				HX_STACK_LINE(216)
				tmp3 = (y != y);
			}
			else{
				HX_STACK_LINE(216)
				tmp3 = true;
			}
			HX_STACK_LINE(216)
			if ((tmp3)){
				HX_STACK_LINE(216)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(216)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				if ((tmp5)){
					HX_STACK_LINE(216)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(216)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(216)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(216)
					ret = tmp6;
					HX_STACK_LINE(216)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(216)
					ret->zpp_pool = null();
					HX_STACK_LINE(216)
					ret->zpp_disp = false;
					HX_STACK_LINE(216)
					::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(216)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(216)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(216)
					if ((tmp9)){
						HX_STACK_LINE(216)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(216)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			if ((tmp4)){
				HX_STACK_LINE(216)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(216)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(216)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(216)
						if ((tmp7)){
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(216)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(216)
							ret1 = tmp8;
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(216)
							ret1->next = null();
						}
						HX_STACK_LINE(216)
						ret1->weak = false;
					}
					HX_STACK_LINE(216)
					ret1->_immutable = immutable;
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						ret1->x = x;
						HX_STACK_LINE(216)
						ret1->y = y;
						HX_STACK_LINE(216)
						{
						}
					}
					HX_STACK_LINE(216)
					tmp5 = ret1;
				}
				HX_STACK_LINE(216)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(216)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(216)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(216)
					if ((tmp5)){
						HX_STACK_LINE(216)
						tmp6 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(216)
						tmp6 = false;
					}
					HX_STACK_LINE(216)
					if ((tmp6)){
						HX_STACK_LINE(216)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(216)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(216)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(216)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(216)
					if ((tmp5)){
						HX_STACK_LINE(216)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(216)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(216)
					if ((tmp6)){
						HX_STACK_LINE(216)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(216)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(216)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(216)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				if ((tmp6)){
					HX_STACK_LINE(216)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(216)
					tmp7 = true;
				}
				HX_STACK_LINE(216)
				if ((tmp7)){
					HX_STACK_LINE(216)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(216)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(216)
						if ((tmp9)){
							HX_STACK_LINE(216)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(216)
							tmp10 = false;
						}
						HX_STACK_LINE(216)
						if ((tmp10)){
							HX_STACK_LINE(216)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(216)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(216)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						if ((tmp9)){
							HX_STACK_LINE(216)
							_this->_validate();
						}
					}
					HX_STACK_LINE(216)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(216)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(216)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				if ((tmp10)){
					HX_STACK_LINE(216)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(216)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(216)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(216)
							bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(216)
							if ((tmp16)){
								HX_STACK_LINE(216)
								tmp15 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(216)
								tmp15 = false;
							}
							HX_STACK_LINE(216)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(216)
							if ((tmp17)){
								HX_STACK_LINE(216)
								::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(216)
								::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(216)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(216)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(216)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(216)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(216)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(216)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(216)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(216)
							if ((tmp15)){
								HX_STACK_LINE(216)
								_this->_validate();
							}
						}
						HX_STACK_LINE(216)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(216)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(216)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(216)
					tmp11 = false;
				}
				HX_STACK_LINE(216)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				if ((tmp12)){
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(216)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(216)
						{
						}
					}
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(216)
						if ((tmp13)){
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(216)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(216)
				ret;
			}
			HX_STACK_LINE(216)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(216)
			tmp = ret;
		}
		HX_STACK_LINE(216)
		this->wrap_position = tmp;
		HX_STACK_LINE(217)
		::nape::geom::Vec2 tmp1 = this->wrap_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(218)
		::nape::geom::Vec2 tmp2 = this->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		tmp2->zpp_inner->_immutable = true;
		HX_STACK_LINE(219)
		Dynamic tmp3 = this->position_validate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		::nape::geom::Vec2 tmp4 = this->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		tmp4->zpp_inner->_validate = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,getposition,(void))

bool ZPP_Contact_obj::inactiveme( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inactiveme",0x80dab06f,"zpp_nape.dynamics.ZPP_Contact.inactiveme","zpp_nape/dynamics/Contact.hx",221,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	if ((tmp1)){
		HX_STACK_LINE(222)
		::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->arbiter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(222)
		tmp2 = false;
	}
	HX_STACK_LINE(222)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	if ((tmp2)){
		HX_STACK_LINE(222)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->arbiter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		bool tmp6 = tmp5->active;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		tmp3 = !(tmp10);
	}
	else{
		HX_STACK_LINE(222)
		tmp3 = false;
	}
	HX_STACK_LINE(222)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(222)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inactiveme,return )

Void ZPP_Contact_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","free",0x51092c98,"zpp_nape.dynamics.ZPP_Contact.free","zpp_nape/dynamics/Contact.hx",239,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->arbiter = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,free,(void))

Void ZPP_Contact_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","alloc",0xb20b0309,"zpp_nape.dynamics.ZPP_Contact.alloc","zpp_nape/dynamics/Contact.hx",243,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,alloc,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::elem( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","elem",0x505b687b,"zpp_nape.dynamics.ZPP_Contact.elem","zpp_nape/dynamics/Contact.hx",272,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,elem,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","begin",0x40cd48bd,"zpp_nape.dynamics.ZPP_Contact.begin","zpp_nape/dynamics/Contact.hx",276,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,begin,return )

Void ZPP_Contact_obj::setbegin( ::zpp_nape::dynamics::ZPP_Contact i){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","setbegin",0x8327d933,"zpp_nape.dynamics.ZPP_Contact.setbegin","zpp_nape/dynamics/Contact.hx",285,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(286)
		this->next = i;
		HX_STACK_LINE(287)
		this->modified = true;
		HX_STACK_LINE(288)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","add",0xb5bac3b5,"zpp_nape.dynamics.ZPP_Contact.add","zpp_nape/dynamics/Contact.hx",290,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(291)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		::zpp_nape::dynamics::ZPP_Contact tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			o->_inuse = true;
			HX_STACK_LINE(291)
			tmp1 = o;
		}
		HX_STACK_LINE(291)
		::zpp_nape::dynamics::ZPP_Contact temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(291)
		::zpp_nape::dynamics::ZPP_Contact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		temp->next = tmp2;
		HX_STACK_LINE(291)
		this->next = temp;
		HX_STACK_LINE(291)
		this->modified = true;
		HX_STACK_LINE(291)
		(this->length)++;
		HX_STACK_LINE(291)
		tmp = o;
	}
	HX_STACK_LINE(291)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,add,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_add",0xb1e8d221,"zpp_nape.dynamics.ZPP_Contact.inlined_add","zpp_nape/dynamics/Contact.hx",295,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(304)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(305)
		o->_inuse = true;
		HX_STACK_LINE(306)
		tmp = o;
	}
	HX_STACK_LINE(304)
	::zpp_nape::dynamics::ZPP_Contact temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(308)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	temp->next = tmp1;
	HX_STACK_LINE(309)
	this->next = temp;
	HX_STACK_LINE(310)
	this->modified = true;
	HX_STACK_LINE(311)
	(this->length)++;
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_add,return )

Void ZPP_Contact_obj::addAll( ::zpp_nape::dynamics::ZPP_Contact x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","addAll",0x76f66c6c,"zpp_nape.dynamics.ZPP_Contact.addAll","zpp_nape/dynamics/Contact.hx",323,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(324)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			if ((tmp1)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(326)
			::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(327)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			this->add(tmp2);
			HX_STACK_LINE(328)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","insert",0x75d8a625,"zpp_nape.dynamics.ZPP_Contact.insert","zpp_nape/dynamics/Contact.hx",332,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(333)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(333)
		::zpp_nape::dynamics::ZPP_Contact tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			o->_inuse = true;
			HX_STACK_LINE(333)
			tmp1 = o;
		}
		HX_STACK_LINE(333)
		::zpp_nape::dynamics::ZPP_Contact temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(333)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		if ((tmp2)){
			HX_STACK_LINE(333)
			::zpp_nape::dynamics::ZPP_Contact tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			temp->next = tmp3;
			HX_STACK_LINE(333)
			this->next = temp;
		}
		else{
			HX_STACK_LINE(333)
			temp->next = cur->next;
			HX_STACK_LINE(333)
			cur->next = temp;
		}
		HX_STACK_LINE(333)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		this->pushmod = tmp3;
		HX_STACK_LINE(333)
		(this->length)++;
		HX_STACK_LINE(333)
		tmp = temp;
	}
	HX_STACK_LINE(333)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,insert,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_insert",0x52ca6339,"zpp_nape.dynamics.ZPP_Contact.inlined_insert","zpp_nape/dynamics/Contact.hx",337,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(346)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(347)
		o->_inuse = true;
		HX_STACK_LINE(348)
		tmp = o;
	}
	HX_STACK_LINE(346)
	::zpp_nape::dynamics::ZPP_Contact temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(350)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	if ((tmp1)){
		HX_STACK_LINE(351)
		::zpp_nape::dynamics::ZPP_Contact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		temp->next = tmp2;
		HX_STACK_LINE(352)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(355)
		temp->next = cur->next;
		HX_STACK_LINE(356)
		cur->next = temp;
	}
	HX_STACK_LINE(358)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	this->pushmod = tmp2;
	HX_STACK_LINE(359)
	(this->length)++;
	HX_STACK_LINE(360)
	::zpp_nape::dynamics::ZPP_Contact tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(360)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,inlined_insert,return )

Void ZPP_Contact_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","pop",0xb5c62f25,"zpp_nape.dynamics.ZPP_Contact.pop","zpp_nape/dynamics/Contact.hx",363,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		::zpp_nape::dynamics::ZPP_Contact ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(363)
		this->next = ret->next;
		HX_STACK_LINE(363)
		ret->_inuse = false;
		HX_STACK_LINE(363)
		::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		if ((tmp2)){
			HX_STACK_LINE(363)
			this->pushmod = true;
		}
		HX_STACK_LINE(363)
		this->modified = true;
		HX_STACK_LINE(363)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop,(void))

Void ZPP_Contact_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_pop",0xb1f43d91,"zpp_nape.dynamics.ZPP_Contact.inlined_pop","zpp_nape/dynamics/Contact.hx",367,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		::zpp_nape::dynamics::ZPP_Contact ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(377)
		this->next = ret->next;
		HX_STACK_LINE(379)
		ret->_inuse = false;
		HX_STACK_LINE(382)
		::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		if ((tmp2)){
			HX_STACK_LINE(382)
			this->pushmod = true;
		}
		HX_STACK_LINE(383)
		this->modified = true;
		HX_STACK_LINE(384)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","pop_unsafe",0x8ed1c540,"zpp_nape.dynamics.ZPP_Contact.pop_unsafe","zpp_nape/dynamics/Contact.hx",386,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		::zpp_nape::dynamics::ZPP_Contact ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(387)
		this->pop();
		HX_STACK_LINE(387)
		tmp = ret;
	}
	HX_STACK_LINE(387)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_pop_unsafe",0x77e99c54,"zpp_nape.dynamics.ZPP_Contact.inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",391,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(400)
	::zpp_nape::dynamics::ZPP_Contact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(401)
	this->pop();
	HX_STACK_LINE(402)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop_unsafe,return )

Void ZPP_Contact_obj::remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","remove",0xdc83ff30,"zpp_nape.dynamics.ZPP_Contact.remove","zpp_nape/dynamics/Contact.hx",413,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(413)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(413)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		::zpp_nape::dynamics::ZPP_Contact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(413)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(413)
		while((true)){
			HX_STACK_LINE(413)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(413)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(413)
			if ((tmp2)){
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(413)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(413)
			if ((tmp3)){
				HX_STACK_LINE(413)
				{
					HX_STACK_LINE(413)
					::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(413)
					::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(413)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(413)
					if ((tmp4)){
						HX_STACK_LINE(413)
						::zpp_nape::dynamics::ZPP_Contact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(413)
						old = tmp5;
						HX_STACK_LINE(413)
						ret1 = old->next;
						HX_STACK_LINE(413)
						this->next = ret1;
						HX_STACK_LINE(413)
						::zpp_nape::dynamics::ZPP_Contact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(413)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(413)
						if ((tmp7)){
							HX_STACK_LINE(413)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(413)
						old = pre->next;
						HX_STACK_LINE(413)
						ret1 = old->next;
						HX_STACK_LINE(413)
						pre->next = ret1;
						HX_STACK_LINE(413)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(413)
						if ((tmp5)){
							HX_STACK_LINE(413)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(413)
					old->_inuse = false;
					HX_STACK_LINE(413)
					this->modified = true;
					HX_STACK_LINE(413)
					(this->length)--;
					HX_STACK_LINE(413)
					this->pushmod = true;
					HX_STACK_LINE(413)
					ret1;
				}
				HX_STACK_LINE(413)
				ret = true;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(413)
			pre = cur;
			HX_STACK_LINE(413)
			cur = cur->next;
		}
		HX_STACK_LINE(413)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,remove,(void))

bool ZPP_Contact_obj::try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","try_remove",0xa5fbfaf4,"zpp_nape.dynamics.ZPP_Contact.try_remove","zpp_nape/dynamics/Contact.hx",415,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(424)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(425)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	::zpp_nape::dynamics::ZPP_Contact cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(426)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(427)
	while((true)){
		HX_STACK_LINE(427)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		if ((tmp2)){
			HX_STACK_LINE(427)
			break;
		}
		HX_STACK_LINE(428)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		if ((tmp3)){
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			this->erase(tmp4);
			HX_STACK_LINE(430)
			ret = true;
			HX_STACK_LINE(431)
			break;
		}
		HX_STACK_LINE(433)
		pre = cur;
		HX_STACK_LINE(434)
		cur = cur->next;
	}
	HX_STACK_LINE(436)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,try_remove,return )

Void ZPP_Contact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_remove",0xb975bc44,"zpp_nape.dynamics.ZPP_Contact.inlined_remove","zpp_nape/dynamics/Contact.hx",449,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(449)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(449)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		::zpp_nape::dynamics::ZPP_Contact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(449)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(449)
		while((true)){
			HX_STACK_LINE(449)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(449)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(449)
			if ((tmp2)){
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(449)
			if ((tmp3)){
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(449)
					::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(449)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(449)
					if ((tmp4)){
						HX_STACK_LINE(449)
						::zpp_nape::dynamics::ZPP_Contact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(449)
						old = tmp5;
						HX_STACK_LINE(449)
						ret1 = old->next;
						HX_STACK_LINE(449)
						this->next = ret1;
						HX_STACK_LINE(449)
						::zpp_nape::dynamics::ZPP_Contact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(449)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(449)
						if ((tmp7)){
							HX_STACK_LINE(449)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(449)
						old = pre->next;
						HX_STACK_LINE(449)
						ret1 = old->next;
						HX_STACK_LINE(449)
						pre->next = ret1;
						HX_STACK_LINE(449)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(449)
						if ((tmp5)){
							HX_STACK_LINE(449)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(449)
					old->_inuse = false;
					HX_STACK_LINE(449)
					this->modified = true;
					HX_STACK_LINE(449)
					(this->length)--;
					HX_STACK_LINE(449)
					this->pushmod = true;
					HX_STACK_LINE(449)
					ret1;
				}
				HX_STACK_LINE(449)
				ret = true;
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			pre = cur;
			HX_STACK_LINE(449)
			cur = cur->next;
		}
		HX_STACK_LINE(449)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_remove,(void))

bool ZPP_Contact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_try_remove",0x8f13d208,"zpp_nape.dynamics.ZPP_Contact.inlined_try_remove","zpp_nape/dynamics/Contact.hx",453,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(462)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(463)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::zpp_nape::dynamics::ZPP_Contact cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(464)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(465)
	while((true)){
		HX_STACK_LINE(465)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(465)
		if ((tmp2)){
			HX_STACK_LINE(465)
			break;
		}
		HX_STACK_LINE(466)
		bool tmp3 = (cur == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		if ((tmp3)){
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(467)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(467)
				if ((tmp4)){
					HX_STACK_LINE(467)
					::zpp_nape::dynamics::ZPP_Contact tmp5 = this->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					old = tmp5;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					this->next = ret1;
					HX_STACK_LINE(467)
					::zpp_nape::dynamics::ZPP_Contact tmp6 = this->next;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(467)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(467)
					if ((tmp7)){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(467)
					old = pre->next;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					pre->next = ret1;
					HX_STACK_LINE(467)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					if ((tmp5)){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(467)
				old->_inuse = false;
				HX_STACK_LINE(467)
				this->modified = true;
				HX_STACK_LINE(467)
				(this->length)--;
				HX_STACK_LINE(467)
				this->pushmod = true;
				HX_STACK_LINE(467)
				ret1;
			}
			HX_STACK_LINE(468)
			ret = true;
			HX_STACK_LINE(469)
			break;
		}
		HX_STACK_LINE(471)
		pre = cur;
		HX_STACK_LINE(472)
		cur = cur->next;
	}
	HX_STACK_LINE(474)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_try_remove,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","erase",0x0394477a,"zpp_nape.dynamics.ZPP_Contact.erase","zpp_nape/dynamics/Contact.hx",476,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(477)
	::zpp_nape::dynamics::ZPP_Contact tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(477)
		::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(477)
		::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(477)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		if ((tmp1)){
			HX_STACK_LINE(477)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			old = tmp2;
			HX_STACK_LINE(477)
			ret = old->next;
			HX_STACK_LINE(477)
			this->next = ret;
			HX_STACK_LINE(477)
			::zpp_nape::dynamics::ZPP_Contact tmp3 = this->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(477)
			if ((tmp4)){
				HX_STACK_LINE(477)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(477)
			old = pre->next;
			HX_STACK_LINE(477)
			ret = old->next;
			HX_STACK_LINE(477)
			pre->next = ret;
			HX_STACK_LINE(477)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			if ((tmp2)){
				HX_STACK_LINE(477)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(477)
		old->_inuse = false;
		HX_STACK_LINE(477)
		this->modified = true;
		HX_STACK_LINE(477)
		(this->length)--;
		HX_STACK_LINE(477)
		this->pushmod = true;
		HX_STACK_LINE(477)
		tmp = ret;
	}
	HX_STACK_LINE(477)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,erase,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_erase",0xf233c8e6,"zpp_nape.dynamics.ZPP_Contact.inlined_erase","zpp_nape/dynamics/Contact.hx",481,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(490)
	::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(491)
	::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(492)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(492)
	if ((tmp)){
		HX_STACK_LINE(493)
		::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		old = tmp1;
		HX_STACK_LINE(494)
		ret = old->next;
		HX_STACK_LINE(495)
		this->next = ret;
		HX_STACK_LINE(496)
		::zpp_nape::dynamics::ZPP_Contact tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(496)
		if ((tmp3)){
			HX_STACK_LINE(496)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(499)
		old = pre->next;
		HX_STACK_LINE(500)
		ret = old->next;
		HX_STACK_LINE(501)
		pre->next = ret;
		HX_STACK_LINE(502)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		if ((tmp1)){
			HX_STACK_LINE(502)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(505)
	old->_inuse = false;
	HX_STACK_LINE(508)
	this->modified = true;
	HX_STACK_LINE(509)
	(this->length)--;
	HX_STACK_LINE(510)
	this->pushmod = true;
	HX_STACK_LINE(511)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(511)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::splice( ::zpp_nape::dynamics::ZPP_Contact pre,int n){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","splice",0x9799e868,"zpp_nape.dynamics.ZPP_Contact.splice","zpp_nape/dynamics/Contact.hx",513,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(514)
	while((true)){
		HX_STACK_LINE(514)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(514)
		if ((tmp1)){
			HX_STACK_LINE(514)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(514)
			tmp2 = false;
		}
		HX_STACK_LINE(514)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(514)
		if ((tmp3)){
			HX_STACK_LINE(514)
			break;
		}
		HX_STACK_LINE(514)
		::zpp_nape::dynamics::ZPP_Contact tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(514)
		this->erase(tmp4);
	}
	HX_STACK_LINE(515)
	::zpp_nape::dynamics::ZPP_Contact tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,splice,return )

Void ZPP_Contact_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","clear",0xd8d2d021,"zpp_nape.dynamics.ZPP_Contact.clear","zpp_nape/dynamics/Contact.hx",518,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,clear,(void))

Void ZPP_Contact_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_clear",0xc772518d,"zpp_nape.dynamics.ZPP_Contact.inlined_clear","zpp_nape/dynamics/Contact.hx",523,0xe7cc00d7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_clear,(void))

Void ZPP_Contact_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","reverse",0x3ef764b6,"zpp_nape.dynamics.ZPP_Contact.reverse","zpp_nape/dynamics/Contact.hx",528,0xe7cc00d7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(529)
		::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(529)
		::zpp_nape::dynamics::ZPP_Contact cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(530)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(531)
		while((true)){
			HX_STACK_LINE(531)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(531)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(531)
			if ((tmp2)){
				HX_STACK_LINE(531)
				break;
			}
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(533)
			cur->next = pre;
			HX_STACK_LINE(534)
			this->next = cur;
			HX_STACK_LINE(535)
			pre = cur;
			HX_STACK_LINE(536)
			cur = nx;
		}
		HX_STACK_LINE(538)
		this->modified = true;
		HX_STACK_LINE(539)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,reverse,(void))

bool ZPP_Contact_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","empty",0x00519921,"zpp_nape.dynamics.ZPP_Contact.empty","zpp_nape/dynamics/Contact.hx",543,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,empty,return )

int ZPP_Contact_obj::size( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","size",0x599a30ad,"zpp_nape.dynamics.ZPP_Contact.size","zpp_nape/dynamics/Contact.hx",548,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(549)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,size,return )

bool ZPP_Contact_obj::has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","has",0xb5c010ee,"zpp_nape.dynamics.ZPP_Contact.has","zpp_nape/dynamics/Contact.hx",551,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(552)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	{
		HX_STACK_LINE(552)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			ret = false;
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				::zpp_nape::dynamics::ZPP_Contact tmp1 = this->next;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(552)
				::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(552)
				while((true)){
					HX_STACK_LINE(552)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(552)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(552)
					if ((tmp3)){
						HX_STACK_LINE(552)
						break;
					}
					HX_STACK_LINE(552)
					::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(552)
						if ((tmp4)){
							HX_STACK_LINE(552)
							ret = true;
							HX_STACK_LINE(552)
							break;
						}
					}
					HX_STACK_LINE(552)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(552)
		tmp = ret;
	}
	HX_STACK_LINE(552)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,has,return )

bool ZPP_Contact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","inlined_has",0xb1ee1f5a,"zpp_nape.dynamics.ZPP_Contact.inlined_has","zpp_nape/dynamics/Contact.hx",556,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(565)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(566)
	{
		HX_STACK_LINE(567)
		ret = false;
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(569)
			::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(569)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(570)
			while((true)){
				HX_STACK_LINE(570)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(570)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(570)
				if ((tmp2)){
					HX_STACK_LINE(570)
					break;
				}
				HX_STACK_LINE(571)
				::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(572)
				{
					HX_STACK_LINE(573)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(573)
					if ((tmp3)){
						HX_STACK_LINE(574)
						ret = true;
						HX_STACK_LINE(575)
						break;
					}
				}
				HX_STACK_LINE(578)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(582)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_has,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::front( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","front",0x9705773d,"zpp_nape.dynamics.ZPP_Contact.front","zpp_nape/dynamics/Contact.hx",586,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,front,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::back( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","back",0x4e576a13,"zpp_nape.dynamics.ZPP_Contact.back","zpp_nape/dynamics/Contact.hx",589,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	::zpp_nape::dynamics::ZPP_Contact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(591)
	::zpp_nape::dynamics::ZPP_Contact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(592)
	while((true)){
		HX_STACK_LINE(592)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(592)
		if ((tmp2)){
			HX_STACK_LINE(592)
			break;
		}
		HX_STACK_LINE(593)
		ret = cur;
		HX_STACK_LINE(594)
		cur = cur->next;
	}
	HX_STACK_LINE(596)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,back,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","iterator_at",0xb68d0f78,"zpp_nape.dynamics.ZPP_Contact.iterator_at","zpp_nape/dynamics/Contact.hx",598,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(607)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	::zpp_nape::dynamics::ZPP_Contact ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(608)
	while((true)){
		HX_STACK_LINE(608)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(608)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(608)
		if ((tmp2)){
			HX_STACK_LINE(608)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(608)
			tmp3 = false;
		}
		HX_STACK_LINE(608)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(608)
		if ((tmp4)){
			HX_STACK_LINE(608)
			break;
		}
		HX_STACK_LINE(608)
		ret = ret->next;
	}
	HX_STACK_LINE(609)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Contact","at",0xd77cd1df,"zpp_nape.dynamics.ZPP_Contact.at","zpp_nape/dynamics/Contact.hx",611,0xe7cc00d7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(620)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	::zpp_nape::dynamics::ZPP_Contact tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(620)
	::zpp_nape::dynamics::ZPP_Contact it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(621)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	::zpp_nape::dynamics::ZPP_Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	if ((tmp2)){
		HX_STACK_LINE(621)
		tmp3 = it;
	}
	else{
		HX_STACK_LINE(621)
		tmp3 = null();
	}
	HX_STACK_LINE(621)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,at,return )

bool ZPP_Contact_obj::internal;

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::zpp_pool;


ZPP_Contact_obj::ZPP_Contact_obj()
{
}

void ZPP_Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Contact);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(px,"px");
	HX_MARK_MEMBER_NAME(py,"py");
	HX_MARK_MEMBER_NAME(wrap_position,"wrap_position");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(posOnly,"posOnly");
	HX_MARK_MEMBER_NAME(stamp,"stamp");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZPP_Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(px,"px");
	HX_VISIT_MEMBER_NAME(py,"py");
	HX_VISIT_MEMBER_NAME(wrap_position,"wrap_position");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(posOnly,"posOnly");
	HX_VISIT_MEMBER_NAME(stamp,"stamp");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZPP_Contact_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { return px; }
		if (HX_FIELD_EQ(inName,"py") ) { return py; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp; }
		if (HX_FIELD_EQ(inName,"fresh") ) { return fresh; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"arbiter") ) { return arbiter; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { return posOnly; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inactiveme") ) { return inactiveme_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getposition") ) { return getposition_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { return wrap_position; }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"position_validate") ) { return position_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Contact_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"px") ) { px=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"py") ) { py=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stamp") ) { stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { posOnly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { wrap_position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Contact_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return true; }
	}
	return false;
}

void ZPP_Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("px","\x08","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("py","\x09","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb"));
	outFields->push(HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("posOnly","\x20","\x69","\xa1","\xfe"));
	outFields->push(HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"));
	outFields->push(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"));
	outFields->push(HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06"));
	outFields->push(HX_HCSTRING("dist","\x66","\x67","\x69","\x42"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::Contact*/ ,(int)offsetof(ZPP_Contact_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,px),HX_HCSTRING("px","\x08","\x62","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,py),HX_HCSTRING("py","\x09","\x62","\x00","\x00")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Contact_obj,wrap_position),HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_Contact_obj,arbiter),HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_IContact*/ ,(int)offsetof(ZPP_Contact_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,posOnly),HX_HCSTRING("posOnly","\x20","\x69","\xa1","\xfe")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,stamp),HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,hash),HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,fresh),HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,dist),HX_HCSTRING("dist","\x66","\x67","\x69","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_Contact_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(ZPP_Contact_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,_inuse),HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Contact_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_Contact_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Contact_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(void *) &ZPP_Contact_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("px","\x08","\x62","\x00","\x00"),
	HX_HCSTRING("py","\x09","\x62","\x00","\x00"),
	HX_HCSTRING("position_validate","\x2c","\x4a","\x54","\xce"),
	HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb"),
	HX_HCSTRING("getposition","\x3f","\xa7","\x3c","\x17"),
	HX_HCSTRING("inactiveme","\x83","\x67","\xf5","\x67"),
	HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"),
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("posOnly","\x20","\x69","\xa1","\xfe"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06"),
	HX_HCSTRING("dist","\x66","\x67","\x69","\x42"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("_inuse","\xc3","\xd4","\x08","\xba"),
	HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"),
	HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("setbegin","\x47","\xe3","\x5c","\x2b"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("inlined_add","\x8d","\x4c","\x2e","\x02"),
	HX_HCSTRING("addAll","\x80","\x09","\xfb","\x9e"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("inlined_insert","\x4d","\x34","\x10","\xa7"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("inlined_pop","\xfd","\xb7","\x39","\x02"),
	HX_HCSTRING("pop_unsafe","\x54","\x7c","\xec","\x75"),
	HX_HCSTRING("inlined_pop_unsafe","\x68","\x87","\xef","\x15"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("try_remove","\x08","\xb2","\x16","\x8d"),
	HX_HCSTRING("inlined_remove","\x58","\x8d","\xbb","\x0d"),
	HX_HCSTRING("inlined_try_remove","\x1c","\xbd","\x19","\x2d"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("inlined_erase","\x52","\xb6","\x9d","\xfa"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("inlined_clear","\xf9","\x3e","\xdc","\xcf"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("inlined_has","\xc6","\x99","\x33","\x02"),
	HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("iterator_at","\xe4","\x89","\xd2","\x06"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_Contact_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_Contact_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_Contact","\x02","\xd8","\x6f","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Contact_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Contact_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Contact_obj >;
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

void ZPP_Contact_obj::__boot()
{
	internal= false;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
