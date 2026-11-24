/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xRenderedPhysicsModel.cpp
*/
// Range: 0x80076DA0 -> 0x80077384
void RenderedPhysicsModel::Setup(class RenderedPhysicsModel * this /* r22 */, class RenderedPhysicsModelAsset * rpmAsset /* r19 */, enum zUpHavokBodyOwner owner /* r23 */, void * userData /* r24 */, bool doRenderPhysicsOn /* r25 */, enum eShadow shadowOption /* r27 */) {
    // Local variables
    class hkpRigidBodyCinfo havokCinfo; // r1+0x50

    // References
    // -> class Scene * primaryScene;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80077390 -> 0x80077974
void RenderedPhysicsModel::Setup(class RenderedPhysicsModel * this /* r22 */, class ModelInstanceAsset * model /* r23 */, class Vector * initialPos /* r20 */, class Vector * initialRot /* r19 */, enum zUpHavokBodyOwner owner /* r24 */, void * userData /* r25 */, bool doRenderPhysicsOn /* r26 */, enum eShadow shadowOption /* r27 */) {
    // Local variables
    class hkpRigidBodyCinfo havokCinfo; // r1+0x50

    // References
    // -> class Scene * primaryScene;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80077980 -> 0x80077F84
void RenderedPhysicsModel::Setup(class RenderedPhysicsModel * this /* r22 */, class RenderedPhysicsModelAsset * rpmAsset /* r20 */, class rpmHavokSetupInfo * rpmInfo /* r19 */, enum zUpHavokBodyOwner owner /* r23 */, void * userData /* r24 */, bool doRenderPhysicsOn /* r25 */, enum eShadow shadowOption /* r27 */) {
    // References
    // -> class Scene * primaryScene;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// signature: RenderedPhysicsModel::Setup(const World::ModelInstanceAsset *, const hkpRigidBodyCinfo &, zUpHavokBodyOwner, void *, bool, World::ModelInstanceArticle::eShadow)
// Range: 0x80077F90 -> 0x80078540
void RenderedPhysicsModel::Setup(class RenderedPhysicsModel * this /* r21 */, class hkpRigidBodyCinfo & havokCinfo /* r22 */, enum zUpHavokBodyOwner ownerID /* r23 */, void * pOwner /* r24 */, bool doRenderPhysicsOn /* r25 */, enum eShadow shadowOption /* r27 */) {
    // References
    // -> class Scene * primaryScene;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// signature: RenderedPhysicsModel::SetupDefaultHavokInfo(hkpRigidBodyCinfo &, const World::ModelInstanceAsset *, Math::Vector *, Math::Vector *, xBase *)
// Range: 0x80078540 -> 0x8007880C
void RenderedPhysicsModel::SetupDefaultHavokInfo(class hkpRigidBodyCinfo & cinfo /* r28 */, class Vector * initialPos /* r29 */, class Vector * initialRot /* r30 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class hkpShape * shape; // r24
    class Quaternion quat; // r1+0x20

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x80078810 -> 0x80078964
void RenderedPhysicsModel::Reset(class RenderedPhysicsModel * this /* r27 */, class RenderedPhysicsModelAsset * rpmAsset /* r29 */) {
    // Local variables
    class Vector * pos; // r28
    class Quaternion quat; // r1+0x50
    class hkQuaternion havokQuat; // r1+0x40
    class hkVector4 havokPos; // r1+0x30
    enum MotionType rbmotion; // r0
}
// Range: 0x80078970 -> 0x80078AE4
void RenderedPhysicsModel::DebugReset(class RenderedPhysicsModel * this /* r27 */, class RenderedPhysicsModelAsset * rpmAsset /* r29 */, class rpmHavokSetupInfo * setupInfo /* r28 */) {
}
// Range: 0x80078AF0 -> 0x80078B54
void RenderedPhysicsModel::RenderOn() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80078B60 -> 0x80078C64
void RenderedPhysicsModel::RenderOff() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80078C70 -> 0x80078C88
void RenderedPhysicsModel::PhysicsOn() {
}
// Range: 0x80078C90 -> 0x80078CD4
void RenderedPhysicsModel::PhysicsOff(class RenderedPhysicsModel * this /* r31 */) {
}
// Range: 0x80078CE0 -> 0x80079C04
void RenderedPhysicsModel::PositionUpdate() {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80079C10 -> 0x80079C78
void RenderedPhysicsModel::Destroy(class RenderedPhysicsModel * this /* r30 */) {
}
// signature: RenderedPhysicsModel::GetPhysicsPosition(xVec3 *)
// Range: 0x80079C80 -> 0x80079CC8
void RenderedPhysicsModel::GetPhysicsPosition() {
    // Local variables
    class hkVector4 pos; // r1+0x10
}
// Range: 0x80079CD0 -> 0x80079E2C
void RenderedPhysicsModel::GetPhysicsMatrix(class xMat4x3 * omat /* r31 */) {
    // Local variables
    class hkTransform transform; // r1+0xC0
    float p[16]; // r1+0x80
    class Matrix43 newMatrix; // r1+0x50
}
// Range: 0x80079E30 -> 0x80079EEC
void RenderedPhysicsModel::SetPhysicsMatrix(class RenderedPhysicsModel * this /* r29 */, class xMat4x3 * mat /* r30 */) {
}
// Range: 0x80079EF0 -> 0x80079F30
class xVec3 RenderedPhysicsModel::GetPhysicsPosition() {
    // Local variables
    class xVec3 v; // r1+0x8
}
// signature: RenderedPhysicsModel::SetPhysicsPosition(const xVec3 *)
// Range: 0x80079F30 -> 0x80079F90
void RenderedPhysicsModel::SetPhysicsPosition() {
    // Local variables
    class hkVector4 hkPos; // r1+0x10
}
// Range: 0x80079F90 -> 0x80079FA4
void RenderedPhysicsModel::SetMotionFixed() {
}
// Range: 0x80079FB0 -> 0x80079FC4
void RenderedPhysicsModel::SetMotionKeyframed() {
}
// Range: 0x80079FD0 -> 0x80079FE0
void RenderedPhysicsModel::SetQualityKeyframed() {
}
// signature: RenderedPhysicsModel::UseOGModel(World::xOGModel *)
// Range: 0x80079FE0 -> 0x8007A080
void RenderedPhysicsModel::UseOGModel() {
    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x8007A080 -> 0x8007A1D4
class xVec3 RenderedPhysicsModel::GetCenter() {
    // Local variables
    class hkTransform xform; // r1+0x50
    class hkAabb aabb; // r1+0x30
    class hkVector4 aabbCenter; // r1+0x20
    class xVec3 tempVec; // r1+0x10

    // References
    // -> class xVec3 m_Null;
}
