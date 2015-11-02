#ifndef INCLUDED_zpp_nape_ZPP_ID
#define INCLUDED_zpp_nape_ZPP_ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(zpp_nape,ZPP_ID)
namespace zpp_nape{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ID_obj OBJ_;
		ZPP_ID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.ZPP_ID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_ID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_ID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_ID","\x60","\x49","\x56","\x41"); }

		static void __boot();
		static int _Constraint;
		static int Constraint( );
		static Dynamic Constraint_dyn();

		static int _Interactor;
		static int Interactor( );
		static Dynamic Interactor_dyn();

		static int _CbType;
		static int CbType( );
		static Dynamic CbType_dyn();

		static int _CbSet;
		static int CbSet( );
		static Dynamic CbSet_dyn();

		static int _Listener;
		static int Listener( );
		static Dynamic Listener_dyn();

		static int _ZPP_SimpleVert;
		static int ZPP_SimpleVert( );
		static Dynamic ZPP_SimpleVert_dyn();

		static int _ZPP_SimpleSeg;
		static int ZPP_SimpleSeg( );
		static Dynamic ZPP_SimpleSeg_dyn();

		static int _Space;
		static int Space( );
		static Dynamic Space_dyn();

		static int _InteractionGroup;
		static int InteractionGroup( );
		static Dynamic InteractionGroup_dyn();

};

} // end namespace zpp_nape

#endif /* INCLUDED_zpp_nape_ZPP_ID */ 
