/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamHelper.cpp
*/
// signature: zCamHelperNS::adjustInputTheta(float, float, zCamVelocity &, bool &, bool &)
// Range: 0x80112540 -> 0x80112710
void zCamHelperNS::adjustInputTheta(class zCamVelocity & inputVel /* r29 */, bool & userPushIn /* r30 */, bool & userPushOut /* r31 */) {
    // Local variables
    float thetaDiff; // f0
}
// signature: zCamHelperNS::adjustInputPhi(float, float, zCamVelocity &, bool &, bool &, bool &)
// Range: 0x80112710 -> 0x80112830
void zCamHelperNS::adjustInputPhi() {
}
// signature: zCamHelperNS::adjustRestDist(float, zCamRestConfig &)
// Range: 0x80112830 -> 0x80112840
void zCamHelperNS::adjustRestDist() {
}
// signature: zCamHelperNS::planarProject(const xVec3 &, const xVec3 &, const xVec3 &, xVec3 &)
// Range: 0x80112840 -> 0x80112910
void zCamHelperNS::planarProject() {
    // Local variables
    float t; // f4
}
// signature: zCamHelperNS::calcAngleDepenetration(bool, bool, const xVec3 &, const xVec3 &, const xVec3 &, const xVec3 &, const xVec3 &, float *, float *)
// Range: 0x80112C80 -> 0x80113344
void zCamHelperNS::calcAngleDepenetration(bool depenThetaPositive /* r24 */, bool depenPhiPositive /* r25 */, class xVec3 & rayOrigin /* r26 */, class xVec3 & thetaPlaneNormal /* r27 */, class xVec3 & isectPoint /* r28 */, class xVec3 & conePoint /* r29 */, float * theta /* r30 */, float * phi /* r31 */) {
}
// signature: zCamHelperNS::calcApproachDir(const xVec3 &, const xVec3 &, xVec3 *)
// Range: 0x80113350 -> 0x80113474
void zCamHelperNS::calcApproachDir() {
    {
        // Range: 0x80113350 -> 0x8011346C
        // Local variables
        float len; // f0
        class xVec3 dir; // r1+0x14
    }
}
// Range: 0x80112910 -> 0x80112C80
void zCamHelperNS::accumulateAngleDepenetration(bool depenThetaPositive /* r20 */, bool depenPhiPositive /* r21 */, bool centerHit /* r22 */, class zCamBasis & goalBasis /* r23 */, class xVec3 & endPoint /* r24 */, class rayInfo & ray /* r25 */, class xVec3 & viewNormal /* r26 */, class xVec3 & thetaPlaneNormal /* r27 */, class xVec3 & phiPlaneNormal /* r28 */, class xVec3 * approachDir /* r29 */, float * theta /* r30 */, float * phi /* r31 */) {
    // Local variables
    class rayInfo backRay; // r1+0x70
    class xVec3 backPoint; // r1+0x64
    class xVec3 fwdPoint; // r1+0x58
    class xVec3 splitPoint; // r1+0x4C

    {
        // Range: 0x80112A50 -> 0x80112AF0
        // Local variables
        float debug_dist; // f0
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// Range: 0x80113480 -> 0x8011350C
void zCamPlayerTarget::reset(class zCamPlayerTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80113510 -> 0x80113870
bool zCamPlayerTarget::update(class zCamPlayerTarget * this /* r30 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r31 */) {
    // Local variables
    class xVec3 player_loc; // r1+0xBC

    // References
    // -> class xGlobals * xglobals;
}
