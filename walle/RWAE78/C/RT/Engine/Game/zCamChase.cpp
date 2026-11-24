/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamChase.cpp
*/
static class zCamBlendValues earthBlendValues; // size: 0x6C, address: 0x806CBB5C
static class zCamChaseBlendValues earthChaseBlendValues; // size: 0xA0, address: 0x806CBBC8
static class zCamBlendValues spaceBlendValues; // size: 0x6C, address: 0x806CBC68
static class zCamChaseBlendValues spaceChaseBlendValues; // size: 0xA0, address: 0x806CBCD8
static class zCamBlendValues speedwayBlendValues; // size: 0x6C, address: 0x806CBD78
static class zCamChaseBlendValues speedwayChaseBlendValues; // size: 0xA0, address: 0x806CBDE8
class zCamPlayerTarget playerChaseTargets[4]; // size: 0x110, address: 0x8076B898
// signature: zCamChaseNS::adjustRestMaxVOffset(float, zCamRestConfig &)
// Range: 0x80096750 -> 0x8009678C
void zCamChaseNS::adjustRestMaxVOffset() {
}
// signature: zCamChaseNS::adjustRestMinVOffset(float, zCamRestConfig &)
// Range: 0x80096790 -> 0x800967CC
void zCamChaseNS::adjustRestMinVOffset() {
}
// Range: 0x80095760 -> 0x8009599C
void zCamChaseNS::thetaRangeClamp(float min /* f30 */, float * val /* r30 */, float max /* f31 */) {
    // Local variables
    float val2; // f2
}
// signature: zCamChaseNS::adjustRestMaxHOffset(float, zCamRestConfig &)
// Range: 0x80096560 -> 0x80096744
void zCamChaseNS::adjustRestMaxHOffset(class zCamRestConfig * restConfig /* r30 */) {
}
// signature: zCamChaseNS::adjustRestMinHOffset(float, zCamRestConfig &)
// Range: 0x80096370 -> 0x80096554
void zCamChaseNS::adjustRestMinHOffset(class zCamRestConfig * restConfig /* r30 */) {
}
// signature: zCamChaseNS::castConeRay(float, float, const xVec3 &, const xVec3 &, float, const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &, const zCamChaseBlendValues *)
// Range: 0x80094E20 -> 0x80094FE4
bool zCamChaseNS::castConeRay(class rayInfo * result /* r31 */) {
    // Local variables
    class xVec3 desty; // r1+0x5C
    class xVec3 destx; // r1+0x50
    float coneScale; // f8
}
// signature: zCamChaseNS::getCurrentDefaultDistance(float, const zCamChaseBlendValues *)
// Range: 0x80096330 -> 0x80096364
float zCamChaseNS::getCurrentDefaultDistance() {
    // Local variables
    float dist; // f1
}
// Range: 0x80094FF0 -> 0x80095044
void zCamChase::create(class zCamChase * this /* r31 */) {
}
// signature: zCamChase::reset(xVec3 &, zCamBasis &, zCamRestConfig &)
// Range: 0x80095050 -> 0x800950D8
void zCamChase::reset(class zCamChase * this /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
}
// signature: zCamChase::AddTarget(int)
// Range: 0x800950E0 -> 0x80095150
void zCamChase::AddTarget(class zCamChase * this /* r30 */) {
    // References
    // -> class zCamPlayerTarget playerChaseTargets[4];
}
// signature: zCamChase::RemoveTarget(int)
// Range: 0x80095150 -> 0x800951BC
void zCamChase::RemoveTarget() {
    // References
    // -> class zCamPlayerTarget playerChaseTargets[4];
}
// signature: zCamChase::update_input(float, const zCamBasis &, zCamRestConfig &, zCamVelocity &)
// Range: 0x800951C0 -> 0x8009525C
void zCamChase::update_input() {
    {
        // Range: 0x800951C4 -> 0x80095258
        // Local variables
        float dist; // f0
    }
}
// signature: zCamChase::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x80095260 -> 0x800956F8
void zCamChase::update_goal(class zCamChase * this /* r26 */, float dt /* f30 */, class zCamBasis * basis /* r27 */, class zCamRestConfig * restConfig /* r28 */, class zCamTarget * * targets /* r23 */, class xVec3 * targetLoc /* r24 */, class xVec3 * targetMotion /* r25 */, class zCamVelocity * inputVel /* r29 */, class zCamBasis * goalBasis /* r30 */) {
    // Local variables
    class xVec3 aimDir; // r1+0x54
    float moveDist; // f31
    float speed; // f30
    bool isCheating; // r0
    float v; // r1+0x8

    {
        // Range: 0x8009538C -> 0x80095480
        // Local variables
        class zCamBasis goalFollow; // r1+0x80

        {
            // Range: 0x800953FC -> 0x80095480
            // Local variables
            float deltaTheta; // f0
            float s; // f0
        }
    }
    {
        // Range: 0x80095524 -> 0x800955C8
        // Local variables
        class rayInfo goalRay; // r1+0x60

        {
            // Range: 0x8009554C -> 0x800955C8
            // Local variables
            class xVec3 ipoint; // r1+0x48
        }
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// signature: zCamChase::update_collision(float, const zCamBasis &, const zCamRayHelper::rayInfo, zCamRestConfig &, zCamBasis &, zCamVelocity &, bool &)
// Range: 0x800959A0 -> 0x80096324
bool zCamChase::update_collision(class zCamChase * this /* r23 */, float dt /* f25 */, class rayInfo * center /* r24 */, class zCamRestConfig * restConfig /* r25 */, class zCamBasis * goalBasis /* r26 */) {
    // Local variables
    bool isOccluded; // r0
    float minDist; // f0
    float absMinDist; // f30
    float maxDist; // f29
    bool collidedBehind; // r29
    class xVec3 viewNorm; // r1+0x64
    float minBehindDistance; // f28
    class rayInfo backRay; // r1+0xE0
    class xVec3 up; // r1+0x58
    class xVec3 right; // r1+0x4C
    float deltaTheta; // f27
    float deltaPhi; // f26
    int deltaThetaCount; // r28
    int deltaPhiCount; // r27
    class rayInfo rayRight; // r1+0xC4
    class rayInfo rayLeft; // r1+0xA8
    class rayInfo rayUp; // r1+0x8C
    class rayInfo rayDown; // r1+0x70

    {
        // Range: 0x80095A60 -> 0x80095AAC
        // Local variables
        class rayInfo targetRay; // r1+0xFC
    }
    {
        // Range: 0x80095C44 -> 0x800961F4
        // Local variables
        float phi; // r1+0x20
        float theta; // r1+0x24

        {
            // Range: 0x80095DB4 -> 0x80095F20
            // Local variables
            float endPointDist; // f24
        }
        {
            // Range: 0x80095F50 -> 0x800960B8
            // Local variables
            float endPointDist; // f24
        }
        {
            // Range: 0x800960B8 -> 0x800961F4
            // Local variables
            float newPhi; // f3
            float newTheta; // f1
        }
    }
    {
        // Range: 0x800961F4 -> 0x800962C8
        // Local variables
        float newDist; // r1+0x1C

        {
            // Range: 0x80096264 -> 0x800962C8
            // Local variables
            float dist; // r1+0x18
        }
    }

    // References
    // -> class zCamRayHelper rayHelper;
}
// signature: zCamChase::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x800967D0 -> 0x80096E28
void zCamChase::update_rest(class zCamChase * this /* r28 */, float dt /* f28 */, class zCamTarget * * targets /* r27 */, class zCamBasis * goalBasis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // Local variables
    float speed; // f31
    class xVec3 newAt; // r1+0x8
    float cosAtChange; // f0
    float goalDistOffset; // f1

    {
        // Range: 0x80096998 -> 0x80096D0C
        // Local variables
        float drift_speed; // f29
        float vmax; // f30

        {
            // Range: 0x80096AC4 -> 0x80096D0C
            // Local variables
            float goal; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80096E30 -> 0x80097624
void zCamChase::post_process(class zCamChase * this /* r26 */, class zCamBasis * basis /* r27 */, class xVec3 * lookLoc /* r28 */, class zCamRestConfig * restConfig /* r29 */) {
    // Local variables
    float blur_factor; // f5
    float blur_zoom; // f4
    float blur_scale; // f1
    class MoBlurSettings settings; // r1+0x8
    class zEvePlayer * eve; // r30

    {
        // Range: 0x80096F4C -> 0x800972B8
        // Local variables
        class xMat3x3 lookOffset; // r1+0x50
        float pitch; // f2
        float yaw; // f29
    }
    {
        // Range: 0x800972B8 -> 0x800975F4
        // Local variables
        class xMat3x3 lookOffset; // r1+0x20
        float pitch; // f2
        float yaw; // f29
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80097660 -> 0x8009766C
float zCamChase::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamChase::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x80097670 -> 0x800976B8
float zCamChase::getCurrentPitchOffset() {
    // Local variables
    float pitch_offset; // f1

    // References
    // -> static float sCamTweakPitchCur;
}
