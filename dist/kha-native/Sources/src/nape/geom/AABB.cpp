#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void AABB_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("nape.geom.AABB","new",0xaccd397e,"nape.geom.AABB.new","nape/geom/AABB.hx",182,0x3e49ef52)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(186)
	this->zpp_inner = null();
	HX_STACK_LINE(207)
	bool tmp = (x != x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	if ((tmp1)){
		HX_STACK_LINE(207)
		tmp2 = (y != y);
	}
	else{
		HX_STACK_LINE(207)
		tmp2 = true;
	}
	HX_STACK_LINE(207)
	if ((tmp2)){
		HX_STACK_LINE(208)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB position cannot be NaN","\x76","\xd1","\xf1","\xdc"));
	}
	HX_STACK_LINE(210)
	bool tmp3 = (width != width);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(210)
	if ((tmp4)){
		HX_STACK_LINE(210)
		tmp5 = (height != height);
	}
	else{
		HX_STACK_LINE(210)
		tmp5 = true;
	}
	HX_STACK_LINE(210)
	if ((tmp5)){
		HX_STACK_LINE(211)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB dimensions cannot be NaN","\x9a","\x66","\xb0","\x5f"));
	}
	HX_STACK_LINE(214)
	::zpp_nape::geom::ZPP_AABB tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::zpp_nape::geom::ZPP_AABB tmp7 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			if ((tmp8)){
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB tmp9 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(214)
				ret = tmp9;
			}
			else{
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB tmp9 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(214)
				ret = tmp9;
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(214)
				ret->next = null();
			}
			HX_STACK_LINE(214)
			Dynamic();
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->minx = x;
			HX_STACK_LINE(214)
			ret->miny = y;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			ret->maxx = tmp7;
			HX_STACK_LINE(214)
			Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			ret->maxy = tmp8;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		tmp6 = ret;
	}
	HX_STACK_LINE(214)
	this->zpp_inner = tmp6;
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	tmp7->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//AABB_obj::~AABB_obj() { }

Dynamic AABB_obj::__CreateEmpty() { return  new AABB_obj; }
hx::ObjectPtr< AABB_obj > AABB_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< AABB_obj > _result_ = new AABB_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height);
	return _result_;}

Dynamic AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB_obj > _result_ = new AABB_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::nape::geom::AABB AABB_obj::copy( ){
	HX_STACK_FRAME("nape.geom.AABB","copy",0x7f874cd7,"nape.geom.AABB.copy","nape/geom/AABB.hx",226,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(227)
			_this->_validate();
		}
	}
	HX_STACK_LINE(228)
	::zpp_nape::geom::ZPP_AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					ret = tmp4;
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
					HX_STACK_LINE(228)
					ret->next = null();
				}
				HX_STACK_LINE(228)
				Dynamic();
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				ret->minx = _this->minx;
				HX_STACK_LINE(228)
				ret->miny = _this->miny;
				HX_STACK_LINE(228)
				{
				}
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				ret->maxx = _this->maxx;
				HX_STACK_LINE(228)
				ret->maxy = _this->maxy;
				HX_STACK_LINE(228)
				{
				}
			}
			HX_STACK_LINE(228)
			tmp = ret;
		}
	}
	HX_STACK_LINE(228)
	::nape::geom::AABB tmp1 = tmp->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,copy,return )

::nape::geom::Vec2 AABB_obj::get_min( ){
	HX_STACK_FRAME("nape.geom.AABB","get_min",0x5caf2a47,"nape.geom.AABB.get_min","nape/geom/AABB.hx",280,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	::nape::geom::Vec2 tmp1 = tmp->getmin();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_min,return )

::nape::geom::Vec2 AABB_obj::set_min( ::nape::geom::Vec2 min){
	HX_STACK_FRAME("nape.geom.AABB","set_min",0x4fb0bb53,"nape.geom.AABB.set_min","nape/geom/AABB.hx",283,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_LINE(284)
	{
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(287)
			bool tmp = (min != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			if ((tmp)){
				HX_STACK_LINE(287)
				tmp1 = min->zpp_disp;
			}
			else{
				HX_STACK_LINE(287)
				tmp1 = false;
			}
			HX_STACK_LINE(287)
			if ((tmp1)){
				HX_STACK_LINE(287)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(287)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(291)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		if ((tmp1)){
			HX_STACK_LINE(292)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(294)
		bool tmp2 = (min == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(295)
			::String tmp3 = HX_HCSTRING("Error: Cannot assign null to AABB::min","\x64","\x82","\xf8","\xa3");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(297)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				if ((tmp5)){
					HX_STACK_LINE(297)
					_this->_validate();
				}
			}
			HX_STACK_LINE(297)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			tmp3 = tmp4->minx;
		}
		HX_STACK_LINE(297)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(297)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				if ((tmp6)){
					HX_STACK_LINE(297)
					_this->_validate();
				}
			}
			HX_STACK_LINE(297)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			tmp4 = tmp5->minx;
		}
		HX_STACK_LINE(297)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(297)
		if ((tmp6)){
			HX_STACK_LINE(297)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(297)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(297)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(297)
					if ((tmp13)){
						HX_STACK_LINE(297)
						_this->_validate();
					}
				}
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				tmp8 = tmp10->miny;
			}
			HX_STACK_LINE(297)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(297)
					::zpp_nape::geom::ZPP_AABB _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(297)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(297)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(297)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(297)
					if ((tmp14)){
						HX_STACK_LINE(297)
						_this->_validate();
					}
				}
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				::zpp_nape::geom::ZPP_AABB tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(297)
				tmp9 = tmp11->miny;
			}
			HX_STACK_LINE(297)
			tmp7 = (tmp8 != tmp9);
		}
		else{
			HX_STACK_LINE(297)
			tmp7 = true;
		}
		HX_STACK_LINE(297)
		if ((tmp7)){
			HX_STACK_LINE(298)
			::String tmp8 = HX_HCSTRING("Error: AABB::min","\x24","\x06","\xb8","\x37");		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(298)
			::String tmp9 = (tmp8 + HX_HCSTRING(" components cannot be NaN","\xd1","\x06","\x59","\xa1"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(298)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(300)
		bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		if ((tmp8)){
			HX_STACK_LINE(301)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					bool tmp10 = (min != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(301)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(301)
					if ((tmp10)){
						HX_STACK_LINE(301)
						tmp11 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(301)
						tmp11 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp11)){
						HX_STACK_LINE(301)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(301)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(301)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(301)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(301)
					if ((tmp10)){
						HX_STACK_LINE(301)
						_this->_validate();
					}
				}
				HX_STACK_LINE(301)
				tmp9 = min->zpp_inner->x;
			}
			HX_STACK_LINE(301)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(301)
				::nape::geom::Vec2 tmp12 = tmp11->getmax();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(301)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(301)
					if ((tmp13)){
						HX_STACK_LINE(301)
						tmp14 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(301)
						tmp14 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp14)){
						HX_STACK_LINE(301)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(301)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(301)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(301)
					bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(301)
					if ((tmp13)){
						HX_STACK_LINE(301)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(301)
				tmp10 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(301)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(301)
			if ((tmp11)){
				HX_STACK_LINE(301)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative width","\xa2","\xe1","\x0a","\x41"));
			}
			HX_STACK_LINE(302)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp13 = (min != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					if ((tmp13)){
						HX_STACK_LINE(302)
						tmp14 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(302)
						tmp14 = false;
					}
					HX_STACK_LINE(302)
					if ((tmp14)){
						HX_STACK_LINE(302)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(302)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					if ((tmp13)){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp12 = min->zpp_inner->y;
			}
			HX_STACK_LINE(302)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::zpp_nape::geom::ZPP_AABB tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 tmp15 = tmp14->getmax();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					if ((tmp16)){
						HX_STACK_LINE(302)
						tmp17 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(302)
						tmp17 = false;
					}
					HX_STACK_LINE(302)
					if ((tmp17)){
						HX_STACK_LINE(302)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(302)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					if ((tmp16)){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp13 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(302)
			bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(302)
			if ((tmp14)){
				HX_STACK_LINE(302)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative height","\xcb","\x04","\xca","\x5e"));
			}
		}
		else{
			HX_STACK_LINE(305)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					bool tmp10 = (min != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(305)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(305)
					if ((tmp10)){
						HX_STACK_LINE(305)
						tmp11 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(305)
						tmp11 = false;
					}
					HX_STACK_LINE(305)
					if ((tmp11)){
						HX_STACK_LINE(305)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(305)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(305)
					if ((tmp10)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp9 = min->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					bool tmp11 = (min != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(305)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					if ((tmp11)){
						HX_STACK_LINE(305)
						tmp12 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(305)
						tmp12 = false;
					}
					HX_STACK_LINE(305)
					if ((tmp12)){
						HX_STACK_LINE(305)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(305)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(305)
					if ((tmp11)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp10 = min->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(305)
			if ((tmp11)){
				HX_STACK_LINE(305)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative width","\xa2","\xe1","\x0a","\x41"));
			}
			HX_STACK_LINE(306)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					bool tmp13 = (min != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(306)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					if ((tmp13)){
						HX_STACK_LINE(306)
						tmp14 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(306)
						tmp14 = false;
					}
					HX_STACK_LINE(306)
					if ((tmp14)){
						HX_STACK_LINE(306)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(306)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(306)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(306)
					if ((tmp13)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				tmp12 = min->zpp_inner->y;
			}
			HX_STACK_LINE(306)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					bool tmp14 = (min != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(306)
					if ((tmp14)){
						HX_STACK_LINE(306)
						tmp15 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(306)
						tmp15 = false;
					}
					HX_STACK_LINE(306)
					if ((tmp15)){
						HX_STACK_LINE(306)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(306)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(306)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_Vec2 _this = min->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					if ((tmp14)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				tmp13 = min->zpp_inner->y;
			}
			HX_STACK_LINE(306)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(306)
			if ((tmp14)){
				HX_STACK_LINE(306)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative height","\xcb","\x04","\xca","\x5e"));
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			::nape::geom::Vec2 tmp10 = tmp9->getmin();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(309)
			::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				if ((tmp11)){
					HX_STACK_LINE(309)
					tmp12 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(309)
					tmp12 = false;
				}
				HX_STACK_LINE(309)
				if ((tmp12)){
					HX_STACK_LINE(309)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(309)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				bool tmp11 = (min != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				if ((tmp11)){
					HX_STACK_LINE(309)
					tmp12 = min->zpp_disp;
				}
				else{
					HX_STACK_LINE(309)
					tmp12 = false;
				}
				HX_STACK_LINE(309)
				if ((tmp12)){
					HX_STACK_LINE(309)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(309)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(309)
				bool tmp11 = _this1->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				if ((tmp11)){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(309)
				bool tmp12 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				if ((tmp12)){
					HX_STACK_LINE(309)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(309)
			bool tmp11 = (min == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(309)
			if ((tmp11)){
				HX_STACK_LINE(309)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(309)
			::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp14 = (min != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					if ((tmp14)){
						HX_STACK_LINE(309)
						tmp15 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp15 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						if ((tmp16)){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp13 = min->zpp_inner->x;
				}
				HX_STACK_LINE(309)
				Float x = tmp13;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(309)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp15 = (min != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						tmp16 = min->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp16 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp16)){
						HX_STACK_LINE(309)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp18);
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						if ((tmp17)){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp14 = min->zpp_inner->y;
				}
				HX_STACK_LINE(309)
				Float y = tmp14;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						tmp16 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp16 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp16)){
						HX_STACK_LINE(309)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					if ((tmp15)){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(309)
					bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(309)
					if ((tmp16)){
						HX_STACK_LINE(309)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(309)
				bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(309)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(309)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(309)
				if ((tmp16)){
					HX_STACK_LINE(309)
					tmp17 = (y != y);
				}
				else{
					HX_STACK_LINE(309)
					tmp17 = true;
				}
				HX_STACK_LINE(309)
				if ((tmp17)){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(309)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(309)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(309)
						if ((tmp19)){
							HX_STACK_LINE(309)
							tmp20 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(309)
							tmp20 = false;
						}
						HX_STACK_LINE(309)
						if ((tmp20)){
							HX_STACK_LINE(309)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(309)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(309)
						if ((tmp19)){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp18 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(309)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(309)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(309)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(309)
				if ((tmp20)){
					HX_STACK_LINE(309)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							bool tmp23 = (_this != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(309)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(309)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(309)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(309)
							if ((tmp26)){
								HX_STACK_LINE(309)
								tmp25 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(309)
								tmp25 = false;
							}
							HX_STACK_LINE(309)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(309)
							if ((tmp27)){
								HX_STACK_LINE(309)
								::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(309)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(309)
								::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(309)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(309)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(tmp32);
							}
						}
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(309)
							bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(309)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(309)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(309)
							if ((tmp25)){
								HX_STACK_LINE(309)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(309)
						Float tmp23 = _this->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(309)
						tmp22 = tmp23;
					}
					HX_STACK_LINE(309)
					Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(309)
					tmp21 = (tmp22 == tmp23);
				}
				else{
					HX_STACK_LINE(309)
					tmp21 = false;
				}
				HX_STACK_LINE(309)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(309)
				if ((tmp22)){
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(309)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(309)
						{
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						bool tmp23 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(309)
						if ((tmp23)){
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(309)
							_this1->_invalidate(tmp24);
						}
					}
				}
				HX_STACK_LINE(309)
				tmp12 = _this;
			}
			HX_STACK_LINE(309)
			::nape::geom::Vec2 ret = tmp12;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				tmp13 = min->zpp_inner->weak;
				HX_STACK_LINE(309)
				if ((tmp13)){
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							bool tmp14 = (min != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(309)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							if ((tmp14)){
								HX_STACK_LINE(309)
								tmp15 = min->zpp_disp;
							}
							else{
								HX_STACK_LINE(309)
								tmp15 = false;
							}
							HX_STACK_LINE(309)
							if ((tmp15)){
								HX_STACK_LINE(309)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(309)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(309)
							bool tmp14 = _this1->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(309)
							if ((tmp14)){
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(309)
							bool tmp15 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							if ((tmp15)){
								HX_STACK_LINE(309)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(309)
						bool tmp14 = min->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(309)
						if ((tmp14)){
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 inner = min->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(309)
						min->zpp_inner->outer = null();
						HX_STACK_LINE(309)
						min->zpp_inner = null();
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::nape::geom::Vec2 o = min;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(309)
							o->zpp_pool = null();
							HX_STACK_LINE(309)
							::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(309)
							if ((tmp16)){
								HX_STACK_LINE(309)
								::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(309)
								tmp17->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(309)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(309)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(309)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(309)
								if ((tmp15)){
									HX_STACK_LINE(309)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(309)
									o->outer = null();
								}
								HX_STACK_LINE(309)
								o->_isimmutable = null();
								HX_STACK_LINE(309)
								o->_validate = null();
								HX_STACK_LINE(309)
								o->_invalidate = null();
							}
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							o->next = tmp15;
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(309)
					true;
				}
				else{
					HX_STACK_LINE(309)
					false;
				}
			}
			HX_STACK_LINE(309)
			ret;
		}
	}
	HX_STACK_LINE(311)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	::nape::geom::Vec2 tmp1 = tmp->getmin();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_min,return )

::nape::geom::Vec2 AABB_obj::get_max( ){
	HX_STACK_FRAME("nape.geom.AABB","get_max",0x5caf2359,"nape.geom.AABB.get_max","nape/geom/AABB.hx",329,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	::nape::geom::Vec2 tmp1 = tmp->getmax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_max,return )

::nape::geom::Vec2 AABB_obj::set_max( ::nape::geom::Vec2 max){
	HX_STACK_FRAME("nape.geom.AABB","set_max",0x4fb0b465,"nape.geom.AABB.set_max","nape/geom/AABB.hx",332,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(336)
			bool tmp = (max != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(336)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(336)
			if ((tmp)){
				HX_STACK_LINE(336)
				tmp1 = max->zpp_disp;
			}
			else{
				HX_STACK_LINE(336)
				tmp1 = false;
			}
			HX_STACK_LINE(336)
			if ((tmp1)){
				HX_STACK_LINE(336)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(336)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(341)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(343)
		bool tmp2 = (max == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		if ((tmp2)){
			HX_STACK_LINE(344)
			::String tmp3 = HX_HCSTRING("Error: Cannot assign null to AABB::max","\x76","\x7b","\xf8","\xa3");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(346)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(346)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(346)
				if ((tmp5)){
					HX_STACK_LINE(346)
					_this->_validate();
				}
			}
			HX_STACK_LINE(346)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			tmp3 = tmp4->minx;
		}
		HX_STACK_LINE(346)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(346)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(346)
				if ((tmp6)){
					HX_STACK_LINE(346)
					_this->_validate();
				}
			}
			HX_STACK_LINE(346)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			tmp4 = tmp5->minx;
		}
		HX_STACK_LINE(346)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(346)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(346)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		if ((tmp6)){
			HX_STACK_LINE(346)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(346)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(346)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(346)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(346)
					if ((tmp13)){
						HX_STACK_LINE(346)
						_this->_validate();
					}
				}
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(346)
				tmp8 = tmp10->miny;
			}
			HX_STACK_LINE(346)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(346)
					::zpp_nape::geom::ZPP_AABB _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(346)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(346)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(346)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(346)
					if ((tmp14)){
						HX_STACK_LINE(346)
						_this->_validate();
					}
				}
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(346)
				::zpp_nape::geom::ZPP_AABB tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(346)
				tmp9 = tmp11->miny;
			}
			HX_STACK_LINE(346)
			tmp7 = (tmp8 != tmp9);
		}
		else{
			HX_STACK_LINE(346)
			tmp7 = true;
		}
		HX_STACK_LINE(346)
		if ((tmp7)){
			HX_STACK_LINE(347)
			::String tmp8 = HX_HCSTRING("Error: AABB::max","\x36","\xff","\xb7","\x37");		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(347)
			::String tmp9 = (tmp8 + HX_HCSTRING(" components cannot be NaN","\xd1","\x06","\x59","\xa1"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(347)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(349)
		bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(349)
		if ((tmp8)){
			HX_STACK_LINE(350)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					bool tmp10 = (max != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(350)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(350)
					if ((tmp10)){
						HX_STACK_LINE(350)
						tmp11 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(350)
						tmp11 = false;
					}
					HX_STACK_LINE(350)
					if ((tmp11)){
						HX_STACK_LINE(350)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(350)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(350)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(350)
					if ((tmp10)){
						HX_STACK_LINE(350)
						_this->_validate();
					}
				}
				HX_STACK_LINE(350)
				tmp9 = max->zpp_inner->x;
			}
			HX_STACK_LINE(350)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					bool tmp11 = (max != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(350)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(350)
					if ((tmp11)){
						HX_STACK_LINE(350)
						tmp12 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(350)
						tmp12 = false;
					}
					HX_STACK_LINE(350)
					if ((tmp12)){
						HX_STACK_LINE(350)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(350)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(350)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(350)
					if ((tmp11)){
						HX_STACK_LINE(350)
						_this->_validate();
					}
				}
				HX_STACK_LINE(350)
				tmp10 = max->zpp_inner->x;
			}
			HX_STACK_LINE(350)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(350)
			if ((tmp11)){
				HX_STACK_LINE(350)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative width","\xa2","\xe1","\x0a","\x41"));
			}
			HX_STACK_LINE(351)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					bool tmp13 = (max != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(351)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(351)
					if ((tmp13)){
						HX_STACK_LINE(351)
						tmp14 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(351)
						tmp14 = false;
					}
					HX_STACK_LINE(351)
					if ((tmp14)){
						HX_STACK_LINE(351)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(351)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(351)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(351)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(351)
					if ((tmp13)){
						HX_STACK_LINE(351)
						_this->_validate();
					}
				}
				HX_STACK_LINE(351)
				tmp12 = max->zpp_inner->y;
			}
			HX_STACK_LINE(351)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			{
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					bool tmp14 = (max != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(351)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(351)
					if ((tmp14)){
						HX_STACK_LINE(351)
						tmp15 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(351)
						tmp15 = false;
					}
					HX_STACK_LINE(351)
					if ((tmp15)){
						HX_STACK_LINE(351)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(351)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(351)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(351)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(351)
					if ((tmp14)){
						HX_STACK_LINE(351)
						_this->_validate();
					}
				}
				HX_STACK_LINE(351)
				tmp13 = max->zpp_inner->y;
			}
			HX_STACK_LINE(351)
			bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(351)
			if ((tmp14)){
				HX_STACK_LINE(351)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative height","\xcb","\x04","\xca","\x5e"));
			}
		}
		else{
			HX_STACK_LINE(354)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					bool tmp10 = (max != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(354)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(354)
					if ((tmp10)){
						HX_STACK_LINE(354)
						tmp11 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(354)
						tmp11 = false;
					}
					HX_STACK_LINE(354)
					if ((tmp11)){
						HX_STACK_LINE(354)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(354)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(354)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(354)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(354)
					if ((tmp10)){
						HX_STACK_LINE(354)
						_this->_validate();
					}
				}
				HX_STACK_LINE(354)
				tmp9 = max->zpp_inner->x;
			}
			HX_STACK_LINE(354)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(354)
				::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(354)
				::nape::geom::Vec2 tmp12 = tmp11->getmin();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(354)
				::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(354)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(354)
					if ((tmp13)){
						HX_STACK_LINE(354)
						tmp14 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(354)
						tmp14 = false;
					}
					HX_STACK_LINE(354)
					if ((tmp14)){
						HX_STACK_LINE(354)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(354)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(354)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(354)
					bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(354)
					if ((tmp13)){
						HX_STACK_LINE(354)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(354)
				tmp10 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(354)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(354)
			if ((tmp11)){
				HX_STACK_LINE(354)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative width","\xa2","\xe1","\x0a","\x41"));
			}
			HX_STACK_LINE(355)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					bool tmp13 = (max != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(355)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(355)
					if ((tmp13)){
						HX_STACK_LINE(355)
						tmp14 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(355)
						tmp14 = false;
					}
					HX_STACK_LINE(355)
					if ((tmp14)){
						HX_STACK_LINE(355)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(355)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(355)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					::zpp_nape::geom::ZPP_Vec2 _this = max->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(355)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(355)
					if ((tmp13)){
						HX_STACK_LINE(355)
						_this->_validate();
					}
				}
				HX_STACK_LINE(355)
				tmp12 = max->zpp_inner->y;
			}
			HX_STACK_LINE(355)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::zpp_nape::geom::ZPP_AABB tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(355)
				::nape::geom::Vec2 tmp15 = tmp14->getmin();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(355)
				::nape::geom::Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					bool tmp16 = (_this != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(355)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(355)
					if ((tmp16)){
						HX_STACK_LINE(355)
						tmp17 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(355)
						tmp17 = false;
					}
					HX_STACK_LINE(355)
					if ((tmp17)){
						HX_STACK_LINE(355)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(355)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(355)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(355)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(355)
					bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(355)
					if ((tmp16)){
						HX_STACK_LINE(355)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(355)
				tmp13 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(355)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(355)
			if ((tmp14)){
				HX_STACK_LINE(355)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Assignment would cause negative height","\xcb","\x04","\xca","\x5e"));
			}
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			::nape::geom::Vec2 tmp10 = tmp9->getmax();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			::nape::geom::Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				if ((tmp11)){
					HX_STACK_LINE(358)
					tmp12 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(358)
					tmp12 = false;
				}
				HX_STACK_LINE(358)
				if ((tmp12)){
					HX_STACK_LINE(358)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(358)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				bool tmp11 = (max != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				if ((tmp11)){
					HX_STACK_LINE(358)
					tmp12 = max->zpp_disp;
				}
				else{
					HX_STACK_LINE(358)
					tmp12 = false;
				}
				HX_STACK_LINE(358)
				if ((tmp12)){
					HX_STACK_LINE(358)
					::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(358)
					::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(358)
				bool tmp11 = _this1->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				if ((tmp11)){
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(358)
				bool tmp12 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				if ((tmp12)){
					HX_STACK_LINE(358)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(358)
			bool tmp11 = (max == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(358)
			if ((tmp11)){
				HX_STACK_LINE(358)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(358)
			::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					bool tmp14 = (max != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(358)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(358)
					if ((tmp14)){
						HX_STACK_LINE(358)
						tmp15 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(358)
						tmp15 = false;
					}
					HX_STACK_LINE(358)
					if ((tmp15)){
						HX_STACK_LINE(358)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(358)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(tmp17);
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						bool tmp16 = (_this1->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(358)
						if ((tmp16)){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					tmp13 = max->zpp_inner->x;
				}
				HX_STACK_LINE(358)
				Float x = tmp13;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(358)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					bool tmp15 = (max != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(358)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(358)
					if ((tmp15)){
						HX_STACK_LINE(358)
						tmp16 = max->zpp_disp;
					}
					else{
						HX_STACK_LINE(358)
						tmp16 = false;
					}
					HX_STACK_LINE(358)
					if ((tmp16)){
						HX_STACK_LINE(358)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(358)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(tmp18);
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(358)
						if ((tmp17)){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					tmp14 = max->zpp_inner->y;
				}
				HX_STACK_LINE(358)
				Float y = tmp14;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(358)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(358)
					if ((tmp15)){
						HX_STACK_LINE(358)
						tmp16 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(358)
						tmp16 = false;
					}
					HX_STACK_LINE(358)
					if ((tmp16)){
						HX_STACK_LINE(358)
						::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(358)
						::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(tmp18);
					}
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(358)
					if ((tmp15)){
						HX_STACK_LINE(358)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(358)
					bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(358)
					if ((tmp16)){
						HX_STACK_LINE(358)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(358)
				bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(358)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(358)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(358)
				if ((tmp16)){
					HX_STACK_LINE(358)
					tmp17 = (y != y);
				}
				else{
					HX_STACK_LINE(358)
					tmp17 = true;
				}
				HX_STACK_LINE(358)
				if ((tmp17)){
					HX_STACK_LINE(358)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(358)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						bool tmp19 = (_this != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(358)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(358)
						if ((tmp19)){
							HX_STACK_LINE(358)
							tmp20 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(358)
							tmp20 = false;
						}
						HX_STACK_LINE(358)
						if ((tmp20)){
							HX_STACK_LINE(358)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(358)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(358)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(358)
						if ((tmp19)){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					tmp18 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(358)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(358)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(358)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(358)
				if ((tmp20)){
					HX_STACK_LINE(358)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							bool tmp23 = (_this != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(358)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(358)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(358)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(358)
							if ((tmp26)){
								HX_STACK_LINE(358)
								tmp25 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(358)
								tmp25 = false;
							}
							HX_STACK_LINE(358)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(358)
							if ((tmp27)){
								HX_STACK_LINE(358)
								::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(358)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(358)
								::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(358)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(358)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(tmp32);
							}
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(358)
							bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(358)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(358)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(358)
							if ((tmp25)){
								HX_STACK_LINE(358)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(358)
						Float tmp23 = _this->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(358)
						tmp22 = tmp23;
					}
					HX_STACK_LINE(358)
					Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(358)
					tmp21 = (tmp22 == tmp23);
				}
				else{
					HX_STACK_LINE(358)
					tmp21 = false;
				}
				HX_STACK_LINE(358)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(358)
				if ((tmp22)){
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(358)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(358)
						{
						}
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						bool tmp23 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(358)
						if ((tmp23)){
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(358)
							_this1->_invalidate(tmp24);
						}
					}
				}
				HX_STACK_LINE(358)
				tmp12 = _this;
			}
			HX_STACK_LINE(358)
			::nape::geom::Vec2 ret = tmp12;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(358)
				tmp13 = max->zpp_inner->weak;
				HX_STACK_LINE(358)
				if ((tmp13)){
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							bool tmp14 = (max != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(358)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(358)
							if ((tmp14)){
								HX_STACK_LINE(358)
								tmp15 = max->zpp_disp;
							}
							else{
								HX_STACK_LINE(358)
								tmp15 = false;
							}
							HX_STACK_LINE(358)
							if ((tmp15)){
								HX_STACK_LINE(358)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(358)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(358)
							bool tmp14 = _this1->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(358)
							if ((tmp14)){
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(358)
							bool tmp15 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(358)
							if ((tmp15)){
								HX_STACK_LINE(358)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(358)
						bool tmp14 = max->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(358)
						if ((tmp14)){
							HX_STACK_LINE(358)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 inner = max->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(358)
						max->zpp_inner->outer = null();
						HX_STACK_LINE(358)
						max->zpp_inner = null();
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::nape::geom::Vec2 o = max;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(358)
							o->zpp_pool = null();
							HX_STACK_LINE(358)
							::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(358)
							bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(358)
							if ((tmp16)){
								HX_STACK_LINE(358)
								::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(358)
								tmp17->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(358)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(358)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(358)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(358)
								if ((tmp15)){
									HX_STACK_LINE(358)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(358)
									o->outer = null();
								}
								HX_STACK_LINE(358)
								o->_isimmutable = null();
								HX_STACK_LINE(358)
								o->_validate = null();
								HX_STACK_LINE(358)
								o->_invalidate = null();
							}
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(358)
							o->next = tmp15;
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(358)
					true;
				}
				else{
					HX_STACK_LINE(358)
					false;
				}
			}
			HX_STACK_LINE(358)
			ret;
		}
	}
	HX_STACK_LINE(360)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	::nape::geom::Vec2 tmp1 = tmp->getmax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_max,return )

Float AABB_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.AABB","get_x",0x5ddd11ed,"nape.geom.AABB.get_x","nape/geom/AABB.hx",370,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(371)
			_this->_validate();
		}
	}
	HX_STACK_LINE(372)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	Float tmp1 = tmp->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_x,return )

Float AABB_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.AABB","set_x",0x46ac07f9,"nape.geom.AABB.set_x","nape/geom/AABB.hx",374,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(377)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		if ((tmp1)){
			HX_STACK_LINE(378)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(381)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(381)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(381)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(381)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(381)
				if ((tmp4)){
					HX_STACK_LINE(381)
					_this->_validate();
				}
			}
			HX_STACK_LINE(381)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			tmp2 = tmp3->minx;
		}
		HX_STACK_LINE(381)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		if ((tmp4)){
			HX_STACK_LINE(383)
			bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			if ((tmp5)){
				HX_STACK_LINE(383)
				::String tmp6 = HX_HCSTRING("Error: AABB::x","\x8a","\x4c","\xac","\xfa");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				::String tmp7 = (tmp6 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(383)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(385)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(385)
			::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			Float tmp8 = tmp7->minx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			hx::AddEq(tmp10->maxx,tmp9);
			HX_STACK_LINE(386)
			::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			tmp11->minx = x;
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(387)
				if ((tmp13)){
					HX_STACK_LINE(387)
					::zpp_nape::geom::ZPP_AABB tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(387)
					_this->_invalidate(tmp14);
				}
			}
		}
	}
	HX_STACK_LINE(390)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(390)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			if ((tmp2)){
				HX_STACK_LINE(390)
				_this->_validate();
			}
		}
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		tmp = tmp1->minx;
	}
	HX_STACK_LINE(390)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_x,return )

Float AABB_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.AABB","get_y",0x5ddd11ee,"nape.geom.AABB.get_y","nape/geom/AABB.hx",400,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(401)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		if ((tmp1)){
			HX_STACK_LINE(401)
			_this->_validate();
		}
	}
	HX_STACK_LINE(402)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	Float tmp1 = tmp->miny;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_y,return )

Float AABB_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.AABB","set_y",0x46ac07fa,"nape.geom.AABB.set_y","nape/geom/AABB.hx",404,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(405)
	{
		HX_STACK_LINE(407)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		if ((tmp1)){
			HX_STACK_LINE(408)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(411)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(411)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(411)
				if ((tmp4)){
					HX_STACK_LINE(411)
					_this->_validate();
				}
			}
			HX_STACK_LINE(411)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			tmp2 = tmp3->miny;
		}
		HX_STACK_LINE(411)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		if ((tmp4)){
			HX_STACK_LINE(413)
			bool tmp5 = (y != y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			if ((tmp5)){
				HX_STACK_LINE(413)
				::String tmp6 = HX_HCSTRING("Error: AABB::y","\x8b","\x4c","\xac","\xfa");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(413)
				::String tmp7 = (tmp6 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(413)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(415)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			Float tmp8 = tmp7->miny;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			hx::AddEq(tmp10->maxy,tmp9);
			HX_STACK_LINE(416)
			::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			tmp11->miny = y;
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(417)
				if ((tmp13)){
					HX_STACK_LINE(417)
					::zpp_nape::geom::ZPP_AABB tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(417)
					_this->_invalidate(tmp14);
				}
			}
		}
	}
	HX_STACK_LINE(420)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(420)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(420)
			if ((tmp2)){
				HX_STACK_LINE(420)
				_this->_validate();
			}
		}
		HX_STACK_LINE(420)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		tmp = tmp1->miny;
	}
	HX_STACK_LINE(420)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_y,return )

Float AABB_obj::get_width( ){
	HX_STACK_FRAME("nape.geom.AABB","get_width",0x087e25fb,"nape.geom.AABB.get_width","nape/geom/AABB.hx",430,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(431)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		if ((tmp1)){
			HX_STACK_LINE(431)
			_this->_validate();
		}
	}
	HX_STACK_LINE(432)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(432)
		tmp = (_this->maxx - _this->minx);
	}
	HX_STACK_LINE(432)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_width,return )

Float AABB_obj::set_width( Float width){
	HX_STACK_FRAME("nape.geom.AABB","set_width",0xebcf1207,"nape.geom.AABB.set_width","nape/geom/AABB.hx",434,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(437)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		if ((tmp1)){
			HX_STACK_LINE(438)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(441)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				if ((tmp4)){
					HX_STACK_LINE(441)
					_this->_validate();
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				tmp2 = (_this->maxx - _this->minx);
			}
		}
		HX_STACK_LINE(441)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		if ((tmp4)){
			HX_STACK_LINE(443)
			bool tmp5 = (width != width);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(443)
			if ((tmp5)){
				HX_STACK_LINE(444)
				::String tmp6 = HX_HCSTRING("Error: AABB::width","\x18","\x73","\x5b","\x5c");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(444)
				::String tmp7 = (tmp6 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(446)
			bool tmp6 = (width < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			if ((tmp6)){
				HX_STACK_LINE(447)
				::String tmp7 = HX_HCSTRING("Error: AABB::width","\x18","\x73","\x5b","\x5c");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(447)
				::String tmp8 = (tmp7 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(447)
				Float tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(447)
				::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(447)
				::String tmp11 = (tmp10 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(447)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(450)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(450)
					::zpp_nape::geom::ZPP_AABB _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(450)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(450)
					if ((tmp9)){
						HX_STACK_LINE(450)
						_this->_validate();
					}
				}
				HX_STACK_LINE(450)
				::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(450)
				tmp7 = tmp8->minx;
			}
			HX_STACK_LINE(450)
			Float tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(450)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(450)
			::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(450)
			tmp10->maxx = tmp9;
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(451)
				if ((tmp12)){
					HX_STACK_LINE(451)
					::zpp_nape::geom::ZPP_AABB tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(451)
					_this->_invalidate(tmp13);
				}
			}
		}
	}
	HX_STACK_LINE(454)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(454)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			if ((tmp2)){
				HX_STACK_LINE(454)
				_this->_validate();
			}
		}
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(454)
			tmp = (_this->maxx - _this->minx);
		}
	}
	HX_STACK_LINE(454)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_width,return )

Float AABB_obj::get_height( ){
	HX_STACK_FRAME("nape.geom.AABB","get_height",0x1c328e52,"nape.geom.AABB.get_height","nape/geom/AABB.hx",464,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(465)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		if ((tmp1)){
			HX_STACK_LINE(465)
			_this->_validate();
		}
	}
	HX_STACK_LINE(466)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(466)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(466)
		tmp = (_this->maxy - _this->miny);
	}
	HX_STACK_LINE(466)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_height,return )

Float AABB_obj::set_height( Float height){
	HX_STACK_FRAME("nape.geom.AABB","set_height",0x1fb02cc6,"nape.geom.AABB.set_height","nape/geom/AABB.hx",468,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(469)
	{
		HX_STACK_LINE(471)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		bool tmp1 = tmp->_immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		if ((tmp1)){
			HX_STACK_LINE(472)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AABB is immutable","\xfe","\x89","\xbf","\xf1"));
		}
		HX_STACK_LINE(475)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(475)
				if ((tmp4)){
					HX_STACK_LINE(475)
					_this->_validate();
				}
			}
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				tmp2 = (_this->maxy - _this->miny);
			}
		}
		HX_STACK_LINE(475)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(475)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(475)
		if ((tmp4)){
			HX_STACK_LINE(477)
			bool tmp5 = (height != height);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			if ((tmp5)){
				HX_STACK_LINE(478)
				::String tmp6 = HX_HCSTRING("Error: AABB::height","\x95","\xba","\xf8","\x29");		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(478)
				::String tmp7 = (tmp6 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(478)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(480)
			bool tmp6 = (height < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(480)
			if ((tmp6)){
				HX_STACK_LINE(481)
				::String tmp7 = HX_HCSTRING("Error: AABB::height","\x95","\xba","\xf8","\x29");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(481)
				::String tmp8 = (tmp7 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(481)
				Float tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(481)
				::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(481)
				::String tmp11 = (tmp10 + HX_HCSTRING(") must be >= 0","\xcc","\x84","\x5f","\xca"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(481)
				HX_STACK_DO_THROW(tmp11);
			}
			HX_STACK_LINE(484)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(484)
					::zpp_nape::geom::ZPP_AABB _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(484)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(484)
					if ((tmp9)){
						HX_STACK_LINE(484)
						_this->_validate();
					}
				}
				HX_STACK_LINE(484)
				::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(484)
				tmp7 = tmp8->miny;
			}
			HX_STACK_LINE(484)
			Float tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(484)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(484)
			::zpp_nape::geom::ZPP_AABB tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(484)
			tmp10->maxy = tmp9;
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(485)
				bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(485)
				if ((tmp12)){
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_AABB tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(485)
					_this->_invalidate(tmp13);
				}
			}
		}
	}
	HX_STACK_LINE(488)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(488)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(488)
			if ((tmp2)){
				HX_STACK_LINE(488)
				_this->_validate();
			}
		}
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(488)
			tmp = (_this->maxy - _this->miny);
		}
	}
	HX_STACK_LINE(488)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_height,return )

::String AABB_obj::toString( ){
	HX_STACK_FRAME("nape.geom.AABB","toString",0x2ced9ace,"nape.geom.AABB.toString","nape/geom/AABB.hx",493,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(494)
		if ((tmp1)){
			HX_STACK_LINE(494)
			_this->_validate();
		}
	}
	HX_STACK_LINE(495)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toString,return )


AABB_obj::AABB_obj()
{
}

void AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic AABB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AABB_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(AABB_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#endif

hx::Class AABB_obj::__mClass;

void AABB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.AABB","\x8c","\x62","\x9f","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AABB_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABB_obj >;
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
