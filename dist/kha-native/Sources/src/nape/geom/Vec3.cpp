#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec3_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("nape.geom.Vec3","new",0xc5b97ddd,"nape.geom.Vec3.new","nape/geom/Vec3.hx",181,0x02b49bd3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(189)
	this->zpp_pool = null();
	HX_STACK_LINE(185)
	this->zpp_inner = null();
	HX_STACK_LINE(361)
	::zpp_nape::geom::ZPP_Vec3 tmp = ::zpp_nape::geom::ZPP_Vec3_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	this->zpp_inner = tmp;
	HX_STACK_LINE(362)
	::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(365)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(365)
						if ((tmp2)){
							HX_STACK_LINE(365)
							tmp3 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(365)
							tmp3 = false;
						}
						HX_STACK_LINE(365)
						if ((tmp3)){
							HX_STACK_LINE(365)
							::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(365)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(365)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(365)
					bool tmp3 = tmp2->immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(365)
					if ((tmp3)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(365)
					tmp4->x = x;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(365)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(365)
						if ((tmp2)){
							HX_STACK_LINE(365)
							tmp3 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(365)
							tmp3 = false;
						}
						HX_STACK_LINE(365)
						if ((tmp3)){
							HX_STACK_LINE(365)
							::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(365)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(365)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(365)
						if ((tmp3)){
							HX_STACK_LINE(365)
							_this->_validate();
						}
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(365)
					tmp2->x;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(366)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(366)
						if ((tmp2)){
							HX_STACK_LINE(366)
							tmp3 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(366)
							tmp3 = false;
						}
						HX_STACK_LINE(366)
						if ((tmp3)){
							HX_STACK_LINE(366)
							::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(366)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(366)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(366)
					bool tmp3 = tmp2->immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(366)
					if ((tmp3)){
						HX_STACK_LINE(366)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(366)
					tmp4->y = y;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(366)
						bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(366)
						if ((tmp2)){
							HX_STACK_LINE(366)
							tmp3 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(366)
							tmp3 = false;
						}
						HX_STACK_LINE(366)
						if ((tmp3)){
							HX_STACK_LINE(366)
							::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(366)
							::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(366)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(366)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(366)
						if ((tmp3)){
							HX_STACK_LINE(366)
							_this->_validate();
						}
					}
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(366)
					tmp2->y;
				}
			}
			HX_STACK_LINE(375)
			{
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(384)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(384)
					if ((tmp2)){
						HX_STACK_LINE(384)
						tmp3 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(384)
						tmp3 = false;
					}
					HX_STACK_LINE(384)
					if ((tmp3)){
						HX_STACK_LINE(384)
						::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(384)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(384)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(384)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(384)
				bool tmp3 = tmp2->immutable;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(384)
				if ((tmp3)){
					HX_STACK_LINE(384)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
				}
				HX_STACK_LINE(384)
				::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(384)
				tmp4->z = z;
			}
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(384)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(384)
					if ((tmp2)){
						HX_STACK_LINE(384)
						tmp3 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(384)
						tmp3 = false;
					}
					HX_STACK_LINE(384)
					if ((tmp3)){
						HX_STACK_LINE(384)
						::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(384)
						::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(384)
						HX_STACK_DO_THROW(tmp5);
					}
				}
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(384)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(384)
					if ((tmp3)){
						HX_STACK_LINE(384)
						_this->_validate();
					}
				}
				HX_STACK_LINE(384)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(384)
				tmp2->z;
			}
		}
	}
}
;
	return null();
}

//Vec3_obj::~Vec3_obj() { }

Dynamic Vec3_obj::__CreateEmpty() { return  new Vec3_obj; }
hx::ObjectPtr< Vec3_obj > Vec3_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< Vec3_obj > _result_ = new Vec3_obj();
	_result_->__construct(__o_x,__o_y,__o_z);
	return _result_;}

Dynamic Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec3_obj > _result_ = new Vec3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Float Vec3_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_x",0xbdaa6c0c,"nape.geom.Vec3.get_x","nape/geom/Vec3.hx",225,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(228)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		if ((tmp)){
			HX_STACK_LINE(228)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(228)
			tmp1 = false;
		}
		HX_STACK_LINE(228)
		if ((tmp1)){
			HX_STACK_LINE(228)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(231)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			_this->_validate();
		}
	}
	HX_STACK_LINE(232)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_x,return )

Float Vec3_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec3","set_x",0xa6796218,"nape.geom.Vec3.set_x","nape/geom/Vec3.hx",234,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(238)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			if ((tmp)){
				HX_STACK_LINE(238)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(238)
				tmp1 = false;
			}
			HX_STACK_LINE(238)
			if ((tmp1)){
				HX_STACK_LINE(238)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(238)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(238)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(242)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(243)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
		}
		HX_STACK_LINE(246)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		tmp2->x = x;
	}
	HX_STACK_LINE(248)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp1)){
				HX_STACK_LINE(248)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(248)
				tmp2 = false;
			}
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(248)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(248)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(248)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				_this->_validate();
			}
		}
		HX_STACK_LINE(248)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_x,return )

Float Vec3_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_y",0xbdaa6c0d,"nape.geom.Vec3.get_y","nape/geom/Vec3.hx",256,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(259)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		if ((tmp)){
			HX_STACK_LINE(259)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(259)
			tmp1 = false;
		}
		HX_STACK_LINE(259)
		if ((tmp1)){
			HX_STACK_LINE(259)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(259)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(262)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		if ((tmp1)){
			HX_STACK_LINE(262)
			_this->_validate();
		}
	}
	HX_STACK_LINE(263)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_y,return )

Float Vec3_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec3","set_y",0xa6796219,"nape.geom.Vec3.set_y","nape/geom/Vec3.hx",265,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(269)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(269)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp)){
				HX_STACK_LINE(269)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(269)
				tmp1 = false;
			}
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(269)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(269)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(269)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(273)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		if ((tmp1)){
			HX_STACK_LINE(274)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
		}
		HX_STACK_LINE(277)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		tmp2->y = y;
	}
	HX_STACK_LINE(279)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			if ((tmp1)){
				HX_STACK_LINE(279)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(279)
				tmp2 = false;
			}
			HX_STACK_LINE(279)
			if ((tmp2)){
				HX_STACK_LINE(279)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(279)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			if ((tmp2)){
				HX_STACK_LINE(279)
				_this->_validate();
			}
		}
		HX_STACK_LINE(279)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		tmp = tmp1->y;
	}
	HX_STACK_LINE(279)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_y,return )

Float Vec3_obj::get_z( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_z",0xbdaa6c0e,"nape.geom.Vec3.get_z","nape/geom/Vec3.hx",287,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	{
		HX_STACK_LINE(290)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		if ((tmp)){
			HX_STACK_LINE(290)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(290)
			tmp1 = false;
		}
		HX_STACK_LINE(290)
		if ((tmp1)){
			HX_STACK_LINE(290)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(293)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp1)){
			HX_STACK_LINE(293)
			_this->_validate();
		}
	}
	HX_STACK_LINE(294)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = tmp->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_z,return )

Float Vec3_obj::set_z( Float z){
	HX_STACK_FRAME("nape.geom.Vec3","set_z",0xa679621a,"nape.geom.Vec3.set_z","nape/geom/Vec3.hx",296,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(300)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(300)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			if ((tmp)){
				HX_STACK_LINE(300)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(300)
				tmp1 = false;
			}
			HX_STACK_LINE(300)
			if ((tmp1)){
				HX_STACK_LINE(300)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(300)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(304)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
		}
		HX_STACK_LINE(308)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		tmp2->z = z;
	}
	HX_STACK_LINE(310)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp1)){
				HX_STACK_LINE(310)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(310)
				tmp2 = false;
			}
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(310)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				_this->_validate();
			}
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		tmp = tmp1->z;
	}
	HX_STACK_LINE(310)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_z,return )

Void Vec3_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec3","dispose",0xe2a3309c,"nape.geom.Vec3.dispose","nape/geom/Vec3.hx",406,0x02b49bd3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(409)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(409)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(409)
			if ((tmp)){
				HX_STACK_LINE(409)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(409)
				tmp1 = false;
			}
			HX_STACK_LINE(409)
			if ((tmp1)){
				HX_STACK_LINE(409)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(409)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(409)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(413)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(414)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec3 is not disposable","\xf6","\xe5","\xde","\xdd"));
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(418)
			::nape::geom::Vec3 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(428)
			o->zpp_pool = null();
			HX_STACK_LINE(429)
			::nape::geom::Vec3 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec3;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			if ((tmp3)){
				HX_STACK_LINE(429)
				::nape::geom::Vec3 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(429)
				tmp4->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(430)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = o;
			}
			HX_STACK_LINE(431)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec3 = o;
			HX_STACK_LINE(441)
			o->zpp_disp = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,dispose,(void))

Float Vec3_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_length",0x758ab0d2,"nape.geom.Vec3.get_length","nape/geom/Vec3.hx",457,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(460)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		if ((tmp)){
			HX_STACK_LINE(460)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(460)
			tmp1 = false;
		}
		HX_STACK_LINE(460)
		if ((tmp1)){
			HX_STACK_LINE(460)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(460)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(463)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(463)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			if ((tmp1)){
				HX_STACK_LINE(463)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp2 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp2)){
				HX_STACK_LINE(463)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(463)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			if ((tmp2)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(463)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			if ((tmp2)){
				HX_STACK_LINE(463)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp3 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp3)){
				HX_STACK_LINE(463)
				::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(463)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			if ((tmp3)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(463)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(463)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			if ((tmp4)){
				HX_STACK_LINE(463)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp5 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp5)){
				HX_STACK_LINE(463)
				::String tmp6 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(463)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			if ((tmp5)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(463)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(463)
			if ((tmp5)){
				HX_STACK_LINE(463)
				tmp6 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp6 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp6)){
				HX_STACK_LINE(463)
				::String tmp7 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(463)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(463)
			if ((tmp6)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(463)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(463)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(463)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			if ((tmp8)){
				HX_STACK_LINE(463)
				tmp9 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp9 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp9)){
				HX_STACK_LINE(463)
				::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(463)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			if ((tmp9)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		tmp7 = tmp8->z;
	}
	HX_STACK_LINE(463)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			if ((tmp9)){
				HX_STACK_LINE(463)
				tmp10 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(463)
				tmp10 = false;
			}
			HX_STACK_LINE(463)
			if ((tmp10)){
				HX_STACK_LINE(463)
				::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(463)
				::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			if ((tmp10)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(463)
		tmp8 = tmp9->z;
	}
	HX_STACK_LINE(463)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(463)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(463)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(463)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_length,return )

Float Vec3_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec3","set_length",0x79084f46,"nape.geom.Vec3.set_length","nape/geom/Vec3.hx",465,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(469)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			if ((tmp)){
				HX_STACK_LINE(469)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(469)
				tmp1 = false;
			}
			HX_STACK_LINE(469)
			if ((tmp1)){
				HX_STACK_LINE(469)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(469)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(469)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(473)
		bool tmp = (length != length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		if ((tmp)){
			HX_STACK_LINE(474)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3::length cannot be NaN","\xce","\x21","\xe3","\xd9"));
		}
		HX_STACK_LINE(476)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(476)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				if ((tmp2)){
					HX_STACK_LINE(476)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp3 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp3)){
					HX_STACK_LINE(476)
					::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(476)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				if ((tmp3)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(476)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(476)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				if ((tmp3)){
					HX_STACK_LINE(476)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp4 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp4)){
					HX_STACK_LINE(476)
					::String tmp5 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(476)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				if ((tmp4)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(476)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(476)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				if ((tmp5)){
					HX_STACK_LINE(476)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp6 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp6)){
					HX_STACK_LINE(476)
					::String tmp7 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(476)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				if ((tmp6)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(476)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(476)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(476)
				if ((tmp6)){
					HX_STACK_LINE(476)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp7 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp7)){
					HX_STACK_LINE(476)
					::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(476)
				if ((tmp7)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(476)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(476)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(476)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(476)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(476)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(476)
				if ((tmp9)){
					HX_STACK_LINE(476)
					tmp10 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp10 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp10)){
					HX_STACK_LINE(476)
					::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(476)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(476)
				if ((tmp10)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(476)
			tmp8 = tmp9->z;
		}
		HX_STACK_LINE(476)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(476)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(476)
				if ((tmp10)){
					HX_STACK_LINE(476)
					tmp11 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(476)
					tmp11 = false;
				}
				HX_STACK_LINE(476)
				if ((tmp11)){
					HX_STACK_LINE(476)
					::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(476)
					::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(476)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(476)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(476)
				if ((tmp11)){
					HX_STACK_LINE(476)
					_this->_validate();
				}
			}
			HX_STACK_LINE(476)
			::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(476)
			tmp9 = tmp10->z;
		}
		HX_STACK_LINE(476)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(476)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(476)
		bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(476)
		if ((tmp12)){
			HX_STACK_LINE(477)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set length of a zero vector","\x00","\x7b","\xb2","\x33"));
		}
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(481)
			Float tmp13 = length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(481)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(481)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(481)
					if ((tmp15)){
						HX_STACK_LINE(481)
						tmp16 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(481)
						tmp16 = false;
					}
					HX_STACK_LINE(481)
					if ((tmp16)){
						HX_STACK_LINE(481)
						::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(481)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(481)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(481)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						if ((tmp16)){
							HX_STACK_LINE(481)
							tmp17 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp17 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp17)){
							HX_STACK_LINE(481)
							::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(481)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						if ((tmp17)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(481)
					tmp15 = tmp16->x;
				}
				HX_STACK_LINE(481)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(481)
						if ((tmp17)){
							HX_STACK_LINE(481)
							tmp18 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp18 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp18)){
							HX_STACK_LINE(481)
							::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(481)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(481)
						if ((tmp18)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(481)
					tmp16 = tmp17->x;
				}
				HX_STACK_LINE(481)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(481)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(481)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						if ((tmp19)){
							HX_STACK_LINE(481)
							tmp20 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp20 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp20)){
							HX_STACK_LINE(481)
							::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(481)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						if ((tmp20)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(481)
					tmp18 = tmp19->y;
				}
				HX_STACK_LINE(481)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp20 = true;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(481)
						if ((tmp20)){
							HX_STACK_LINE(481)
							tmp21 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp21 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp21)){
							HX_STACK_LINE(481)
							::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(481)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp23);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(481)
						if ((tmp21)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(481)
					tmp19 = tmp20->y;
				}
				HX_STACK_LINE(481)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(481)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(481)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(481)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(481)
						if ((tmp23)){
							HX_STACK_LINE(481)
							tmp24 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp24 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp24)){
							HX_STACK_LINE(481)
							::String tmp25 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(481)
							::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp26);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp23;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(481)
						if ((tmp24)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(481)
					tmp22 = tmp23->z;
				}
				HX_STACK_LINE(481)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(481)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(481)
						if ((tmp24)){
							HX_STACK_LINE(481)
							tmp25 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(481)
							tmp25 = false;
						}
						HX_STACK_LINE(481)
						if ((tmp25)){
							HX_STACK_LINE(481)
							::String tmp26 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(481)
							::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(tmp27);
						}
					}
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp24;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(481)
						bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(481)
						if ((tmp25)){
							HX_STACK_LINE(481)
							_this->_validate();
						}
					}
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(481)
					tmp23 = tmp24->z;
				}
				HX_STACK_LINE(481)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(481)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(481)
				tmp14 = ::Math_obj::sqrt(tmp25);
			}
			HX_STACK_LINE(481)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(481)
			Float t = tmp15;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(483)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							bool tmp17 = (_g != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(492)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(492)
							if ((tmp17)){
								HX_STACK_LINE(492)
								tmp18 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(492)
								tmp18 = false;
							}
							HX_STACK_LINE(492)
							if ((tmp18)){
								HX_STACK_LINE(492)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(492)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(tmp20);
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(492)
								bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(492)
								if ((tmp19)){
									HX_STACK_LINE(492)
									_this->_validate();
								}
							}
							HX_STACK_LINE(492)
							tmp16 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(492)
						Float tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(492)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(492)
						Float x = tmp18;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(492)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(492)
								if ((tmp19)){
									HX_STACK_LINE(492)
									tmp20 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(492)
									tmp20 = false;
								}
								HX_STACK_LINE(492)
								if ((tmp20)){
									HX_STACK_LINE(492)
									::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(492)
									::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(492)
									HX_STACK_DO_THROW(tmp22);
								}
							}
							HX_STACK_LINE(492)
							bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(492)
							if ((tmp19)){
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
							}
							HX_STACK_LINE(492)
							_g->zpp_inner->x = x;
						}
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(492)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(492)
								if ((tmp19)){
									HX_STACK_LINE(492)
									tmp20 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(492)
									tmp20 = false;
								}
								HX_STACK_LINE(492)
								if ((tmp20)){
									HX_STACK_LINE(492)
									::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(492)
									::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(492)
									HX_STACK_DO_THROW(tmp22);
								}
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(492)
								bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(492)
								if ((tmp19)){
									HX_STACK_LINE(492)
									_this->_validate();
								}
							}
							HX_STACK_LINE(492)
							_g->zpp_inner->x;
						}
					}
				}
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							bool tmp17 = (_g != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(493)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(493)
							if ((tmp17)){
								HX_STACK_LINE(493)
								tmp18 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(493)
								tmp18 = false;
							}
							HX_STACK_LINE(493)
							if ((tmp18)){
								HX_STACK_LINE(493)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(493)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(493)
								HX_STACK_DO_THROW(tmp20);
							}
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(493)
								bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(493)
								if ((tmp19)){
									HX_STACK_LINE(493)
									_this->_validate();
								}
							}
							HX_STACK_LINE(493)
							tmp16 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(493)
						Float tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(493)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(493)
						Float y = tmp18;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(493)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(493)
								if ((tmp19)){
									HX_STACK_LINE(493)
									tmp20 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(493)
									tmp20 = false;
								}
								HX_STACK_LINE(493)
								if ((tmp20)){
									HX_STACK_LINE(493)
									::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(493)
									::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(493)
									HX_STACK_DO_THROW(tmp22);
								}
							}
							HX_STACK_LINE(493)
							bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(493)
							if ((tmp19)){
								HX_STACK_LINE(493)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
							}
							HX_STACK_LINE(493)
							_g->zpp_inner->y = y;
						}
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(493)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(493)
								if ((tmp19)){
									HX_STACK_LINE(493)
									tmp20 = _g->zpp_disp;
								}
								else{
									HX_STACK_LINE(493)
									tmp20 = false;
								}
								HX_STACK_LINE(493)
								if ((tmp20)){
									HX_STACK_LINE(493)
									::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(493)
									::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(493)
									HX_STACK_DO_THROW(tmp22);
								}
							}
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(493)
								bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(493)
								if ((tmp19)){
									HX_STACK_LINE(493)
									_this->_validate();
								}
							}
							HX_STACK_LINE(493)
							_g->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						bool tmp17 = (_g != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(495)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(495)
						if ((tmp17)){
							HX_STACK_LINE(495)
							tmp18 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(495)
							tmp18 = false;
						}
						HX_STACK_LINE(495)
						if ((tmp18)){
							HX_STACK_LINE(495)
							::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(495)
							HX_STACK_DO_THROW(tmp20);
						}
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(495)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							if ((tmp19)){
								HX_STACK_LINE(495)
								_this->_validate();
							}
						}
						HX_STACK_LINE(495)
						tmp16 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(495)
					Float tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(495)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(495)
					Float z = tmp18;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(495)
							if ((tmp19)){
								HX_STACK_LINE(495)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(495)
								tmp20 = false;
							}
							HX_STACK_LINE(495)
							if ((tmp20)){
								HX_STACK_LINE(495)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(495)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(495)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(495)
						bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(495)
						if ((tmp19)){
							HX_STACK_LINE(495)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(495)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(495)
							if ((tmp19)){
								HX_STACK_LINE(495)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(495)
								tmp20 = false;
							}
							HX_STACK_LINE(495)
							if ((tmp20)){
								HX_STACK_LINE(495)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(495)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(495)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(495)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							if ((tmp19)){
								HX_STACK_LINE(495)
								_this->_validate();
							}
						}
						HX_STACK_LINE(495)
						_g->zpp_inner->z;
					}
				}
			}
		}
	}
	HX_STACK_LINE(498)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(498)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			if ((tmp1)){
				HX_STACK_LINE(498)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(498)
				tmp2 = false;
			}
			HX_STACK_LINE(498)
			if ((tmp2)){
				HX_STACK_LINE(498)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(498)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(498)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				if ((tmp2)){
					HX_STACK_LINE(498)
					tmp3 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp3 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp3)){
					HX_STACK_LINE(498)
					::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(498)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				if ((tmp3)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(498)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				if ((tmp3)){
					HX_STACK_LINE(498)
					tmp4 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp4 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp4)){
					HX_STACK_LINE(498)
					::String tmp5 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(498)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				if ((tmp4)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(498)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(498)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(498)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				if ((tmp5)){
					HX_STACK_LINE(498)
					tmp6 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp6 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp6)){
					HX_STACK_LINE(498)
					::String tmp7 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(498)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				if ((tmp6)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(498)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(498)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(498)
				if ((tmp6)){
					HX_STACK_LINE(498)
					tmp7 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp7 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp7)){
					HX_STACK_LINE(498)
					::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(498)
					::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(498)
				if ((tmp7)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(498)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(498)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(498)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				if ((tmp9)){
					HX_STACK_LINE(498)
					tmp10 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp10 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp10)){
					HX_STACK_LINE(498)
					::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(498)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				if ((tmp10)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			tmp8 = tmp9->z;
		}
		HX_STACK_LINE(498)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(498)
				if ((tmp10)){
					HX_STACK_LINE(498)
					tmp11 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(498)
					tmp11 = false;
				}
				HX_STACK_LINE(498)
				if ((tmp11)){
					HX_STACK_LINE(498)
					::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(498)
					::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(tmp13);
				}
			}
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(498)
				if ((tmp11)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			tmp9 = tmp10->z;
		}
		HX_STACK_LINE(498)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		tmp = ::Math_obj::sqrt(tmp11);
	}
	HX_STACK_LINE(498)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_length,return )

Float Vec3_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec3","lsq",0xc5b80587,"nape.geom.Vec3.lsq","nape/geom/Vec3.hx",507,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	{
		HX_STACK_LINE(510)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		if ((tmp)){
			HX_STACK_LINE(510)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(510)
			tmp1 = false;
		}
		HX_STACK_LINE(510)
		if ((tmp1)){
			HX_STACK_LINE(510)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(510)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(510)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(513)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp1)){
				HX_STACK_LINE(513)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp2 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(513)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(513)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				tmp3 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp3 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp3)){
				HX_STACK_LINE(513)
				::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(513)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			if ((tmp3)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(513)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			if ((tmp4)){
				HX_STACK_LINE(513)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp5 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(513)
				::String tmp6 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(513)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(513)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(513)
				tmp6 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp6 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp6)){
				HX_STACK_LINE(513)
				::String tmp7 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(513)
			if ((tmp6)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(513)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(513)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(513)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			if ((tmp8)){
				HX_STACK_LINE(513)
				tmp9 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp9 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp9)){
				HX_STACK_LINE(513)
				::String tmp10 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(513)
				::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			if ((tmp9)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		tmp7 = tmp8->z;
	}
	HX_STACK_LINE(513)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			if ((tmp9)){
				HX_STACK_LINE(513)
				tmp10 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(513)
				tmp10 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp10)){
				HX_STACK_LINE(513)
				::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(513)
				::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp12);
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			if ((tmp10)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		tmp8 = tmp9->z;
	}
	HX_STACK_LINE(513)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(513)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(513)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,lsq,return )

::nape::geom::Vec3 Vec3_obj::set( ::nape::geom::Vec3 vector){
	HX_STACK_FRAME("nape.geom.Vec3","set",0xc5bd491f,"nape.geom.Vec3.set","nape/geom/Vec3.hx",524,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(527)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(527)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(527)
			tmp1 = false;
		}
		HX_STACK_LINE(527)
		if ((tmp1)){
			HX_STACK_LINE(527)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(530)
	{
		HX_STACK_LINE(532)
		bool tmp = (vector != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		if ((tmp)){
			HX_STACK_LINE(532)
			tmp1 = vector->zpp_disp;
		}
		else{
			HX_STACK_LINE(532)
			tmp1 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp1)){
			HX_STACK_LINE(532)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(536)
	bool tmp = (vector == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	if ((tmp)){
		HX_STACK_LINE(537)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec3","\x96","\x15","\x46","\x66"));
	}
	HX_STACK_LINE(540)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			bool tmp2 = (vector != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(540)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			if ((tmp2)){
				HX_STACK_LINE(540)
				tmp3 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(540)
				tmp3 = false;
			}
			HX_STACK_LINE(540)
			if ((tmp3)){
				HX_STACK_LINE(540)
				::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(540)
				::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(540)
			if ((tmp2)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp1 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(540)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			bool tmp3 = (vector != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			if ((tmp3)){
				HX_STACK_LINE(540)
				tmp4 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(540)
				tmp4 = false;
			}
			HX_STACK_LINE(540)
			if ((tmp4)){
				HX_STACK_LINE(540)
				::String tmp5 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			if ((tmp3)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp2 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(540)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			bool tmp4 = (vector != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(540)
			if ((tmp4)){
				HX_STACK_LINE(540)
				tmp5 = vector->zpp_disp;
			}
			else{
				HX_STACK_LINE(540)
				tmp5 = false;
			}
			HX_STACK_LINE(540)
			if ((tmp5)){
				HX_STACK_LINE(540)
				::String tmp6 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(540)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(540)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			if ((tmp4)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp3 = vector->zpp_inner->z;
	}
	HX_STACK_LINE(540)
	::nape::geom::Vec3 tmp4 = this->setxyz(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(540)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set,return )

::nape::geom::Vec3 Vec3_obj::setxyz( Float x,Float y,Float z){
	HX_STACK_FRAME("nape.geom.Vec3","setxyz",0x03cf6c9a,"nape.geom.Vec3.setxyz","nape/geom/Vec3.hx",552,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(555)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(555)
		if ((tmp)){
			HX_STACK_LINE(555)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(555)
			tmp1 = false;
		}
		HX_STACK_LINE(555)
		if ((tmp1)){
			HX_STACK_LINE(555)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(555)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(555)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(558)
	{
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(560)
						bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(560)
						if ((tmp)){
							HX_STACK_LINE(560)
							tmp1 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(560)
							tmp1 = false;
						}
						HX_STACK_LINE(560)
						if ((tmp1)){
							HX_STACK_LINE(560)
							::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(560)
							::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(560)
							HX_STACK_DO_THROW(tmp3);
						}
					}
					HX_STACK_LINE(560)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(560)
					bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(560)
					if ((tmp1)){
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(560)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(560)
					tmp2->x = x;
				}
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(560)
						bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(560)
						if ((tmp)){
							HX_STACK_LINE(560)
							tmp1 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(560)
							tmp1 = false;
						}
						HX_STACK_LINE(560)
						if ((tmp1)){
							HX_STACK_LINE(560)
							::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(560)
							::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(560)
							HX_STACK_DO_THROW(tmp3);
						}
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(560)
						bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(560)
						if ((tmp1)){
							HX_STACK_LINE(560)
							_this->_validate();
						}
					}
					HX_STACK_LINE(560)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(560)
					tmp->x;
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(561)
						bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(561)
						if ((tmp)){
							HX_STACK_LINE(561)
							tmp1 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(561)
							tmp1 = false;
						}
						HX_STACK_LINE(561)
						if ((tmp1)){
							HX_STACK_LINE(561)
							::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(561)
							::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(561)
							HX_STACK_DO_THROW(tmp3);
						}
					}
					HX_STACK_LINE(561)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(561)
					bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(561)
					if ((tmp1)){
						HX_STACK_LINE(561)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
					}
					HX_STACK_LINE(561)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(561)
					tmp2->y = y;
				}
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(561)
						bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(561)
						if ((tmp)){
							HX_STACK_LINE(561)
							tmp1 = this->zpp_disp;
						}
						else{
							HX_STACK_LINE(561)
							tmp1 = false;
						}
						HX_STACK_LINE(561)
						if ((tmp1)){
							HX_STACK_LINE(561)
							::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(561)
							::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(561)
							HX_STACK_DO_THROW(tmp3);
						}
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(561)
						bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(561)
						if ((tmp1)){
							HX_STACK_LINE(561)
							_this->_validate();
						}
					}
					HX_STACK_LINE(561)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(561)
					tmp->y;
				}
			}
			HX_STACK_LINE(570)
			{
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(579)
					bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(579)
					if ((tmp)){
						HX_STACK_LINE(579)
						tmp1 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(579)
						tmp1 = false;
					}
					HX_STACK_LINE(579)
					if ((tmp1)){
						HX_STACK_LINE(579)
						::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(579)
						::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(tmp3);
					}
				}
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(579)
				bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(579)
				if ((tmp1)){
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
				}
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(579)
				tmp2->z = z;
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(579)
					bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(579)
					if ((tmp)){
						HX_STACK_LINE(579)
						tmp1 = this->zpp_disp;
					}
					else{
						HX_STACK_LINE(579)
						tmp1 = false;
					}
					HX_STACK_LINE(579)
					if ((tmp1)){
						HX_STACK_LINE(579)
						::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(579)
						::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(tmp3);
					}
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(579)
					bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(579)
					if ((tmp1)){
						HX_STACK_LINE(579)
						_this->_validate();
					}
				}
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(579)
				tmp->z;
			}
		}
	}
	HX_STACK_LINE(581)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,setxyz,return )

::nape::geom::Vec2 Vec3_obj::xy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec3","xy",0x83c1ba24,"nape.geom.Vec3.xy","nape/geom/Vec3.hx",597,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(600)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(600)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(600)
			if ((tmp)){
				HX_STACK_LINE(600)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(600)
				tmp1 = false;
			}
			HX_STACK_LINE(600)
			if ((tmp1)){
				HX_STACK_LINE(600)
				::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(600)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(600)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(603)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				bool tmp2 = this->zpp_disp;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(603)
				if ((tmp2)){
					HX_STACK_LINE(603)
					::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(603)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					HX_STACK_DO_THROW(tmp4);
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					if ((tmp4)){
						HX_STACK_LINE(603)
						_this->_validate();
					}
				}
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				tmp1 = tmp3->x;
			}
			HX_STACK_LINE(603)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(603)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				bool tmp3 = this->zpp_disp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				if ((tmp3)){
					HX_STACK_LINE(603)
					::String tmp4 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(603)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(603)
					if ((tmp5)){
						HX_STACK_LINE(603)
						_this->_validate();
					}
				}
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(603)
				tmp2 = tmp4->y;
			}
			HX_STACK_LINE(603)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(603)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(603)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(603)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(603)
			if ((tmp4)){
				HX_STACK_LINE(603)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(603)
				tmp5 = true;
			}
			HX_STACK_LINE(603)
			if ((tmp5)){
				HX_STACK_LINE(603)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(603)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(603)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(603)
				if ((tmp7)){
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(603)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(603)
					ret = tmp8;
					HX_STACK_LINE(603)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(603)
					ret->zpp_pool = null();
					HX_STACK_LINE(603)
					ret->zpp_disp = false;
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(603)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(603)
					if ((tmp11)){
						HX_STACK_LINE(603)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(603)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(603)
			if ((tmp6)){
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(603)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(603)
						if ((tmp9)){
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(603)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(603)
							ret1 = tmp10;
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(603)
							ret1->next = null();
						}
						HX_STACK_LINE(603)
						ret1->weak = false;
					}
					HX_STACK_LINE(603)
					ret1->_immutable = immutable;
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						ret1->x = x;
						HX_STACK_LINE(603)
						ret1->y = y;
						HX_STACK_LINE(603)
						{
						}
					}
					HX_STACK_LINE(603)
					tmp7 = ret1;
				}
				HX_STACK_LINE(603)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(603)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(603)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(603)
					if ((tmp7)){
						HX_STACK_LINE(603)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(603)
						tmp8 = false;
					}
					HX_STACK_LINE(603)
					if ((tmp8)){
						HX_STACK_LINE(603)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(603)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(603)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(603)
					if ((tmp7)){
						HX_STACK_LINE(603)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(603)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(603)
					if ((tmp8)){
						HX_STACK_LINE(603)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(603)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(603)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(603)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(603)
				if ((tmp8)){
					HX_STACK_LINE(603)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(603)
					tmp9 = true;
				}
				HX_STACK_LINE(603)
				if ((tmp9)){
					HX_STACK_LINE(603)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(603)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(603)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(603)
						if ((tmp11)){
							HX_STACK_LINE(603)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(603)
							tmp12 = false;
						}
						HX_STACK_LINE(603)
						if ((tmp12)){
							HX_STACK_LINE(603)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(603)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(603)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(603)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(603)
						if ((tmp11)){
							HX_STACK_LINE(603)
							_this->_validate();
						}
					}
					HX_STACK_LINE(603)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(603)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				if ((tmp12)){
					HX_STACK_LINE(603)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(603)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(603)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(603)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(603)
							if ((tmp18)){
								HX_STACK_LINE(603)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(603)
								tmp17 = false;
							}
							HX_STACK_LINE(603)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(603)
							if ((tmp19)){
								HX_STACK_LINE(603)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(603)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(603)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(603)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(603)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(603)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(603)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(603)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(603)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(603)
							if ((tmp17)){
								HX_STACK_LINE(603)
								_this->_validate();
							}
						}
						HX_STACK_LINE(603)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(603)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(603)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(603)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(603)
					tmp13 = false;
				}
				HX_STACK_LINE(603)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				if ((tmp14)){
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(603)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(603)
						{
						}
					}
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(603)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(603)
						if ((tmp15)){
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(603)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(603)
				ret;
			}
			HX_STACK_LINE(603)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(603)
			tmp = ret;
		}
		HX_STACK_LINE(603)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,xy,return )

::String Vec3_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec3","toString",0x7cf21e0f,"nape.geom.Vec3.toString","nape/geom/Vec3.hx",608,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(611)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(611)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		if ((tmp)){
			HX_STACK_LINE(611)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(611)
			tmp1 = false;
		}
		HX_STACK_LINE(611)
		if ((tmp1)){
			HX_STACK_LINE(611)
			::String tmp2 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(611)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(611)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(614)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			if ((tmp1)){
				HX_STACK_LINE(614)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(614)
				tmp2 = false;
			}
			HX_STACK_LINE(614)
			if ((tmp2)){
				HX_STACK_LINE(614)
				::String tmp3 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(614)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(614)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			if ((tmp2)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(614)
	::String tmp1 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(614)
	::String tmp2 = (tmp1 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(614)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(614)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(614)
			if ((tmp4)){
				HX_STACK_LINE(614)
				tmp5 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(614)
				tmp5 = false;
			}
			HX_STACK_LINE(614)
			if ((tmp5)){
				HX_STACK_LINE(614)
				::String tmp6 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(614)
			if ((tmp5)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(614)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(614)
	::String tmp5 = (tmp4 + HX_HCSTRING(" z: ","\x80","\x99","\x83","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(614)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(614)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(614)
			if ((tmp7)){
				HX_STACK_LINE(614)
				tmp8 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(614)
				tmp8 = false;
			}
			HX_STACK_LINE(614)
			if ((tmp8)){
				HX_STACK_LINE(614)
				::String tmp9 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(614)
				::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(614)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(614)
			if ((tmp8)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(614)
		tmp6 = tmp7->z;
	}
	HX_STACK_LINE(614)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(614)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(614)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,toString,return )

::nape::geom::Vec3 Vec3_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
	HX_STACK_FRAME("nape.geom.Vec3","get",0xc5b42e13,"nape.geom.Vec3.get","nape/geom/Vec3.hx",322,0x02b49bd3)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
{
		HX_STACK_LINE(323)
		::nape::geom::Vec3 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(325)
			::nape::geom::Vec3 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			if ((tmp1)){
				HX_STACK_LINE(326)
				::nape::geom::Vec3 tmp2 = ::nape::geom::Vec3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				ret = tmp2;
			}
			else{
				HX_STACK_LINE(332)
				::nape::geom::Vec3 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				ret = tmp2;
				HX_STACK_LINE(333)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = ret->zpp_pool;
				HX_STACK_LINE(334)
				ret->zpp_pool = null();
				HX_STACK_LINE(336)
				ret->zpp_disp = false;
				HX_STACK_LINE(337)
				::nape::geom::Vec3 tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(337)
				::nape::geom::Vec3 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				if ((tmp5)){
					HX_STACK_LINE(337)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec3 = null();
				}
			}
		}
		HX_STACK_LINE(344)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		Float tmp2 = z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		ret->setxyz(tmp,tmp1,tmp2);
		HX_STACK_LINE(345)
		ret->zpp_inner->immutable = false;
		HX_STACK_LINE(346)
		ret->zpp_inner->_validate = null();
		HX_STACK_LINE(347)
		::nape::geom::Vec3 tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,get,return )


Vec3_obj::Vec3_obj()
{
}

void Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec3);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_MARK_END_CLASS();
}

void Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_disp,"zpp_disp");
}

Dynamic Vec3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return xy_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"setxyz") ) { return setxyz_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { return zpp_disp; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vec3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
	}
	return false;
}

Dynamic Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { zpp_disp=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vec3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"));
	outFields->push(HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec3*/ ,(int)offsetof(Vec3_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(Vec3_obj,zpp_pool),HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsBool,(int)offsetof(Vec3_obj,zpp_disp),HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setxyz","\xf7","\x4d","\x8b","\x6f"),
	HX_HCSTRING("xy","\x01","\x69","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#endif

hx::Class Vec3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void Vec3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Vec3","\x6b","\x4b","\x9c","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec3_obj::__GetStatic;
	__mClass->mSetStaticField = &Vec3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vec3_obj >;
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
} // end namespace geom
