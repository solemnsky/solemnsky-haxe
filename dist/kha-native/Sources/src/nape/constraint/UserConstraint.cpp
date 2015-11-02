#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
namespace nape{
namespace constraint{

Void UserConstraint_obj::__construct(int dimensions,hx::Null< bool >  __o_velocityOnly)
{
HX_STACK_FRAME("nape.constraint.UserConstraint","new",0x7be6e705,"nape.constraint.UserConstraint.new","nape/constraint/UserConstraint.hx",192,0x5f14de6b)
HX_STACK_THIS(this)
HX_STACK_ARG(dimensions,"dimensions")
HX_STACK_ARG(__o_velocityOnly,"velocityOnly")
bool velocityOnly = __o_velocityOnly.Default(false);
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(378)
	bool tmp = (dimensions < (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	if ((tmp)){
		HX_STACK_LINE(379)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint dimension must be at least 1","\xe2","\xaa","\xa9","\xd6"));
	}
	HX_STACK_LINE(382)
	::zpp_nape::constraint::ZPP_UserConstraint tmp1 = ::zpp_nape::constraint::ZPP_UserConstraint_obj::__new(dimensions,velocityOnly);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	this->zpp_inner_zn = tmp1;
	HX_STACK_LINE(383)
	::zpp_nape::constraint::ZPP_UserConstraint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(383)
	this->zpp_inner = tmp2;
	HX_STACK_LINE(384)
	::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	tmp3->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(385)
	::zpp_nape::constraint::ZPP_UserConstraint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(385)
	tmp4->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(387)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(388)
	super::__construct();
	HX_STACK_LINE(389)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
}
;
	return null();
}

//UserConstraint_obj::~UserConstraint_obj() { }

Dynamic UserConstraint_obj::__CreateEmpty() { return  new UserConstraint_obj; }
hx::ObjectPtr< UserConstraint_obj > UserConstraint_obj::__new(int dimensions,hx::Null< bool >  __o_velocityOnly)
{  hx::ObjectPtr< UserConstraint_obj > _result_ = new UserConstraint_obj();
	_result_->__construct(dimensions,__o_velocityOnly);
	return _result_;}

Dynamic UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UserConstraint_obj > _result_ = new UserConstraint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nape::geom::Vec2 UserConstraint_obj::__bindVec2( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__bindVec2",0xff6e16d6,"nape.constraint.UserConstraint.__bindVec2","nape/constraint/UserConstraint.hx",223,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	::nape::geom::Vec2 ret = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	ret->zpp_inner->_inuse = true;
	HX_STACK_LINE(226)
	::zpp_nape::constraint::ZPP_UserConstraint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	ret->zpp_inner->_invalidate = tmp->bindVec2_invalidate_dyn();
	HX_STACK_LINE(227)
	::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__bindVec2,return )

::nape::constraint::UserConstraint UserConstraint_obj::__copy( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__copy",0xaacbfd50,"nape.constraint.UserConstraint.__copy","nape/constraint/UserConstraint.hx",241,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	HX_STACK_DO_THROW(HX_HCSTRING("Error: UserConstraint::__copy must be overriden","\x27","\xc2","\x9a","\xca"));
	HX_STACK_LINE(245)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__copy,return )

Void UserConstraint_obj::__broken( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__broken",0x46e6d4b0,"nape.constraint.UserConstraint.__broken","nape/constraint/UserConstraint.hx",256,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__broken,(void))

Void UserConstraint_obj::__validate( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__validate",0x483b7bb1,"nape.constraint.UserConstraint.__validate","nape/constraint/UserConstraint.hx",271,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__validate,(void))

Void UserConstraint_obj::__draw( ::nape::util::Debug debug){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__draw",0xab776d9f,"nape.constraint.UserConstraint.__draw","nape/constraint/UserConstraint.hx",282,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(debug,"debug")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__draw,(void))

Void UserConstraint_obj::__prepare( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__prepare",0x4a8902cc,"nape.constraint.UserConstraint.__prepare","nape/constraint/UserConstraint.hx",291,0x5f14de6b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__prepare,(void))

Void UserConstraint_obj::__position( Array< Float > err){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__position",0x0e524bc4,"nape.constraint.UserConstraint.__position","nape/constraint/UserConstraint.hx",302,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_LINE(302)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: UserConstraint::__position must be overriden","\x1b","\x17","\x63","\xf9"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__position,(void))

Void UserConstraint_obj::__velocity( Array< Float > err){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__velocity",0x6255ad38,"nape.constraint.UserConstraint.__velocity","nape/constraint/UserConstraint.hx",315,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_LINE(315)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Userconstraint::__velocity must be overriden","\x6f","\xa9","\x29","\xb9"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__velocity,(void))

Void UserConstraint_obj::__eff_mass( Array< Float > eff){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__eff_mass",0x299a2ce9,"nape.constraint.UserConstraint.__eff_mass","nape/constraint/UserConstraint.hx",337,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eff,"eff")
		HX_STACK_LINE(337)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: UserConstraint::__eff_mass must be overriden","\x80","\x25","\x1b","\xac"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__eff_mass,(void))

Void UserConstraint_obj::__clamp( Array< Float > jAcc){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__clamp",0xc5aa9900,"nape.constraint.UserConstraint.__clamp","nape/constraint/UserConstraint.hx",347,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(jAcc,"jAcc")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__clamp,(void))

Void UserConstraint_obj::__impulse( Array< Float > imp,::nape::phys::Body body,::nape::geom::Vec3 out){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__impulse",0x8068c1fa,"nape.constraint.UserConstraint.__impulse","nape/constraint/UserConstraint.hx",360,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(imp,"imp")
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(out,"out")
		HX_STACK_LINE(360)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: UserConstraint::__impulse must be overriden","\x3b","\xb7","\xc3","\x4a"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UserConstraint_obj,__impulse,(void))

::nape::geom::MatMN UserConstraint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.UserConstraint","impulse",0x80b11dda,"nape.constraint.UserConstraint.impulse","nape/constraint/UserConstraint.hx",400,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	::zpp_nape::constraint::ZPP_UserConstraint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	int tmp1 = tmp->dim;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(tmp1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(402)
	{
		HX_STACK_LINE(402)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(402)
		::zpp_nape::constraint::ZPP_UserConstraint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		int _g = tmp2->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		while((true)){
			HX_STACK_LINE(402)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(402)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(402)
			if ((tmp4)){
				HX_STACK_LINE(402)
				break;
			}
			HX_STACK_LINE(402)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(402)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				bool tmp6 = (i < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(403)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(403)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(403)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(403)
				if ((tmp8)){
					HX_STACK_LINE(403)
					tmp9 = false;
				}
				else{
					HX_STACK_LINE(403)
					tmp9 = true;
				}
				HX_STACK_LINE(403)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(403)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(403)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(403)
				if ((tmp11)){
					HX_STACK_LINE(403)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(403)
					int tmp14 = ret->zpp_inner->m;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(403)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(403)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(403)
					tmp12 = (tmp13 >= tmp16);
				}
				else{
					HX_STACK_LINE(403)
					tmp12 = true;
				}
				HX_STACK_LINE(403)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(403)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(403)
				if ((tmp13)){
					HX_STACK_LINE(403)
					int tmp15 = ret->zpp_inner->n;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(403)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(403)
					tmp14 = ((int)0 >= tmp16);
				}
				else{
					HX_STACK_LINE(403)
					tmp14 = true;
				}
				HX_STACK_LINE(403)
				if ((tmp14)){
					HX_STACK_LINE(403)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
				}
				HX_STACK_LINE(403)
				Array< Float > tmp15 = ret->zpp_inner->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(403)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(403)
				int tmp17 = ret->zpp_inner->n;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(403)
				int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(403)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(403)
				::zpp_nape::constraint::ZPP_UserConstraint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(403)
				Array< Float > tmp21 = tmp20->jAcc;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(403)
				int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(403)
				Float tmp23 = tmp21->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(403)
				tmp15[tmp19] = tmp23;
			}
		}
	}
	HX_STACK_LINE(405)
	::nape::geom::MatMN tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	return tmp2;
}


::nape::geom::Vec3 UserConstraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.UserConstraint","bodyImpulse",0xdad439d8,"nape.constraint.UserConstraint.bodyImpulse","nape/constraint/UserConstraint.hx",410,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(412)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	if ((tmp)){
		HX_STACK_LINE(413)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(415)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(416)
		::zpp_nape::constraint::ZPP_UserConstraint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		Array< ::Dynamic > _g1 = tmp1->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(416)
		while((true)){
			HX_STACK_LINE(416)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			if ((tmp3)){
				HX_STACK_LINE(416)
				break;
			}
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_UserBody tmp4 = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_UserBody b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(416)
			++(_g);
			HX_STACK_LINE(417)
			bool tmp5 = (b->body == body->zpp_inner);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			if ((tmp5)){
				HX_STACK_LINE(418)
				found = true;
				HX_STACK_LINE(419)
				break;
			}
		}
	}
	HX_STACK_LINE(422)
	bool tmp1 = found;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(422)
	if ((tmp2)){
		HX_STACK_LINE(423)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(426)
	::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(426)
	bool tmp4 = tmp3->active;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(426)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(426)
	if ((tmp5)){
		HX_STACK_LINE(427)
		::nape::geom::Vec3 tmp6 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		return tmp6;
	}
	else{
		HX_STACK_LINE(430)
		::zpp_nape::constraint::ZPP_UserConstraint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(430)
		::zpp_nape::phys::ZPP_Body tmp7 = body->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(430)
		::nape::geom::Vec3 tmp8 = tmp6->bodyImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(430)
		return tmp8;
	}
	HX_STACK_LINE(426)
	return null();
}


Void UserConstraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","visitBodies",0x5f90b750,"nape.constraint.UserConstraint.visitBodies","nape/constraint/UserConstraint.hx",436,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(437)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(438)
		::zpp_nape::constraint::ZPP_UserConstraint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		int tmp1 = tmp->bodies->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		int nbodies = tmp1;		HX_STACK_VAR(nbodies,"nbodies");
		HX_STACK_LINE(439)
		while((true)){
			HX_STACK_LINE(439)
			bool tmp2 = (i < nbodies);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(439)
			if ((tmp3)){
				HX_STACK_LINE(439)
				break;
			}
			HX_STACK_LINE(440)
			::zpp_nape::constraint::ZPP_UserConstraint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			Array< ::Dynamic > tmp5 = tmp4->bodies;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(440)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(440)
			::zpp_nape::constraint::ZPP_UserBody tmp7 = tmp5->__get(tmp6).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(440)
			::zpp_nape::constraint::ZPP_UserBody b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(441)
			bool tmp8 = (b->body != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(441)
			if ((tmp8)){
				HX_STACK_LINE(442)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(443)
				{
					HX_STACK_LINE(443)
					int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(443)
					int _g = tmp9;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(443)
					while((true)){
						HX_STACK_LINE(443)
						bool tmp10 = (_g < nbodies);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(443)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(443)
						if ((tmp11)){
							HX_STACK_LINE(443)
							break;
						}
						HX_STACK_LINE(443)
						int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(443)
						int j = tmp12;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(444)
						::zpp_nape::constraint::ZPP_UserConstraint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(444)
						Array< ::Dynamic > tmp14 = tmp13->bodies;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(444)
						int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(444)
						::zpp_nape::constraint::ZPP_UserBody tmp16 = tmp14->__get(tmp15).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(444)
						::zpp_nape::constraint::ZPP_UserBody c = tmp16;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(445)
						bool tmp17 = (c->body == b->body);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(445)
						if ((tmp17)){
							HX_STACK_LINE(446)
							found = true;
							HX_STACK_LINE(447)
							break;
						}
					}
				}
				HX_STACK_LINE(450)
				bool tmp9 = found;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(450)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(450)
				if ((tmp10)){
					HX_STACK_LINE(451)
					::nape::phys::Body tmp11 = b->body->outer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(451)
					lambda(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(454)
			(i)++;
		}
	}
return null();
}


Void UserConstraint_obj::__invalidate( ){
{
		HX_STACK_FRAME("nape.constraint.UserConstraint","__invalidate",0x10170156,"nape.constraint.UserConstraint.__invalidate","nape/constraint/UserConstraint.hx",468,0x5f14de6b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		tmp->immutable_midstep(HX_HCSTRING("UserConstraint::invalidate()","\xa4","\x90","\xd0","\x1f"));
		HX_STACK_LINE(470)
		::zpp_nape::constraint::ZPP_Constraint tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		if ((tmp2)){
			HX_STACK_LINE(470)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(470)
			::zpp_nape::constraint::ZPP_Constraint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(470)
			::zpp_nape::space::ZPP_Space tmp6 = tmp5->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(470)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(470)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(470)
			::nape::space::Space tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(470)
			bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(470)
			if ((tmp10)){
				HX_STACK_LINE(470)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(470)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(470)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(470)
				::nape::space::Space tmp13 = tmp12->space->outer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(470)
				tmp9 = tmp13;
			}
			HX_STACK_LINE(470)
			tmp3 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(470)
			tmp3 = false;
		}
		HX_STACK_LINE(470)
		if ((tmp3)){
			HX_STACK_LINE(471)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(471)
			tmp4->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__invalidate,(void))

::nape::phys::Body UserConstraint_obj::__registerBody( ::nape::phys::Body oldBody,::nape::phys::Body newBody){
	HX_STACK_FRAME("nape.constraint.UserConstraint","__registerBody",0x08e58f40,"nape.constraint.UserConstraint.__registerBody","nape/constraint/UserConstraint.hx",503,0x5f14de6b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(oldBody,"oldBody")
	HX_STACK_ARG(newBody,"newBody")
	HX_STACK_LINE(504)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	tmp->immutable_midstep(HX_HCSTRING("UserConstraint::registerBody(..)","\x4e","\x9d","\xe9","\xa6"));
	HX_STACK_LINE(505)
	bool tmp1 = (oldBody != newBody);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(505)
	if ((tmp1)){
		HX_STACK_LINE(506)
		bool tmp2 = (oldBody != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		if ((tmp2)){
			HX_STACK_LINE(507)
			::zpp_nape::constraint::ZPP_UserConstraint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(507)
			::zpp_nape::phys::ZPP_Body tmp4 = oldBody->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			bool tmp5 = tmp3->remBody(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(507)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(507)
			if ((tmp6)){
				HX_STACK_LINE(509)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: oldBody is not registered to the cosntraint","\x47","\xeb","\x23","\xca"));
			}
			HX_STACK_LINE(512)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(512)
			bool tmp8 = tmp7->active;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(512)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(512)
			if ((tmp8)){
				HX_STACK_LINE(512)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(512)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(512)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(512)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(512)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(512)
				::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(512)
				bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(512)
				if ((tmp16)){
					HX_STACK_LINE(512)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(512)
					::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(512)
					::zpp_nape::constraint::ZPP_Constraint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(512)
					::nape::space::Space tmp19 = tmp18->space->outer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(512)
					tmp15 = tmp19;
				}
				HX_STACK_LINE(512)
				tmp9 = (tmp15 != null());
			}
			else{
				HX_STACK_LINE(512)
				tmp9 = false;
			}
			HX_STACK_LINE(512)
			if ((tmp9)){
				HX_STACK_LINE(513)
				oldBody->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(516)
		bool tmp3 = (newBody != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		if ((tmp3)){
			HX_STACK_LINE(517)
			::zpp_nape::constraint::ZPP_UserConstraint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(517)
			::zpp_nape::phys::ZPP_Body tmp5 = newBody->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(517)
			tmp4->addBody(tmp5);
		}
		HX_STACK_LINE(519)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(519)
		tmp4->wake();
		HX_STACK_LINE(520)
		bool tmp5 = (newBody != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		if ((tmp5)){
			HX_STACK_LINE(521)
			newBody->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(524)
	::nape::phys::Body tmp2 = newBody;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(UserConstraint_obj,__registerBody,return )


UserConstraint_obj::UserConstraint_obj()
{
}

void UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserConstraint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UserConstraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		if (HX_FIELD_EQ(inName,"__draw") ) { return __draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { return __clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__broken") ) { return __broken_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
		if (HX_FIELD_EQ(inName,"__impulse") ) { return __impulse_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__bindVec2") ) { return __bindVec2_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate") ) { return __validate_dyn(); }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"__velocity") ) { return __velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"__eff_mass") ) { return __eff_mass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"__invalidate") ) { return __invalidate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__registerBody") ) { return __registerBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UserConstraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_UserConstraint*/ ,(int)offsetof(UserConstraint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("__bindVec2","\xdb","\xde","\x4e","\x5f"),
	HX_HCSTRING("__copy","\xd5","\x1e","\xbd","\xf0"),
	HX_HCSTRING("__broken","\x75","\x21","\x87","\xc4"),
	HX_HCSTRING("__validate","\xb6","\x43","\x1c","\xa8"),
	HX_HCSTRING("__draw","\x24","\x8f","\x68","\xf1"),
	HX_HCSTRING("__prepare","\x67","\xe2","\x2b","\xb9"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("__velocity","\x3d","\x75","\x36","\xc2"),
	HX_HCSTRING("__eff_mass","\xee","\xf4","\x7a","\x89"),
	HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2"),
	HX_HCSTRING("__impulse","\x95","\xa1","\x0b","\xef"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	HX_HCSTRING("__invalidate","\x9b","\x94","\xbd","\xbf"),
	HX_HCSTRING("__registerBody","\xc5","\x3d","\xcb","\xdd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

#endif

hx::Class UserConstraint_obj::__mClass;

void UserConstraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.UserConstraint","\x93","\x00","\x44","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UserConstraint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UserConstraint_obj >;
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
} // end namespace constraint
