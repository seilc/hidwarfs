/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamFollow.cpp
*/
static class zCamBlendValues followBlendValues; // size: 0x7C, address: 0x806896A8
static class zCamBlendValues aimBlendValues; // size: 0x7C, address: 0x80689724
class zCamFollowTarget playerFollowTargets[4]; // size: 0x160, address: 0x80732838
// signature: zCamFollowNS::adjustRestPosition(float, zCamRestConfig &)
// Range: 0x800908A0 -> 0x80090920
void zCamFollowNS::adjustRestPosition(class zCamRestConfig & restConfig /* r31 */) {
}
// signature: zCamFollowNS::castConeRay(float, float, const xVec3 &, const xVec3 &, float, const xVec3 &, const xVec3 &, zCamRayHelper::rayInfo &)
// Range: 0x800909A0 -> 0x80090AC4
bool zCamFollowNS::castConeRay(float rayAngleCos /* f30 */, class xVec3 & rayStart /* r28 */, class xVec3 & rayEnd /* r29 */, float endPointDist /* f31 */, class xVec3 & right /* r30 */, class rayInfo & result /* r31 */) {
    // Local variables
    class xVec3 desty; // r1+0x38
    class xVec3 destx; // r1+0x2C
    float coneScale; // f0
}
// signature: zCamFollowNS::combineApproach(const zCamRayHelper::rayInfo &, const xVec3 &, zCamRayHelper::rayInfo &, const xVec3 &, xVec3 &)
// Range: 0x80093C70 -> 0x80093CD8
void zCamFollowNS::combineApproach() {
}
// signature: zCamFollowNS::getCurrentDefaultDistance(const zCamRestConfig &, int)
// Range: 0x80093BE0 -> 0x80093C70
float zCamFollowNS::getCurrentDefaultDistance() {
    // Local variables
    float dist; // f1

    // References
    // -> static float sCamTweakDistAdjCur;
}
// signature: zCamFollowNS::tryCut(const zCamBasis &, float, zCamBasis &, zCamBasis &, zCamRestConfig &)
// Range: 0x80090AD0 -> 0x80090D10
bool zCamFollowNS::tryCut(float deltaTheta /* f31 */, class zCamBasis & cutBasis /* r28 */, class zCamBasis & goalBasis /* r29 */, class zCamRestConfig & restConfig /* r30 */) {
    // Local variables
    float s; // f0
    float distTweak; // f0
    class rayInfo testRay; // r1+0x38
    class xVec3 viewNorm; // r1+0x2C
    class xVec3 up; // r1+0x20
    class xVec3 right; // r1+0x14
    bool isBlocked; // r3

    // References
    // -> static float sCamTweakDistAdjCur;
}
// Range: 0x80091440 -> 0x8009145C
class zPlayer * zCamFollowTarget::GetPlayer() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80090D60 -> 0x80090D78
void * zCamFollowTarget::zCamFollowTarget() {
    // References
    // -> struct {} __vt__16zCamFollowTarget;
}
// Range: 0x80090D80 -> 0x80090E3C
void zCamFollowTarget::reset(class zCamFollowTarget * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80090E40 -> 0x8009112C
bool zCamFollowTarget::update(class zCamFollowTarget * this /* r30 */, float dt /* f31 */, class zCamBlendValues * blendValues /* r31 */) {
    // Local variables
    class xVec3 player_loc; // r1+0x50

    {
        // Range: 0x80090FAC -> 0x8009109C
        // Local variables
        float dfloor; // f2
        float dmount; // f3
        float prev_mount_height; // f30
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800911C0 -> 0x80091200
void zCamFollow::create(class zCamFollow * this /* r31 */) {
}
// signature: zCamFollow::update_position(float, bool, xVec3 &, xVec3 &, xVec3 &)
// Range: 0x80091200 -> 0x8009126C
void zCamFollow::update_position() {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// signature: zCamFollow::reset(xVec3 &, zCamBasis &, zCamRestConfig &)
// Range: 0x80091270 -> 0x80091394
void zCamFollow::reset(class zCamFollow * this /* r28 */, class xVec3 & targetLoc /* r29 */) {
    // Local variables
    float cosangle; // f31
    class xVec3 point1; // r1+0x8

    // References
    // -> static float sCamTweakDistAdjCur;
}
// Range: 0x800913A0 -> 0x80091434
void zCamFollow::CenterCamera(class zCamFollow * this /* r31 */) {
    // Local variables
    class zPlayer * player; // r0
    float length; // f0
}
// signature: zCamFollow::LockOnNPC(bool)
// Range: 0x80091460 -> 0x80091740
void zCamFollow::LockOnNPC(class zCamFollow * this /* r27 */) {
    {
        // Range: 0x800914DC -> 0x800916F8
        // Local variables
        class FindTargetNPC findTarget; // r1+0x38
        class xVec3 facing; // r1+0x2C
        class zPlayer * player; // r0
    }

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// signature: zCamFollow::AddTarget(int)
// Range: 0x80091750 -> 0x800917B8
void zCamFollow::AddTarget(class zCamFollow * this /* r30 */) {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::RemoveTarget(int)
// Range: 0x800917C0 -> 0x800917D4
void zCamFollow::RemoveTarget() {
    // References
    // -> class zCamFollowTarget playerFollowTargets[4];
}
// signature: zCamFollow::update_goal(float, const zCamBasis &, const zCamRestConfig &, const zCamTarget **, int, const xVec3 &, const xVec3 &, zCamVelocity &, zCamBasis &)
// Range: 0x800917E0 -> 0x80092240
void zCamFollow::update_goal(class zCamFollow * this /* r21 */, float dt /* f30 */, class zCamBasis & basis /* r22 */, class zCamRestConfig & restConfig /* r23 */, class zCamTarget * * targets /* r24 */, class xVec3 & targetLoc /* r28 */, class xVec3 & targetMotion /* r25 */, class zCamVelocity & inputVel /* r26 */, class zCamBasis & goalBasis /* r27 */) {
    // Local variables
    class zPlayer * player; // r20
    bool lockTrampolineTarget; // r29
    class xVec3 tweakTargetPos; // r1+0x6C
    bool wasAiming; // r28
    bool isAiming; // r0

    {
        // Range: 0x80091914 -> 0x80091DFC
        // Local variables
        float length; // f0
        class xVec3 faceDir; // r1+0x60
        class zPlayer * player; // r0

        {
            // Range: 0x80091984 -> 0x800919C0
            // Local variables
            class xVec3 npcPos; // r1+0x54
        }
        {
            // Range: 0x80091A24 -> 0x80091DFC
            // Local variables
            bool cancelled; // r20
            class zCamBasis aimBasis; // r1+0x98

            {
                // Range: 0x80091BA0 -> 0x80091BFC
                // Local variables
                class rayInfo aimingRay; // r1+0x78
            }
            {
                // Range: 0x80091BFC -> 0x80091DFC
                // Local variables
                float dirOffset; // f1

                {
                    // Range: 0x80091C9C -> 0x80091DFC
                    // Local variables
                    float goalTheta; // f29
                }
            }
        }
    }
    {
        // Range: 0x80091E54 -> 0x80091F04
        // Local variables
        float dirOffset; // f1
        float tweakTheta; // f2

        {
            // Range: 0x80091EB0 -> 0x80091F04
            // Local variables
            float goalTheta; // f1
        }
    }
    {
        // Range: 0x80091F54 -> 0x80092210
        // Local variables
        float calc_auto_theta; // r1+0x8
        float speed; // f31
        float length; // f29

        {
            // Range: 0x80091F74 -> 0x800920F8
            // Local variables
            class zPlayer * player; // r0

            {
                // Range: 0x80091F94 -> 0x800920F8
                // Local variables
                class xVec3 playerDir; // r1+0x48

                {
                    // Range: 0x80091FE8 -> 0x800920F8
                    // Local variables
                    class xVec3 cameraDir; // r1+0x3C

                    {
                        // Range: 0x80092040 -> 0x800920F8
                        // Local variables
                        float cosAngle; // f2

                        {
                            // Range: 0x80092060 -> 0x800920F8
                            // Local variables
                            float autoTheta; // f1
                            float relDir; // f3
                            float s; // f6
                        }
                    }
                }
            }
        }
        {
            // Range: 0x80092100 -> 0x80092210
            {
                // Range: 0x80092108 -> 0x80092200
                // Local variables
                float rigidity; // f31
                float turn_threshold; // f1
                float diffAngle; // f29

                {
                    // Range: 0x8009217C -> 0x800921F0
                    // Local variables
                    float autoPhi; // f1
                    float s; // f3
                }
            }
        }
    }

    // References
    // -> static float sCamTweakDirPitchCur;
    // -> static float sCamTweakDirPitchRangeCur;
    // -> static float sCamTweakDirRigidityCur;
    // -> static float sCamTweakDirYawCur;
    // -> static float sCamTweakDirYawRangeCur;
    // -> static class zCamBlendValues followBlendValues;
    // -> static class zCamBlendValues aimBlendValues;
}
// Range: 0x800922B0 -> 0x80092380
void zCamFollow::goal_post_update(class zCamFollow * this /* r29 */, float dt /* f31 */, class zCamBasis & goalBasis /* r30 */) {
    // Local variables
    class zSBPlayer * player; // r0
    class xVec3 tweakTargetPos; // r1+0x8

    {
        // Range: 0x800922E4 -> 0x8009233C
        // Local variables
        float height_limit; // f0
    }
}
// signature: zCamFollow::update_input(float, const zCamBasis &, zCamRestConfig &, zCamVelocity &)
// Range: 0x80092380 -> 0x8009240C
void zCamFollow::update_input(class zCamFollow * this /* r30 */, class zCamVelocity & inputVel /* r31 */) {
    {
        // Range: 0x800923B8 -> 0x800923F4
        // Local variables
        class xVec3 dummy; // r1+0x8
    }
}
// signature: zCamFollow::apply_input(float, const zCamRestConfig &, zCamBasis &, zCamVelocity &)
// Range: 0x80092410 -> 0x8009253C
void zCamFollow::apply_input(class zCamFollow * this /* r29 */, float dt /* f31 */, class zCamRestConfig & restConfig /* r30 */, class zCamBasis & basis /* r31 */) {
    // Local variables
    float theta; // f3

    {
        // Range: 0x80092484 -> 0x800924F0
        // Local variables
        float goalTheta; // f1
    }
}
// Range: 0x80092540 -> 0x80093BDC
bool zCamFollow::update_collision(class zCamFollow * this /* r15 */, float dt /* f20 */, class zCamBasis & basis /* r16 */, class rayInfo & center /* r17 */, class zCamRestConfig & restConfig /* r18 */, class zCamBasis & goalBasis /* r19 */, class zCamVelocity & inputVel /* r20 */, bool & noBlend /* r21 */) {
    // Local variables
    bool isOccluded; // r0
    float minDist; // f0
    float absMinDist; // f30
    float maxDist; // f29
    bool userPushIn; // r28
    bool userPushOut; // r27
    bool userPushUp; // r1+0x1C
    bool collidedBehind; // r26
    class xVec3 viewNorm; // r1+0x168
    float minBehindDistance; // f28
    class rayInfo backRay; // r1+0x200
    class xVec3 up; // r1+0x15C
    class xVec3 right; // r1+0x150
    float deltaTheta; // f27
    float deltaThetaLong; // f26
    float deltaPhi; // f25
    float deltaPhiLong; // f24
    int deltaThetaCount; // r25
    int deltaThetaLongCount; // r24
    int deltaPhiCount; // r23
    int deltaPhiLongCount; // r22
    class xVec3 approachTheta; // r1+0x144
    class xVec3 approachPhi; // r1+0x138
    float restDist; // f23
    class rayInfo rayRight; // r1+0x1E4
    class rayInfo rayLeft; // r1+0x1C8
    class rayInfo rayUp; // r1+0x1AC
    class rayInfo rayDown; // r1+0x190
    float coneRayLength; // f22
    class xVec3 coneEndpoint; // r1+0x12C
    float newDist; // f0
    class rayInfo basisRay; // r1+0x174
    int playerIdx; // r0

    {
        // Range: 0x8009263C -> 0x800926BC
        // Local variables
        class rayInfo targetRay; // r1+0x21C
    }
    {
        // Range: 0x80092AAC -> 0x800937AC
        // Local variables
        class xVec3 approachDown; // r1+0xFC
        class xVec3 approachUp; // r1+0x108
        class xVec3 approachLeft; // r1+0x114
        class xVec3 approachRight; // r1+0x120
        float phi; // r1+0x28
        float theta; // r1+0x2C

        {
            // Range: 0x80092D00 -> 0x80092F08
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x80092F3C -> 0x80093138
            // Local variables
            float endPointDist; // f21
        }
        {
            // Range: 0x80093138 -> 0x800937AC
            // Local variables
            bool phiPushOut; // r1+0x18
            bool phiPushIn; // r1+0x19
            bool thetaPushOut; // r1+0x1A
            bool thetaPushIn; // r1+0x1B
            float saveInputPhi; // f21
            float saveInputTheta; // f24
            float newPhiLong; // f28
            float newPhi; // f26
            float newThetaLong; // f1
            float newTheta; // f22

            {
                // Range: 0x80093378 -> 0x800933C8
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x8009342C -> 0x8009347C
                // Local variables
                float alen; // f0
            }
            {
                // Range: 0x800935C4 -> 0x80093614
                // Local variables
                float z; // f3
                float x; // f2
            }
        }
    }
    {
        // Range: 0x800937F4 -> 0x8009388C
        // Local variables
        float dist; // r1+0x24
    }
    {
        // Range: 0x80093890 -> 0x80093930
        // Local variables
        float dist; // r1+0x20
    }
    {
        // Range: 0x800939A0 -> 0x80093A24
        // Local variables
        class xVec3 isectDir; // r1+0xE4
        class xVec3 isectPoint; // r1+0xF0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x80093CE0 -> 0x8009420C
bool zCamFollow::update_occlude(class zCamFollow * this /* r24 */, float dt /* f19 */, class zCamBasis & basis /* r25 */, class zCamRestConfig & restConfig /* r26 */, class zCamBasis & goalBasis /* r27 */, class xVec3 & occludeTarget /* r28 */) {
    // Local variables
    float yLimit; // f21
    class xVec3 targetPoint; // r1+0x60
    class xVec3 historyPoint; // r1+0x54

    {
        // Range: 0x80093D9C -> 0x8009413C
        // Local variables
        int index; // r29

        {
            // Range: 0x80093D9C -> 0x8009413C
            // Local variables
            float prevYLimit; // f1
            class xVec3 goalPoint; // r1+0x30
            float distTweak; // f0
            float dist; // f20
            class xVec3 oldPoint; // r1+0x48
            float hitDist; // r1+0x8

            {
                // Range: 0x80093D9C -> 0x80093DB4
                // Local variables
                float newDist; // f18
                class xVec3 newPoint; // r1+0x3C
            }
        }
    }

    // References
    // -> static float sCamTweakDistAdjCur;
}
// Range: 0x80094210 -> 0x800943A8
bool zCamFollow::performCut(class zCamBasis & basis /* r29 */, class zCamBasis & goalBasis /* r30 */, class zCamRestConfig & restConfig /* r31 */) {
    // Local variables
    class zCamBasis cutBasis; // r1+0x8
    float deltaTheta; // f29
}
// signature: zCamFollow::update_rest(float, const zCamTarget **, int, const xVec3 &, const zCamBasis &, const zCamBasis &, const zCamVelocity &, zCamRestConfig &)
// Range: 0x800943B0 -> 0x800948E8
void zCamFollow::update_rest(class zCamFollow * this /* r27 */, float dt /* f30 */, class zCamTarget * * targets /* r28 */, class xVec3 & targetMotion /* r29 */, class zCamVelocity & inputVel /* r26 */, class zCamRestConfig & restConfig /* r30 */) {
    // Local variables
    float phi; // f31
    bool userPhi; // r26
    bool userMove; // r31
    float newDist; // f29
    float distTweak; // f0

    {
        // Range: 0x80094528 -> 0x80094740
        // Local variables
        float restGoal; // f0

        {
            // Range: 0x800945F0 -> 0x80094650
            // Local variables
            class xVec3 moveVec; // r1+0x14
        }
    }

    // References
    // -> static float sCamTweakDistAdjCur;
    // -> bool tweakChanged;
}
// signature: zCamFollow::post_process(const zCamBasis &, const xVec3 &, const zCamRestConfig &)
// Range: 0x800948F0 -> 0x800949B0
void zCamFollow::post_process() {
    // Local variables
    class MoBlurSettings settings; // r1+0x8
    float blur_factor; // f2
    float blur_zoom; // f5
    float blur_scale; // f1
}
// signature: zCamFollow::updateAiming(float, const zCamTarget *)
// Range: 0x800949B0 -> 0x80094B5C
bool zCamFollow::updateAiming(class zCamFollow * this /* r28 */, float dt /* f31 */) {
    // Local variables
    class zPlayer * player; // r29
}
// Range: 0x80094B60 -> 0x80094B8C
void zCamFollow::exitAiming() {
}
// Range: 0x80094B90 -> 0x80094BA8
float zCamFollow::getCurrentDefaultHeight() {
    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamFollow::getCurrentPitchOffset(const zCamRestConfig &)
// Range: 0x80094BB0 -> 0x80094C9C
float zCamFollow::getCurrentPitchOffset(class zCamFollow * this /* r31 */) {
    // Local variables
    float pitch_offset; // f31

    // References
    // -> static float sCamTweakPitchCur;
}
// signature: zCamFollow::getCurrentYawOffset(const zCamRestConfig &)
// Range: 0x80094CA0 -> 0x80094CF4
float zCamFollow::getCurrentYawOffset() {
    // Local variables
    float yaw_offset; // f1
}
// Range: 0x80094D00 -> 0x80094D1C
void * zCamFollow::zCamFollow() {
    // References
    // -> static class zCamBlendValues followBlendValues;
    // -> struct {} __vt__10zCamFollow;
}
