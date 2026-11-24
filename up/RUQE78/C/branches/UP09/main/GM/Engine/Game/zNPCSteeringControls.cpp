/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCSteeringControls.cpp
*/
static class xVec3 ArrowDrawOffset; // size: 0xC, address: 0x807AFA3C
static class xVec3 ArrowDrawOffset; // size: 0xC, address: 0x807AFA48
static float sidewaysAccel; // size: 0x4, address: 0x807AFA54
// signature: zNPCSteeringVecLimiter::Get(const xVec3 *, const xMat3x3 *)
// Range: 0x801E27E0 -> 0x801E2900
float zNPCSteeringVecLimiter::Get() {
    {
        // Range: 0x801E27F8 -> 0x801E28F8
        // Local variables
        float mag; // f1
        float magNum; // f0
        float magDenum; // f4
        float limitZ2; // f6
        float limitY2; // f11
        float limitX2; // f10
        float dirLocalZ2; // f9
        float dirLocalY2; // f5
        float dirLocalX2; // f8
        class xVec3 dirLocal; // r1+0x8
    }
}
// signature: zNPCSteeringAccumulator::Accumulate(float, zNPCSteeringVec *)
// Range: 0x801E2900 -> 0x801E2A04
bool zNPCSteeringAccumulator::Accumulate() {
    {
        // Range: 0x801E2938 -> 0x801E29A4
        // Local variables
        class xVec3 truncatedVector; // r1+0x14
        float wantedMag; // f8
    }
    {
        // Range: 0x801E29A4 -> 0x801E29FC
        // Local variables
        class xVec3 vecToAdd; // r1+0x8
    }
}
// Range: 0x801E2A10 -> 0x801E2A7C
void * zNPCSteeringControl::zNPCSteeringControl() {
    // References
    // -> struct {} __vt__19zNPCSteeringControl;
}
// signature: zNPCSteeringControl::GetWallAvoidanceAcc(const zNPCEntity *, const zWallNetPositionXZ *, zNPCSteeringControl::zWallAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x801E2A80 -> 0x801E2E9C
bool zNPCSteeringControl::GetWallAvoidanceAcc(class zNPCEntity * npcEnt /* r28 */, class zWallAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */) {
    // Local variables
    float speedXZ; // f0
    class xVec3 swcDir; // r1+0x14
    float sweepDist; // f31
    class zWallNetPositionXZ swcStart; // r1+0x20
    class zWallNetCollis wallNetAvoidanceCollis; // r1+0x34
    float boundRadius; // f0
    class xVec3 avoidanceAccVec; // r1+0x8

    {
        // Range: 0x801E2CC4 -> 0x801E2D7C
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x801E2CC4 -> 0x801E2D7C
            // Local variables
            float avoidanceAccMag; // f6
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetWanderAcc(const zNPCEntity *, zNPCSteeringControl::zWanderData *, zNPCSteeringVec *, float)
// Range: 0x801E2F50 -> 0x801E31E8
bool zNPCSteeringControl::GetWanderAcc(class zNPCEntity * npcEnt /* r27 */, class zWanderData * wanderData /* r28 */, class zNPCSteeringVec * wanderAcc /* r29 */) {
    // Local variables
    float JitterThisTimeSlice; // f31
    class xVec3 RandomVector; // r1+0x20
    float magForward; // f8
    float magRandom; // f6
    class xVec3 wanderAccLocal; // r1+0x14
    class xVec3 wanderAccVec; // r1+0x8
}
// signature: zNPCSteeringControl::GetPlayerAvoidanceAcc(const zNPCEntity *, zNPCSteeringControl::zPlayerAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x801E31F0 -> 0x801E34C4
bool zNPCSteeringControl::GetPlayerAvoidanceAcc() {
    // Local variables
    class xVec3 avoidanceAccVec; // r1+0x14

    {
        // Range: 0x801E3224 -> 0x801E33F0
        // Local variables
        int i; // r12

        {
            // Range: 0x801E3224 -> 0x801E33F0
            // Local variables
            float dist2; // f0
            class xVec3 playerToNPC; // r1+0x8

            {
                // Range: 0x801E3248 -> 0x801E33F0
                // Local variables
                float avoidanceMag; // f31
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetObjectAvoidanceAcc(const zNPCEntity *, zNPCSteeringControl::zObjectAvoidanceData *, zNPCSteeringVec *, float, const xVec3 *)
// Range: 0x801E34D0 -> 0x801E3840
bool zNPCSteeringControl::GetObjectAvoidanceAcc(class zObjectAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */, class xVec3 * currentDest /* r31 */) {
    // Local variables
    class xVec3 testStart; // r1+0x54
    class xVec3 testDir; // r1+0x48
    float speedXZ; // f0
    float testDist; // f31
    float boxHeight; // f0
    float boxWidth; // f1
    class xVec3 avoidanceAccVec; // r1+0x3C
    class xVec3 contact; // r1+0x30
    class xVec3 avoidDir; // r1+0x24
    class xBase * avoidObj; // r1+0x8

    {
        // Range: 0x801E3664 -> 0x801E3774
        {
            // Range: 0x801E36AC -> 0x801E3774
            // Local variables
            float avoidanceAccMag; // f6
            float contactDist; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetVelCorrectionAcc(const xVec3 &, const xVec3 &, zNPCSteeringVecLimiter *, zNPCSteeringVec *, float, bool)
// Range: 0x801E3840 -> 0x801E3DD4
bool zNPCSteeringControl::GetVelCorrectionAcc(class zNPCSteeringVec * correctionAcc /* r31 */) {
    // Local variables
    class xVec3 diffVelocity; // r1+0x74
    float diffVelocityMag; // f0

    {
        // Range: 0x801E3940 -> 0x801E39C0
        // Local variables
        float maxAcc; // f1
        float accMag; // f31
    }
    {
        // Range: 0x801E39C0 -> 0x801E3DB4
        // Local variables
        float newAccMag; // f0
        float speedDelta; // f8
        class xVec3 newAcc; // r1+0x5C
        float turnFactor; // f6
        float forwardFactor; // f0
        float sideFactor; // f0
        class xVec3 desiredDir; // r1+0x68
        float desiredSpeed; // f0
        float currSpeed; // f0

        {
            // Range: 0x801E3D24 -> 0x801E3D84
            // Local variables
            float maxNewAcc; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float sidewaysAccel;
}
// signature: zNPCSteeringStopControl::CalculateVelConstraints(const xVec3 &, const xVec3 &, float, xVec3 *)
// Range: 0x801E3DE0 -> 0x801E3F14
bool zNPCSteeringStopControl::CalculateVelConstraints() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E3F20 -> 0x801E4004
void zNPCSteeringWanderControl::CalculateAcc(class zNPCSteeringWanderControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E4010 -> 0x801E41C8
void zNPCSteeringMoveToControl::CalculateAcc(class zNPCSteeringMoveToControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x58
    class zNPCSteeringVec objectAvoidanceAcc; // r1+0x48
    class zNPCSteeringVec playerAvoidanceAcc; // r1+0x38
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x801E40EC -> 0x801E412C
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x28
    }
    {
        // Range: 0x801E412C -> 0x801E4164
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x18
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringMoveToControl::Enter(const zNPCSteeringControl *)
// Range: 0x801E41D0 -> 0x801E423C
void zNPCSteeringMoveToControl::Enter() {
}
// Range: 0x801E4240 -> 0x801E4590
bool zNPCSteeringMoveToControl::GetArriveAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * arriveAcc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801E427C -> 0x801E4468
        // Local variables
        float boundRadius; // f0

        {
            // Range: 0x801E4350 -> 0x801E4468
            // Local variables
            float desiredSpeed; // f0
            class xVec3 PIDOutput; // r1+0x38
        }
    }
    {
        // Range: 0x801E4468 -> 0x801E4570
        // Local variables
        float dist; // f0

        {
            // Range: 0x801E4524 -> 0x801E4570
            // Local variables
            class xVec3 PIDOutput; // r1+0x2C
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E4590 -> 0x801E4874
bool zNPCSteeringMoveToControl::GetSeekAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * seekAcc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801E45CC -> 0x801E4768
        // Local variables
        bool correctionNeeded; // r0
        class xVec3 desiredVelocity; // r1+0x20
        float len; // f0
        class xVec3 direction; // r1+0x2C
        float boundRadius; // f0
    }
    {
        // Range: 0x801E4768 -> 0x801E4854
        // Local variables
        class xVec3 desiredVelocity; // r1+0x8
        float diffMag; // f0
        class xVec3 diff; // r1+0x14
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801E4880 -> 0x801E4AB0
void zNPCSteeringFleeControl::CalculateAcc(class zNPCSteeringFleeControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x38
    class zNPCSteeringVec fleeAcc; // r1+0x28
    class zNPCSteeringVec wanderAcc; // r1+0x18

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E4AC0 -> 0x801E4C48
void zNPCSteeringFollowPlayerControl::CalculateAcc(class zNPCSteeringFollowPlayerControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x48
    class zNPCSteeringVec objectAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x801E4B40 -> 0x801E4B80
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x38
    }
    {
        // Range: 0x801E4B80 -> 0x801E4BB8
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x28
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFollowPlayerClosestHitCollector::zNPCSteeringFollowPlayerClosestHitCollector(const xBase *, const xBase *)
// Range: 0x801E53B0 -> 0x801E53E0
void * zNPCSteeringFollowPlayerClosestHitCollector::zNPCSteeringFollowPlayerClosestHitCollector() {
    // References
    // -> struct {} __vt__43zNPCSteeringFollowPlayerClosestHitCollector;
}
// signature: zNPCSteeringFollowPlayerClosestHitCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x801EE510 -> 0x801EE634
void zNPCSteeringFollowPlayerClosestHitCollector::addCdPoint() {
    // Local variables
    class hkpWorldObject * worldObjectA; // r0
    class xBase * baseA; // r0
    class hkpWorldObject * worldObjectB; // r0
    class xBase * baseB; // r0
}
// signature: zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(zNPCSteeringFollowPlayerControl::zObjectAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x801E4C50 -> 0x801E5170
bool zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(class zNPCSteeringFollowPlayerControl * this /* r26 */, class zObjectAvoidanceData * avoidanceData /* r27 */, class zNPCSteeringVec * avoidanceAcc /* r28 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r29
    float speed; // f0
    class xVec3 castDir; // r1+0x16C
    float castLen; // f29
    class xVec3 castFrom; // r1+0x160
    class hkVector4 castFrom4; // r1+0x150
    class xVec3 castTo; // r1+0x140
    class hkVector4 castTo4; // r1+0x130
    class hkVector4 halfExtent; // r1+0x120
    class xVec3 castRight; // r1+0x108
    class xVec3 castUp; // r1+0xFC
    class hkRotation rt; // r1+0x1E0
    class hkTransform cylinderTransform; // r1+0x1A0
    class xVec3 avoidanceAccVec; // r1+0xF0
    class zNPCSteeringFollowPlayerClosestHitCollector hitCollector; // r1+0x210
    bool avoidanceAccSet; // r24

    {
        // Range: 0x801E4F60 -> 0x801E50E0
        // Local variables
        float distToContactPt; // f0
        class xVec3 toContactPt; // r1+0x80
        class xVec3 pos; // r1+0x8C
        class hkVector4 pos4; // r1+0xA0
        class xVec3 castedPlayer; // r1+0xB0
        class xVec3 toPlayer; // r1+0xBC
        class xVec3 normal; // r1+0xC8
        class hkVector4 normal4; // r1+0xE0
        class hkContactPoint contact; // r1+0x180

        {
            // Range: 0x801E5098 -> 0x801E50E0
            // Local variables
            float avoidanceAccMag; // f1
            float multiplier; // f1
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> float hkConvexShapeDefaultRadius;
}
// signature: zNPCSteeringJumpControl::Enter(const zNPCSteeringControl *)
// Range: 0x801E5410 -> 0x801E5434
void zNPCSteeringJumpControl::Enter() {
}
// Range: 0x801E5440 -> 0x801E566C
void zNPCSteeringJumpControl::CalculateAcc(class zNPCSteeringJumpControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801E5468 -> 0x801E564C
        // Local variables
        class xVec3 diffVelocity; // r1+0x14
        class xVec3 desiredVelocity; // r1+0x20
        class xVec3 to; // r1+0x2C
        class xVec3 from; // r1+0x38
    }
}
// signature: zNPCSteeringJumpControl::GetJumpVelFromHeight(xVec3 &, const xVec3 &, const xVec3 &)
// Range: 0x801E5670 -> 0x801E57C8
void zNPCSteeringJumpControl::GetJumpVelFromHeight() {
    // Local variables
    class xVec3 diff; // r1+0x8
    float riseDist; // f1
    float fallDist; // f5
    float gravity; // f0
    float riseTime; // f0
    float fallTime; // f0
    float totalTime; // f3
}
// Range: 0x801E57D0 -> 0x801E5890
void * zNPCSteeringFollowPathControl::zNPCSteeringFollowPathControl() {
    // References
    // -> struct {} __vt__29zNPCSteeringFollowPathControl;
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x801E5890 -> 0x801E5A48
bool zNPCSteeringFollowPathControl::GetSeekAcc(class zNPCSteeringFollowPathControl * this /* r30 */, class zNPCSteeringVec * seekAcc /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 projectedPointOnPath; // r1+0x20
    float projectionLength; // f0
    class xVec3 diff; // r1+0x14
    float diffMag; // f0
    class xVec3 desiredVelocity; // r1+0x8
}
// Range: 0x801E5A50 -> 0x801E5C18
void zNPCSteeringFollowPathControl::CalculateAcc(class zNPCSteeringFollowPathControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 predictedPos; // r1+0x28
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x801E5AFC -> 0x801E5B88
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x18
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFollowPathControl::CalculateVelConstraints(const xVec3 &, const xVec3 &, float, xVec3 *)
// Range: 0x801E5C30 -> 0x801E5DDC
bool zNPCSteeringFollowPathControl::CalculateVelConstraints(class zNPCSteeringFollowPathControl * this /* r29 */, class xVec3 & integratedVel /* r30 */, float dt /* f31 */, class xVec3 * constrainedVel /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFloatControl::Enter(const zNPCSteeringControl *)
// Range: 0x801E5DE0 -> 0x801E5DF4
void zNPCSteeringFloatControl::Enter() {
}
// signature: zNPCSteeringFloatControl::CalculateAcc(xVec3 *, float)
// Range: 0x801E5E00 -> 0x801E5E30
void zNPCSteeringFloatControl::CalculateAcc() {
}
