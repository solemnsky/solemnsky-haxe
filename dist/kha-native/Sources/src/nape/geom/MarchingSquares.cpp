#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void MarchingSquares_obj::__construct()
{
	return null();
}

//MarchingSquares_obj::~MarchingSquares_obj() { }

Dynamic MarchingSquares_obj::__CreateEmpty() { return  new MarchingSquares_obj; }
hx::ObjectPtr< MarchingSquares_obj > MarchingSquares_obj::__new()
{  hx::ObjectPtr< MarchingSquares_obj > _result_ = new MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

Dynamic MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MarchingSquares_obj > _result_ = new MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::GeomPolyList MarchingSquares_obj::run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 cellsize,hx::Null< int >  __o_quality,::nape::geom::Vec2 subgrid,hx::Null< bool >  __o_combine,::nape::geom::GeomPolyList output){
int quality = __o_quality.Default(2);
bool combine = __o_combine.Default(true);
	HX_STACK_FRAME("nape.geom.MarchingSquares","run",0xa143a3c8,"nape.geom.MarchingSquares.run","nape/geom/MarchingSquares.hx",269,0x5f5b7193)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_ARG(cellsize,"cellsize")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_ARG(subgrid,"subgrid")
	HX_STACK_ARG(combine,"combine")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(272)
			bool tmp = (cellsize != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			if ((tmp)){
				HX_STACK_LINE(272)
				tmp1 = cellsize->zpp_disp;
			}
			else{
				HX_STACK_LINE(272)
				tmp1 = false;
			}
			HX_STACK_LINE(272)
			if ((tmp1)){
				HX_STACK_LINE(272)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(272)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(277)
			bool tmp = (subgrid != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(277)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			if ((tmp)){
				HX_STACK_LINE(277)
				tmp1 = subgrid->zpp_disp;
			}
			else{
				HX_STACK_LINE(277)
				tmp1 = false;
			}
			HX_STACK_LINE(277)
			if ((tmp1)){
				HX_STACK_LINE(277)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(277)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(281)
		bool tmp = (iso == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		if ((tmp)){
			HX_STACK_LINE(282)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares requires an iso function to operate","\xf4","\x56","\x6a","\x7a"));
		}
		HX_STACK_LINE(284)
		bool tmp1 = (bounds == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		if ((tmp1)){
			HX_STACK_LINE(285)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares requires an AABB to define bounds of surface extraction","\x00","\x8b","\xb3","\x0e"));
		}
		HX_STACK_LINE(287)
		bool tmp2 = (cellsize == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		if ((tmp2)){
			HX_STACK_LINE(288)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares requires a Vec2 to define cell size for surface extraction","\xba","\xd7","\x23","\xd9"));
		}
		HX_STACK_LINE(290)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				bool tmp4 = (cellsize != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(290)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				if ((tmp4)){
					HX_STACK_LINE(290)
					tmp5 = cellsize->zpp_disp;
				}
				else{
					HX_STACK_LINE(290)
					tmp5 = false;
				}
				HX_STACK_LINE(290)
				if ((tmp5)){
					HX_STACK_LINE(290)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(290)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(290)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(290)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(290)
				if ((tmp4)){
					HX_STACK_LINE(290)
					_this->_validate();
				}
			}
			HX_STACK_LINE(290)
			tmp3 = cellsize->zpp_inner->x;
		}
		HX_STACK_LINE(290)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		if ((tmp5)){
			HX_STACK_LINE(290)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					bool tmp8 = (cellsize != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(290)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(290)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(290)
					bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(290)
					if ((tmp11)){
						HX_STACK_LINE(290)
						tmp10 = cellsize->zpp_disp;
					}
					else{
						HX_STACK_LINE(290)
						tmp10 = false;
					}
					HX_STACK_LINE(290)
					bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(290)
					if ((tmp12)){
						HX_STACK_LINE(290)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(290)
						::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(290)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(290)
						::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(290)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(290)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(290)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(290)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(290)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(290)
					if ((tmp10)){
						HX_STACK_LINE(290)
						_this->_validate();
					}
				}
				HX_STACK_LINE(290)
				Float tmp8 = cellsize->zpp_inner->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				tmp7 = tmp8;
			}
			HX_STACK_LINE(290)
			tmp6 = (tmp7 <= (int)0);
		}
		else{
			HX_STACK_LINE(290)
			tmp6 = true;
		}
		HX_STACK_LINE(290)
		if ((tmp6)){
			HX_STACK_LINE(291)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares cannot operate with non-positive cell dimensions","\xbc","\x7b","\x09","\x8f"));
		}
		HX_STACK_LINE(293)
		bool tmp7 = (quality < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(293)
		if ((tmp7)){
			HX_STACK_LINE(294)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares cannot use a negative quality value for interpolation","\x90","\x91","\x13","\xe0"));
		}
		HX_STACK_LINE(296)
		bool tmp8 = (subgrid != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(296)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(296)
		if ((tmp8)){
			HX_STACK_LINE(296)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					bool tmp11 = (subgrid != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(296)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(296)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(296)
					if ((tmp14)){
						HX_STACK_LINE(296)
						tmp13 = subgrid->zpp_disp;
					}
					else{
						HX_STACK_LINE(296)
						tmp13 = false;
					}
					HX_STACK_LINE(296)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(296)
					if ((tmp15)){
						HX_STACK_LINE(296)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(296)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(296)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(296)
						::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(296)
						::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(296)
						HX_STACK_DO_THROW(tmp20);
					}
				}
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(296)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(296)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(296)
					if ((tmp13)){
						HX_STACK_LINE(296)
						_this->_validate();
					}
				}
				HX_STACK_LINE(296)
				Float tmp11 = subgrid->zpp_inner->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(296)
				tmp10 = tmp11;
			}
			HX_STACK_LINE(296)
			bool tmp11 = (tmp10 <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(296)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(296)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(296)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(296)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(296)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(296)
			if ((tmp16)){
				HX_STACK_LINE(296)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						bool tmp18 = (subgrid != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(296)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(296)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(296)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(296)
						bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(296)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(296)
						if ((tmp23)){
							HX_STACK_LINE(296)
							tmp21 = subgrid->zpp_disp;
						}
						else{
							HX_STACK_LINE(296)
							tmp21 = false;
						}
						HX_STACK_LINE(296)
						bool tmp24 = tmp21;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(296)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(296)
						if ((tmp25)){
							HX_STACK_LINE(296)
							::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(296)
							::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(296)
							::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(296)
							::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(296)
							::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(296)
							::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(296)
							::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(296)
							::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(296)
							HX_STACK_DO_THROW(tmp33);
						}
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(296)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(296)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(296)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(296)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(296)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(296)
						if ((tmp22)){
							HX_STACK_LINE(296)
							_this->_validate();
						}
					}
					HX_STACK_LINE(296)
					Float tmp18 = subgrid->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(296)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(296)
					tmp17 = tmp19;
				}
				HX_STACK_LINE(296)
				tmp9 = (tmp17 <= (int)0);
			}
			else{
				HX_STACK_LINE(296)
				tmp9 = true;
			}
		}
		else{
			HX_STACK_LINE(296)
			tmp9 = false;
		}
		HX_STACK_LINE(296)
		if ((tmp9)){
			HX_STACK_LINE(297)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MarchingSquares cannot with non-positive sub-grid dimensions","\xa7","\x6f","\xf2","\x98"));
		}
		HX_STACK_LINE(300)
		bool tmp10 = (output != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		if ((tmp10)){
			HX_STACK_LINE(300)
			tmp11 = output;
		}
		else{
			HX_STACK_LINE(300)
			tmp11 = ::nape::geom::GeomPolyList_obj::__new();
		}
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList ret = tmp11;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(301)
		bool tmp12 = (subgrid == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(301)
		if ((tmp12)){
			HX_STACK_LINE(302)
			Dynamic tmp13 = iso;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(302)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					if ((tmp15)){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp14 = bounds->zpp_inner->minx;
			}
			HX_STACK_LINE(302)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					if ((tmp16)){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp15 = bounds->zpp_inner->miny;
			}
			HX_STACK_LINE(302)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 tmp17 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					if ((tmp18)){
						HX_STACK_LINE(302)
						tmp19 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(302)
						tmp19 = false;
					}
					HX_STACK_LINE(302)
					if ((tmp19)){
						HX_STACK_LINE(302)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(302)
						::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					if ((tmp18)){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp16 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(302)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 tmp18 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					if ((tmp19)){
						HX_STACK_LINE(302)
						tmp20 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(302)
						tmp20 = false;
					}
					HX_STACK_LINE(302)
					if ((tmp20)){
						HX_STACK_LINE(302)
						::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(302)
						::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(302)
						HX_STACK_DO_THROW(tmp22);
					}
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					if ((tmp19)){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp17 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(302)
			::nape::geom::Vec2 tmp18 = cellsize;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(302)
			int tmp19 = quality;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(302)
			bool tmp20 = combine;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(302)
			::nape::geom::GeomPolyList tmp21 = ret;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(302)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::run(tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		}
		else{
			HX_STACK_LINE(305)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(305)
					if ((tmp14)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					tmp13 = (_this->maxx - _this->minx);
				}
			}
			HX_STACK_LINE(305)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					bool tmp15 = (subgrid != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(305)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(305)
					if ((tmp15)){
						HX_STACK_LINE(305)
						tmp16 = subgrid->zpp_disp;
					}
					else{
						HX_STACK_LINE(305)
						tmp16 = false;
					}
					HX_STACK_LINE(305)
					if ((tmp16)){
						HX_STACK_LINE(305)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(305)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(305)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(305)
					if ((tmp15)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp14 = subgrid->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(305)
			Float xp = tmp15;		HX_STACK_VAR(xp,"xp");
			HX_STACK_LINE(306)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(306)
					if ((tmp17)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					tmp16 = (_this->maxy - _this->miny);
				}
			}
			HX_STACK_LINE(306)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					bool tmp18 = (subgrid != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(306)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(306)
					if ((tmp18)){
						HX_STACK_LINE(306)
						tmp19 = subgrid->zpp_disp;
					}
					else{
						HX_STACK_LINE(306)
						tmp19 = false;
					}
					HX_STACK_LINE(306)
					if ((tmp19)){
						HX_STACK_LINE(306)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(306)
						::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(306)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(306)
					if ((tmp18)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				tmp17 = subgrid->zpp_inner->y;
			}
			HX_STACK_LINE(306)
			Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(306)
			Float yp = tmp18;		HX_STACK_VAR(yp,"yp");
			HX_STACK_LINE(307)
			Float tmp19 = xp;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(307)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(307)
			int xn = tmp20;		HX_STACK_VAR(xn,"xn");
			HX_STACK_LINE(308)
			Float tmp21 = yp;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(308)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(308)
			int yn = tmp22;		HX_STACK_VAR(yn,"yn");
			HX_STACK_LINE(309)
			bool tmp23 = (xn != xp);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(309)
			if ((tmp23)){
				HX_STACK_LINE(309)
				(xn)++;
			}
			HX_STACK_LINE(310)
			bool tmp24 = (yn != yp);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(310)
			if ((tmp24)){
				HX_STACK_LINE(310)
				(yn)++;
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(311)
				while((true)){
					HX_STACK_LINE(311)
					bool tmp25 = (_g < xn);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(311)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(311)
					if ((tmp26)){
						HX_STACK_LINE(311)
						break;
					}
					HX_STACK_LINE(311)
					int tmp27 = (_g)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(311)
					int x = tmp27;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(312)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(312)
							if ((tmp29)){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						tmp28 = bounds->zpp_inner->minx;
					}
					HX_STACK_LINE(312)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							bool tmp30 = (subgrid != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(312)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(312)
							if ((tmp30)){
								HX_STACK_LINE(312)
								tmp31 = subgrid->zpp_disp;
							}
							else{
								HX_STACK_LINE(312)
								tmp31 = false;
							}
							HX_STACK_LINE(312)
							if ((tmp31)){
								HX_STACK_LINE(312)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(312)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(312)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(312)
							if ((tmp30)){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						tmp29 = subgrid->zpp_inner->x;
					}
					HX_STACK_LINE(312)
					int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(312)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(312)
					Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(312)
					Float x0 = tmp32;		HX_STACK_VAR(x0,"x0");
					HX_STACK_LINE(313)
					int tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(313)
					int tmp34 = (xn - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(313)
					bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(313)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(313)
					if ((tmp35)){
						HX_STACK_LINE(313)
						::nape::geom::Vec2 tmp37 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(313)
						::nape::geom::Vec2 _this = tmp37;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							bool tmp38 = (_this != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(313)
							bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(313)
							if ((tmp38)){
								HX_STACK_LINE(313)
								tmp39 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(313)
								tmp39 = false;
							}
							HX_STACK_LINE(313)
							if ((tmp39)){
								HX_STACK_LINE(313)
								::String tmp40 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(313)
								::String tmp41 = (tmp40 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(313)
								HX_STACK_DO_THROW(tmp41);
							}
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(313)
							if ((tmp38)){
								HX_STACK_LINE(313)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(313)
						tmp36 = _this->zpp_inner->x;
					}
					else{
						HX_STACK_LINE(313)
						Float tmp37 = x0;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(313)
						Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								bool tmp39 = (subgrid != null());		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(313)
								bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(313)
								if ((tmp39)){
									HX_STACK_LINE(313)
									tmp40 = subgrid->zpp_disp;
								}
								else{
									HX_STACK_LINE(313)
									tmp40 = false;
								}
								HX_STACK_LINE(313)
								if ((tmp40)){
									HX_STACK_LINE(313)
									::String tmp41 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(313)
									::String tmp42 = (tmp41 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(313)
									HX_STACK_DO_THROW(tmp42);
								}
							}
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(313)
								bool tmp39 = (_this->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(313)
								if ((tmp39)){
									HX_STACK_LINE(313)
									_this->_validate();
								}
							}
							HX_STACK_LINE(313)
							tmp38 = subgrid->zpp_inner->x;
						}
						HX_STACK_LINE(313)
						tmp36 = (tmp37 + tmp38);
					}
					HX_STACK_LINE(313)
					Float x1 = tmp36;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(314)
						while((true)){
							HX_STACK_LINE(314)
							bool tmp37 = (_g1 < yn);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(314)
							bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(314)
							if ((tmp38)){
								HX_STACK_LINE(314)
								break;
							}
							HX_STACK_LINE(314)
							int tmp39 = (_g1)++;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(314)
							int y = tmp39;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(315)
							Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									bool tmp41 = (_this->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(315)
									if ((tmp41)){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								tmp40 = bounds->zpp_inner->miny;
							}
							HX_STACK_LINE(315)
							Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									bool tmp42 = (subgrid != null());		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(315)
									bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(315)
									if ((tmp42)){
										HX_STACK_LINE(315)
										tmp43 = subgrid->zpp_disp;
									}
									else{
										HX_STACK_LINE(315)
										tmp43 = false;
									}
									HX_STACK_LINE(315)
									if ((tmp43)){
										HX_STACK_LINE(315)
										::String tmp44 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(315)
										::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(315)
										HX_STACK_DO_THROW(tmp45);
									}
								}
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									bool tmp42 = (_this->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(315)
									if ((tmp42)){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								tmp41 = subgrid->zpp_inner->y;
							}
							HX_STACK_LINE(315)
							int tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(315)
							Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(315)
							Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(315)
							Float y0 = tmp44;		HX_STACK_VAR(y0,"y0");
							HX_STACK_LINE(316)
							int tmp45 = y;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(316)
							int tmp46 = (yn - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(316)
							bool tmp47 = (tmp45 == tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(316)
							Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(316)
							if ((tmp47)){
								HX_STACK_LINE(316)
								::nape::geom::Vec2 tmp49 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(316)
								::nape::geom::Vec2 _this = tmp49;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									bool tmp50 = (_this != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(316)
									bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(316)
									if ((tmp50)){
										HX_STACK_LINE(316)
										tmp51 = _this->zpp_disp;
									}
									else{
										HX_STACK_LINE(316)
										tmp51 = false;
									}
									HX_STACK_LINE(316)
									if ((tmp51)){
										HX_STACK_LINE(316)
										::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(316)
										::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(316)
										HX_STACK_DO_THROW(tmp53);
									}
								}
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(316)
									bool tmp50 = (_this1->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(316)
									if ((tmp50)){
										HX_STACK_LINE(316)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(316)
								tmp48 = _this->zpp_inner->y;
							}
							else{
								HX_STACK_LINE(316)
								Float tmp49 = y0;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(316)
								Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										bool tmp51 = (subgrid != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(316)
										bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(316)
										if ((tmp51)){
											HX_STACK_LINE(316)
											tmp52 = subgrid->zpp_disp;
										}
										else{
											HX_STACK_LINE(316)
											tmp52 = false;
										}
										HX_STACK_LINE(316)
										if ((tmp52)){
											HX_STACK_LINE(316)
											::String tmp53 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(316)
											::String tmp54 = (tmp53 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(316)
											HX_STACK_DO_THROW(tmp54);
										}
									}
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(316)
										bool tmp51 = (_this->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(316)
										if ((tmp51)){
											HX_STACK_LINE(316)
											_this->_validate();
										}
									}
									HX_STACK_LINE(316)
									tmp50 = subgrid->zpp_inner->y;
								}
								HX_STACK_LINE(316)
								tmp48 = (tmp49 + tmp50);
							}
							HX_STACK_LINE(316)
							Float y1 = tmp48;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(317)
							Dynamic tmp49 = iso;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(317)
							Float tmp50 = x0;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(317)
							Float tmp51 = y0;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(317)
							Float tmp52 = x1;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(317)
							Float tmp53 = y1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(317)
							::nape::geom::Vec2 tmp54 = cellsize;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(317)
							int tmp55 = quality;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(317)
							bool tmp56 = combine;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(317)
							::nape::geom::GeomPolyList tmp57 = ret;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(317)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::run(tmp49,tmp50,tmp51,tmp52,tmp53,tmp54,tmp55,tmp56,tmp57);
						}
					}
				}
			}
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(322)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(323)
			tmp13 = cellsize->zpp_inner->weak;
			HX_STACK_LINE(322)
			if ((tmp13)){
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						bool tmp14 = (cellsize != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(325)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(325)
						if ((tmp14)){
							HX_STACK_LINE(325)
							tmp15 = cellsize->zpp_disp;
						}
						else{
							HX_STACK_LINE(325)
							tmp15 = false;
						}
						HX_STACK_LINE(325)
						if ((tmp15)){
							HX_STACK_LINE(325)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(325)
							::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(325)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(325)
						bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(325)
						if ((tmp14)){
							HX_STACK_LINE(325)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(325)
						bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(325)
						if ((tmp15)){
							HX_STACK_LINE(325)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(325)
					bool tmp14 = cellsize->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(325)
					if ((tmp14)){
						HX_STACK_LINE(325)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 inner = cellsize->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(325)
					cellsize->zpp_inner->outer = null();
					HX_STACK_LINE(325)
					cellsize->zpp_inner = null();
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::nape::geom::Vec2 o = cellsize;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						o->zpp_pool = null();
						HX_STACK_LINE(325)
						::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(325)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(325)
						if ((tmp16)){
							HX_STACK_LINE(325)
							::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(325)
							tmp17->zpp_pool = o;
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
							bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(325)
							if ((tmp15)){
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
						::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(325)
						o->next = tmp15;
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(326)
				true;
			}
			else{
				HX_STACK_LINE(329)
				false;
			}
		}
		HX_STACK_LINE(332)
		bool tmp13 = (subgrid != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(332)
		if ((tmp13)){
			HX_STACK_LINE(334)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(335)
			tmp14 = subgrid->zpp_inner->weak;
			HX_STACK_LINE(334)
			if ((tmp14)){
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						bool tmp15 = (subgrid != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(337)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						if ((tmp15)){
							HX_STACK_LINE(337)
							tmp16 = subgrid->zpp_disp;
						}
						else{
							HX_STACK_LINE(337)
							tmp16 = false;
						}
						HX_STACK_LINE(337)
						if ((tmp16)){
							HX_STACK_LINE(337)
							::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(337)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(tmp18);
						}
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(337)
						bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(337)
						if ((tmp15)){
							HX_STACK_LINE(337)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(337)
						bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						if ((tmp16)){
							HX_STACK_LINE(337)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(337)
					bool tmp15 = subgrid->zpp_inner->_inuse;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					if ((tmp15)){
						HX_STACK_LINE(337)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 inner = subgrid->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(337)
					subgrid->zpp_inner->outer = null();
					HX_STACK_LINE(337)
					subgrid->zpp_inner = null();
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::nape::geom::Vec2 o = subgrid;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						o->zpp_pool = null();
						HX_STACK_LINE(337)
						::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(337)
						if ((tmp17)){
							HX_STACK_LINE(337)
							::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(337)
							tmp18->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(337)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(337)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(337)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(337)
							if ((tmp16)){
								HX_STACK_LINE(337)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(337)
								o->outer = null();
							}
							HX_STACK_LINE(337)
							o->_isimmutable = null();
							HX_STACK_LINE(337)
							o->_validate = null();
							HX_STACK_LINE(337)
							o->_invalidate = null();
						}
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(337)
						o->next = tmp16;
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(338)
				true;
			}
			else{
				HX_STACK_LINE(341)
				false;
			}
		}
		HX_STACK_LINE(345)
		::nape::geom::GeomPolyList tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(345)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MarchingSquares_obj,run,return )


MarchingSquares_obj::MarchingSquares_obj()
{
}

bool MarchingSquares_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#endif

hx::Class MarchingSquares_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void MarchingSquares_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.MarchingSquares","\x6b","\xda","\xaf","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MarchingSquares_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MarchingSquares_obj >;
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
