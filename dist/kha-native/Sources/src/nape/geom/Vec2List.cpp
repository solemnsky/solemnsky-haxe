#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace geom{

Void Vec2List_obj::__construct()
{
HX_STACK_FRAME("nape.geom.Vec2List","new",0xfaddc5da,"nape.geom.Vec2List.new","nape/geom/Vec2List.hx",234,0x7ea67276)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(690)
	::zpp_nape::util::ZPP_Vec2List tmp = ::zpp_nape::util::ZPP_Vec2List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	this->zpp_inner = tmp;
	HX_STACK_LINE(691)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Vec2List_obj::~Vec2List_obj() { }

Dynamic Vec2List_obj::__CreateEmpty() { return  new Vec2List_obj; }
hx::ObjectPtr< Vec2List_obj > Vec2List_obj::__new()
{  hx::ObjectPtr< Vec2List_obj > _result_ = new Vec2List_obj();
	_result_->__construct();
	return _result_;}

Dynamic Vec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2List_obj > _result_ = new Vec2List_obj();
	_result_->__construct();
	return _result_;}

int Vec2List_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec2List","get_length",0x71681275,"nape.geom.Vec2List.get_length","nape/geom/Vec2List.hx",263,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	int tmp = this->zpp_gl();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,get_length,return )

int Vec2List_obj::zpp_gl( ){
	HX_STACK_FRAME("nape.geom.Vec2List","zpp_gl",0x51bc8650,"nape.geom.Vec2List.zpp_gl","nape/geom/Vec2List.hx",269,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	tmp->valmod();
	HX_STACK_LINE(271)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(272)
		::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		tmp3->zip_length = false;
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			::zpp_nape::util::ZPP_Vec2List tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			int tmp5 = tmp4->inner->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			tmp6->user_length = tmp5;
		}
	}
	HX_STACK_LINE(286)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,zpp_gl,return )

Void Vec2List_obj::zpp_vm( ){
{
		HX_STACK_FRAME("nape.geom.Vec2List","zpp_vm",0x51bc9362,"nape.geom.Vec2List.zpp_vm","nape/geom/Vec2List.hx",291,0x7ea67276)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		tmp->valmod();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,zpp_vm,(void))

bool Vec2List_obj::has( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("nape.geom.Vec2List","has",0xfad934d4,"nape.geom.Vec2List.has","nape/geom/Vec2List.hx",346,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(348)
	this->zpp_vm();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = obj->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	bool tmp2 = tmp->inner->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,has,return )

::nape::geom::Vec2 Vec2List_obj::at( int index){
	HX_STACK_FRAME("nape.geom.Vec2List","at",0xb9f32cb9,"nape.geom.Vec2List.at","nape/geom/Vec2List.hx",363,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(365)
	this->zpp_vm();
	HX_STACK_LINE(368)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	if ((tmp1)){
		HX_STACK_LINE(368)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		int tmp4 = this->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(368)
		tmp2 = true;
	}
	HX_STACK_LINE(368)
	if ((tmp2)){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Index out of bounds","\x10","\xf3","\x5b","\x3f"));
	}
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	bool tmp4 = tmp3->reverse_flag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	if ((tmp4)){
		HX_STACK_LINE(370)
		int tmp5 = this->zpp_gl();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(370)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		index = tmp8;
	}
	HX_STACK_LINE(371)
	bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	if ((tmp5)){
		HX_STACK_LINE(372)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		int tmp8 = tmp7->at_index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(372)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(372)
		if ((tmp10)){
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_Vec2List tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14 = tmp13->at_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(372)
			tmp11 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(372)
			tmp11 = true;
		}
		HX_STACK_LINE(372)
		if ((tmp11)){
			HX_STACK_LINE(373)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(373)
			tmp12->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp15 = tmp13->inner->iterator_at(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_Vec2List tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			tmp16->at_ite = tmp15;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(377)
				int tmp13 = tmp12->at_index;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(377)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(377)
				if ((tmp16)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(378)
				::zpp_nape::util::ZPP_Vec2List tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(378)
				(tmp17->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_Vec2List tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp19 = tmp18->at_ite->next;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_Vec2List tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(379)
				tmp20->at_ite = tmp19;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		int tmp8 = tmp7->at_index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		if ((tmp10)){
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_Vec2List tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14 = tmp13->at_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			tmp11 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp11 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp11)){
			HX_STACK_LINE(385)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			tmp12->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			tmp15->at_ite = tmp14;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_Vec2List tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(388)
				::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16->at_ite->elt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(388)
				::zpp_nape::geom::ZPP_Vec2 x = tmp17;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				break;
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_Vec2List tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp19 = tmp18->at_ite->next;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_Vec2List tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(390)
				tmp20->at_ite = tmp19;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			int tmp13 = tmp12->at_index;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			int tmp14 = index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			if ((tmp16)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			::zpp_nape::util::ZPP_Vec2List tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(394)
			(tmp17->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_Vec2List tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp19 = tmp18->at_ite->next;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_Vec2List tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			tmp20->at_ite = tmp19;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_Vec2List tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(397)
				::zpp_nape::geom::ZPP_Vec2 tmp22 = tmp21->at_ite->elt;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(397)
				::zpp_nape::geom::ZPP_Vec2 x = tmp22;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				break;
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_Vec2List tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp24 = tmp23->at_ite->next;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_Vec2List tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				tmp25->at_ite = tmp24;
			}
		}
	}
	HX_STACK_LINE(403)
	::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->at_ite->elt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(403)
		bool tmp9 = (_this->outer == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		if ((tmp9)){
			HX_STACK_LINE(403)
			::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(403)
			_this->outer = tmp10;
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(403)
				::zpp_nape::geom::ZPP_Vec2 o = tmp11;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(403)
					if ((tmp12)){
						HX_STACK_LINE(403)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(403)
						o->outer = null();
					}
					HX_STACK_LINE(403)
					o->_isimmutable = null();
					HX_STACK_LINE(403)
					o->_validate = null();
					HX_STACK_LINE(403)
					o->_invalidate = null();
				}
				HX_STACK_LINE(403)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(403)
				o->next = tmp12;
				HX_STACK_LINE(403)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(403)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(403)
		tmp6 = _this->outer;
	}
	HX_STACK_LINE(403)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,at,return )

bool Vec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("nape.geom.Vec2List","push",0x888de720,"nape.geom.Vec2List.push","nape/geom/Vec2List.hx",416,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(418)
		::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	tmp2->modify_test();
	HX_STACK_LINE(422)
	this->zpp_vm();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	Dynamic tmp4 = tmp3->adder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(424)
	if ((tmp5)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		::nape::geom::Vec2 tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		tmp6 = tmp7->adder(tmp8);
	}
	else{
		HX_STACK_LINE(424)
		tmp6 = true;
	}
	HX_STACK_LINE(424)
	bool cont = tmp6;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(425)
	if ((tmp7)){
		HX_STACK_LINE(426)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		if ((tmp9)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			tmp10->inner->add(tmp11);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp11 = tmp10->push_ite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			if ((tmp12)){
				HX_STACK_LINE(428)
				bool tmp13 = this->empty();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				if ((tmp13)){
					HX_STACK_LINE(428)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					int tmp16 = this->zpp_gl();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(428)
					tmp14 = tmp15->inner->iterator_at(tmp17);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(428)
				tmp15->push_ite = tmp14;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_Vec2List tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp15 = tmp14->push_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::geom::ZPP_Vec2 tmp16 = obj->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp17 = tmp13->inner->insert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_Vec2List tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(429)
			tmp18->push_ite = tmp17;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		tmp10->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_Vec2List tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		Dynamic tmp12 = tmp11->post_adder;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(432)
		if ((tmp13)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_Vec2List tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			::nape::geom::Vec2 tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			tmp14->post_adder(tmp15);
		}
	}
	HX_STACK_LINE(434)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(434)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,push,return )

bool Vec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("nape.geom.Vec2List","unshift",0x56bf1e03,"nape.geom.Vec2List.unshift","nape/geom/Vec2List.hx",447,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	if ((tmp1)){
		HX_STACK_LINE(449)
		::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(451)
	tmp2->modify_test();
	HX_STACK_LINE(453)
	this->zpp_vm();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	Dynamic tmp4 = tmp3->adder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	if ((tmp5)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(455)
		::nape::geom::Vec2 tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		tmp6 = tmp7->adder(tmp8);
	}
	else{
		HX_STACK_LINE(455)
		tmp6 = true;
	}
	HX_STACK_LINE(455)
	bool cont = tmp6;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(456)
	if ((tmp7)){
		HX_STACK_LINE(457)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		if ((tmp9)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp11 = tmp10->push_ite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			if ((tmp12)){
				HX_STACK_LINE(458)
				bool tmp13 = this->empty();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				if ((tmp13)){
					HX_STACK_LINE(458)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					int tmp16 = this->zpp_gl();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					tmp14 = tmp15->inner->iterator_at(tmp17);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				tmp15->push_ite = tmp14;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_Vec2List tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp15 = tmp14->push_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::geom::ZPP_Vec2 tmp16 = obj->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp17 = tmp13->inner->insert(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_Vec2List tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			tmp18->push_ite = tmp17;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(461)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(461)
			tmp10->inner->add(tmp11);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(462)
		tmp10->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_Vec2List tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(463)
		Dynamic tmp12 = tmp11->post_adder;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		if ((tmp13)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_Vec2List tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(463)
			::nape::geom::Vec2 tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			tmp14->post_adder(tmp15);
		}
	}
	HX_STACK_LINE(465)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(465)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,unshift,return )

::nape::geom::Vec2 Vec2List_obj::pop( ){
	HX_STACK_FRAME("nape.geom.Vec2List","pop",0xfadf530b,"nape.geom.Vec2List.pop","nape/geom/Vec2List.hx",478,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	if ((tmp1)){
		HX_STACK_LINE(480)
		::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	tmp2->modify_test();
	HX_STACK_LINE(484)
	bool tmp3 = this->empty();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	if ((tmp3)){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(487)
	this->zpp_vm();
	HX_STACK_LINE(489)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_Vec2List tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(490)
	if ((tmp5)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(491)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp7 = tmp6->inner->head;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		ret = tmp7->elt;
		HX_STACK_LINE(492)
		::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			bool tmp9 = (ret->outer == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(492)
			if ((tmp9)){
				HX_STACK_LINE(492)
				::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(492)
				ret->outer = tmp10;
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_Vec2 o = tmp11;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(492)
						if ((tmp12)){
							HX_STACK_LINE(492)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(492)
							o->outer = null();
						}
						HX_STACK_LINE(492)
						o->_isimmutable = null();
						HX_STACK_LINE(492)
						o->_validate = null();
						HX_STACK_LINE(492)
						o->_invalidate = null();
					}
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(492)
					o->next = tmp12;
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(492)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(492)
			tmp8 = ret->outer;
		}
		HX_STACK_LINE(492)
		::nape::geom::Vec2 retx = tmp8;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_Vec2List tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		if ((tmp11)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(493)
			::nape::geom::Vec2 tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(493)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(494)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		if ((tmp14)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(494)
			tmp15->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp7 = tmp6->at_ite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		if ((tmp8)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_Vec2List tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12 = tmp11->at_ite->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(497)
			tmp9 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(497)
			tmp9 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp9)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			tmp10->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		if ((tmp11)){
			HX_STACK_LINE(498)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			int tmp14 = this->zpp_gl();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			int tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			tmp12 = tmp13->inner->iterator_at(tmp15);
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ite = tmp12;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp13 = (ite == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(499)
		::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(499)
		if ((tmp13)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(499)
			tmp14 = tmp16->elt;
		}
		else{
			HX_STACK_LINE(499)
			tmp14 = ite->next->elt;
		}
		HX_STACK_LINE(499)
		ret = tmp14;
		HX_STACK_LINE(500)
		::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			bool tmp16 = (ret->outer == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(500)
			if ((tmp16)){
				HX_STACK_LINE(500)
				::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(500)
				ret->outer = tmp17;
				HX_STACK_LINE(500)
				{
					HX_STACK_LINE(500)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(500)
					::zpp_nape::geom::ZPP_Vec2 o = tmp18;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(500)
					{
						HX_STACK_LINE(500)
						bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(500)
						if ((tmp19)){
							HX_STACK_LINE(500)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(500)
							o->outer = null();
						}
						HX_STACK_LINE(500)
						o->_isimmutable = null();
						HX_STACK_LINE(500)
						o->_validate = null();
						HX_STACK_LINE(500)
						o->_invalidate = null();
					}
					HX_STACK_LINE(500)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(500)
					o->next = tmp19;
					HX_STACK_LINE(500)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(500)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(500)
			tmp15 = ret->outer;
		}
		HX_STACK_LINE(500)
		::nape::geom::Vec2 retx = tmp15;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_Vec2List tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(501)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(501)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(501)
		if ((tmp18)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_Vec2List tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(501)
			::nape::geom::Vec2 tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_Vec2List tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(502)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(502)
		if ((tmp21)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_Vec2List tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(502)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			tmp22->inner->erase(tmp23);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(504)
	tmp6->invalidate();
	HX_STACK_LINE(505)
	::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(505)
	{
		HX_STACK_LINE(505)
		bool tmp8 = (ret->outer == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(505)
		if ((tmp8)){
			HX_STACK_LINE(505)
			::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(505)
			ret->outer = tmp9;
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(505)
				::zpp_nape::geom::ZPP_Vec2 o = tmp10;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(505)
					bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(505)
					if ((tmp11)){
						HX_STACK_LINE(505)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(505)
						o->outer = null();
					}
					HX_STACK_LINE(505)
					o->_isimmutable = null();
					HX_STACK_LINE(505)
					o->_validate = null();
					HX_STACK_LINE(505)
					o->_invalidate = null();
				}
				HX_STACK_LINE(505)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(505)
				o->next = tmp11;
				HX_STACK_LINE(505)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(505)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(505)
		tmp7 = ret->outer;
	}
	HX_STACK_LINE(505)
	::nape::geom::Vec2 retx = tmp7;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::geom::Vec2 tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(506)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,pop,return )

::nape::geom::Vec2 Vec2List_obj::shift( ){
	HX_STACK_FRAME("nape.geom.Vec2List","shift",0xa530b47c,"nape.geom.Vec2List.shift","nape/geom/Vec2List.hx",519,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	if ((tmp1)){
		HX_STACK_LINE(521)
		::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	tmp2->modify_test();
	HX_STACK_LINE(525)
	bool tmp3 = this->empty();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(528)
	this->zpp_vm();
	HX_STACK_LINE(530)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_Vec2List tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(531)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	if ((tmp5)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp7 = tmp6->at_ite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		if ((tmp8)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_Vec2List tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12 = tmp11->at_ite->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(532)
			tmp9 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(532)
			tmp9 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp9)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			tmp10->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		if ((tmp11)){
			HX_STACK_LINE(533)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_Vec2List tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			int tmp14 = this->zpp_gl();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			int tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			tmp12 = tmp13->inner->iterator_at(tmp15);
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ite = tmp12;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp13 = (ite == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(534)
		::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(534)
		if ((tmp13)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp16 = tmp15->inner->head;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(534)
			tmp14 = tmp16->elt;
		}
		else{
			HX_STACK_LINE(534)
			tmp14 = ite->next->elt;
		}
		HX_STACK_LINE(534)
		ret = tmp14;
		HX_STACK_LINE(535)
		::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			bool tmp16 = (ret->outer == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(535)
			if ((tmp16)){
				HX_STACK_LINE(535)
				::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(535)
				ret->outer = tmp17;
				HX_STACK_LINE(535)
				{
					HX_STACK_LINE(535)
					::zpp_nape::geom::ZPP_Vec2 tmp18 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(535)
					::zpp_nape::geom::ZPP_Vec2 o = tmp18;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(535)
					{
						HX_STACK_LINE(535)
						bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(535)
						if ((tmp19)){
							HX_STACK_LINE(535)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(535)
							o->outer = null();
						}
						HX_STACK_LINE(535)
						o->_isimmutable = null();
						HX_STACK_LINE(535)
						o->_validate = null();
						HX_STACK_LINE(535)
						o->_invalidate = null();
					}
					HX_STACK_LINE(535)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(535)
					o->next = tmp19;
					HX_STACK_LINE(535)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(535)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(535)
			tmp15 = ret->outer;
		}
		HX_STACK_LINE(535)
		::nape::geom::Vec2 retx = tmp15;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_Vec2List tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(536)
		Dynamic tmp17 = tmp16->subber;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(536)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(536)
		if ((tmp18)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_Vec2List tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(536)
			::nape::geom::Vec2 tmp20 = retx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(536)
			tmp19->subber(tmp20);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_Vec2List tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(537)
		bool tmp20 = tmp19->dontremove;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(537)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(537)
		if ((tmp21)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_Vec2List tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(537)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp23 = ite;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(537)
			tmp22->inner->erase(tmp23);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp7 = tmp6->inner->head;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		ret = tmp7->elt;
		HX_STACK_LINE(541)
		::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			bool tmp9 = (ret->outer == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(541)
			if ((tmp9)){
				HX_STACK_LINE(541)
				::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(541)
				ret->outer = tmp10;
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(541)
					::zpp_nape::geom::ZPP_Vec2 o = tmp11;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(541)
					{
						HX_STACK_LINE(541)
						bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(541)
						if ((tmp12)){
							HX_STACK_LINE(541)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(541)
							o->outer = null();
						}
						HX_STACK_LINE(541)
						o->_isimmutable = null();
						HX_STACK_LINE(541)
						o->_validate = null();
						HX_STACK_LINE(541)
						o->_invalidate = null();
					}
					HX_STACK_LINE(541)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(541)
					o->next = tmp12;
					HX_STACK_LINE(541)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(541)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(541)
			tmp8 = ret->outer;
		}
		HX_STACK_LINE(541)
		::nape::geom::Vec2 retx = tmp8;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_Vec2List tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		Dynamic tmp10 = tmp9->subber;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(542)
		if ((tmp11)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(542)
			::nape::geom::Vec2 tmp13 = retx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(542)
			tmp12->subber(tmp13);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(543)
		bool tmp13 = tmp12->dontremove;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(543)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(543)
		if ((tmp14)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(543)
			tmp15->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(545)
	tmp6->invalidate();
	HX_STACK_LINE(546)
	::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(546)
	{
		HX_STACK_LINE(546)
		bool tmp8 = (ret->outer == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(546)
		if ((tmp8)){
			HX_STACK_LINE(546)
			::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			ret->outer = tmp9;
			HX_STACK_LINE(546)
			{
				HX_STACK_LINE(546)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(546)
				::zpp_nape::geom::ZPP_Vec2 o = tmp10;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(546)
				{
					HX_STACK_LINE(546)
					bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					if ((tmp11)){
						HX_STACK_LINE(546)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(546)
						o->outer = null();
					}
					HX_STACK_LINE(546)
					o->_isimmutable = null();
					HX_STACK_LINE(546)
					o->_validate = null();
					HX_STACK_LINE(546)
					o->_invalidate = null();
				}
				HX_STACK_LINE(546)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(546)
				o->next = tmp11;
				HX_STACK_LINE(546)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(546)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(546)
		tmp7 = ret->outer;
	}
	HX_STACK_LINE(546)
	::nape::geom::Vec2 retx = tmp7;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::geom::Vec2 tmp8 = retx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(547)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,shift,return )

bool Vec2List_obj::add( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("nape.geom.Vec2List","add",0xfad3e79b,"nape.geom.Vec2List.add","nape/geom/Vec2List.hx",563,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::geom::Vec2 tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::geom::Vec2 tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,add,return )

bool Vec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("nape.geom.Vec2List","remove",0xc789cf0a,"nape.geom.Vec2List.remove","nape/geom/Vec2List.hx",576,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	if ((tmp1)){
		HX_STACK_LINE(578)
		::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	tmp2->modify_test();
	HX_STACK_LINE(582)
	this->zpp_vm();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = tmp3->inner->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(589)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				if ((tmp6)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(592)
					bool tmp7 = (x == obj->zpp_inner);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(592)
					if ((tmp7)){
						HX_STACK_LINE(593)
						ret = true;
						HX_STACK_LINE(594)
						break;
					}
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	bool tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(601)
	if ((tmp3)){
		HX_STACK_LINE(602)
		::zpp_nape::util::ZPP_Vec2List tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		Dynamic tmp5 = tmp4->subber;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		if ((tmp6)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			::nape::geom::Vec2 tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			tmp7->subber(tmp8);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_Vec2List tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		bool tmp8 = tmp7->dontremove;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		if ((tmp9)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = obj->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			tmp10->inner->remove(tmp11);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_Vec2List tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(604)
		tmp10->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(606)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,remove,return )

Void Vec2List_obj::clear( ){
{
		HX_STACK_FRAME("nape.geom.Vec2List","clear",0x71693987,"nape.geom.Vec2List.clear","nape/geom/Vec2List.hx",614,0x7ea67276)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		if ((tmp3)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp4 = this->empty();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				bool tmp4 = this->empty();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(622)
				if ((tmp6)){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,clear,(void))

bool Vec2List_obj::empty( ){
	HX_STACK_FRAME("nape.geom.Vec2List","empty",0x98e80287,"nape.geom.Vec2List.empty","nape/geom/Vec2List.hx",631,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(634)
	int tmp = this->zpp_gl();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,empty,return )

::nape::geom::Vec2Iterator Vec2List_obj::iterator( ){
	HX_STACK_FRAME("nape.geom.Vec2List","iterator",0xff623a34,"nape.geom.Vec2List.iterator","nape/geom/Vec2List.hx",647,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(649)
	this->zpp_vm();
	HX_STACK_LINE(651)
	::nape::geom::Vec2Iterator tmp = ::nape::geom::Vec2Iterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,iterator,return )

::nape::geom::Vec2List Vec2List_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2List","copy",0x7ff190fb,"nape.geom.Vec2List.copy","nape/geom/Vec2List.hx",662,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::geom::Vec2List ret = ::nape::geom::Vec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::geom::Vec2Iterator tmp = this->iterator();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			::nape::geom::Vec2Iterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_Vec2List tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(664)
					tmp2->valmod();
					HX_STACK_LINE(664)
					int tmp3 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(664)
					_g->zpp_critical = true;
					HX_STACK_LINE(664)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					if ((tmp4)){
						HX_STACK_LINE(664)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::nape::geom::Vec2Iterator tmp5 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(664)
							::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
							HX_STACK_LINE(664)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(664)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(664)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				if ((tmp2)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(664)
				::nape::geom::Vec2 i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp4 = deep;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(664)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				if ((tmp4)){
					HX_STACK_LINE(664)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						bool tmp6 = (i != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(664)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(664)
						if ((tmp6)){
							HX_STACK_LINE(664)
							tmp7 = i->zpp_disp;
						}
						else{
							HX_STACK_LINE(664)
							tmp7 = false;
						}
						HX_STACK_LINE(664)
						if ((tmp7)){
							HX_STACK_LINE(664)
							::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(664)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(664)
							HX_STACK_DO_THROW(tmp9);
						}
					}
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							bool tmp7 = i->zpp_disp;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(664)
							if ((tmp7)){
								HX_STACK_LINE(664)
								::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(664)
								::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(664)
								HX_STACK_DO_THROW(tmp9);
							}
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 _this = i->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(664)
								if ((tmp8)){
									HX_STACK_LINE(664)
									_this->_validate();
								}
							}
							HX_STACK_LINE(664)
							tmp6 = i->zpp_inner->x;
						}
						HX_STACK_LINE(664)
						Float x = tmp6;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(664)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							bool tmp8 = i->zpp_disp;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(664)
							if ((tmp8)){
								HX_STACK_LINE(664)
								::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(664)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(664)
								HX_STACK_DO_THROW(tmp10);
							}
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 _this = i->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(664)
								if ((tmp9)){
									HX_STACK_LINE(664)
									_this->_validate();
								}
							}
							HX_STACK_LINE(664)
							tmp7 = i->zpp_inner->y;
						}
						HX_STACK_LINE(664)
						Float y = tmp7;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(664)
						bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(664)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(664)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(664)
						if ((tmp9)){
							HX_STACK_LINE(664)
							tmp10 = (y != y);
						}
						else{
							HX_STACK_LINE(664)
							tmp10 = true;
						}
						HX_STACK_LINE(664)
						if ((tmp10)){
							HX_STACK_LINE(664)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(664)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(664)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(664)
							if ((tmp12)){
								HX_STACK_LINE(664)
								::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(664)
								ret1 = tmp13;
							}
							else{
								HX_STACK_LINE(664)
								::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(664)
								ret1 = tmp13;
								HX_STACK_LINE(664)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
								HX_STACK_LINE(664)
								ret1->zpp_pool = null();
								HX_STACK_LINE(664)
								ret1->zpp_disp = false;
								HX_STACK_LINE(664)
								::nape::geom::Vec2 tmp14 = ret1;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(664)
								::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(664)
								bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(664)
								if ((tmp16)){
									HX_STACK_LINE(664)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
								}
							}
						}
						HX_STACK_LINE(664)
						bool tmp11 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(664)
						if ((tmp11)){
							HX_STACK_LINE(664)
							::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(664)
									bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(664)
									if ((tmp14)){
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(664)
										ret2 = tmp15;
									}
									else{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(664)
										ret2 = tmp15;
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
										HX_STACK_LINE(664)
										ret2->next = null();
									}
									HX_STACK_LINE(664)
									ret2->weak = false;
								}
								HX_STACK_LINE(664)
								ret2->_immutable = immutable;
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									ret2->x = x;
									HX_STACK_LINE(664)
									ret2->y = y;
									HX_STACK_LINE(664)
									{
									}
								}
								HX_STACK_LINE(664)
								tmp12 = ret2;
							}
							HX_STACK_LINE(664)
							ret1->zpp_inner = tmp12;
							HX_STACK_LINE(664)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								bool tmp12 = (ret1 != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(664)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(664)
								if ((tmp12)){
									HX_STACK_LINE(664)
									tmp13 = ret1->zpp_disp;
								}
								else{
									HX_STACK_LINE(664)
									tmp13 = false;
								}
								HX_STACK_LINE(664)
								if ((tmp13)){
									HX_STACK_LINE(664)
									::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(664)
									::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(664)
									HX_STACK_DO_THROW(tmp15);
								}
							}
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								bool tmp12 = _this->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(664)
								if ((tmp12)){
									HX_STACK_LINE(664)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(664)
								bool tmp13 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(664)
								if ((tmp13)){
									HX_STACK_LINE(664)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(664)
							bool tmp12 = (x != x);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(664)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(664)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(664)
							if ((tmp13)){
								HX_STACK_LINE(664)
								tmp14 = (y != y);
							}
							else{
								HX_STACK_LINE(664)
								tmp14 = true;
							}
							HX_STACK_LINE(664)
							if ((tmp14)){
								HX_STACK_LINE(664)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
							}
							HX_STACK_LINE(664)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									bool tmp16 = (ret1 != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(664)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(664)
									if ((tmp16)){
										HX_STACK_LINE(664)
										tmp17 = ret1->zpp_disp;
									}
									else{
										HX_STACK_LINE(664)
										tmp17 = false;
									}
									HX_STACK_LINE(664)
									if ((tmp17)){
										HX_STACK_LINE(664)
										::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(664)
										::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(664)
										HX_STACK_DO_THROW(tmp19);
									}
								}
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(664)
									bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(664)
									if ((tmp16)){
										HX_STACK_LINE(664)
										_this->_validate();
									}
								}
								HX_STACK_LINE(664)
								tmp15 = ret1->zpp_inner->x;
							}
							HX_STACK_LINE(664)
							Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(664)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(664)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(664)
							if ((tmp17)){
								HX_STACK_LINE(664)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										bool tmp20 = (ret1 != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(664)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(664)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(664)
										bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(664)
										if ((tmp23)){
											HX_STACK_LINE(664)
											tmp22 = ret1->zpp_disp;
										}
										else{
											HX_STACK_LINE(664)
											tmp22 = false;
										}
										HX_STACK_LINE(664)
										bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(664)
										if ((tmp24)){
											HX_STACK_LINE(664)
											::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(664)
											::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(664)
											::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(664)
											::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(664)
											::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(664)
											HX_STACK_DO_THROW(tmp29);
										}
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(664)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(664)
										bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(664)
										if ((tmp22)){
											HX_STACK_LINE(664)
											_this->_validate();
										}
									}
									HX_STACK_LINE(664)
									Float tmp20 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(664)
									tmp19 = tmp20;
								}
								HX_STACK_LINE(664)
								Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(664)
								tmp18 = (tmp19 == tmp20);
							}
							else{
								HX_STACK_LINE(664)
								tmp18 = false;
							}
							HX_STACK_LINE(664)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(664)
							if ((tmp19)){
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									ret1->zpp_inner->x = x;
									HX_STACK_LINE(664)
									ret1->zpp_inner->y = y;
									HX_STACK_LINE(664)
									{
									}
								}
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(664)
									bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(664)
									if ((tmp20)){
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(664)
										_this->_invalidate(tmp21);
									}
								}
							}
							HX_STACK_LINE(664)
							ret1;
						}
						HX_STACK_LINE(664)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(664)
						tmp5 = ret1;
					}
				}
				else{
					HX_STACK_LINE(664)
					tmp5 = i;
				}
				HX_STACK_LINE(664)
				ret->push(tmp5);
			}
		}
		HX_STACK_LINE(665)
		::nape::geom::Vec2List tmp = ret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(665)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,copy,return )

Void Vec2List_obj::merge( ::nape::geom::Vec2List xs){
{
		HX_STACK_FRAME("nape.geom.Vec2List","merge",0x2ed46ab2,"nape.geom.Vec2List.merge","nape/geom/Vec2List.hx",678,0x7ea67276)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(680)
		bool tmp = (xs == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(680)
		if ((tmp)){
			HX_STACK_LINE(680)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot merge with null list","\xf4","\x38","\x16","\xfb"));
		}
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			::nape::geom::Vec2Iterator tmp1 = xs->iterator();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(682)
			::nape::geom::Vec2Iterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(682)
			while((true)){
				HX_STACK_LINE(682)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					::zpp_nape::util::ZPP_Vec2List tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(682)
					tmp3->valmod();
					HX_STACK_LINE(682)
					int tmp4 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(682)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(682)
					_g->zpp_critical = true;
					HX_STACK_LINE(682)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					if ((tmp5)){
						HX_STACK_LINE(682)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(682)
						{
							HX_STACK_LINE(682)
							::nape::geom::Vec2Iterator tmp6 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(682)
							::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
							HX_STACK_LINE(682)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(682)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(682)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				if ((tmp3)){
					HX_STACK_LINE(682)
					break;
				}
				HX_STACK_LINE(682)
				::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					_g->zpp_critical = false;
					HX_STACK_LINE(682)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(682)
				::nape::geom::Vec2 x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(683)
				::nape::geom::Vec2 tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(683)
				bool tmp6 = this->has(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(683)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(683)
				if ((tmp7)){
					HX_STACK_LINE(683)
					::nape::geom::Vec2 tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(683)
					this->add(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,merge,(void))

::String Vec2List_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec2List","toString",0xa436c0f2,"nape.geom.Vec2List.toString","nape/geom/Vec2List.hx",696,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_LINE(697)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(698)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(699)
	{
		HX_STACK_LINE(699)
		::nape::geom::Vec2Iterator tmp = this->iterator();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		::nape::geom::Vec2Iterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(699)
		while((true)){
			HX_STACK_LINE(699)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::zpp_nape::util::ZPP_Vec2List tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(699)
				tmp2->valmod();
				HX_STACK_LINE(699)
				int tmp3 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(699)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(699)
				_g->zpp_critical = true;
				HX_STACK_LINE(699)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(699)
				if ((tmp4)){
					HX_STACK_LINE(699)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::nape::geom::Vec2Iterator tmp5 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(699)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(699)
						::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
						HX_STACK_LINE(699)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(699)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(699)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(699)
			if ((tmp2)){
				HX_STACK_LINE(699)
				break;
			}
			HX_STACK_LINE(699)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				_g->zpp_critical = false;
				HX_STACK_LINE(699)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(699)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(699)
			::nape::geom::Vec2 i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(700)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(700)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(700)
			if ((tmp5)){
				HX_STACK_LINE(700)
				hx::AddEq(ret,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(701)
			bool tmp6 = (i == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(701)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(701)
			if ((tmp6)){
				HX_STACK_LINE(701)
				tmp7 = HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33");
			}
			else{
				HX_STACK_LINE(701)
				tmp7 = i->toString();
			}
			HX_STACK_LINE(701)
			hx::AddEq(ret,tmp7);
			HX_STACK_LINE(702)
			fst = false;
		}
	}
	HX_STACK_LINE(704)
	::String tmp = (ret + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,toString,return )

::nape::geom::Vec2List Vec2List_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.geom.Vec2List","foreach",0xb7f03804,"nape.geom.Vec2List.foreach","nape/geom/Vec2List.hx",726,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(728)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(728)
	if ((tmp)){
		HX_STACK_LINE(728)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
	}
	HX_STACK_LINE(730)
	::nape::geom::Vec2Iterator tmp1 = this->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	::nape::geom::Vec2Iterator it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(731)
	while((true)){
		HX_STACK_LINE(731)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			::zpp_nape::util::ZPP_Vec2List tmp3 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			tmp3->valmod();
			HX_STACK_LINE(731)
			int tmp4 = it->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(731)
			int length = tmp4;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(731)
			it->zpp_critical = true;
			HX_STACK_LINE(731)
			bool tmp5 = (it->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(731)
			if ((tmp5)){
				HX_STACK_LINE(731)
				tmp2 = true;
			}
			else{
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					::nape::geom::Vec2Iterator tmp6 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(731)
					it->zpp_next = tmp6;
					HX_STACK_LINE(731)
					::nape::geom::Vec2Iterator_obj::zpp_pool = it;
					HX_STACK_LINE(731)
					it->zpp_inner = null();
				}
				HX_STACK_LINE(731)
				tmp2 = false;
			}
		}
		HX_STACK_LINE(731)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(731)
		if ((tmp3)){
			HX_STACK_LINE(731)
			break;
		}
		HX_STACK_LINE(732)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(733)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(733)
			{
				HX_STACK_LINE(733)
				it->zpp_critical = false;
				HX_STACK_LINE(733)
				int tmp5 = (it->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(733)
				tmp4 = it->zpp_inner->at(tmp5);
			}
			HX_STACK_LINE(733)
			lambda(tmp4).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(736)
					{
						HX_STACK_LINE(737)
						::nape::geom::Vec2Iterator tmp4 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(737)
						it->zpp_next = tmp4;
						HX_STACK_LINE(738)
						::nape::geom::Vec2Iterator_obj::zpp_pool = it;
						HX_STACK_LINE(739)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(741)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(744)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,foreach,return )

::nape::geom::Vec2List Vec2List_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.geom.Vec2List","filter",0x4836527e,"nape.geom.Vec2List.filter","nape/geom/Vec2List.hx",773,0x7ea67276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(775)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	if ((tmp)){
		HX_STACK_LINE(775)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot select elements of list with null","\x14","\xa8","\xf1","\x3b"));
	}
	HX_STACK_LINE(777)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(778)
	while((true)){
		HX_STACK_LINE(778)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(778)
		int tmp2 = this->zpp_gl();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(778)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		if ((tmp4)){
			HX_STACK_LINE(778)
			break;
		}
		HX_STACK_LINE(779)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(779)
		::nape::geom::Vec2 tmp6 = this->at(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(779)
		::nape::geom::Vec2 x = tmp6;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(780)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(781)
			::nape::geom::Vec2 tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(781)
			bool tmp8 = lambda(tmp7).Cast< bool >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(781)
			if ((tmp8)){
				HX_STACK_LINE(781)
				(i)++;
			}
			else{
				HX_STACK_LINE(782)
				::nape::geom::Vec2 tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(782)
				this->remove(tmp9);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(785)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(788)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,filter,return )

::nape::geom::Vec2List Vec2List_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.geom.Vec2List","fromArray",0xbd42a4c9,"nape.geom.Vec2List.fromArray","nape/geom/Vec2List.hx",304,0x7ea67276)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	if ((tmp)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot convert null Array to Nape list","\x35","\xf1","\x7a","\x22"));
	}
	HX_STACK_LINE(310)
	::nape::geom::Vec2List ret = ::nape::geom::Vec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp1 = (_g < array->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			if ((tmp2)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::geom::Vec2 tmp3 = array->__get(_g).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::nape::geom::Vec2 i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::geom::Vec2 tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			ret->push(tmp4);
		}
	}
	HX_STACK_LINE(318)
	::nape::geom::Vec2List tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,fromArray,return )


Vec2List_obj::Vec2List_obj()
{
}

void Vec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2List);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Vec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Vec2List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vec2List_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic Vec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_Vec2List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vec2List_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vec2List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Vec2List*/ ,(int)offsetof(Vec2List_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("zpp_gl","\x8a","\x53","\xbb","\x8e"),
	HX_HCSTRING("zpp_vm","\x9c","\x60","\xbb","\x8e"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2List_obj::__mClass,"__mClass");
};

#endif

hx::Class Vec2List_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void Vec2List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Vec2List","\xe8","\x90","\x23","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec2List_obj::__GetStatic;
	__mClass->mSetStaticField = &Vec2List_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vec2List_obj >;
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
