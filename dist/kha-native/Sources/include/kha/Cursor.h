#ifndef INCLUDED_kha_Cursor
#define INCLUDED_kha_Cursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Cursor)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Cursor_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Cursor_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_clickX( )=0;
virtual Dynamic get_clickX_dyn()=0;
		virtual int get_clickY( )=0;
virtual Dynamic get_clickY_dyn()=0;
		virtual int get_width( )=0;
virtual Dynamic get_width_dyn()=0;
		virtual int get_height( )=0;
virtual Dynamic get_height_dyn()=0;
		virtual Void render( ::kha::graphics2::Graphics g,int x,int y)=0;
virtual Dynamic render_dyn()=0;
		virtual Void update( int x,int y)=0;
virtual Dynamic update_dyn()=0;
};



template<typename IMPL>
class Cursor_delegate_ : public Cursor_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Cursor_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_clickX( ) { return mDelegate->get_clickX();}
		Dynamic get_clickX_dyn() { return mDelegate->get_clickX_dyn();}
		int get_clickY( ) { return mDelegate->get_clickY();}
		Dynamic get_clickY_dyn() { return mDelegate->get_clickY_dyn();}
		int get_width( ) { return mDelegate->get_width();}
		Dynamic get_width_dyn() { return mDelegate->get_width_dyn();}
		int get_height( ) { return mDelegate->get_height();}
		Dynamic get_height_dyn() { return mDelegate->get_height_dyn();}
		Void render( ::kha::graphics2::Graphics g,int x,int y) { return mDelegate->render(g,x,y);}
		Dynamic render_dyn() { return mDelegate->render_dyn();}
		Void update( int x,int y) { return mDelegate->update(x,y);}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
};

} // end namespace kha

#endif /* INCLUDED_kha_Cursor */ 
