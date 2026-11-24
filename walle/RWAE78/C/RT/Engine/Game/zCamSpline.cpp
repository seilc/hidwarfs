/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamSpline.cpp
*/
// Range: 0x800A7A90 -> 0x800A7AC4
void zCamSpline::create(class zCamSpline * this /* r31 */) {
}
// Range: 0x800A7AD0 -> 0x800A7B08
void zCamSpline::stop(class zCamSpline * this /* r31 */) {
}
// Range: 0x800A7B10 -> 0x800A8330
void zCamSpline::start(class zCamSpline * this /* r31 */, class xVec3 * goalLookAt /* r15 */) {
    // References
    // -> float cDefaultCameraSpring;
}
// signature: zCamSpline::pre_update(xScene &)
// Range: 0x800A8330 -> 0x800A8334
void zCamSpline::pre_update() {
}
// signature: zCamSpline::post_update(xScene &)
// Range: 0x800A8340 -> 0x800A8344
void zCamSpline::post_update() {
}
// Range: 0x800A8350 -> 0x800A845C
void zCamSpline::UpdateFloorMount(class zCamSpline * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800A8460 -> 0x800A85F8
void zCamSpline::CalcOrientGoals(class zCamSpline * this /* r29 */, class xVec3 * fromPos /* r30 */) {
}
// signature: zCamSpline::CalcXOffsetGoal(float)
// Range: 0x800A8600 -> 0x800A86C4
void zCamSpline::CalcXOffsetGoal(class zCamSpline * this /* r30 */) {
    // Local variables
    class OOBExtent extent; // r1+0x8
}
// Range: 0x800A8700 -> 0x800A8758
void zCamSpline::ApplyBeadSettings(class BeadInfo * beadInfo /* r31 */) {
    // Local variables
    float nearWall; // r1+0xC
    float farWall; // r1+0x8
}
// signature: zCamSpline::update(xScene &, float)
// Range: 0x800A8760 -> 0x800A8C38
void zCamSpline::update(class zCamSpline * this /* r28 */, float dt /* f31 */) {
    // Local variables
    class Follower lastGoodFollower; // r1+0x38
    class BeadInfo * bead; // r0
    class OOBExtent extent; // r1+0x8
    unsigned int flags; // r0

    {
        // Range: 0x800A87DC -> 0x800A8850
        // Local variables
        class zCameraCurve * camCurve; // r31
    }
    {
        // Range: 0x800A88F4 -> 0x800A8A40
        // Local variables
        float cBaseU; // f0
        float cIncU; // f27
        float deltaU; // f1

        {
            // Range: 0x800A893C -> 0x800A8A34
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x800A8CD0 -> 0x800A8E94
void zCamSpline::GetTargets(class zCamSpline * this /* r28 */, class xVec3 * Pos0 /* r29 */, class xVec3 * Pos1 /* r30 */) const {
    {
        // Range: 0x800A8D58 -> 0x800A8E74
        // Local variables
        float lerpValue; // f6
        class xVec3 ghostPlayer; // r1+0x18
        class xVec3 playerPos; // r1+0x24
    }

    // References
    // -> class xGlobals * xglobals;
}
