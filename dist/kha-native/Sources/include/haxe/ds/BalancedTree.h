#ifndef INCLUDED_haxe_ds_BalancedTree
#define INCLUDED_haxe_ds_BalancedTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,TreeNode)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  BalancedTree_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BalancedTree_obj OBJ_;
		BalancedTree_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.BalancedTree")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BalancedTree_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BalancedTree_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BalancedTree","\x66","\x71","\xf8","\xaa"); }

		::haxe::ds::TreeNode root;
		virtual Void set( Dynamic key,Dynamic value);
		Dynamic set_dyn();

		virtual Dynamic get( Dynamic key);
		Dynamic get_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();

		virtual ::haxe::ds::TreeNode setLoop( Dynamic k,Dynamic v,::haxe::ds::TreeNode node);
		Dynamic setLoop_dyn();

		virtual Void keysLoop( ::haxe::ds::TreeNode node,cpp::ArrayBase acc);
		Dynamic keysLoop_dyn();

		virtual ::haxe::ds::TreeNode balance( ::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r);
		Dynamic balance_dyn();

		virtual int compare( Dynamic k1,Dynamic k2);
		Dynamic compare_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_BalancedTree */ 
