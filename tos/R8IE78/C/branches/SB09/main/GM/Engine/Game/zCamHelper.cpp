/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamHelper.cpp
*/
// signature: zCamHelperNS::adjustInputTheta(float, float, zCamVelocity &, bool &, bool &)
// Range: 0x800958E0 -> 0x80095A24
void zCamHelperNS::adjustInputTheta(class zCamVelocity & inputVel /* r29 */, bool & userPushIn /* r30 */, bool & userPushOut /* r31 */) {
    // Local variables
    float thetaDiff; // f0
}
// signature: zCamHelperNS::adjustInputPhi(float, float, zCamVelocity &, bool &, bool &, bool &)
// Range: 0x80095A30 -> 0x80095B4C
void zCamHelperNS::adjustInputPhi() {
}
// signature: zCamHelperNS::adjustRestDist(float, zCamRestConfig &)
// Range: 0x80095B50 -> 0x80095B60
void zCamHelperNS::adjustRestDist() {
}
// Range: 0x80095B60 -> 0x80095CC0
float zCamHelperNS::calcConeAngleOffset(class xVec3 & planeOrigin /* r28 */, class xVec3 & planeNorm /* r29 */, class xVec3 & isectPoint /* r30 */, class xVec3 & conePoint /* r31 */) {
    // Local variables
    class xVec3 projPoint; // r1+0x44
    class xVec3 projCone; // r1+0x38
    float cosAngle; // f1
    float angle; // f0
}
// signature: zCamHelperNS::calcAngleDepenetration(bool, bool, const xVec3 &, const xVec3 &, const xVec3 &, const xVec3 &, const xVec3 &, float *, float *)
// Range: 0x800960E0 -> 0x8009618C
void zCamHelperNS::calcAngleDepenetration(bool depenThetaPositive /* r24 */, bool depenPhiPositive /* r25 */, class xVec3 & rayOrigin /* r26 */, class xVec3 & thetaPlaneNormal /* r27 */, class xVec3 & isectPoint /* r28 */, class xVec3 & conePoint /* r29 */, float * theta /* r30 */, float * phi /* r31 */) {
}
// signature: zCamHelperNS::calcApproachDir(const xVec3 &, const xVec3 &, xVec3 *)
// Range: 0x80096190 -> 0x80096234
void zCamHelperNS::calcApproachDir(class xVec3 & fromPoint /* r0 */, class xVec3 * approachDir /* r31 */) {
    {
        // Range: 0x80096198 -> 0x80096218
        // Local variables
        float len; // f0
        class xVec3 dir; // r1+0x14
    }
}
// Range: 0x80095CC0 -> 0x800960D8
void zCamHelperNS::accumulateAngleDepenetration(bool depenThetaPositive /* r20 */, bool depenPhiPositive /* r21 */, bool centerHit /* r22 */, class zCamBasis & goalBasis /* r23 */, class xVec3 & endPoint /* r24 */, class rayInfo & ray /* r25 */, class xVec3 & viewNormal /* r26 */, class xVec3 & thetaPlaneNormal /* r27 */, class xVec3 & phiPlaneNormal /* r28 */, class xVec3 * approachDir /* r29 */, float * theta /* r30 */, float * phi /* r31 */) {
    // Local variables
    class rayInfo backRay; // r1+0xB8
    class xVec3 backPoint; // r1+0xAC
    class xVec3 fwdPoint; // r1+0xA0
    class xVec3 splitPoint; // r1+0x94

    {
        // Range: 0x80095E28 -> 0x80095EF0
        // Local variables
        float debug_dist; // f0
    }
}
// Range: 0x80096240 -> 0x800962C0
void zCamPlayerTarget::reset(class zCamPlayerTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800962C0 -> 0x8009643C
bool zCamPlayerTarget::update(class zCamPlayerTarget * this /* r30 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r31 */) {
    // Local variables
    class xVec3 player_loc; // r1+0x50

    // References
    // -> class xGlobals * xglobals;
}
