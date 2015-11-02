#ifndef INCLUDED_control_Control
#define INCLUDED_control_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Control)
HX_DECLARE_CLASS1(control,Event)
HX_DECLARE_CLASS1(control,Network)
HX_DECLARE_CLASS1(control,Profile)
HX_DECLARE_CLASS1(control,Scene)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  Control_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Control_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( ::control::Network network)=0;
virtual Dynamic init_dyn()=0;
		virtual Void tick( Float delta)=0;
virtual Dynamic tick_dyn()=0;
		virtual ::control::Scene render( Float delta)=0;
virtual Dynamic render_dyn()=0;
		virtual Void profiling( ::control::Profile data)=0;
virtual Dynamic profiling_dyn()=0;
		virtual Void handle( ::control::Event e)=0;
virtual Dynamic handle_dyn()=0;
		virtual Dynamic conclude( )=0;
virtual Dynamic conclude_dyn()=0;
};



template<typename IMPL>
class Control_delegate_ : public Control_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Control_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void init( ::control::Network network) { return mDelegate->init(network);}
		Dynamic init_dyn() { return mDelegate->init_dyn();}
		Void tick( Float delta) { return mDelegate->tick(delta);}
		Dynamic tick_dyn() { return mDelegate->tick_dyn();}
		::control::Scene render( Float delta) { return mDelegate->render(delta);}
		Dynamic render_dyn() { return mDelegate->render_dyn();}
		Void profiling( ::control::Profile data) { return mDelegate->profiling(data);}
		Dynamic profiling_dyn() { return mDelegate->profiling_dyn();}
		Void handle( ::control::Event e) { return mDelegate->handle(e);}
		Dynamic handle_dyn() { return mDelegate->handle_dyn();}
		Dynamic conclude( ) { return mDelegate->conclude();}
		Dynamic conclude_dyn() { return mDelegate->conclude_dyn();}
};

} // end namespace control

#endif /* INCLUDED_control_Control */ 
