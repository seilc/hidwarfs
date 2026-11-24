/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBoneTracker.cpp
*/
// signature: zBoneTracker::InitBoneTracker(xModelInstance *, int, int, int)
// Range: 0x800AFB70 -> 0x800AFC54
void zBoneTracker::InitBoneTracker() {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x800AFC60 -> 0x800AFCE0
void zBoneTracker::Reset() {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zBoneTracker::SetLimits(float, float, float, float, float, bool)
// Range: 0x800AFCE0 -> 0x800AFD04
void zBoneTracker::SetLimits() {
}
// signature: zBoneTracker::ChangeState(zBoneTracker::eTrackingState)
// Range: 0x800AFD10 -> 0x800AFD7C
void zBoneTracker::ChangeState() {
}
// Range: 0x800AFD80 -> 0x800B0134
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
// Range: 0x800B01F0 -> 0x800B0320
void zBoneTracker::Update(class zBoneTracker * this /* r31 */, float dt /* f31 */) {
}
// signature: zBoneTracker::UpdateBlend(float)
// Range: 0x800B0320 -> 0x800B0410
void zBoneTracker::UpdateBlend() {
    // Local variables
    float multiplier; // f5
    float endBlendTime; // f2
    float remainingAmt; // f3
    float remainingTime; // f6
}
// signature: zBoneTracker::ApplyBoneModificationAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800B0410 -> 0x800B0F00
void zBoneTracker::ApplyBoneModificationAfterAnimatrices(class zBoneTracker * this /* r29 */, class Matrix43 * skinMat /* r30 */) {
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
        // Range: 0x800B0468 -> 0x800B07F0
        // Local variables
        float targetPitch; // f1
        class xVec3 localTargetDirYZ; // r1+0x58
        float targetYaw; // f30
        class xMat4x3 modelMat; // r1+0x290
    }
    {
        // Range: 0x800B0A9C -> 0x800B0B18
        // Local variables
        class xMat4x3 currentMat; // r1+0x220
    }
    {
        // Range: 0x800B0DDC -> 0x800B0DE0
        // Local variables
        int i; // r22

        {
            // Range: 0x800B0DDC -> 0x800B0DE0
            // Local variables
            class Matrix43 diffMatNG; // r1+0x70
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
