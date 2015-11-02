#ifndef INCLUDED_kha_graphics4_TextureUnit
#define INCLUDED_kha_graphics4_TextureUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  TextureUnit_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef TextureUnit_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class TextureUnit_delegate_ : public TextureUnit_obj
{
	protected:
		IMPL *mDelegate;
	public:
		TextureUnit_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_TextureUnit */ 
