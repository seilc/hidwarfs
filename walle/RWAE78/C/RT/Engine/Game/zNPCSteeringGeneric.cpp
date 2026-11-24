/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSteeringGeneric.cpp
*/
static class zNPCSteeringGenericParams gDefaultSteeringBasicParams; // size: 0x58, address: 0x80791FA8
bool tim_draw; // size: 0x1, address: 0x80792000
// signature: zNPCSteeringGeneric::Attached(const zNPCStatus *)
// Range: 0x80135D90 -> 0x80135E64
void zNPCSteeringGeneric::Attached(class zNPCSteeringGeneric * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> static class zNPCSteeringGenericParams gDefaultSteeringBasicParams;
}
// Range: 0x80135E70 -> 0x80135F90
void zNPCSteeringGeneric::AllAttached(class zNPCSteeringGeneric * this /* r31 */) {
    {
        // Range: 0x80135EF8 -> 0x80135F70
        // Local variables
        class xBase * b; // r3
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::SetSteeringParams(zNPCSteeringParams *)
// Range: 0x80135F90 -> 0x80136014
void zNPCSteeringGeneric::SetSteeringParams() {
}
// signature: zNPCSteeringGeneric::SetDestination(const xVec3 *)
// Range: 0x80136020 -> 0x80136064
void zNPCSteeringGeneric::SetDestination() {
}
// signature: zNPCSteeringGeneric::Detached(zNPCStatus *)
// Range: 0x80136070 -> 0x8013607C
void zNPCSteeringGeneric::Detached() {
}
// signature: zNPCSteeringGeneric::Reset(const zNPCStatus *)
// Range: 0x80136080 -> 0x80136084
void zNPCSteeringGeneric::Reset() {
}
// signature: zNPCSteeringGeneric::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80136090 -> 0x8013617C
bool zNPCSteeringGeneric::SystemEvent(class zNPCSteeringGeneric * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x801360BC -> 0x8013615C
        // Local variables
        class zWallNet * npcWallNet; // r31
        class xBase * toParamWidgetPtr; // reg65535
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCSteeringGeneric::TurnToFaceXZ(zNPCEntity *, const xVec3 *, float, float)
// Range: 0x80136180 -> 0x801364EC
bool zNPCSteeringGeneric::TurnToFaceXZ(class zNPCSteeringGeneric * this /* r26 */, class zNPCEntity * ent /* r27 */, float dt /* f30 */, float turnSpringK /* f31 */) {
    // Local variables
    class xVec3 targetV; // r1+0x14
    float targetVDistance2; // f0
    float currentYaw; // f27

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801364F0 -> 0x801368E0
enum eSteeringResultOld zNPCSteeringGeneric::ApplySteering(class zNPCSteeringGeneric * this /* r30 */, class zNPCEntity * npcEnt /* r31 */, float dt /* f29 */) {
    // Local variables
    class zSteeringGenericDynamics steeringDynamics; // r1+0x50
    class xVec3 dVel; // r1+0x44
    class xVec3 facing; // r1+0x38

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801368F0 -> 0x80136E60
void zNPCSteeringGeneric::CalculateAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * acc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    // Local variables
    float accMagXZ; // r1+0x8
    class zNPCSteeringGenericParams * params; // r0
    class xVec3 mainAcc; // r1+0x6C
    float mainMagXZ; // f2
    class xVec3 wanderAcc; // r1+0x60
    float wanderMagXZ; // f2

    {
        // Range: 0x8013699C -> 0x801369E0
        // Local variables
        float WallAvoidanceMag; // f2
        class xVec3 WallAvoidanceAcc; // r1+0x54
    }
    {
        // Range: 0x801369E0 -> 0x80136A24
        // Local variables
        float CircleAvoidanceMag; // f2
        class xVec3 CircleAvoidanceAcc; // r1+0x48
    }
    {
        // Range: 0x80136AD0 -> 0x80136B14
        // Local variables
        float CircleAvoidanceMag; // f2
        class xVec3 CircleAvoidanceAcc; // r1+0x3C
    }
    {
        // Range: 0x80136C14 -> 0x80136C58
        // Local variables
        float WallAvoidanceMag; // f2
        class xVec3 WallAvoidanceAcc; // r1+0x30
    }
    {
        // Range: 0x80136C58 -> 0x80136C9C
        // Local variables
        float CircleAvoidanceMag; // f2
        class xVec3 CircleAvoidanceAcc; // r1+0x24
    }
    {
        // Range: 0x80136D48 -> 0x80136D8C
        // Local variables
        float WallAvoidanceMag; // f2
        class xVec3 WallAvoidanceAcc; // r1+0x18
    }
    {
        // Range: 0x80136D8C -> 0x80136DD0
        // Local variables
        float CircleAvoidanceMag; // f2
        class xVec3 CircleAvoidanceAcc; // r1+0xC
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::CalculateFacing(xVec3 &, zSteeringGenericDynamics &, float)
// Range: 0x80136E60 -> 0x801371C4
void zNPCSteeringGeneric::CalculateFacing() {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::AccumulateVecXZ(xVec3 &, float &, const float, const xVec3 &, const float)
// Range: 0x801371D0 -> 0x801372BC
bool zNPCSteeringGeneric::AccumulateVecXZ() {
    {
        // Range: 0x80137204 -> 0x80137274
        // Local variables
        float scale; // f7
        class xVec3 truncatedVector; // r1+0x8
        float wantedMagXZ; // f6
    }
}
// signature: zNPCSteeringGeneric::GetWanderAcc(xVec3 &, zSteeringGenericDynamics &, float)
// Range: 0x801372C0 -> 0x80137510
float zNPCSteeringGeneric::GetWanderAcc(class zNPCSteeringGeneric * this /* r27 */, class xVec3 * wanderAcc /* r28 */, class zSteeringGenericDynamics * steeringDynamics /* r29 */) {
    // Local variables
    float JitterThisTimeSlice; // f30
    class xVec3 RandomVector; // r1+0x14
    float magForward; // f7
    float magRandom; // f8
    class xVec3 wanderAccLocal; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::GetWallAvoidanceAcc(xVec3 &, zSteeringGenericDynamics &, float)
// Range: 0x80137510 -> 0x801377AC
float zNPCSteeringGeneric::GetWallAvoidanceAcc(class zNPCSteeringGeneric * this /* r30 */, class xVec3 * avoidanceAcc /* r31 */, class zSteeringGenericDynamics * steeringDynamics /* r27 */) {
    // Local variables
    float speed; // f0
    class xVec3 swcDir; // r1+0x8
    float sweepDist; // f29
    class zWallNetPosition swcStart; // r1+0x14
    class zWallNetCollis wallNetAvoidanceCollis; // r1+0x28

    {
        // Range: 0x801376AC -> 0x8013776C
        // Local variables
        float avoidanceAccScale; // f29
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801377B0 -> 0x80137A70
float zNPCSteeringGeneric::GetSeekAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * seekAcc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x801378B0 -> 0x80137A2C
        // Local variables
        class xVec3 desiredVelocity; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80137A70 -> 0x80137CF8
float zNPCSteeringGeneric::GetSeekDirAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * seekDirAcc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80137AE8 -> 0x80137CB4
        // Local variables
        class xVec3 desiredVelocity; // r1+0x14
        float destLength; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80137D00 -> 0x80138120
float zNPCSteeringGeneric::GetArriveAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * arriveAcc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80137E08 -> 0x80137F64
        // Local variables
        class xVec3 PIDOutput; // r1+0x2C
    }
    {
        // Range: 0x80137F64 -> 0x801380DC
        // Local variables
        class xVec3 desiredVelocity; // r1+0x20
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80138120 -> 0x8013899C
float zNPCSteeringGeneric::GetPursuitAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * pursuitAcc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x8013819C -> 0x80138950
        // Local variables
        class xVec3 predictedPos; // r1+0x50
        float predictionTime; // f2
        float speedSum; // f1
        float distance; // f0
        class xVec3 toDestination; // r1+0x5C
        float destinationSpeed; // f0

        {
            // Range: 0x801387D4 -> 0x80138950
            // Local variables
            class xVec3 desiredVelocity; // r1+0x44
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801389A0 -> 0x80138C6C
float zNPCSteeringGeneric::GetFleeAcc(class zNPCSteeringGeneric * this /* r28 */, class xVec3 * fleeAcc /* r29 */, class zSteeringGenericDynamics * steeringDynamics /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80138A18 -> 0x80138C28
        // Local variables
        class xVec3 desiredVelocity; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::GetCircleAvoidanceAcc(xVec3 &, zSteeringGenericDynamics &, float)
// Range: 0x80138C70 -> 0x80138E24
float zNPCSteeringGeneric::GetCircleAvoidanceAcc(class zSteeringGenericDynamics * steeringDynamics /* r30 */) {
    // Local variables
    float avoidanceDist; // f31
    class xVec3 avoidanceDir; // r1+0x94
    class xVec3 curVelXZ; // r1+0x88
    float curSpeedXZ; // f0
    class xSphere sphere; // r1+0x78

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringGeneric::GetFrictionDVel(xVec3 &, zSteeringGenericDynamics &, float)
// Range: 0x80138E30 -> 0x80139008
bool zNPCSteeringGeneric::GetFrictionDVel(class xVec3 * dVel /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 frictionDVel; // r1+0x14
    class xVec3 curFinalVelXZ; // r1+0x8
    float curSpeedXZ2; // f0

    {
        // Range: 0x80138EB4 -> 0x80138FC4
        // Local variables
        float curSpeedXZ; // f0
        float accMag; // f27
    }
}
