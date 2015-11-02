#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Shape_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","new",0x046456be,"zpp_nape.util.ZNPList_ZPP_Shape.new","zpp_nape/util/Lists.hx",1009,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1019)
	this->length = (int)0;
	HX_STACK_LINE(1018)
	this->pushmod = false;
	HX_STACK_LINE(1017)
	this->modified = false;
	HX_STACK_LINE(1010)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Shape_obj::~ZNPList_ZPP_Shape_obj() { }

Dynamic ZNPList_ZPP_Shape_obj::__CreateEmpty() { return  new ZNPList_ZPP_Shape_obj; }
hx::ObjectPtr< ZNPList_ZPP_Shape_obj > ZNPList_ZPP_Shape_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > _result_ = new ZNPList_ZPP_Shape_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZNPList_ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > _result_ = new ZNPList_ZPP_Shape_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","begin",0x3e5b4407,"zpp_nape.util.ZNPList_ZPP_Shape.begin","zpp_nape/util/Lists.hx",1014,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1015)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1015)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,begin,return )

Void ZNPList_ZPP_Shape_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Shape i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","setbegin",0xd5328829,"zpp_nape.util.ZNPList_ZPP_Shape.setbegin","zpp_nape/util/Lists.hx",1022,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(1023)
		this->head = i;
		HX_STACK_LINE(1024)
		this->modified = true;
		HX_STACK_LINE(1025)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,setbegin,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","add",0x045a787f,"zpp_nape.util.ZNPList_ZPP_Shape.add","zpp_nape/util/Lists.hx",1027,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1028)
	::zpp_nape::shape::ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1028)
	{
		HX_STACK_LINE(1028)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1028)
		{
			HX_STACK_LINE(1028)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1028)
			{
				HX_STACK_LINE(1028)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1028)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1028)
				if ((tmp3)){
					HX_STACK_LINE(1028)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1028)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1028)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1028)
					ret = tmp4;
					HX_STACK_LINE(1028)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1028)
					ret->next = null();
				}
				HX_STACK_LINE(1028)
				Dynamic();
			}
			HX_STACK_LINE(1028)
			ret->elt = o;
			HX_STACK_LINE(1028)
			tmp1 = ret;
		}
		HX_STACK_LINE(1028)
		::zpp_nape::util::ZNPNode_ZPP_Shape temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1028)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1028)
		temp->next = tmp2;
		HX_STACK_LINE(1028)
		this->head = temp;
		HX_STACK_LINE(1028)
		this->modified = true;
		HX_STACK_LINE(1028)
		(this->length)++;
		HX_STACK_LINE(1028)
		tmp = o;
	}
	HX_STACK_LINE(1028)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,add,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_add",0x67d960eb,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_add","zpp_nape/util/Lists.hx",1032,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1041)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1041)
	{
		HX_STACK_LINE(1042)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1043)
		{
			HX_STACK_LINE(1044)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1044)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1044)
			if ((tmp2)){
				HX_STACK_LINE(1045)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1045)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1051)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1051)
				ret = tmp3;
				HX_STACK_LINE(1052)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1053)
				ret->next = null();
			}
			HX_STACK_LINE(1058)
			Dynamic();
		}
		HX_STACK_LINE(1060)
		ret->elt = o;
		HX_STACK_LINE(1061)
		tmp = ret;
	}
	HX_STACK_LINE(1041)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1063)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1063)
	temp->next = tmp1;
	HX_STACK_LINE(1064)
	this->head = temp;
	HX_STACK_LINE(1065)
	this->modified = true;
	HX_STACK_LINE(1066)
	(this->length)++;
	HX_STACK_LINE(1067)
	::zpp_nape::shape::ZPP_Shape tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1067)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_add,return )

Void ZNPList_ZPP_Shape_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Shape x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","addAll",0x55a451e2,"zpp_nape.util.ZNPList_ZPP_Shape.addAll","zpp_nape/util/Lists.hx",1078,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1079)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1080)
		while((true)){
			HX_STACK_LINE(1080)
			bool tmp = (cx_ite != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1080)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1080)
			if ((tmp1)){
				HX_STACK_LINE(1080)
				break;
			}
			HX_STACK_LINE(1081)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1082)
			::zpp_nape::shape::ZPP_Shape tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1082)
			this->add(tmp2);
			HX_STACK_LINE(1083)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","insert",0x54868b9b,"zpp_nape.util.ZNPList_ZPP_Shape.insert","zpp_nape/util/Lists.hx",1087,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1088)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1088)
	{
		HX_STACK_LINE(1088)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		{
			HX_STACK_LINE(1088)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1088)
			{
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1088)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1088)
				if ((tmp3)){
					HX_STACK_LINE(1088)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1088)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(1088)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1088)
					ret = tmp4;
					HX_STACK_LINE(1088)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
					HX_STACK_LINE(1088)
					ret->next = null();
				}
				HX_STACK_LINE(1088)
				Dynamic();
			}
			HX_STACK_LINE(1088)
			ret->elt = o;
			HX_STACK_LINE(1088)
			tmp1 = ret;
		}
		HX_STACK_LINE(1088)
		::zpp_nape::util::ZNPNode_ZPP_Shape temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1088)
		bool tmp2 = (cur == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		if ((tmp2)){
			HX_STACK_LINE(1088)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1088)
			temp->next = tmp3;
			HX_STACK_LINE(1088)
			this->head = temp;
		}
		else{
			HX_STACK_LINE(1088)
			temp->next = cur->next;
			HX_STACK_LINE(1088)
			cur->next = temp;
		}
		HX_STACK_LINE(1088)
		bool tmp3 = this->modified = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1088)
		this->pushmod = tmp3;
		HX_STACK_LINE(1088)
		(this->length)++;
		HX_STACK_LINE(1088)
		tmp = temp;
	}
	HX_STACK_LINE(1088)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_insert",0x54abaeaf,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_insert","zpp_nape/util/Lists.hx",1092,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1101)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	{
		HX_STACK_LINE(1102)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1104)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1104)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1104)
			if ((tmp2)){
				HX_STACK_LINE(1105)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1105)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(1111)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1111)
				ret = tmp3;
				HX_STACK_LINE(1112)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1113)
				ret->next = null();
			}
			HX_STACK_LINE(1118)
			Dynamic();
		}
		HX_STACK_LINE(1120)
		ret->elt = o;
		HX_STACK_LINE(1121)
		tmp = ret;
	}
	HX_STACK_LINE(1101)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp = tmp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1123)
	bool tmp1 = (cur == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1123)
	if ((tmp1)){
		HX_STACK_LINE(1124)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1124)
		temp->next = tmp2;
		HX_STACK_LINE(1125)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1128)
		temp->next = cur->next;
		HX_STACK_LINE(1129)
		cur->next = temp;
	}
	HX_STACK_LINE(1131)
	bool tmp2 = this->modified = true;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1131)
	this->pushmod = tmp2;
	HX_STACK_LINE(1132)
	(this->length)++;
	HX_STACK_LINE(1133)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1133)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,inlined_insert,return )

Void ZNPList_ZPP_Shape_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","pop",0x0465e3ef,"zpp_nape.util.ZNPList_ZPP_Shape.pop","zpp_nape/util/Lists.hx",1136,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1136)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1136)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1136)
		this->head = ret->next;
		HX_STACK_LINE(1136)
		{
			HX_STACK_LINE(1136)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1136)
			o->elt = null();
			HX_STACK_LINE(1136)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1136)
			o->next = tmp1;
			HX_STACK_LINE(1136)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1136)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1136)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1136)
		if ((tmp2)){
			HX_STACK_LINE(1136)
			this->pushmod = true;
		}
		HX_STACK_LINE(1136)
		this->modified = true;
		HX_STACK_LINE(1136)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop,(void))

Void ZNPList_ZPP_Shape_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_pop",0x67e4cc5b,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_pop","zpp_nape/util/Lists.hx",1140,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1149)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1149)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1150)
		this->head = ret->next;
		HX_STACK_LINE(1152)
		{
			HX_STACK_LINE(1153)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1162)
			o->elt = null();
			HX_STACK_LINE(1163)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1163)
			o->next = tmp1;
			HX_STACK_LINE(1164)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1169)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1169)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1169)
		if ((tmp2)){
			HX_STACK_LINE(1169)
			this->pushmod = true;
		}
		HX_STACK_LINE(1170)
		this->modified = true;
		HX_STACK_LINE(1171)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","pop_unsafe",0x7c1e9db6,"zpp_nape.util.ZNPList_ZPP_Shape.pop_unsafe","zpp_nape/util/Lists.hx",1173,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1174)
	::zpp_nape::shape::ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1174)
	{
		HX_STACK_LINE(1174)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1174)
		::zpp_nape::shape::ZPP_Shape ret = tmp1->elt;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1174)
		this->pop();
		HX_STACK_LINE(1174)
		tmp = ret;
	}
	HX_STACK_LINE(1174)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop_unsafe,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_pop_unsafe",0x7d14daca,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_pop_unsafe","zpp_nape/util/Lists.hx",1178,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1187)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1187)
	::zpp_nape::shape::ZPP_Shape ret = tmp->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1188)
	this->pop();
	HX_STACK_LINE(1189)
	::zpp_nape::shape::ZPP_Shape tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1189)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Shape_obj::remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","remove",0xbb31e4a6,"zpp_nape.util.ZNPList_ZPP_Shape.remove","zpp_nape/util/Lists.hx",1200,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1200)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1200)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1200)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1200)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1200)
		while((true)){
			HX_STACK_LINE(1200)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1200)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1200)
			if ((tmp2)){
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1200)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1200)
			if ((tmp3)){
				HX_STACK_LINE(1200)
				{
					HX_STACK_LINE(1200)
					::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1200)
					::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1200)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1200)
					if ((tmp4)){
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1200)
						old = tmp5;
						HX_STACK_LINE(1200)
						ret1 = old->next;
						HX_STACK_LINE(1200)
						this->head = ret1;
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1200)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1200)
						if ((tmp7)){
							HX_STACK_LINE(1200)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1200)
						old = pre->next;
						HX_STACK_LINE(1200)
						ret1 = old->next;
						HX_STACK_LINE(1200)
						pre->next = ret1;
						HX_STACK_LINE(1200)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1200)
						if ((tmp5)){
							HX_STACK_LINE(1200)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1200)
					{
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1200)
						o->elt = null();
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1200)
						o->next = tmp5;
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1200)
					this->modified = true;
					HX_STACK_LINE(1200)
					(this->length)--;
					HX_STACK_LINE(1200)
					this->pushmod = true;
					HX_STACK_LINE(1200)
					ret1;
				}
				HX_STACK_LINE(1200)
				ret = true;
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1200)
			pre = cur;
			HX_STACK_LINE(1200)
			cur = cur->next;
		}
		HX_STACK_LINE(1200)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,remove,(void))

bool ZNPList_ZPP_Shape_obj::try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","try_remove",0x9348d36a,"zpp_nape.util.ZNPList_ZPP_Shape.try_remove","zpp_nape/util/Lists.hx",1202,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1211)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1213)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1214)
	while((true)){
		HX_STACK_LINE(1214)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1214)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1214)
		if ((tmp2)){
			HX_STACK_LINE(1214)
			break;
		}
		HX_STACK_LINE(1215)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1215)
		if ((tmp3)){
			HX_STACK_LINE(1216)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1216)
			this->erase(tmp4);
			HX_STACK_LINE(1217)
			ret = true;
			HX_STACK_LINE(1218)
			break;
		}
		HX_STACK_LINE(1220)
		pre = cur;
		HX_STACK_LINE(1221)
		cur = cur->next;
	}
	HX_STACK_LINE(1223)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1223)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,try_remove,return )

Void ZNPList_ZPP_Shape_obj::inlined_remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_remove",0xbb5707ba,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_remove","zpp_nape/util/Lists.hx",1236,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1236)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1236)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1236)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1236)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1236)
		while((true)){
			HX_STACK_LINE(1236)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1236)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1236)
			if ((tmp2)){
				HX_STACK_LINE(1236)
				break;
			}
			HX_STACK_LINE(1236)
			bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1236)
			if ((tmp3)){
				HX_STACK_LINE(1236)
				{
					HX_STACK_LINE(1236)
					::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1236)
					::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1236)
					bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1236)
					if ((tmp4)){
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1236)
						old = tmp5;
						HX_STACK_LINE(1236)
						ret1 = old->next;
						HX_STACK_LINE(1236)
						this->head = ret1;
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1236)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1236)
						if ((tmp7)){
							HX_STACK_LINE(1236)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1236)
						old = pre->next;
						HX_STACK_LINE(1236)
						ret1 = old->next;
						HX_STACK_LINE(1236)
						pre->next = ret1;
						HX_STACK_LINE(1236)
						bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1236)
						if ((tmp5)){
							HX_STACK_LINE(1236)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1236)
					{
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1236)
						o->elt = null();
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1236)
						o->next = tmp5;
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1236)
					this->modified = true;
					HX_STACK_LINE(1236)
					(this->length)--;
					HX_STACK_LINE(1236)
					this->pushmod = true;
					HX_STACK_LINE(1236)
					ret1;
				}
				HX_STACK_LINE(1236)
				ret = true;
				HX_STACK_LINE(1236)
				break;
			}
			HX_STACK_LINE(1236)
			pre = cur;
			HX_STACK_LINE(1236)
			cur = cur->next;
		}
		HX_STACK_LINE(1236)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_remove,(void))

bool ZNPList_ZPP_Shape_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_try_remove",0x943f107e,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_try_remove","zpp_nape/util/Lists.hx",1240,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1249)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1250)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1250)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = tmp;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1251)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1252)
	while((true)){
		HX_STACK_LINE(1252)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1252)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1252)
		if ((tmp2)){
			HX_STACK_LINE(1252)
			break;
		}
		HX_STACK_LINE(1253)
		bool tmp3 = (cur->elt == obj);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1253)
		if ((tmp3)){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1254)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1254)
				bool tmp4 = (pre == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1254)
				if ((tmp4)){
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1254)
					old = tmp5;
					HX_STACK_LINE(1254)
					ret1 = old->next;
					HX_STACK_LINE(1254)
					this->head = ret1;
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp6 = this->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1254)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1254)
					if ((tmp7)){
						HX_STACK_LINE(1254)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1254)
					old = pre->next;
					HX_STACK_LINE(1254)
					ret1 = old->next;
					HX_STACK_LINE(1254)
					pre->next = ret1;
					HX_STACK_LINE(1254)
					bool tmp5 = (ret1 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1254)
					if ((tmp5)){
						HX_STACK_LINE(1254)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1254)
				{
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1254)
					o->elt = null();
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1254)
					o->next = tmp5;
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1254)
				this->modified = true;
				HX_STACK_LINE(1254)
				(this->length)--;
				HX_STACK_LINE(1254)
				this->pushmod = true;
				HX_STACK_LINE(1254)
				ret1;
			}
			HX_STACK_LINE(1255)
			ret = true;
			HX_STACK_LINE(1256)
			break;
		}
		HX_STACK_LINE(1258)
		pre = cur;
		HX_STACK_LINE(1259)
		cur = cur->next;
	}
	HX_STACK_LINE(1261)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1261)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","erase",0x012242c4,"zpp_nape.util.ZNPList_ZPP_Shape.erase","zpp_nape/util/Lists.hx",1263,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1264)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1264)
	{
		HX_STACK_LINE(1264)
		::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1264)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1264)
		bool tmp1 = (pre == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1264)
		if ((tmp1)){
			HX_STACK_LINE(1264)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1264)
			old = tmp2;
			HX_STACK_LINE(1264)
			ret = old->next;
			HX_STACK_LINE(1264)
			this->head = ret;
			HX_STACK_LINE(1264)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = this->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1264)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1264)
			if ((tmp4)){
				HX_STACK_LINE(1264)
				this->pushmod = true;
			}
		}
		else{
			HX_STACK_LINE(1264)
			old = pre->next;
			HX_STACK_LINE(1264)
			ret = old->next;
			HX_STACK_LINE(1264)
			pre->next = ret;
			HX_STACK_LINE(1264)
			bool tmp2 = (ret == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1264)
			if ((tmp2)){
				HX_STACK_LINE(1264)
				this->pushmod = true;
			}
		}
		HX_STACK_LINE(1264)
		{
			HX_STACK_LINE(1264)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1264)
			o->elt = null();
			HX_STACK_LINE(1264)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1264)
			o->next = tmp2;
			HX_STACK_LINE(1264)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1264)
		this->modified = true;
		HX_STACK_LINE(1264)
		(this->length)--;
		HX_STACK_LINE(1264)
		this->pushmod = true;
		HX_STACK_LINE(1264)
		tmp = ret;
	}
	HX_STACK_LINE(1264)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_erase",0x707d1e30,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_erase","zpp_nape/util/Lists.hx",1268,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1277)
	::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1278)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1279)
	bool tmp = (pre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1279)
	if ((tmp)){
		HX_STACK_LINE(1280)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1280)
		old = tmp1;
		HX_STACK_LINE(1281)
		ret = old->next;
		HX_STACK_LINE(1282)
		this->head = ret;
		HX_STACK_LINE(1283)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp2 = this->head;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1283)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1283)
		if ((tmp3)){
			HX_STACK_LINE(1283)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1286)
		old = pre->next;
		HX_STACK_LINE(1287)
		ret = old->next;
		HX_STACK_LINE(1288)
		pre->next = ret;
		HX_STACK_LINE(1289)
		bool tmp1 = (ret == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1289)
		if ((tmp1)){
			HX_STACK_LINE(1289)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1292)
	{
		HX_STACK_LINE(1293)
		::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1302)
		o->elt = null();
		HX_STACK_LINE(1303)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1303)
		o->next = tmp1;
		HX_STACK_LINE(1304)
		::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1309)
	this->modified = true;
	HX_STACK_LINE(1310)
	(this->length)--;
	HX_STACK_LINE(1311)
	this->pushmod = true;
	HX_STACK_LINE(1312)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Shape pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","splice",0x7647cdde,"zpp_nape.util.ZNPList_ZPP_Shape.splice","zpp_nape/util/Lists.hx",1314,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(1315)
	while((true)){
		HX_STACK_LINE(1315)
		int tmp = (n)--;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1315)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1315)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1315)
		if ((tmp1)){
			HX_STACK_LINE(1315)
			tmp2 = (pre->next != null());
		}
		else{
			HX_STACK_LINE(1315)
			tmp2 = false;
		}
		HX_STACK_LINE(1315)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1315)
		if ((tmp3)){
			HX_STACK_LINE(1315)
			break;
		}
		HX_STACK_LINE(1315)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = pre;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1315)
		this->erase(tmp4);
	}
	HX_STACK_LINE(1316)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = pre->next;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1316)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,splice,return )

Void ZNPList_ZPP_Shape_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","clear",0xd660cb6b,"zpp_nape.util.ZNPList_ZPP_Shape.clear","zpp_nape/util/Lists.hx",1319,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1319)
		while((true)){
			HX_STACK_LINE(1319)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1319)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1319)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1319)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1319)
			if ((tmp3)){
				HX_STACK_LINE(1319)
				break;
			}
			HX_STACK_LINE(1319)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1319)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1319)
			this->head = ret->next;
			HX_STACK_LINE(1319)
			{
				HX_STACK_LINE(1319)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1319)
				o->elt = null();
				HX_STACK_LINE(1319)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1319)
				o->next = tmp5;
				HX_STACK_LINE(1319)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1319)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1319)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1319)
			if ((tmp6)){
				HX_STACK_LINE(1319)
				this->pushmod = true;
			}
			HX_STACK_LINE(1319)
			this->modified = true;
			HX_STACK_LINE(1319)
			(this->length)--;
		}
		HX_STACK_LINE(1319)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,clear,(void))

Void ZNPList_ZPP_Shape_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_clear",0x45bba6d7,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_clear","zpp_nape/util/Lists.hx",1324,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1325)
		while((true)){
			HX_STACK_LINE(1325)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1325)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1325)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1325)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1325)
			if ((tmp3)){
				HX_STACK_LINE(1325)
				break;
			}
			HX_STACK_LINE(1325)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = this->head;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1325)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp4;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1325)
			this->head = ret->next;
			HX_STACK_LINE(1325)
			{
				HX_STACK_LINE(1325)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1325)
				o->elt = null();
				HX_STACK_LINE(1325)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1325)
				o->next = tmp5;
				HX_STACK_LINE(1325)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1325)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = this->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1325)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1325)
			if ((tmp6)){
				HX_STACK_LINE(1325)
				this->pushmod = true;
			}
			HX_STACK_LINE(1325)
			this->modified = true;
			HX_STACK_LINE(1325)
			(this->length)--;
		}
		HX_STACK_LINE(1326)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_clear,(void))

Void ZNPList_ZPP_Shape_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","reverse",0x38724680,"zpp_nape.util.ZNPList_ZPP_Shape.reverse","zpp_nape/util/Lists.hx",1329,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1330)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1330)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1331)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1332)
		while((true)){
			HX_STACK_LINE(1332)
			bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1332)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1332)
			if ((tmp2)){
				HX_STACK_LINE(1332)
				break;
			}
			HX_STACK_LINE(1333)
			::zpp_nape::util::ZNPNode_ZPP_Shape nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1334)
			cur->next = pre;
			HX_STACK_LINE(1335)
			this->head = cur;
			HX_STACK_LINE(1336)
			pre = cur;
			HX_STACK_LINE(1337)
			cur = nx;
		}
		HX_STACK_LINE(1339)
		this->modified = true;
		HX_STACK_LINE(1340)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,reverse,(void))

bool ZNPList_ZPP_Shape_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","empty",0xfddf946b,"zpp_nape.util.ZNPList_ZPP_Shape.empty","zpp_nape/util/Lists.hx",1344,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1345)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1345)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1345)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,empty,return )

int ZNPList_ZPP_Shape_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","size",0xd6b8aca3,"zpp_nape.util.ZNPList_ZPP_Shape.size","zpp_nape/util/Lists.hx",1349,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1350)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1350)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,size,return )

bool ZNPList_ZPP_Shape_obj::has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","has",0x045fc5b8,"zpp_nape.util.ZNPList_ZPP_Shape.has","zpp_nape/util/Lists.hx",1352,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1353)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1353)
	{
		HX_STACK_LINE(1353)
		bool ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1353)
		{
			HX_STACK_LINE(1353)
			ret = false;
			HX_STACK_LINE(1353)
			{
				HX_STACK_LINE(1353)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->head;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1353)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1353)
				while((true)){
					HX_STACK_LINE(1353)
					bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1353)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1353)
					if ((tmp3)){
						HX_STACK_LINE(1353)
						break;
					}
					HX_STACK_LINE(1353)
					::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1353)
						bool tmp4 = (npite == obj);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1353)
						if ((tmp4)){
							HX_STACK_LINE(1353)
							ret = true;
							HX_STACK_LINE(1353)
							break;
						}
					}
					HX_STACK_LINE(1353)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(1353)
		tmp = ret;
	}
	HX_STACK_LINE(1353)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,has,return )

bool ZNPList_ZPP_Shape_obj::inlined_has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_has",0x67deae24,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_has","zpp_nape/util/Lists.hx",1357,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1366)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1367)
	{
		HX_STACK_LINE(1368)
		ret = false;
		HX_STACK_LINE(1369)
		{
			HX_STACK_LINE(1370)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1370)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1371)
			while((true)){
				HX_STACK_LINE(1371)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1371)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1371)
				if ((tmp2)){
					HX_STACK_LINE(1371)
					break;
				}
				HX_STACK_LINE(1372)
				::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1373)
				{
					HX_STACK_LINE(1374)
					bool tmp3 = (npite == obj);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1374)
					if ((tmp3)){
						HX_STACK_LINE(1375)
						ret = true;
						HX_STACK_LINE(1376)
						break;
					}
				}
				HX_STACK_LINE(1379)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1383)
	bool tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1383)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_has,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","front",0x94937287,"zpp_nape.util.ZNPList_ZPP_Shape.front","zpp_nape/util/Lists.hx",1387,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1388)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1388)
	::zpp_nape::shape::ZPP_Shape tmp1 = tmp->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1388)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,front,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","back",0xcb75e609,"zpp_nape.util.ZNPList_ZPP_Shape.back","zpp_nape/util/Lists.hx",1390,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1391)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1391)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1392)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1393)
	while((true)){
		HX_STACK_LINE(1393)
		bool tmp1 = (cur != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1393)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1393)
		if ((tmp2)){
			HX_STACK_LINE(1393)
			break;
		}
		HX_STACK_LINE(1394)
		ret = cur;
		HX_STACK_LINE(1395)
		cur = cur->next;
	}
	HX_STACK_LINE(1397)
	::zpp_nape::shape::ZPP_Shape tmp1 = ret->elt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1397)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","iterator_at",0x6c7d9e42,"zpp_nape.util.ZNPList_ZPP_Shape.iterator_at","zpp_nape/util/Lists.hx",1399,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1408)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp = this->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1408)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1409)
	while((true)){
		HX_STACK_LINE(1409)
		int tmp1 = (ind)--;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1409)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1409)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1409)
		if ((tmp2)){
			HX_STACK_LINE(1409)
			tmp3 = (ret != null());
		}
		else{
			HX_STACK_LINE(1409)
			tmp3 = false;
		}
		HX_STACK_LINE(1409)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1409)
		if ((tmp4)){
			HX_STACK_LINE(1409)
			break;
		}
		HX_STACK_LINE(1409)
		ret = ret->next;
	}
	HX_STACK_LINE(1410)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1410)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","at",0x24c14455,"zpp_nape.util.ZNPList_ZPP_Shape.at","zpp_nape/util/Lists.hx",1412,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1421)
	int tmp = ind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1421)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = this->iterator_at(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1421)
	::zpp_nape::util::ZNPNode_ZPP_Shape it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1422)
	bool tmp2 = (it != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1422)
	::zpp_nape::shape::ZPP_Shape tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1422)
	if ((tmp2)){
		HX_STACK_LINE(1422)
		tmp3 = it->elt;
	}
	else{
		HX_STACK_LINE(1422)
		tmp3 = null();
	}
	HX_STACK_LINE(1422)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,at,return )


ZNPList_ZPP_Shape_obj::ZNPList_ZPP_Shape_obj()
{
}

void ZNPList_ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Shape);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPList_ZPP_Shape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZNPList_ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Shape*/ ,(int)offsetof(ZNPList_ZPP_Shape_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Shape_obj,modified),HX_HCSTRING("modified","\x49","\xdb","\xc7","\x16")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Shape_obj,pushmod),HX_HCSTRING("pushmod","\x28","\x29","\x4b","\x75")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Shape_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

#endif

hx::Class ZNPList_ZPP_Shape_obj::__mClass;

void ZNPList_ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPList_ZPP_Shape","\xcc","\xdf","\x8e","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZNPList_ZPP_Shape_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPList_ZPP_Shape_obj >;
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
} // end namespace util
