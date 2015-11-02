#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#include <kha/graphics2/GraphicsExtension.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
namespace kha{
namespace graphics2{

Void GraphicsExtension_obj::__construct()
{
	return null();
}

//GraphicsExtension_obj::~GraphicsExtension_obj() { }

Dynamic GraphicsExtension_obj::__CreateEmpty() { return  new GraphicsExtension_obj; }
hx::ObjectPtr< GraphicsExtension_obj > GraphicsExtension_obj::__new()
{  hx::ObjectPtr< GraphicsExtension_obj > _result_ = new GraphicsExtension_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsExtension_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsExtension_obj > _result_ = new GraphicsExtension_obj();
	_result_->__construct();
	return _result_;}

Void GraphicsExtension_obj::drawCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< Float >  __o_strength,hx::Null< int >  __o_segments){
Float strength = __o_strength.Default(1);
int segments = __o_segments.Default(0);
	HX_STACK_FRAME("kha.graphics2.GraphicsExtension","drawCircle",0x847c931f,"kha.graphics2.GraphicsExtension.drawCircle","kha/graphics2/GraphicsExtension.hx",18,0xb3e4f63d)
	HX_STACK_ARG(g2,"g2")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(strength,"strength")
	HX_STACK_ARG(segments,"segments")
{
		HX_STACK_LINE(19)
		bool tmp = (segments <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		if ((tmp)){
			HX_STACK_LINE(20)
			Float tmp1 = radius;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			Float tmp3 = ((int)10 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			segments = tmp4;
		}
		HX_STACK_LINE(22)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		Float tmp2 = ((int)2 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		int tmp3 = segments;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		Float theta = tmp4;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(23)
		Float tmp5 = theta;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(24)
		Float tmp7 = theta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		Float s = tmp8;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(26)
		Float x = radius;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(27)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			while((true)){
				HX_STACK_LINE(29)
				bool tmp9 = (_g < segments);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				if ((tmp10)){
					HX_STACK_LINE(29)
					break;
				}
				HX_STACK_LINE(29)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				int n = tmp11;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(31)
				Float tmp12 = (x + cx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(31)
				Float px = tmp12;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(32)
				Float tmp13 = (y + cy);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(32)
				Float py = tmp13;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(34)
				Float t = x;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(35)
				Float tmp14 = (c * x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				Float tmp15 = (s * y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				x = tmp16;
				HX_STACK_LINE(36)
				Float tmp17 = (c * y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				Float tmp18 = (s * t);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(36)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(36)
				y = tmp19;
				HX_STACK_LINE(38)
				Float tmp20 = px;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(38)
				Float tmp21 = py;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(38)
				Float tmp22 = (x + cx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(38)
				Float tmp23 = (y + cy);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(38)
				Float tmp24 = strength;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(38)
				g2->drawLine(tmp20,tmp21,tmp22,tmp23,tmp24);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsExtension_obj,drawCircle,(void))

Void GraphicsExtension_obj::fillCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< int >  __o_segments){
int segments = __o_segments.Default(0);
	HX_STACK_FRAME("kha.graphics2.GraphicsExtension","fillCircle",0x46539ede,"kha.graphics2.GraphicsExtension.fillCircle","kha/graphics2/GraphicsExtension.hx",47,0xb3e4f63d)
	HX_STACK_ARG(g2,"g2")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(segments,"segments")
{
		HX_STACK_LINE(48)
		bool tmp = (segments <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(49)
			Float tmp1 = radius;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			Float tmp3 = ((int)10 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			segments = tmp4;
		}
		HX_STACK_LINE(51)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Float tmp2 = ((int)2 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = segments;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		Float theta = tmp4;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(52)
		Float tmp5 = theta;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(53)
		Float tmp7 = theta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		Float s = tmp8;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(55)
		Float x = radius;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(56)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				bool tmp9 = (_g < segments);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(58)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				if ((tmp10)){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(58)
				int n = tmp11;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(60)
				Float tmp12 = (x + cx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				Float px = tmp12;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(61)
				Float tmp13 = (y + cy);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				Float py = tmp13;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(63)
				Float t = x;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(64)
				Float tmp14 = (c * x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(64)
				Float tmp15 = (s * y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(64)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(64)
				x = tmp16;
				HX_STACK_LINE(65)
				Float tmp17 = (c * y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(65)
				Float tmp18 = (s * t);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(65)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(65)
				y = tmp19;
				HX_STACK_LINE(67)
				Float tmp20 = px;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(67)
				Float tmp21 = py;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(67)
				Float tmp22 = (x + cx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(67)
				Float tmp23 = (y + cy);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(67)
				Float tmp24 = cx;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(67)
				Float tmp25 = cy;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(67)
				g2->fillTriangle(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsExtension_obj,fillCircle,(void))

Void GraphicsExtension_obj::drawPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,Array< ::Dynamic > vertices,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("kha.graphics2.GraphicsExtension","drawPolygon",0x855ece8b,"kha.graphics2.GraphicsExtension.drawPolygon","kha/graphics2/GraphicsExtension.hx",75,0xb3e4f63d)
	HX_STACK_ARG(g2,"g2")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(strength,"strength")
{
		HX_STACK_LINE(76)
		Dynamic tmp = vertices->iteratorFast< ::kha::math::Vector2 >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		Dynamic iterator = tmp;		HX_STACK_VAR(iterator,"iterator");
		HX_STACK_LINE(77)
		::kha::math::Vector2 tmp1 = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::kha::math::Vector2 v0 = tmp1;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(78)
		::kha::math::Vector2 v1 = v0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(80)
		while((true)){
			HX_STACK_LINE(80)
			bool tmp2 = iterator->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			if ((tmp3)){
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(82)
			::kha::math::Vector2 tmp4 = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			::kha::math::Vector2 v2 = tmp4;		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(83)
			Float tmp5 = (v1->x + x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			Float tmp6 = (v1->y + y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			Float tmp7 = (v2->x + x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			Float tmp8 = (v2->y + y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			Float tmp9 = strength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			g2->drawLine(tmp5,tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(84)
			v1 = v2;
		}
		HX_STACK_LINE(86)
		Float tmp2 = (v1->x + x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		Float tmp3 = (v1->y + y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		Float tmp4 = (v0->x + x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		Float tmp5 = (v0->y + y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		Float tmp6 = strength;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		g2->drawLine(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsExtension_obj,drawPolygon,(void))

Void GraphicsExtension_obj::fillPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,Array< ::Dynamic > vertices){
{
		HX_STACK_FRAME("kha.graphics2.GraphicsExtension","fillPolygon",0x5fb209ec,"kha.graphics2.GraphicsExtension.fillPolygon","kha/graphics2/GraphicsExtension.hx",93,0xb3e4f63d)
		HX_STACK_ARG(g2,"g2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_LINE(94)
		Dynamic tmp = vertices->iteratorFast< ::kha::math::Vector2 >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Dynamic iterator = tmp;		HX_STACK_VAR(iterator,"iterator");
		HX_STACK_LINE(95)
		::kha::math::Vector2 tmp1 = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		::kha::math::Vector2 v0 = tmp1;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(96)
		::kha::math::Vector2 v1 = v0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp2 = iterator->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			if ((tmp3)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(100)
			::kha::math::Vector2 tmp4 = iterator->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			::kha::math::Vector2 v2 = tmp4;		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(101)
			Float tmp5 = (v1->x + x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			Float tmp6 = (v1->y + y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			Float tmp7 = (v2->x + x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			Float tmp8 = (v2->y + y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			g2->fillTriangle(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
			HX_STACK_LINE(102)
			v1 = v2;
		}
		HX_STACK_LINE(104)
		Float tmp2 = (v1->x + x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		Float tmp3 = (v1->y + y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		Float tmp4 = (v0->x + x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		Float tmp5 = (v0->y + y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		g2->fillTriangle(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsExtension_obj,fillPolygon,(void))


GraphicsExtension_obj::GraphicsExtension_obj()
{
}

bool GraphicsExtension_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fillCircle") ) { outValue = fillCircle_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { outValue = drawPolygon_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fillPolygon") ) { outValue = fillPolygon_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsExtension_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsExtension_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsExtension_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("fillCircle","\xf3","\xf8","\xa7","\x59"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("fillPolygon","\x37","\x82","\x2c","\x36"),
	::String(null()) };

void GraphicsExtension_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.GraphicsExtension","\xa3","\xec","\x5d","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsExtension_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsExtension_obj >;
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

} // end namespace kha
} // end namespace graphics2
