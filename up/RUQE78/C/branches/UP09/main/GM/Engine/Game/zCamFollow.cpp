/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamFollow.cpp
*/
static class zCamBlendValues followBlendValues; // size: 0x6C, address: 0x8077DAB0
class zCamFollowTarget playerFollowTargets[4]; // size: 0x160, address: 0x8081C080
// signature: zCamFollowNS::adjustRestPosition(float, zCamRestConfig &)
// Range: 0x8010C820 -> 0x8010C94C
void zCamFollowNS::adjustRestPosition() {
}
// signature: zCamFollowNS::adjustRestMaxOffset(float, zCamRestConfig &)
// Range: 0x8010FFA0 -> 0x8010FFD4
void zCamFollowNS::adjustRestMaxOffset() {
}
// signature: zCamFollowNS::adjustRestMinOffset(float, zCamRestConfig &)
// Range: 0x8010FFE0 -> 0x80110014
void zCamFollowNS::adjustRestMinOffset() {
}
// signature: zCamFollowNS::castConeRay(float, float, const xVec3 &, const xVec3 &, float, const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x8010C950 -> 0x8010CB00
bool zCamFollowNS::castConeRay(class rayInfo & result /* r31 */) {
    // Local variables
    class xVec3 desty; // r1+0x5C
    class xVec3 destx; // r1+0x50
    float coneScale; // f0
}
// signature: zCamFollowNS::combineApproach(const zCamRayHelper::rayInfo &, const xVec3 &, zCamRayHelper::rayInfo &, const xVec3 &, xVec3 &)
// Range: 0x8010FEF0 -> 0x8010FF9C
void zCamFollowNS::combineApproach() {
}
// signature: zCamFollowNS::getCurrentDefaultDistance(const zCamRestConfig &, int)
// Range: 0x8010FE60 -> 0x8010FEF0
float zCamFollowNS::getCurrentDefaultDistance() {
    // Local variables
    float dist; // f1

    // References
    // -> static float sCamTweakDistMultCur;
}
// signature: zCamFollowNS::tryCut(const zCamBasis &, float, zCamBasis &, zCamBasis &, zCamRestConfig &)
// Range: 0x8010CB00 -> 0x8010D49C
bool zCamFollowNS::tryCut(float deltaTheta /* f28 */, class zCamBasis & cutBasis /* r25 */, class zCamBasis & goalBasis /* r26 */, class zCamRestConfig & restConfig /* r27 */) {
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
// Range: 0x8010D4A0 -> 0x8010D4B8
void * zCamFollowTarget::zCamFollowTarget() {
    // References
    // -> struct {} __vt__16zCamFollowTarget;
}
// Range: 0x8010D4C0 -> 0x8010D568
void zCamFollowTarget::reset(class zCamFollowTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8010D570 -> 0x8010DA7C
bool zCamFollowTarget::update(class zCamFollowTarget * this /* r28 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r29 */) {
    // Local variables
    class xVec3 player_loc; // r1+0xBC

    {
        // Range: 0x8010D79C -> 0x8010D8E4
        // Local variables
        float dfloor; // f2
        float dmount; // f3
        float prev_mount_height; // f5
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8010DA90 -> 0x8010DAE4
void zCamFollow::create(class zCamFollow * this /* r31 */) {
}
// signature: zCamFollow::update_position(float, bool, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x8010DAF0 -> 0x8010DB78
void zCamFollow::update_position() {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// signature: zCamFollow::reset(xVec3 &, zCamBasis &, zCamRestConfig &)
// Range: 0x8010DB80 -> 0x8010DCB4
void zCamFollow::reset(class zCamFollow * this /* r30 */, class xVec3 & targetLoc /* r31 */) {
    // Local variables
    float cosangle; // f31
    class xVec3 point1; // r1+0x8

    // References
    // -> static float sCamTweakDistMultCur;
}
// signature: zCamFollow::AddTarget(int)
// Range: 0x8010DCC0 -> 0x8010DD30
void zCamFollow::AddTarget(class zCamFollow * this /* r30 */) {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::RemoveTarget(int)
// Range: 0x8010DD30 -> 0x8010DD9C
void zCamFollow::RemoveTarget() {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x8010DDA0 -> 0x8010E764
void zCamFollow::update_goal(class zCamFollow * this /* r24 */, float dt /* f31 */, class zCamBasis & basis /* r25 */, class zCamRestConfig & restConfig /* r26 */, class zCamTarget * * targets /* r27 */, class xVec3 & targetMotion /* r28 */, class zCamVelocity & inputVel /* r29 */, class zCamBasis & goalBasis /* r30 */) {
    // Local variables
    float length; // f6
    float speed; // f0
    float calc_auto_theta; // f1

    {
        // Range: 0x8010DF34 -> 0x8010E118
        // Local variables
        float dirOffset; // f3
        float tweakTheta; // f0

        {
            // Range: 0x8010E068 -> 0x8010E118
            // Local variables
            float goalTheta; // f2
        }
    }
    {
        // Range: 0x8010E1E0 -> 0x8010E504
        {
            // Range: 0x8010E200 -> 0x8010E504
            // Local variables
            class xVec3 playerDir; // r1+0x20

            {
                // Range: 0x8010E2B8 -> 0x8010E504
                // Local variables
                class xVec3 cameraDir; // r1+0x14

                {
                    // Range: 0x8010E398 -> 0x8010E504
                    // Local variables
                    float cosAngle; // f0

                    {
                        // Range: 0x8010E3B0 -> 0x8010E504
                        // Local variables
                        float autoTheta; // f6
                        float relDir; // f4
                        float s; // f7
                    }
                }
            }
        }
    }
    {
        // Range: 0x8010E504 -> 0x8010E724
        {
            // Range: 0x8010E504 -> 0x8010E714
            // Local variables
            float rigidity; // f5
            float turn_threshold; // f3
            float diffAngle; // f4

            {
                // Range: 0x8010E5E8 -> 0x8010E704
                // Local variables
                float autoPhi; // f4
                float s; // f3
            }
        }
    }

    // References
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> class xGlobals * xglobals;
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDirYawRangeCur;
}
// signature: zCamFollow::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x8010E770 -> 0x8010EA30
void zCamFollow::apply_input(class zCamFollow * this /* r29 */, float dt /* f31 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & basis /* r31 */) {
    // Local variables
    float theta; // f4

    {
        // Range: 0x8010E800 -> 0x8010E940
        // Local variables
        float goalTheta; // f5
    }
}
// Range: 0x8010EA30 -> 0x8010FE54
bool zCamFollow::update_collision(class zCamFollow * this /* r15 */, float dt /* f20 */, class zCamBasis & basis /* r16 */, class rayInfo & center /* r17 */, class zCamRestConfig & restConfig /* r18 */, class zCamBasis & goalBasis /* r19 */, class zCamVelocity & inputVel /* r20 */, bool & noBlend /* r21 */) {
    // Local variables
    bool isOccluded; // r0
    float minDist; // f0
    float absMinDist; // f29
    float maxDist; // f28
    bool userPushIn; // r28
    bool userPushOut; // r27
    bool userPushUp; // r1+0x1C
    bool collidedBehind; // r26
    class xVec3 viewNorm; // r1+0x16C
    float minBehindDistance; // f27
    class rayInfo backRay; // r1+0x204
    class xVec3 up; // r1+0x160
    class xVec3 right; // r1+0x154
    float deltaTheta; // f26
    float deltaThetaLong; // f25
    float deltaPhi; // f24
    float deltaPhiLong; // f23
    int deltaThetaCount; // r25
    int deltaThetaLongCount; // r24
    int deltaPhiCount; // r23
    int deltaPhiLongCount; // r22
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
    int playerIdx; // r16

    {
        // Range: 0x8010EB2C -> 0x8010EB7C
        // Local variables
        class rayInfo targetRay; // r1+0x220
    }
    {
        // Range: 0x8010EDB8 -> 0x8010FA54
        // Local variables
        class xVec3 approachDown; // r1+0x100
        class xVec3 approachUp; // r1+0x10C
        class xVec3 approachLeft; // r1+0x118
        class xVec3 approachRight; // r1+0x124
        float phi; // r1+0x2C
        float theta; // r1+0x30

        {
            // Range: 0x8010F008 -> 0x8010F210
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x8010F244 -> 0x8010F440
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x8010F440 -> 0x8010FA54
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
                // Range: 0x8010F680 -> 0x8010F6C4
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x8010F728 -> 0x8010F76C
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x8010F8B4 -> 0x8010F904
                // Local variables
                float z; // f3
                float x; // f2
            }
        }
    }
    {
        // Range: 0x8010FA78 -> 0x8010FB14
        // Local variables
        float dist; // r1+0x24
    }
    {
        // Range: 0x8010FB18 -> 0x8010FBC4
        // Local variables
        float dist; // r1+0x20
    }
    {
        // Range: 0x8010FC1C -> 0x8010FCA0
        // Local variables
        class xVec3 isectDir; // r1+0xE8
        class xVec3 isectPoint; // r1+0xF4
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zCamRayHelper rayHelper;
}
// Range: 0x80110060 -> 0x80110B8C
bool zCamFollow::update_occlude(class zCamFollow * this /* r25 */, float dt /* r1+0x8 */, class zCamBasis & basis /* r26 */, class zCamRestConfig & restConfig /* r27 */, class zCamBasis & goalBasis /* r28 */, class xVec3 & occludeTarget /* r29 */) {
    // Local variables
    float yLimit; // f14
    class xVec3 targetPoint; // r1+0xC4
    class xVec3 historyPoint; // r1+0xB8

    {
        // Range: 0x80110170 -> 0x80110A90
        // Local variables
        int index; // r30

        {
            // Range: 0x80110170 -> 0x80110A90
            // Local variables
            float prevYLimit; // f1
            class xVec3 goalPoint; // r1+0x94
            float distTweak; // f0
            float dist; // f15
            class xVec3 oldPoint; // r1+0xAC
            float hitDist; // r1+0xC

            {
                // Range: 0x80110170 -> 0x80110170
                // Local variables
                float newDist; // f16
                class xVec3 newPoint; // r1+0xA0
            }
        }
    }

    // References
    // -> static float sCamTweakDistMultCur;
}
// Range: 0x80110B90 -> 0x80110D84
bool zCamFollow::performCut(class zCamBasis & basis /* r29 */, class zCamBasis & goalBasis /* r30 */, class zCamRestConfig & restConfig /* r31 */) {
    // Local variables
    class zCamBasis cutBasis; // r1+0x8
    float deltaTheta; // f29
}
// signature: zCamFollow::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x80110D90 -> 0x801114D0
void zCamFollow::update_rest() {
    // Local variables
    float phi; // f0
    bool userPhi; // r5
    bool userMove; // r8
    float newDist; // f0
    float distTweak; // f0

    {
        // Range: 0x80110F0C -> 0x801111C8
        // Local variables
        float restGoal; // f0
    }

    // References
    // -> static float sCamTweakDistMultCur;
}
// signature: zCamFollow::post_process(const zCamBasis &, const xVec3 &, const zCamRestConfig &)
// Range: 0x801114D0 -> 0x80111590
void zCamFollow::post_process() {
    // Local variables
    class MoBlurSettings settings; // r1+0x8
    float blur_factor; // f2
    float blur_zoom; // f5
    float blur_scale; // f1
}
// Range: 0x801115A0 -> 0x801115B8
float zCamFollow::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamFollow::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x801115C0 -> 0x80111650
float zCamFollow::getCurrentPitchOffset() {
    // Local variables
    float pitch_offset; // f1

    // References
    // -> static float sCamTweakPitchCur;
}
// signature: zCamFollow::getCurrentYawOffset(const zCamRestConfig &)
// Range: 0x80111650 -> 0x801116A4
float zCamFollow::getCurrentYawOffset() {
    // Local variables
    float yaw_offset; // f1
}
// Range: 0x801116B0 -> 0x801116CC
void * zCamFollow::zCamFollow() {
    // References
    // -> static class zCamBlendValues followBlendValues;
    // -> struct {} __vt__10zCamFollow;
}
