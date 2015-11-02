#ifndef INCLUDED_kha_Resource
#define INCLUDED_kha_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Resource_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void unload( )=0;
virtual Dynamic unload_dyn()=0;
};



template<typename IMPL>
class Resource_delegate_ : public Resource_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Resource_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void unload( ) { return mDelegate->unload();}
		Dynamic unload_dyn() { return mDelegate->unload_dyn();}
};

} // end namespace kha

#endif /* INCLUDED_kha_Resource */ 
