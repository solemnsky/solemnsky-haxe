#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Material_obj::__construct(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction)
{
HX_STACK_FRAME("nape.phys.Material","new",0x7495fc4f,"nape.phys.Material.new","nape/phys/Material.hx",177,0x235b81a1)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_elasticity,"elasticity")
HX_STACK_ARG(__o_dynamicFriction,"dynamicFriction")
HX_STACK_ARG(__o_staticFriction,"staticFriction")
HX_STACK_ARG(__o_density,"density")
HX_STACK_ARG(__o_rollingFriction,"rollingFriction")
Float elasticity = __o_elasticity.Default(((Float)0.0));
Float dynamicFriction = __o_dynamicFriction.Default(((Float)1.0));
Float staticFriction = __o_staticFriction.Default(((Float)2.0));
Float density = __o_density.Default(1);
Float rollingFriction = __o_rollingFriction.Default(((Float)0.001));
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(231)
		::zpp_nape::phys::ZPP_Material tmp = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_Material tmp2 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			this->zpp_inner = tmp2;
		}
		else{
			HX_STACK_LINE(238)
			::zpp_nape::phys::ZPP_Material tmp2 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			this->zpp_inner = tmp2;
			HX_STACK_LINE(239)
			::zpp_nape::phys::ZPP_Material tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = tmp3->next;
			HX_STACK_LINE(240)
			::zpp_nape::phys::ZPP_Material tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			tmp4->next = null();
		}
		HX_STACK_LINE(245)
		Dynamic();
	}
	HX_STACK_LINE(247)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	tmp->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			Float tmp1 = elasticity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			::zpp_nape::phys::ZPP_Material tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			Float tmp3 = tmp2->elasticity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			if ((tmp4)){
				HX_STACK_LINE(248)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(248)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(248)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			if ((tmp7)){
				HX_STACK_LINE(248)
				bool tmp8 = (elasticity != elasticity);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(248)
				if ((tmp8)){
					HX_STACK_LINE(248)
					::String tmp9 = HX_HCSTRING("Error: Material::elasticity","\xce","\xd0","\x0c","\x5f");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(248)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(248)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(248)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(248)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				if ((tmp9)){
					HX_STACK_LINE(248)
					tmp10 = (elasticity < (int)0);
				}
				else{
					HX_STACK_LINE(248)
					tmp10 = false;
				}
				HX_STACK_LINE(248)
				if ((tmp10)){
					HX_STACK_LINE(248)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
				}
				HX_STACK_LINE(248)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				if ((tmp11)){
					HX_STACK_LINE(248)
					tmp12 = (elasticity < (int)0);
				}
				else{
					HX_STACK_LINE(248)
					tmp12 = false;
				}
				HX_STACK_LINE(248)
				if ((tmp12)){
					HX_STACK_LINE(248)
					::String tmp13 = HX_HCSTRING("Error: Material::elasticity","\xce","\xd0","\x0c","\x5f");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(248)
					::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(248)
				Float tmp13 = elasticity;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(248)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(248)
				if ((tmp14)){
					HX_STACK_LINE(248)
					tmp15 = (int)1000;
				}
				else{
					HX_STACK_LINE(248)
					tmp15 = (int)1;
				}
				HX_STACK_LINE(248)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(248)
				::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(248)
				tmp17->elasticity = tmp16;
				HX_STACK_LINE(248)
				::zpp_nape::phys::ZPP_Material tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(248)
				int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(248)
				int tmp20 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(248)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(248)
				tmp18->invalidate(tmp21);
			}
		}
		HX_STACK_LINE(248)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		Float tmp2 = tmp1->elasticity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		if ((tmp3)){
			HX_STACK_LINE(248)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(248)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(248)
		(tmp2 * tmp4);
	}
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			Float tmp1 = dynamicFriction;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(249)
			::zpp_nape::phys::ZPP_Material tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			Float tmp3 = tmp2->dynamicFriction;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			if ((tmp4)){
				HX_STACK_LINE(249)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(249)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(249)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			if ((tmp7)){
				HX_STACK_LINE(249)
				bool tmp8 = (dynamicFriction != dynamicFriction);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(249)
				if ((tmp8)){
					HX_STACK_LINE(249)
					::String tmp9 = HX_HCSTRING("Error: Material::dynamicFriction","\x24","\xca","\xf4","\xa3");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(249)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(249)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(249)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(249)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(249)
				if ((tmp9)){
					HX_STACK_LINE(249)
					tmp10 = (dynamicFriction < (int)0);
				}
				else{
					HX_STACK_LINE(249)
					tmp10 = false;
				}
				HX_STACK_LINE(249)
				if ((tmp10)){
					HX_STACK_LINE(249)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
				}
				HX_STACK_LINE(249)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(249)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				if ((tmp11)){
					HX_STACK_LINE(249)
					tmp12 = (dynamicFriction < (int)0);
				}
				else{
					HX_STACK_LINE(249)
					tmp12 = false;
				}
				HX_STACK_LINE(249)
				if ((tmp12)){
					HX_STACK_LINE(249)
					::String tmp13 = HX_HCSTRING("Error: Material::dynamicFriction","\x24","\xca","\xf4","\xa3");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(249)
					::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(249)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(249)
				Float tmp13 = dynamicFriction;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(249)
				if ((tmp14)){
					HX_STACK_LINE(249)
					tmp15 = (int)1000;
				}
				else{
					HX_STACK_LINE(249)
					tmp15 = (int)1;
				}
				HX_STACK_LINE(249)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(249)
				::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(249)
				tmp17->dynamicFriction = tmp16;
				HX_STACK_LINE(249)
				::zpp_nape::phys::ZPP_Material tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(249)
				int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(249)
				int tmp20 = ::zpp_nape::phys::ZPP_Material_obj::ANGDRAG;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(249)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(249)
				int tmp22 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(249)
				int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(249)
				tmp18->invalidate(tmp23);
			}
		}
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		Float tmp2 = tmp1->dynamicFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		if ((tmp3)){
			HX_STACK_LINE(249)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(249)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(249)
		(tmp2 * tmp4);
	}
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			Float tmp1 = staticFriction;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			::zpp_nape::phys::ZPP_Material tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			Float tmp3 = tmp2->staticFriction;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			if ((tmp4)){
				HX_STACK_LINE(250)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(250)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(250)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			if ((tmp7)){
				HX_STACK_LINE(250)
				bool tmp8 = (staticFriction != staticFriction);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				if ((tmp8)){
					HX_STACK_LINE(250)
					::String tmp9 = HX_HCSTRING("Error: Material::staticFriction","\x9d","\xeb","\x8a","\x21");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(250)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(250)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(250)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(250)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(250)
				if ((tmp9)){
					HX_STACK_LINE(250)
					tmp10 = (staticFriction < (int)0);
				}
				else{
					HX_STACK_LINE(250)
					tmp10 = false;
				}
				HX_STACK_LINE(250)
				if ((tmp10)){
					HX_STACK_LINE(250)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
				}
				HX_STACK_LINE(250)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(250)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(250)
				if ((tmp11)){
					HX_STACK_LINE(250)
					tmp12 = (staticFriction < (int)0);
				}
				else{
					HX_STACK_LINE(250)
					tmp12 = false;
				}
				HX_STACK_LINE(250)
				if ((tmp12)){
					HX_STACK_LINE(250)
					::String tmp13 = HX_HCSTRING("Error: Material::staticFriction","\x9d","\xeb","\x8a","\x21");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(250)
					::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(250)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(250)
				Float tmp13 = staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(250)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(250)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(250)
				if ((tmp14)){
					HX_STACK_LINE(250)
					tmp15 = (int)1000;
				}
				else{
					HX_STACK_LINE(250)
					tmp15 = (int)1;
				}
				HX_STACK_LINE(250)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(250)
				::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(250)
				tmp17->staticFriction = tmp16;
				HX_STACK_LINE(250)
				::zpp_nape::phys::ZPP_Material tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(250)
				int tmp20 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				tmp18->invalidate(tmp21);
			}
		}
		HX_STACK_LINE(250)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		Float tmp2 = tmp1->staticFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		if ((tmp3)){
			HX_STACK_LINE(250)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(250)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(250)
		(tmp2 * tmp4);
	}
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			Float tmp1 = density;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Material tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			Float tmp3 = tmp2->density;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			if ((tmp4)){
				HX_STACK_LINE(251)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(251)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(251)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			if ((tmp7)){
				HX_STACK_LINE(251)
				bool tmp8 = (density != density);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(251)
				if ((tmp8)){
					HX_STACK_LINE(251)
					::String tmp9 = HX_HCSTRING("Error: Material::density","\x73","\x1b","\x58","\xac");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(251)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(251)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(251)
				if ((tmp9)){
					HX_STACK_LINE(251)
					tmp10 = (density < (int)0);
				}
				else{
					HX_STACK_LINE(251)
					tmp10 = false;
				}
				HX_STACK_LINE(251)
				if ((tmp10)){
					HX_STACK_LINE(251)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
				}
				HX_STACK_LINE(251)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(251)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(251)
				if ((tmp11)){
					HX_STACK_LINE(251)
					tmp12 = (density < (int)0);
				}
				else{
					HX_STACK_LINE(251)
					tmp12 = false;
				}
				HX_STACK_LINE(251)
				if ((tmp12)){
					HX_STACK_LINE(251)
					::String tmp13 = HX_HCSTRING("Error: Material::density","\x73","\x1b","\x58","\xac");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(251)
					::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(251)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(251)
				Float tmp13 = density;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(251)
				bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(251)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(251)
				if ((tmp14)){
					HX_STACK_LINE(251)
					tmp15 = (int)1000;
				}
				else{
					HX_STACK_LINE(251)
					tmp15 = (int)1;
				}
				HX_STACK_LINE(251)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(251)
				tmp17->density = tmp16;
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Material tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(251)
				int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				int tmp20 = ::zpp_nape::phys::ZPP_Material_obj::PROPS;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(251)
				tmp18->invalidate(tmp21);
			}
		}
		HX_STACK_LINE(251)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		Float tmp2 = tmp1->density;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		if ((tmp3)){
			HX_STACK_LINE(251)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(251)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(251)
		(tmp2 * tmp4);
	}
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			Float tmp1 = rollingFriction;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			::zpp_nape::phys::ZPP_Material tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			Float tmp3 = tmp2->rollingFriction;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			if ((tmp4)){
				HX_STACK_LINE(252)
				tmp5 = (int)1000;
			}
			else{
				HX_STACK_LINE(252)
				tmp5 = (int)1;
			}
			HX_STACK_LINE(252)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			bool tmp7 = (tmp1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			if ((tmp7)){
				HX_STACK_LINE(252)
				bool tmp8 = (rollingFriction != rollingFriction);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(252)
				if ((tmp8)){
					HX_STACK_LINE(252)
					::String tmp9 = HX_HCSTRING("Error: Material::rollingFriction","\x2a","\x4e","\x6b","\x80");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(252)
					::String tmp10 = (tmp9 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(252)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(252)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(252)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				if ((tmp9)){
					HX_STACK_LINE(252)
					tmp10 = (rollingFriction < (int)0);
				}
				else{
					HX_STACK_LINE(252)
					tmp10 = false;
				}
				HX_STACK_LINE(252)
				if ((tmp10)){
					HX_STACK_LINE(252)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
				}
				HX_STACK_LINE(252)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(252)
				if ((tmp11)){
					HX_STACK_LINE(252)
					tmp12 = (rollingFriction < (int)0);
				}
				else{
					HX_STACK_LINE(252)
					tmp12 = false;
				}
				HX_STACK_LINE(252)
				if ((tmp12)){
					HX_STACK_LINE(252)
					::String tmp13 = HX_HCSTRING("Error: Material::rollingFriction","\x2a","\x4e","\x6b","\x80");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(252)
					::String tmp14 = (tmp13 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(252)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(252)
				Float tmp13 = rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(252)
				bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(252)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(252)
				if ((tmp14)){
					HX_STACK_LINE(252)
					tmp15 = (int)1000;
				}
				else{
					HX_STACK_LINE(252)
					tmp15 = (int)1;
				}
				HX_STACK_LINE(252)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(252)
				::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(252)
				tmp17->rollingFriction = tmp16;
				HX_STACK_LINE(252)
				::zpp_nape::phys::ZPP_Material tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(252)
				int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(252)
				int tmp20 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(252)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(252)
				tmp18->invalidate(tmp21);
			}
		}
		HX_STACK_LINE(252)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		Float tmp2 = tmp1->rollingFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		if ((tmp3)){
			HX_STACK_LINE(252)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(252)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(252)
		(tmp2 * tmp4);
	}
}
;
	return null();
}

//Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(__o_elasticity,__o_dynamicFriction,__o_staticFriction,__o_density,__o_rollingFriction);
	return _result_;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > _result_ = new Material_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Dynamic Material_obj::get_userData( ){
	HX_STACK_FRAME("nape.phys.Material","get_userData",0xb568a84f,"nape.phys.Material.get_userData","nape/phys/Material.hx",195,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/Material.hx",197,0x235b81a1)
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
		::zpp_nape::phys::ZPP_Material tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(199)
	::zpp_nape::phys::ZPP_Material tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_userData,return )

::nape::shape::ShapeList Material_obj::get_shapes( ){
	HX_STACK_FRAME("nape.phys.Material","get_shapes",0x64f309ec,"nape.phys.Material.get_shapes","nape/phys/Material.hx",210,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::nape::shape::ShapeList tmp1 = tmp->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Material tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = tmp3->shapes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		::nape::shape::ShapeList tmp5 = ::zpp_nape::util::ZPP_ShapeList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Material tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		tmp6->wrap_shapes = tmp5;
	}
	HX_STACK_LINE(212)
	::zpp_nape::phys::ZPP_Material tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	::nape::shape::ShapeList tmp4 = tmp3->wrap_shapes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_shapes,return )

::nape::phys::Material Material_obj::copy( ){
	HX_STACK_FRAME("nape.phys.Material","copy",0x876900e6,"nape.phys.Material.copy","nape/phys/Material.hx",264,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	Float tmp1 = tmp->elasticity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	if ((tmp2)){
		HX_STACK_LINE(265)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(265)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(265)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(265)
	Float tmp6 = tmp5->dynamicFriction;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(265)
	bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(265)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(265)
	if ((tmp7)){
		HX_STACK_LINE(265)
		tmp8 = (int)1000;
	}
	else{
		HX_STACK_LINE(265)
		tmp8 = (int)1;
	}
	HX_STACK_LINE(265)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(265)
	Float tmp11 = tmp10->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(265)
	bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(265)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(265)
	if ((tmp12)){
		HX_STACK_LINE(265)
		tmp13 = (int)1000;
	}
	else{
		HX_STACK_LINE(265)
		tmp13 = (int)1;
	}
	HX_STACK_LINE(265)
	Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(265)
	Float tmp16 = tmp15->density;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(265)
	bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(265)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(265)
	if ((tmp17)){
		HX_STACK_LINE(265)
		tmp18 = (int)1000;
	}
	else{
		HX_STACK_LINE(265)
		tmp18 = (int)1;
	}
	HX_STACK_LINE(265)
	Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Material tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(265)
	Float tmp21 = tmp20->rollingFriction;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(265)
	bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(265)
	int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(265)
	if ((tmp22)){
		HX_STACK_LINE(265)
		tmp23 = (int)1000;
	}
	else{
		HX_STACK_LINE(265)
		tmp23 = (int)1;
	}
	HX_STACK_LINE(265)
	Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(265)
	::nape::phys::Material ret = ::nape::phys::Material_obj::__new(tmp4,tmp9,tmp14,tmp19,tmp24);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(266)
	::zpp_nape::phys::ZPP_Material tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(266)
	Dynamic tmp26 = tmp25->userData;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(266)
	bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(266)
	if ((tmp27)){
		HX_STACK_LINE(266)
		::zpp_nape::phys::ZPP_Material tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(266)
		Dynamic tmp29 = tmp28->userData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(266)
		Dynamic tmp30 = ::Reflect_obj::copy(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(266)
		ret->zpp_inner->userData = tmp30;
	}
	HX_STACK_LINE(267)
	::nape::phys::Material tmp28 = ret;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(267)
	return tmp28;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,copy,return )

Float Material_obj::get_elasticity( ){
	HX_STACK_FRAME("nape.phys.Material","get_elasticity",0x9bc8b833,"nape.phys.Material.get_elasticity","nape/phys/Material.hx",286,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	Float tmp1 = tmp->elasticity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(287)
	if ((tmp2)){
		HX_STACK_LINE(287)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(287)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(287)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(287)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_elasticity,return )

Float Material_obj::set_elasticity( Float elasticity){
	HX_STACK_FRAME("nape.phys.Material","set_elasticity",0xbbe8a0a7,"nape.phys.Material.set_elasticity","nape/phys/Material.hx",289,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elasticity,"elasticity")
	HX_STACK_LINE(290)
	{
		HX_STACK_LINE(291)
		Float tmp = elasticity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		Float tmp2 = tmp1->elasticity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		if ((tmp3)){
			HX_STACK_LINE(291)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(291)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(291)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(291)
		if ((tmp6)){
			HX_STACK_LINE(293)
			bool tmp7 = (elasticity != elasticity);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			if ((tmp7)){
				HX_STACK_LINE(293)
				::String tmp8 = HX_HCSTRING("Error: Material::elasticity","\xce","\xd0","\x0c","\x5f");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(294)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			if ((tmp8)){
				HX_STACK_LINE(294)
				tmp9 = (elasticity < (int)0);
			}
			else{
				HX_STACK_LINE(294)
				tmp9 = false;
			}
			HX_STACK_LINE(294)
			if ((tmp9)){
				HX_STACK_LINE(294)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
			}
			HX_STACK_LINE(295)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(295)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(295)
			if ((tmp10)){
				HX_STACK_LINE(295)
				tmp11 = (elasticity < (int)0);
			}
			else{
				HX_STACK_LINE(295)
				tmp11 = false;
			}
			HX_STACK_LINE(295)
			if ((tmp11)){
				HX_STACK_LINE(295)
				::String tmp12 = HX_HCSTRING("Error: Material::elasticity","\xce","\xd0","\x0c","\x5f");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(295)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(295)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(297)
			Float tmp12 = elasticity;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			if ((tmp13)){
				HX_STACK_LINE(297)
				tmp14 = (int)1000;
			}
			else{
				HX_STACK_LINE(297)
				tmp14 = (int)1;
			}
			HX_STACK_LINE(297)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			::zpp_nape::phys::ZPP_Material tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(297)
			tmp16->elasticity = tmp15;
			HX_STACK_LINE(298)
			::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			int tmp18 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(298)
			int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(298)
			int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(298)
			tmp17->invalidate(tmp20);
		}
	}
	HX_STACK_LINE(301)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	Float tmp1 = tmp->elasticity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	if ((tmp2)){
		HX_STACK_LINE(301)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(301)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(301)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(301)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_elasticity,return )

Float Material_obj::get_dynamicFriction( ){
	HX_STACK_FRAME("nape.phys.Material","get_dynamicFriction",0x33bef49f,"nape.phys.Material.get_dynamicFriction","nape/phys/Material.hx",316,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	Float tmp1 = tmp->dynamicFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	if ((tmp2)){
		HX_STACK_LINE(317)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(317)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(317)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(317)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_dynamicFriction,return )

Float Material_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_FRAME("nape.phys.Material","set_dynamicFriction",0x705be7ab,"nape.phys.Material.set_dynamicFriction","nape/phys/Material.hx",319,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dynamicFriction,"dynamicFriction")
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(321)
		Float tmp = dynamicFriction;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		Float tmp2 = tmp1->dynamicFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(321)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(321)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(321)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		if ((tmp6)){
			HX_STACK_LINE(323)
			bool tmp7 = (dynamicFriction != dynamicFriction);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(323)
			if ((tmp7)){
				HX_STACK_LINE(323)
				::String tmp8 = HX_HCSTRING("Error: Material::dynamicFriction","\x24","\xca","\xf4","\xa3");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(323)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(323)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(324)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			if ((tmp8)){
				HX_STACK_LINE(324)
				tmp9 = (dynamicFriction < (int)0);
			}
			else{
				HX_STACK_LINE(324)
				tmp9 = false;
			}
			HX_STACK_LINE(324)
			if ((tmp9)){
				HX_STACK_LINE(324)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
			}
			HX_STACK_LINE(325)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(325)
			if ((tmp10)){
				HX_STACK_LINE(325)
				tmp11 = (dynamicFriction < (int)0);
			}
			else{
				HX_STACK_LINE(325)
				tmp11 = false;
			}
			HX_STACK_LINE(325)
			if ((tmp11)){
				HX_STACK_LINE(325)
				::String tmp12 = HX_HCSTRING("Error: Material::dynamicFriction","\x24","\xca","\xf4","\xa3");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(325)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(325)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(327)
			Float tmp12 = dynamicFriction;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(327)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(327)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(327)
			if ((tmp13)){
				HX_STACK_LINE(327)
				tmp14 = (int)1000;
			}
			else{
				HX_STACK_LINE(327)
				tmp14 = (int)1;
			}
			HX_STACK_LINE(327)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(327)
			::zpp_nape::phys::ZPP_Material tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(327)
			tmp16->dynamicFriction = tmp15;
			HX_STACK_LINE(328)
			::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(328)
			int tmp18 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(328)
			int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::ANGDRAG;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(328)
			int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(328)
			int tmp21 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(328)
			int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(328)
			tmp17->invalidate(tmp22);
		}
	}
	HX_STACK_LINE(331)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	Float tmp1 = tmp->dynamicFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(331)
	if ((tmp2)){
		HX_STACK_LINE(331)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(331)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(331)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(331)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_dynamicFriction,return )

Float Material_obj::get_staticFriction( ){
	HX_STACK_FRAME("nape.phys.Material","get_staticFriction",0x8f3ee982,"nape.phys.Material.get_staticFriction","nape/phys/Material.hx",346,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	Float tmp1 = tmp->staticFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	if ((tmp2)){
		HX_STACK_LINE(347)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(347)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(347)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(347)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_staticFriction,return )

Float Material_obj::set_staticFriction( Float staticFriction){
	HX_STACK_FRAME("nape.phys.Material","set_staticFriction",0x6bee1bf6,"nape.phys.Material.set_staticFriction","nape/phys/Material.hx",349,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(staticFriction,"staticFriction")
	HX_STACK_LINE(350)
	{
		HX_STACK_LINE(351)
		Float tmp = staticFriction;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		Float tmp2 = tmp1->staticFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		if ((tmp3)){
			HX_STACK_LINE(351)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(351)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(351)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(351)
		if ((tmp6)){
			HX_STACK_LINE(353)
			bool tmp7 = (staticFriction != staticFriction);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(353)
			if ((tmp7)){
				HX_STACK_LINE(353)
				::String tmp8 = HX_HCSTRING("Error: Material::staticFriction","\x9d","\xeb","\x8a","\x21");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(353)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(353)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(354)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(354)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(354)
			if ((tmp8)){
				HX_STACK_LINE(354)
				tmp9 = (staticFriction < (int)0);
			}
			else{
				HX_STACK_LINE(354)
				tmp9 = false;
			}
			HX_STACK_LINE(354)
			if ((tmp9)){
				HX_STACK_LINE(354)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
			}
			HX_STACK_LINE(355)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(355)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(355)
			if ((tmp10)){
				HX_STACK_LINE(355)
				tmp11 = (staticFriction < (int)0);
			}
			else{
				HX_STACK_LINE(355)
				tmp11 = false;
			}
			HX_STACK_LINE(355)
			if ((tmp11)){
				HX_STACK_LINE(355)
				::String tmp12 = HX_HCSTRING("Error: Material::staticFriction","\x9d","\xeb","\x8a","\x21");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(355)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(355)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(357)
			Float tmp12 = staticFriction;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(357)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(357)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(357)
			if ((tmp13)){
				HX_STACK_LINE(357)
				tmp14 = (int)1000;
			}
			else{
				HX_STACK_LINE(357)
				tmp14 = (int)1;
			}
			HX_STACK_LINE(357)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(357)
			::zpp_nape::phys::ZPP_Material tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(357)
			tmp16->staticFriction = tmp15;
			HX_STACK_LINE(358)
			::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(358)
			int tmp18 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(358)
			int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(358)
			int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(358)
			tmp17->invalidate(tmp20);
		}
	}
	HX_STACK_LINE(361)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	Float tmp1 = tmp->staticFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(361)
	if ((tmp2)){
		HX_STACK_LINE(361)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(361)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(361)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(361)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_staticFriction,return )

Float Material_obj::get_density( ){
	HX_STACK_FRAME("nape.phys.Material","get_density",0xcb15d2ee,"nape.phys.Material.get_density","nape/phys/Material.hx",374,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(375)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	if ((tmp2)){
		HX_STACK_LINE(375)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(375)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(375)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(375)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_density,return )

Float Material_obj::set_density( Float density){
	HX_STACK_FRAME("nape.phys.Material","set_density",0xd582d9fa,"nape.phys.Material.set_density","nape/phys/Material.hx",377,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(density,"density")
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(379)
		Float tmp = density;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		Float tmp2 = tmp1->density;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(379)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(379)
		if ((tmp3)){
			HX_STACK_LINE(379)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(379)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(379)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(379)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		if ((tmp6)){
			HX_STACK_LINE(381)
			bool tmp7 = (density != density);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			if ((tmp7)){
				HX_STACK_LINE(381)
				::String tmp8 = HX_HCSTRING("Error: Material::density","\x73","\x1b","\x58","\xac");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(381)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(381)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(382)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(382)
			if ((tmp8)){
				HX_STACK_LINE(382)
				tmp9 = (density < (int)0);
			}
			else{
				HX_STACK_LINE(382)
				tmp9 = false;
			}
			HX_STACK_LINE(382)
			if ((tmp9)){
				HX_STACK_LINE(382)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
			}
			HX_STACK_LINE(383)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(383)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			if ((tmp10)){
				HX_STACK_LINE(383)
				tmp11 = (density < (int)0);
			}
			else{
				HX_STACK_LINE(383)
				tmp11 = false;
			}
			HX_STACK_LINE(383)
			if ((tmp11)){
				HX_STACK_LINE(383)
				::String tmp12 = HX_HCSTRING("Error: Material::density","\x73","\x1b","\x58","\xac");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(383)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(383)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(385)
			Float tmp12 = density;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(385)
			if ((tmp13)){
				HX_STACK_LINE(385)
				tmp14 = (int)1000;
			}
			else{
				HX_STACK_LINE(385)
				tmp14 = (int)1;
			}
			HX_STACK_LINE(385)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(385)
			::zpp_nape::phys::ZPP_Material tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(385)
			tmp16->density = tmp15;
			HX_STACK_LINE(386)
			::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(386)
			int tmp18 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(386)
			int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::PROPS;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(386)
			int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(386)
			tmp17->invalidate(tmp20);
		}
	}
	HX_STACK_LINE(389)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	Float tmp1 = tmp->density;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(389)
	if ((tmp2)){
		HX_STACK_LINE(389)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(389)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(389)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(389)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_density,return )

Float Material_obj::get_rollingFriction( ){
	HX_STACK_FRAME("nape.phys.Material","get_rollingFriction",0x103578a5,"nape.phys.Material.get_rollingFriction","nape/phys/Material.hx",405,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	Float tmp1 = tmp->rollingFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(406)
	if ((tmp2)){
		HX_STACK_LINE(406)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(406)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(406)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(406)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_rollingFriction,return )

Float Material_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_FRAME("nape.phys.Material","set_rollingFriction",0x4cd26bb1,"nape.phys.Material.set_rollingFriction","nape/phys/Material.hx",408,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rollingFriction,"rollingFriction")
	HX_STACK_LINE(409)
	{
		HX_STACK_LINE(410)
		Float tmp = rollingFriction;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_Material tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		Float tmp2 = tmp1->rollingFriction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(410)
		if ((tmp3)){
			HX_STACK_LINE(410)
			tmp4 = (int)1000;
		}
		else{
			HX_STACK_LINE(410)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(410)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(410)
		bool tmp6 = (tmp != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(410)
		if ((tmp6)){
			HX_STACK_LINE(412)
			bool tmp7 = (rollingFriction != rollingFriction);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			if ((tmp7)){
				HX_STACK_LINE(412)
				::String tmp8 = HX_HCSTRING("Error: Material::rollingFriction","\x2a","\x4e","\x6b","\x80");		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(412)
				::String tmp9 = (tmp8 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(412)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(413)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(413)
			if ((tmp8)){
				HX_STACK_LINE(413)
				tmp9 = (rollingFriction < (int)0);
			}
			else{
				HX_STACK_LINE(413)
				tmp9 = false;
			}
			HX_STACK_LINE(413)
			if ((tmp9)){
				HX_STACK_LINE(413)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Material::density must be positive","\x6c","\xbf","\x6a","\xa5"));
			}
			HX_STACK_LINE(414)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(414)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(414)
			if ((tmp10)){
				HX_STACK_LINE(414)
				tmp11 = (rollingFriction < (int)0);
			}
			else{
				HX_STACK_LINE(414)
				tmp11 = false;
			}
			HX_STACK_LINE(414)
			if ((tmp11)){
				HX_STACK_LINE(414)
				::String tmp12 = HX_HCSTRING("Error: Material::rollingFriction","\x2a","\x4e","\x6b","\x80");		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(414)
				::String tmp13 = (tmp12 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(414)
				HX_STACK_DO_THROW(tmp13);
			}
			HX_STACK_LINE(416)
			Float tmp12 = rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(416)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(416)
			if ((tmp13)){
				HX_STACK_LINE(416)
				tmp14 = (int)1000;
			}
			else{
				HX_STACK_LINE(416)
				tmp14 = (int)1;
			}
			HX_STACK_LINE(416)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Material tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			tmp16->rollingFriction = tmp15;
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Material tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			int tmp18 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(417)
			int tmp19 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(417)
			int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(417)
			tmp17->invalidate(tmp20);
		}
	}
	HX_STACK_LINE(420)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	Float tmp1 = tmp->rollingFriction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(420)
	if ((tmp2)){
		HX_STACK_LINE(420)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(420)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(420)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(420)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_rollingFriction,return )

::String Material_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Material","toString",0xfcbc025d,"nape.phys.Material.toString","nape/phys/Material.hx",425,0x235b81a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(426)
	::zpp_nape::phys::ZPP_Material tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	Float tmp1 = tmp->elasticity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(426)
	bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(426)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(426)
	if ((tmp2)){
		HX_STACK_LINE(426)
		tmp3 = (int)1000;
	}
	else{
		HX_STACK_LINE(426)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(426)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(426)
	::String tmp5 = (HX_HCSTRING("{ elasticity: ","\x24","\xa5","\xf5","\x7e") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(426)
	::String tmp6 = (tmp5 + HX_HCSTRING(" dynamicFriction: ","\x5f","\xd2","\x4d","\x10"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(426)
	::zpp_nape::phys::ZPP_Material tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(426)
	Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(426)
	bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(426)
	int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(426)
	if ((tmp9)){
		HX_STACK_LINE(426)
		tmp10 = (int)1000;
	}
	else{
		HX_STACK_LINE(426)
		tmp10 = (int)1;
	}
	HX_STACK_LINE(426)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(426)
	::String tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(426)
	::String tmp13 = (tmp12 + HX_HCSTRING(" staticFriction: ","\x8e","\x64","\x14","\xb6"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(426)
	::zpp_nape::phys::ZPP_Material tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(426)
	Float tmp15 = tmp14->staticFriction;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(426)
	bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(426)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(426)
	if ((tmp16)){
		HX_STACK_LINE(426)
		tmp17 = (int)1000;
	}
	else{
		HX_STACK_LINE(426)
		tmp17 = (int)1;
	}
	HX_STACK_LINE(426)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(426)
	::String tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(426)
	::String tmp20 = (tmp19 + HX_HCSTRING(" density: ","\x6e","\x38","\xe2","\x9b"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(426)
	::zpp_nape::phys::ZPP_Material tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(426)
	Float tmp22 = tmp21->density;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(426)
	bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(426)
	int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(426)
	if ((tmp23)){
		HX_STACK_LINE(426)
		tmp24 = (int)1000;
	}
	else{
		HX_STACK_LINE(426)
		tmp24 = (int)1;
	}
	HX_STACK_LINE(426)
	Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(426)
	::String tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(426)
	::String tmp27 = (tmp26 + HX_HCSTRING(" rollingFriction: ","\xe5","\xe3","\x71","\xda"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(426)
	::zpp_nape::phys::ZPP_Material tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(426)
	Float tmp29 = tmp28->rollingFriction;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(426)
	bool tmp30 = false;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(426)
	int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(426)
	if ((tmp30)){
		HX_STACK_LINE(426)
		tmp31 = (int)1000;
	}
	else{
		HX_STACK_LINE(426)
		tmp31 = (int)1;
	}
	HX_STACK_LINE(426)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(426)
	::String tmp33 = (tmp27 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(426)
	::String tmp34 = (tmp33 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(426)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,toString,return )

::nape::phys::Material Material_obj::wood( ){
	HX_STACK_FRAME("nape.phys.Material","wood",0x94a1445e,"nape.phys.Material.wood","nape/phys/Material.hx",434,0x235b81a1)
	HX_STACK_LINE(435)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)0.4),((Float)0.2),((Float)0.38),((Float)0.7),((Float)0.005));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,wood,return )

::nape::phys::Material Material_obj::steel( ){
	HX_STACK_FRAME("nape.phys.Material","steel",0x2e26b7ba,"nape.phys.Material.steel","nape/phys/Material.hx",443,0x235b81a1)
	HX_STACK_LINE(444)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)0.2),((Float)0.57),((Float)0.74),((Float)7.8),((Float)0.001));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,steel,return )

::nape::phys::Material Material_obj::ice( ){
	HX_STACK_FRAME("nape.phys.Material","ice",0x74922f3a,"nape.phys.Material.ice","nape/phys/Material.hx",452,0x235b81a1)
	HX_STACK_LINE(453)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)0.3),((Float)0.03),((Float)0.1),((Float)0.9),((Float)0.0001));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,ice,return )

::nape::phys::Material Material_obj::rubber( ){
	HX_STACK_FRAME("nape.phys.Material","rubber",0x5ec752e1,"nape.phys.Material.rubber","nape/phys/Material.hx",461,0x235b81a1)
	HX_STACK_LINE(462)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)0.8),((Float)1.0),((Float)1.4),((Float)1.5),((Float)0.01));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,rubber,return )

::nape::phys::Material Material_obj::glass( ){
	HX_STACK_FRAME("nape.phys.Material","glass",0x400b0feb,"nape.phys.Material.glass","nape/phys/Material.hx",470,0x235b81a1)
	HX_STACK_LINE(471)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)0.4),((Float)0.4),((Float)0.94),((Float)2.6),((Float)0.002));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,glass,return )

::nape::phys::Material Material_obj::sand( ){
	HX_STACK_FRAME("nape.phys.Material","sand",0x91f1c975,"nape.phys.Material.sand","nape/phys/Material.hx",479,0x235b81a1)
	HX_STACK_LINE(480)
	::nape::phys::Material tmp = ::nape::phys::Material_obj::__new(((Float)-1.0),((Float)0.45),((Float)0.6),((Float)1.6),((Float)16.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,sand,return )


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Material_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return get_elasticity(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_density") ) { return get_density_dyn(); }
		if (HX_FIELD_EQ(inName,"set_density") ) { return set_density_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return get_staticFriction(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return get_dynamicFriction(); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return get_rollingFriction(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Material_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ice") ) { outValue = ice_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wood") ) { outValue = wood_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sand") ) { outValue = sand_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"steel") ) { outValue = steel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"glass") ) { outValue = glass_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rubber") ) { outValue = rubber_dyn(); return true;  }
	}
	return false;
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { if (inCallProp == hx::paccAlways) return set_density(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return set_elasticity(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return set_staticFriction(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return set_dynamicFriction(inValue); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return set_rollingFriction(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Material_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda"));
	outFields->push(HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40"));
	outFields->push(HX_HCSTRING("density","\xe8","\x3f","\xd5","\x42"));
	outFields->push(HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(Material_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_shapes","\xfb","\x49","\xb1","\x0d"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get_elasticity","\xc2","\xab","\xa9","\xc3"),
	HX_HCSTRING("set_elasticity","\x36","\x94","\xc9","\xe3"),
	HX_HCSTRING("get_dynamicFriction","\xb0","\xba","\x95","\x65"),
	HX_HCSTRING("set_dynamicFriction","\xbc","\xad","\x32","\xa2"),
	HX_HCSTRING("get_staticFriction","\x91","\x50","\x62","\xdc"),
	HX_HCSTRING("set_staticFriction","\x05","\x83","\x11","\xb9"),
	HX_HCSTRING("get_density","\xff","\x9f","\xcf","\xc8"),
	HX_HCSTRING("set_density","\x0b","\xa7","\x3c","\xd3"),
	HX_HCSTRING("get_rollingFriction","\xb6","\x3e","\x0c","\x42"),
	HX_HCSTRING("set_rollingFriction","\xc2","\x31","\xa9","\x7e"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

#endif

hx::Class Material_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("wood","\x2d","\xff","\xfc","\x4e"),
	HX_HCSTRING("steel","\x0b","\x72","\x0e","\x84"),
	HX_HCSTRING("ice","\x4b","\x03","\x50","\x00"),
	HX_HCSTRING("rubber","\x70","\x9f","\xa2","\x33"),
	HX_HCSTRING("glass","\x3c","\xca","\xf2","\x95"),
	HX_HCSTRING("sand","\x44","\x84","\x4d","\x4c"),
	::String(null()) };

void Material_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.Material","\xdd","\x28","\x18","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Material_obj::__GetStatic;
	__mClass->mSetStaticField = &Material_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Material_obj >;
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
