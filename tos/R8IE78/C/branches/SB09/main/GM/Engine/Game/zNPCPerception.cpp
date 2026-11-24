/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCPerception.cpp
*/
// Range: 0x800F62D0 -> 0x800F6310
void * zNPCPerceptionTarget::zNPCPerceptionTarget() {
}
// signature: zNPCPerceptionTarget::Setup(Sext::NPCPerceptionAsset *, zNPCPerception *)
// Range: 0x800F6310 -> 0x800F6390
void zNPCPerceptionTarget::Setup(class zNPCPerceptionTarget * this /* r27 */, class NPCPerceptionAsset * perceptionAsset /* r28 */) {
    // Local variables
    int numberOfPerceptionTypes; // r30

    {
        // Range: 0x800F6328 -> 0x800F6374
        // Local variables
        int i; // r29

        {
            // Range: 0x800F6328 -> 0x800F6374
            // Local variables
            enum eNPCPerceptionType typeEnum; // r0
        }
    }
}
// Range: 0x800F6390 -> 0x800F63E0
void zNPCPerceptionTarget::Cleanup(class zNPCPerceptionTarget * this /* r29 */) {
    {
        // Range: 0x800F63A8 -> 0x800F63CC
        // Local variables
        int i; // r30
    }
}
// Range: 0x800F63E0 -> 0x800F6444
void zNPCPerceptionTarget::DisableTarget(class zNPCPerceptionTarget * this /* r31 */) {
}
// Range: 0x800F6450 -> 0x800F657C
void zNPCPerceptionTarget::PostUpdate(class zNPCPerceptionTarget * this /* r27 */, float dt /* f31 */) {
    // Local variables
    bool perceivedAnyThisUpdate; // r29

    {
        // Range: 0x800F6488 -> 0x800F64EC
        // Local variables
        int i; // r28
    }
}
// signature: zNPCPerceptionTarget::IsPerceived(Sext::eNPCPerceptionType)
// Range: 0x800F6580 -> 0x800F65B4
bool zNPCPerceptionTarget::IsPerceived() {
}
// Range: 0x800F65C0 -> 0x800F65D0
class zNPCEntity * zNPCPerceptionTarget::GetNPCEntity() {
}
// signature: zNPCPerceptionTarget::GetTargetEntityCenter(xVec3 &)
// Range: 0x800F65D0 -> 0x800F6620
void zNPCPerceptionTarget::GetTargetEntityCenter() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800F6620 -> 0x800F66AC
float zNPCPerceptionTarget::GetTargetEntityRadiusXZ() {
}
// Range: 0x800F66B0 -> 0x800F6738
float zNPCPerceptionTarget::GetTargetEntityRadiusY() {
}
// Range: 0x800F6740 -> 0x800F67C4
void zNPCPerceptionTarget::zPerceptionType::Update(class zPerceptionType * this /* r28 */) {
    // Local variables
    int perceptionNodesNum; // r30

    {
        // Range: 0x800F6754 -> 0x800F67A4
        // Local variables
        int curNodeNum; // r29
    }
}
// signature: zNPCPerceptionTarget::zPerceptionType::Setup(Sext::NPCPerceptionAsset::PerceptionType *, zNPCPerceptionTarget *)
// Range: 0x800F67D0 -> 0x800F67F8
void zNPCPerceptionTarget::zPerceptionType::Setup() {
}
// Range: 0x800F6800 -> 0x800F6828
void zNPCPerceptionTarget::zPerceptionType::Cleanup() {
}
// signature: zNPCPerceptionTarget::zPerceptionType::SetPerceived(bool)
// Range: 0x800F6830 -> 0x800F6854
void zNPCPerceptionTarget::zPerceptionType::SetPerceived() {
}
// Range: 0x800F6860 -> 0x800F68B8
bool zNPCPerceptionTarget::zPerceptionType::IsPerceived(class zPerceptionType * this /* r31 */) {
}
// signature: zNPCPerceptionTarget::zPerceptionType::CheckNodePerception(const Sext::NPCPerceptionAsset::PerceptionNode *)
// Range: 0x800F68C0 -> 0x800F6934
bool zNPCPerceptionTarget::zPerceptionType::CheckNodePerception() {
}
// Range: 0x800F6940 -> 0x800F6A84
bool zNPCPerceptionTarget::zPerceptionType::CheckSpherePerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float checkDistance; // f31
    class xVec3 targetCPos; // r1+0x20
    float checkDistance2; // f31
    class xVec3 npcEntCenter; // r1+0x14
    float distance2; // f0
    class zWallNet * wallNet; // r30
}
// Range: 0x800F6AA0 -> 0x800F6C18
bool zNPCPerceptionTarget::zPerceptionType::CheckSoundSpherePerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float noise; // f0
    float checkDistance; // f31
    class xVec3 targetCPos; // r1+0x20
    float checkDistance2; // f31
    class xVec3 npcEntCenter; // r1+0x14
    float distance2; // f0
    class zWallNet * wallNet; // r30
}
// Range: 0x800F6C20 -> 0x800F6DB0
bool zNPCPerceptionTarget::zPerceptionType::CheckCylinderPerception(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float cylinderR; // f31
    float cylinderHUp; // f30
    float cylinderHDown; // f29
    class xVec3 npcCPos; // r1+0x14
    class xVec3 targetCPos; // r1+0x8
    float diffY; // f1
    float cylinderR2; // f29
    float distanceXZ2; // f0
    class zWallNet * wallNet; // r30

    {
        // Range: 0x800F6C4C -> 0x800F6C7C
        // Local variables
        float cylinderRatio; // f0
    }
}
// signature: zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerception(const Sext::NPCPerceptionAsset::PerceptionNode *)
// Range: 0x800F6DB0 -> 0x800F6DC4
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerception() {
}
// Range: 0x800F6DD0 -> 0x800F6F6C
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerceptionWithoutTargetBounds(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float hTheta; // f31
    float coneD; // f30
    class xVec3 npcCPos; // r1+0x20
    class xVec3 targetCPos; // r1+0x14
    float coneD2; // f30
    float distance2; // f0
    float perceivedObjectTheta2; // f0
    float hTheta2; // f0
    class zWallNet * wallNet; // r30

    {
        // Range: 0x800F6DF4 -> 0x800F6E1C
        // Local variables
        float coneRatio; // f0
    }
}
// Range: 0x800F6F70 -> 0x800F7194
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularSpherePerceptionWithTargetBounds(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float targRadius; // f0
    float hTheta; // f29
    float coneD; // f31
    class xVec3 npcCPos; // r1+0x20
    class xVec3 targetCPos; // r1+0x14
    float adjustConeD2; // f31
    float distance2; // f28
    float perceivedObjectTheta2; // f0
    float incTheta; // f2
    float adjusthTheta; // f0
    float hTheta2; // f0
    class zWallNet * wallNet; // r30

    {
        // Range: 0x800F6FE4 -> 0x800F7004
        // Local variables
        float coneRatio; // f0
    }
}
// signature: zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerception(const Sext::NPCPerceptionAsset::PerceptionNode *)
// Range: 0x800F71A0 -> 0x800F71B4
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerception() {
}
// Range: 0x800F71C0 -> 0x800F73A4
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerceptionWithoutTargetBounds(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float hTheta; // f31
    float triD; // f30
    float triHUp; // f29
    float triHDown; // f28
    class xVec3 npcCPos; // r1+0x14
    class xVec3 targetCPos; // r1+0x8
    float diffY; // f1
    float triD2; // f28
    float perceivedObjectThetaXZ; // f0
    class zWallNet * wallNet; // r30

    {
        // Range: 0x800F71F4 -> 0x800F722C
        // Local variables
        float triRatio; // f0
    }
}
// Range: 0x800F73B0 -> 0x800F7604
bool zNPCPerceptionTarget::zPerceptionType::CheckAngularCylinderPerceptionWithTargetBounds(class zPerceptionType * this /* r28 */, class PerceptionNode * node /* r29 */) {
    // Local variables
    float targRadiusXZ; // f0
    float targRadiusY; // f0
    float hTheta; // f29
    float triD; // f28
    float triHUp; // f27
    float triHDown; // f26
    class xVec3 npcCPos; // r1+0x14
    class xVec3 targetCPos; // r1+0x8
    float diffY; // f1
    float adjustTriD2; // f26
    float dist2XZ; // f27
    float perceivedObjectThetaXZ; // f0
    float incTheta; // f2
    float adjusthTheta; // f0
    class zWallNet * wallNet; // r30

    {
        // Range: 0x800F7410 -> 0x800F7444
        // Local variables
        float triRatio; // f0
    }
}
// Range: 0x800F7610 -> 0x800F76EC
bool zNPCPerceptionTarget::zPerceptionType::CheckInNPCWallsPerception(class zPerceptionType * this /* r29 */, class PerceptionNode * node /* r30 */) {
    // Local variables
    class zWallNet * wallNet; // r31
    float wallNetHUp; // f31
    float wallNetHDown; // f30
    class xVec3 npcCPos; // r1+0x14
    class xVec3 targetCPos; // r1+0x8
    float diffY; // f1

    {
        // Range: 0x800F7654 -> 0x800F7674
        // Local variables
        float wallNetRatio; // f0
    }
}
// signature: zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(const zNPCEntity *, zNPCPerceptionTarget *, Sext::eCollisionLayer, bool)
// Range: 0x800F76F0 -> 0x800F78C0
bool zNPCPerceptionTarget::zLOSCache::CheckLineOfSight(class zLOSCache * this /* r25 */, class zNPCEntity * npcEnt /* r26 */, class zNPCPerceptionTarget * target /* r28 */, enum eCollisionLayer collisionLayer /* r27 */) {
    // Local variables
    bool needsUpdate; // r0
    class xVec3 npcCPos; // r1+0x2C
    class xEnt * targetEnt; // r30

    {
        // Range: 0x800F776C -> 0x800F787C
        // Local variables
        class xVec3 bonePos; // r1+0x14
        int playerExtraSpheres; // r29
        class zPlayer * player; // r0
        class xVec3 targetCPos; // r1+0x20

        {
            // Range: 0x800F77B8 -> 0x800F7808
            // Local variables
            int i; // r28
        }
    }
    {
        // Range: 0x800F787C -> 0x800F78A8
        // Local variables
        class xVec3 targetCPos; // r1+0x8
    }
}
// Range: 0x800F78C0 -> 0x800F79D8
bool zNPCPerceptionTarget::zPerceptionType::IsInDirectPath(class zNPCEntity * npcEnt /* r29 */, class zWallNet * wallNet /* r30 */) {
    // Local variables
    class xVec3 targetCPos; // r1+0x14
    class zWallNetPositionXZ * npcWallNetPos; // r31
    float npcBoundR; // f30
    class xVec3 sweepDir; // r1+0x8
    float sweepDist; // f31
    class zWallNetCollis wallNetAvoidanceCollis; // r1+0x20
}
// Range: 0x800F7A00 -> 0x800F7A70
void * zNPCPerception::zNPCPerception(class zNPCPerception * this /* r29 */) {
    // References
    // -> struct {} __vt__14zNPCPerception;
}
// signature: zNPCPerception::SetAssetAuto(const Sext::NPCAsset *)
// Range: 0x800F7A70 -> 0x800F7ACC
void zNPCPerception::SetAssetAuto(class zNPCPerception * this /* r28 */) {
    // Local variables
    class NPCPerceptionAsset * perceptionAssetToSet; // r29
    class zCharacterAsset * npcCharAsset; // r0
}
// Range: 0x800F7AD0 -> 0x800F7B38
void zNPCPerception::SetTarget(class zNPCPerception * this /* r29 */, unsigned int targetNum /* r30 */, class xEnt * targetEnt /* r31 */) {
}
// Range: 0x800F7B40 -> 0x800F7B9C
void zNPCPerception::RemoveTarget(class zNPCPerception * this /* r29 */, unsigned int targetNum /* r30 */) {
}
// signature: zNPCPerception::Attached(const zNPCStatus *)
// Range: 0x800F7BA0 -> 0x800F7CF0
void zNPCPerception::Attached(class zNPCPerception * this /* r31 */) {
    // Local variables
    int perceptionTypesNum; // r26

    {
        // Range: 0x800F7BE4 -> 0x800F7C94
        // Local variables
        int curTypeNum; // r25

        {
            // Range: 0x800F7BE4 -> 0x800F7C94
            // Local variables
            int perceptionNodesNum; // r24
            class PerceptionType * type; // r0

            {
                // Range: 0x800F7BE4 -> 0x800F7C94
                // Local variables
                int curNodeNum; // r23
            }
        }
    }
    {
        // Range: 0x800F7C94 -> 0x800F7CC8
        // Local variables
        unsigned int i; // r23
    }
}
// Range: 0x800F7CF0 -> 0x800F7D54
void zNPCPerception::AllAttached(class zNPCPerception * this /* r31 */) {
    {
        // Range: 0x800F7D1C -> 0x800F7D40
        // Local variables
        class xBase * b; // r0
    }
}
// signature: zNPCPerception::Detached(zNPCStatus *)
// Range: 0x800F7D60 -> 0x800F7DB0
void zNPCPerception::Detached(class zNPCPerception * this /* r29 */) {
    {
        // Range: 0x800F7D78 -> 0x800F7D9C
        // Local variables
        int i; // r30
    }
}
// Range: 0x800F7DB0 -> 0x800F7E18
void zNPCPerception::PostUpdate(class zNPCPerception * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x800F7DD8 -> 0x800F7E00
        // Local variables
        unsigned int i; // r30
    }
}
// signature: zNPCPerception::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F7E20 -> 0x800F7F24
bool zNPCPerception::SystemEvent(class zNPCPerception * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x800F7E6C -> 0x800F7EDC
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// Range: 0x800F7F30 -> 0x800F8010
bool zNPCPerception::AreTargetsPerceived(class zNPCPerception * this /* r27 */, unsigned int targetBitMask /* r28 */, enum eNPCPerceptionType type /* r29 */, bool anded /* r30 */) {
    // Local variables
    unsigned int curTargetToCheck; // r3
    unsigned int count; // r31
    bool currentPerceived; // r0
}
// Range: 0x800F8010 -> 0x800F80E8
int zNPCPerception::GetTargetIndexClosestMatching(class zNPCPerception * this /* r23 */, enum eNPCPerceptionType type /* r24 */, bool whenPerceived /* r25 */) {
    // Local variables
    int index; // r28
    int closestTargetIndex; // r27
    bool foundOne; // r26
    class xVec3 npcPosition; // r1+0x14
    class xVec3 targetVector; // r1+0x8
    float smallDistSq; // f31
    float tempDistSq; // f1
}
// Range: 0x800F80F0 -> 0x800F8140
class xEnt * zNPCPerception::GetTargetClosest(class zNPCPerception * this /* r31 */) {
    // Local variables
    int res; // r0
}
// signature: zNPCPerceptionLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80100BB0 -> 0x80100C94
void zNPCPerceptionLOSChecker::addRayHit(class zNPCPerceptionLOSChecker * this /* r27 */) {
    // Local variables
    class xBase * base; // r28
    class hkpCollidable * collidable; // r31
    class hkpRigidBody * rb; // r0
    class hkpPhantom * phantom; // r0
}
// signature: zNPCPerception::CheckLineOfSight(const xVec3 *, const xVec3 *, const zNPCEntity *, const xEnt *, Sext::eCollisionLayer)
// Range: 0x800F8140 -> 0x800F8288
bool zNPCPerception::CheckLineOfSight(class xVec3 * start /* r28 */, class xVec3 * end /* r31 */, enum eCollisionLayer collisionLayer /* r29 */) {
    // Local variables
    class zNPCPerceptionLOSChecker losChecker; // r1+0x30

    {
        // Range: 0x800F8164 -> 0x800F8164
        {
            // Range: 0x800F8164 -> 0x800F8164
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x800F8220 -> 0x800F8220
        {
            // Range: 0x800F8220 -> 0x800F8220
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> struct {} __vt__24zNPCPerceptionLOSChecker;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
