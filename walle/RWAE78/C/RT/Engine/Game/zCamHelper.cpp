/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamHelper.cpp
*/
// signature: zCamHelperNS::adjustInputTheta(float, float, zCamVelocity &, bool &, bool &)
// Range: 0x800A18A0 -> 0x800A1A34
void zCamHelperNS::adjustInputTheta(class zCamVelocity * inputVel /* r28 */, bool * userPushIn /* r29 */, bool * userPushOut /* r30 */) {
    // Local variables
    float thetaDiff; // f0
}
// signature: zCamHelperNS::adjustInputPhi(float, float, zCamVelocity &, bool &, bool &, bool &)
// Range: 0x800A1A40 -> 0x800A1B44
void zCamHelperNS::adjustInputPhi() {
}
// signature: zCamHelperNS::adjustRestDist(float, zCamRestConfig &)
// Range: 0x800A1B50 -> 0x800A1B60
void zCamHelperNS::adjustRestDist() {
}
// signature: zCamHelperNS::planarProject(const xVec3 &, const xVec3 &, const xVec3 &, xVec3 &)
// Range: 0x800A1B60 -> 0x800A1C30
void zCamHelperNS::planarProject() {
    // Local variables
    float t; // f4
}
// Range: 0x800A1F90 -> 0x800A2650
void zCamHelperNS::calcAngleDepenetration(bool depenThetaPositive /* r23 */, bool depenPhiPositive /* r24 */, class xVec3 * rayOrigin /* r25 */, class xVec3 * thetaPlaneNormal /* r26 */, class xVec3 * phiPlaneNormal /* r22 */, class xVec3 * isectPoint /* r27 */, class xVec3 * conePoint /* r28 */, float * theta /* r29 */, float * phi /* r30 */) {
}
// signature: zCamHelperNS::calcApproachDir(const xVec3 &, const xVec3 &, xVec3 *)
// Range: 0x800A2650 -> 0x800A27C4
void zCamHelperNS::calcApproachDir(class xVec3 * approachDir /* r30 */) {
    {
        // Range: 0x800A2674 -> 0x800A2794
        // Local variables
        float len; // f0
        class xVec3 dir; // r1+0x14
    }
}
// Range: 0x800A1C30 -> 0x800A1F88
void zCamHelperNS::accumulateAngleDepenetration(bool depenThetaPositive /* r19 */, bool depenPhiPositive /* r20 */, bool centerHit /* r21 */, class zCamBasis * goalBasis /* r22 */, class xVec3 * endPoint /* r23 */, class rayInfo * ray /* r24 */, class xVec3 * viewNormal /* r25 */, class xVec3 * thetaPlaneNormal /* r26 */, class xVec3 * phiPlaneNormal /* r27 */, class xVec3 * approachDir /* r28 */, float * theta /* r29 */, float * phi /* r30 */) {
    // Local variables
    class rayInfo backRay; // r1+0x70
    class xVec3 backPoint; // r1+0x64
    class xVec3 fwdPoint; // r1+0x58
    class xVec3 splitPoint; // r1+0x4C

    {
        // Range: 0x800A1D74 -> 0x800A1E10
        // Local variables
        float debug_dist; // f0
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// Range: 0x800A27D0 -> 0x800A27E8
void * zCamPlayerTarget::zCamPlayerTarget() {
    // References
    // -> struct {} __vt__16zCamPlayerTarget;
}
// Range: 0x800A27F0 -> 0x800A287C
void zCamPlayerTarget::reset(class zCamPlayerTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800A2880 -> 0x800A2BE4
bool zCamPlayerTarget::update(class zCamPlayerTarget * this /* r30 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r29 */) {
    // Local variables
    class xVec3 player_loc; // r1+0xBC

    // References
    // -> class xGlobals * xglobals;
}
