/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamSpline.cpp
*/
// Range: 0x801183F0 -> 0x80118424
void zCamSpline::create(class zCamSpline * this /* r31 */) {
}
// Range: 0x80118430 -> 0x80118468
void zCamSpline::stop(class zCamSpline * this /* r31 */) {
}
// Range: 0x80118470 -> 0x801189C0
void zCamSpline::start(class zCamSpline * this /* r31 */) {
    // References
    // -> float cDefaultCameraSpring;
}
// signature: zCamSpline::pre_update(xScene &)
// Range: 0x801189C0 -> 0x801189C4
void zCamSpline::pre_update() {
}
// signature: zCamSpline::post_update(xScene &)
// Range: 0x801189D0 -> 0x801189D4
void zCamSpline::post_update() {
}
// Range: 0x801189E0 -> 0x80118AEC
void zCamSpline::UpdateFloorMount(class zCamSpline * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80118AF0 -> 0x80118C8C
void zCamSpline::CalcOrientGoals(class zCamSpline * this /* r30 */, class xVec3 & fromPos /* r31 */) {
}
// signature: zCamSpline::CalcXOffsetGoal(float)
// Range: 0x80118C90 -> 0x80118D54
void zCamSpline::CalcXOffsetGoal(class zCamSpline * this /* r30 */) {
    // Local variables
    class OOBExtent extent; // r1+0x8
}
// Range: 0x80118D90 -> 0x80118DFC
void zCamSpline::ApplyBeadSettings(class zCamSpline * this /* r30 */, class BeadInfo & beadInfo /* r31 */) {
    // Local variables
    float nearWall; // r1+0xC
    float farWall; // r1+0x8
}
// signature: zCamSpline::update(xScene &, float)
// Range: 0x80118E00 -> 0x801192E0
void zCamSpline::update(class zCamSpline * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class Follower lastGoodFollower; // r1+0x38
    class BeadInfo * bead; // r0
    class OOBExtent extent; // r1+0x8
    unsigned int flags; // r0

    {
        // Range: 0x80118E78 -> 0x80118EF0
        // Local variables
        class zCameraCurve * camCurve; // r30
    }
    {
        // Range: 0x80118FA0 -> 0x801190B0
        // Local variables
        float cBaseU; // f0
        float cIncU; // f26
        float deltaU; // f1

        {
            // Range: 0x80118FE8 -> 0x801190A4
            // Local variables
            int i; // r29
        }
    }
}
// Range: 0x80119330 -> 0x80119678
void zCamSpline::GetTargets(class zCamSpline * this /* r29 */, class xVec3 * Pos0 /* r30 */, class xVec3 * Pos1 /* r31 */) const {
    {
        // Range: 0x80119370 -> 0x8011942C
        // Local variables
        float sum_z; // f29
        float sum_y; // f30
        float sum_x; // f31

        {
            // Range: 0x80119380 -> 0x801193F8
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x8011942C -> 0x80119590
        // Local variables
        float lerpValue; // f6
        class xVec3 ghostPlayer; // r1+0x58
        class xVec3 playerPos; // r1+0x64
    }
    {
        // Range: 0x80119590 -> 0x80119648
        // Local variables
        class xVec3 projPos; // r1+0x4C
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCamSpline::FinalAdjust(float)
// Range: 0x80119680 -> 0x80119698
void zCamSpline::FinalAdjust() {
}
