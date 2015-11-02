#ifndef INCLUDED_kha_graphics1_Graphics
#define INCLUDED_kha_graphics1_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics1,Graphics)
namespace kha{
namespace graphics1{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Graphics_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void begin( )=0;
virtual Dynamic begin_dyn()=0;
		virtual Void end( )=0;
virtual Dynamic end_dyn()=0;
		virtual Void setPixel( int x,int y,int color)=0;
virtual Dynamic setPixel_dyn()=0;
};



template<typename IMPL>
class Graphics_delegate_ : public Graphics_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Graphics_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void begin( ) { return mDelegate->begin();}
		Dynamic begin_dyn() { return mDelegate->begin_dyn();}
		Void end( ) { return mDelegate->end();}
		Dynamic end_dyn() { return mDelegate->end_dyn();}
		Void setPixel( int x,int y,int color) { return mDelegate->setPixel(x,y,color);}
		Dynamic setPixel_dyn() { return mDelegate->setPixel_dyn();}
};

} // end namespace kha
} // end namespace graphics1

#endif /* INCLUDED_kha_graphics1_Graphics */ 
