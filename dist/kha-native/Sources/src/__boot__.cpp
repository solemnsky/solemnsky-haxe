#include <hxcpp.h>

#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <kha/graphics4/TextureAddressing.h>
#endif
#ifndef INCLUDED_kha_graphics4_TexDir
#include <kha/graphics4/TexDir.h>
#endif
#ifndef INCLUDED_kha_graphics4_StencilAction
#include <kha/graphics4/StencilAction.h>
#endif
#ifndef INCLUDED_kha_graphics4_MipMapFilter
#include <kha/graphics4/MipMapFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_CullMode
#include <kha/graphics4/CullMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_CompareMode
#include <kha/graphics4/CompareMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_Button
#include <kha/Button.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_control_demo_Direction
#include <control/demo/Direction.h>
#endif
#ifndef INCLUDED_control_demo_DemoSelect
#include <control/demo/DemoSelect.h>
#endif
#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
#endif
#ifndef INCLUDED_control_TextAlign
#include <control/TextAlign.h>
#endif
#ifndef INCLUDED_control_Noise
#include <control/Noise.h>
#endif
#ifndef INCLUDED_control_Key
#include <control/Key.h>
#endif
#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractionGroupList
#include <zpp_nape/util/ZPP_InteractionGroupList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_EdgeList
#include <zpp_nape/util/ZPP_EdgeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConvexResultList
#include <zpp_nape/util/ZPP_ConvexResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_RayResultList
#include <zpp_nape/util/ZPP_RayResultList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Triangular
#include <zpp_nape/geom/ZPP_Triangular.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#include <zpp_nape/geom/ZPP_Simple.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Monotone
#include <zpp_nape/geom/ZPP_Monotone.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Cutter
#include <zpp_nape/geom/ZPP_Cutter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_Const
#include <zpp_nape/ZPP_Const.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#include <nape/dynamics/InteractionGroupIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterfaceEmulated
#include <kha/vr/VrInterfaceEmulated.h>
#endif
#ifndef INCLUDED_kha_network_ControllerBuilder
#include <kha/network/ControllerBuilder.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_math_Matrix3
#include <kha/math/Matrix3.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_kore_Video
#include <kha/kore/Video.h>
#endif
#ifndef INCLUDED_kha_input_Sensor
#include <kha/input/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextShaderPainter
#include <kha/graphics4/TextShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_ColoredShaderPainter
#include <kha/graphics4/ColoredShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_ImageShaderPainter
#include <kha/graphics4/ImageShaderPainter.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_ScreenCanvas
#include <kha/ScreenCanvas.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_FontStyle
#include <kha/FontStyle.h>
#endif
#ifndef INCLUDED_kha_Configuration
#include <kha/Configuration.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_control_demo_PhysDemo
#include <control/demo/PhysDemo.h>
#endif
#ifndef INCLUDED_control_demo_FloatingBox
#include <control/demo/FloatingBox.h>
#endif
#ifndef INCLUDED_control_demo_Projectile
#include <control/demo/Projectile.h>
#endif
#ifndef INCLUDED_Manager
#include <Manager.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Math
#include <zpp_nape/util/ZPP_Math.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ToiEvent
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_MarchPair
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepPhase
#include <zpp_nape/space/ZPP_SweepPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_VecMath
#include <zpp_nape/geom/ZPP_VecMath.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#include <zpp_nape/geom/ZPP_Convex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_util_Util
#include <util/Util.h>
#endif
#ifndef INCLUDED_util_Transform
#include <util/Transform.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Geom
#include <nape/geom/Geom.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupList
#include <nape/dynamics/InteractionGroupList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroup
#include <nape/dynamics/InteractionGroup.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_MotorJoint
#include <nape/constraint/MotorJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_constraint_AngleJoint
#include <nape/constraint/AngleJoint.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha_math_FastVector2
#include <kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_loader_Room
#include <kha/loader/Room.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <kha/kore/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#include <kha/kore/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <kha/kore/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
#ifndef INCLUDED_kha_kore_Music
#include <kha/kore/Music.h>
#endif
#ifndef INCLUDED_kha_kore_Mouse
#include <kha/kore/Mouse.h>
#endif
#ifndef INCLUDED_kha_kore_Loader
#include <kha/kore/Loader.h>
#endif
#ifndef INCLUDED_kha_input_Surface
#include <kha/input/Surface.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_CubeMap
#include <kha/graphics4/CubeMap.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#include <kha/graphics2/GraphicsExtension.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics1
#include <kha/graphics2/Graphics1.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_audio2_SoundChannel
#include <kha/audio2/SoundChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_MusicChannel
#include <kha/audio2/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio1_SoundChannel
#include <kha/audio1/SoundChannel.h>
#endif
#ifndef INCLUDED_kha_audio1_MusicChannel
#include <kha/audio1/MusicChannel.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#include <kha/_SuperString/SuperString_Impl_.h>
#endif
#ifndef INCLUDED_kha_StorageFile
#include <kha/StorageFile.h>
#endif
#ifndef INCLUDED_kha_Starter
#include <kha/Starter.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_Score
#include <kha/Score.h>
#endif
#ifndef INCLUDED_kha_FrameTask
#include <kha/FrameTask.h>
#endif
#ifndef INCLUDED_kha_TimeTask
#include <kha/TimeTask.h>
#endif
#ifndef INCLUDED_kha_Scaler
#include <kha/Scaler.h>
#endif
#ifndef INCLUDED_kha_TargetRectangle
#include <kha/TargetRectangle.h>
#endif
#ifndef INCLUDED_kha_Rectangle
#include <kha/Rectangle.h>
#endif
#ifndef INCLUDED_kha_Music
#include <kha/Music.h>
#endif
#ifndef INCLUDED_kha_Mouse
#include <kha/Mouse.h>
#endif
#ifndef INCLUDED_kha_LoadingScreen
#include <kha/LoadingScreen.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_AlignedQuad
#include <kha/AlignedQuad.h>
#endif
#ifndef INCLUDED_kha_BakedChar
#include <kha/BakedChar.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_HighscoreList
#include <kha/HighscoreList.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_EmptyScreen
#include <kha/EmptyScreen.h>
#endif
#ifndef INCLUDED_kha_Cursor
#include <kha/Cursor.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_control_demo_InputDemo
#include <control/demo/InputDemo.h>
#endif
#ifndef INCLUDED_control_demo_GraphicsDemo
#include <control/demo/GraphicsDemo.h>
#endif
#ifndef INCLUDED_control_demo_AllDemo
#include <control/demo/AllDemo.h>
#endif
#ifndef INCLUDED_control_demo_SelectionScreen
#include <control/demo/SelectionScreen.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
#endif
#ifndef INCLUDED_control_Network
#include <control/Network.h>
#endif
#ifndef INCLUDED_control_EmptyControl
#include <control/EmptyControl.h>
#endif
#ifndef INCLUDED_control_Combinator
#include <control/Combinator.h>
#endif
#ifndef INCLUDED_control_ControlNetwork
#include <control/ControlNetwork.h>
#endif
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::kha::input::SensorType_obj::__register();
::kha::graphics4::VertexData_obj::__register();
::kha::graphics4::Usage_obj::__register();
::kha::graphics4::TextureFormat_obj::__register();
::kha::graphics4::TextureFilter_obj::__register();
::kha::graphics4::TextureAddressing_obj::__register();
::kha::graphics4::TexDir_obj::__register();
::kha::graphics4::StencilAction_obj::__register();
::kha::graphics4::MipMapFilter_obj::__register();
::kha::graphics4::CullMode_obj::__register();
::kha::graphics4::CompareMode_obj::__register();
::kha::graphics4::BlendingOperation_obj::__register();
::kha::ScreenRotation_obj::__register();
::kha::Key_obj::__register();
::kha::Button_obj::__register();
::haxe::io::Error_obj::__register();
::control::demo::Direction_obj::__register();
::control::demo::DemoSelect_obj::__register();
::control::DrawPrim_obj::__register();
::control::TextAlign_obj::__register();
::control::Noise_obj::__register();
::control::Key_obj::__register();
::control::Event_obj::__register();
::ValueType_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__register();
::zpp_nape::util::ZPP_PubPool_obj::__register();
::zpp_nape::util::ZPP_ContactList_obj::__register();
::zpp_nape::util::ZPP_ArbiterList_obj::__register();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__register();
::zpp_nape::util::ZPP_ShapeList_obj::__register();
::zpp_nape::util::ZPP_EdgeList_obj::__register();
::zpp_nape::util::ZPP_ConvexResultList_obj::__register();
::zpp_nape::util::ZPP_RayResultList_obj::__register();
::zpp_nape::util::ZPP_GeomPolyList_obj::__register();
::zpp_nape::util::ZPP_Vec2List_obj::__register();
::zpp_nape::util::ZPP_CbTypeList_obj::__register();
::zpp_nape::util::ZPP_ListenerList_obj::__register();
::zpp_nape::util::ZPP_CompoundList_obj::__register();
::zpp_nape::util::ZPP_InteractorList_obj::__register();
::zpp_nape::util::ZPP_BodyList_obj::__register();
::zpp_nape::util::ZPP_ConstraintList_obj::__register();
::zpp_nape::util::ZNPNode_RayResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__register();
::zpp_nape::util::Hashable2_Boolfalse_obj::__register();
::zpp_nape::space::ZPP_SweepData_obj::__register();
::zpp_nape::space::ZPP_CallbackSet_obj::__register();
::zpp_nape::space::ZPP_Component_obj::__register();
::zpp_nape::space::ZPP_Island_obj::__register();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__register();
::zpp_nape::space::ZPP_AABBTree_obj::__register();
::zpp_nape::space::ZPP_AABBPair_obj::__register();
::zpp_nape::space::ZPP_AABBNode_obj::__register();
::zpp_nape::shape::ZPP_Edge_obj::__register();
::zpp_nape::shape::ZPP_Shape_obj::__register();
::zpp_nape::phys::ZPP_Material_obj::__register();
::zpp_nape::phys::ZPP_FluidProperties_obj::__register();
::zpp_nape::phys::ZPP_Body_obj::__register();
::zpp_nape::geom::ZPP_Vec2_obj::__register();
::zpp_nape::geom::ZPP_Triangular_obj::__register();
::zpp_nape::geom::ZPP_PartitionPair_obj::__register();
::zpp_nape::geom::ZPP_ToiEvent_obj::__register();
::zpp_nape::geom::ZPP_Simplify_obj::__register();
::zpp_nape::geom::ZPP_SimplifyP_obj::__register();
::zpp_nape::geom::ZPP_SimplifyV_obj::__register();
::zpp_nape::geom::ZPP_Simple_obj::__register();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__register();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__register();
::zpp_nape::geom::ZPP_SimpleVert_obj::__register();
::zpp_nape::geom::ZPP_Ray_obj::__register();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__register();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__register();
::zpp_nape::geom::ZPP_Monotone_obj::__register();
::zpp_nape::geom::ZPP_Mat23_obj::__register();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__register();
::zpp_nape::geom::ZPP_MarchPair_obj::__register();
::zpp_nape::geom::ZPP_MarchSpan_obj::__register();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__register();
::zpp_nape::geom::ZPP_GeomVert_obj::__register();
::zpp_nape::geom::ZPP_Cutter_obj::__register();
::zpp_nape::geom::ZPP_CutInt_obj::__register();
::zpp_nape::geom::ZPP_CutVert_obj::__register();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__register();
::zpp_nape::geom::ZPP_Collide_obj::__register();
::zpp_nape::geom::ZPP_AABB_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__register();
::zpp_nape::dynamics::ZPP_Contact_obj::__register();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__register();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__register();
::zpp_nape::callbacks::ZPP_Listener_obj::__register();
::zpp_nape::util::ZPP_Flags_obj::__register();
::zpp_nape::callbacks::ZPP_CbType_obj::__register();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__register();
::zpp_nape::callbacks::ZPP_CbSet_obj::__register();
::zpp_nape::callbacks::ZPP_Callback_obj::__register();
::zpp_nape::ZPP_ID_obj::__register();
::zpp_nape::ZPP_Const_obj::__register();
::util::Vector_obj::__register();
::sys::io::File_obj::__register();
::nape::shape::ShapeIterator_obj::__register();
::nape::shape::EdgeIterator_obj::__register();
::nape::shape::Shape_obj::__register();
::nape::phys::InteractorIterator_obj::__register();
::nape::phys::CompoundIterator_obj::__register();
::nape::phys::BodyIterator_obj::__register();
::nape::phys::Interactor_obj::__register();
::nape::geom::Vec2Iterator_obj::__register();
::nape::geom::RayResultIterator_obj::__register();
::nape::geom::GeomPolyIterator_obj::__register();
::nape::geom::ConvexResultIterator_obj::__register();
::nape::dynamics::InteractionGroupIterator_obj::__register();
::nape::dynamics::ContactIterator_obj::__register();
::nape::dynamics::ArbiterIterator_obj::__register();
::nape::constraint::ConstraintIterator_obj::__register();
::nape::constraint::Constraint_obj::__register();
::nape::callbacks::ListenerIterator_obj::__register();
::nape::callbacks::CbTypeIterator_obj::__register();
::nape::Config_obj::__register();
::kha::vr::VrInterfaceEmulated_obj::__register();
::kha::network::ControllerBuilder_obj::__register();
::kha::math::Quaternion_obj::__register();
::kha::math::Matrix4_obj::__register();
::kha::math::Matrix3_obj::__register();
::kha::math::FastMatrix3_obj::__register();
::kha::kore::Video_obj::__register();
::kha::input::Sensor_obj::__register();
::kha::input::Mouse_obj::__register();
::kha::input::Keyboard_obj::__register();
::kha::input::Gamepad_obj::__register();
::kha::graphics4::TextShaderPainter_obj::__register();
::kha::graphics4::ColoredShaderPainter_obj::__register();
::kha::graphics4::ImageShaderPainter_obj::__register();
::kha::audio2::Audio1_obj::__register();
::kha::Sys_obj::__register();
::kha::ScreenCanvas_obj::__register();
::kha::Scheduler_obj::__register();
::kha::Kravur_obj::__register();
::kha::FontStyle_obj::__register();
::kha::Configuration_obj::__register();
::kha::_Color::Color_Impl__obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Log_obj::__register();
::control::demo::PhysDemo_obj::__register();
::control::demo::FloatingBox_obj::__register();
::control::demo::Projectile_obj::__register();
::Manager_obj::__register();
::kha::Game_obj::__register();
::zpp_nape::util::ZPP_Math_obj::__register();
::zpp_nape::util::ZPP_MixVec2List_obj::__register();
::zpp_nape::util::ZNPList_RayResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPList_ConvexResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPArray2_Float_obj::__register();
::zpp_nape::space::ZPP_SweepPhase_obj::__register();
::zpp_nape::space::ZPP_Space_obj::__register();
::zpp_nape::space::ZPP_CbSetManager_obj::__register();
::zpp_nape::space::ZPP_Broadphase_obj::__register();
::zpp_nape::shape::ZPP_Polygon_obj::__register();
::zpp_nape::shape::ZPP_Circle_obj::__register();
::zpp_nape::phys::ZPP_Compound_obj::__register();
::zpp_nape::phys::ZPP_Interactor_obj::__register();
::zpp_nape::geom::ZPP_VecMath_obj::__register();
::zpp_nape::geom::ZPP_Vec3_obj::__register();
::zpp_nape::geom::ZPP_SweepDistance_obj::__register();
::zpp_nape::geom::ZPP_SimpleSweep_obj::__register();
::zpp_nape::geom::ZPP_MatMN_obj::__register();
::zpp_nape::geom::ZPP_GeomPoly_obj::__register();
::zpp_nape::geom::ZPP_Geom_obj::__register();
::zpp_nape::geom::ZPP_Convex_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__register();
::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__register();
::zpp_nape::dynamics::ZPP_IContact_obj::__register();
::zpp_nape::constraint::ZPP_WeldJoint_obj::__register();
::zpp_nape::constraint::ZPP_UserBody_obj::__register();
::zpp_nape::constraint::ZPP_UserConstraint_obj::__register();
::zpp_nape::constraint::ZPP_PulleyJoint_obj::__register();
::zpp_nape::constraint::ZPP_PivotJoint_obj::__register();
::zpp_nape::constraint::ZPP_MotorJoint_obj::__register();
::zpp_nape::constraint::ZPP_LineJoint_obj::__register();
::zpp_nape::constraint::ZPP_DistanceJoint_obj::__register();
::zpp_nape::constraint::ZPP_CopyHelper_obj::__register();
::zpp_nape::constraint::ZPP_AngleJoint_obj::__register();
::zpp_nape::constraint::ZPP_Constraint_obj::__register();
::zpp_nape::callbacks::ZPP_OptionType_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbType_obj::__register();
::zpp_nape::callbacks::ZPP_ConstraintListener_obj::__register();
::zpp_nape::callbacks::ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__register();
::util::Util_obj::__register();
::util::Transform_obj::__register();
::nape::util::Debug_obj::__register();
::nape::space::Space_obj::__register();
::nape::space::Broadphase_obj::__register();
::nape::shape::ValidationResult_obj::__register();
::nape::shape::ShapeType_obj::__register();
::nape::shape::ShapeList_obj::__register();
::nape::shape::Polygon_obj::__register();
::nape::shape::EdgeList_obj::__register();
::nape::shape::Edge_obj::__register();
::nape::shape::Circle_obj::__register();
::nape::phys::Material_obj::__register();
::nape::phys::MassMode_obj::__register();
::nape::phys::InteractorList_obj::__register();
::nape::phys::InertiaMode_obj::__register();
::nape::phys::GravMassMode_obj::__register();
::nape::phys::FluidProperties_obj::__register();
::nape::phys::CompoundList_obj::__register();
::nape::phys::Compound_obj::__register();
::nape::phys::BodyType_obj::__register();
::nape::phys::BodyList_obj::__register();
::nape::phys::Body_obj::__register();
::nape::geom::Winding_obj::__register();
::nape::geom::Vec3_obj::__register();
::nape::geom::Vec2List_obj::__register();
::nape::geom::Vec2_obj::__register();
::nape::geom::RayResultList_obj::__register();
::nape::geom::RayResult_obj::__register();
::nape::geom::Ray_obj::__register();
::nape::geom::MatMN_obj::__register();
::nape::geom::Mat23_obj::__register();
::nape::geom::MarchingSquares_obj::__register();
::nape::geom::GeomVertexIterator_obj::__register();
::nape::geom::GeomPolyList_obj::__register();
::nape::geom::GeomPoly_obj::__register();
::nape::geom::Geom_obj::__register();
::nape::geom::ConvexResultList_obj::__register();
::nape::geom::ConvexResult_obj::__register();
::nape::geom::AABB_obj::__register();
::nape::dynamics::InteractionGroupList_obj::__register();
::nape::dynamics::InteractionGroup_obj::__register();
::nape::dynamics::InteractionFilter_obj::__register();
::nape::dynamics::FluidArbiter_obj::__register();
::nape::dynamics::ContactList_obj::__register();
::nape::dynamics::Contact_obj::__register();
::nape::dynamics::CollisionArbiter_obj::__register();
::nape::dynamics::ArbiterType_obj::__register();
::nape::dynamics::ArbiterList_obj::__register();
::nape::dynamics::Arbiter_obj::__register();
::nape::constraint::WeldJoint_obj::__register();
::nape::constraint::UserConstraint_obj::__register();
::nape::constraint::PulleyJoint_obj::__register();
::nape::constraint::PivotJoint_obj::__register();
::nape::constraint::MotorJoint_obj::__register();
::nape::constraint::LineJoint_obj::__register();
::nape::constraint::DistanceJoint_obj::__register();
::nape::constraint::ConstraintList_obj::__register();
::nape::constraint::AngleJoint_obj::__register();
::nape::callbacks::PreListener_obj::__register();
::nape::callbacks::PreFlag_obj::__register();
::nape::callbacks::PreCallback_obj::__register();
::nape::callbacks::OptionType_obj::__register();
::nape::callbacks::ListenerType_obj::__register();
::nape::callbacks::ListenerList_obj::__register();
::nape::callbacks::InteractionType_obj::__register();
::nape::callbacks::InteractionListener_obj::__register();
::nape::callbacks::InteractionCallback_obj::__register();
::nape::callbacks::ConstraintListener_obj::__register();
::nape::callbacks::ConstraintCallback_obj::__register();
::nape::callbacks::CbTypeList_obj::__register();
::nape::callbacks::CbType_obj::__register();
::nape::callbacks::CbEvent_obj::__register();
::nape::callbacks::BodyListener_obj::__register();
::nape::callbacks::Listener_obj::__register();
::nape::callbacks::BodyCallback_obj::__register();
::nape::callbacks::Callback_obj::__register();
::kha::vr::VrInterface_obj::__register();
::kha::vr::TimeWarpParms_obj::__register();
::kha::vr::TimeWarpImage_obj::__register();
::kha::vr::SensorState_obj::__register();
::kha::vr::PoseState_obj::__register();
::kha::vr::Pose_obj::__register();
::kha::math::Vector4_obj::__register();
::kha::math::Vector3_obj::__register();
::kha::math::Vector2_obj::__register();
::kha::math::FastVector2_obj::__register();
::kha::loader::Room_obj::__register();
::kha::kore::graphics4::TextureUnit_obj::__register();
::kha::kore::graphics4::Graphics2_obj::__register();
::kha::kore::graphics4::Graphics_obj::__register();
::kha::kore::graphics4::ConstantLocation_obj::__register();
::kha::kore::Sound_obj::__register();
::kha::kore::Music_obj::__register();
::kha::kore::Mouse_obj::__register();
::kha::kore::Loader_obj::__register();
::kha::input::Surface_obj::__register();
::kha::network::Controller_obj::__register();
::kha::graphics4::VertexStructure_obj::__register();
::kha::graphics4::VertexShader_obj::__register();
::kha::graphics4::VertexElement_obj::__register();
::kha::graphics4::VertexBuffer_obj::__register();
::kha::graphics4::TextureUnit_obj::__register();
::kha::graphics4::Program_obj::__register();
::kha::graphics4::IndexBuffer_obj::__register();
::kha::graphics4::Graphics2_obj::__register();
::kha::graphics4::Graphics_obj::__register();
::kha::graphics4::FragmentShader_obj::__register();
::kha::graphics4::CubeMap_obj::__register();
::kha::graphics4::ConstantLocation_obj::__register();
::kha::graphics2::GraphicsExtension_obj::__register();
::kha::graphics2::Graphics1_obj::__register();
::kha::graphics2::Graphics_obj::__register();
::kha::graphics1::Graphics_obj::__register();
::kha::audio2::SoundChannel_obj::__register();
::kha::audio2::MusicChannel_obj::__register();
::kha::audio2::Buffer_obj::__register();
::kha::audio2::Audio_obj::__register();
::kha::audio1::SoundChannel_obj::__register();
::kha::audio1::MusicChannel_obj::__register();
::kha::arrays::Float32Array_obj::__register();
::kha::Video_obj::__register();
::kha::_SuperString::SuperString_Impl__obj::__register();
::kha::StorageFile_obj::__register();
::kha::Starter_obj::__register();
::kha::Sound_obj::__register();
::kha::Score_obj::__register();
::kha::FrameTask_obj::__register();
::kha::TimeTask_obj::__register();
::kha::Scaler_obj::__register();
::kha::TargetRectangle_obj::__register();
::kha::Rectangle_obj::__register();
::kha::Music_obj::__register();
::kha::Mouse_obj::__register();
::kha::LoadingScreen_obj::__register();
::kha::Loader_obj::__register();
::kha::AlignedQuad_obj::__register();
::kha::BakedChar_obj::__register();
::kha::Image_obj::__register();
::kha::Resource_obj::__register();
::kha::HighscoreList_obj::__register();
::kha::Framebuffer_obj::__register();
::kha::Font_obj::__register();
::kha::EmptyScreen_obj::__register();
::kha::Cursor_obj::__register();
::kha::Canvas_obj::__register();
::kha::Blob_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::ds::EnumValueMap_obj::__register();
::haxe::ds::TreeNode_obj::__register();
::haxe::ds::BalancedTree_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::Timer_obj::__register();
::haxe::IMap_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::Lib_obj::__register();
::control::demo::InputDemo_obj::__register();
::control::demo::GraphicsDemo_obj::__register();
::control::demo::AllDemo_obj::__register();
::control::demo::SelectionScreen_obj::__register();
::control::Scene_obj::__register();
::control::Profile_obj::__register();
::control::Network_obj::__register();
::control::EmptyControl_obj::__register();
::control::Combinator_obj::__register();
::control::ControlNetwork_obj::__register();
::control::Control_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Render_obj::__register();
::Reflect_obj::__register();
::Main_obj::__register();
::_List::ListIterator_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::Date_obj::__register();
::kha::input::SensorType_obj::__boot();
::kha::graphics4::VertexData_obj::__boot();
::kha::graphics4::Usage_obj::__boot();
::kha::graphics4::TextureFormat_obj::__boot();
::kha::graphics4::TextureFilter_obj::__boot();
::kha::graphics4::TextureAddressing_obj::__boot();
::kha::graphics4::TexDir_obj::__boot();
::kha::graphics4::StencilAction_obj::__boot();
::kha::graphics4::MipMapFilter_obj::__boot();
::kha::graphics4::CullMode_obj::__boot();
::kha::graphics4::CompareMode_obj::__boot();
::kha::graphics4::BlendingOperation_obj::__boot();
::kha::ScreenRotation_obj::__boot();
::kha::Key_obj::__boot();
::kha::Button_obj::__boot();
::haxe::io::Error_obj::__boot();
::control::demo::Direction_obj::__boot();
::control::demo::DemoSelect_obj::__boot();
::control::DrawPrim_obj::__boot();
::control::TextAlign_obj::__boot();
::control::Noise_obj::__boot();
::control::Key_obj::__boot();
::control::Event_obj::__boot();
::ValueType_obj::__boot();
::haxe::Log_obj::__boot();
::kha::Game_obj::__boot();
::Manager_obj::__boot();
::control::demo::Projectile_obj::__boot();
::control::demo::FloatingBox_obj::__boot();
::control::demo::PhysDemo_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::kha::_Color::Color_Impl__obj::__boot();
::kha::Configuration_obj::__boot();
::kha::FontStyle_obj::__boot();
::kha::Kravur_obj::__boot();
::kha::Scheduler_obj::__boot();
::kha::ScreenCanvas_obj::__boot();
::kha::Sys_obj::__boot();
::kha::audio2::Audio1_obj::__boot();
::kha::graphics4::ImageShaderPainter_obj::__boot();
::kha::graphics4::ColoredShaderPainter_obj::__boot();
::kha::graphics4::TextShaderPainter_obj::__boot();
::kha::input::Gamepad_obj::__boot();
::kha::input::Keyboard_obj::__boot();
::kha::input::Mouse_obj::__boot();
::kha::input::Sensor_obj::__boot();
::kha::kore::Video_obj::__boot();
::kha::math::FastMatrix3_obj::__boot();
::kha::math::Matrix3_obj::__boot();
::kha::math::Matrix4_obj::__boot();
::kha::math::Quaternion_obj::__boot();
::kha::network::ControllerBuilder_obj::__boot();
::kha::vr::VrInterfaceEmulated_obj::__boot();
::nape::Config_obj::__boot();
::nape::callbacks::CbTypeIterator_obj::__boot();
::nape::callbacks::ListenerIterator_obj::__boot();
::nape::constraint::Constraint_obj::__boot();
::nape::constraint::ConstraintIterator_obj::__boot();
::nape::dynamics::ArbiterIterator_obj::__boot();
::nape::dynamics::ContactIterator_obj::__boot();
::nape::dynamics::InteractionGroupIterator_obj::__boot();
::nape::geom::ConvexResultIterator_obj::__boot();
::nape::geom::GeomPolyIterator_obj::__boot();
::nape::geom::RayResultIterator_obj::__boot();
::nape::geom::Vec2Iterator_obj::__boot();
::nape::phys::Interactor_obj::__boot();
::nape::phys::BodyIterator_obj::__boot();
::nape::phys::CompoundIterator_obj::__boot();
::nape::phys::InteractorIterator_obj::__boot();
::nape::shape::Shape_obj::__boot();
::nape::shape::EdgeIterator_obj::__boot();
::nape::shape::ShapeIterator_obj::__boot();
::sys::io::File_obj::__boot();
::util::Vector_obj::__boot();
::zpp_nape::ZPP_Const_obj::__boot();
::zpp_nape::ZPP_ID_obj::__boot();
::zpp_nape::callbacks::ZPP_Callback_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSet_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__boot();
::zpp_nape::callbacks::ZPP_CbType_obj::__boot();
::zpp_nape::util::ZPP_Flags_obj::__boot();
::zpp_nape::callbacks::ZPP_Listener_obj::__boot();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__boot();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_Contact_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__boot();
::zpp_nape::geom::ZPP_AABB_obj::__boot();
::zpp_nape::geom::ZPP_Collide_obj::__boot();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__boot();
::zpp_nape::geom::ZPP_CutVert_obj::__boot();
::zpp_nape::geom::ZPP_CutInt_obj::__boot();
::zpp_nape::geom::ZPP_Cutter_obj::__boot();
::zpp_nape::geom::ZPP_GeomVert_obj::__boot();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__boot();
::zpp_nape::geom::ZPP_MarchSpan_obj::__boot();
::zpp_nape::geom::ZPP_MarchPair_obj::__boot();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__boot();
::zpp_nape::geom::ZPP_Mat23_obj::__boot();
::zpp_nape::geom::ZPP_Monotone_obj::__boot();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__boot();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::geom::ZPP_Ray_obj::__boot();
::zpp_nape::geom::ZPP_SimpleVert_obj::__boot();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__boot();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__boot();
::zpp_nape::geom::ZPP_Simple_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyV_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyP_obj::__boot();
::zpp_nape::geom::ZPP_Simplify_obj::__boot();
::zpp_nape::geom::ZPP_ToiEvent_obj::__boot();
::zpp_nape::geom::ZPP_PartitionPair_obj::__boot();
::zpp_nape::geom::ZPP_Triangular_obj::__boot();
::zpp_nape::geom::ZPP_Vec2_obj::__boot();
::zpp_nape::phys::ZPP_Body_obj::__boot();
::zpp_nape::phys::ZPP_FluidProperties_obj::__boot();
::zpp_nape::phys::ZPP_Material_obj::__boot();
::zpp_nape::shape::ZPP_Shape_obj::__boot();
::zpp_nape::shape::ZPP_Edge_obj::__boot();
::zpp_nape::space::ZPP_AABBNode_obj::__boot();
::zpp_nape::space::ZPP_AABBPair_obj::__boot();
::zpp_nape::space::ZPP_AABBTree_obj::__boot();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__boot();
::zpp_nape::space::ZPP_Island_obj::__boot();
::zpp_nape::space::ZPP_Component_obj::__boot();
::zpp_nape::space::ZPP_CallbackSet_obj::__boot();
::zpp_nape::space::ZPP_SweepData_obj::__boot();
::zpp_nape::util::Hashable2_Boolfalse_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__boot();
::zpp_nape::util::ZNPNode_RayResult_obj::__boot();
::zpp_nape::util::ZPP_ConstraintList_obj::__boot();
::zpp_nape::util::ZPP_BodyList_obj::__boot();
::zpp_nape::util::ZPP_InteractorList_obj::__boot();
::zpp_nape::util::ZPP_CompoundList_obj::__boot();
::zpp_nape::util::ZPP_ListenerList_obj::__boot();
::zpp_nape::util::ZPP_CbTypeList_obj::__boot();
::zpp_nape::util::ZPP_Vec2List_obj::__boot();
::zpp_nape::util::ZPP_GeomPolyList_obj::__boot();
::zpp_nape::util::ZPP_RayResultList_obj::__boot();
::zpp_nape::util::ZPP_ConvexResultList_obj::__boot();
::zpp_nape::util::ZPP_EdgeList_obj::__boot();
::zpp_nape::util::ZPP_ShapeList_obj::__boot();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__boot();
::zpp_nape::util::ZPP_ArbiterList_obj::__boot();
::zpp_nape::util::ZPP_ContactList_obj::__boot();
::zpp_nape::util::ZPP_PubPool_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__boot();
}

