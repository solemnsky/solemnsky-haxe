#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_AlignedQuad
#include <kha/AlignedQuad.h>
#endif
#ifndef INCLUDED_kha_BakedChar
#include <kha/BakedChar.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
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
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#include <kha/_SuperString/SuperString_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{

Void Kravur_obj::__construct(::kha::Blob blob)
{
HX_STACK_FRAME("kha.Kravur","new",0x6ca37955,"kha.Kravur.new","kha/Kravur.hx",78,0xdd7a3f9a)
HX_STACK_THIS(this)
HX_STACK_ARG(blob,"blob")
{
	HX_STACK_LINE(79)
	int tmp = blob->readS32LE();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	int size = tmp;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(80)
	int tmp1 = blob->readS32LE();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	int ascent = tmp1;		HX_STACK_VAR(ascent,"ascent");
	HX_STACK_LINE(81)
	int tmp2 = blob->readS32LE();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	int descent = tmp2;		HX_STACK_VAR(descent,"descent");
	HX_STACK_LINE(82)
	int tmp3 = blob->readS32LE();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	int lineGap = tmp3;		HX_STACK_VAR(lineGap,"lineGap");
	HX_STACK_LINE(83)
	this->baseline = ascent;
	HX_STACK_LINE(84)
	Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	this->chars = tmp4;
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		int tmp5 = (int)224;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			if ((tmp7)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(86)
			::kha::BakedChar _char = ::kha::BakedChar_obj::__new();		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(87)
			int tmp9 = blob->readS16LE();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			_char->x0 = tmp9;
			HX_STACK_LINE(88)
			int tmp10 = blob->readS16LE();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			_char->y0 = tmp10;
			HX_STACK_LINE(89)
			int tmp11 = blob->readS16LE();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			_char->x1 = tmp11;
			HX_STACK_LINE(90)
			int tmp12 = blob->readS16LE();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			_char->y1 = tmp12;
			HX_STACK_LINE(91)
			Float tmp13 = blob->readF32LE();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(91)
			_char->xoff = tmp13;
			HX_STACK_LINE(92)
			Float tmp14 = blob->readF32LE();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(92)
			Float tmp15 = this->baseline;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(92)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			_char->yoff = tmp16;
			HX_STACK_LINE(93)
			Float tmp17 = blob->readF32LE();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			_char->xadvance = tmp17;
			HX_STACK_LINE(94)
			Array< ::Dynamic > tmp18 = this->chars;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			::kha::BakedChar tmp19 = _char;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(94)
			tmp18->push(tmp19);
		}
	}
	HX_STACK_LINE(96)
	int tmp5 = blob->readS32LE();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	this->width = tmp5;
	HX_STACK_LINE(97)
	int tmp6 = blob->readS32LE();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	this->height = tmp6;
	HX_STACK_LINE(98)
	int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	int w = tmp7;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(99)
	int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(99)
	int h = tmp8;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(100)
	while((true)){
		HX_STACK_LINE(100)
		int tmp9 = w;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		int tmp10 = ::kha::Image_obj::get_maxSize();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		if ((tmp12)){
			HX_STACK_LINE(100)
			int tmp14 = h;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			int tmp15 = ::kha::Image_obj::get_maxSize();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			tmp13 = (tmp14 > tmp16);
		}
		else{
			HX_STACK_LINE(100)
			tmp13 = true;
		}
		HX_STACK_LINE(100)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		if ((tmp14)){
			HX_STACK_LINE(100)
			break;
		}
		HX_STACK_LINE(101)
		int tmp15 = blob->position;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		int tmp16 = (h * w);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(101)
		int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(101)
		blob->seek(tmp17);
		HX_STACK_LINE(102)
		Float tmp18 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(102)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(102)
		w = tmp19;
		HX_STACK_LINE(103)
		Float tmp20 = (Float(h) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(103)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(103)
		h = tmp21;
	}
	HX_STACK_LINE(105)
	int tmp9 = w;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	int tmp10 = h;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(105)
	::kha::Image tmp11 = ::kha::Image_obj::create(tmp9,tmp10,::kha::graphics4::TextureFormat_obj::L8,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(105)
	this->texture = tmp11;
	HX_STACK_LINE(106)
	::kha::Image tmp12 = this->texture;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(106)
	::haxe::io::Bytes tmp13 = tmp12->lock(null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(106)
	::haxe::io::Bytes bytes = tmp13;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(107)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			bool tmp14 = (_g < h);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(108)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(108)
			if ((tmp15)){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(108)
			int y = tmp16;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(108)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				bool tmp17 = (_g1 < w);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(108)
				if ((tmp18)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(108)
				int x = tmp19;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					int tmp20 = blob->readU8();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(109)
					int v = tmp20;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(109)
					int tmp21 = v;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(109)
					bytes->b[pos] = tmp21;
				}
				HX_STACK_LINE(115)
				++(pos);
			}
		}
	}
	HX_STACK_LINE(117)
	::kha::Image tmp14 = this->texture;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	tmp14->unlock();
	HX_STACK_LINE(118)
	blob->reset();
}
;
	return null();
}

//Kravur_obj::~Kravur_obj() { }

Dynamic Kravur_obj::__CreateEmpty() { return  new Kravur_obj; }
hx::ObjectPtr< Kravur_obj > Kravur_obj::__new(::kha::Blob blob)
{  hx::ObjectPtr< Kravur_obj > _result_ = new Kravur_obj();
	_result_->__construct(blob);
	return _result_;}

Dynamic Kravur_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Kravur_obj > _result_ = new Kravur_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Kravur_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Font_obj)) return operator ::kha::Font_obj *();
	return super::__ToInterface(inType);
}

Kravur_obj::operator ::kha::Font_obj *()
	{ return new ::kha::Font_delegate_< Kravur_obj >(this); }
::kha::Image Kravur_obj::getTexture( ){
	HX_STACK_FRAME("kha.Kravur","getTexture",0x11fede90,"kha.Kravur.getTexture","kha/Kravur.hx",121,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::kha::Image tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,getTexture,return )

::kha::AlignedQuad Kravur_obj::getBakedQuad( int char_index,Float xpos,Float ypos){
	HX_STACK_FRAME("kha.Kravur","getBakedQuad",0x01179887,"kha.Kravur.getBakedQuad","kha/Kravur.hx",125,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(char_index,"char_index")
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(126)
	int tmp = char_index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	Array< ::Dynamic > tmp1 = this->chars;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	if ((tmp3)){
		HX_STACK_LINE(126)
		return null();
	}
	HX_STACK_LINE(127)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	Float ipw = tmp5;		HX_STACK_VAR(ipw,"ipw");
	HX_STACK_LINE(128)
	int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	Float tmp7 = (Float(((Float)1.0)) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	Float iph = tmp7;		HX_STACK_VAR(iph,"iph");
	HX_STACK_LINE(129)
	Array< ::Dynamic > tmp8 = this->chars;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	int tmp9 = char_index;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(129)
	::kha::BakedChar tmp10 = tmp8->__get(tmp9).StaticCast< ::kha::BakedChar >();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(129)
	::kha::BakedChar b = tmp10;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(130)
	bool tmp11 = (b == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(130)
	if ((tmp11)){
		HX_STACK_LINE(130)
		return null();
	}
	HX_STACK_LINE(131)
	Float tmp12 = (xpos + b->xoff);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(131)
	int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(131)
	int round_x = tmp13;		HX_STACK_VAR(round_x,"round_x");
	HX_STACK_LINE(132)
	Float tmp14 = (ypos + b->yoff);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(132)
	int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(132)
	int round_y = tmp15;		HX_STACK_VAR(round_y,"round_y");
	HX_STACK_LINE(134)
	::kha::AlignedQuad q = ::kha::AlignedQuad_obj::__new();		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(135)
	q->x0 = round_x;
	HX_STACK_LINE(136)
	q->y0 = round_y;
	HX_STACK_LINE(137)
	int tmp16 = (round_x + b->x1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(137)
	int tmp17 = b->x0;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(137)
	int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(137)
	q->x1 = tmp18;
	HX_STACK_LINE(138)
	int tmp19 = (round_y + b->y1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(138)
	int tmp20 = b->y0;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(138)
	int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(138)
	q->y1 = tmp21;
	HX_STACK_LINE(140)
	Float tmp22 = (b->x0 * ipw);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(140)
	q->s0 = tmp22;
	HX_STACK_LINE(141)
	Float tmp23 = (b->y0 * iph);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(141)
	q->t0 = tmp23;
	HX_STACK_LINE(142)
	Float tmp24 = (b->x1 * ipw);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(142)
	q->s1 = tmp24;
	HX_STACK_LINE(143)
	Float tmp25 = (b->y1 * iph);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(143)
	q->t1 = tmp25;
	HX_STACK_LINE(145)
	q->xadvance = b->xadvance;
	HX_STACK_LINE(147)
	::kha::AlignedQuad tmp26 = q;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(147)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC3(Kravur_obj,getBakedQuad,return )

Float Kravur_obj::getCharWidth( int charIndex){
	HX_STACK_FRAME("kha.Kravur","getCharWidth",0x8ad1ec45,"kha.Kravur.getCharWidth","kha/Kravur.hx",150,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(151)
	bool tmp = (charIndex < (int)32);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	if ((tmp)){
		HX_STACK_LINE(151)
		return (int)0;
	}
	HX_STACK_LINE(152)
	int tmp1 = (charIndex - (int)32);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	Array< ::Dynamic > tmp2 = this->chars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	bool tmp4 = (tmp1 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	if ((tmp4)){
		HX_STACK_LINE(152)
		return (int)0;
	}
	HX_STACK_LINE(153)
	Array< ::Dynamic > tmp5 = this->chars;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	int tmp6 = (charIndex - (int)32);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(153)
	::kha::BakedChar tmp7 = tmp5->__get(tmp6).StaticCast< ::kha::BakedChar >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	Float tmp8 = tmp7->xadvance;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(153)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,getCharWidth,return )

::String Kravur_obj::get_name( ){
	HX_STACK_FRAME("kha.Kravur","get_name",0x4818ecbf,"kha.Kravur.get_name","kha/Kravur.hx",160,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::String tmp = this->myName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,get_name,return )

::kha::FontStyle Kravur_obj::get_style( ){
	HX_STACK_FRAME("kha.Kravur","get_style",0xbb4f503d,"kha.Kravur.get_style","kha/Kravur.hx",164,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::kha::FontStyle tmp = this->myStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,get_style,return )

Float Kravur_obj::get_size( ){
	HX_STACK_FRAME("kha.Kravur","get_size",0x4b6d1b35,"kha.Kravur.get_size","kha/Kravur.hx",168,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	Float tmp = this->mySize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,get_size,return )

Float Kravur_obj::getHeight( ){
	HX_STACK_FRAME("kha.Kravur","getHeight",0x722adfd2,"kha.Kravur.getHeight","kha/Kravur.hx",172,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	Float tmp = this->mySize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,getHeight,return )

Float Kravur_obj::charWidth( ::String ch){
	HX_STACK_FRAME("kha.Kravur","charWidth",0x77438e05,"kha.Kravur.charWidth","kha/Kravur.hx",176,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ch,"ch")
	HX_STACK_LINE(177)
	Dynamic tmp = ch.charCodeAt((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	Float tmp1 = this->getCharWidth(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,charWidth,return )

Float Kravur_obj::charsWidth( ::String ch,int offset,int length){
	HX_STACK_FRAME("kha.Kravur","charsWidth",0xbbe25794,"kha.Kravur.charsWidth","kha/Kravur.hx",180,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ch,"ch")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(181)
	int tmp = offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	::String tmp2 = ch.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	Float tmp3 = this->stringWidth(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Kravur_obj,charsWidth,return )

Float Kravur_obj::stringWidth( ::String string){
	HX_STACK_FRAME("kha.Kravur","stringWidth",0xf6a68d6a,"kha.Kravur.stringWidth","kha/Kravur.hx",184,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(185)
	::String str = string;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(186)
	Float width = (int)0;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		int tmp1 = ::kha::_SuperString::SuperString_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			if ((tmp3)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			int c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(188)
			::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			int tmp7 = ::kha::_SuperString::SuperString_Impl__obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			Float tmp8 = this->getCharWidth(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			hx::AddEq(width,tmp8);
		}
	}
	HX_STACK_LINE(191)
	bool tmp = (width > (int)10);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	if ((tmp)){
		HX_STACK_LINE(191)
		tmp1 = (width < (int)100);
	}
	else{
		HX_STACK_LINE(191)
		tmp1 = false;
	}
	HX_STACK_LINE(191)
	if ((tmp1)){
		HX_STACK_LINE(192)
		int a = (int)3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(193)
		++(a);
	}
	HX_STACK_LINE(195)
	Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,stringWidth,return )

Float Kravur_obj::getBaselinePosition( ){
	HX_STACK_FRAME("kha.Kravur","getBaselinePosition",0x0c19d1f9,"kha.Kravur.getBaselinePosition","kha/Kravur.hx",198,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	Float tmp = this->baseline;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,getBaselinePosition,return )

::haxe::ds::StringMap Kravur_obj::fontCache;

::kha::Kravur Kravur_obj::get( ::String name,::kha::FontStyle style,Float size){
	HX_STACK_FRAME("kha.Kravur","get",0x6c9e298b,"kha.Kravur.get","kha/Kravur.hx",53,0xdd7a3f9a)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(style,"style")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(54)
	::String key = name;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(55)
	bool tmp = style->getBold();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(56)
		hx::AddEq(key,HX_HCSTRING("#Bold","\x48","\xfb","\xfa","\x52"));
	}
	HX_STACK_LINE(58)
	bool tmp1 = style->getItalic();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	if ((tmp1)){
		HX_STACK_LINE(59)
		hx::AddEq(key,HX_HCSTRING("#Italic","\x73","\xdf","\x67","\xea"));
	}
	HX_STACK_LINE(61)
	::String tmp2 = (size + HX_HCSTRING(".kravur","\x67","\xb6","\x30","\x25"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	hx::AddEq(key,tmp2);
	HX_STACK_LINE(63)
	::haxe::ds::StringMap tmp3 = ::kha::Kravur_obj::fontCache;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::kha::Kravur tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	::kha::Kravur kravur = tmp5;		HX_STACK_VAR(kravur,"kravur");
	HX_STACK_LINE(64)
	bool tmp6 = (kravur == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	if ((tmp6)){
		HX_STACK_LINE(65)
		::kha::Loader tmp7 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::kha::Blob tmp9 = tmp7->getBlob(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		::kha::Blob blob = tmp9;		HX_STACK_VAR(blob,"blob");
		HX_STACK_LINE(66)
		bool tmp10 = (blob != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		if ((tmp10)){
			HX_STACK_LINE(67)
			::kha::Kravur tmp11 = ::kha::Kravur_obj::__new(blob);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			kravur = tmp11;
			HX_STACK_LINE(68)
			kravur->myName = name;
			HX_STACK_LINE(69)
			kravur->myStyle = style;
			HX_STACK_LINE(70)
			kravur->mySize = size;
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp12 = ::kha::Kravur_obj::fontCache;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(72)
			::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(72)
			::kha::Kravur tmp14 = kravur;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			tmp12->set(tmp13,tmp14);
		}
	}
	HX_STACK_LINE(75)
	::kha::Kravur tmp7 = kravur;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Kravur_obj,get,return )


Kravur_obj::Kravur_obj()
{
}

void Kravur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kravur);
	HX_MARK_MEMBER_NAME(myName,"myName");
	HX_MARK_MEMBER_NAME(myStyle,"myStyle");
	HX_MARK_MEMBER_NAME(mySize,"mySize");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(baseline,"baseline");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void Kravur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myName,"myName");
	HX_VISIT_MEMBER_NAME(myStyle,"myStyle");
	HX_VISIT_MEMBER_NAME(mySize,"mySize");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(baseline,"baseline");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(size,"size");
}

Dynamic Kravur_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp == hx::paccAlways ? get_name() : name; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp == hx::paccAlways ? get_size() : size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { return chars; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"style") ) { return inCallProp == hx::paccAlways ? get_style() : style; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myName") ) { return myName; }
		if (HX_FIELD_EQ(inName,"mySize") ) { return mySize; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myStyle") ) { return myStyle; }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { return baseline; }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"charWidth") ) { return charWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"charsWidth") ) { return charsWidth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringWidth") ) { return stringWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBakedQuad") ) { return getBakedQuad_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharWidth") ) { return getCharWidth_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBaselinePosition") ) { return getBaselinePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Kravur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontCache") ) { outValue = fontCache; return true;  }
	}
	return false;
}

Dynamic Kravur_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::kha::FontStyle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"myName") ) { myName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mySize") ) { mySize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myStyle") ) { myStyle=inValue.Cast< ::kha::FontStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { baseline=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Kravur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fontCache") ) { fontCache=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Kravur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("myName","\xd7","\x23","\x3b","\x74"));
	outFields->push(HX_HCSTRING("myStyle","\x25","\x4e","\x1d","\x2d"));
	outFields->push(HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77"));
	outFields->push(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Kravur_obj,myName),HX_HCSTRING("myName","\xd7","\x23","\x3b","\x74")},
	{hx::fsObject /*::kha::FontStyle*/ ,(int)offsetof(Kravur_obj,myStyle),HX_HCSTRING("myStyle","\x25","\x4e","\x1d","\x2d")},
	{hx::fsFloat,(int)offsetof(Kravur_obj,mySize),HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Kravur_obj,chars),HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Kravur_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsInt,(int)offsetof(Kravur_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Kravur_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Kravur_obj,baseline),HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11")},
	{hx::fsString,(int)offsetof(Kravur_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::kha::FontStyle*/ ,(int)offsetof(Kravur_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsFloat,(int)offsetof(Kravur_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Kravur_obj::fontCache,HX_HCSTRING("fontCache","\xf3","\x3d","\xf0","\xec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("myName","\xd7","\x23","\x3b","\x74"),
	HX_HCSTRING("myStyle","\x25","\x4e","\x1d","\x2d"),
	HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77"),
	HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getBakedQuad","\x1c","\x88","\x57","\x09"),
	HX_HCSTRING("getCharWidth","\xda","\xdb","\x11","\x93"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_style","\x88","\x01","\xc7","\xc7"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("charWidth","\x50","\x3f","\xbb","\x83"),
	HX_HCSTRING("charsWidth","\xe9","\xc7","\x25","\x98"),
	HX_HCSTRING("stringWidth","\x75","\x67","\x65","\xd5"),
	HX_HCSTRING("getBaselinePosition","\x04","\x2f","\xa2","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Kravur_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Kravur_obj::fontCache,"fontCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Kravur_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Kravur_obj::fontCache,"fontCache");
};

#endif

hx::Class Kravur_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fontCache","\xf3","\x3d","\xf0","\xec"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void Kravur_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Kravur","\xe3","\x2a","\x15","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Kravur_obj::__GetStatic;
	__mClass->mSetStaticField = &Kravur_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Kravur_obj >;
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

void Kravur_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Kravur.hx",49,0xdd7a3f9a)
		{
			HX_STACK_LINE(49)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			return tmp;
		}
		return null();
	}
};
	fontCache= _Function_0_1::Block();
}

} // end namespace kha
