/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCSteeringControls.cpp
*/
// signature: zNPCSteeringVecLimiter::Get(const xVec3 *, const xMat3x3 *)
// Range: 0x800FAE30 -> 0x800FAEFC
float zNPCSteeringVecLimiter::Get(class zNPCSteeringVecLimiter * this /* r31 */, class xVec3 * dir /* r6 */) {
    {
        // Range: 0x800FAE64 -> 0x800FAEE0
        // Local variables
        float mag; // f1
        float magNum; // f0
        float magDenum; // f31
        float limitZ2; // f6
        float limitY2; // f5
        float limitX2; // f4
        float dirLocalZ2; // f3
        float dirLocalY2; // f2
        float dirLocalX2; // f3
        class xVec3 dirLocal; // r1+0x8
    }
}
// signature: zNPCSteeringAccumulator::Accumulate(float, zNPCSteeringVec *)
// Range: 0x800FAF00 -> 0x800FAFE4
bool zNPCSteeringAccumulator::Accumulate(class zNPCSteeringAccumulator * this /* r30 */, class zNPCSteeringVec * vec /* r31 */) {
    {
        // Range: 0x800FAF58 -> 0x800FAF98
        // Local variables
        class xVec3 truncatedVector; // r1+0x14
        float wantedMag; // f31
    }
    {
        // Range: 0x800FAF98 -> 0x800FAFC4
        // Local variables
        class xVec3 vecToAdd; // r1+0x8
    }
}
// Range: 0x800FAFF0 -> 0x800FB068
void * zNPCSteeringControl::zNPCSteeringControl() {
    // References
    // -> struct {} __vt__19zNPCSteeringControl;
}
// signature: zNPCSteeringControl::SetMaxAcc(float)
// Range: 0x800FB070 -> 0x800FB084
void zNPCSteeringControl::SetMaxAcc() {
}
// signature: zNPCSteeringControl::SetMaxAcc(const xVec3 &)
// Range: 0x800FB0B0 -> 0x800FB108
void zNPCSteeringControl::SetMaxAcc() {
    // Local variables
    float max; // f0
}
// signature: zNPCSteeringControl::ApplyFrictionVel(float, const xVec3 &, const xVec3 &, float, xVec3 *)
// Range: 0x800FB110 -> 0x800FB21C
bool zNPCSteeringControl::ApplyFrictionVel(float frictionAcc /* f29 */, class xVec3 & integratedVel /* r29 */, float dt /* f30 */, class xVec3 * constrainedVel /* r30 */) {
    // Local variables
    class xVec3 integratedVelXZ; // r1+0x14
    float curSpeedXZ2; // f0
    float curSpeedXZ; // f0

    {
        // Range: 0x800FB1AC -> 0x800FB1E8
        // Local variables
        class xVec3 dVel; // r1+0x8
    }
}
// signature: zNPCSteeringControl::GetWallAvoidanceAcc(const zNPCEntity *, const zWallNetPositionXZ *, zNPCSteeringControl::zWallAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x800FB220 -> 0x800FB474
bool zNPCSteeringControl::GetWallAvoidanceAcc(class zNPCEntity * npcEnt /* r29 */, class zWallNetPositionXZ * wallNetPos /* r26 */, class zWallAvoidanceData * avoidanceData /* r30 */, class zNPCSteeringVec * avoidanceAcc /* r31 */) {
    // Local variables
    float speedXZ; // f0
    class xVec3 swcDir; // r1+0x14
    float sweepDist; // f30
    class zWallNetPositionXZ swcStart; // r1+0x20
    class zWallNetCollis wallNetAvoidanceCollis; // r1+0x34
    float boundRadius; // f0
    class xVec3 avoidanceAccVec; // r1+0x8

    {
        // Range: 0x800FB358 -> 0x800FB3F4
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x800FB358 -> 0x800FB3F4
            // Local variables
            float avoidanceAccMag; // f1
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetWanderAcc(const zNPCEntity *, zNPCSteeringControl::zWanderData *, zNPCSteeringVec *, float)
// Range: 0x800FB480 -> 0x800FB5FC
bool zNPCSteeringControl::GetWanderAcc(class zNPCEntity * npcEnt /* r27 */, class zWanderData * wanderData /* r28 */, class zNPCSteeringVec * wanderAcc /* r29 */) {
    // Local variables
    float JitterThisTimeSlice; // f31
    class xVec3 RandomVector; // r1+0x20
    float magForward; // f31
    float magRandom; // f1
    class xVec3 wanderAccLocal; // r1+0x14
    class xVec3 wanderAccVec; // r1+0x8
}
// signature: zNPCSteeringControl::GetPlayerAvoidanceAcc(const zNPCEntity *, zNPCSteeringControl::zPlayerAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x800FB600 -> 0x800FB794
bool zNPCSteeringControl::GetPlayerAvoidanceAcc(class zNPCEntity * npcEnt /* r28 */, class zPlayerAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */) {
    // Local variables
    class xVec3 avoidanceAccVec; // r1+0x14

    {
        // Range: 0x800FB654 -> 0x800FB748
        // Local variables
        int i; // r31

        {
            // Range: 0x800FB654 -> 0x800FB748
            // Local variables
            float dist2; // f0
            class xVec3 playerToNPC; // r1+0x8

            {
                // Range: 0x800FB658 -> 0x800FB748
                // Local variables
                float avoidanceMag; // f1
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetObjectAvoidanceAcc(const zNPCEntity *, zNPCSteeringControl::zObjectAvoidanceData *, zNPCSteeringVec *, float, const xVec3 *)
// Range: 0x800FB7A0 -> 0x800FB958
bool zNPCSteeringControl::GetObjectAvoidanceAcc(class zNPCEntity * npcEnt /* r28 */, class zObjectAvoidanceData * avoidanceData /* r29 */, class zNPCSteeringVec * avoidanceAcc /* r30 */, class xVec3 * currentDest /* r31 */) {
    // Local variables
    class xVec3 testStart; // r1+0x3C
    class xVec3 testDir; // r1+0x30
    float speedXZ; // f0
    float testDist; // f31
    float boxHeight; // f0
    float boxWidth; // f1
    class xVec3 avoidanceAccVec; // r1+0x24
    class xVec3 contact; // r1+0x18
    class xVec3 avoidDir; // r1+0xC
    class xBase * avoidObj; // r1+0x8

    {
        // Range: 0x800FB880 -> 0x800FB91C
        {
            // Range: 0x800FB8C8 -> 0x800FB91C
            // Local variables
            float avoidanceAccMag; // f1
            float contactDist; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringControl::GetVelCorrectionAcc(const xVec3 &, const xVec3 &, zNPCSteeringVecLimiter *, zNPCSteeringVec *, float, bool)
// Range: 0x800FB960 -> 0x800FBC50
bool zNPCSteeringControl::GetVelCorrectionAcc(class zNPCSteeringControl * this /* r25 */, class xVec3 & desiredVel /* r26 */, class zNPCSteeringVecLimiter * accLimiter /* r29 */, class zNPCSteeringVec * correctionAcc /* r30 */, float dt /* f28 */, bool ignoreY /* r28 */) {
    // Local variables
    class xVec3 diffVelocity; // r1+0x50
    float diffVelocityMag; // f0

    {
        // Range: 0x800FBA20 -> 0x800FBA7C
        // Local variables
        float maxAcc; // f1
        float accMag; // f30
    }
    {
        // Range: 0x800FBA7C -> 0x800FBC14
        // Local variables
        float newAccMag; // f0
        float speedDelta; // f1
        class xVec3 newAcc; // r1+0x38
        float turnFactor; // f29
        float forwardFactor; // f0
        float sideFactor; // r31
        class xVec3 desiredDir; // r1+0x44
        float desiredSpeed; // f0
        float & sidewaysAccel; // r0
        float currSpeed; // f0

        {
            // Range: 0x800FBBA0 -> 0x800FBBF4
            // Local variables
            float maxNewAcc; // f0
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringStopControl::CalculateVelConstraints(const xVec3 &, const xVec3 &, float, xVec3 *)
// Range: 0x800FBC50 -> 0x800FBC6C
bool zNPCSteeringStopControl::CalculateVelConstraints(class zNPCSteeringStopControl * this /* r7 */) {
}
// Range: 0x800FBC70 -> 0x800FBD3C
void zNPCSteeringWanderControl::CalculateAcc(class zNPCSteeringWanderControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FBD40 -> 0x800FBEE0
void zNPCSteeringMoveToControl::CalculateAcc(class zNPCSteeringMoveToControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x58
    class zNPCSteeringVec objectAvoidanceAcc; // r1+0x48
    class zNPCSteeringVec playerAvoidanceAcc; // r1+0x38
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x800FBE10 -> 0x800FBE50
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x28
    }
    {
        // Range: 0x800FBE50 -> 0x800FBE88
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x18
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringMoveToControl::Enter(const zNPCSteeringControl *)
// Range: 0x800FBEE0 -> 0x800FBF6C
void zNPCSteeringMoveToControl::Enter(class zNPCSteeringMoveToControl * this /* r31 */) {
}
// Range: 0x800FBF70 -> 0x800FC1FC
bool zNPCSteeringMoveToControl::GetArriveAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * arriveAcc /* r31 */, float dt /* f30 */) {
    {
        // Range: 0x800FBFB4 -> 0x800FC100
        // Local variables
        float boundRadius; // f0

        {
            // Range: 0x800FC04C -> 0x800FC100
            // Local variables
            float desiredSpeed; // f0
            class xVec3 PIDOutput; // r1+0x20
        }
    }
    {
        // Range: 0x800FC100 -> 0x800FC1D4
        // Local variables
        float dist; // f0

        {
            // Range: 0x800FC178 -> 0x800FC1D4
            // Local variables
            class xVec3 PIDOutput; // r1+0x14
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FC200 -> 0x800FC3B8
bool zNPCSteeringMoveToControl::GetSeekAcc(class zNPCSteeringMoveToControl * this /* r30 */, class zNPCSteeringVec * seekAcc /* r31 */, float dt /* f30 */) {
    // Local variables
    float boundRadius; // f0

    {
        // Range: 0x800FC250 -> 0x800FC308
        // Local variables
        bool correctionNeeded; // r0
        class xVec3 desiredVelocity; // r1+0x20
        float len; // f0
        class xVec3 direction; // r1+0x2C
    }
    {
        // Range: 0x800FC308 -> 0x800FC390
        // Local variables
        class xVec3 desiredVelocity; // r1+0x8
        float diffMag; // f0
        class xVec3 diff; // r1+0x14
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x800FC3C0 -> 0x800FC3F0
class xVec3 * zNPCSteeringMoveToControl::GetReachableDest() {
}
// Range: 0x800FC3F0 -> 0x800FC4E4
void zNPCSteeringFleeControl::CalculateAcc(class zNPCSteeringFleeControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x28
    class zNPCSteeringVec fleeAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FC4F0 -> 0x800FC5A0
bool zNPCSteeringFleeControl::GetFleeAcc(class zNPCSteeringFleeControl * this /* r30 */, class zNPCSteeringVec * fleeAcc /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 desiredVelocity; // r1+0x8
}
// Range: 0x800FC5A0 -> 0x800FC694
void zNPCSteeringEscortControl::CalculateAcc(class zNPCSteeringEscortControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x28
    class zNPCSteeringVec playerAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec escortAcc; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FC6A0 -> 0x800FC7D0
bool zNPCSteeringEscortControl::GetEscortAcc(class zNPCSteeringEscortControl * this /* r30 */, class zNPCSteeringVec * escortAcc /* r31 */, float dt /* f29 */) {
    // Local variables
    class xVec3 desiredVelocity; // r1+0x14
    float maxSpeed; // f30
    class xVec3 escortVel; // r1+0x8

    // References
    // -> class xGlobals * xglobals;
}
// signature: zNPCSteeringFollowPlayerControl::Enter(const zNPCSteeringControl *)
// Range: 0x800FC7D0 -> 0x800FC7D4
void zNPCSteeringFollowPlayerControl::Enter() {
}
// Range: 0x800FC7E0 -> 0x800FC950
void zNPCSteeringFollowPlayerControl::CalculateAcc(class zNPCSteeringFollowPlayerControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class zNPCSteeringVec wallAvoidanceAcc; // r1+0x48
    class zNPCSteeringVec objectAvoidanceAcc; // r1+0x18
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x800FC854 -> 0x800FC894
        // Local variables
        class zNPCSteeringVec arriveAcc; // r1+0x38
    }
    {
        // Range: 0x800FC894 -> 0x800FC8CC
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x28
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80100A80 -> 0x80100B88
void zNPCSteeringFollowPlayerClosestHitCollector::addCdPoint(class zNPCSteeringFollowPlayerClosestHitCollector * this /* r30 */, class hkpCdPoint & event /* r31 */) {
    // Local variables
    class xBase * baseA; // r29
    class xBase * baseB; // r3
}
// signature: zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(zNPCSteeringFollowPlayerControl::zObjectAvoidanceData *, zNPCSteeringVec *, float)
// Range: 0x800FC950 -> 0x800FCF30
bool zNPCSteeringFollowPlayerControl::GetObjectAvoidanceAcc(class zNPCSteeringFollowPlayerControl * this /* r26 */, class zObjectAvoidanceData * avoidanceData /* r27 */, class zNPCSteeringVec * avoidanceAcc /* r28 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r31
    float speed; // f0
    class xVec3 castDir; // r1+0x15C
    float castLen; // f31
    class xVec3 castFrom; // r1+0x150
    class hkVector4 castFrom4; // r1+0x140
    class xVec3 castTo; // r1+0x130
    class hkVector4 castTo4; // r1+0x120
    class hkVector4 halfExtent; // r1+0x110
    class hkpCylinderShape * cylinder; // r30
    class xVec3 castRight; // r1+0xF8
    class xVec3 castUp; // r1+0xEC
    class hkRotation rt; // r1+0x1D0
    class hkTransform cylinderTransform; // r1+0x190
    class hkpCollidable * collidable; // r29
    class xVec3 avoidanceAccVec; // r1+0xE0
    class zNPCSteeringFollowPlayerClosestHitCollector hitCollector; // r1+0x200
    bool avoidanceAccSet; // r31

    {
        // Range: 0x800FCD58 -> 0x800FCE8C
        // Local variables
        float distToContactPt; // f0
        class xVec3 toContactPt; // r1+0x70
        class xVec3 pos; // r1+0x7C
        class hkVector4 pos4; // r1+0x90
        class xVec3 castedPlayer; // r1+0xA0
        class xVec3 toPlayer; // r1+0xAC
        class xVec3 normal; // r1+0xB8
        class hkVector4 normal4; // r1+0xD0
        class hkContactPoint contact; // r1+0x170

        {
            // Range: 0x800FCE44 -> 0x800FCE8C
            // Local variables
            float avoidanceAccMag; // f1
            float multiplier; // f1
        }
    }

    // References
    // -> struct {} __vt__43zNPCSteeringFollowPlayerClosestHitCollector;
    // -> struct {} __vt__26hkpClosestCdPointCollector;
    // -> struct {} __vt__19hkpCdPointCollector;
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCSteeringJumpControl::SetDestination(const xVec3 *)
// Range: 0x800FD020 -> 0x800FD03C
void zNPCSteeringJumpControl::SetDestination() {
}
// signature: zNPCSteeringJumpControl::Enter(const zNPCSteeringControl *)
// Range: 0x800FD040 -> 0x800FD064
void zNPCSteeringJumpControl::Enter() {
}
// Range: 0x800FD070 -> 0x800FD1A0
void zNPCSteeringJumpControl::CalculateAcc(class zNPCSteeringJumpControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800FD098 -> 0x800FD180
        // Local variables
        class xVec3 diffVelocity; // r1+0x8
        class xVec3 desiredVelocity; // r1+0x14
        class xVec3 to; // r1+0x20
        class xVec3 from; // r1+0x2C
    }
}
// signature: zNPCSteeringJumpControl::GetJumpVelFromHeight(xVec3 &, const xVec3 &, const xVec3 &)
// Range: 0x800FD1A0 -> 0x800FD2B8
void zNPCSteeringJumpControl::GetJumpVelFromHeight(class zNPCSteeringJumpControl * this /* r29 */, class xVec3 & jumpVel /* r30 */) {
    // Local variables
    class xVec3 diff; // r1+0x8
    float riseDist; // f30
    float fallDist; // f29
    float gravity; // f0
    float riseTime; // f0
    float fallTime; // f0
    float totalTime; // f1
}
// signature: zNPCSteeringJumpControl::GetJumpVelFromJumpVelXZ(xVec3 &, const xVec3 &, const xVec3 &)
// Range: 0x800FD2C0 -> 0x800FD384
void zNPCSteeringJumpControl::GetJumpVelFromJumpVelXZ(class zNPCSteeringJumpControl * this /* r30 */, class xVec3 & jumpVel /* r31 */) {
    // Local variables
    class xVec3 diff; // r1+0x8
    float distXZ; // f0
    float totalTime; // f3
    float invTotalTime; // f4
    float gravity; // f0
}
// Range: 0x800FD390 -> 0x800FD400
void * zNPCSteeringFollowPathControl::zNPCSteeringFollowPathControl(class zNPCSteeringFollowPathControl * this /* r31 */) {
    // References
    // -> struct {} __vt__29zNPCSteeringFollowPathControl;
}
// Range: 0x800FD400 -> 0x800FD4E4
bool zNPCSteeringFollowPathControl::GetSeekAcc(class zNPCSteeringFollowPathControl * this /* r30 */, class zNPCSteeringVec * seekAcc /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 projectedPointOnPath; // r1+0x20
    float projectionLength; // f0
    class xVec3 diff; // r1+0x14
    float diffMag; // f0
    class xVec3 desiredVelocity; // r1+0x8
}
// Range: 0x800FD4F0 -> 0x800FD668
void zNPCSteeringFollowPathControl::CalculateAcc(class zNPCSteeringFollowPathControl * this /* r30 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 predictedPos; // r1+0x28
    class zNPCSteeringVec wanderAcc; // r1+0x8

    {
        // Range: 0x800FD58C -> 0x800FD5E4
        // Local variables
        class zNPCSteeringVec seekAcc; // r1+0x18
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FD670 -> 0x800FD708
bool zNPCSteeringFollowPathControl::CalculateVelConstraints(class zNPCSteeringFollowPathControl * this /* r28 */, class xVec3 & oldVel /* r29 */, class xVec3 & integratedVel /* r30 */, float dt /* f31 */, class xVec3 * constrainedVel /* r31 */) {
}
// signature: zNPCSteeringFloatControl::Enter(const zNPCSteeringControl *)
// Range: 0x800FD710 -> 0x800FD724
void zNPCSteeringFloatControl::Enter() {
}
// Range: 0x800FD730 -> 0x800FD780
void zNPCSteeringFloatControl::CalculateAcc(class zNPCSteeringFloatControl * this /* r5 */, class xVec3 * acc /* r31 */, float dt /* f31 */) {
}
