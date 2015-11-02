#include <hxcpp.h>

#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_control_TextAlign
#include <control/TextAlign.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontStyle
#include <kha/FontStyle.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#include <kha/graphics2/GraphicsExtension.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif

Void Render_obj::__construct()
{
	return null();
}

//Render_obj::~Render_obj() { }

Dynamic Render_obj::__CreateEmpty() { return  new Render_obj; }
hx::ObjectPtr< Render_obj > Render_obj::__new()
{  hx::ObjectPtr< Render_obj > _result_ = new Render_obj();
	_result_->__construct();
	return _result_;}

Dynamic Render_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Render_obj > _result_ = new Render_obj();
	_result_->__construct();
	return _result_;}

Void Render_obj::renderPrim( ::kha::graphics2::Graphics gr,::control::DrawPrim prim){
{
		HX_STACK_FRAME("Render","renderPrim",0x737d0ad4,"Render.renderPrim","Render.hx",21,0x6f19f108)
		HX_STACK_ARG(gr,"gr")
		HX_STACK_ARG(prim,"prim")
		HX_STACK_LINE(21)
		switch( (int)(prim->__Index())){
			case (int)0: {
				HX_STACK_LINE(21)
				int tmp = (::control::DrawPrim(prim))->__Param(3);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				int a = tmp;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(21)
				int tmp1 = (::control::DrawPrim(prim))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				int b = tmp1;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(21)
				int tmp2 = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(21)
				int g = tmp2;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(21)
				int tmp3 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(21)
				int r = tmp3;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(23)
				{
					HX_STACK_LINE(24)
					int tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(24)
					int tmp5 = g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					int tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(24)
					int tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(24)
					int tmp8 = ::kha::_Color::Color_Impl__obj::fromBytes(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(24)
					gr->set_color(tmp8);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(21)
				int tmp = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				int size = tmp;		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(21)
				::String tmp1 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				::String name = tmp1;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(27)
				{
					HX_STACK_LINE(28)
					::kha::Loader tmp2 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(29)
					::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(29)
					::kha::FontStyle tmp4 = ::kha::FontStyle_obj::__new(false,false,false);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(29)
					int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(28)
					::kha::Font tmp6 = tmp2->loadFont(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(28)
					gr->set_font(tmp6);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(21)
				Float tmp = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				Float radius = tmp;		HX_STACK_VAR(radius,"radius");
				HX_STACK_LINE(21)
				::util::Vector tmp1 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				::util::Vector pos = tmp1;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(34)
					::kha::graphics2::Graphics tmp2 = gr;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(34)
					Float tmp3 = pos->x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(34)
					Float tmp4 = pos->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(34)
					Float tmp5 = radius;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(34)
					::kha::graphics2::GraphicsExtension_obj::fillCircle(tmp2,tmp3,tmp4,tmp5,null());
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(21)
				::util::Vector tmp = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				::util::Vector bottomRight = tmp;		HX_STACK_VAR(bottomRight,"bottomRight");
				HX_STACK_LINE(21)
				::util::Vector tmp1 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				::util::Vector topLeft = tmp1;		HX_STACK_VAR(topLeft,"topLeft");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(38)
					Float tmp2 = (bottomRight->x - topLeft->x);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(38)
					Float width = tmp2;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(39)
					Float tmp3 = (bottomRight->y - topLeft->y);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(39)
					Float height = tmp3;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(43)
					Float tmp4 = topLeft->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(43)
					Float tmp5 = topLeft->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					Float tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(43)
					Float tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					gr->fillRect(tmp4,tmp5,tmp6,tmp7);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(21)
				::String tmp = (::control::DrawPrim(prim))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				::String text = tmp;		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(21)
				::control::TextAlign tmp1 = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				::control::TextAlign align = tmp1;		HX_STACK_VAR(align,"align");
				HX_STACK_LINE(21)
				::util::Vector tmp2 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(21)
				::util::Vector pos = tmp2;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(47)
					Float xPos = pos->x;		HX_STACK_VAR(xPos,"xPos");
					HX_STACK_LINE(48)
					Float textWidth;		HX_STACK_VAR(textWidth,"textWidth");
					HX_STACK_LINE(49)
					switch( (int)(align->__Index())){
						case (int)0: {
							HX_STACK_LINE(51)
							::kha::Font tmp3 = gr->get_font();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(51)
							::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(51)
							Float tmp5 = tmp3->stringWidth(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(51)
							textWidth = tmp5;
							HX_STACK_LINE(52)
							Float tmp6 = (Float(textWidth) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(52)
							hx::SubEq(xPos,tmp6);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(55)
							::kha::Font tmp3 = gr->get_font();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(55)
							::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(55)
							Float tmp5 = tmp3->stringWidth(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(55)
							textWidth = tmp5;
							HX_STACK_LINE(56)
							hx::AddEq(xPos,textWidth);
						}
						;break;
						default: {
						}
					}
					HX_STACK_LINE(60)
					::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(60)
					Float tmp4 = xPos;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					Float tmp5 = pos->y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					gr->drawString(tmp3,tmp4,tmp5);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(21)
				::String tmp = (::control::DrawPrim(prim))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				::String image = tmp;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(21)
				::util::Vector tmp1 = (::control::DrawPrim(prim))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				::util::Vector pos = tmp1;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(65)
					::kha::Loader tmp2 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(65)
					::String tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(65)
					::kha::Image tmp4 = tmp2->getImage(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					::kha::Image image1 = tmp4;		HX_STACK_VAR(image1,"image1");
					HX_STACK_LINE(66)
					::kha::Image tmp5 = image1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					Float tmp6 = pos->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					Float tmp7 = pos->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					gr->drawImage(tmp5,tmp6,tmp7);
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Render_obj,renderPrim,(void))

int Render_obj::renderNoInit( ::util::Transform pTrans,Float pOpacity,::kha::graphics2::Graphics g,::control::Scene scene){
	HX_STACK_FRAME("Render","renderNoInit",0x78e43bdf,"Render.renderNoInit","Render.hx",76,0x6f19f108)
	HX_STACK_ARG(pTrans,"pTrans")
	HX_STACK_ARG(pOpacity,"pOpacity")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(77)
	int tmp = scene->prims->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int prims = tmp;		HX_STACK_VAR(prims,"prims");
	HX_STACK_LINE(79)
	::util::Transform tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::util::Transform m = scene->trans;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(79)
		Float tmp2 = (pTrans->_00 * m->_00);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		Float tmp3 = (pTrans->_10 * m->_01);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		Float tmp5 = (pTrans->_20 * m->_02);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		Float tmp7 = (pTrans->_00 * m->_10);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		Float tmp8 = (pTrans->_10 * m->_11);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		Float tmp10 = (pTrans->_20 * m->_12);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		Float tmp12 = (pTrans->_00 * m->_20);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		Float tmp13 = (pTrans->_10 * m->_21);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		Float tmp15 = (pTrans->_20 * m->_22);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(79)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(79)
		Float tmp17 = (pTrans->_01 * m->_00);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		Float tmp18 = (pTrans->_11 * m->_01);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		Float tmp20 = (pTrans->_21 * m->_02);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(79)
		Float tmp22 = (pTrans->_01 * m->_10);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(79)
		Float tmp23 = (pTrans->_11 * m->_11);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(79)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(79)
		Float tmp25 = (pTrans->_21 * m->_12);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(79)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(79)
		Float tmp27 = (pTrans->_01 * m->_20);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(79)
		Float tmp28 = (pTrans->_11 * m->_21);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(79)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(79)
		Float tmp30 = (pTrans->_21 * m->_22);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(79)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(79)
		Float tmp32 = (pTrans->_02 * m->_00);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(79)
		Float tmp33 = (pTrans->_12 * m->_01);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(79)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(79)
		Float tmp35 = (pTrans->_22 * m->_02);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(79)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(79)
		Float tmp37 = (pTrans->_02 * m->_10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(79)
		Float tmp38 = (pTrans->_12 * m->_11);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(79)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(79)
		Float tmp40 = (pTrans->_22 * m->_12);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(79)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(79)
		Float tmp42 = (pTrans->_02 * m->_20);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(79)
		Float tmp43 = (pTrans->_12 * m->_21);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(79)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(79)
		Float tmp45 = (pTrans->_22 * m->_22);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(79)
		Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(79)
		tmp1 = ::util::Transform_obj::__new(tmp6,tmp11,tmp16,tmp21,tmp26,tmp31,tmp36,tmp41,tmp46);
	}
	HX_STACK_LINE(79)
	::util::Transform resultTrans = tmp1;		HX_STACK_VAR(resultTrans,"resultTrans");
	HX_STACK_LINE(80)
	Float tmp2 = (pOpacity * scene->alpha);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	Float resultOpacity = tmp2;		HX_STACK_VAR(resultOpacity,"resultOpacity");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::util::Transform tmp3 = resultTrans;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::kha::math::FastMatrix3 tmp4 = ::Render_obj::matrixFromTrans(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::kha::math::FastMatrix3 transformation = tmp4;		HX_STACK_VAR(transformation,"transformation");
		HX_STACK_LINE(82)
		::kha::math::FastMatrix3 tmp5 = transformation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		g->setTransformation(tmp5);
		HX_STACK_LINE(82)
		Array< ::Dynamic > tmp6 = g->transformations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		int tmp7 = g->transformations->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::kha::math::FastMatrix3 tmp9 = transformation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		tmp6[tmp8] = tmp9;
	}
	HX_STACK_LINE(83)
	Float tmp3 = resultOpacity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	g->set_opacity(tmp3);
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g1 = scene->prims;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			if ((tmp5)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			::control::DrawPrim tmp6 = _g1->__get(_g).StaticCast< ::control::DrawPrim >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			::control::DrawPrim prim = tmp6;		HX_STACK_VAR(prim,"prim");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(85)
			::kha::graphics2::Graphics tmp7 = g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			::control::DrawPrim tmp8 = prim;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			::Render_obj::renderPrim(tmp7,tmp8);
		}
	}
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		Array< ::Dynamic > _g1 = scene->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			if ((tmp5)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			::control::Scene tmp6 = _g1->__get(_g).StaticCast< ::control::Scene >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			::control::Scene child = tmp6;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(87)
			++(_g);
			HX_STACK_LINE(88)
			::util::Transform tmp7 = resultTrans;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			Float tmp8 = resultOpacity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			::kha::graphics2::Graphics tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			::control::Scene tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			int tmp11 = ::Render_obj::renderNoInit(tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			hx::AddEq(prims,tmp11);
		}
	}
	HX_STACK_LINE(91)
	int tmp4 = prims;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Render_obj,renderNoInit,return )

int Render_obj::render( ::kha::graphics2::Graphics g,::control::Scene scene){
	HX_STACK_FRAME("Render","render",0xf4915d4e,"Render.render","Render.hx",94,0x6f19f108)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(scene,"scene")
	HX_STACK_LINE(95)
	g->begin(true,(int)16777215);
	HX_STACK_LINE(96)
	::util::Transform tmp = ::util::Transform_obj::__new((int)1,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::kha::graphics2::Graphics tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::control::Scene tmp2 = scene;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	int tmp3 = ::Render_obj::renderNoInit(tmp,(int)1,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	int prims = tmp3;		HX_STACK_VAR(prims,"prims");
	HX_STACK_LINE(97)
	g->end();
	HX_STACK_LINE(98)
	int tmp4 = prims;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Render_obj,render,return )

::kha::math::FastMatrix3 Render_obj::matrixFromTrans( ::util::Transform trans){
	HX_STACK_FRAME("Render","matrixFromTrans",0x4e9aeae5,"Render.matrixFromTrans","Render.hx",102,0x6f19f108)
	HX_STACK_ARG(trans,"trans")
	HX_STACK_LINE(103)
	::kha::math::FastMatrix3 tmp = ::kha::math::FastMatrix3_obj::__new(trans->_00,trans->_10,trans->_20,trans->_01,trans->_11,trans->_21,trans->_02,trans->_12,trans->_22);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Render_obj,matrixFromTrans,return )


Render_obj::Render_obj()
{
}

bool Render_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderPrim") ) { outValue = renderPrim_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderNoInit") ) { outValue = renderNoInit_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"matrixFromTrans") ) { outValue = matrixFromTrans_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Render_obj::__mClass,"__mClass");
};

#endif

hx::Class Render_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("renderPrim","\xdc","\xbc","\x68","\xe7"),
	HX_HCSTRING("renderNoInit","\xe7","\x7f","\xa6","\x84"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("matrixFromTrans","\xdd","\xdb","\xe4","\x7f"),
	::String(null()) };

void Render_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Render","\x76","\xdf","\xbd","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Render_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Render_obj >;
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

