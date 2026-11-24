/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zInflatablePlatform.cpp
*/
// Range: 0x800CC170 -> 0x800CC1D0
class Entity * Sext::zInflatablePlatformAsset::Create(class EntityHandleBase * handle /* r30 */, class zInflatablePlatformAsset * asset /* r31 */) {
}
// signature: zInflatablePlatform_HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CC1D0 -> 0x800CC1E0
void zInflatablePlatform_HandleEvent(class xBase * from /* r0 */) {
}
// signature: zInflatablePlatform::zInflatablePlatform(World::EntityHandleBase *, Sext::zInflatablePlatformAsset *)
// Range: 0x800CC1E0 -> 0x800CC34C
void * zInflatablePlatform::zInflatablePlatform(class zInflatablePlatform * this /* r29 */, class zInflatablePlatformAsset * inAsset /* r30 */) {
    // Local variables
    class hkpRigidBodyCinfo info; // r1+0x30
    class xQuat quat; // r1+0x20
    class CollisionMeshBlobEntity * pCollMeshBlob; // r0
    class hkpShape * shape; // r30
    class hkVector4 scale; // r1+0x10

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> struct {} __vt__19zInflatablePlatform;
}
// signature: zInflatablePlatform::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CC350 -> 0x800CC6D0
void zInflatablePlatform::HandleEvent(class zInflatablePlatform * this /* r31 */) {
    {
        // Range: 0x800CC538 -> 0x800CC570
        // Local variables
        class EventActionScale * scaleParams; // r0
    }
    {
        // Range: 0x800CC570 -> 0x800CC5A8
        // Local variables
        class EventActionScale * scaleParams; // r0
    }
    {
        // Range: 0x800CC5A8 -> 0x800CC5E0
        // Local variables
        class EventActionScale * scaleParams; // r0
    }
    {
        // Range: 0x800CC600 -> 0x800CC674
        // Local variables
        class xQuat quat; // r1+0x30
        class xMat4x3 * pMat; // r29
    }
}
// signature: zInflatablePlatform::SetVisible(bool)
// Range: 0x800CC6D0 -> 0x800CC6E8
void zInflatablePlatform::SetVisible() {
}
// Range: 0x800CC6F0 -> 0x800CC7AC
class hkVector4 zInflatablePlatform::GetScaleVelAtPoint(class hkVector4 * offset /* r29 */, class zInflatablePlatform * this /* r30 */) {
    // Local variables
    class hkVector4 & pivot; // r31
    class hkVector4 vel; // r1+0x10
}
// Range: 0x800CC7B0 -> 0x800CC9E0
void zInflatablePlatform::Setup(class zInflatablePlatform * this /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x40
    class xMat4x3 * pMat; // r28
    class xQuat quat; // r1+0x30

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800CC9E0 -> 0x800CCA3C
void zInflatablePlatform::DebugReset(class zInflatablePlatform * this /* r29 */) {
}
// Range: 0x800CCA40 -> 0x800CCBB0
void zInflatablePlatform::Update(class zInflatablePlatform * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 oldScale; // r1+0x14

    // References
    // -> class hkVector4 hkVector4Zero;
    // -> class xVec3 m_Null;
}
// signature: zInflatablePlatform::UpdateTime(float)
// Range: 0x800CCBB0 -> 0x800CCBD8
void zInflatablePlatform::UpdateTime() {
}
// Range: 0x800CCBE0 -> 0x800CCDC8
void zInflatablePlatform::UpdateTimeEventControl(class zInflatablePlatform * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800CCC68 -> 0x800CCC8C
        // Local variables
        float interp; // f0
    }
    {
        // Range: 0x800CCCF4 -> 0x800CCD1C
        // Local variables
        float interp; // f0
    }
    {
        // Range: 0x800CCD84 -> 0x800CCDAC
        // Local variables
        float interp; // f0
    }
}
// Range: 0x800CCDD0 -> 0x800CD200
void zInflatablePlatform::UpdateTimeKeyframeControl(class zInflatablePlatform * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class KeyframeControl & control; // r0
    int size; // r30

    {
        // Range: 0x800CD064 -> 0x800CD0F4
        // Local variables
        class xVec3 nextScale; // r1+0x20
        float interp; // f30
    }
}
// signature: zInflatablePlatform::calculateInterpolation(float, float, float, float)
// Range: 0x800CD200 -> 0x800CD28C
float zInflatablePlatform::calculateInterpolation() {
    // Local variables
    float maxSpeedTime; // f6
    float maxVel; // f7
    float & t; // r0
    float interp; // f0
}
// Range: 0x800CD290 -> 0x800CD38C
void zInflatablePlatform::UpdatePhysicsShape(class zInflatablePlatform * this /* r30 */) {
    // Local variables
    class hkpShape * shape; // r31
    class hkVector4 scaleVec; // r1+0x20
    class hkpShape * scaledShape; // r31
    class hkpEntity * entities[1]; // r1+0x10

    // References
    // -> class CHavokShapeBuilder * s_instance;
}
// signature: zInflatablePlatform::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800CD390 -> 0x800CD468
void zInflatablePlatform::DriveCauseMove(class zInflatablePlatform * this /* r29 */, class xMat4x3 * driverCurMat /* r0 */, class xMat4x3 * psgPrevMat /* r30 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x40
    class xMat4x3 * pMat; // r30
    class xQuat quat; // r1+0x30
}
