/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamFollow.cpp
*/
static class zCamBlendValues followBlendValues; // size: 0x6C, address: 0x806CBEE4
class zCamFollowTarget playerFollowTargets[4]; // size: 0x160, address: 0x8076BC38
// signature: zCamFollowNS::adjustRestPosition(float, zCamRestConfig &)
// Range: 0x8009BF50 -> 0x8009C054
void zCamFollowNS::adjustRestPosition() {
}
// signature: zCamFollowNS::adjustRestMaxOffset(float, zCamRestConfig &)
// Range: 0x8009F320 -> 0x8009F354
void zCamFollowNS::adjustRestMaxOffset() {
}
// signature: zCamFollowNS::adjustRestMinOffset(float, zCamRestConfig &)
// Range: 0x8009F360 -> 0x8009F394
void zCamFollowNS::adjustRestMinOffset() {
}
// signature: zCamFollowNS::castConeRay(float, float, const xVec3 &, const xVec3 &, float, const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x8009C060 -> 0x8009C220
bool zCamFollowNS::castConeRay(class rayInfo * result /* r31 */) {
    // Local variables
    class xVec3 desty; // r1+0x5C
    class xVec3 destx; // r1+0x50
    float coneScale; // f8
}
// signature: zCamFollowNS::combineApproach(const zCamRayHelper::rayInfo &, const xVec3 &, zCamRayHelper::rayInfo &, const xVec3 &, xVec3 &)
// Range: 0x8009F270 -> 0x8009F31C
void zCamFollowNS::combineApproach() {
}
// signature: zCamFollowNS::getCurrentDefaultDistance(const zCamRestConfig &, int)
// Range: 0x8009F1F0 -> 0x8009F268
float zCamFollowNS::getCurrentDefaultDistance() {
    // Local variables
    float dist; // f1

    // References
    // -> static float sCamTweakDistMultCur;
}
// signature: zCamFollowNS::tryCut(const zCamBasis &, float, zCamBasis &, zCamBasis &, zCamRestConfig &)
// Range: 0x8009C220 -> 0x8009CC18
bool zCamFollowNS::tryCut(float deltaTheta /* f28 */, class zCamBasis * cutBasis /* r28 */, class zCamBasis * goalBasis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // Local variables
    float s; // f0
    float distTweak; // f0
    class rayInfo testRay; // r1+0x1B8
    class xVec3 viewNorm; // r1+0x1AC
    class xVec3 up; // r1+0x1A0
    class xVec3 right; // r1+0x194
    bool isBlocked; // r0

    // References
    // -> static float sCamTweakDistMultCur;
}
// Range: 0x8009CC20 -> 0x8009CC38
void * zCamFollowTarget::zCamFollowTarget() {
    // References
    // -> struct {} __vt__16zCamFollowTarget;
}
// Range: 0x8009CC40 -> 0x8009CCE8
void zCamFollowTarget::reset(class zCamFollowTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8009CCF0 -> 0x8009D1C0
bool zCamFollowTarget::update(class zCamFollowTarget * this /* r27 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r28 */) {
    // Local variables
    class xVec3 player_loc; // r1+0xBC

    {
        // Range: 0x8009CF10 -> 0x8009D038
        // Local variables
        float dfloor; // f2
        float dmount; // f3
        float prev_mount_height; // f5
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8009D1D0 -> 0x8009D224
void zCamFollow::create(class zCamFollow * this /* r31 */) {
}
// signature: zCamFollow::update_position(float, bool, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x8009D230 -> 0x8009D2B8
void zCamFollow::update_position() {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// signature: zCamFollow::reset(xVec3 &, zCamBasis &, zCamRestConfig &)
// Range: 0x8009D2C0 -> 0x8009D410
void zCamFollow::reset(class zCamFollow * this /* r29 */, class xVec3 * targetLoc /* r30 */) {
    // Local variables
    float cosangle; // f29
    class xVec3 point1; // r1+0x8

    // References
    // -> static float sCamTweakDistMultCur;
}
// signature: zCamFollow::AddTarget(int)
// Range: 0x8009D410 -> 0x8009D480
void zCamFollow::AddTarget(class zCamFollow * this /* r30 */) {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::RemoveTarget(int)
// Range: 0x8009D480 -> 0x8009D4EC
void zCamFollow::RemoveTarget() {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x8009D4F0 -> 0x8009DC34
void zCamFollow::update_goal(class zCamFollow * this /* r24 */, float dt /* f30 */, class zCamBasis * basis /* r25 */, class zCamRestConfig * restConfig /* r26 */, class zCamTarget * * targets /* r27 */, class xVec3 * targetMotion /* r28 */, class zCamVelocity * inputVel /* r29 */, class zCamBasis * goalBasis /* r30 */) {
    // Local variables
    float length; // f4
    float speed; // f31

    {
        // Range: 0x8009D738 -> 0x8009DA70
        {
            // Range: 0x8009D750 -> 0x8009DA64
            // Local variables
            class xVec3 playerDir; // r1+0x20

            {
                // Range: 0x8009D834 -> 0x8009DA58
                // Local variables
                class xVec3 cameraDir; // r1+0x14

                {
                    // Range: 0x8009D90C -> 0x8009DA4C
                    // Local variables
                    float cosAngle; // f0

                    {
                        // Range: 0x8009D934 -> 0x8009DA40
                        // Local variables
                        float autoTheta; // f4
                        float relDir; // f2
                        float s; // f0
                    }
                }
            }
        }
    }
    {
        // Range: 0x8009DA7C -> 0x8009DBE4
        {
            // Range: 0x8009DA84 -> 0x8009DBD8
            // Local variables
            float diffAngle; // f4

            {
                // Range: 0x8009DAE8 -> 0x8009DBCC
                // Local variables
                float autoPhi; // f4
                float s; // f0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCamFollow::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x8009DC40 -> 0x8009DED4
void zCamFollow::apply_input(class zCamFollow * this /* r28 */, float dt /* f31 */, class zCamRestConfig * restConfig /* r29 */, class zCamBasis * basis /* r30 */) {
    // Local variables
    float theta; // f4

    {
        // Range: 0x8009DCD8 -> 0x8009DDE8
        // Local variables
        float goalTheta; // f5
    }
}
// Range: 0x8009DEE0 -> 0x8009F1E4
bool zCamFollow::update_collision(class zCamFollow * this /* r16 */, float dt /* f20 */, class zCamBasis * basis /* r17 */, class rayInfo * center /* r18 */, class zCamRestConfig * restConfig /* r19 */, class zCamBasis * goalBasis /* r20 */, class zCamVelocity * inputVel /* r21 */, bool * noBlend /* r22 */) {
    // Local variables
    bool isOccluded; // r0
    float minDist; // f0
    float absMinDist; // f29
    float maxDist; // f28
    bool userPushIn; // r29
    bool userPushOut; // r28
    bool userPushUp; // r1+0x1C
    bool collidedBehind; // r27
    class xVec3 viewNorm; // r1+0x16C
    float minBehindDistance; // f27
    class rayInfo backRay; // r1+0x204
    class xVec3 up; // r1+0x160
    class xVec3 right; // r1+0x154
    float deltaTheta; // f26
    float deltaThetaLong; // f25
    float deltaPhi; // f24
    float deltaPhiLong; // f23
    int deltaThetaCount; // r26
    int deltaThetaLongCount; // r25
    int deltaPhiCount; // r24
    int deltaPhiLongCount; // r23
    class xVec3 approachTheta; // r1+0x148
    class xVec3 approachPhi; // r1+0x13C
    float restDist; // f22
    class rayInfo rayRight; // r1+0x1E8
    class rayInfo rayLeft; // r1+0x1CC
    class rayInfo rayUp; // r1+0x1B0
    class rayInfo rayDown; // r1+0x194
    float coneRayLength; // f0
    class xVec3 coneEndpoint; // r1+0x130
    float newDist; // r1+0x28
    class rayInfo basisRay; // r1+0x178
    int playerIdx; // r18

    {
        // Range: 0x8009DFD8 -> 0x8009E024
        // Local variables
        class rayInfo targetRay; // r1+0x220
    }
    {
        // Range: 0x8009E248 -> 0x8009EE3C
        // Local variables
        class xVec3 approachDown; // r1+0x100
        class xVec3 approachUp; // r1+0x10C
        class xVec3 approachLeft; // r1+0x118
        class xVec3 approachRight; // r1+0x124
        float phi; // r1+0x2C
        float theta; // r1+0x30

        {
            // Range: 0x8009E498 -> 0x8009E688
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x8009E6B8 -> 0x8009E8A4
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x8009E8A4 -> 0x8009EE3C
            // Local variables
            bool phiPushOut; // r1+0x18
            bool phiPushIn; // r1+0x19
            bool thetaPushOut; // r1+0x1A
            bool thetaPushIn; // r1+0x1B
            float saveInputPhi; // f21
            float saveInputTheta; // f23
            float newPhiLong; // f31
            float newPhi; // f25
            float newThetaLong; // f1
            float newTheta; // f27

            {
                // Range: 0x8009EAB4 -> 0x8009EAF0
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x8009EB4C -> 0x8009EB88
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x8009ECC0 -> 0x8009ED0C
                // Local variables
                float z; // f3
                float x; // f2
            }
        }
    }
    {
        // Range: 0x8009EE60 -> 0x8009EEE8
        // Local variables
        float dist; // r1+0x24
    }
    {
        // Range: 0x8009EEEC -> 0x8009EF88
        // Local variables
        float dist; // r1+0x20
    }
    {
        // Range: 0x8009EFE0 -> 0x8009F060
        // Local variables
        class xVec3 isectDir; // r1+0xE8
        class xVec3 isectPoint; // r1+0xF4
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zCamRayHelper rayHelper;
}
// Range: 0x8009F3A0 -> 0x8009FE50
bool zCamFollow::update_occlude(class zCamFollow * this /* r24 */, float dt /* r1+0x8 */, class zCamBasis * basis /* r25 */, class zCamRestConfig * restConfig /* r26 */, class zCamBasis * goalBasis /* r27 */, class xVec3 * occludeTarget /* r28 */) {
    // Local variables
    float yLimit; // f31
    class xVec3 targetPoint; // r1+0xC4
    class xVec3 historyPoint; // r1+0xB8

    {
        // Range: 0x8009F4B8 -> 0x8009FD54
        // Local variables
        int index; // r29

        {
            // Range: 0x8009F4B8 -> 0x8009FD54
            // Local variables
            float prevYLimit; // f1
            class xVec3 goalPoint; // r1+0x94
            float distTweak; // f0
            float dist; // f14
            class xVec3 oldPoint; // r1+0xAC
            float hitDist; // r1+0xC

            {
                // Range: 0x8009F4C8 -> 0x8009F4C8
                // Local variables
                float newDist; // f15
                class xVec3 newPoint; // r1+0xA0
            }
        }
    }

    // References
    // -> static float sCamTweakDistMultCur;
}
// Range: 0x8009FE50 -> 0x800A003C
bool zCamFollow::performCut(class zCamBasis * basis /* r28 */, class zCamBasis * goalBasis /* r29 */, class zCamRestConfig * restConfig /* r30 */) {
    // Local variables
    class zCamBasis cutBasis; // r1+0x8
    float deltaTheta; // f29
}
// signature: zCamFollow::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x800A0040 -> 0x800A09C0
void zCamFollow::update_rest(class zCamFollow * this /* r27 */, float dt /* f30 */, class xVec3 * targetMotion /* r28 */, class zCamRestConfig * restConfig /* r29 */) {
    // Local variables
    bool inStorkJump; // r30
    float phi; // f31
    bool userPhi; // r26
    bool userMove; // r25
    float newDist; // f0
    float distTweak; // f0

    {
        // Range: 0x800A00C8 -> 0x800A010C
        // Local variables
        int ii; // r0
    }
    {
        // Range: 0x800A0254 -> 0x800A06F4
        // Local variables
        float restGoal; // f0

        {
            // Range: 0x800A03FC -> 0x800A0634
            // Local variables
            float moveDist; // f0
            class xVec3 moveDir; // r1+0x8

            {
                // Range: 0x800A047C -> 0x800A0634
                // Local variables
                float xzDist; // f0

                {
                    // Range: 0x800A0508 -> 0x800A057C
                    // Local variables
                    float climbGoal; // f1
                    float ySpeed; // f1
                }
            }
        }
    }

    // References
    // -> static float sCamTweakDistMultCur;
    // -> class xGlobals * xglobals;
}
// signature: zCamFollow::post_process(const zCamBasis &, const xVec3 &, const zCamRestConfig &)
// Range: 0x800A09C0 -> 0x800A0A68
void zCamFollow::post_process() {
    // Local variables
    class MoBlurSettings settings; // r1+0x8
    float blur_factor; // f2
    float blur_zoom; // f5
    float blur_scale; // f1
}
// Range: 0x800A0A70 -> 0x800A0A88
float zCamFollow::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamFollow::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x800A0A90 -> 0x800A0B08
float zCamFollow::getCurrentPitchOffset() {
    // Local variables
    float pitch_offset; // f1

    // References
    // -> static float sCamTweakPitchCur;
}
// signature: zCamFollow::getCurrentYawOffset(const zCamRestConfig &)
// Range: 0x800A0B10 -> 0x800A0B64
float zCamFollow::getCurrentYawOffset() {
    // Local variables
    float yaw_offset; // f1
}
// Range: 0x800A0B70 -> 0x800A0B8C
void * zCamFollow::zCamFollow() {
    // References
    // -> static class zCamBlendValues followBlendValues;
    // -> struct {} __vt__10zCamFollow;
}
