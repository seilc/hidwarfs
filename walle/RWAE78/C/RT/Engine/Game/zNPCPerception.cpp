/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCPerception.cpp
*/
class _OGNPC_PerceptionSchema _OGNPC_Perceptionschema; // size: 0x18, address: 0x80791B40
class SchemaRegistrator _OGNPC_PerceptionschemaReg; // size: 0x8, address: 0x80791B58
// Range: 0x801267B0 -> 0x801267C0
void World::_OGNPC_PerceptionEntity::Deactivate() {
}
// Range: 0x801267C0 -> 0x80126810
void World::_OGNPC_PerceptionEntity::Destroy(class _OGNPC_PerceptionEntity * this /* r31 */) {
}
// signature: World::_OGNPC_PerceptionSchema::Fix(World::Asset *, long, int)
// Range: 0x80126870 -> 0x80126878
void World::_OGNPC_PerceptionSchema::Fix() {
}
// signature: World::_OGNPC_PerceptionSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80126880 -> 0x801268CC
class EntityStub * World::_OGNPC_PerceptionSchema::CreateStub(class _OGNPC_PerceptionSchema * this /* r31 */) {
}
// signature: World::_OGNPC_PerceptionSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801268D0 -> 0x801268E8
void World::_OGNPC_PerceptionSchema::DestroyStub() {
}
// signature: World::_OGNPC_PerceptionSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801268F0 -> 0x80126954
class Entity * World::_OGNPC_PerceptionSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23_OGNPC_PerceptionEntity;
}
// Range: 0x801269A0 -> 0x80126F24
bool zNPCPerceptionTarget::zPerceptionType::CheckSpherePerception(class zPerceptionType * this /* r27 */, class PerceptionNode * node /* r28 */) {
    // Local variables
    float checkDistance; // f28
    class xVec3 targetCPos; // r1+0x38
    float checkDistance2; // f9
    class xVec3 npcEntCenter; // r1+0x2C
    float distance2; // f0
    class zWallNet * wallNet; // r0

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80126F30 -> 0x801274EC
bool zNPCPerceptionTarget::zPerceptionType::CheckSoundSpherePerception(class zPerceptionType * this /* r27 */, class PerceptionNode * node /* r28 */) {
    // Local variables
    float noise; // f0
    float checkDistance; // f28
    class xVec3 targetCPos; // r1+0x38
    float checkDistance2; // f9
    class xVec3 npcEntCenter; // r1+0x2C
    float distance2; // f0
    class zWallNet * wallNet; // r0

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801274F0 -> 0x80127AB0
bool zNPCPerceptionTarget::zPerceptionType::CheckCylinderPerception(class zPerceptionType * this /* r27 */, class PerceptionNode * node /* r28 */) {
    // Local variables
    float cylinderR; // f28
    float cylinderHUp; // f29
    float cylinderHDown; // f30
    class xVec3 npcCPos; // r1+0x38
    class xVec3 targetCPos; // r1+0x2C
    float diffY; // f1
    float cylinderR2; // f3
    float distanceXZ2; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x80127524 -> 0x80127560
        // Local variables
        float cylinderRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80127AB0 -> 0x80128090
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerception(class zPerceptionType * this /* r27 */, class PerceptionNode * node /* r28 */) {
    // Local variables
    float hTheta; // f31
    float coneD; // f28
    class xVec3 npcCPos; // r1+0x38
    class xVec3 targetCPos; // r1+0x2C
    float coneD2; // f5
    float distance2; // f0
    float perceivedObjectTheta2; // f0
    float hTheta2; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x80127AE4 -> 0x80127B14
        // Local variables
        float coneRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80128090 -> 0x80128698
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerception(class zPerceptionType * this /* r27 */, class PerceptionNode * node /* r28 */) {
    // Local variables
    float hTheta; // f31
    float triD; // f28
    float triHUp; // f29
    float triHDown; // f30
    class xVec3 npcCPos; // r1+0x38
    class xVec3 targetCPos; // r1+0x2C
    float diffY; // f1
    float triD2; // f4
    float perceivedObjectThetaXZ; // f0
    class zWallNet * wallNet; // r0

    {
        // Range: 0x801280C4 -> 0x80128104
        // Local variables
        float triRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerceptionTarget::zPerceptionType::CheckInNPCWallsPerception(const Sext::NPCPerceptionAsset::PerceptionNode *)
// Range: 0x801286A0 -> 0x80128A10
bool zNPCPerceptionTarget::zPerceptionType::CheckInNPCWallsPerception() {
    // Local variables
    class zWallNet * wallNet; // r0
    float wallNetHUp; // f31
    float wallNetHDown; // f30
    class xVec3 npcCPos; // r1+0x14
    class xVec3 targetCPos; // r1+0x8
    float diffY; // f1

    {
        // Range: 0x801286DC -> 0x801286FC
        // Local variables
        float wallNetRatio; // f0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(const zNPCEntity *, zNPCPerceptionTarget *, bool)
// Range: 0x80128A10 -> 0x80128C24
bool zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(class zLOSCache * this /* r31 */, class zNPCEntity * npcEnt /* r26 */) {
    // Local variables
    bool needsUpdate; // r0
    class xVec3 npcCPos; // r1+0x2C
    class xEnt * targetEnt; // r29

    {
        // Range: 0x80128AAC -> 0x80128BB8
        // Local variables
        class xVec3 bonePos; // r1+0x14
        int playerExtraSpheres; // r28
        class zPlayer * player; // r0
        class xVec3 targetCPos; // r1+0x20

        {
            // Range: 0x80128B28 -> 0x80128B60
            // Local variables
            int i; // r27
        }
    }
    {
        // Range: 0x80128BB8 -> 0x80128C0C
        // Local variables
        class xVec3 targetCPos; // r1+0x8
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerception::Attached(const zNPCStatus *)
// Range: 0x80128C30 -> 0x80128E50
void zNPCPerception::Attached(class zNPCPerception * this /* r31 */) {
    // Local variables
    int perceptionTypesNum; // r25

    {
        // Range: 0x80128CE4 -> 0x80128D7C
        // Local variables
        int curTypeNum; // r24

        {
            // Range: 0x80128CE4 -> 0x80128D7C
            // Local variables
            int perceptionNodesNum; // r23

            {
                // Range: 0x80128CE8 -> 0x80128D6C
                // Local variables
                int curNodeNum; // r22
            }
        }
    }
    {
        // Range: 0x80128D8C -> 0x80128E14
        // Local variables
        unsigned int i; // r11
    }
}
// Range: 0x80128E50 -> 0x80128EB8
void zNPCPerception::AllAttached(class zNPCPerception * this /* r31 */) {
    {
        // Range: 0x80128E7C -> 0x80128EA4
        // Local variables
        class xBase * b; // r0
    }
}
// signature: zNPCPerception::Detached(zNPCStatus *)
// Range: 0x80128EC0 -> 0x80128EDC
void zNPCPerception::Detached() {
}
// signature: zNPCPerception::PostUpdate(float)
// Range: 0x80128EE0 -> 0x80128FAC
void zNPCPerception::PostUpdate() {
    {
        // Range: 0x80128EF0 -> 0x80128FA8
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCPerception::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80128FB0 -> 0x801290B8
bool zNPCPerception::SystemEvent(class zNPCPerception * this /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x80129000 -> 0x8012906C
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCPerception::AreTargetsPerceived(Sext::NPCPerceptionAsset::PerceptionType::ePerceptionType, bool)
// Range: 0x801290C0 -> 0x801290D4
bool zNPCPerception::AreTargetsPerceived(enum ePerceptionType type /* r0 */) {
}
// signature: zNPCPerception::AreTargetsPerceived(unsigned int, Sext::NPCPerceptionAsset::PerceptionType::ePerceptionType, bool)
// Range: 0x801290E0 -> 0x8012933C
bool zNPCPerception::AreTargetsPerceived(class zNPCPerception * this /* r24 */, unsigned int targetBitMask /* r25 */, bool anded /* r26 */) {
    // Local variables
    unsigned int curTargetToCheck; // r3
    unsigned int count; // r27
}
// Range: 0x80129340 -> 0x801293BC
class xEnt * zNPCPerception::GetTargetClosestMatching(class zNPCPerception * this /* r28 */, enum ePerceptionType type /* r29 */, bool whenPerceived /* r30 */) {
    // Local variables
    int res; // r0
}
// Range: 0x801293C0 -> 0x80129508
int zNPCPerception::GetTargetIndexClosestMatching(class zNPCPerception * this /* r23 */, enum ePerceptionType type /* r24 */, bool whenPerceived /* r25 */) {
    // Local variables
    int index; // r28
    int closestTargetIndex; // r27
    bool foundOne; // r26
    class xVec3 npcPosition; // r1+0x14
    class xVec3 targetVector; // r1+0x8
    float smallDistSq; // f31
    float tempDistSq; // f0
}
// Range: 0x80129510 -> 0x80129658
float zNPCPerception::GetTargetDistanceSqClosestMatching(class zNPCPerception * this /* r24 */, enum ePerceptionType type /* r25 */, bool whenPerceived /* r26 */) {
    // Local variables
    int index; // r28
    bool foundOne; // r27
    class xVec3 npcPosition; // r1+0x14
    class xVec3 targetVector; // r1+0x8
    float smallDistSq; // f31
    float tempDistSq; // f0
}
// Range: 0x80129660 -> 0x801296B0
class xEnt * zNPCPerception::GetTargetClosest(class zNPCPerception * this /* r31 */) {
    // Local variables
    int res; // r0
}
// signature: zNPCPerception::GetTargetBearing(unsigned int, float, float)
// Range: 0x801296B0 -> 0x801298D4
enum eTargetBearing zNPCPerception::GetTargetBearing(class zNPCPerception * this /* r29 */, float sideStartDot /* f30 */, float backStartDot /* f31 */) {
    // Local variables
    class xVec3 targetCPos; // r1+0x14
    class xVec3 targetDiff; // r1+0x8
    float targetDiffL; // f0
    float bearingDot; // f0
    float sideDot; // f0

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCPerceptionLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80150A80 -> 0x80150B8C
void zNPCPerceptionLOSChecker::addRayHit() {
    // Local variables
    class xBase * base; // r9
    class hkpWorldObject * worldObject; // r0
}
// signature: zNPCPerception::CheckLineOfSight(const xVec3 *, const xVec3 *, const zNPCEntity *, const xEnt *)
// Range: 0x801298E0 -> 0x80129A48
bool zNPCPerception::CheckLineOfSight() {
    // Local variables
    class zNPCPerceptionLOSChecker losChecker; // r1+0x30

    {
        // Range: 0x80129908 -> 0x80129908
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x80129908 -> 0x80129908
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801299D4 -> 0x801299D4
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801299D4 -> 0x801299D4
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__24zNPCPerceptionLOSChecker;
}
