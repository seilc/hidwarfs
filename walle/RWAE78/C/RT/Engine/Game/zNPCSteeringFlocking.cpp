/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSteeringFlocking.cpp
*/
float EXTRA_ATTRACTOR_RANGE; // size: 0x4, address: 0x80704C38
float EXTRA_ATTRACTOR_FORCE; // size: 0x4, address: 0x80704C3C
float EXTRA_ATTRACTOR_FORCE_MODIFIER_FAR; // size: 0x4, address: 0x80704C40
float EXTRA_ATTRACTOR_FORCE_MODIFIER_CLOSE; // size: 0x4, address: 0x80704C44
float STEERING_LOD_DISTANCE_OUT_RATIO; // size: 0x4, address: 0x80704C48
float STEERING_LOD_DISTANCE_IN_RATIO; // size: 0x4, address: 0x80704C4C
bool ENABLE_STEERING_LOD; // size: 0x1, address: 0x80704C50
float STEERING_SIMPLE_MOTION_PERIOD; // size: 0x4, address: 0x80704C54
float STEERING_SIMPLE_MOTION_R; // size: 0x4, address: 0x80704C58
static class xVec3 LocalFeeler[3]; // size: 0x24, address: 0x80704C5C
static class zNPCSteeringFlockingParams gDefaultFlockingParams; // size: 0x8C, address: 0x807F9444
// Range: 0x801FF940 -> 0x801FFBCC
void * zNPCSteeringFlocking::zNPCSteeringFlocking(class zNPCSteeringFlocking * this /* r31 */) {
    // References
    // -> struct {} __vt__20zNPCSteeringFlocking;
}
// signature: zNPCSteeringFlocking::Attached(const zNPCStatus *)
// Range: 0x801FFBD0 -> 0x801FFD54
void zNPCSteeringFlocking::Attached() {
    // Local variables
    class xVec3 initialWander; // r1+0x8

    {
        // Range: 0x801FFC20 -> 0x801FFD00
        // Local variables
        int i; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> static class zNPCSteeringFlockingParams gDefaultFlockingParams;
}
// Range: 0x801FFD60 -> 0x801FFF2C
void zNPCSteeringFlocking::AllAttached(class zNPCSteeringFlocking * this /* r31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801FFDAC -> 0x801FFE1C
        // Local variables
        int i; // r26

        {
            // Range: 0x801FFDAC -> 0x801FFE1C
            // Local variables
            class xEnt * ent; // r0
        }
    }
    {
        // Range: 0x801FFE58 -> 0x801FFECC
        // Local variables
        class zWallNet * npcWallNet; // r26
        class xBase * b; // r3

        {
            // Range: 0x801FFE84 -> 0x801FFEC0
            // Local variables
            int i; // r27

            {
                // Range: 0x801FFE84 -> 0x801FFEC0
                // Local variables
                class xEnt * ent; // r0
            }
        }
    }
    {
        // Range: 0x801FFED4 -> 0x801FFEE8
        // Local variables
        int i; // r26
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::SetSteeringParams(zNPCSteeringParams *)
// Range: 0x801FFF30 -> 0x801FFF38
void zNPCSteeringFlocking::SetSteeringParams() {
}
// signature: zNPCSteeringFlocking::SetAttractorsList(Sext::SwarmMean::SwarmAttractorRepeller *, int)
// Range: 0x801FFF40 -> 0x801FFFD4
void zNPCSteeringFlocking::SetAttractorsList(class zNPCSteeringFlocking * this /* r29 */) {
    {
        // Range: 0x801FFF5C -> 0x801FFFA8
        // Local variables
        int i; // r30
    }
}
// signature: zNPCSteeringFlocking::SetRepellersList(Sext::SwarmMean::SwarmAttractorRepeller *, int)
// Range: 0x801FFFE0 -> 0x80200074
void zNPCSteeringFlocking::SetRepellersList(class zNPCSteeringFlocking * this /* r29 */) {
    {
        // Range: 0x801FFFFC -> 0x80200048
        // Local variables
        int i; // r30
    }
}
// signature: zNPCSteeringFlocking::SetExtraAttractor(xEnt *, bool)
// Range: 0x80200080 -> 0x8020011C
void zNPCSteeringFlocking::SetExtraAttractor() {
    {
        // Range: 0x80200090 -> 0x802000C4
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x802000D8 -> 0x80200110
        // Local variables
        int i; // r6
    }
}
// signature: zNPCSteeringFlocking::SetAttrReplStatus(unsigned long long, bool, bool)
// Range: 0x80200120 -> 0x8020026C
bool zNPCSteeringFlocking::SetAttrReplStatus() {
    {
        // Range: 0x80200120 -> 0x802001C4
        // Local variables
        int attrNum; // r9

        {
            // Range: 0x80200130 -> 0x80200170
            // Local variables
            int i; // r10
        }
    }
    {
        // Range: 0x802001C4 -> 0x80200264
        // Local variables
        int repelNum; // r9

        {
            // Range: 0x802001D0 -> 0x80200210
            // Local variables
            int i; // r10
        }
    }
}
// signature: zNPCSteeringFlocking::Detached(zNPCStatus *)
// Range: 0x80200270 -> 0x8020027C
void zNPCSteeringFlocking::Detached() {
}
// signature: zNPCSteeringFlocking::Reset(const zNPCStatus *)
// Range: 0x80200280 -> 0x8020028C
void zNPCSteeringFlocking::Reset() {
}
// signature: zNPCSteeringFlocking::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80200290 -> 0x8020038C
bool zNPCSteeringFlocking::SystemEvent(class zNPCSteeringFlocking * this /* r30 */, class EventAny * genericParams /* r28 */) {
    {
        // Range: 0x802002C0 -> 0x80200368
        // Local variables
        int numberOfChildren; // r0
        class zWallNet * npcWallNet; // r29
        class xBase * toParamWidgetPtr; // reg65535
        class EventActionSwitchWallNet * params; // r0

        {
            // Range: 0x8020033C -> 0x80200354
            // Local variables
            int i; // r28
        }
    }
}
// signature: zNPCSteeringFlocking::FindSteeringType(zNPCEntity **, int *, unsigned int)
// Range: 0x80200390 -> 0x80200578
enum eNPCSteeringFlockingType zNPCSteeringFlocking::FindSteeringType() {
    // Local variables
    float updateRadius; // f1
    float checkRadius2; // f0
    unsigned int numberOfEntitiesNeedsProcessing; // r31

    {
        // Range: 0x80200420 -> 0x80200530
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80200420 -> 0x80200530
            // Local variables
            class zNPCEntity * npcEntity; // r29

            {
                // Range: 0x80200420 -> 0x80200420
                // Local variables
                int i; // r0

                {
                    // Range: 0x80200420 -> 0x80200420
                    // Local variables
                    float camDistXZ2; // f0
                }
            }
            {
                // Range: 0x80200420 -> 0x80200530
                // Local variables
                int i; // r0

                {
                    // Range: 0x80200420 -> 0x80200530
                    // Local variables
                    float camDistXZ2; // f0
                }
            }
        }
    }

    // References
    // -> class zViewport viewports[4];
    // -> static int splitscreenCount;
    // -> class xGlobals * xglobals;
    // -> float STEERING_LOD_DISTANCE_OUT_RATIO;
    // -> float STEERING_LOD_DISTANCE_IN_RATIO;
    // -> bool ENABLE_STEERING_LOD;
}
// signature: zNPCSteeringFlocking::TurnToFaceXZ(int, zNPCEntity *, const xVec3 *, float, float)
// Range: 0x80200580 -> 0x80200898
bool zNPCSteeringFlocking::TurnToFaceXZ(class zNPCSteeringFlocking * this /* r23 */, int index /* r25 */, class zNPCEntity * ent /* r24 */, float dt /* f30 */, float turnSpringK /* f31 */) {
    // Local variables
    class xVec3 targetV; // r1+0x8
    float targetVDistance2; // f0
    float currentYaw; // f0
}
// Range: 0x802008B0 -> 0x80200EBC
enum eSteeringResultOld zNPCSteeringFlocking::ApplySteering(class zNPCSteeringFlocking * this /* r22 */, class zNPCEntity * * npcEnts /* r23 */, int * needsProcess /* r24 */, unsigned int numberOfEntities /* r25 */, float dt /* f23 */) {
    {
        // Range: 0x802009C4 -> 0x80200AF0
        // Local variables
        int nextTimePeriodNum; // r3
        int curTimePeriodNum; // r0

        {
            // Range: 0x80200A30 -> 0x80200ADC
            // Local variables
            unsigned int i; // r30

            {
                // Range: 0x80200A30 -> 0x80200ADC
                // Local variables
                class xVec3 vel; // r1+0x38
            }
        }
    }
    {
        // Range: 0x80200AF4 -> 0x80200E50
        // Local variables
        class zNPCSteeringFlockingBroadPhaseCollisionCache collisionCache; // r1+0x70
        class zSteeringFlockingDynamics steeringDynamics; // r1+0x44

        {
            // Range: 0x80200B94 -> 0x80200E40
            // Local variables
            unsigned int i; // r27

            {
                // Range: 0x80200B94 -> 0x80200E40
                // Local variables
                class xVec3 facing; // r1+0x20
                class xVec3 dVel; // r1+0x2C
                class zNPCEntity * npcEnt; // r26
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> float STEERING_SIMPLE_MOTION_R;
    // -> float STEERING_SIMPLE_MOTION_PERIOD;
}
// Range: 0x80200EC0 -> 0x802011B0
void zNPCSteeringFlocking::ApplyBasicMotion(class zNPCSteeringFlocking * this /* r20 */, class zNPCEntity * * npcEnts /* r21 */, int * needsProcess /* r22 */, unsigned int numberOfEntities /* r23 */, float dt /* f27 */) {
    // Local variables
    unsigned int pathModifier; // r0
    float curPhi; // f28
    float globalX; // f0
    float globalZ; // f0

    {
        // Range: 0x80200F44 -> 0x80200FB4
        // Local variables
        unsigned int i; // r24
    }
    {
        // Range: 0x80200FF8 -> 0x80201138
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80200FF8 -> 0x80201138
            // Local variables
            class xVec3 npcDirLocal; // r1+0x8
            class xVec3 npcPosLocal; // r1+0x14
            class xVec3 npcDir; // r1+0x20
            class xVec3 npcPos; // r1+0x2C
        }
    }

    // References
    // -> float STEERING_SIMPLE_MOTION_R;
    // -> float STEERING_SIMPLE_MOTION_PERIOD;
}
// signature: zNPCSteeringFlocking::CalculateFlockCenterAndAlignment(zNPCEntity **, int *, unsigned int)
// Range: 0x802011B0 -> 0x80201314
void zNPCSteeringFlocking::CalculateFlockCenterAndAlignment() {
    // Local variables
    int totalActiveNeighbourNPC; // r7

    {
        // Range: 0x802011F8 -> 0x8020127C
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x8020127C -> 0x80201300
        // Local variables
        float oneOverNumbers; // f6
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80201320 -> 0x80201B3C
void zNPCSteeringFlocking::CalculateAcc(class zNPCSteeringFlocking * this /* r28 */, class xVec3 * acc /* r29 */, class zSteeringFlockingDynamics * steeringDynamics /* r30 */, float dt /* f29 */) {
    // Local variables
    float accMag; // r1+0x8

    {
        // Range: 0x802013C4 -> 0x80201418
        // Local variables
        float WallAvoidanceMag; // f2
        class xVec3 WallAvoidanceAcc; // r1+0x90
    }
    {
        // Range: 0x80201418 -> 0x8020144C
        // Local variables
        float SphereAvoidanceMag; // f2
        class xVec3 SphereAvoidanceAcc; // r1+0x84
    }
    {
        // Range: 0x8020144C -> 0x802014A8
        // Local variables
        float SeperationMag; // f2
        class xVec3 SeperationAcc; // r1+0x78
    }
    {
        // Range: 0x802014A8 -> 0x802014F8
        // Local variables
        float PlayerAvoidanceMag; // f2
        class xVec3 PlayerAvoidanceAcc; // r1+0x6C
    }
    {
        // Range: 0x802014F8 -> 0x802015EC
        // Local variables
        float AlignmentMag; // f0
        class xVec3 AlignmentAcc; // r1+0x60
    }
    {
        // Range: 0x802015EC -> 0x802017FC
        // Local variables
        float CohesionMag; // f0
        class xVec3 CohesionAcc; // r1+0x54
    }
    {
        // Range: 0x802017FC -> 0x80201A68
        // Local variables
        float WanderMag; // f0
        class xVec3 WanderAcc; // r1+0x48
    }
    {
        // Range: 0x80201A68 -> 0x80201AB8
        // Local variables
        float SeekMag; // f2
        class xVec3 SeekAcc; // r1+0x3C
    }
    {
        // Range: 0x80201AB8 -> 0x80201B04
        // Local variables
        float FleeMag; // f2
        class xVec3 FleeAcc; // r1+0x30
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::CalculateVelConstraints(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80201B40 -> 0x80201CFC
bool zNPCSteeringFlocking::CalculateVelConstraints(class xVec3 * dVel /* r30 */, float dt /* f31 */) {
    // Local variables
    bool nonZeroDVel; // r6

    {
        // Range: 0x80201BB4 -> 0x80201CB8
        // Local variables
        float oldSpeed2; // f0
        class xVec3 oldVelXZ; // r1+0x8

        {
            // Range: 0x80201BE8 -> 0x80201CB8
            // Local variables
            float oldSpeed; // f0
            float accMag; // f27
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::AccumulateVec(xVec3 &, float &, const float, const xVec3 &, const float, const float)
// Range: 0x80201D00 -> 0x80201DFC
bool zNPCSteeringFlocking::AccumulateVec() {
    // Local variables
    class xVec3 scaledVecToAdd; // r1+0x14
    float scaledMagToAddXZ; // f10

    {
        // Range: 0x80201D48 -> 0x80201DC0
        // Local variables
        float scale; // f2
        class xVec3 truncatedVector; // r1+0x8
        float wantedMagXZ; // f5
    }
}
// signature: zNPCSteeringFlocking::GetWallAvoidanceAcc(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80201E00 -> 0x80202214
float zNPCSteeringFlocking::GetWallAvoidanceAcc(class zNPCSteeringFlocking * this /* r21 */, class xVec3 * avoidanceAcc /* r22 */, class zSteeringFlockingDynamics * steeringDynamics /* r23 */) {
    // Local variables
    class zWallNetPosition * curWallNetPos; // r29
    class zWallNet * wallNet; // r28
    int numberOfAccsApplied; // r27
    float normalVelY; // f30

    {
        // Range: 0x80201E8C -> 0x80201F24
        // Local variables
        float speed; // f0
    }
    {
        // Range: 0x80201F24 -> 0x802020F8
        // Local variables
        int curFeeler; // r26

        {
            // Range: 0x80201F24 -> 0x802020F8
            // Local variables
            class zWallNetCollis wallNetCollis; // r1+0x20
            float curCollDist; // f28
            class xVec3 * curCollNormal; // r24
            bool collFound; // r25
            class xVec3 WorldFeeler; // r1+0x14

            {
                // Range: 0x80201F24 -> 0x80202084
                // Local variables
                float yFeelerLength; // f1
            }
            {
                // Range: 0x8020208C -> 0x802020F8
                // Local variables
                float remainingDist; // f1
                class xVec3 curAcc; // r1+0x8
            }
        }
    }

    // References
    // -> class xVec3 m_NegUnitAxisY;
    // -> class xVec3 m_UnitAxisY;
    // -> static class xVec3 LocalFeeler[3];
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::GetSeekAcc(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80202220 -> 0x8020294C
float zNPCSteeringFlocking::GetSeekAcc(class zNPCSteeringFlocking * this /* r23 */, class xVec3 * seekAcc /* r24 */, class zSteeringFlockingDynamics * steeringDynamics /* r25 */) {
    {
        // Range: 0x802022A4 -> 0x80202440
        // Local variables
        class xVec3 desiredVelocity; // r1+0x38
    }
    {
        // Range: 0x80202440 -> 0x80202900
        // Local variables
        int numberOfAccsAdded; // r28

        {
            // Range: 0x80202458 -> 0x8020263C
            // Local variables
            int i; // r27

            {
                // Range: 0x80202458 -> 0x8020263C
                // Local variables
                class xVec3 desiredAcc; // r1+0x20
                class xVec3 desiredVelocity; // r1+0x2C
                class xVec3 * desPos; // r26
                class xBase * base; // r5

                {
                    // Range: 0x80202458 -> 0x80202458
                    // Local variables
                    class xEnt * ent; // r0
                }
            }
        }
        {
            // Range: 0x8020264C -> 0x80202840
            // Local variables
            int i; // r27

            {
                // Range: 0x8020264C -> 0x80202840
                // Local variables
                class xVec3 desiredAcc; // r1+0x8
                float timMultiplier; // f0
                class xVec3 desiredVelocity; // r1+0x14
                class xVec3 * desPos; // r0
            }
        }
        {
            // Range: 0x80202850 -> 0x802028F8
            // Local variables
            float oneOverAccNumber; // f5
        }
    }

    // References
    // -> float EXTRA_ATTRACTOR_FORCE_MODIFIER_FAR;
    // -> float EXTRA_ATTRACTOR_FORCE;
    // -> float EXTRA_ATTRACTOR_FORCE_MODIFIER_CLOSE;
    // -> float EXTRA_ATTRACTOR_RANGE;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::GetFleeAcc(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80202950 -> 0x80202FF4
float zNPCSteeringFlocking::GetFleeAcc(class zNPCSteeringFlocking * this /* r24 */, class xVec3 * fleeAcc /* r25 */, class zSteeringFlockingDynamics * steeringDynamics /* r26 */) {
    {
        // Range: 0x802029CC -> 0x80202B68
        // Local variables
        class xVec3 desiredVelocity; // r1+0x38
    }
    {
        // Range: 0x80202B68 -> 0x80202FA8
        // Local variables
        int numberOfAccsAdded; // r29

        {
            // Range: 0x80202B80 -> 0x80202D64
            // Local variables
            int i; // r28

            {
                // Range: 0x80202B80 -> 0x80202D64
                // Local variables
                class xVec3 desiredAcc; // r1+0x20
                class xVec3 desiredVelocity; // r1+0x2C
                class xVec3 * desPos; // r27
                class xBase * base; // r5

                {
                    // Range: 0x80202B80 -> 0x80202B80
                    // Local variables
                    class xEnt * ent; // r0
                }
            }
        }
        {
            // Range: 0x80202D74 -> 0x80202EE8
            // Local variables
            int i; // r28

            {
                // Range: 0x80202D74 -> 0x80202EE8
                // Local variables
                class xVec3 desiredAcc; // r1+0x8
                class xVec3 desiredVelocity; // r1+0x14
                class xVec3 * desPos; // r0
            }
        }
        {
            // Range: 0x80202EF8 -> 0x80202FA0
            // Local variables
            float oneOverAccNumber; // f5
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::GetSeperationAcc(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80203000 -> 0x80203338
float zNPCSteeringFlocking::GetSeperationAcc(class zNPCSteeringFlocking * this /* r23 */, class xVec3 * SeperationAcc /* r24 */, class zSteeringFlockingDynamics * steeringDynamics /* r25 */) {
    // Local variables
    unsigned int curFlockerNum; // r28
    unsigned int numberOfFlockers; // r27

    {
        // Range: 0x80203080 -> 0x80203264
        // Local variables
        unsigned int i; // r26

        {
            // Range: 0x80203080 -> 0x80203264
            // Local variables
            float dist2; // f23

            {
                // Range: 0x80203080 -> 0x80203264
                // Local variables
                float dist; // f0
                class xVec3 SeperationFromAgent; // r1+0x14
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlocking::GetPlayerAvoidanceAcc(xVec3 &, zSteeringFlockingDynamics &, float)
// Range: 0x80203340 -> 0x802036B8
float zNPCSteeringFlocking::GetPlayerAvoidanceAcc(class zNPCSteeringFlocking * this /* r25 */, class xVec3 * PlayerAvoidanceAcc /* r26 */, class zSteeringFlockingDynamics * steeringDynamics /* r27 */) {
    {
        // Range: 0x802033B8 -> 0x802035D4
        // Local variables
        int i; // r28

        {
            // Range: 0x802033B8 -> 0x802035D4
            // Local variables
            float dist2; // f22
            class xVec3 * playerPos; // r0

            {
                // Range: 0x802033B8 -> 0x802035D4
                // Local variables
                float accMag; // f3
                float dist; // f0
                class xVec3 SeperationFromPlayer; // r1+0x14
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringFlockingBroadPhaseCollisionCache::Build(xVec3 *, float, float, zNPCEntity **, int *, unsigned int, float)
// Range: 0x802036C0 -> 0x80203874
void zNPCSteeringFlockingBroadPhaseCollisionCache::Build() {
    // Local variables
    class xVec3 boxLower; // r1+0x20
    class xVec3 boxUpper; // r1+0x14
    float maxXZdpos; // f0
    float maxYdpos; // f7

    {
        // Range: 0x80203750 -> 0x80203800
        // Local variables
        unsigned int i; // r0
    }
}
