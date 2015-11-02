#ifndef INCLUDED_kha_Font
#define INCLUDED_kha_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontStyle)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Font_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_name( )=0;
virtual Dynamic get_name_dyn()=0;
		virtual ::kha::FontStyle get_style( )=0;
virtual Dynamic get_style_dyn()=0;
		virtual Float get_size( )=0;
virtual Dynamic get_size_dyn()=0;
		virtual Float getHeight( )=0;
virtual Dynamic getHeight_dyn()=0;
		virtual Float charWidth( ::String ch)=0;
virtual Dynamic charWidth_dyn()=0;
		virtual Float charsWidth( ::String ch,int offset,int length)=0;
virtual Dynamic charsWidth_dyn()=0;
		virtual Float stringWidth( ::String str)=0;
virtual Dynamic stringWidth_dyn()=0;
		virtual Float getBaselinePosition( )=0;
virtual Dynamic getBaselinePosition_dyn()=0;
};



template<typename IMPL>
class Font_delegate_ : public Font_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Font_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::String get_name( ) { return mDelegate->get_name();}
		Dynamic get_name_dyn() { return mDelegate->get_name_dyn();}
		::kha::FontStyle get_style( ) { return mDelegate->get_style();}
		Dynamic get_style_dyn() { return mDelegate->get_style_dyn();}
		Float get_size( ) { return mDelegate->get_size();}
		Dynamic get_size_dyn() { return mDelegate->get_size_dyn();}
		Float getHeight( ) { return mDelegate->getHeight();}
		Dynamic getHeight_dyn() { return mDelegate->getHeight_dyn();}
		Float charWidth( ::String ch) { return mDelegate->charWidth(ch);}
		Dynamic charWidth_dyn() { return mDelegate->charWidth_dyn();}
		Float charsWidth( ::String ch,int offset,int length) { return mDelegate->charsWidth(ch,offset,length);}
		Dynamic charsWidth_dyn() { return mDelegate->charsWidth_dyn();}
		Float stringWidth( ::String str) { return mDelegate->stringWidth(str);}
		Dynamic stringWidth_dyn() { return mDelegate->stringWidth_dyn();}
		Float getBaselinePosition( ) { return mDelegate->getBaselinePosition();}
		Dynamic getBaselinePosition_dyn() { return mDelegate->getBaselinePosition_dyn();}
};

} // end namespace kha

#endif /* INCLUDED_kha_Font */ 
