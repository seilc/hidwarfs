/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSteeringControls.cpp
*/
static class xVec3 ArrowDrawOffset; // size: 0xC, address: 0x806FBA9C
static class xVec3 ArrowDrawOffset; // size: 0xC, address: 0x806FBAA8
// signature: zNPCSteeringVecLimiter::Get(const xVec3 *, const xMat3x3 *)
// Range: 0x80133070 -> 0x801331E0
float zNPCSteeringVecLimiter::Get(class zNPCSteeringVecLimiter * this /* r31 */) {
    {
        // Range: 0x801330B8 -> 0x801331B4
        // Local variables
        float mag; // f1
        float magNum; // f0
        float magDenum; // f29
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
// Range: 0x801331E0 -> 0x801332E4
bool zNPCSteeringAccumulator::Accumulate() {
    {
        // Range: 0x80133218 -> 0x80133284
        // Local variables
        class xVec3 truncatedVector; // r1+0x14
        float wantedMag; // f8
    }
    {
        // Range: 0x80133284 -> 0x801332DC
        // Local variables
        class xVec3 vecToAdd; // r1+0x8
    }
}
// signature: zNPCSteeringControl::GetWallAvoidanceAcc(const zNPCSteering *, zNPCSteeringControl::zWallAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x801332F0 -> 0x8013365C
bool zNPCSteeringControl::GetWallAvoidanceAcc(class zNPCSteering * steering /* r26 */, class zWallAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */) {
    // Local variables
    float speedXZ; // f0
    class xVec3 swcDir; // r1+0x14
    float sweepDist; // f29
    class zWallNetPosition swcStart; // r1+0x20
    class zWallNetCollis wallNetAvoidanceCollis; // r1+0x34
    float boundRadius; // f0
    class xVec3 avoidanceAccVec; // r1+0x8

    {
        // Range: 0x801334AC -> 0x80133544
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x801334AC -> 0x80133544
            // Local variables
            float avoidanceAccMag; // f6
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetWanderAcc(const zNPCSteering *, zNPCSteeringControl::zWanderData *, zNPCSteeringVec *, float)
// Range: 0x80133770 -> 0x801339F8
bool zNPCSteeringControl::GetWanderAcc(class zNPCSteering * steering /* r28 */, class zWanderData * wanderData /* r29 */, class zNPCSteeringVec * wanderAcc /* r30 */) {
    // Local variables
    float JitterThisTimeSlice; // f30
    class xVec3 RandomVector; // r1+0x20
    float magForward; // f8
    float magRandom; // f9
    class xVec3 wanderAccLocal; // r1+0x14
    class xVec3 wanderAccVec; // r1+0x8
}
// signature: zNPCSteeringControl::GetVelCorrectionAcc(const xVec3 &, const xVec3 &, const xMat3x3 &, zNPCSteeringVecLimiter *, zNPCSteeringVec *, float, bool)
// Range: 0x80133A00 -> 0x80133BC4
bool zNPCSteeringControl::GetVelCorrectionAcc(class xMat3x3 * curOri /* r28 */, class zNPCSteeringVecLimiter * accLimiter /* r29 */, class zNPCSteeringVec * correctionAcc /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 diffVelocity; // r1+0x8
    float diffVelocityMag; // f0
    float accMag; // f28
    float maxAcc; // f1
}
// signature: zNPCSteeringStopControl::CalculateVelConstraints(const xVec3 &, const xVec3 &, float, xVec3 *)
// Range: 0x80133BD0 -> 0x80133D88
bool zNPCSteeringStopControl::CalculateVelConstraints(class xVec3 * integratedVel /* r29 */, float dt /* f31 */, class xVec3 * constrainedVel /* r30 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80133D90 -> 0x80133E70
void zNPCSteeringWanderControl::CalculateAcc(class zNPCSteeringWanderControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80133E70 -> 0x80133FC8
void zNPCSteeringMoveToControl::CalculateAcc(class zNPCSteeringMoveToControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x38
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x80133EEC -> 0x80133F2C
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x28
    }
    {
        // Range: 0x80133F2C -> 0x80133F64
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x18
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringMoveToControl::Enter(const zNPCSteeringControl *)
// Range: 0x80133FD0 -> 0x80134020
void zNPCSteeringMoveToControl::Enter() {
}
// Range: 0x80134030 -> 0x80134410
bool zNPCSteeringMoveToControl::GetArriveAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * arriveAcc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80134078 -> 0x801342C0
        // Local variables
        class zWallNetNav wallNetNav; // r1+0x50
        float boundRadius; // f30

        {
            // Range: 0x801341CC -> 0x8013422C
            // Local variables
            class xVec3 PIDOutput; // r1+0x44
        }
        {
            // Range: 0x8013422C -> 0x801342B0
            // Local variables
            class xVec3 desiredVelocity; // r1+0x38
        }
    }
    {
        // Range: 0x801342C0 -> 0x801343E4
        // Local variables
        float dist; // f0

        {
            // Range: 0x8013438C -> 0x801343E4
            // Local variables
            class xVec3 PIDOutput; // r1+0x2C
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80134410 -> 0x801346E4
bool zNPCSteeringMoveToControl::GetSeekAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * seekAcc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80134470 -> 0x801345B4
        // Local variables
        class zWallNetNav wallNetNav; // r1+0x30
        float boundRadius; // f28

        {
            // Range: 0x80134524 -> 0x801345AC
            // Local variables
            class xVec3 desiredVelocity; // r1+0x20
        }
    }
    {
        // Range: 0x801345B4 -> 0x801346A8
        // Local variables
        class xVec3 desiredVelocity; // r1+0x8
        float diffMag; // f0
        class xVec3 diff; // r1+0x14
    }
}
// Range: 0x801346F0 -> 0x80134968
void zNPCSteeringFleeControl::CalculateAcc(class zNPCSteeringFleeControl * this /* r28 */, class xVec3 * acc /* r29 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x38
    class zNPCSteeringVec fleeAcc; // r1+0x28
    class zNPCSteeringVec wanderAcc; // r1+0x18

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFollowPlayerControl::Enter(const zNPCSteeringControl *)
// Range: 0x80134970 -> 0x801349C0
void zNPCSteeringFollowPlayerControl::Enter() {
}
// Range: 0x801349C0 -> 0x80134B44
void zNPCSteeringFollowPlayerControl::CalculateAcc(class zNPCSteeringFollowPlayerControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x48
    class zNPCSteeringVec objectAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x80134A3C -> 0x80134A7C
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x38
    }
    {
        // Range: 0x80134A7C -> 0x80134AB4
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x28
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFollowPlayerClosestHitCollector::zNPCSteeringFollowPlayerClosestHitCollector(const xBase *, const xBase *)
// Range: 0x80135390 -> 0x801353CC
void * zNPCSteeringFollowPlayerClosestHitCollector::zNPCSteeringFollowPlayerClosestHitCollector() {
    // References
    // -> struct {} __vt__43zNPCSteeringFollowPlayerClosestHitCollector;
    // -> struct {} __vt__19hkpCdPointCollector;
}
// signature: zNPCSteeringFollowPlayerClosestHitCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x80150680 -> 0x801507A4
void zNPCSteeringFollowPlayerClosestHitCollector::addCdPoint() {
    // Local variables
    class hkpWorldObject * worldObjectA; // r0
    class xBase * baseA; // r0
    class hkpWorldObject * worldObjectB; // r0
    class xBase * baseB; // r0
}
// signature: zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(zNPCSteeringFollowPlayerControl::zObjectAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x80134B50 -> 0x80135060
bool zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(class zNPCSteeringFollowPlayerControl * this /* r28 */, class zObjectAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r24
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
        // Range: 0x80134E58 -> 0x80134FCC
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
            // Range: 0x80134F8C -> 0x80134FCC
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
