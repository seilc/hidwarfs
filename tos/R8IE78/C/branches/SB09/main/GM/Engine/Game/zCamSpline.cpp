/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamSpline.cpp
*/
// Range: 0x80096A50 -> 0x80096A84
void zCamSpline::create(class zCamSpline * this /* r31 */) {
}
// Range: 0x80096A90 -> 0x80096AC8
void zCamSpline::stop(class zCamSpline * this /* r31 */) {
}
// Range: 0x80096AD0 -> 0x80096C7C
void zCamSpline::start(class zCamSpline * this /* r31 */) {
    // Local variables
    class CurveCamera * camAsset; // r0

    // References
    // -> float cDefaultCameraSpring;
}
// Range: 0x80096C80 -> 0x80096CD8
void zCamSpline::UpdateFloorMount(class zCamSpline * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80096CE0 -> 0x80096DF4
void zCamSpline::CalcPitchGoal(class zCamSpline * this /* r30 */, class xVec3 & fromPos /* r31 */) {
    // Local variables
    class xVec3 target; // r1+0x14
    class xVec3 toTarget; // r1+0x8
    float distanceToTarget; // f0
    float pitch; // f2
}
// Range: 0x80096E00 -> 0x80096E84
void zCamSpline::CalcOrientGoals(class zCamSpline * this /* r30 */, class xVec3 & fromPos /* r31 */) {
}
// signature: zCamSpline::CalcXOffsetGoal(float)
// Range: 0x80096E90 -> 0x80096F2C
void zCamSpline::CalcXOffsetGoal(class zCamSpline * this /* r31 */) {
    // Local variables
    class OOBExtent extent; // r1+0x8
}
// Range: 0x80096F60 -> 0x80096FCC
void zCamSpline::ApplyBeadSettings(class zCamSpline * this /* r30 */, class BeadInfo & beadInfo /* r31 */) {
    // Local variables
    float nearWall; // r1+0xC
    float farWall; // r1+0x8
}
// signature: zCamSpline::update(xScene &, float)
// Range: 0x80096FD0 -> 0x8009739C
void zCamSpline::update(class zCamSpline * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class Follower lastGoodFollower; // r1+0x38
    class OOBExtent extent; // r1+0x8
    unsigned int flags; // r0

    {
        // Range: 0x80097124 -> 0x800971EC
        // Local variables
        float cBaseU; // f0
        float cIncU; // f28
        float deltaU; // f1

        {
            // Range: 0x8009714C -> 0x800971EC
            // Local variables
            int i; // r27
        }
    }
}
// Range: 0x800973F0 -> 0x80097678
void zCamSpline::GetTargets(class zCamSpline * this /* r29 */, class xVec3 * Pos0 /* r30 */, class xVec3 * Pos1 /* r31 */) const {
    {
        // Range: 0x80097430 -> 0x800974E0
        // Local variables
        float sum_z; // f29
        float sum_y; // f30
        float sum_x; // f31

        {
            // Range: 0x80097440 -> 0x800974CC
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x800974E0 -> 0x800975C8
        // Local variables
        float lerpValue; // f1
        class xVec3 ghostPlayer; // r1+0x38
        class xVec3 playerPos; // r1+0x44
    }
    {
        // Range: 0x800975C8 -> 0x80097648
        // Local variables
        class xVec3 projPos; // r1+0x2C
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCamSpline::FinalAdjust(float)
// Range: 0x80097680 -> 0x800976A4
void zCamSpline::FinalAdjust() {
}
// Range: 0x800976B0 -> 0x800976E8
int zCamSpline::GetRailAsset_LookCurve() const {
}
// Range: 0x800976F0 -> 0x80097728
bool zCamSpline::GetRailAsset_FloorMountOff() const {
}
