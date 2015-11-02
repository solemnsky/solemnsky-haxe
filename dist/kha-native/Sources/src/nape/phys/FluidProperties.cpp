#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void FluidProperties_obj::__construct(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{
HX_STACK_FRAME("nape.phys.FluidProperties","new",0x937b9199,"nape.phys.FluidProperties.new","nape/phys/FluidProperties.hx",177,0xe22a5857)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_density,"density")
HX_STACK_ARG(__o_viscosity,"viscosity")
Float density = __o_density.Default(1);
Float viscosity = __o_viscosity.Default(1);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(224)
		::zpp_nape::phys::ZPP_FluidProperties tmp = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		if ((tmp1)){
			HX_STACK_LINE(225)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			this->zpp_inner = tmp2;
		}
		else{
			HX_STACK_LINE(231)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			this->zpp_inner = tmp2;
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_FluidProperties tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = tmp3->next;
			HX_STACK_LINE(233)
			::zpp_nape::phys::ZPP_FluidProperties tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			tmp4->next = null();
		}
		HX_STACK_LINE(238)
		Dynamic();
	}
	HX_STACK_LINE(240)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	tmp->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			Float tmp1 = density;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(241)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			Float tmp3 = tmp2->density;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(241)
			if ((tmp4)){
				HX_STACK_LINE(241)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(241)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(241)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(241)
			if ((tmp7)){
				HX_STACK_LINE(241)
				bool tmp8 = (density != density);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(241)
				if ((tmp8)){
					HX_STACK_LINE(241)
					::String tmp9 = HX_HCSTRING("Error: FluidProperties::density","\x59","\xbd","\x7a","\xec");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(241)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(241)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(241)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(241)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(241)
				if ((tmp9)){
					HX_STACK_LINE(241)
					tmp10 = (density < (int)0);
				}
				else{
					HX_STACK_LINE(241)
					tmp10 = false;
				}
				HX_STACK_LINE(241)
				if ((tmp10)){
					HX_STACK_LINE(241)
					::String tmp11 = HX_HCSTRING("Error: FluidProperties::density","\x59","\xbd","\x7a","\xec");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(241)
					::String tmp12 = (tmp11 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					Float tmp13 = density;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(241)
					::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(241)
					::String tmp15 = (tmp14 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(241)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(241)
				Float tmp11 = density;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(241)
				bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(241)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(241)
				if ((tmp12)){
					HX_STACK_LINE(241)
					tmp13 = (int)1000;
				}
				else{
					HX_STACK_LINE(241)
					tmp13 = (int)1;
				}
				HX_STACK_LINE(241)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(241)
				::zpp_nape::phys::ZPP_FluidProperties tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(241)
				tmp15->density = tmp14;
				HX_STACK_LINE(241)
				::zpp_nape::phys::ZPP_FluidProperties tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(241)
				tmp16->invalidate();
			}
		}
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		Float tmp2 = tmp1->density;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		if ((tmp3)){
			HX_STACK_LINE(241)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(241)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(241)
		(tmp2 * tmp4);
	}
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			Float tmp1 = viscosity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			Float tmp3 = tmp2->viscosity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(242)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			if ((tmp4)){
				HX_STACK_LINE(242)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(242)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(242)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(242)
			if ((tmp7)){
				HX_STACK_LINE(242)
				bool tmp8 = (viscosity != viscosity);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(242)
				if ((tmp8)){
					HX_STACK_LINE(242)
					::String tmp9 = HX_HCSTRING("Error: FluidProperties::viscosity","\xd8","\xc1","\x52","\xa6");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(242)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(242)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(242)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(242)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(242)
				if ((tmp9)){
					HX_STACK_LINE(242)
					tmp10 = (viscosity < (int)0);
				}
				else{
					HX_STACK_LINE(242)
					tmp10 = false;
				}
				HX_STACK_LINE(242)
				if ((tmp10)){
					HX_STACK_LINE(242)
					::String tmp11 = HX_HCSTRING("Error: FluidProperties::viscosity","\xd8","\xc1","\x52","\xa6");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(242)
					::String tmp12 = (tmp11 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(242)
					Float tmp13 = viscosity;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(242)
					::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(242)
					::String tmp15 = (tmp14 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(242)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(242)
				Float tmp11 = viscosity;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(242)
				bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(242)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(242)
				if ((tmp12)){
					HX_STACK_LINE(242)
					tmp13 = (int)1000;
				}
				else{
					HX_STACK_LINE(242)
					tmp13 = (int)1;
				}
				HX_STACK_LINE(242)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(242)
				::zpp_nape::phys::ZPP_FluidProperties tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				tmp15->viscosity = tmp14;
				HX_STACK_LINE(242)
				::zpp_nape::phys::ZPP_FluidProperties tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(242)
				tmp16->invalidate();
			}
		}
		HX_STACK_LINE(242)
		::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = tmp1->viscosity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		if ((tmp3)){
			HX_STACK_LINE(242)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(242)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(242)
		(tmp2 * tmp4);
	}
}
;
	return null();
}

//FluidProperties_obj::~FluidProperties_obj() { }

Dynamic FluidProperties_obj::__CreateEmpty() { return  new FluidProperties_obj; }
hx::ObjectPtr< FluidProperties_obj > FluidProperties_obj::__new(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{  hx::ObjectPtr< FluidProperties_obj > _result_ = new FluidProperties_obj();
	_result_->__construct(__o_density,__o_viscosity);
	return _result_;}

Dynamic FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidProperties_obj > _result_ = new FluidProperties_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic FluidProperties_obj::get_userData( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_userData",0xff2f19c5,"nape.phys.FluidProperties.get_userData","nape/phys/FluidProperties.hx",195,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/FluidProperties.hx",197,0xe22a5857)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::zpp_nape::phys::ZPP_FluidProperties tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(199)
	::zpp_nape::phys::ZPP_FluidProperties tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_userData,return )

::nape::shape::ShapeList FluidProperties_obj::get_shapes( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_shapes",0x01af11e2,"nape.phys.FluidProperties.get_shapes","nape/phys/FluidProperties.hx",210,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::nape::shape::ShapeList tmp1 = tmp->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_FluidProperties tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = tmp3->shapes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		::nape::shape::ShapeList tmp5 = ::zpp_nape::util::ZPP_ShapeList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_FluidProperties tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		tmp6->wrap_shapes = tmp5;
	}
	HX_STACK_LINE(212)
	::zpp_nape::phys::ZPP_FluidProperties tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	::nape::shape::ShapeList tmp4 = tmp3->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_shapes,return )

::nape::phys::FluidProperties FluidProperties_obj::copy( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","copy",0x71660c5c,"nape.phys.FluidProperties.copy","nape/phys/FluidProperties.hx",254,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	if ((tmp2)){
		HX_STACK_LINE(255)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(255)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(255)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_FluidProperties tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(255)
	Float tmp6 = tmp5->viscosity;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(255)
	bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(255)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(255)
	if ((tmp7)){
		HX_STACK_LINE(255)
		tmp8 = (int)1000;
	}
	else{
		HX_STACK_LINE(255)
		tmp8 = (int)1;
	}
	HX_STACK_LINE(255)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(255)
	::nape::phys::FluidProperties ret = ::nape::phys::FluidProperties_obj::__new(tmp4,tmp9);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	::zpp_nape::phys::ZPP_FluidProperties tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(256)
	Dynamic tmp11 = tmp10->userData;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(256)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(256)
	if ((tmp12)){
		HX_STACK_LINE(256)
		::zpp_nape::phys::ZPP_FluidProperties tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(256)
		Dynamic tmp14 = tmp13->userData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(256)
		Dynamic tmp15 = ::Reflect_obj::copy(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(256)
		ret->zpp_inner->userData = tmp15;
	}
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_FluidProperties tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(257)
		::nape::geom::Vec2 gravity = tmp13->wrap_gravity;		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			bool tmp14 = (gravity == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(257)
			if ((tmp14)){
				HX_STACK_LINE(257)
				::nape::geom::Vec2 tmp15 = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(257)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(257)
				if ((tmp16)){
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp17 = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(257)
					tmp17->zpp_inner->_inuse = false;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::nape::geom::Vec2 tmp18 = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						::nape::geom::Vec2 _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(257)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							if ((tmp19)){
								HX_STACK_LINE(257)
								tmp20 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(257)
								tmp20 = false;
							}
							HX_STACK_LINE(257)
							if ((tmp20)){
								HX_STACK_LINE(257)
								::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(257)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							bool tmp19 = _this1->_immutable;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(257)
							if ((tmp19)){
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(257)
							bool tmp20 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							if ((tmp20)){
								HX_STACK_LINE(257)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(257)
						bool tmp19 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(257)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(257)
						_this->zpp_inner = null();
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							o->zpp_pool = null();
							HX_STACK_LINE(257)
							::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							if ((tmp21)){
								HX_STACK_LINE(257)
								::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(257)
								tmp22->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(257)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(257)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								bool tmp20 = (o->outer != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(257)
								if ((tmp20)){
									HX_STACK_LINE(257)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(257)
									o->outer = null();
								}
								HX_STACK_LINE(257)
								o->_isimmutable = null();
								HX_STACK_LINE(257)
								o->_validate = null();
								HX_STACK_LINE(257)
								o->_invalidate = null();
							}
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							o->next = tmp20;
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(257)
					ret->zpp_inner->wrap_gravity = null();
				}
			}
			else{
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					bool tmp15 = (gravity != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(257)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(257)
					if ((tmp15)){
						HX_STACK_LINE(257)
						tmp16 = gravity->zpp_disp;
					}
					else{
						HX_STACK_LINE(257)
						tmp16 = false;
					}
					HX_STACK_LINE(257)
					if ((tmp16)){
						HX_STACK_LINE(257)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(257)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(257)
				::nape::geom::Vec2 tmp15 = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(257)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(257)
				if ((tmp16)){
					HX_STACK_LINE(257)
					ret->zpp_inner->getgravity();
				}
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp17 = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(257)
					::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp18)){
							HX_STACK_LINE(257)
							tmp19 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(257)
							tmp19 = false;
						}
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						bool tmp18 = (gravity != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp18)){
							HX_STACK_LINE(257)
							tmp19 = gravity->zpp_disp;
						}
						else{
							HX_STACK_LINE(257)
							tmp19 = false;
						}
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(257)
						bool tmp18 = _this1->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						if ((tmp18)){
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(257)
						bool tmp19 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(257)
					bool tmp18 = (gravity == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(257)
					if ((tmp18)){
						HX_STACK_LINE(257)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
					}
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							bool tmp21 = (gravity != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							if ((tmp21)){
								HX_STACK_LINE(257)
								tmp22 = gravity->zpp_disp;
							}
							else{
								HX_STACK_LINE(257)
								tmp22 = false;
							}
							HX_STACK_LINE(257)
							if ((tmp22)){
								HX_STACK_LINE(257)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(257)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(tmp24);
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(257)
								bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(257)
								if ((tmp23)){
									HX_STACK_LINE(257)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(257)
							tmp20 = gravity->zpp_inner->x;
						}
						HX_STACK_LINE(257)
						Float x = tmp20;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(257)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							bool tmp22 = (gravity != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							if ((tmp22)){
								HX_STACK_LINE(257)
								tmp23 = gravity->zpp_disp;
							}
							else{
								HX_STACK_LINE(257)
								tmp23 = false;
							}
							HX_STACK_LINE(257)
							if ((tmp23)){
								HX_STACK_LINE(257)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(257)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(tmp25);
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(257)
								bool tmp24 = (_this1->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(257)
								if ((tmp24)){
									HX_STACK_LINE(257)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(257)
							tmp21 = gravity->zpp_inner->y;
						}
						HX_STACK_LINE(257)
						Float y = tmp21;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							bool tmp22 = (_this != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							if ((tmp22)){
								HX_STACK_LINE(257)
								tmp23 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(257)
								tmp23 = false;
							}
							HX_STACK_LINE(257)
							if ((tmp23)){
								HX_STACK_LINE(257)
								::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(257)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(tmp25);
							}
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							bool tmp22 = _this1->_immutable;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							if ((tmp22)){
								HX_STACK_LINE(257)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(257)
							bool tmp23 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							if ((tmp23)){
								HX_STACK_LINE(257)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(257)
						bool tmp22 = (x != x);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(257)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(257)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(257)
						if ((tmp23)){
							HX_STACK_LINE(257)
							tmp24 = (y != y);
						}
						else{
							HX_STACK_LINE(257)
							tmp24 = true;
						}
						HX_STACK_LINE(257)
						if ((tmp24)){
							HX_STACK_LINE(257)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(257)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								bool tmp26 = (_this != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(257)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(257)
								if ((tmp26)){
									HX_STACK_LINE(257)
									tmp27 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(257)
									tmp27 = false;
								}
								HX_STACK_LINE(257)
								if ((tmp27)){
									HX_STACK_LINE(257)
									::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(257)
									::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(257)
									HX_STACK_DO_THROW(tmp29);
								}
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(257)
								bool tmp26 = (_this1->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(257)
								if ((tmp26)){
									HX_STACK_LINE(257)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(257)
							tmp25 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(257)
						Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(257)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(257)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(257)
						if ((tmp27)){
							HX_STACK_LINE(257)
							Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									bool tmp30 = (_this != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(257)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(257)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(257)
									bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(257)
									if ((tmp33)){
										HX_STACK_LINE(257)
										tmp32 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(257)
										tmp32 = false;
									}
									HX_STACK_LINE(257)
									bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(257)
									if ((tmp34)){
										HX_STACK_LINE(257)
										::String tmp35 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(257)
										::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(257)
										::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(257)
										::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(257)
										::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(257)
										HX_STACK_DO_THROW(tmp39);
									}
								}
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(257)
									bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(257)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(257)
									bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(257)
									if ((tmp32)){
										HX_STACK_LINE(257)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(257)
								Float tmp30 = _this->zpp_inner->y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(257)
								tmp29 = tmp30;
							}
							HX_STACK_LINE(257)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(257)
							tmp28 = (tmp29 == tmp30);
						}
						else{
							HX_STACK_LINE(257)
							tmp28 = false;
						}
						HX_STACK_LINE(257)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(257)
						if ((tmp29)){
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(257)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(257)
								{
								}
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(257)
								bool tmp30 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(257)
								if ((tmp30)){
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 tmp31 = _this1;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(257)
									_this1->_invalidate(tmp31);
								}
							}
						}
						HX_STACK_LINE(257)
						tmp19 = _this;
					}
					HX_STACK_LINE(257)
					::nape::geom::Vec2 ret1 = tmp19;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(257)
						tmp20 = gravity->zpp_inner->weak;
						HX_STACK_LINE(257)
						if ((tmp20)){
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									bool tmp21 = (gravity != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(257)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(257)
									if ((tmp21)){
										HX_STACK_LINE(257)
										tmp22 = gravity->zpp_disp;
									}
									else{
										HX_STACK_LINE(257)
										tmp22 = false;
									}
									HX_STACK_LINE(257)
									if ((tmp22)){
										HX_STACK_LINE(257)
										::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(257)
										::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(257)
										HX_STACK_DO_THROW(tmp24);
									}
								}
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(257)
									bool tmp21 = _this1->_immutable;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(257)
									if ((tmp21)){
										HX_STACK_LINE(257)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(257)
									bool tmp22 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(257)
									if ((tmp22)){
										HX_STACK_LINE(257)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(257)
								bool tmp21 = gravity->zpp_inner->_inuse;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(257)
								if ((tmp21)){
									HX_STACK_LINE(257)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
								}
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(257)
								gravity->zpp_inner->outer = null();
								HX_STACK_LINE(257)
								gravity->zpp_inner = null();
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(257)
									o->zpp_pool = null();
									HX_STACK_LINE(257)
									::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(257)
									bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(257)
									if ((tmp23)){
										HX_STACK_LINE(257)
										::nape::geom::Vec2 tmp24 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(257)
										tmp24->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(257)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(257)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(257)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										bool tmp22 = (o->outer != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(257)
										if ((tmp22)){
											HX_STACK_LINE(257)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(257)
											o->outer = null();
										}
										HX_STACK_LINE(257)
										o->_isimmutable = null();
										HX_STACK_LINE(257)
										o->_validate = null();
										HX_STACK_LINE(257)
										o->_invalidate = null();
									}
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(257)
									o->next = tmp22;
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(257)
							true;
						}
						else{
							HX_STACK_LINE(257)
							false;
						}
					}
					HX_STACK_LINE(257)
					ret1;
				}
			}
		}
		HX_STACK_LINE(257)
		ret->zpp_inner->wrap_gravity;
	}
	HX_STACK_LINE(258)
	::nape::phys::FluidProperties tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(258)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,copy,return )

Float FluidProperties_obj::get_density( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_density",0x52e0c238,"nape.phys.FluidProperties.get_density","nape/phys/FluidProperties.hx",268,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	if ((tmp2)){
		HX_STACK_LINE(269)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(269)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(269)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_density,return )

Float FluidProperties_obj::set_density( Float density){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_density",0x5d4dc944,"nape.phys.FluidProperties.set_density","nape/phys/FluidProperties.hx",271,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(density,"density")
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(273)
		Float tmp = density;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		Float tmp2 = tmp1->density;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		if ((tmp3)){
			HX_STACK_LINE(273)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(273)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(273)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(273)
		if ((tmp6)){
			HX_STACK_LINE(275)
			bool tmp7 = (density != density);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			if ((tmp7)){
				HX_STACK_LINE(275)
				::String tmp8 = HX_HCSTRING("Error: FluidProperties::density","\x59","\xbd","\x7a","\xec");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(275)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(275)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(276)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(276)
			if ((tmp8)){
				HX_STACK_LINE(276)
				tmp9 = (density < (int)0);
			}
			else{
				HX_STACK_LINE(276)
				tmp9 = false;
			}
			HX_STACK_LINE(276)
			if ((tmp9)){
				HX_STACK_LINE(276)
				::String tmp10 = HX_HCSTRING("Error: FluidProperties::density","\x59","\xbd","\x7a","\xec");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(276)
				::String tmp11 = (tmp10 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(276)
				Float tmp12 = density;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(276)
				::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(276)
				::String tmp14 = (tmp13 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(276)
				HX_STACK_DO_THROW(tmp14);
			}
			HX_STACK_LINE(278)
			Float tmp10 = density;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(278)
			bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(278)
			if ((tmp11)){
				HX_STACK_LINE(278)
				tmp12 = (int)1000;
			}
			else{
				HX_STACK_LINE(278)
				tmp12 = (int)1;
			}
			HX_STACK_LINE(278)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(278)
			::zpp_nape::phys::ZPP_FluidProperties tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(278)
			tmp14->density = tmp13;
			HX_STACK_LINE(279)
			::zpp_nape::phys::ZPP_FluidProperties tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(279)
			tmp15->invalidate();
		}
	}
	HX_STACK_LINE(282)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(282)
	if ((tmp2)){
		HX_STACK_LINE(282)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(282)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(282)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(282)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_density,return )

Float FluidProperties_obj::get_viscosity( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_viscosity",0xf5eafc77,"nape.phys.FluidProperties.get_viscosity","nape/phys/FluidProperties.hx",293,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = tmp->viscosity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(294)
	if ((tmp2)){
		HX_STACK_LINE(294)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(294)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(294)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(294)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_viscosity,return )

Float FluidProperties_obj::set_viscosity( Float viscosity){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_viscosity",0x3af0de83,"nape.phys.FluidProperties.set_viscosity","nape/phys/FluidProperties.hx",296,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(viscosity,"viscosity")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		Float tmp = viscosity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		Float tmp2 = tmp1->viscosity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		if ((tmp3)){
			HX_STACK_LINE(298)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(298)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(298)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		if ((tmp6)){
			HX_STACK_LINE(300)
			bool tmp7 = (viscosity != viscosity);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(300)
			if ((tmp7)){
				HX_STACK_LINE(300)
				::String tmp8 = HX_HCSTRING("Error: FluidProperties::viscosity","\xd8","\xc1","\x52","\xa6");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(301)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			if ((tmp8)){
				HX_STACK_LINE(301)
				tmp9 = (viscosity < (int)0);
			}
			else{
				HX_STACK_LINE(301)
				tmp9 = false;
			}
			HX_STACK_LINE(301)
			if ((tmp9)){
				HX_STACK_LINE(301)
				::String tmp10 = HX_HCSTRING("Error: FluidProperties::viscosity","\xd8","\xc1","\x52","\xa6");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(301)
				::String tmp11 = (tmp10 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(301)
				Float tmp12 = viscosity;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(301)
				::String tmp14 = (tmp13 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(301)
				HX_STACK_DO_THROW(tmp14);
			}
			HX_STACK_LINE(303)
			Float tmp10 = viscosity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(303)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(303)
			if ((tmp11)){
				HX_STACK_LINE(303)
				tmp12 = (int)1000;
			}
			else{
				HX_STACK_LINE(303)
				tmp12 = (int)1;
			}
			HX_STACK_LINE(303)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(303)
			::zpp_nape::phys::ZPP_FluidProperties tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(303)
			tmp14->viscosity = tmp13;
			HX_STACK_LINE(304)
			::zpp_nape::phys::ZPP_FluidProperties tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(304)
			tmp15->invalidate();
		}
	}
	HX_STACK_LINE(307)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	Float tmp1 = tmp->viscosity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	if ((tmp2)){
		HX_STACK_LINE(307)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(307)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(307)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(307)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_viscosity,return )

::nape::geom::Vec2 FluidProperties_obj::get_gravity( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","get_gravity",0x880af09e,"nape.phys.FluidProperties.get_gravity","nape/phys/FluidProperties.hx",317,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	::nape::geom::Vec2 tmp1 = tmp->wrap_gravity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_gravity,return )

::nape::geom::Vec2 FluidProperties_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_FRAME("nape.phys.FluidProperties","set_gravity",0x9277f7aa,"nape.phys.FluidProperties.set_gravity","nape/phys/FluidProperties.hx",320,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(322)
		bool tmp = (gravity == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		if ((tmp)){
			HX_STACK_LINE(323)
			::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(323)
			::nape::geom::Vec2 tmp2 = tmp1->wrap_gravity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			if ((tmp3)){
				HX_STACK_LINE(324)
				::zpp_nape::phys::ZPP_FluidProperties tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(324)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = tmp4->wrap_gravity->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(324)
				tmp5->_inuse = false;
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::phys::ZPP_FluidProperties tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(325)
					::nape::geom::Vec2 _this = tmp6->wrap_gravity;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(325)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(325)
						if ((tmp7)){
							HX_STACK_LINE(325)
							tmp8 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(325)
							tmp8 = false;
						}
						HX_STACK_LINE(325)
						if ((tmp8)){
							HX_STACK_LINE(325)
							::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(325)
							::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(325)
							HX_STACK_DO_THROW(tmp10);
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(325)
						bool tmp7 = _this1->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(325)
						if ((tmp7)){
							HX_STACK_LINE(325)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(325)
						bool tmp8 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(325)
						if ((tmp8)){
							HX_STACK_LINE(325)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(325)
					bool tmp7 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(325)
					if ((tmp7)){
						HX_STACK_LINE(325)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(325)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(325)
					_this->zpp_inner = null();
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						o->zpp_pool = null();
						HX_STACK_LINE(325)
						::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(325)
						bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(325)
						if ((tmp9)){
							HX_STACK_LINE(325)
							::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(325)
							tmp10->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(325)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(325)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(325)
							if ((tmp8)){
								HX_STACK_LINE(325)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(325)
								o->outer = null();
							}
							HX_STACK_LINE(325)
							o->_isimmutable = null();
							HX_STACK_LINE(325)
							o->_validate = null();
							HX_STACK_LINE(325)
							o->_invalidate = null();
						}
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(325)
						o->next = tmp8;
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(326)
				::zpp_nape::phys::ZPP_FluidProperties tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				tmp6->wrap_gravity = null();
			}
		}
		else{
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(332)
				bool tmp1 = (gravity != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(332)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				if ((tmp1)){
					HX_STACK_LINE(332)
					tmp2 = gravity->zpp_disp;
				}
				else{
					HX_STACK_LINE(332)
					tmp2 = false;
				}
				HX_STACK_LINE(332)
				if ((tmp2)){
					HX_STACK_LINE(332)
					::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(332)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(332)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			::nape::geom::Vec2 tmp2 = tmp1->wrap_gravity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			if ((tmp3)){
				HX_STACK_LINE(335)
				::zpp_nape::phys::ZPP_FluidProperties tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				tmp4->getgravity();
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::zpp_nape::phys::ZPP_FluidProperties tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(336)
				::nape::geom::Vec2 _this = tmp4->wrap_gravity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					bool tmp5 = (_this != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(336)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(336)
					if ((tmp5)){
						HX_STACK_LINE(336)
						tmp6 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(336)
						tmp6 = false;
					}
					HX_STACK_LINE(336)
					if ((tmp6)){
						HX_STACK_LINE(336)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(336)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					bool tmp5 = (gravity != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(336)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(336)
					if ((tmp5)){
						HX_STACK_LINE(336)
						tmp6 = gravity->zpp_disp;
					}
					else{
						HX_STACK_LINE(336)
						tmp6 = false;
					}
					HX_STACK_LINE(336)
					if ((tmp6)){
						HX_STACK_LINE(336)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(336)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(336)
					bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(336)
					if ((tmp5)){
						HX_STACK_LINE(336)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(336)
					bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(336)
					if ((tmp6)){
						HX_STACK_LINE(336)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(336)
				bool tmp5 = (gravity == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(336)
				if ((tmp5)){
					HX_STACK_LINE(336)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(336)
				::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						bool tmp8 = (gravity != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						if ((tmp8)){
							HX_STACK_LINE(336)
							tmp9 = gravity->zpp_disp;
						}
						else{
							HX_STACK_LINE(336)
							tmp9 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp9)){
							HX_STACK_LINE(336)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(336)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(tmp11);
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(336)
							bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(336)
							if ((tmp10)){
								HX_STACK_LINE(336)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(336)
						tmp7 = gravity->zpp_inner->x;
					}
					HX_STACK_LINE(336)
					Float x = tmp7;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(336)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						bool tmp9 = (gravity != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						if ((tmp9)){
							HX_STACK_LINE(336)
							tmp10 = gravity->zpp_disp;
						}
						else{
							HX_STACK_LINE(336)
							tmp10 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(336)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(336)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							if ((tmp11)){
								HX_STACK_LINE(336)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(336)
						tmp8 = gravity->zpp_inner->y;
					}
					HX_STACK_LINE(336)
					Float y = tmp8;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						if ((tmp9)){
							HX_STACK_LINE(336)
							tmp10 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(336)
							tmp10 = false;
						}
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(336)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(336)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						if ((tmp9)){
							HX_STACK_LINE(336)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(336)
						bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(336)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(336)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(336)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(336)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(336)
					if ((tmp10)){
						HX_STACK_LINE(336)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(336)
						tmp11 = true;
					}
					HX_STACK_LINE(336)
					if ((tmp11)){
						HX_STACK_LINE(336)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(336)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(336)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(336)
							if ((tmp13)){
								HX_STACK_LINE(336)
								tmp14 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(336)
								tmp14 = false;
							}
							HX_STACK_LINE(336)
							if ((tmp14)){
								HX_STACK_LINE(336)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(336)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(336)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(336)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(336)
							if ((tmp13)){
								HX_STACK_LINE(336)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(336)
						tmp12 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(336)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(336)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(336)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(336)
					if ((tmp14)){
						HX_STACK_LINE(336)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool tmp17 = (_this != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(336)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(336)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(336)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(336)
								if ((tmp20)){
									HX_STACK_LINE(336)
									tmp19 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(336)
									tmp19 = false;
								}
								HX_STACK_LINE(336)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(336)
								if ((tmp21)){
									HX_STACK_LINE(336)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(336)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(336)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(336)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(336)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(336)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(336)
								bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(336)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(336)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(336)
								if ((tmp19)){
									HX_STACK_LINE(336)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(336)
							Float tmp17 = _this->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(336)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(336)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(336)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(336)
						tmp15 = false;
					}
					HX_STACK_LINE(336)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(336)
					if ((tmp16)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(336)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(336)
							{
							}
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(336)
							bool tmp17 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(336)
							if ((tmp17)){
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(336)
								_this1->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(336)
					tmp6 = _this;
				}
				HX_STACK_LINE(336)
				::nape::geom::Vec2 ret = tmp6;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(336)
					tmp7 = gravity->zpp_inner->weak;
					HX_STACK_LINE(336)
					if ((tmp7)){
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								bool tmp8 = (gravity != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(336)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(336)
								if ((tmp8)){
									HX_STACK_LINE(336)
									tmp9 = gravity->zpp_disp;
								}
								else{
									HX_STACK_LINE(336)
									tmp9 = false;
								}
								HX_STACK_LINE(336)
								if ((tmp9)){
									HX_STACK_LINE(336)
									::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(336)
									::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(336)
									HX_STACK_DO_THROW(tmp11);
								}
							}
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(336)
								bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(336)
								if ((tmp8)){
									HX_STACK_LINE(336)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(336)
								bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(336)
								if ((tmp9)){
									HX_STACK_LINE(336)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(336)
							bool tmp8 = gravity->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(336)
							if ((tmp8)){
								HX_STACK_LINE(336)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(336)
							gravity->zpp_inner->outer = null();
							HX_STACK_LINE(336)
							gravity->zpp_inner = null();
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(336)
								o->zpp_pool = null();
								HX_STACK_LINE(336)
								::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(336)
								bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(336)
								if ((tmp10)){
									HX_STACK_LINE(336)
									::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(336)
									tmp11->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(336)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(336)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(336)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(336)
								{
									HX_STACK_LINE(336)
									bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(336)
									if ((tmp9)){
										HX_STACK_LINE(336)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(336)
										o->outer = null();
									}
									HX_STACK_LINE(336)
									o->_isimmutable = null();
									HX_STACK_LINE(336)
									o->_validate = null();
									HX_STACK_LINE(336)
									o->_invalidate = null();
								}
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(336)
								o->next = tmp9;
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(336)
						true;
					}
					else{
						HX_STACK_LINE(336)
						false;
					}
				}
				HX_STACK_LINE(336)
				ret;
			}
		}
	}
	HX_STACK_LINE(339)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	::nape::geom::Vec2 tmp1 = tmp->wrap_gravity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_gravity,return )

::String FluidProperties_obj::toString( ){
	HX_STACK_FRAME("nape.phys.FluidProperties","toString",0x82e300d3,"nape.phys.FluidProperties.toString","nape/phys/FluidProperties.hx",344,0xe22a5857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	::zpp_nape::phys::ZPP_FluidProperties tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	if ((tmp2)){
		HX_STACK_LINE(345)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(345)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(345)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	::String tmp5 = (HX_HCSTRING("{ density: ","\xa9","\xc0","\xbf","\x86") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(345)
	::String tmp6 = (tmp5 + HX_HCSTRING(" viscosity: ","\x6d","\x44","\xe7","\x22"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(345)
	::zpp_nape::phys::ZPP_FluidProperties tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(345)
	Float tmp8 = tmp7->viscosity;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(345)
	bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(345)
	int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(345)
	if ((tmp9)){
		HX_STACK_LINE(345)
		tmp10 = (int)1000;
	}
	else{
		HX_STACK_LINE(345)
		tmp10 = (int)1;
	}
	HX_STACK_LINE(345)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(345)
	::String tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(345)
	::String tmp13 = (tmp12 + HX_HCSTRING(" gravity: ","\x54","\x4c","\xc1","\x12"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(345)
	::zpp_nape::phys::ZPP_FluidProperties tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(345)
	::nape::geom::Vec2 tmp15 = tmp14->wrap_gravity;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(345)
	::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(345)
	::String tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(345)
	::String tmp18 = (tmp17 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(345)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,toString,return )


FluidProperties_obj::FluidProperties_obj()
{
}

void FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FluidProperties);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic FluidProperties_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { if (inCallProp == hx::paccAlways) return get_shapes(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { if (inCallProp == hx::paccAlways) return get_density(); }
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return get_gravity(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"viscosity") ) { if (inCallProp == hx::paccAlways) return get_viscosity(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_density") ) { return get_density_dyn(); }
		if (HX_FIELD_EQ(inName,"set_density") ) { return set_density_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_viscosity") ) { return get_viscosity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viscosity") ) { return set_viscosity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { if (inCallProp == hx::paccAlways) return set_density(inValue); }
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return set_gravity(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viscosity") ) { if (inCallProp == hx::paccAlways) return set_viscosity(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FluidProperties_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"));
	outFields->push(HX_HCSTRING("viscosity","\x27","\x46","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(FluidProperties_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_shapes","\xfb","\x49","\xb1","\x0d"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get_density","\xff","\x9f","\xcf","\xc8"),
	HX_HCSTRING("set_density","\x0b","\xa7","\x3c","\xd3"),
	HX_HCSTRING("get_viscosity","\xfe","\x19","\xa2","\xeb"),
	HX_HCSTRING("set_viscosity","\x0a","\xfc","\xa7","\x30"),
	HX_HCSTRING("get_gravity","\x65","\xce","\xf9","\xfd"),
	HX_HCSTRING("set_gravity","\x71","\xd5","\x66","\x08"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

#endif

hx::Class FluidProperties_obj::__mClass;

void FluidProperties_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.FluidProperties","\x27","\xd1","\xe2","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FluidProperties_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FluidProperties_obj >;
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
} // end namespace phys
