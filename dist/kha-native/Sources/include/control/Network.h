#ifndef INCLUDED_control_Network
#define INCLUDED_control_Network

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(control,Network)
namespace control{


class HXCPP_CLASS_ATTRIBUTES  Network_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Network_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class Network_delegate_ : public Network_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Network_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace control

#endif /* INCLUDED_control_Network */ 
