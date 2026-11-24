/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBoneTracker.cpp
*/
// signature: zBoneTracker::InitBoneTracker(xModelInstance *, int, int, int)
// Range: 0x80074040 -> 0x80074114
void zBoneTracker::InitBoneTracker(class zBoneTracker * this /* r29 */) {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x80074120 -> 0x800741A8
void zBoneTracker::Reset(class zBoneTracker * this /* r30 */) {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zBoneTracker::SetLimits(float, float, float, float, float, bool)
// Range: 0x800741B0 -> 0x800741D4
void zBoneTracker::SetLimits() {
}
// signature: zBoneTracker::ChangeState(zBoneTracker::eTrackingState)
// Range: 0x800741E0 -> 0x8007424C
void zBoneTracker::ChangeState() {
}
// Range: 0x80074250 -> 0x800743B4
void zBoneTracker::LookAtLocation(class zBoneTracker * this /* r29 */, class xVec3 * newLookAtLocation /* r30 */, bool blendToNewLookAt /* r31 */) {
    // Local variables
    class xVec3 diffVec; // r1+0x20
    class xVec3 localLookAtDir; // r1+0x14
    class xMat4x3 modelMat; // r1+0x30
    float targetYaw; // f0
    class xVec3 localLookAtDirYZ; // r1+0x8
    float targetPitch; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80074410 -> 0x80074540
void zBoneTracker::Update(class zBoneTracker * this /* r31 */, float dt /* f31 */) {
}
// signature: zBoneTracker::UpdateBlend(float)
// Range: 0x80074540 -> 0x80074630
void zBoneTracker::UpdateBlend() {
    // Local variables
    float multiplier; // f5
    float endBlendTime; // f2
    float remainingAmt; // f3
    float remainingTime; // f6
}
// signature: zBoneTracker::ApplyBoneModificationAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80074630 -> 0x80074AC0
void zBoneTracker::ApplyBoneModificationAfterAnimatrices(class zBoneTracker * this /* r30 */, class Matrix43 * skinMat /* r31 */) {
    // Local variables
    class xVec3 localTargetDir; // r1+0x64
    class xMat3x3 targetMat; // r1+0x260
    class xQuat targetQuat; // r1+0x48
    class xQuat currentQuat; // r1+0x38
    float blendFactor; // f1
    class xQuat blendedTargetQuat; // r1+0x28
    class xMat4x3 diffMat; // r1+0x1E0
    class xMat4x3 rootMat; // r1+0x1A0
    class xMat4x3 facingMat; // r1+0x160
    class xQuat facingQuat; // r1+0x18
    class xMat4x3 invTransMat; // r1+0x120
    class xQuat rotQuat; // r1+0x8
    class xMat4x3 rotMat; // r1+0xE0
    class xMat4x3 transMat; // r1+0xA0

    {
        // Range: 0x8007467C -> 0x800747D4
        // Local variables
        float targetPitch; // f1
        class xVec3 localTargetDirYZ; // r1+0x58
        float targetYaw; // f30
        class xMat4x3 modelMat; // r1+0x290
    }
    {
        // Range: 0x800748AC -> 0x800748D0
        // Local variables
        class xMat4x3 currentMat; // r1+0x220
    }
    {
        // Range: 0x80074A24 -> 0x80074A68
        // Local variables
        int i; // r28

        {
            // Range: 0x80074A24 -> 0x80074A68
            // Local variables
            class Matrix43 diffMatNG; // r1+0x70
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 g_O3;
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
