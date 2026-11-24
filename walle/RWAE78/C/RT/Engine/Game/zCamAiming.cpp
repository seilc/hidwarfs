/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamAiming.cpp
*/
static class zCamBlendValues aimingBlendValues; // size: 0x6C, address: 0x806CBA84
static class xVec3 yUp; // size: 0xC, address: 0x806CBB14
class zCamPlayerTarget playerAimTargets[4]; // size: 0x110, address: 0x8076B738
// signature: zCamAimingNS::tryCut(const zCamBasis &, float, zCamBasis &, zCamBasis &, zCamRestConfig &)
// Range: 0x80091260 -> 0x80091C4C
bool zCamAimingNS::tryCut(float deltaTheta /* f28 */, class zCamBasis * cutBasis /* r28 */, class zCamBasis * goalBasis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // Local variables
    float s; // f0
    class rayInfo testRay; // r1+0x1B8
    class xVec3 viewNorm; // r1+0x1AC
    class xVec3 up; // r1+0x1A0
    class xVec3 right; // r1+0x194
    bool isBlocked; // r0
}
// Range: 0x80091E50 -> 0x80091EB8
void zCamAiming::create(class zCamAiming * this /* r31 */) {
}
// Range: 0x80091EC0 -> 0x80092154
void zCamAiming::reset(class zCamAiming * this /* r27 */, class xVec3 * targetLoc /* r28 */, class zCamBasis * basis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // References
    // -> static class xVec3 yUp;
}
// signature: zCamAiming::AddTarget(int)
// Range: 0x80092160 -> 0x800921D0
void zCamAiming::AddTarget(class zCamAiming * this /* r30 */) {
    // References
    // -> class zCamPlayerTarget playerAimTargets[4];
}
// signature: zCamAiming::RemoveTarget(int)
// Range: 0x800921D0 -> 0x8009223C
void zCamAiming::RemoveTarget() {
    // References
    // -> class zCamPlayerTarget playerAimTargets[4];
}
// signature: zCamAiming::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x80092240 -> 0x8009286C
void zCamAiming::update_goal(class zCamAiming * this /* r26 */, class zCamBasis * basis /* r27 */, class zCamRestConfig * restConfig /* r28 */, class xVec3 * targetLoc /* r29 */, class zCamBasis * goalBasis /* r30 */) {
    {
        // Range: 0x800924FC -> 0x8009281C
        // Local variables
        class rayInfo goalRay; // r1+0xC8

        {
            // Range: 0x80092530 -> 0x8009281C
            // Local variables
            float savePhi; // f31
            class xVec3 isectDir; // r1+0xB0
            class xVec3 isectPoint; // r1+0xBC
        }
    }

    // References
    // -> static class xVec3 yUp;
}
// signature: zCamAiming::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x80092BB0 -> 0x80092E38
void zCamAiming::apply_input(class zCamAiming * this /* r29 */, float dt /* f31 */, class zCamBasis * basis /* r30 */) {
    {
        // Range: 0x80092C24 -> 0x80092D3C
        // Local variables
        float goalTheta; // f6
    }
}
// signature: zCamAiming::update_collision(float, const zCamBasis &, const zCamRayHelper::rayInfo, zCamRestConfig &, zCamBasis &, zCamVelocity &, bool &)
// Range: 0x80092F20 -> 0x80093F14
bool zCamAiming::update_collision(class zCamAiming * this /* r23 */, class rayInfo * center /* r24 */, class zCamRestConfig * restConfig /* r25 */, class zCamBasis * goalBasis /* r26 */, class zCamVelocity * inputVel /* r27 */) {
    // Local variables
    bool isOccluded; // r0
    bool userPushUp; // r1+0x1C
    class xVec3 viewNorm; // r1+0x1FC
    float minDist; // f31
    float absMinDist; // f30
    float maxDist; // f29
    class rayInfo backRay; // r1+0x278
    class xVec3 up; // r1+0x1F0
    class xVec3 right; // r1+0x1E4
    float deltaTheta; // f28
    float deltaPhi; // f27
    int deltaThetaCount; // r29
    int deltaPhiCount; // r28
    class rayInfo rayRight; // r1+0x25C
    class rayInfo rayLeft; // r1+0x240
    class rayInfo rayUp; // r1+0x224
    class rayInfo rayDown; // r1+0x208

    {
        // Range: 0x80092F98 -> 0x80093068
        // Local variables
        class rayInfo targetRay; // r1+0x294
    }
    {
        // Range: 0x80093860 -> 0x80093EB8
        // Local variables
        float baseDist; // f2
        float newDist; // f0
        float newPhi; // f25
        float newTheta; // f26
        float saveInputPhi; // f0
        float saveInputTheta; // f0
        float phi; // r1+0x20
        float theta; // r1+0x24

        {
            // Range: 0x800939C4 -> 0x80093DA8
            // Local variables
            bool phiPushOut; // r1+0x18
            bool phiPushIn; // r1+0x19
            bool thetaPushOut; // r1+0x1A
            bool thetaPushIn; // r1+0x1B
        }
    }
}
// signature: zCamAiming::update_occlude(float, const zCamBasis &, zCamRestConfig &, zCamBasis &, xVec3 &)
// Range: 0x80093F60 -> 0x80093F88
bool zCamAiming::update_occlude(class zCamRestConfig * restConfig /* r0 */) {
}
// Range: 0x80093F90 -> 0x8009417C
bool zCamAiming::performCut(class zCamBasis * basis /* r28 */, class zCamBasis * goalBasis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // Local variables
    class zCamBasis cutBasis; // r1+0x8
    float deltaTheta; // f29
}
// signature: zCamAiming::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x80094180 -> 0x80094550
void zCamAiming::update_rest() {
    // Local variables
    float pitch; // f7

    {
        // Range: 0x80094258 -> 0x80094424
        // Local variables
        float vOffset; // f3
        float deltaPhi; // f2
        float restGoal; // f0
        float oldPhi; // f0
    }
    {
        // Range: 0x80094428 -> 0x80094528
        // Local variables
        float restGoal; // f2
    }
}
// Range: 0x80094590 -> 0x8009459C
float zCamAiming::getCurrentDefaultHeight() {
}
// signature: zCamAiming::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x800945A0 -> 0x800945C4
float zCamAiming::getCurrentPitchOffset() {
    // Local variables
    float pitch_offset; // f1
}
// signature: zCamAiming::getCurrentYawOffset(const zCamRestConfig &)
// Range: 0x800945D0 -> 0x800945F4
float zCamAiming::getCurrentYawOffset() {
    // Local variables
    float yaw_offset; // f1
}
// Range: 0x80094600 -> 0x8009461C
void * zCamAiming::zCamAiming() {
    // References
    // -> static class zCamBlendValues aimingBlendValues;
    // -> struct {} __vt__10zCamAiming;
}
