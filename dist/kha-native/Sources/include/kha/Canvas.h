#ifndef INCLUDED_kha_Canvas
#define INCLUDED_kha_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Canvas_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Canvas_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_width( )=0;
virtual Dynamic get_width_dyn()=0;
		virtual int get_height( )=0;
virtual Dynamic get_height_dyn()=0;
		virtual ::kha::graphics1::Graphics get_g1( )=0;
virtual Dynamic get_g1_dyn()=0;
		virtual ::kha::graphics2::Graphics get_g2( )=0;
virtual Dynamic get_g2_dyn()=0;
		virtual ::kha::graphics4::Graphics get_g4( )=0;
virtual Dynamic get_g4_dyn()=0;
};



template<typename IMPL>
class Canvas_delegate_ : public Canvas_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Canvas_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_width( ) { return mDelegate->get_width();}
		Dynamic get_width_dyn() { return mDelegate->get_width_dyn();}
		int get_height( ) { return mDelegate->get_height();}
		Dynamic get_height_dyn() { return mDelegate->get_height_dyn();}
		::kha::graphics1::Graphics get_g1( ) { return mDelegate->get_g1();}
		Dynamic get_g1_dyn() { return mDelegate->get_g1_dyn();}
		::kha::graphics2::Graphics get_g2( ) { return mDelegate->get_g2();}
		Dynamic get_g2_dyn() { return mDelegate->get_g2_dyn();}
		::kha::graphics4::Graphics get_g4( ) { return mDelegate->get_g4();}
		Dynamic get_g4_dyn() { return mDelegate->get_g4_dyn();}
};

} // end namespace kha

#endif /* INCLUDED_kha_Canvas */ 
