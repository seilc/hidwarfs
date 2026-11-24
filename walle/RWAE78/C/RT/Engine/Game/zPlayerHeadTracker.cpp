/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerHeadTracker.cpp
*/
// signature: zPlayerHeadTracker::Init(zPlayer *, int, int, int, bool)
// Range: 0x80175F10 -> 0x8017600C
void zPlayerHeadTracker::Init() {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x80176010 -> 0x80176090
void zPlayerHeadTracker::Reset() {
    // References
    // -> class xQuat g_IQ;
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zPlayerHeadTracker::ChangeState(zPlayerHeadTracker::eTrackingState)
// Range: 0x80176090 -> 0x801760FC
void zPlayerHeadTracker::ChangeState() {
}
// Range: 0x80176100 -> 0x80176230
void zPlayerHeadTracker::Update(class zPlayerHeadTracker * this /* r31 */, float dt /* f31 */) {
}
// signature: zPlayerHeadTracker::UpdateBlend(float)
// Range: 0x80176230 -> 0x80176320
void zPlayerHeadTracker::UpdateBlend() {
    // Local variables
    float multiplier; // f5
    float endBlendTime; // f2
    float remainingAmt; // f3
    float remainingTime; // f6
}
// signature: zPlayerHeadTracker::zPlayerHeadTrackerAfterAnimatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x80176320 -> 0x80176E28
void zPlayerHeadTracker::zPlayerHeadTrackerAfterAnimatrices(class zPlayerHeadTracker * this /* r29 */, class Matrix43 * skinMat /* r30 */) {
    // Local variables
    class xVec3 localTargetDir; // r1+0x64
    class xMat3x3 targetMat; // r1+0x260
    class xQuat targetQuat; // r1+0x48
    class xQuat currentQuat; // r1+0x38
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
        // Range: 0x80176380 -> 0x80176714
        // Local variables
        float targetPitch; // f1
        class xVec3 localTargetDirYZ; // r1+0x58
        float targetYaw; // f30
        class xMat4x3 modelMat; // r1+0x290
    }
    {
        // Range: 0x801769D0 -> 0x80176A4C
        // Local variables
        class xMat4x3 currentMat; // r1+0x220
    }
    {
        // Range: 0x80176CFC -> 0x80176D00
        // Local variables
        int i; // r21

        {
            // Range: 0x80176CFC -> 0x80176D00
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
