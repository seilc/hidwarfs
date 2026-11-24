/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xRenderedPhysicsModel.cpp
*/
// signature: RenderedPhysicsModel::Setup(const World::ModelInstanceAsset *, hkpRigidBodyCinfo &, zUpHavokBodyOwner, void *, bool, World::ModelInstanceArticle::eShadow)
// Range: 0x80040AA0 -> 0x80040B44
void RenderedPhysicsModel::Setup(class RenderedPhysicsModel * this /* r27 */, class hkpRigidBodyCinfo & havokCinfo /* r28 */, enum zUpHavokBodyOwner ownerID /* r29 */, void * pOwner /* r30 */, bool doRenderPhysicsOn /* r31 */) {
}
// signature: RenderedPhysicsModel::SetupDefaultHavokInfo(hkpRigidBodyCinfo &, const World::ModelInstanceAsset *, Math::Vector *, Math::Vector *, xBase *)
// Range: 0x80040B50 -> 0x80040D8C
void RenderedPhysicsModel::SetupDefaultHavokInfo(class hkpRigidBodyCinfo & cinfo /* r29 */, class Vector * initialPos /* r30 */, class Vector * initialRot /* r31 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r0
    class Quaternion quat; // r1+0x20

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class CHavokShapeBuilder * s_instance;
}
// signature: RenderedPhysicsModel::SetupRenderedModel(const World::ModelInstanceAsset *, zUpHavokBodyOwner, void *, World::ModelInstanceArticle::eShadow)
// Range: 0x80040D90 -> 0x80040E14
void RenderedPhysicsModel::SetupRenderedModel(class RenderedPhysicsModel * this /* r30 */, enum eShadow shadowOption /* r31 */) {
    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x80040E20 -> 0x80040E34
void RenderedPhysicsModel::RenderOn() {
}
// Range: 0x80040E40 -> 0x80040E58
void RenderedPhysicsModel::PhysicsOn() {
}
// Range: 0x80040E60 -> 0x80040EC0
void RenderedPhysicsModel::Destroy(class RenderedPhysicsModel * this /* r30 */) {
}
// Range: 0x80040EC0 -> 0x80040F74
void RenderedPhysicsModel::GetPhysicsMatrix(class xMat4x3 * omat /* r31 */) {
    // Local variables
    class hkTransform transform; // r1+0x90
    float p[16]; // r1+0x50
    class Matrix43 newMatrix; // r1+0x20
}
// Range: 0x80040F80 -> 0x80040FA4
void RenderedPhysicsModel::UseOGModel(class xOGModel * existModel /* r6 */) {
    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x80040FB0 -> 0x800410C4
void RenderedPhysicsModel::ConvertxMatTransformToHavok(class xMat4x3 & inMat /* r29 */, class hkTransform & oTransform /* r30 */, bool removeScale /* r31 */) {
    // Local variables
    class hkVector4 hkPos; // r1+0x40
    class xQuat xQ; // r1+0x30
    class hkQuaternion hkQ; // r1+0x20

    {
        // Range: 0x80040FF8 -> 0x80041068
        // Local variables
        class xMat4x3 temp; // r1+0x50
    }
}
// Range: 0x800410D0 -> 0x8004112C
void RenderedPhysicsModel::ConvertHavokTransformToxMat(class hkTransform & inTransform /* r30 */, class xMat4x3 & oMat /* r31 */) {
}
