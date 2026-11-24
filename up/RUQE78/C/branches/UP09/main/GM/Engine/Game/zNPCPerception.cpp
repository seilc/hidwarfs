/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCPerception.cpp
*/
// Range: 0x801DC840 -> 0x801DCE5C
bool zNPCPerceptionTarget::zPerceptionType::CheckSpherePerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float checkDistance; // f31
    class xVec3 targetCPos; // r1+0x44
    float checkDistance2; // f0
    class xVec3 npcEntCenter; // r1+0x38
    float distance2; // f0
    class zWallNet * wallNet; // r0

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801DCE60 -> 0x801DD4B0
bool zNPCPerceptionTarget::zPerceptionType::CheckSoundSpherePerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float noise; // f0
    float checkDistance; // f31
    class xVec3 targetCPos; // r1+0x44
    float checkDistance2; // f0
    class xVec3 npcEntCenter; // r1+0x38
    float distance2; // f0
    class zWallNet * wallNet; // r0

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801DD4B0 -> 0x801DDB2C
bool zNPCPerceptionTarget::zPerceptionType::CheckCylinderPerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float cylinderR; // f31
    float cylinderHUp; // f30
    float cylinderHDown; // f29
    class xVec3 npcCPos; // r1+0x44
    class xVec3 targetCPos; // r1+0x38
    float diffY; // f1
    float cylinderR2; // f3
    float distanceXZ2; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x801DD4DC -> 0x801DD510
        // Local variables
        float cylinderRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801DDB30 -> 0x801DE1BC
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float hTheta; // f31
    float coneD; // f30
    class xVec3 npcCPos; // r1+0x44
    class xVec3 targetCPos; // r1+0x38
    float coneD2; // f5
    float distance2; // f0
    float perceivedObjectTheta2; // f0
    float hTheta2; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x801DDB54 -> 0x801DDB7C
        // Local variables
        float coneRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801DE1C0 -> 0x801DE894
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float hTheta; // f31
    float triD; // f30
    float triHUp; // f29
    float triHDown; // f28
    class xVec3 npcCPos; // r1+0x44
    class xVec3 targetCPos; // r1+0x38
    float diffY; // f1
    float triD2; // f4
    float perceivedObjectThetaXZ; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x801DE1F4 -> 0x801DE22C
        // Local variables
        float triRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerceptionTarget::zPerceptionType::CheckInNPCWallsPerception(const Sext::NPCPerceptionAsset::PerceptionNode *)
// Range: 0x801DE8A0 -> 0x801DEC98
bool zNPCPerceptionTarget::zPerceptionType::CheckInNPCWallsPerception() {
    // Local variables
    class zWallNet * wallNet; // r0
    float wallNetHUp; // f31
    float wallNetHDown; // f30
    class xVec3 npcCPos; // r1+0x20
    class xVec3 targetCPos; // r1+0x14
    float diffY; // f1

    {
        // Range: 0x801DE8DC -> 0x801DE8FC
        // Local variables
        float wallNetRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(const zNPCEntity *, zNPCPerceptionTarget *, bool)
// Range: 0x801DECA0 -> 0x801DEF74
bool zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(class zLOSCache * this /* r31 */, class zNPCEntity * npcEnt /* r26 */) {
    // Local variables
    bool needsUpdate; // r0
    class xVec3 npcCPos; // r1+0x38
    class xEnt * targetEnt; // r29

    {
        // Range: 0x801DED90 -> 0x801DEED0
        // Local variables
        class xVec3 bonePos; // r1+0x20
        int playerExtraSpheres; // r28
        class zPlayer * player; // r0
        class xVec3 targetCPos; // r1+0x2C

        {
            // Range: 0x801DEE40 -> 0x801DEE78
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x801DEED0 -> 0x801DEF5C
        // Local variables
        class xVec3 targetCPos; // r1+0x14
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerception::Attached(const zNPCStatus *)
// Range: 0x801DEF80 -> 0x801DF1B0
void zNPCPerception::Attached(class zNPCPerception * this /* r31 */) {
    // Local variables
    int perceptionTypesNum; // r28

    {
        // Range: 0x801DF044 -> 0x801DF0E4
        // Local variables
        int curTypeNum; // r25

        {
            // Range: 0x801DF044 -> 0x801DF0E4
            // Local variables
            int perceptionNodesNum; // r24

            {
                // Range: 0x801DF044 -> 0x801DF0D4
                // Local variables
                int curNodeNum; // r23
            }
        }
    }
    {
        // Range: 0x801DF0F4 -> 0x801DF174
        // Local variables
        unsigned int i; // r11
    }
}
// Range: 0x801DF1B0 -> 0x801DF214
void zNPCPerception::AllAttached(class zNPCPerception * this /* r31 */) {
    {
        // Range: 0x801DF1DC -> 0x801DF200
        // Local variables
        class xBase * b; // r0
    }
}
// signature: zNPCPerception::Detached(zNPCStatus *)
// Range: 0x801DF220 -> 0x801DF23C
void zNPCPerception::Detached() {
}
// signature: zNPCPerception::PostUpdate(float)
// Range: 0x801DF240 -> 0x801DF30C
void zNPCPerception::PostUpdate() {
    {
        // Range: 0x801DF250 -> 0x801DF308
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCPerception::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801DF310 -> 0x801DF424
bool zNPCPerception::SystemEvent(class zNPCPerception * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x801DF364 -> 0x801DF3D4
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCPerception::AreTargetsPerceived(unsigned int, Sext::eNPCPerceptionType, bool)
// Range: 0x801DF430 -> 0x801DF660
bool zNPCPerception::AreTargetsPerceived(class zNPCPerception * this /* r25 */, unsigned int targetBitMask /* r26 */, bool anded /* r27 */) {
    // Local variables
    unsigned int curTargetToCheck; // r3
    unsigned int count; // r28
}
// Range: 0x801DF660 -> 0x801DF7A8
int zNPCPerception::GetTargetIndexClosestMatching(class zNPCPerception * this /* r23 */, enum eNPCPerceptionType type /* r24 */, bool whenPerceived /* r25 */) {
    // Local variables
    int index; // r28
    int closestTargetIndex; // r27
    bool foundOne; // r26
    class xVec3 npcPosition; // r1+0x14
    class xVec3 targetVector; // r1+0x8
    float smallDistSq; // f31
    float tempDistSq; // f0
}
// signature: zNPCPerceptionLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801EE6B0 -> 0x801EE7BC
void zNPCPerceptionLOSChecker::addRayHit() {
    // Local variables
    class xBase * base; // r9
    class hkpWorldObject * worldObject; // r0
}
// signature: zNPCPerception::CheckLineOfSight(const xVec3 *, const xVec3 *, const zNPCEntity *, const xEnt *)
// Range: 0x801DF7B0 -> 0x801DF918
bool zNPCPerception::CheckLineOfSight() {
    // Local variables
    class zNPCPerceptionLOSChecker losChecker; // r1+0x30

    {
        // Range: 0x801DF7D8 -> 0x801DF7D8
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x801DF7D8 -> 0x801DF7D8
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801DF8A4 -> 0x801DF8A4
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x801DF8A4 -> 0x801DF8A4
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__24zNPCPerceptionLOSChecker;
}
