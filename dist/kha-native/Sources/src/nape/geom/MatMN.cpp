#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace nape{
namespace geom{

Void MatMN_obj::__construct(int rows,int cols)
{
HX_STACK_FRAME("nape.geom.MatMN","new",0x580e1be7,"nape.geom.MatMN.new","nape/geom/MatMN.hx",179,0x8baed9c9)
HX_STACK_THIS(this)
HX_STACK_ARG(rows,"rows")
HX_STACK_ARG(cols,"cols")
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(248)
	bool tmp = (rows <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	if ((tmp1)){
		HX_STACK_LINE(248)
		tmp2 = (cols <= (int)0);
	}
	else{
		HX_STACK_LINE(248)
		tmp2 = true;
	}
	HX_STACK_LINE(248)
	if ((tmp2)){
		HX_STACK_LINE(249)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN::dimensions cannot be < 1","\x2d","\xf2","\x70","\x4e"));
	}
	HX_STACK_LINE(252)
	::zpp_nape::geom::ZPP_MatMN tmp3 = ::zpp_nape::geom::ZPP_MatMN_obj::__new(rows,cols);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	this->zpp_inner = tmp3;
	HX_STACK_LINE(253)
	::zpp_nape::geom::ZPP_MatMN tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(253)
	tmp4->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//MatMN_obj::~MatMN_obj() { }

Dynamic MatMN_obj::__CreateEmpty() { return  new MatMN_obj; }
hx::ObjectPtr< MatMN_obj > MatMN_obj::__new(int rows,int cols)
{  hx::ObjectPtr< MatMN_obj > _result_ = new MatMN_obj();
	_result_->__construct(rows,cols);
	return _result_;}

Dynamic MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatMN_obj > _result_ = new MatMN_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int MatMN_obj::get_rows( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_rows",0xefad3bbb,"nape.geom.MatMN.get_rows","nape/geom/MatMN.hx",189,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = tmp->m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_rows,return )

int MatMN_obj::get_cols( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_cols",0xe5c2fed5,"nape.geom.MatMN.get_cols","nape/geom/MatMN.hx",197,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = tmp->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_cols,return )

Float MatMN_obj::x( int row,int col){
	HX_STACK_FRAME("nape.geom.MatMN","x",0x4f2a8c3f,"nape.geom.MatMN.x","nape/geom/MatMN.hx",209,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_LINE(211)
	bool tmp = (row < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	if ((tmp2)){
		HX_STACK_LINE(211)
		tmp3 = (col < (int)0);
	}
	else{
		HX_STACK_LINE(211)
		tmp3 = true;
	}
	HX_STACK_LINE(211)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	if ((tmp5)){
		HX_STACK_LINE(211)
		int tmp7 = row;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_MatMN tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_MatMN tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_MatMN tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		int tmp11 = tmp10->m;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		tmp6 = (tmp7 >= tmp11);
	}
	else{
		HX_STACK_LINE(211)
		tmp6 = true;
	}
	HX_STACK_LINE(211)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(211)
	if ((tmp7)){
		HX_STACK_LINE(211)
		int tmp9 = col;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_MatMN tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		::zpp_nape::geom::ZPP_MatMN tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		int tmp12 = tmp11->n;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		tmp8 = (tmp9 >= tmp12);
	}
	else{
		HX_STACK_LINE(211)
		tmp8 = true;
	}
	HX_STACK_LINE(211)
	if ((tmp8)){
		HX_STACK_LINE(212)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
	}
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_MatMN tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	Array< Float > tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(215)
	int tmp11 = row;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_MatMN tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(215)
	int tmp13 = tmp12->n;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(215)
	int tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(215)
	int tmp15 = col;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(215)
	int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(215)
	Float tmp17 = tmp10->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(215)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC2(MatMN_obj,x,return )

Float MatMN_obj::setx( int row,int col,Float x){
	HX_STACK_FRAME("nape.geom.MatMN","setx",0xb7985d2f,"nape.geom.MatMN.setx","nape/geom/MatMN.hx",228,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(230)
	bool tmp = (row < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(230)
		tmp3 = (col < (int)0);
	}
	else{
		HX_STACK_LINE(230)
		tmp3 = true;
	}
	HX_STACK_LINE(230)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(230)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(230)
	if ((tmp5)){
		HX_STACK_LINE(230)
		int tmp7 = row;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		::zpp_nape::geom::ZPP_MatMN tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		::zpp_nape::geom::ZPP_MatMN tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		::zpp_nape::geom::ZPP_MatMN tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		int tmp11 = tmp10->m;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		tmp6 = (tmp7 >= tmp11);
	}
	else{
		HX_STACK_LINE(230)
		tmp6 = true;
	}
	HX_STACK_LINE(230)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(230)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(230)
	if ((tmp7)){
		HX_STACK_LINE(230)
		int tmp9 = col;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		::zpp_nape::geom::ZPP_MatMN tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		::zpp_nape::geom::ZPP_MatMN tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		int tmp12 = tmp11->n;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		tmp8 = (tmp9 >= tmp12);
	}
	else{
		HX_STACK_LINE(230)
		tmp8 = true;
	}
	HX_STACK_LINE(230)
	if ((tmp8)){
		HX_STACK_LINE(231)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
	}
	HX_STACK_LINE(234)
	::zpp_nape::geom::ZPP_MatMN tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(234)
	Array< Float > tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(234)
	int tmp11 = row;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(234)
	::zpp_nape::geom::ZPP_MatMN tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(234)
	int tmp13 = tmp12->n;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(234)
	int tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(234)
	int tmp15 = col;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(234)
	int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(234)
	Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(234)
	Float tmp18 = tmp10[tmp16] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(234)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC3(MatMN_obj,setx,return )

::String MatMN_obj::toString( ){
	HX_STACK_FRAME("nape.geom.MatMN","toString",0x5cb25bc5,"nape.geom.MatMN.toString","nape/geom/MatMN.hx",258,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::String ret = HX_HCSTRING("{ ","\x45","\x6b","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		int _g = tmp->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			if ((tmp2)){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(261)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
				HX_STACK_LINE(262)
				hx::AddEq(ret,HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));
			}
			HX_STACK_LINE(263)
			fst = false;
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(264)
				::zpp_nape::geom::ZPP_MatMN tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				int _g2 = tmp6->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(264)
				while((true)){
					HX_STACK_LINE(264)
					bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(264)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					if ((tmp8)){
						HX_STACK_LINE(264)
						break;
					}
					HX_STACK_LINE(264)
					int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					int j = tmp9;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(264)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						bool tmp11 = (i < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(264)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(264)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(264)
						if ((tmp13)){
							HX_STACK_LINE(264)
							tmp14 = (j < (int)0);
						}
						else{
							HX_STACK_LINE(264)
							tmp14 = true;
						}
						HX_STACK_LINE(264)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(264)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(264)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(264)
						if ((tmp16)){
							HX_STACK_LINE(264)
							int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_MatMN tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_MatMN tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_MatMN tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(264)
							int tmp22 = tmp21->m;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(264)
							tmp17 = (tmp18 >= tmp22);
						}
						else{
							HX_STACK_LINE(264)
							tmp17 = true;
						}
						HX_STACK_LINE(264)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(264)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(264)
						if ((tmp18)){
							HX_STACK_LINE(264)
							int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_MatMN tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_MatMN tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(264)
							int tmp23 = tmp22->n;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(264)
							tmp19 = (tmp20 >= tmp23);
						}
						else{
							HX_STACK_LINE(264)
							tmp19 = true;
						}
						HX_STACK_LINE(264)
						if ((tmp19)){
							HX_STACK_LINE(264)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
						}
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_MatMN tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(264)
						Array< Float > tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(264)
						int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_MatMN tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(264)
						int tmp24 = tmp23->n;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(264)
						int tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(264)
						int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(264)
						int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(264)
						tmp10 = tmp21->__get(tmp27);
					}
					HX_STACK_LINE(264)
					::String tmp11 = (tmp10 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(264)
					hx::AddEq(ret,tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(266)
	hx::AddEq(ret,HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(267)
	::String tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,toString,return )

::nape::geom::MatMN MatMN_obj::transpose( ){
	HX_STACK_FRAME("nape.geom.MatMN","transpose",0xe3057b40,"nape.geom.MatMN.transpose","nape/geom/MatMN.hx",274,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	int tmp1 = tmp->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	::zpp_nape::geom::ZPP_MatMN tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	int tmp3 = tmp2->m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(tmp1,tmp3);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		::zpp_nape::geom::ZPP_MatMN tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		int _g = tmp4->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			if ((tmp6)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(277)
				::zpp_nape::geom::ZPP_MatMN tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(277)
				int _g2 = tmp8->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(277)
				while((true)){
					HX_STACK_LINE(277)
					bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					if ((tmp10)){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(277)
					int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(277)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(277)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						bool tmp13 = (i < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(277)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(277)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(277)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(277)
						if ((tmp15)){
							HX_STACK_LINE(277)
							tmp16 = (j < (int)0);
						}
						else{
							HX_STACK_LINE(277)
							tmp16 = true;
						}
						HX_STACK_LINE(277)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(277)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(277)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(277)
						if ((tmp18)){
							HX_STACK_LINE(277)
							int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_MatMN tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_MatMN tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_MatMN tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(277)
							int tmp24 = tmp23->m;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(277)
							tmp19 = (tmp20 >= tmp24);
						}
						else{
							HX_STACK_LINE(277)
							tmp19 = true;
						}
						HX_STACK_LINE(277)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(277)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(277)
						if ((tmp20)){
							HX_STACK_LINE(277)
							int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_MatMN tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_MatMN tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(277)
							int tmp25 = tmp24->n;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(277)
							tmp21 = (tmp22 >= tmp25);
						}
						else{
							HX_STACK_LINE(277)
							tmp21 = true;
						}
						HX_STACK_LINE(277)
						if ((tmp21)){
							HX_STACK_LINE(277)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
						}
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_MatMN tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(277)
						Array< Float > tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(277)
						int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_MatMN tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(277)
						int tmp26 = tmp25->n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(277)
						int tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(277)
						int tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(277)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(277)
						tmp12 = tmp23->__get(tmp29);
					}
					HX_STACK_LINE(277)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(277)
					bool tmp13 = (j < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(277)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(277)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(277)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(277)
					if ((tmp15)){
						HX_STACK_LINE(277)
						tmp16 = (i < (int)0);
					}
					else{
						HX_STACK_LINE(277)
						tmp16 = true;
					}
					HX_STACK_LINE(277)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(277)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(277)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(277)
					if ((tmp18)){
						HX_STACK_LINE(277)
						int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(277)
						int tmp21 = ret->zpp_inner->m;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(277)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(277)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(277)
						tmp19 = (tmp20 >= tmp23);
					}
					else{
						HX_STACK_LINE(277)
						tmp19 = true;
					}
					HX_STACK_LINE(277)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(277)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(277)
					if ((tmp20)){
						HX_STACK_LINE(277)
						int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(277)
						int tmp23 = ret->zpp_inner->n;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(277)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(277)
						tmp21 = (tmp22 >= tmp24);
					}
					else{
						HX_STACK_LINE(277)
						tmp21 = true;
					}
					HX_STACK_LINE(277)
					if ((tmp21)){
						HX_STACK_LINE(277)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
					}
					HX_STACK_LINE(277)
					Array< Float > tmp22 = ret->zpp_inner->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(277)
					int tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(277)
					int tmp24 = ret->zpp_inner->n;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(277)
					int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(277)
					int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(277)
					int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(277)
					Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(277)
					tmp22[tmp27] = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(279)
	::nape::geom::MatMN tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,transpose,return )

::nape::geom::MatMN MatMN_obj::mul( ::nape::geom::MatMN matrix){
	HX_STACK_FRAME("nape.geom.MatMN","mul",0x580d678b,"nape.geom.MatMN.mul","nape/geom/MatMN.hx",294,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(295)
	::nape::geom::MatMN y = matrix;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(297)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	int tmp1 = tmp->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	int tmp2 = y->zpp_inner->m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	if ((tmp3)){
		HX_STACK_LINE(298)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Matrix dimensions aren't compatible","\x4b","\xcb","\x42","\x4d"));
	}
	HX_STACK_LINE(301)
	::zpp_nape::geom::ZPP_MatMN tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(301)
	int tmp5 = tmp4->m;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(301)
	int tmp6 = y->zpp_inner->n;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(301)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(tmp5,tmp6);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		::zpp_nape::geom::ZPP_MatMN tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		int _g = tmp7->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(302)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(302)
			if ((tmp9)){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(302)
			int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(302)
			int i = tmp10;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(303)
				int tmp11 = y->zpp_inner->n;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				int _g2 = tmp11;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(303)
				while((true)){
					HX_STACK_LINE(303)
					bool tmp12 = (_g3 < _g2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(303)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(303)
					if ((tmp13)){
						HX_STACK_LINE(303)
						break;
					}
					HX_STACK_LINE(303)
					int tmp14 = (_g3)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(303)
					int j = tmp14;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(304)
					Float v = ((Float)0.0);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_MatMN tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(305)
						int _g4 = tmp15->n;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							bool tmp16 = (_g5 < _g4);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(305)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(305)
							if ((tmp17)){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							int tmp18 = (_g5)++;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(305)
							int k = tmp18;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(305)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								bool tmp20 = (i < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(305)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(305)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(305)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(305)
								if ((tmp22)){
									HX_STACK_LINE(305)
									tmp23 = (k < (int)0);
								}
								else{
									HX_STACK_LINE(305)
									tmp23 = true;
								}
								HX_STACK_LINE(305)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(305)
								bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(305)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(305)
								if ((tmp25)){
									HX_STACK_LINE(305)
									int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_MatMN tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_MatMN tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_MatMN tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(305)
									int tmp31 = tmp30->m;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(305)
									tmp26 = (tmp27 >= tmp31);
								}
								else{
									HX_STACK_LINE(305)
									tmp26 = true;
								}
								HX_STACK_LINE(305)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(305)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(305)
								if ((tmp27)){
									HX_STACK_LINE(305)
									int tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_MatMN tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_MatMN tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(305)
									int tmp32 = tmp31->n;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(305)
									tmp28 = (tmp29 >= tmp32);
								}
								else{
									HX_STACK_LINE(305)
									tmp28 = true;
								}
								HX_STACK_LINE(305)
								if ((tmp28)){
									HX_STACK_LINE(305)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
								}
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_MatMN tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(305)
								Array< Float > tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(305)
								int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_MatMN tmp32 = this->zpp_inner;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(305)
								int tmp33 = tmp32->n;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(305)
								int tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(305)
								int tmp35 = k;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(305)
								int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(305)
								tmp19 = tmp30->__get(tmp36);
							}
							HX_STACK_LINE(305)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								bool tmp21 = (k < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(305)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(305)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(305)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(305)
								if ((tmp23)){
									HX_STACK_LINE(305)
									tmp24 = (j < (int)0);
								}
								else{
									HX_STACK_LINE(305)
									tmp24 = true;
								}
								HX_STACK_LINE(305)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(305)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(305)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(305)
								if ((tmp26)){
									HX_STACK_LINE(305)
									int tmp28 = k;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(305)
									int tmp29 = y->zpp_inner->m;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(305)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(305)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(305)
									tmp27 = (tmp28 >= tmp31);
								}
								else{
									HX_STACK_LINE(305)
									tmp27 = true;
								}
								HX_STACK_LINE(305)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(305)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(305)
								if ((tmp28)){
									HX_STACK_LINE(305)
									int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(305)
									int tmp31 = y->zpp_inner->n;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(305)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(305)
									tmp29 = (tmp30 >= tmp32);
								}
								else{
									HX_STACK_LINE(305)
									tmp29 = true;
								}
								HX_STACK_LINE(305)
								if ((tmp29)){
									HX_STACK_LINE(305)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
								}
								HX_STACK_LINE(305)
								Array< Float > tmp30 = y->zpp_inner->x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(305)
								int tmp31 = k;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(305)
								int tmp32 = y->zpp_inner->n;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(305)
								int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(305)
								int tmp34 = j;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(305)
								int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(305)
								tmp20 = tmp30->__get(tmp35);
							}
							HX_STACK_LINE(305)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(305)
							hx::AddEq(v,tmp21);
						}
					}
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						bool tmp15 = (i < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(306)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(306)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(306)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(306)
						if ((tmp17)){
							HX_STACK_LINE(306)
							tmp18 = (j < (int)0);
						}
						else{
							HX_STACK_LINE(306)
							tmp18 = true;
						}
						HX_STACK_LINE(306)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(306)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(306)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(306)
						if ((tmp20)){
							HX_STACK_LINE(306)
							int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(306)
							int tmp23 = ret->zpp_inner->m;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(306)
							int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(306)
							int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(306)
							tmp21 = (tmp22 >= tmp25);
						}
						else{
							HX_STACK_LINE(306)
							tmp21 = true;
						}
						HX_STACK_LINE(306)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(306)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(306)
						if ((tmp22)){
							HX_STACK_LINE(306)
							int tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(306)
							int tmp25 = ret->zpp_inner->n;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(306)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(306)
							tmp23 = (tmp24 >= tmp26);
						}
						else{
							HX_STACK_LINE(306)
							tmp23 = true;
						}
						HX_STACK_LINE(306)
						if ((tmp23)){
							HX_STACK_LINE(306)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
						}
						HX_STACK_LINE(306)
						Array< Float > tmp24 = ret->zpp_inner->x;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(306)
						int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(306)
						int tmp26 = ret->zpp_inner->n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(306)
						int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(306)
						int tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(306)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(306)
						Float tmp30 = v;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(306)
						tmp24[tmp29] = tmp30;
					}
				}
			}
		}
	}
	HX_STACK_LINE(309)
	::nape::geom::MatMN tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(309)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(MatMN_obj,mul,return )


MatMN_obj::MatMN_obj()
{
}

void MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatMN);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic MatMN_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return get_rows(); }
		if (HX_FIELD_EQ(inName,"cols") ) { if (inCallProp == hx::paccAlways) return get_cols(); }
		if (HX_FIELD_EQ(inName,"setx") ) { return setx_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return get_cols_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MatMN_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("cols","\x33","\xb8","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MatMN*/ ,(int)offsetof(MatMN_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("get_cols","\xbc","\x73","\x7f","\xc1"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("setx","\x96","\x92","\x50","\x4c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#endif

hx::Class MatMN_obj::__mClass;

void MatMN_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.MatMN","\x75","\x9c","\xf2","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MatMN_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatMN_obj >;
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
