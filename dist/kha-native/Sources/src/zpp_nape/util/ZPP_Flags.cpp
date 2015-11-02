#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Flags_obj::__construct()
{
	return null();
}

//ZPP_Flags_obj::~ZPP_Flags_obj() { }

Dynamic ZPP_Flags_obj::__CreateEmpty() { return  new ZPP_Flags_obj; }
hx::ObjectPtr< ZPP_Flags_obj > ZPP_Flags_obj::__new()
{  hx::ObjectPtr< ZPP_Flags_obj > _result_ = new ZPP_Flags_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Flags_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Flags_obj > _result_ = new ZPP_Flags_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Flags_obj::internal;

int ZPP_Flags_obj::id_ImmState_ACCEPT;

int ZPP_Flags_obj::id_ImmState_IGNORE;

int ZPP_Flags_obj::id_ImmState_ALWAYS;

int ZPP_Flags_obj::id_GravMassMode_DEFAULT;

int ZPP_Flags_obj::id_GravMassMode_FIXED;

int ZPP_Flags_obj::id_GravMassMode_SCALED;

int ZPP_Flags_obj::id_InertiaMode_DEFAULT;

int ZPP_Flags_obj::id_InertiaMode_FIXED;

int ZPP_Flags_obj::id_MassMode_DEFAULT;

int ZPP_Flags_obj::id_MassMode_FIXED;

int ZPP_Flags_obj::id_BodyType_STATIC;

int ZPP_Flags_obj::id_BodyType_DYNAMIC;

int ZPP_Flags_obj::id_BodyType_KINEMATIC;

int ZPP_Flags_obj::id_ListenerType_BODY;

int ZPP_Flags_obj::id_ListenerType_CONSTRAINT;

int ZPP_Flags_obj::id_PreFlag_ACCEPT;

int ZPP_Flags_obj::id_ListenerType_INTERACTION;

int ZPP_Flags_obj::id_PreFlag_IGNORE;

int ZPP_Flags_obj::id_ListenerType_PRE;

int ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE;

int ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE;

int ZPP_Flags_obj::id_CbEvent_BEGIN;

int ZPP_Flags_obj::id_CbEvent_ONGOING;

int ZPP_Flags_obj::id_InteractionType_COLLISION;

int ZPP_Flags_obj::id_CbEvent_END;

int ZPP_Flags_obj::id_InteractionType_SENSOR;

int ZPP_Flags_obj::id_CbEvent_WAKE;

int ZPP_Flags_obj::id_InteractionType_FLUID;

int ZPP_Flags_obj::id_CbEvent_SLEEP;

int ZPP_Flags_obj::id_InteractionType_ANY;

int ZPP_Flags_obj::id_CbEvent_BREAK;

int ZPP_Flags_obj::id_CbEvent_PRE;

int ZPP_Flags_obj::id_Winding_UNDEFINED;

int ZPP_Flags_obj::id_Winding_CLOCKWISE;

int ZPP_Flags_obj::id_Winding_ANTICLOCKWISE;

int ZPP_Flags_obj::id_ValidationResult_VALID;

int ZPP_Flags_obj::id_ValidationResult_DEGENERATE;

int ZPP_Flags_obj::id_ValidationResult_CONCAVE;

int ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING;

int ZPP_Flags_obj::id_ShapeType_CIRCLE;

int ZPP_Flags_obj::id_ShapeType_POLYGON;

int ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE;

int ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE;

int ZPP_Flags_obj::id_ArbiterType_COLLISION;

int ZPP_Flags_obj::id_ArbiterType_SENSOR;

int ZPP_Flags_obj::id_ArbiterType_FLUID;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_DEFAULT;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_FIXED;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_SCALED;

::nape::phys::InertiaMode ZPP_Flags_obj::InertiaMode_DEFAULT;

::nape::phys::InertiaMode ZPP_Flags_obj::InertiaMode_FIXED;

::nape::phys::MassMode ZPP_Flags_obj::MassMode_DEFAULT;

::nape::phys::MassMode ZPP_Flags_obj::MassMode_FIXED;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_STATIC;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_DYNAMIC;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_KINEMATIC;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_BODY;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_CONSTRAINT;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_ACCEPT;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_INTERACTION;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_IGNORE;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_PRE;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_IGNORE_ONCE;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_BEGIN;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_ONGOING;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_COLLISION;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_END;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_SENSOR;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_WAKE;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_FLUID;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_SLEEP;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_ANY;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_BREAK;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_PRE;

::nape::geom::Winding ZPP_Flags_obj::Winding_UNDEFINED;

::nape::geom::Winding ZPP_Flags_obj::Winding_CLOCKWISE;

::nape::geom::Winding ZPP_Flags_obj::Winding_ANTICLOCKWISE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_VALID;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_DEGENERATE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_CONCAVE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;

::nape::shape::ShapeType ZPP_Flags_obj::ShapeType_CIRCLE;

::nape::shape::ShapeType ZPP_Flags_obj::ShapeType_POLYGON;

::nape::space::Broadphase ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;

::nape::space::Broadphase ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_COLLISION;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_SENSOR;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_FLUID;


ZPP_Flags_obj::ZPP_Flags_obj()
{
}

bool ZPP_Flags_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CbEvent_END") ) { outValue = CbEvent_END; return true;  }
		if (HX_FIELD_EQ(inName,"CbEvent_PRE") ) { outValue = CbEvent_PRE; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CbEvent_WAKE") ) { outValue = CbEvent_WAKE; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CbEvent_BEGIN") ) { outValue = CbEvent_BEGIN; return true;  }
		if (HX_FIELD_EQ(inName,"CbEvent_SLEEP") ) { outValue = CbEvent_SLEEP; return true;  }
		if (HX_FIELD_EQ(inName,"CbEvent_BREAK") ) { outValue = CbEvent_BREAK; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"id_CbEvent_END") ) { outValue = id_CbEvent_END; return true;  }
		if (HX_FIELD_EQ(inName,"id_CbEvent_PRE") ) { outValue = id_CbEvent_PRE; return true;  }
		if (HX_FIELD_EQ(inName,"MassMode_FIXED") ) { outValue = MassMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT") ) { outValue = PreFlag_ACCEPT; return true;  }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE") ) { outValue = PreFlag_IGNORE; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"id_CbEvent_WAKE") ) { outValue = id_CbEvent_WAKE; return true;  }
		if (HX_FIELD_EQ(inName,"BodyType_STATIC") ) { outValue = BodyType_STATIC; return true;  }
		if (HX_FIELD_EQ(inName,"CbEvent_ONGOING") ) { outValue = CbEvent_ONGOING; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"id_CbEvent_BEGIN") ) { outValue = id_CbEvent_BEGIN; return true;  }
		if (HX_FIELD_EQ(inName,"id_CbEvent_SLEEP") ) { outValue = id_CbEvent_SLEEP; return true;  }
		if (HX_FIELD_EQ(inName,"id_CbEvent_BREAK") ) { outValue = id_CbEvent_BREAK; return true;  }
		if (HX_FIELD_EQ(inName,"MassMode_DEFAULT") ) { outValue = MassMode_DEFAULT; return true;  }
		if (HX_FIELD_EQ(inName,"BodyType_DYNAMIC") ) { outValue = BodyType_DYNAMIC; return true;  }
		if (HX_FIELD_EQ(inName,"ListenerType_PRE") ) { outValue = ListenerType_PRE; return true;  }
		if (HX_FIELD_EQ(inName,"ShapeType_CIRCLE") ) { outValue = ShapeType_CIRCLE; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"id_MassMode_FIXED") ) { outValue = id_MassMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT") ) { outValue = id_PreFlag_ACCEPT; return true;  }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE") ) { outValue = id_PreFlag_IGNORE; return true;  }
		if (HX_FIELD_EQ(inName,"InertiaMode_FIXED") ) { outValue = InertiaMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"ListenerType_BODY") ) { outValue = ListenerType_BODY; return true;  }
		if (HX_FIELD_EQ(inName,"Winding_UNDEFINED") ) { outValue = Winding_UNDEFINED; return true;  }
		if (HX_FIELD_EQ(inName,"Winding_CLOCKWISE") ) { outValue = Winding_CLOCKWISE; return true;  }
		if (HX_FIELD_EQ(inName,"ShapeType_POLYGON") ) { outValue = ShapeType_POLYGON; return true;  }
		if (HX_FIELD_EQ(inName,"ArbiterType_FLUID") ) { outValue = ArbiterType_FLUID; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"id_ImmState_ACCEPT") ) { outValue = id_ImmState_ACCEPT; return true;  }
		if (HX_FIELD_EQ(inName,"id_ImmState_IGNORE") ) { outValue = id_ImmState_IGNORE; return true;  }
		if (HX_FIELD_EQ(inName,"id_ImmState_ALWAYS") ) { outValue = id_ImmState_ALWAYS; return true;  }
		if (HX_FIELD_EQ(inName,"id_BodyType_STATIC") ) { outValue = id_BodyType_STATIC; return true;  }
		if (HX_FIELD_EQ(inName,"id_CbEvent_ONGOING") ) { outValue = id_CbEvent_ONGOING; return true;  }
		if (HX_FIELD_EQ(inName,"GravMassMode_FIXED") ) { outValue = GravMassMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"BodyType_KINEMATIC") ) { outValue = BodyType_KINEMATIC; return true;  }
		if (HX_FIELD_EQ(inName,"ArbiterType_SENSOR") ) { outValue = ArbiterType_SENSOR; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"id_MassMode_DEFAULT") ) { outValue = id_MassMode_DEFAULT; return true;  }
		if (HX_FIELD_EQ(inName,"id_BodyType_DYNAMIC") ) { outValue = id_BodyType_DYNAMIC; return true;  }
		if (HX_FIELD_EQ(inName,"id_ListenerType_PRE") ) { outValue = id_ListenerType_PRE; return true;  }
		if (HX_FIELD_EQ(inName,"id_ShapeType_CIRCLE") ) { outValue = id_ShapeType_CIRCLE; return true;  }
		if (HX_FIELD_EQ(inName,"GravMassMode_SCALED") ) { outValue = GravMassMode_SCALED; return true;  }
		if (HX_FIELD_EQ(inName,"InertiaMode_DEFAULT") ) { outValue = InertiaMode_DEFAULT; return true;  }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT_ONCE") ) { outValue = PreFlag_ACCEPT_ONCE; return true;  }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE_ONCE") ) { outValue = PreFlag_IGNORE_ONCE; return true;  }
		if (HX_FIELD_EQ(inName,"InteractionType_ANY") ) { outValue = InteractionType_ANY; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"id_InertiaMode_FIXED") ) { outValue = id_InertiaMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"id_ListenerType_BODY") ) { outValue = id_ListenerType_BODY; return true;  }
		if (HX_FIELD_EQ(inName,"id_Winding_UNDEFINED") ) { outValue = id_Winding_UNDEFINED; return true;  }
		if (HX_FIELD_EQ(inName,"id_Winding_CLOCKWISE") ) { outValue = id_Winding_CLOCKWISE; return true;  }
		if (HX_FIELD_EQ(inName,"id_ShapeType_POLYGON") ) { outValue = id_ShapeType_POLYGON; return true;  }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_FLUID") ) { outValue = id_ArbiterType_FLUID; return true;  }
		if (HX_FIELD_EQ(inName,"GravMassMode_DEFAULT") ) { outValue = GravMassMode_DEFAULT; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_FIXED") ) { outValue = id_GravMassMode_FIXED; return true;  }
		if (HX_FIELD_EQ(inName,"id_BodyType_KINEMATIC") ) { outValue = id_BodyType_KINEMATIC; return true;  }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_SENSOR") ) { outValue = id_ArbiterType_SENSOR; return true;  }
		if (HX_FIELD_EQ(inName,"InteractionType_FLUID") ) { outValue = InteractionType_FLUID; return true;  }
		if (HX_FIELD_EQ(inName,"Winding_ANTICLOCKWISE") ) { outValue = Winding_ANTICLOCKWISE; return true;  }
		if (HX_FIELD_EQ(inName,"ArbiterType_COLLISION") ) { outValue = ArbiterType_COLLISION; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_SCALED") ) { outValue = id_GravMassMode_SCALED; return true;  }
		if (HX_FIELD_EQ(inName,"id_InertiaMode_DEFAULT") ) { outValue = id_InertiaMode_DEFAULT; return true;  }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT_ONCE") ) { outValue = id_PreFlag_ACCEPT_ONCE; return true;  }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE_ONCE") ) { outValue = id_PreFlag_IGNORE_ONCE; return true;  }
		if (HX_FIELD_EQ(inName,"id_InteractionType_ANY") ) { outValue = id_InteractionType_ANY; return true;  }
		if (HX_FIELD_EQ(inName,"InteractionType_SENSOR") ) { outValue = InteractionType_SENSOR; return true;  }
		if (HX_FIELD_EQ(inName,"ValidationResult_VALID") ) { outValue = ValidationResult_VALID; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_DEFAULT") ) { outValue = id_GravMassMode_DEFAULT; return true;  }
		if (HX_FIELD_EQ(inName,"ListenerType_CONSTRAINT") ) { outValue = ListenerType_CONSTRAINT; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"id_InteractionType_FLUID") ) { outValue = id_InteractionType_FLUID; return true;  }
		if (HX_FIELD_EQ(inName,"id_Winding_ANTICLOCKWISE") ) { outValue = id_Winding_ANTICLOCKWISE; return true;  }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_COLLISION") ) { outValue = id_ArbiterType_COLLISION; return true;  }
		if (HX_FIELD_EQ(inName,"ListenerType_INTERACTION") ) { outValue = ListenerType_INTERACTION; return true;  }
		if (HX_FIELD_EQ(inName,"ValidationResult_CONCAVE") ) { outValue = ValidationResult_CONCAVE; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"id_InteractionType_SENSOR") ) { outValue = id_InteractionType_SENSOR; return true;  }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_VALID") ) { outValue = id_ValidationResult_VALID; return true;  }
		if (HX_FIELD_EQ(inName,"InteractionType_COLLISION") ) { outValue = InteractionType_COLLISION; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"id_ListenerType_CONSTRAINT") ) { outValue = id_ListenerType_CONSTRAINT; return true;  }
		if (HX_FIELD_EQ(inName,"Broadphase_SWEEP_AND_PRUNE") ) { outValue = Broadphase_SWEEP_AND_PRUNE; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"id_ListenerType_INTERACTION") ) { outValue = id_ListenerType_INTERACTION; return true;  }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_CONCAVE") ) { outValue = id_ValidationResult_CONCAVE; return true;  }
		if (HX_FIELD_EQ(inName,"ValidationResult_DEGENERATE") ) { outValue = ValidationResult_DEGENERATE; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"id_InteractionType_COLLISION") ) { outValue = id_InteractionType_COLLISION; return true;  }
		if (HX_FIELD_EQ(inName,"Broadphase_DYNAMIC_AABB_TREE") ) { outValue = Broadphase_DYNAMIC_AABB_TREE; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"id_Broadphase_SWEEP_AND_PRUNE") ) { outValue = id_Broadphase_SWEEP_AND_PRUNE; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_DEGENERATE") ) { outValue = id_ValidationResult_DEGENERATE; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"id_Broadphase_DYNAMIC_AABB_TREE") ) { outValue = id_Broadphase_DYNAMIC_AABB_TREE; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"ValidationResult_SELF_INTERSECTING") ) { outValue = ValidationResult_SELF_INTERSECTING; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_SELF_INTERSECTING") ) { outValue = id_ValidationResult_SELF_INTERSECTING; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Flags_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ImmState_ACCEPT,HX_HCSTRING("id_ImmState_ACCEPT","\x9b","\x3c","\xf8","\x93")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ImmState_IGNORE,HX_HCSTRING("id_ImmState_IGNORE","\xa5","\x62","\xba","\x1b")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ImmState_ALWAYS,HX_HCSTRING("id_ImmState_ALWAYS","\x62","\xb8","\xc8","\xcf")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_GravMassMode_DEFAULT,HX_HCSTRING("id_GravMassMode_DEFAULT","\xdd","\xe5","\xd3","\x24")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_GravMassMode_FIXED,HX_HCSTRING("id_GravMassMode_FIXED","\x90","\x63","\x2e","\xbe")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_GravMassMode_SCALED,HX_HCSTRING("id_GravMassMode_SCALED","\xde","\x58","\x76","\x59")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InertiaMode_DEFAULT,HX_HCSTRING("id_InertiaMode_DEFAULT","\xdb","\x1a","\x6e","\x3b")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InertiaMode_FIXED,HX_HCSTRING("id_InertiaMode_FIXED","\x0e","\xbd","\x60","\x20")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_MassMode_DEFAULT,HX_HCSTRING("id_MassMode_DEFAULT","\xdd","\x07","\xb4","\x52")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_MassMode_FIXED,HX_HCSTRING("id_MassMode_FIXED","\x90","\x05","\x62","\xbe")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_BodyType_STATIC,HX_HCSTRING("id_BodyType_STATIC","\x8d","\xdb","\x74","\xef")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_BodyType_DYNAMIC,HX_HCSTRING("id_BodyType_DYNAMIC","\xa0","\xa3","\x7b","\x96")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_BodyType_KINEMATIC,HX_HCSTRING("id_BodyType_KINEMATIC","\x66","\x6b","\x07","\xad")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ListenerType_BODY,HX_HCSTRING("id_ListenerType_BODY","\xaf","\x4d","\xb6","\x72")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ListenerType_CONSTRAINT,HX_HCSTRING("id_ListenerType_CONSTRAINT","\x2a","\xc7","\xe0","\xbb")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_PreFlag_ACCEPT,HX_HCSTRING("id_PreFlag_ACCEPT","\x5c","\x96","\x9a","\x1d")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ListenerType_INTERACTION,HX_HCSTRING("id_ListenerType_INTERACTION","\x45","\x64","\x72","\xcd")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_PreFlag_IGNORE,HX_HCSTRING("id_PreFlag_IGNORE","\x66","\xbc","\x5c","\xa5")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ListenerType_PRE,HX_HCSTRING("id_ListenerType_PRE","\x96","\xd1","\x1d","\xde")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE,HX_HCSTRING("id_PreFlag_ACCEPT_ONCE","\x84","\x3d","\x9f","\x8c")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE,HX_HCSTRING("id_PreFlag_IGNORE_ONCE","\x3a","\xf3","\xe4","\x34")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_BEGIN,HX_HCSTRING("id_CbEvent_BEGIN","\xc1","\xdd","\x1c","\xbd")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_ONGOING,HX_HCSTRING("id_CbEvent_ONGOING","\xd3","\x97","\x21","\x9e")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InteractionType_COLLISION,HX_HCSTRING("id_InteractionType_COLLISION","\xfb","\x79","\x83","\xb7")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_END,HX_HCSTRING("id_CbEvent_END","\x73","\x7d","\x10","\x7a")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InteractionType_SENSOR,HX_HCSTRING("id_InteractionType_SENSOR","\xf1","\xc8","\xe6","\x07")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_WAKE,HX_HCSTRING("id_CbEvent_WAKE","\x6c","\x47","\x39","\x60")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InteractionType_FLUID,HX_HCSTRING("id_InteractionType_FLUID","\x13","\xab","\x8b","\x98")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_SLEEP,HX_HCSTRING("id_CbEvent_SLEEP","\xaf","\xb0","\x8b","\x8b")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_InteractionType_ANY,HX_HCSTRING("id_InteractionType_ANY","\xb5","\xe3","\x57","\x08")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_BREAK,HX_HCSTRING("id_CbEvent_BREAK","\x57","\x18","\xb3","\xc5")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_CbEvent_PRE,HX_HCSTRING("id_CbEvent_PRE","\xbb","\xd9","\x18","\x7a")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_Winding_UNDEFINED,HX_HCSTRING("id_Winding_UNDEFINED","\x07","\x6b","\xa0","\xb8")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_Winding_CLOCKWISE,HX_HCSTRING("id_Winding_CLOCKWISE","\x69","\xaa","\x35","\x58")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_Winding_ANTICLOCKWISE,HX_HCSTRING("id_Winding_ANTICLOCKWISE","\x07","\xe6","\xaf","\xdd")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ValidationResult_VALID,HX_HCSTRING("id_ValidationResult_VALID","\xd7","\x1d","\x63","\x79")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ValidationResult_DEGENERATE,HX_HCSTRING("id_ValidationResult_DEGENERATE","\xdb","\x34","\xc2","\xe2")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ValidationResult_CONCAVE,HX_HCSTRING("id_ValidationResult_CONCAVE","\x2a","\xa4","\x82","\x94")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING,HX_HCSTRING("id_ValidationResult_SELF_INTERSECTING","\xb1","\x6e","\x9e","\xb2")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ShapeType_CIRCLE,HX_HCSTRING("id_ShapeType_CIRCLE","\xd8","\x86","\xdb","\xaa")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ShapeType_POLYGON,HX_HCSTRING("id_ShapeType_POLYGON","\x92","\x1c","\x15","\xf2")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE,HX_HCSTRING("id_Broadphase_DYNAMIC_AABB_TREE","\x7b","\xad","\xc5","\x2c")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE,HX_HCSTRING("id_Broadphase_SWEEP_AND_PRUNE","\x4d","\xb4","\xde","\x1f")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ArbiterType_COLLISION,HX_HCSTRING("id_ArbiterType_COLLISION","\x52","\x0e","\x4a","\xac")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ArbiterType_SENSOR,HX_HCSTRING("id_ArbiterType_SENSOR","\x3a","\x28","\x06","\x2c")},
	{hx::fsInt,(void *) &ZPP_Flags_obj::id_ArbiterType_FLUID,HX_HCSTRING("id_ArbiterType_FLUID","\xea","\x87","\x0d","\x46")},
	{hx::fsObject /*::nape::phys::GravMassMode*/ ,(void *) &ZPP_Flags_obj::GravMassMode_DEFAULT,HX_HCSTRING("GravMassMode_DEFAULT","\xb9","\x77","\xcf","\x72")},
	{hx::fsObject /*::nape::phys::GravMassMode*/ ,(void *) &ZPP_Flags_obj::GravMassMode_FIXED,HX_HCSTRING("GravMassMode_FIXED","\x6c","\x86","\xb6","\x7f")},
	{hx::fsObject /*::nape::phys::GravMassMode*/ ,(void *) &ZPP_Flags_obj::GravMassMode_SCALED,HX_HCSTRING("GravMassMode_SCALED","\x82","\xb6","\x0c","\xef")},
	{hx::fsObject /*::nape::phys::InertiaMode*/ ,(void *) &ZPP_Flags_obj::InertiaMode_DEFAULT,HX_HCSTRING("InertiaMode_DEFAULT","\x7f","\x78","\x04","\xd1")},
	{hx::fsObject /*::nape::phys::InertiaMode*/ ,(void *) &ZPP_Flags_obj::InertiaMode_FIXED,HX_HCSTRING("InertiaMode_FIXED","\xb2","\xa9","\xe7","\x54")},
	{hx::fsObject /*::nape::phys::MassMode*/ ,(void *) &ZPP_Flags_obj::MassMode_DEFAULT,HX_HCSTRING("MassMode_DEFAULT","\xb9","\x7b","\xd2","\x78")},
	{hx::fsObject /*::nape::phys::MassMode*/ ,(void *) &ZPP_Flags_obj::MassMode_FIXED,HX_HCSTRING("MassMode_FIXED","\x6c","\x8a","\x30","\xf0")},
	{hx::fsObject /*::nape::phys::BodyType*/ ,(void *) &ZPP_Flags_obj::BodyType_STATIC,HX_HCSTRING("BodyType_STATIC","\x31","\x97","\x5a","\x52")},
	{hx::fsObject /*::nape::phys::BodyType*/ ,(void *) &ZPP_Flags_obj::BodyType_DYNAMIC,HX_HCSTRING("BodyType_DYNAMIC","\x7c","\x17","\x9a","\xbc")},
	{hx::fsObject /*::nape::phys::BodyType*/ ,(void *) &ZPP_Flags_obj::BodyType_KINEMATIC,HX_HCSTRING("BodyType_KINEMATIC","\x42","\x8e","\x8f","\x6e")},
	{hx::fsObject /*::nape::callbacks::ListenerType*/ ,(void *) &ZPP_Flags_obj::ListenerType_BODY,HX_HCSTRING("ListenerType_BODY","\x53","\x3a","\x3d","\xa7")},
	{hx::fsObject /*::nape::callbacks::ListenerType*/ ,(void *) &ZPP_Flags_obj::ListenerType_CONSTRAINT,HX_HCSTRING("ListenerType_CONSTRAINT","\xce","\xc6","\x20","\x86")},
	{hx::fsObject /*::nape::callbacks::PreFlag*/ ,(void *) &ZPP_Flags_obj::PreFlag_ACCEPT,HX_HCSTRING("PreFlag_ACCEPT","\x38","\x1b","\x69","\x4f")},
	{hx::fsObject /*::nape::callbacks::ListenerType*/ ,(void *) &ZPP_Flags_obj::ListenerType_INTERACTION,HX_HCSTRING("ListenerType_INTERACTION","\x21","\x14","\x32","\xfb")},
	{hx::fsObject /*::nape::callbacks::PreFlag*/ ,(void *) &ZPP_Flags_obj::PreFlag_IGNORE,HX_HCSTRING("PreFlag_IGNORE","\x42","\x41","\x2b","\xd7")},
	{hx::fsObject /*::nape::callbacks::ListenerType*/ ,(void *) &ZPP_Flags_obj::ListenerType_PRE,HX_HCSTRING("ListenerType_PRE","\x72","\x45","\x3c","\x04")},
	{hx::fsObject /*::nape::callbacks::PreFlag*/ ,(void *) &ZPP_Flags_obj::PreFlag_ACCEPT_ONCE,HX_HCSTRING("PreFlag_ACCEPT_ONCE","\x28","\x9b","\x35","\x22")},
	{hx::fsObject /*::nape::callbacks::PreFlag*/ ,(void *) &ZPP_Flags_obj::PreFlag_IGNORE_ONCE,HX_HCSTRING("PreFlag_IGNORE_ONCE","\xde","\x50","\x7b","\xca")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_BEGIN,HX_HCSTRING("CbEvent_BEGIN","\x65","\xa8","\xbf","\x99")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_ONGOING,HX_HCSTRING("CbEvent_ONGOING","\x77","\x53","\x07","\x01")},
	{hx::fsObject /*::nape::callbacks::InteractionType*/ ,(void *) &ZPP_Flags_obj::InteractionType_COLLISION,HX_HCSTRING("InteractionType_COLLISION","\x9f","\xaa","\x7d","\x91")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_END,HX_HCSTRING("CbEvent_END","\x17","\x97","\xbe","\xfb")},
	{hx::fsObject /*::nape::callbacks::InteractionType*/ ,(void *) &ZPP_Flags_obj::InteractionType_SENSOR,HX_HCSTRING("InteractionType_SENSOR","\xcd","\x89","\x4f","\x79")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_WAKE,HX_HCSTRING("CbEvent_WAKE","\x48","\x9d","\xe1","\x56")},
	{hx::fsObject /*::nape::callbacks::InteractionType*/ ,(void *) &ZPP_Flags_obj::InteractionType_FLUID,HX_HCSTRING("InteractionType_FLUID","\xb7","\xb9","\xaf","\x86")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_SLEEP,HX_HCSTRING("CbEvent_SLEEP","\x53","\x7b","\x2e","\x68")},
	{hx::fsObject /*::nape::callbacks::InteractionType*/ ,(void *) &ZPP_Flags_obj::InteractionType_ANY,HX_HCSTRING("InteractionType_ANY","\x59","\x41","\xee","\x9d")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_BREAK,HX_HCSTRING("CbEvent_BREAK","\xfb","\xe2","\x55","\xa2")},
	{hx::fsObject /*::nape::callbacks::CbEvent*/ ,(void *) &ZPP_Flags_obj::CbEvent_PRE,HX_HCSTRING("CbEvent_PRE","\x5f","\xf3","\xc6","\xfb")},
	{hx::fsObject /*::nape::geom::Winding*/ ,(void *) &ZPP_Flags_obj::Winding_UNDEFINED,HX_HCSTRING("Winding_UNDEFINED","\xab","\x57","\x27","\xed")},
	{hx::fsObject /*::nape::geom::Winding*/ ,(void *) &ZPP_Flags_obj::Winding_CLOCKWISE,HX_HCSTRING("Winding_CLOCKWISE","\x0d","\x97","\xbc","\x8c")},
	{hx::fsObject /*::nape::geom::Winding*/ ,(void *) &ZPP_Flags_obj::Winding_ANTICLOCKWISE,HX_HCSTRING("Winding_ANTICLOCKWISE","\xab","\xf4","\xd3","\xcb")},
	{hx::fsObject /*::nape::shape::ValidationResult*/ ,(void *) &ZPP_Flags_obj::ValidationResult_VALID,HX_HCSTRING("ValidationResult_VALID","\xb3","\xde","\xcb","\xea")},
	{hx::fsObject /*::nape::shape::ValidationResult*/ ,(void *) &ZPP_Flags_obj::ValidationResult_DEGENERATE,HX_HCSTRING("ValidationResult_DEGENERATE","\x7f","\xd6","\x24","\xd4")},
	{hx::fsObject /*::nape::shape::ValidationResult*/ ,(void *) &ZPP_Flags_obj::ValidationResult_CONCAVE,HX_HCSTRING("ValidationResult_CONCAVE","\x06","\x54","\x42","\xc2")},
	{hx::fsObject /*::nape::shape::ValidationResult*/ ,(void *) &ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING,HX_HCSTRING("ValidationResult_SELF_INTERSECTING","\x8d","\x09","\x93","\xef")},
	{hx::fsObject /*::nape::shape::ShapeType*/ ,(void *) &ZPP_Flags_obj::ShapeType_CIRCLE,HX_HCSTRING("ShapeType_CIRCLE","\xb4","\xfa","\xf9","\xd0")},
	{hx::fsObject /*::nape::shape::ShapeType*/ ,(void *) &ZPP_Flags_obj::ShapeType_POLYGON,HX_HCSTRING("ShapeType_POLYGON","\x36","\x09","\x9c","\x26")},
	{hx::fsObject /*::nape::space::Broadphase*/ ,(void *) &ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE,HX_HCSTRING("Broadphase_DYNAMIC_AABB_TREE","\x57","\x7b","\xb0","\x71")},
	{hx::fsObject /*::nape::space::Broadphase*/ ,(void *) &ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE,HX_HCSTRING("Broadphase_SWEEP_AND_PRUNE","\x29","\x13","\xcf","\x00")},
	{hx::fsObject /*::nape::dynamics::ArbiterType*/ ,(void *) &ZPP_Flags_obj::ArbiterType_COLLISION,HX_HCSTRING("ArbiterType_COLLISION","\xf6","\x1c","\x6e","\x9a")},
	{hx::fsObject /*::nape::dynamics::ArbiterType*/ ,(void *) &ZPP_Flags_obj::ArbiterType_SENSOR,HX_HCSTRING("ArbiterType_SENSOR","\x16","\x4b","\x8e","\xed")},
	{hx::fsObject /*::nape::dynamics::ArbiterType*/ ,(void *) &ZPP_Flags_obj::ArbiterType_FLUID,HX_HCSTRING("ArbiterType_FLUID","\x8e","\x74","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ACCEPT,"id_ImmState_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_IGNORE,"id_ImmState_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ALWAYS,"id_ImmState_ALWAYS");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_DEFAULT,"id_GravMassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_FIXED,"id_GravMassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_SCALED,"id_GravMassMode_SCALED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_DEFAULT,"id_InertiaMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_FIXED,"id_InertiaMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_DEFAULT,"id_MassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_FIXED,"id_MassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_STATIC,"id_BodyType_STATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_DYNAMIC,"id_BodyType_DYNAMIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_KINEMATIC,"id_BodyType_KINEMATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_BODY,"id_ListenerType_BODY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_CONSTRAINT,"id_ListenerType_CONSTRAINT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT,"id_PreFlag_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_INTERACTION,"id_ListenerType_INTERACTION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE,"id_PreFlag_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_PRE,"id_ListenerType_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE,"id_PreFlag_ACCEPT_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE,"id_PreFlag_IGNORE_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BEGIN,"id_CbEvent_BEGIN");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_ONGOING,"id_CbEvent_ONGOING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_COLLISION,"id_InteractionType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_END,"id_CbEvent_END");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_SENSOR,"id_InteractionType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_WAKE,"id_CbEvent_WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_FLUID,"id_InteractionType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_SLEEP,"id_CbEvent_SLEEP");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_ANY,"id_InteractionType_ANY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BREAK,"id_CbEvent_BREAK");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_PRE,"id_CbEvent_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_UNDEFINED,"id_Winding_UNDEFINED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_CLOCKWISE,"id_Winding_CLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_ANTICLOCKWISE,"id_Winding_ANTICLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_VALID,"id_ValidationResult_VALID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_DEGENERATE,"id_ValidationResult_DEGENERATE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_CONCAVE,"id_ValidationResult_CONCAVE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING,"id_ValidationResult_SELF_INTERSECTING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_CIRCLE,"id_ShapeType_CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_POLYGON,"id_ShapeType_POLYGON");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE,"id_Broadphase_DYNAMIC_AABB_TREE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE,"id_Broadphase_SWEEP_AND_PRUNE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_COLLISION,"id_ArbiterType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_SENSOR,"id_ArbiterType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_FLUID,"id_ArbiterType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_DEFAULT,"GravMassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_FIXED,"GravMassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_SCALED,"GravMassMode_SCALED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_DEFAULT,"InertiaMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_FIXED,"InertiaMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::MassMode_DEFAULT,"MassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::MassMode_FIXED,"MassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_STATIC,"BodyType_STATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_DYNAMIC,"BodyType_DYNAMIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_KINEMATIC,"BodyType_KINEMATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_BODY,"ListenerType_BODY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_CONSTRAINT,"ListenerType_CONSTRAINT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT,"PreFlag_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_INTERACTION,"ListenerType_INTERACTION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE,"PreFlag_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_PRE,"ListenerType_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT_ONCE,"PreFlag_ACCEPT_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE_ONCE,"PreFlag_IGNORE_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BEGIN,"CbEvent_BEGIN");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_ONGOING,"CbEvent_ONGOING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_COLLISION,"InteractionType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_END,"CbEvent_END");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_SENSOR,"InteractionType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_WAKE,"CbEvent_WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_FLUID,"InteractionType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_SLEEP,"CbEvent_SLEEP");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_ANY,"InteractionType_ANY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BREAK,"CbEvent_BREAK");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_PRE,"CbEvent_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_UNDEFINED,"Winding_UNDEFINED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_CLOCKWISE,"Winding_CLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_ANTICLOCKWISE,"Winding_ANTICLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_VALID,"ValidationResult_VALID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_DEGENERATE,"ValidationResult_DEGENERATE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_CONCAVE,"ValidationResult_CONCAVE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING,"ValidationResult_SELF_INTERSECTING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ShapeType_CIRCLE,"ShapeType_CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ShapeType_POLYGON,"ShapeType_POLYGON");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE,"Broadphase_DYNAMIC_AABB_TREE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE,"Broadphase_SWEEP_AND_PRUNE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_COLLISION,"ArbiterType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_SENSOR,"ArbiterType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_FLUID,"ArbiterType_FLUID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ACCEPT,"id_ImmState_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_IGNORE,"id_ImmState_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ALWAYS,"id_ImmState_ALWAYS");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_DEFAULT,"id_GravMassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_FIXED,"id_GravMassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_SCALED,"id_GravMassMode_SCALED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_DEFAULT,"id_InertiaMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_FIXED,"id_InertiaMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_DEFAULT,"id_MassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_FIXED,"id_MassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_STATIC,"id_BodyType_STATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_DYNAMIC,"id_BodyType_DYNAMIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_KINEMATIC,"id_BodyType_KINEMATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_BODY,"id_ListenerType_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_CONSTRAINT,"id_ListenerType_CONSTRAINT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT,"id_PreFlag_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_INTERACTION,"id_ListenerType_INTERACTION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE,"id_PreFlag_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_PRE,"id_ListenerType_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE,"id_PreFlag_ACCEPT_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE,"id_PreFlag_IGNORE_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BEGIN,"id_CbEvent_BEGIN");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_ONGOING,"id_CbEvent_ONGOING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_COLLISION,"id_InteractionType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_END,"id_CbEvent_END");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_SENSOR,"id_InteractionType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_WAKE,"id_CbEvent_WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_FLUID,"id_InteractionType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_SLEEP,"id_CbEvent_SLEEP");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_ANY,"id_InteractionType_ANY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BREAK,"id_CbEvent_BREAK");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_PRE,"id_CbEvent_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_UNDEFINED,"id_Winding_UNDEFINED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_CLOCKWISE,"id_Winding_CLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_ANTICLOCKWISE,"id_Winding_ANTICLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_VALID,"id_ValidationResult_VALID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_DEGENERATE,"id_ValidationResult_DEGENERATE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_CONCAVE,"id_ValidationResult_CONCAVE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING,"id_ValidationResult_SELF_INTERSECTING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_CIRCLE,"id_ShapeType_CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_POLYGON,"id_ShapeType_POLYGON");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE,"id_Broadphase_DYNAMIC_AABB_TREE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE,"id_Broadphase_SWEEP_AND_PRUNE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_COLLISION,"id_ArbiterType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_SENSOR,"id_ArbiterType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_FLUID,"id_ArbiterType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_DEFAULT,"GravMassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_FIXED,"GravMassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_SCALED,"GravMassMode_SCALED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_DEFAULT,"InertiaMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_FIXED,"InertiaMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::MassMode_DEFAULT,"MassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::MassMode_FIXED,"MassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_STATIC,"BodyType_STATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_DYNAMIC,"BodyType_DYNAMIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_KINEMATIC,"BodyType_KINEMATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_BODY,"ListenerType_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_CONSTRAINT,"ListenerType_CONSTRAINT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT,"PreFlag_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_INTERACTION,"ListenerType_INTERACTION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE,"PreFlag_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_PRE,"ListenerType_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT_ONCE,"PreFlag_ACCEPT_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE_ONCE,"PreFlag_IGNORE_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BEGIN,"CbEvent_BEGIN");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_ONGOING,"CbEvent_ONGOING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_COLLISION,"InteractionType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_END,"CbEvent_END");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_SENSOR,"InteractionType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_WAKE,"CbEvent_WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_FLUID,"InteractionType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_SLEEP,"CbEvent_SLEEP");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_ANY,"InteractionType_ANY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BREAK,"CbEvent_BREAK");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_PRE,"CbEvent_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_UNDEFINED,"Winding_UNDEFINED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_CLOCKWISE,"Winding_CLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_ANTICLOCKWISE,"Winding_ANTICLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_VALID,"ValidationResult_VALID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_DEGENERATE,"ValidationResult_DEGENERATE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_CONCAVE,"ValidationResult_CONCAVE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING,"ValidationResult_SELF_INTERSECTING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ShapeType_CIRCLE,"ShapeType_CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ShapeType_POLYGON,"ShapeType_POLYGON");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE,"Broadphase_DYNAMIC_AABB_TREE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE,"Broadphase_SWEEP_AND_PRUNE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_COLLISION,"ArbiterType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_SENSOR,"ArbiterType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_FLUID,"ArbiterType_FLUID");
};

#endif

hx::Class ZPP_Flags_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("id_ImmState_ACCEPT","\x9b","\x3c","\xf8","\x93"),
	HX_HCSTRING("id_ImmState_IGNORE","\xa5","\x62","\xba","\x1b"),
	HX_HCSTRING("id_ImmState_ALWAYS","\x62","\xb8","\xc8","\xcf"),
	HX_HCSTRING("id_GravMassMode_DEFAULT","\xdd","\xe5","\xd3","\x24"),
	HX_HCSTRING("id_GravMassMode_FIXED","\x90","\x63","\x2e","\xbe"),
	HX_HCSTRING("id_GravMassMode_SCALED","\xde","\x58","\x76","\x59"),
	HX_HCSTRING("id_InertiaMode_DEFAULT","\xdb","\x1a","\x6e","\x3b"),
	HX_HCSTRING("id_InertiaMode_FIXED","\x0e","\xbd","\x60","\x20"),
	HX_HCSTRING("id_MassMode_DEFAULT","\xdd","\x07","\xb4","\x52"),
	HX_HCSTRING("id_MassMode_FIXED","\x90","\x05","\x62","\xbe"),
	HX_HCSTRING("id_BodyType_STATIC","\x8d","\xdb","\x74","\xef"),
	HX_HCSTRING("id_BodyType_DYNAMIC","\xa0","\xa3","\x7b","\x96"),
	HX_HCSTRING("id_BodyType_KINEMATIC","\x66","\x6b","\x07","\xad"),
	HX_HCSTRING("id_ListenerType_BODY","\xaf","\x4d","\xb6","\x72"),
	HX_HCSTRING("id_ListenerType_CONSTRAINT","\x2a","\xc7","\xe0","\xbb"),
	HX_HCSTRING("id_PreFlag_ACCEPT","\x5c","\x96","\x9a","\x1d"),
	HX_HCSTRING("id_ListenerType_INTERACTION","\x45","\x64","\x72","\xcd"),
	HX_HCSTRING("id_PreFlag_IGNORE","\x66","\xbc","\x5c","\xa5"),
	HX_HCSTRING("id_ListenerType_PRE","\x96","\xd1","\x1d","\xde"),
	HX_HCSTRING("id_PreFlag_ACCEPT_ONCE","\x84","\x3d","\x9f","\x8c"),
	HX_HCSTRING("id_PreFlag_IGNORE_ONCE","\x3a","\xf3","\xe4","\x34"),
	HX_HCSTRING("id_CbEvent_BEGIN","\xc1","\xdd","\x1c","\xbd"),
	HX_HCSTRING("id_CbEvent_ONGOING","\xd3","\x97","\x21","\x9e"),
	HX_HCSTRING("id_InteractionType_COLLISION","\xfb","\x79","\x83","\xb7"),
	HX_HCSTRING("id_CbEvent_END","\x73","\x7d","\x10","\x7a"),
	HX_HCSTRING("id_InteractionType_SENSOR","\xf1","\xc8","\xe6","\x07"),
	HX_HCSTRING("id_CbEvent_WAKE","\x6c","\x47","\x39","\x60"),
	HX_HCSTRING("id_InteractionType_FLUID","\x13","\xab","\x8b","\x98"),
	HX_HCSTRING("id_CbEvent_SLEEP","\xaf","\xb0","\x8b","\x8b"),
	HX_HCSTRING("id_InteractionType_ANY","\xb5","\xe3","\x57","\x08"),
	HX_HCSTRING("id_CbEvent_BREAK","\x57","\x18","\xb3","\xc5"),
	HX_HCSTRING("id_CbEvent_PRE","\xbb","\xd9","\x18","\x7a"),
	HX_HCSTRING("id_Winding_UNDEFINED","\x07","\x6b","\xa0","\xb8"),
	HX_HCSTRING("id_Winding_CLOCKWISE","\x69","\xaa","\x35","\x58"),
	HX_HCSTRING("id_Winding_ANTICLOCKWISE","\x07","\xe6","\xaf","\xdd"),
	HX_HCSTRING("id_ValidationResult_VALID","\xd7","\x1d","\x63","\x79"),
	HX_HCSTRING("id_ValidationResult_DEGENERATE","\xdb","\x34","\xc2","\xe2"),
	HX_HCSTRING("id_ValidationResult_CONCAVE","\x2a","\xa4","\x82","\x94"),
	HX_HCSTRING("id_ValidationResult_SELF_INTERSECTING","\xb1","\x6e","\x9e","\xb2"),
	HX_HCSTRING("id_ShapeType_CIRCLE","\xd8","\x86","\xdb","\xaa"),
	HX_HCSTRING("id_ShapeType_POLYGON","\x92","\x1c","\x15","\xf2"),
	HX_HCSTRING("id_Broadphase_DYNAMIC_AABB_TREE","\x7b","\xad","\xc5","\x2c"),
	HX_HCSTRING("id_Broadphase_SWEEP_AND_PRUNE","\x4d","\xb4","\xde","\x1f"),
	HX_HCSTRING("id_ArbiterType_COLLISION","\x52","\x0e","\x4a","\xac"),
	HX_HCSTRING("id_ArbiterType_SENSOR","\x3a","\x28","\x06","\x2c"),
	HX_HCSTRING("id_ArbiterType_FLUID","\xea","\x87","\x0d","\x46"),
	HX_HCSTRING("GravMassMode_DEFAULT","\xb9","\x77","\xcf","\x72"),
	HX_HCSTRING("GravMassMode_FIXED","\x6c","\x86","\xb6","\x7f"),
	HX_HCSTRING("GravMassMode_SCALED","\x82","\xb6","\x0c","\xef"),
	HX_HCSTRING("InertiaMode_DEFAULT","\x7f","\x78","\x04","\xd1"),
	HX_HCSTRING("InertiaMode_FIXED","\xb2","\xa9","\xe7","\x54"),
	HX_HCSTRING("MassMode_DEFAULT","\xb9","\x7b","\xd2","\x78"),
	HX_HCSTRING("MassMode_FIXED","\x6c","\x8a","\x30","\xf0"),
	HX_HCSTRING("BodyType_STATIC","\x31","\x97","\x5a","\x52"),
	HX_HCSTRING("BodyType_DYNAMIC","\x7c","\x17","\x9a","\xbc"),
	HX_HCSTRING("BodyType_KINEMATIC","\x42","\x8e","\x8f","\x6e"),
	HX_HCSTRING("ListenerType_BODY","\x53","\x3a","\x3d","\xa7"),
	HX_HCSTRING("ListenerType_CONSTRAINT","\xce","\xc6","\x20","\x86"),
	HX_HCSTRING("PreFlag_ACCEPT","\x38","\x1b","\x69","\x4f"),
	HX_HCSTRING("ListenerType_INTERACTION","\x21","\x14","\x32","\xfb"),
	HX_HCSTRING("PreFlag_IGNORE","\x42","\x41","\x2b","\xd7"),
	HX_HCSTRING("ListenerType_PRE","\x72","\x45","\x3c","\x04"),
	HX_HCSTRING("PreFlag_ACCEPT_ONCE","\x28","\x9b","\x35","\x22"),
	HX_HCSTRING("PreFlag_IGNORE_ONCE","\xde","\x50","\x7b","\xca"),
	HX_HCSTRING("CbEvent_BEGIN","\x65","\xa8","\xbf","\x99"),
	HX_HCSTRING("CbEvent_ONGOING","\x77","\x53","\x07","\x01"),
	HX_HCSTRING("InteractionType_COLLISION","\x9f","\xaa","\x7d","\x91"),
	HX_HCSTRING("CbEvent_END","\x17","\x97","\xbe","\xfb"),
	HX_HCSTRING("InteractionType_SENSOR","\xcd","\x89","\x4f","\x79"),
	HX_HCSTRING("CbEvent_WAKE","\x48","\x9d","\xe1","\x56"),
	HX_HCSTRING("InteractionType_FLUID","\xb7","\xb9","\xaf","\x86"),
	HX_HCSTRING("CbEvent_SLEEP","\x53","\x7b","\x2e","\x68"),
	HX_HCSTRING("InteractionType_ANY","\x59","\x41","\xee","\x9d"),
	HX_HCSTRING("CbEvent_BREAK","\xfb","\xe2","\x55","\xa2"),
	HX_HCSTRING("CbEvent_PRE","\x5f","\xf3","\xc6","\xfb"),
	HX_HCSTRING("Winding_UNDEFINED","\xab","\x57","\x27","\xed"),
	HX_HCSTRING("Winding_CLOCKWISE","\x0d","\x97","\xbc","\x8c"),
	HX_HCSTRING("Winding_ANTICLOCKWISE","\xab","\xf4","\xd3","\xcb"),
	HX_HCSTRING("ValidationResult_VALID","\xb3","\xde","\xcb","\xea"),
	HX_HCSTRING("ValidationResult_DEGENERATE","\x7f","\xd6","\x24","\xd4"),
	HX_HCSTRING("ValidationResult_CONCAVE","\x06","\x54","\x42","\xc2"),
	HX_HCSTRING("ValidationResult_SELF_INTERSECTING","\x8d","\x09","\x93","\xef"),
	HX_HCSTRING("ShapeType_CIRCLE","\xb4","\xfa","\xf9","\xd0"),
	HX_HCSTRING("ShapeType_POLYGON","\x36","\x09","\x9c","\x26"),
	HX_HCSTRING("Broadphase_DYNAMIC_AABB_TREE","\x57","\x7b","\xb0","\x71"),
	HX_HCSTRING("Broadphase_SWEEP_AND_PRUNE","\x29","\x13","\xcf","\x00"),
	HX_HCSTRING("ArbiterType_COLLISION","\xf6","\x1c","\x6e","\x9a"),
	HX_HCSTRING("ArbiterType_SENSOR","\x16","\x4b","\x8e","\xed"),
	HX_HCSTRING("ArbiterType_FLUID","\x8e","\x74","\x94","\x7a"),
	::String(null()) };

void ZPP_Flags_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Flags","\x17","\x75","\x4c","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Flags_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Flags_obj >;
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

void ZPP_Flags_obj::__boot()
{
	internal= false;
	id_ImmState_ACCEPT= (int)1;
	id_ImmState_IGNORE= (int)2;
	id_ImmState_ALWAYS= (int)4;
	id_GravMassMode_DEFAULT= (int)0;
	id_GravMassMode_FIXED= (int)1;
	id_GravMassMode_SCALED= (int)2;
	id_InertiaMode_DEFAULT= (int)0;
	id_InertiaMode_FIXED= (int)1;
	id_MassMode_DEFAULT= (int)0;
	id_MassMode_FIXED= (int)1;
	id_BodyType_STATIC= (int)1;
	id_BodyType_DYNAMIC= (int)2;
	id_BodyType_KINEMATIC= (int)3;
	id_ListenerType_BODY= (int)0;
	id_ListenerType_CONSTRAINT= (int)1;
	id_PreFlag_ACCEPT= (int)1;
	id_ListenerType_INTERACTION= (int)2;
	id_PreFlag_IGNORE= (int)2;
	id_ListenerType_PRE= (int)3;
	id_PreFlag_ACCEPT_ONCE= (int)3;
	id_PreFlag_IGNORE_ONCE= (int)4;
	id_CbEvent_BEGIN= (int)0;
	id_CbEvent_ONGOING= (int)6;
	id_InteractionType_COLLISION= (int)1;
	id_CbEvent_END= (int)1;
	id_InteractionType_SENSOR= (int)2;
	id_CbEvent_WAKE= (int)2;
	id_InteractionType_FLUID= (int)4;
	id_CbEvent_SLEEP= (int)3;
	id_InteractionType_ANY= (int)7;
	id_CbEvent_BREAK= (int)4;
	id_CbEvent_PRE= (int)5;
	id_Winding_UNDEFINED= (int)0;
	id_Winding_CLOCKWISE= (int)1;
	id_Winding_ANTICLOCKWISE= (int)2;
	id_ValidationResult_VALID= (int)0;
	id_ValidationResult_DEGENERATE= (int)1;
	id_ValidationResult_CONCAVE= (int)2;
	id_ValidationResult_SELF_INTERSECTING= (int)3;
	id_ShapeType_CIRCLE= (int)0;
	id_ShapeType_POLYGON= (int)1;
	id_Broadphase_DYNAMIC_AABB_TREE= (int)0;
	id_Broadphase_SWEEP_AND_PRUNE= (int)1;
	id_ArbiterType_COLLISION= (int)1;
	id_ArbiterType_SENSOR= (int)2;
	id_ArbiterType_FLUID= (int)4;
}

} // end namespace zpp_nape
} // end namespace util
