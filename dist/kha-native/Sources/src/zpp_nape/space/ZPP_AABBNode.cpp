#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBNode_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.space.ZPP_AABBNode","new",0x594f5fe2,"zpp_nape.space.ZPP_AABBNode.new","zpp_nape/space/DynAABBPhase.hx",174,0x55500cf1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(265)
	this->first_sync = false;
	HX_STACK_LINE(264)
	this->synced = false;
	HX_STACK_LINE(263)
	this->snext = null();
	HX_STACK_LINE(262)
	this->moved = false;
	HX_STACK_LINE(261)
	this->mnext = null();
	HX_STACK_LINE(186)
	this->next = null();
	HX_STACK_LINE(182)
	this->rayt = ((Float)0.0);
	HX_STACK_LINE(181)
	this->height = (int)0;
	HX_STACK_LINE(180)
	this->child2 = null();
	HX_STACK_LINE(179)
	this->child1 = null();
	HX_STACK_LINE(178)
	this->parent = null();
	HX_STACK_LINE(177)
	this->dyn = false;
	HX_STACK_LINE(176)
	this->shape = null();
	HX_STACK_LINE(175)
	this->aabb = null();
	HX_STACK_LINE(184)
	this->height = (int)-1;
}
;
	return null();
}

//ZPP_AABBNode_obj::~ZPP_AABBNode_obj() { }

Dynamic ZPP_AABBNode_obj::__CreateEmpty() { return  new ZPP_AABBNode_obj; }
hx::ObjectPtr< ZPP_AABBNode_obj > ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZPP_AABBNode_obj > _result_ = new ZPP_AABBNode_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBNode_obj > _result_ = new ZPP_AABBNode_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_AABBNode_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBNode","alloc",0x5c339877,"zpp_nape.space.ZPP_AABBNode.alloc","zpp_nape/space/DynAABBPhase.hx",213,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(215)
			::zpp_nape::geom::ZPP_AABB tmp = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(215)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			if ((tmp1)){
				HX_STACK_LINE(216)
				::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(216)
				this->aabb = tmp2;
			}
			else{
				HX_STACK_LINE(222)
				::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(222)
				this->aabb = tmp2;
				HX_STACK_LINE(223)
				::zpp_nape::geom::ZPP_AABB tmp3 = this->aabb;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = tmp3->next;
				HX_STACK_LINE(224)
				::zpp_nape::geom::ZPP_AABB tmp4 = this->aabb;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(224)
				tmp4->next = null();
			}
			HX_STACK_LINE(229)
			Dynamic();
		}
		HX_STACK_LINE(231)
		this->moved = false;
		HX_STACK_LINE(232)
		this->synced = false;
		HX_STACK_LINE(233)
		this->first_sync = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,alloc,(void))

Void ZPP_AABBNode_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_AABBNode","free",0xc6e49eea,"zpp_nape.space.ZPP_AABBNode.free","zpp_nape/space/DynAABBPhase.hx",237,0x55500cf1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->height = (int)-1;
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(240)
			::zpp_nape::geom::ZPP_AABB tmp = this->aabb;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			::zpp_nape::geom::ZPP_AABB o = tmp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				bool tmp1 = (o->outer != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(249)
				if ((tmp1)){
					HX_STACK_LINE(249)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(249)
					o->outer = null();
				}
				HX_STACK_LINE(249)
				::nape::geom::Vec2 tmp2 = o->wrap_max = null();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				o->wrap_min = tmp2;
				HX_STACK_LINE(249)
				o->_invalidate = null();
				HX_STACK_LINE(249)
				o->_validate = null();
			}
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_AABB tmp1 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			o->next = tmp1;
			HX_STACK_LINE(251)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
		}
		HX_STACK_LINE(256)
		::zpp_nape::space::ZPP_AABBNode tmp = this->parent = null();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		::zpp_nape::space::ZPP_AABBNode tmp1 = this->child2 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		this->child1 = tmp1;
		HX_STACK_LINE(257)
		this->next = null();
		HX_STACK_LINE(258)
		this->snext = null();
		HX_STACK_LINE(259)
		this->mnext = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,free,(void))

bool ZPP_AABBNode_obj::isLeaf( ){
	HX_STACK_FRAME("zpp_nape.space.ZPP_AABBNode","isLeaf",0x766c5666,"zpp_nape.space.ZPP_AABBNode.isLeaf","zpp_nape/space/DynAABBPhase.hx",268,0x55500cf1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::zpp_nape::space::ZPP_AABBNode tmp = this->child1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,isLeaf,return )

::zpp_nape::space::ZPP_AABBNode ZPP_AABBNode_obj::zpp_pool;


ZPP_AABBNode_obj::ZPP_AABBNode_obj()
{
}

void ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(dyn,"dyn");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(child1,"child1");
	HX_MARK_MEMBER_NAME(child2,"child2");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rayt,"rayt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(mnext,"mnext");
	HX_MARK_MEMBER_NAME(moved,"moved");
	HX_MARK_MEMBER_NAME(snext,"snext");
	HX_MARK_MEMBER_NAME(synced,"synced");
	HX_MARK_MEMBER_NAME(first_sync,"first_sync");
	HX_MARK_END_CLASS();
}

void ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(dyn,"dyn");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(child1,"child1");
	HX_VISIT_MEMBER_NAME(child2,"child2");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rayt,"rayt");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(mnext,"mnext");
	HX_VISIT_MEMBER_NAME(moved,"moved");
	HX_VISIT_MEMBER_NAME(snext,"snext");
	HX_VISIT_MEMBER_NAME(synced,"synced");
	HX_VISIT_MEMBER_NAME(first_sync,"first_sync");
}

Dynamic ZPP_AABBNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return dyn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"rayt") ) { return rayt; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"mnext") ) { return mnext; }
		if (HX_FIELD_EQ(inName,"moved") ) { return moved; }
		if (HX_FIELD_EQ(inName,"snext") ) { return snext; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"child1") ) { return child1; }
		if (HX_FIELD_EQ(inName,"child2") ) { return child2; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"synced") ) { return synced; }
		if (HX_FIELD_EQ(inName,"isLeaf") ) { return isLeaf_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { return first_sync; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_AABBNode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { dyn=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayt") ) { rayt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mnext") ) { mnext=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moved") ) { moved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snext") ) { snext=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child1") ) { child1=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child2") ) { child2=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"synced") ) { synced=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { first_sync=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_AABBNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return true; }
	}
	return false;
}

void ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("dyn","\x39","\x4b","\x4c","\x00"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("child1","\x15","\xbf","\xba","\xbc"));
	outFields->push(HX_HCSTRING("child2","\x16","\xbf","\xba","\xbc"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("rayt","\x4a","\x57","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("mnext","\xe0","\xbf","\xaf","\x0b"));
	outFields->push(HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("snext","\xe6","\x3a","\x17","\x80"));
	outFields->push(HX_HCSTRING("synced","\x7a","\x9f","\x87","\xef"));
	outFields->push(HX_HCSTRING("first_sync","\x0a","\xb0","\x21","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_AABBNode_obj,aabb),HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_AABBNode_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,dyn),HX_HCSTRING("dyn","\x39","\x4b","\x4c","\x00")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,child1),HX_HCSTRING("child1","\x15","\xbf","\xba","\xbc")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,child2),HX_HCSTRING("child2","\x16","\xbf","\xba","\xbc")},
	{hx::fsInt,(int)offsetof(ZPP_AABBNode_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(ZPP_AABBNode_obj,rayt),HX_HCSTRING("rayt","\x4a","\x57","\xa4","\x4b")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,mnext),HX_HCSTRING("mnext","\xe0","\xbf","\xaf","\x0b")},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,moved),HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_AABBNode_obj,snext),HX_HCSTRING("snext","\xe6","\x3a","\x17","\x80")},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,synced),HX_HCSTRING("synced","\x7a","\x9f","\x87","\xef")},
	{hx::fsBool,(int)offsetof(ZPP_AABBNode_obj,first_sync),HX_HCSTRING("first_sync","\x0a","\xb0","\x21","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(void *) &ZPP_AABBNode_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"),
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("dyn","\x39","\x4b","\x4c","\x00"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("child1","\x15","\xbf","\xba","\xbc"),
	HX_HCSTRING("child2","\x16","\xbf","\xba","\xbc"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rayt","\x4a","\x57","\xa4","\x4b"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("mnext","\xe0","\xbf","\xaf","\x0b"),
	HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c"),
	HX_HCSTRING("snext","\xe6","\x3a","\x17","\x80"),
	HX_HCSTRING("synced","\x7a","\x9f","\x87","\xef"),
	HX_HCSTRING("first_sync","\x0a","\xb0","\x21","\xaa"),
	HX_HCSTRING("isLeaf","\xa8","\xc8","\x16","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_AABBNode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_AABBNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_AABBNode","\xf0","\x86","\x2d","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AABBNode_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AABBNode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_AABBNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void ZPP_AABBNode_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
