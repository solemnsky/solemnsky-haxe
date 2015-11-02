#ifndef INCLUDED_kha_graphics4_CubeMap
#define INCLUDED_kha_graphics4_CubeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  CubeMap_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef CubeMap_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_size( )=0;
virtual Dynamic get_size_dyn()=0;
		virtual ::haxe::io::Bytes lock( )=0;
virtual Dynamic lock_dyn()=0;
		virtual Void unlock( )=0;
virtual Dynamic unlock_dyn()=0;
};



template<typename IMPL>
class CubeMap_delegate_ : public CubeMap_obj
{
	protected:
		IMPL *mDelegate;
	public:
		CubeMap_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_size( ) { return mDelegate->get_size();}
		Dynamic get_size_dyn() { return mDelegate->get_size_dyn();}
		::haxe::io::Bytes lock( ) { return mDelegate->lock();}
		Dynamic lock_dyn() { return mDelegate->lock_dyn();}
		Void unlock( ) { return mDelegate->unlock();}
		Dynamic unlock_dyn() { return mDelegate->unlock_dyn();}
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_CubeMap */ 
