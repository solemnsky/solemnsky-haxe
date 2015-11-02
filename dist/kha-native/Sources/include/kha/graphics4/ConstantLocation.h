#ifndef INCLUDED_kha_graphics4_ConstantLocation
#define INCLUDED_kha_graphics4_ConstantLocation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  ConstantLocation_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ConstantLocation_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class ConstantLocation_delegate_ : public ConstantLocation_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ConstantLocation_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_ConstantLocation */ 
