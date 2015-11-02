#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void FastHash2_Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","new",0x1bb1f814,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.new","zpp_nape/util/FastHash.hx",256,0x5d785189)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(258)
	this->cnt = (int)0;
	HX_STACK_LINE(257)
	this->table = null();
	HX_STACK_LINE(260)
	this->cnt = (int)0;
	HX_STACK_LINE(262)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	this->table = tmp;
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(263)
		int _g = (int)1048576;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			if ((tmp2)){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(263)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			Array< ::Dynamic > tmp4 = this->table;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			tmp4->push(null());
		}
	}
}
;
	return null();
}

//FastHash2_Hashable2_Boolfalse_obj::~FastHash2_Hashable2_Boolfalse_obj() { }

Dynamic FastHash2_Hashable2_Boolfalse_obj::__CreateEmpty() { return  new FastHash2_Hashable2_Boolfalse_obj; }
hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > FastHash2_Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > _result_ = new FastHash2_Hashable2_Boolfalse_obj();
	_result_->__construct();
	return _result_;}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > _result_ = new FastHash2_Hashable2_Boolfalse_obj();
	_result_->__construct();
	return _result_;}

bool FastHash2_Hashable2_Boolfalse_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","empty",0xbcd8b741,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.empty","zpp_nape/util/FastHash.hx",268,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	int tmp = this->cnt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,empty,return )

Void FastHash2_Hashable2_Boolfalse_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","clear",0x9559ee41,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.clear","zpp_nape/util/FastHash.hx",273,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(273)
		Array< ::Dynamic > tmp = this->table;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		while((true)){
			HX_STACK_LINE(273)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			if ((tmp2)){
				HX_STACK_LINE(273)
				break;
			}
			HX_STACK_LINE(273)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(274)
			Array< ::Dynamic > tmp4 = this->table;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			::zpp_nape::util::Hashable2_Boolfalse tmp6 = tmp4->__get(tmp5).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			::zpp_nape::util::Hashable2_Boolfalse n = tmp6;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(275)
			bool tmp7 = (n == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			if ((tmp7)){
				HX_STACK_LINE(275)
				continue;
			}
			HX_STACK_LINE(276)
			while((true)){
				HX_STACK_LINE(276)
				bool tmp8 = (n != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(276)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(276)
				if ((tmp9)){
					HX_STACK_LINE(276)
					break;
				}
				HX_STACK_LINE(277)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(278)
				n->hnext = null();
				HX_STACK_LINE(279)
				n;
				HX_STACK_LINE(280)
				n = t;
			}
			HX_STACK_LINE(282)
			Array< ::Dynamic > tmp8 = this->table;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(282)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(282)
			tmp8[tmp9] = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,clear,(void))

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::get( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","get",0x1baca84a,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.get","zpp_nape/util/FastHash.hx",288,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(289)
	Array< ::Dynamic > tmp = this->table;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	int tmp1 = (id * (int)106039);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	int tmp2 = di;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	int tmp4 = (int(tmp3) & int((int)1048575));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(289)
	::zpp_nape::util::Hashable2_Boolfalse tmp5 = tmp->__get(tmp4).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(289)
	::zpp_nape::util::Hashable2_Boolfalse n = tmp5;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(290)
	bool tmp6 = (n == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(290)
	if ((tmp6)){
		HX_STACK_LINE(290)
		return null();
	}
	else{
		HX_STACK_LINE(291)
		bool tmp7 = (n->id == id);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(291)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		if ((tmp7)){
			HX_STACK_LINE(291)
			tmp8 = (n->di == di);
		}
		else{
			HX_STACK_LINE(291)
			tmp8 = false;
		}
		HX_STACK_LINE(291)
		if ((tmp8)){
			HX_STACK_LINE(291)
			::zpp_nape::util::Hashable2_Boolfalse tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			return tmp9;
		}
		else{
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				n = n->hnext;
				HX_STACK_LINE(293)
				bool tmp9 = (n != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(293)
				if ((tmp9)){
					HX_STACK_LINE(293)
					bool tmp11 = (n->id != id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(293)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(293)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(293)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(293)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(293)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(293)
					if ((tmp16)){
						HX_STACK_LINE(293)
						tmp10 = (n->di != di);
					}
					else{
						HX_STACK_LINE(293)
						tmp10 = true;
					}
				}
				else{
					HX_STACK_LINE(293)
					tmp10 = false;
				}
				HX_STACK_LINE(293)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				if ((tmp11)){
					HX_STACK_LINE(293)
					break;
				}
			}
			HX_STACK_LINE(294)
			::zpp_nape::util::Hashable2_Boolfalse tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			return tmp9;
		}
	}
	HX_STACK_LINE(290)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,get,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::ordered_get( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","ordered_get",0xf4af0438,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.ordered_get","zpp_nape/util/FastHash.hx",299,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(300)
	bool tmp = (id > di);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	if ((tmp)){
		HX_STACK_LINE(301)
		int t = id;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(302)
		id = di;
		HX_STACK_LINE(303)
		di = t;
	}
	HX_STACK_LINE(305)
	::zpp_nape::util::Hashable2_Boolfalse tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		Array< ::Dynamic > tmp2 = this->table;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		int tmp3 = (id * (int)106039);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		int tmp4 = di;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		int tmp6 = (int(tmp5) & int((int)1048575));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(305)
		::zpp_nape::util::Hashable2_Boolfalse tmp7 = tmp2->__get(tmp6).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(305)
		::zpp_nape::util::Hashable2_Boolfalse n = tmp7;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(305)
		bool tmp8 = (n == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(305)
		if ((tmp8)){
			HX_STACK_LINE(305)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(305)
			bool tmp9 = (n->id == id);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(305)
			if ((tmp9)){
				HX_STACK_LINE(305)
				tmp10 = (n->di == di);
			}
			else{
				HX_STACK_LINE(305)
				tmp10 = false;
			}
			HX_STACK_LINE(305)
			if ((tmp10)){
				HX_STACK_LINE(305)
				tmp1 = n;
			}
			else{
				HX_STACK_LINE(305)
				while((true)){
					HX_STACK_LINE(305)
					n = n->hnext;
					HX_STACK_LINE(305)
					bool tmp11 = (n != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(305)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(305)
					if ((tmp11)){
						HX_STACK_LINE(305)
						bool tmp13 = (n->id != id);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(305)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(305)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(305)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(305)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(305)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(305)
						if ((tmp18)){
							HX_STACK_LINE(305)
							tmp12 = (n->di != di);
						}
						else{
							HX_STACK_LINE(305)
							tmp12 = true;
						}
					}
					else{
						HX_STACK_LINE(305)
						tmp12 = false;
					}
					HX_STACK_LINE(305)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(305)
					if ((tmp13)){
						HX_STACK_LINE(305)
						break;
					}
				}
				HX_STACK_LINE(305)
				tmp1 = n;
			}
		}
	}
	HX_STACK_LINE(305)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,ordered_get,return )

bool FastHash2_Hashable2_Boolfalse_obj::has( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","has",0x1bad670e,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.has","zpp_nape/util/FastHash.hx",307,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(308)
	Array< ::Dynamic > tmp = this->table;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	int tmp1 = (id * (int)106039);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	int tmp2 = di;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	int tmp4 = (int(tmp3) & int((int)1048575));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(308)
	::zpp_nape::util::Hashable2_Boolfalse tmp5 = tmp->__get(tmp4).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(308)
	::zpp_nape::util::Hashable2_Boolfalse n = tmp5;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(309)
	bool tmp6 = (n == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(309)
	if ((tmp6)){
		HX_STACK_LINE(309)
		return false;
	}
	else{
		HX_STACK_LINE(310)
		bool tmp7 = (n->id == id);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(310)
		if ((tmp7)){
			HX_STACK_LINE(310)
			tmp8 = (n->di == di);
		}
		else{
			HX_STACK_LINE(310)
			tmp8 = false;
		}
		HX_STACK_LINE(310)
		if ((tmp8)){
			HX_STACK_LINE(310)
			return true;
		}
		else{
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				n = n->hnext;
				HX_STACK_LINE(312)
				bool tmp9 = (n != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(312)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(312)
				if ((tmp9)){
					HX_STACK_LINE(312)
					bool tmp11 = (n->id != id);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(312)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(312)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(312)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(312)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(312)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(312)
					if ((tmp16)){
						HX_STACK_LINE(312)
						tmp10 = (n->di != di);
					}
					else{
						HX_STACK_LINE(312)
						tmp10 = true;
					}
				}
				else{
					HX_STACK_LINE(312)
					tmp10 = false;
				}
				HX_STACK_LINE(312)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				if ((tmp11)){
					HX_STACK_LINE(312)
					break;
				}
			}
			HX_STACK_LINE(313)
			bool tmp9 = (n != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(313)
			return tmp9;
		}
	}
	HX_STACK_LINE(309)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,has,return )

Void FastHash2_Hashable2_Boolfalse_obj::maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","maybeAdd",0x00b5bb25,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.maybeAdd","zpp_nape/util/FastHash.hx",316,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(325)
		int tmp = (arb->id * (int)106039);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		int tmp1 = arb->di;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		int tmp3 = (int(tmp2) & int((int)1048575));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(326)
		Array< ::Dynamic > tmp4 = this->table;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		::zpp_nape::util::Hashable2_Boolfalse tmp6 = tmp4->__get(tmp5).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(326)
		::zpp_nape::util::Hashable2_Boolfalse n = tmp6;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(327)
		bool cont = true;		HX_STACK_VAR(cont,"cont");
		HX_STACK_LINE(328)
		bool tmp7 = (n == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		if ((tmp7)){
			HX_STACK_LINE(329)
			Array< ::Dynamic > tmp8 = this->table;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(329)
			::zpp_nape::util::Hashable2_Boolfalse tmp10 = arb;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(329)
			tmp8[tmp9] = tmp10;
			HX_STACK_LINE(330)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(343)
			bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(343)
			if ((tmp8)){
				HX_STACK_LINE(344)
				arb->hnext = n->hnext;
				HX_STACK_LINE(345)
				n->hnext = arb;
			}
		}
		HX_STACK_LINE(348)
		bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(348)
		if ((tmp8)){
			HX_STACK_LINE(348)
			(this->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,maybeAdd,(void))

Void FastHash2_Hashable2_Boolfalse_obj::add( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","add",0x1ba819d5,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.add","zpp_nape/util/FastHash.hx",350,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(359)
		int tmp = (arb->id * (int)106039);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		int tmp1 = arb->di;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		int tmp3 = (int(tmp2) & int((int)1048575));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(360)
		Array< ::Dynamic > tmp4 = this->table;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		::zpp_nape::util::Hashable2_Boolfalse tmp6 = tmp4->__get(tmp5).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(360)
		::zpp_nape::util::Hashable2_Boolfalse n = tmp6;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(361)
		bool tmp7 = (n == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		if ((tmp7)){
			HX_STACK_LINE(362)
			Array< ::Dynamic > tmp8 = this->table;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(362)
			int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(362)
			::zpp_nape::util::Hashable2_Boolfalse tmp10 = arb;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(362)
			tmp8[tmp9] = tmp10;
			HX_STACK_LINE(363)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(373)
			arb->hnext = n->hnext;
			HX_STACK_LINE(374)
			n->hnext = arb;
		}
		HX_STACK_LINE(380)
		(this->cnt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,add,(void))

Void FastHash2_Hashable2_Boolfalse_obj::remove( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","remove",0x16373d10,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.remove","zpp_nape/util/FastHash.hx",382,0x5d785189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_LINE(391)
		int tmp = (arb->id * (int)106039);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		int tmp1 = arb->di;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		int tmp3 = (int(tmp2) & int((int)1048575));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(392)
		Array< ::Dynamic > tmp4 = this->table;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		::zpp_nape::util::Hashable2_Boolfalse tmp6 = tmp4->__get(tmp5).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		::zpp_nape::util::Hashable2_Boolfalse n = tmp6;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(393)
		bool tmp7 = (n == arb);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(393)
		if ((tmp7)){
			HX_STACK_LINE(393)
			Array< ::Dynamic > tmp8 = this->table;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(393)
			int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(393)
			::zpp_nape::util::Hashable2_Boolfalse tmp10 = n->hnext;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(393)
			tmp8[tmp9] = tmp10;
		}
		else{
			HX_STACK_LINE(394)
			bool tmp8 = (n != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(394)
			if ((tmp8)){
				HX_STACK_LINE(395)
				::zpp_nape::util::Hashable2_Boolfalse pre;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(396)
				while((true)){
					HX_STACK_LINE(397)
					pre = n;
					HX_STACK_LINE(398)
					n = n->hnext;
					HX_STACK_LINE(400)
					bool tmp9 = (n != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(400)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(400)
					if ((tmp9)){
						HX_STACK_LINE(400)
						tmp10 = (n != arb);
					}
					else{
						HX_STACK_LINE(400)
						tmp10 = false;
					}
					HX_STACK_LINE(400)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(396)
					if ((tmp11)){
						HX_STACK_LINE(396)
						break;
					}
				}
				HX_STACK_LINE(409)
				pre->hnext = n->hnext;
			}
		}
		HX_STACK_LINE(411)
		arb->hnext = null();
		HX_STACK_LINE(412)
		(this->cnt)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,remove,(void))

int FastHash2_Hashable2_Boolfalse_obj::hash( int id,int di){
	HX_STACK_FRAME("zpp_nape.util.FastHash2_Hashable2_Boolfalse","hash",0x1c0cc59a,"zpp_nape.util.FastHash2_Hashable2_Boolfalse.hash","zpp_nape/util/FastHash.hx",416,0x5d785189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(417)
	int tmp = (id * (int)106039);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	int tmp1 = di;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	int tmp3 = (int(tmp2) & int((int)1048575));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(417)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,hash,return )


FastHash2_Hashable2_Boolfalse_obj::FastHash2_Hashable2_Boolfalse_obj()
{
}

void FastHash2_Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastHash2_Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(table,"table");
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_END_CLASS();
}

void FastHash2_Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(table,"table");
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { return table; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maybeAdd") ) { return maybeAdd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { return ordered_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FastHash2_Hashable2_Boolfalse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FastHash2_Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"));
	outFields->push(HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FastHash2_Hashable2_Boolfalse_obj,table),HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a")},
	{hx::fsInt,(int)offsetof(FastHash2_Hashable2_Boolfalse_obj,cnt),HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),
	HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("ordered_get","\x84","\x08","\x94","\x32"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("maybeAdd","\x59","\x4f","\x84","\x2d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

#endif

hx::Class FastHash2_Hashable2_Boolfalse_obj::__mClass;

void FastHash2_Hashable2_Boolfalse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.FastHash2_Hashable2_Boolfalse","\x22","\x9e","\x2f","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FastHash2_Hashable2_Boolfalse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastHash2_Hashable2_Boolfalse_obj >;
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
