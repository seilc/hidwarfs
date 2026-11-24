/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\TriggerPhantom.cpp
*/
class _OGTriggerPhantomSchema _OGTriggerPhantomschema; // size: 0x18, address: 0x807F8568
class SchemaRegistrator _OGTriggerPhantomschemaReg; // size: 0x8, address: 0x807F8580
// Range: 0x801E9A90 -> 0x801E9AA0
void World::_OGTriggerPhantomEntity::Deactivate() {
}
// Range: 0x801E9AA0 -> 0x801E9AF0
void World::_OGTriggerPhantomEntity::Destroy(class _OGTriggerPhantomEntity * this /* r31 */) {
}
// signature: World::_OGTriggerPhantomSchema::Fix(World::Asset *, long, int)
// Range: 0x801E9B50 -> 0x801E9B58
void World::_OGTriggerPhantomSchema::Fix() {
}
// signature: World::_OGTriggerPhantomSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801E9B60 -> 0x801E9BAC
class EntityStub * World::_OGTriggerPhantomSchema::CreateStub(class _OGTriggerPhantomSchema * this /* r31 */) {
}
// signature: World::_OGTriggerPhantomSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801E9BB0 -> 0x801E9BC8
void World::_OGTriggerPhantomSchema::DestroyStub() {
}
// signature: World::_OGTriggerPhantomSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801E9BD0 -> 0x801E9C34
class Entity * World::_OGTriggerPhantomSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23_OGTriggerPhantomEntity;
}
// signature: CheckForActiveBodyPartProperty(hkpWorldObject *)
// Range: 0x801E9C80 -> 0x801E9D58
bool CheckForActiveBodyPartProperty() {
}
// signature: TriggerPhantom_Init(void *, void *)
// Range: 0x801E9D60 -> 0x801E9D84
void TriggerPhantom_Init() {
    // References
    // -> struct {} __vt__14TriggerPhantom;
}
// Range: 0x801E9D90 -> 0x801E9E0C
void TriggerPhantom_SceneExit() {
    // Local variables
    int tidx; // r0
    class TriggerPhantom * current; // r31
    class TriggerPhantom * last; // r30

    // References
    // -> class zGlobals globals;
}
// signature: TriggerPhantomEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801E9E10 -> 0x801E9E3C
static void TriggerPhantomEventWrapper(class xBase * to /* r8 */, unsigned int toEvent /* r0 */) {
}
// Range: 0x801E9E40 -> 0x801EA748
void TriggerPhantom::Init(class TriggerPhantom * this /* r30 */, class TriggerPhantomAsset * inAsset /* r27 */) {
    // Local variables
    unsigned int i; // r28

    {
        // Range: 0x801E9EC8 -> 0x801E9F88
        // Local variables
        class hkAabb infoAABB; // r1+0x150
        class Vector4 scaleAABBox; // r1+0x120
        class Vector4 posAABBox; // r1+0x130
        class xVec3 scale; // r1+0x140
        class Matrix43 matNg; // r1+0x410
        class xMat4x3 matrix; // r1+0x440
    }
    {
        // Range: 0x801E9F88 -> 0x801EA11C
        // Local variables
        class hkVector4 halfExtent; // r1+0x100
        class hkTransform transform; // r1+0x330
        class hkRotation rt; // r1+0x370
        class xVec3 scale; // r1+0x110
        class Matrix43 matNg; // r1+0x3A0
        class xMat4x3 matrix; // r1+0x3D0
    }
    {
        // Range: 0x801EA11C -> 0x801EA294
        // Local variables
        class hkTransform transform; // r1+0x250
        class xMat3x3 tempMat; // r1+0x290
        class xQuat quat; // r1+0xD0
        class hkVector4 trans; // r1+0xE0
        class xVec3 * pos; // r0
        class xVec3 scale; // r1+0xF0
        class Matrix43 matNg; // r1+0x2C0
        class xMat4x3 matrix; // r1+0x2F0
    }
    {
        // Range: 0x801EA294 -> 0x801EA448
        // Local variables
        class hkVector4 capV1; // r1+0x90
        class hkVector4 capV0; // r1+0xA0
        float height; // f30
        float capRadius; // f31
        class hkTransform transform; // r1+0x170
        class xMat3x3 tempMat; // r1+0x1B0
        class xQuat quat; // r1+0xB0
        class xVec3 scale; // r1+0xC0
        class Matrix43 matNg; // r1+0x1E0
        class xMat4x3 matrix; // r1+0x210
    }
    {
        // Range: 0x801EA4B8 -> 0x801EA4DC
        // Local variables
        unsigned long long baseID; // r0:r0
    }
    {
        // Range: 0x801EA4FC -> 0x801EA520
        // Local variables
        unsigned long long baseID; // r0:r0
    }
    {
        // Range: 0x801EA550 -> 0x801EA588
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
    {
        // Range: 0x801EA594 -> 0x801EA680
        // Local variables
        int i; // r5
    }
}
// Range: 0x801EA840 -> 0x801EAF48
void TriggerPhantom::SetupDrivenBy(class TriggerPhantom * this /* r15 */) {
    {
        // Range: 0x801EA948 -> 0x801EAECC
        // Local variables
        unsigned int i; // r16

        {
            // Range: 0x801EA948 -> 0x801EAECC
            // Local variables
            class LinkAssetBaseNew * la; // r0

            {
                // Range: 0x801EA948 -> 0x801EAECC
                // Local variables
                class xEnt * dent; // r0

                {
                    // Range: 0x801EA94C -> 0x801EAECC
                    // Local variables
                    class xMat4x3 invMat; // r1+0x180
                    class xMat4x3 curMat; // r1+0x1C0
                    class hkTransform trans; // r1+0x200
                    class EventActionDrivenBy * actionParamsLink; // r0
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xMat4x3 g_I3;
}
// Range: 0x801EAF50 -> 0x801EB83C
void TriggerPhantom::Update(class TriggerPhantom * this /* r29 */, float dt /* f29 */) {
    {
        // Range: 0x801EB004 -> 0x801EB1C0
        // Local variables
        class AabbPhantomCollector * collector; // r0
        class hkAabb infoAABB; // r1+0x150
        class Vector4 posAABBox; // r1+0x120
        class xMat4x3 mat; // r1+0x310
        class Vector4 scaleAABBox; // r1+0x130
        class xVec3 scale; // r1+0x140
        class Matrix43 matNg; // r1+0x350
        class xMat4x3 matrix; // r1+0x380
    }
    {
        // Range: 0x801EB1C0 -> 0x801EB7F8
        // Local variables
        class SimpleShapePhantomCollector * collector; // r0
        class hkTransform transform; // r1+0x290
        class hkVector4 trans; // r1+0x110
        class xMat4x3 mat; // r1+0x2D0

        {
            // Range: 0x801EB204 -> 0x801EB47C
            // Local variables
            class hkRotation rot; // r1+0x260
        }
        {
            // Range: 0x801EB47C -> 0x801EB7EC
            // Local variables
            class hkTransform oldTransform; // r1+0x220
        }
    }
}
// Range: 0x801EB840 -> 0x801EC030
void TriggerPhantom::UpdatePenetrations(class TriggerPhantom * this /* r24 */) {
    // Local variables
    class hkpAllCdBodyPairCollector collPenetrations; // r1+0x8

    {
        // Range: 0x801EB868 -> 0x801EB8E4
        // Local variables
        int i; // r25

        {
            // Range: 0x801EB868 -> 0x801EB8E4
            // Local variables
            class hkpCollidable * c; // r26

            {
                // Range: 0x801EB884 -> 0x801EB8E4
                // Local variables
                class xBase * to; // r4
            }
        }
    }
    {
        // Range: 0x801EB934 -> 0x801EBC88
        // Local variables
        int i; // r25

        {
            // Range: 0x801EB934 -> 0x801EBC88
            // Local variables
            bool hasLeft; // r23

            {
                // Range: 0x801EB938 -> 0x801EB938
                // Local variables
                int j; // r22
            }
            {
                // Range: 0x801EB944 -> 0x801EB948
                // Local variables
                class xBase * to; // r22
            }
            {
                // Range: 0x801EB948 -> 0x801EBC88
                // Local variables
                class xBase * to; // r23
                class hkpWorldObject * wo; // r22
            }
        }
    }
    {
        // Range: 0x801EBC98 -> 0x801EBFF4
        // Local variables
        int i; // r25

        {
            // Range: 0x801EBC98 -> 0x801EBFF4
            // Local variables
            class hkpWorldObject * wo; // r23
            bool hasEntered; // r22

            {
                // Range: 0x801EBC9C -> 0x801EBC9C
                // Local variables
                int j; // r23
            }
            {
                // Range: 0x801EBC9C -> 0x801EBF40
                // Local variables
                class xBase * to; // r26
            }
            {
                // Range: 0x801EBF44 -> 0x801EBFF4
                // Local variables
                class xBase * to; // r4
            }
        }
    }
}
// Range: 0x801EC710 -> 0x801EC7E0
void TriggerPhantom::AddPenetratingCollidableToList(class TriggerPhantom * this /* r31 */, class hkpCollidable * pColl /* r30 */) {
}
// signature: TriggerPhantom::RemovePenetratingCollidableFromList(int)
// Range: 0x801EC7E0 -> 0x801EC838
void TriggerPhantom::RemovePenetratingCollidableFromList() {
    {
        // Range: 0x801EC800 -> 0x801EC804
        // Local variables
        int i; // r4
    }
}
// signature: TriggerPhantom::AddToDotTargetList(xBase *)
// Range: 0x801EC840 -> 0x801EC878
void TriggerPhantom::AddToDotTargetList() {
}
// signature: TriggerPhantom::RemoveFromDotTargetList(xBase *)
// Range: 0x801EC880 -> 0x801EC900
void TriggerPhantom::RemoveFromDotTargetList() {
    // Local variables
    bool found; // r7
    int i; // r8
}
// signature: TriggerPhantom::IsDotTarget(xBase *)
// Range: 0x801EC900 -> 0x801ECA08
bool TriggerPhantom::IsDotTarget() {
}
// Range: 0x801ECA10 -> 0x801ECB60
void TriggerPhantom::DealDotDamage(class TriggerPhantom * this /* r31 */, float dt /* f29 */) {
    {
        // Range: 0x801ECA3C -> 0x801ECB20
        // Local variables
        int i; // r24

        {
            // Range: 0x801ECA3C -> 0x801ECB20
            // Local variables
            class zCombatDamageInfo info; // r1+0x8
        }
    }
}
// signature: TriggerPhantom::CanPenetrate(const hkpCollidable *)
// Range: 0x801ECB60 -> 0x801ECC3C
bool TriggerPhantom::CanPenetrate() {
}
// Range: 0x801ECC40 -> 0x801ED42C
void TriggerPhantom::Reset(class TriggerPhantom * this /* r30 */) {
    {
        // Range: 0x801ECCB0 -> 0x801ECD70
        // Local variables
        class hkAabb infoAABB; // r1+0x150
        class Vector4 scaleAABBox; // r1+0x120
        class Vector4 posAABBox; // r1+0x130
        class xVec3 scale; // r1+0x140
        class Matrix43 matNg; // r1+0x410
        class xMat4x3 matrix; // r1+0x440
    }
    {
        // Range: 0x801ECD70 -> 0x801ECF04
        // Local variables
        class hkVector4 halfExtent; // r1+0x100
        class hkTransform transform; // r1+0x330
        class hkRotation rt; // r1+0x370
        class xVec3 scale; // r1+0x110
        class Matrix43 matNg; // r1+0x3A0
        class xMat4x3 matrix; // r1+0x3D0
    }
    {
        // Range: 0x801ECF04 -> 0x801ED07C
        // Local variables
        class hkTransform transform; // r1+0x250
        class xMat3x3 tempMat; // r1+0x290
        class xQuat quat; // r1+0xD0
        class hkVector4 trans; // r1+0xE0
        class xVec3 * pos; // r0
        class xVec3 scale; // r1+0xF0
        class Matrix43 matNg; // r1+0x2C0
        class xMat4x3 matrix; // r1+0x2F0
    }
    {
        // Range: 0x801ED07C -> 0x801ED230
        // Local variables
        class hkVector4 capV1; // r1+0x90
        class hkVector4 capV0; // r1+0xA0
        float height; // f30
        float capRadius; // f31
        class hkTransform transform; // r1+0x170
        class xMat3x3 tempMat; // r1+0x1B0
        class xQuat quat; // r1+0xB0
        class xVec3 scale; // r1+0xC0
        class Matrix43 matNg; // r1+0x1E0
        class xMat4x3 matrix; // r1+0x210
    }
    {
        // Range: 0x801ED240 -> 0x801ED274
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
    {
        // Range: 0x801ED280 -> 0x801ED3AC
        // Local variables
        int i; // r6
    }
}
// Range: 0x801ED430 -> 0x801ED434
void TriggerPhantom::Setup() {
}
// Range: 0x801ED440 -> 0x801ED7DC
class hkTransform TriggerPhantom::getTransform() {
    {
        // Range: 0x801ED47C -> 0x801ED6E8
        // Local variables
        class hkTransform trans; // r1+0xD0
        class Vector4 posAABBox; // r1+0xB0
        class xVec3 scale; // r1+0xC0
        class Matrix43 matNg; // r1+0x110
        class xMat4x3 matrix; // r1+0x140
    }
}
// Range: 0x801ED7F0 -> 0x801ED80C
void TriggerPhantom::SceneExit() {
}
// signature: TriggerPhantom::HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801ED810 -> 0x801EDA10
void TriggerPhantom::HandleEvent(class TriggerPhantom * this /* r31 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x801ED8B4 -> 0x801ED8E8
        // Local variables
        class xBase * toParamWidgetPtr; // r0
        class EventActionDrivenBy * params; // r0
    }
    {
        // Range: 0x801ED8EC -> 0x801ED920
        // Local variables
        class xBase * toParamWidgetPtr; // r0
        class EventActionMount * params; // r0
    }
    {
        // Range: 0x801ED924 -> 0x801ED9F8
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionMount * params; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x801EDA10 -> 0x801EDAAC
void TriggerPhantom::Listen(class TriggerPhantom * this /* r27 */, class xBase * to /* r28 */, unsigned int eventToListen /* r29 */) {
    {
        // Range: 0x801EDA44 -> 0x801EDA84
        // Local variables
        unsigned int i; // r30
    }
}
// signature: TriggerPhantom::Notify(xBase *)
// Range: 0x801EDAB0 -> 0x801EDB68
bool TriggerPhantom::Notify() {
    // Local variables
    bool excluded; // r9
    bool included; // r10

    {
        // Range: 0x801EDAC8 -> 0x801EDAFC
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x801EDB18 -> 0x801EDB4C
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x801EDB70 -> 0x801EE40C
void TriggerPhantom::ApplyTriggerPhysics(class TriggerPhantom * this /* r30 */, class hkpCollidable * c /* r28 */, bool firstFrame /* r27 */) {
    // Local variables
    class hkpRigidBody * rb; // r31
    class hkpPhantom * phantom; // r29
    class hkVector4 linVec; // r1+0x70

    {
        // Range: 0x801EDBD4 -> 0x801EDC14
        // Local variables
        class xBase * base; // r3

        {
            // Range: 0x801EDBE4 -> 0x801EDC14
            // Local variables
            class zPlayer * player; // r28
        }
    }
    {
        // Range: 0x801EDD70 -> 0x801EE3EC
        // Local variables
        class xVec3 vec; // r1+0x58
        class xBase * base; // r31
        class zNPCSteering * npcSteering; // r0
        class zNPCEntity * npc; // r0
        class zPlayer * player; // r0

        {
            // Range: 0x801EE24C -> 0x801EE2CC
            // Local variables
            class zNPCSteering * npcSteering; // r0
        }
        {
            // Range: 0x801EE36C -> 0x801EE3EC
            // Local variables
            class zNPCSteering * npcSteering; // r0
        }
    }
}
// Range: 0x801EE500 -> 0x801EE9FC
void TriggerPhantom::ComputeVelocityInTriggerSpace(class TriggerPhantom * this /* r28 */, class hkVector4 * output /* r29 */) {
    // Local variables
    class hkRotation rotation; // r1+0x1C0
}
// Range: 0x801EEAA0 -> 0x801EF458
void TriggerPhantom::ComputeVelocityToPoint(class TriggerPhantom * this /* r27 */, class hkVector4 * subjectPos /* r28 */, class hkVector4 * output /* r29 */) {
    // Local variables
    class hkVector4 offset; // r1+0x1C0
    class hkRotation eulerRotations; // r1+0x3E0
    class hkRotation rotation; // r1+0x3B0
}
// Range: 0x801EF490 -> 0x801EF98C
void TriggerPhantom::ComputeImpulseInTriggerSpace(class TriggerPhantom * this /* r28 */, class hkVector4 * output /* r29 */) {
    // Local variables
    class hkRotation rotation; // r1+0x1C0
}
// Range: 0x801EF990 -> 0x801F0348
void TriggerPhantom::ComputeImpulseToPoint(class TriggerPhantom * this /* r27 */, class hkVector4 * subjectPos /* r28 */, class hkVector4 * output /* r29 */) {
    // Local variables
    class hkVector4 offset; // r1+0x1C0
    class hkRotation eulerRotations; // r1+0x3E0
    class hkRotation rotation; // r1+0x3B0
}
// Range: 0x801F0350 -> 0x801F0C40
void TriggerPhantom::ComputeForceTorqueInTriggerSpace(class TriggerPhantom * this /* r27 */, class hkVector4 * subjectPos /* r28 */, class hkVector4 * output /* r29 */) {
    // Local variables
    class hkRotation rotation; // r1+0x390

    {
        // Range: 0x801F07DC -> 0x801F0BE0
        // Local variables
        class hkVector4 fallOffVec; // r1+0x190
        class hkVector4 subjectDisplacementFromCenter; // r1+0x1A0
    }
}
// Range: 0x801F0C40 -> 0x801F0E34
void TriggerPhantom::ComputeForceTorqueToPoint(class TriggerPhantom * this /* r28 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 * output /* r30 */) {
    // Local variables
    class hkVector4 offset; // r1+0x40
    float subjectDistFromPoint; // f2
    class hkRotation eulerRotations; // r1+0x100
    class hkRotation rotation; // r1+0xD0

    {
        // Range: 0x801F0CF0 -> 0x801F0D2C
        // Local variables
        float fallOffFactor; // r1+0x10
    }
}
// signature: TriggerPhantom::getCollidableWeight(const hkpCollidable *)
// Range: 0x801F0E40 -> 0x801F0F38
float TriggerPhantom::getCollidableWeight() {
    {
        // Range: 0x801F0E94 -> 0x801F0ED8
        // Local variables
        class xBase * base; // r3
    }
    {
        // Range: 0x801F0EE4 -> 0x801F0F20
        // Local variables
        class xBase * base; // r4
    }
}
// signature: TriggerPhantom::NotifyThresholdEnter(unsigned int)
// Range: 0x801F0F40 -> 0x801F0F60
bool TriggerPhantom::NotifyThresholdEnter() {
}
// signature: TriggerPhantom::NotifyThresholdExit(unsigned int)
// Range: 0x801F0F60 -> 0x801F0F7C
bool TriggerPhantom::NotifyThresholdExit() {
}
// signature: TriggerPhantom::NotifyWeightThresholdEnter(float, float)
// Range: 0x801F0F80 -> 0x801F0FA8
bool TriggerPhantom::NotifyWeightThresholdEnter() {
}
// signature: TriggerPhantom::NotifyWeightThresholdExit(float, float)
// Range: 0x801F0FB0 -> 0x801F0FD8
bool TriggerPhantom::NotifyWeightThresholdExit() {
}
// signature: TriggerPhantom::CalculateAABB(Math::Vector4 &, Math::Vector4 &, hkAabb &)
// Range: 0x801F0FE0 -> 0x801F1064
void TriggerPhantom::CalculateAABB() {
}
// signature: AabbPhantomCollector::AabbPhantomCollector(const hkAabb &, TriggerPhantom *, unsigned int)
// Range: 0x801F1070 -> 0x801F10C8
void * AabbPhantomCollector::AabbPhantomCollector(class AabbPhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__20AabbPhantomCollector;
}
// Range: 0x801F10D0 -> 0x801F1A04
void AabbPhantomCollector::addOverlappingCollidable(class AabbPhantomCollector * this /* r28 */, class hkpCollidable * c /* r29 */) {
    {
        // Range: 0x801F11C8 -> 0x801F15DC
        // Local variables
        class xBase * to; // r30
    }
    {
        // Range: 0x801F15E8 -> 0x801F19EC
        // Local variables
        class xBase * to; // r30
    }
}
// signature: AabbPhantomCollector::removeOverlappingCollidable(hkpCollidable *)
// Range: 0x801F1A10 -> 0x801F2304
void AabbPhantomCollector::removeOverlappingCollidable(class AabbPhantomCollector * this /* r28 */) {
    // Local variables
    class hkpWorldObject * wo; // r0

    {
        // Range: 0x801F1AF8 -> 0x801F1EF4
        // Local variables
        class xBase * to; // r30
    }
    {
        // Range: 0x801F1F00 -> 0x801F22EC
        // Local variables
        class xBase * to; // r30
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: SimpleShapePhantomCollector::SimpleShapePhantomCollector(const hkpShape *, const hkTransform &, TriggerPhantom *, unsigned int)
// Range: 0x801F2310 -> 0x801F236C
void * SimpleShapePhantomCollector::SimpleShapePhantomCollector(class SimpleShapePhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__27SimpleShapePhantomCollector;
}
// signature: SimpleShapePhantomCollector::addOverlappingCollidable(hkpCollidable *)
// Range: 0x801F2370 -> 0x801F2458
void SimpleShapePhantomCollector::addOverlappingCollidable() {
}
// signature: SimpleShapePhantomCollector::removeOverlappingCollidable(hkpCollidable *)
// Range: 0x801F2460 -> 0x801F2464
void SimpleShapePhantomCollector::removeOverlappingCollidable() {
}
