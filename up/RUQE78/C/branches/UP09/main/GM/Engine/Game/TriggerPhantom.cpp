/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\TriggerPhantom.cpp
*/
// signature: CheckForActiveBodyPartProperty(hkpWorldObject *)
// Range: 0x8029B060 -> 0x8029B138
bool CheckForActiveBodyPartProperty() {
}
// Range: 0x8029B140 -> 0x8029B22C
class Entity * Sext::TriggerPhantomAsset::Create(class EntityHandleBase * handle /* r29 */, class TriggerPhantomAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__14TriggerPhantom;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: TriggerPhantomEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8029B230 -> 0x8029B25C
static void TriggerPhantomEventWrapper(class xBase * to /* r8 */, unsigned int toEvent /* r0 */) {
}
// Range: 0x8029B260 -> 0x8029B898
void TriggerPhantom::CreateCollector(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x8029B2C8 -> 0x8029B38C
        // Local variables
        class hkAabb infoAABB; // r1+0x140
        class Vector4 scaleAABBox; // r1+0x110
        class Vector4 posAABBox; // r1+0x120
        class xVec3 scale; // r1+0x130
        class Matrix43 matNg; // r1+0x400
        class xMat4x3 matrix; // r1+0x430
    }
    {
        // Range: 0x8029B38C -> 0x8029B52C
        // Local variables
        class hkVector4 halfExtent; // r1+0xF0
        class hkTransform transform; // r1+0x320
        class hkRotation rt; // r1+0x360
        class xVec3 scale; // r1+0x100
        class Matrix43 matNg; // r1+0x390
        class xMat4x3 matrix; // r1+0x3C0
    }
    {
        // Range: 0x8029B52C -> 0x8029B6A8
        // Local variables
        class hkTransform transform; // r1+0x240
        class xMat3x3 tempMat; // r1+0x280
        class xQuat quat; // r1+0xC0
        class hkVector4 trans; // r1+0xD0
        class xVec3 * pos; // r0
        class xVec3 scale; // r1+0xE0
        class Matrix43 matNg; // r1+0x2B0
        class xMat4x3 matrix; // r1+0x2E0
    }
    {
        // Range: 0x8029B6A8 -> 0x8029B864
        // Local variables
        class hkVector4 capV1; // r1+0x80
        class hkVector4 capV0; // r1+0x90
        float height; // f30
        float capRadius; // f31
        class hkTransform transform; // r1+0x160
        class xMat3x3 tempMat; // r1+0x1A0
        class xQuat quat; // r1+0xA0
        class xVec3 scale; // r1+0xB0
        class Matrix43 matNg; // r1+0x1D0
        class xMat4x3 matrix; // r1+0x200
    }
}
// Range: 0x8029B950 -> 0x8029BC50
void TriggerPhantom::Init(class TriggerPhantom * this /* r31 */, class TriggerPhantomAsset * inAsset /* r30 */) {
    // Local variables
    unsigned int i; // r6

    {
        // Range: 0x8029BA84 -> 0x8029BAB4
        // Local variables
        class hkpPropertyValue val; // r1+0x10
    }
    {
        // Range: 0x8029BAB4 -> 0x8029BBE4
        // Local variables
        int i; // r6
    }
}
// Range: 0x8029BC50 -> 0x8029BCCC
void TriggerPhantom::Update(class TriggerPhantom * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8029BCD0 -> 0x8029C4A0
void TriggerPhantom::UpdatePenetrations(class TriggerPhantom * this /* r24 */) {
    // Local variables
    class hkpAllCdBodyPairCollector collPenetrations; // r1+0x8

    {
        // Range: 0x8029BCF8 -> 0x8029BD74
        // Local variables
        int i; // r25

        {
            // Range: 0x8029BCF8 -> 0x8029BD74
            // Local variables
            class hkpCollidable * c; // r26

            {
                // Range: 0x8029BD14 -> 0x8029BD74
                // Local variables
                class xBase * to; // r4
            }
        }
    }
    {
        // Range: 0x8029BDC4 -> 0x8029C0FC
        // Local variables
        int i; // r25

        {
            // Range: 0x8029BDC4 -> 0x8029C0FC
            // Local variables
            bool hasLeft; // r23

            {
                // Range: 0x8029BDC8 -> 0x8029BDC8
                // Local variables
                int j; // r22
            }
            {
                // Range: 0x8029BDD4 -> 0x8029BDD8
                // Local variables
                class xBase * to; // r22
            }
            {
                // Range: 0x8029BDD8 -> 0x8029C0FC
                // Local variables
                class xBase * to; // r22
            }
        }
    }
    {
        // Range: 0x8029C10C -> 0x8029C464
        // Local variables
        int i; // r25

        {
            // Range: 0x8029C10C -> 0x8029C464
            // Local variables
            class hkpWorldObject * wo; // r23
            bool hasEntered; // r22

            {
                // Range: 0x8029C110 -> 0x8029C110
                // Local variables
                int j; // r23
            }
            {
                // Range: 0x8029C110 -> 0x8029C3B0
                // Local variables
                class xBase * to; // r26
            }
            {
                // Range: 0x8029C3B4 -> 0x8029C464
                // Local variables
                class xBase * to; // r4
            }
        }
    }
}
// Range: 0x8029C4D0 -> 0x8029C5A0
void TriggerPhantom::AddPenetratingCollidableToList(class TriggerPhantom * this /* r31 */, class hkpCollidable * pColl /* r30 */) {
}
// signature: TriggerPhantom::RemovePenetratingCollidableFromList(int)
// Range: 0x8029C5A0 -> 0x8029C5F8
void TriggerPhantom::RemovePenetratingCollidableFromList() {
    {
        // Range: 0x8029C5C0 -> 0x8029C5C4
        // Local variables
        int i; // r4
    }
}
// signature: TriggerPhantom::AddToDotTargetList(xBase *)
// Range: 0x8029C600 -> 0x8029C638
void TriggerPhantom::AddToDotTargetList() {
}
// signature: TriggerPhantom::RemoveFromDotTargetList(xBase *)
// Range: 0x8029C640 -> 0x8029C6C0
void TriggerPhantom::RemoveFromDotTargetList() {
    // Local variables
    bool found; // r7
    int i; // r8
}
// Range: 0x8029C6C0 -> 0x8029C744
bool TriggerPhantom::IsDotTarget(class TriggerPhantom * this /* r30 */, class xBase * target /* r31 */) {
}
// Range: 0x8029C750 -> 0x8029C8A4
void TriggerPhantom::DealDotDamage(class TriggerPhantom * this /* r29 */, float dt /* f30 */) {
    {
        // Range: 0x8029C780 -> 0x8029C86C
        // Local variables
        int i; // r30

        {
            // Range: 0x8029C7A4 -> 0x8029C86C
            // Local variables
            class zCombatDamageInfo info; // r1+0x18
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: TriggerPhantom::CanPenetrate(const hkpCollidable *)
// Range: 0x8029C8B0 -> 0x8029C98C
bool TriggerPhantom::CanPenetrate() {
}
// Range: 0x8029C990 -> 0x8029D1A0
void TriggerPhantom::Reset(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x8029CA00 -> 0x8029CAC4
        // Local variables
        class hkAabb infoAABB; // r1+0x150
        class Vector4 scaleAABBox; // r1+0x120
        class Vector4 posAABBox; // r1+0x130
        class xVec3 scale; // r1+0x140
        class Matrix43 matNg; // r1+0x410
        class xMat4x3 matrix; // r1+0x440
    }
    {
        // Range: 0x8029CAC4 -> 0x8029CC64
        // Local variables
        class hkVector4 halfExtent; // r1+0x100
        class hkTransform transform; // r1+0x330
        class hkRotation rt; // r1+0x370
        class xVec3 scale; // r1+0x110
        class Matrix43 matNg; // r1+0x3A0
        class xMat4x3 matrix; // r1+0x3D0
    }
    {
        // Range: 0x8029CC64 -> 0x8029CDE0
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
        // Range: 0x8029CDE0 -> 0x8029CF9C
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
        // Range: 0x8029CFAC -> 0x8029CFE0
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
    {
        // Range: 0x8029CFE4 -> 0x8029D120
        // Local variables
        int i; // r7
    }
}
// Range: 0x8029D1A0 -> 0x8029D1A4
void TriggerPhantom::Setup() {
}
// Range: 0x8029D1B0 -> 0x8029D474
class hkTransform TriggerPhantom::getTransform() {
    {
        // Range: 0x8029D1E0 -> 0x8029D3C8
        // Local variables
        class hkTransform trans; // r1+0xD0
        class Vector4 posAABBox; // r1+0xB0
        class xVec3 scale; // r1+0xC0
        class Matrix43 matNg; // r1+0x110
        class xMat4x3 matrix; // r1+0x140
    }
}
// Range: 0x8029D480 -> 0x8029D51C
void * TriggerPhantom::~TriggerPhantom(class TriggerPhantom * this /* r30 */) {
    // References
    // -> struct {} __vt__14TriggerPhantom;
}
// Range: 0x8029D520 -> 0x8029D730
void TriggerPhantom::DebugReset(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x8029D644 -> 0x8029D654
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x8029D684 -> 0x8029D694
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x8029D6D4 -> 0x8029D704
        // Local variables
        class hkpPropertyValue val; // r1+0x10
    }
}
// signature: TriggerPhantom::HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8029D730 -> 0x8029D948
void TriggerPhantom::HandleEvent(class TriggerPhantom * this /* r28 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x8029D834 -> 0x8029D8EC
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r29
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x8029D950 -> 0x8029D9EC
void TriggerPhantom::Listen(class TriggerPhantom * this /* r27 */, class xBase * to /* r28 */, unsigned int eventToListen /* r29 */) {
    {
        // Range: 0x8029D984 -> 0x8029D9C4
        // Local variables
        unsigned int i; // r30
    }
}
// signature: TriggerPhantom::Notify(xBase *)
// Range: 0x8029D9F0 -> 0x8029DAA8
bool TriggerPhantom::Notify() {
    // Local variables
    bool excluded; // r9
    bool included; // r10

    {
        // Range: 0x8029DA08 -> 0x8029DA3C
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x8029DA58 -> 0x8029DA8C
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x8029DAB0 -> 0x8029E288
void TriggerPhantom::ApplyTriggerPhysics(class TriggerPhantom * this /* r31 */, class hkpCollidable * c /* r28 */, bool firstFrame /* r27 */) {
    // Local variables
    class hkpRigidBody * rb; // r30
    class hkpPhantom * phantom; // r29
    class hkVector4 linVec; // r1+0x20

    {
        // Range: 0x8029DB14 -> 0x8029DB50
        // Local variables
        class xBase * base; // r3

        {
            // Range: 0x8029DB24 -> 0x8029DB50
            // Local variables
            class zPlayer * player; // r28
        }
    }
    {
        // Range: 0x8029DCAC -> 0x8029E268
        // Local variables
        class xVec3 vec; // r1+0x10
        class xBase * base; // r28
        class zNPCSteering * npcSteering; // r0
        class zNPCEntity * npc; // r0
        class zPlayer * player; // r0

        {
            // Range: 0x8029E0EC -> 0x8029E168
            // Local variables
            class zNPCSteering * npcSteering; // r0
        }
        {
            // Range: 0x8029E1EC -> 0x8029E268
            // Local variables
            class zNPCSteering * npcSteering; // r0
        }
    }
}
// Range: 0x8029E370 -> 0x8029E73C
void TriggerPhantom::ComputeVelocityInTriggerSpace(class TriggerPhantom * this /* r29 */, class hkVector4 & output /* r30 */) {
    // Local variables
    class hkRotation rotation; // r1+0x1C0
}
// Range: 0x8029E850 -> 0x8029EFF4
void TriggerPhantom::ComputeVelocityToPoint(class TriggerPhantom * this /* r28 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r30 */) {
    // Local variables
    class hkVector4 offset; // r1+0x1C0
    class hkRotation eulerRotations; // r1+0x3E0
    class hkRotation rotation; // r1+0x3B0
}
// Range: 0x8029F030 -> 0x8029F7D4
void TriggerPhantom::ComputeImpulseToPoint(class TriggerPhantom * this /* r28 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r30 */) {
    // Local variables
    class hkVector4 offset; // r1+0x1C0
    class hkRotation eulerRotations; // r1+0x3E0
    class hkRotation rotation; // r1+0x3B0
}
// Range: 0x8029F7E0 -> 0x8029FEDC
void TriggerPhantom::ComputeForceTorqueInTriggerSpace(class TriggerPhantom * this /* r28 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r30 */) {
    // Local variables
    class hkRotation rotation; // r1+0x390

    {
        // Range: 0x8029FB6C -> 0x8029FE88
        // Local variables
        class hkVector4 fallOffVec; // r1+0x190
        class hkVector4 subjectDisplacementFromCenter; // r1+0x1A0
    }
}
// Range: 0x8029FEE0 -> 0x802A00D0
void TriggerPhantom::ComputeForceTorqueToPoint(class TriggerPhantom * this /* r26 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r27 */) {
    // Local variables
    class hkVector4 offset; // r1+0x40
    float subjectDistFromPoint; // f2
    class hkRotation eulerRotations; // r1+0x100
    class hkRotation rotation; // r1+0xD0

    {
        // Range: 0x8029FF84 -> 0x8029FFC4
        // Local variables
        float fallOffFactor; // r1+0x10
    }
}
// signature: TriggerPhantom::getCollidableWeight(const hkpCollidable *)
// Range: 0x802A00D0 -> 0x802A01B8
float TriggerPhantom::getCollidableWeight() {
    {
        // Range: 0x802A0124 -> 0x802A0160
        // Local variables
        class xBase * base; // r3
    }
    {
        // Range: 0x802A016C -> 0x802A01A0
        // Local variables
        class xBase * base; // r3
    }
}
// signature: TriggerPhantom::NotifyThresholdEnter(unsigned int)
// Range: 0x802A01C0 -> 0x802A01E0
bool TriggerPhantom::NotifyThresholdEnter() {
}
// signature: TriggerPhantom::NotifyThresholdExit(unsigned int)
// Range: 0x802A01E0 -> 0x802A01FC
bool TriggerPhantom::NotifyThresholdExit() {
}
// signature: TriggerPhantom::NotifyWeightThresholdEnter(float, float)
// Range: 0x802A0200 -> 0x802A0228
bool TriggerPhantom::NotifyWeightThresholdEnter() {
}
// signature: TriggerPhantom::NotifyWeightThresholdExit(float, float)
// Range: 0x802A0230 -> 0x802A0258
bool TriggerPhantom::NotifyWeightThresholdExit() {
}
// signature: TriggerPhantom::getPos(Math::Vector4 &)
// Range: 0x802A0260 -> 0x802A0294
void TriggerPhantom::getPos() {
    // Local variables
    class Vector4POD * v0; // r0
    class Vector4POD * v1; // r0
}
// signature: TriggerPhantom::CalculateAABB(Math::Vector4 &, Math::Vector4 &, hkAabb &)
// Range: 0x802A02A0 -> 0x802A0328
void TriggerPhantom::CalculateAABB() {
}
// signature: AabbPhantomCollector::AabbPhantomCollector(const hkAabb &, TriggerPhantom *, unsigned int)
// Range: 0x802A0330 -> 0x802A0388
void * AabbPhantomCollector::AabbPhantomCollector(class AabbPhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__20AabbPhantomCollector;
}
// Range: 0x802A0390 -> 0x802A0A24
void AabbPhantomCollector::addOverlappingCollidable(class AabbPhantomCollector * this /* r28 */, class hkpCollidable * c /* r29 */) {
    {
        // Range: 0x802A0488 -> 0x802A074C
        // Local variables
        class xBase * to; // r30
    }
    {
        // Range: 0x802A0758 -> 0x802A0A0C
        // Local variables
        class xBase * to; // r30
    }
}
// signature: AabbPhantomCollector::removeOverlappingCollidable(hkpCollidable *)
// Range: 0x802A0A30 -> 0x802A1038
void AabbPhantomCollector::removeOverlappingCollidable(class AabbPhantomCollector * this /* r29 */) {
    // Local variables
    class hkpWorldObject * wo; // r0

    {
        // Range: 0x802A0B18 -> 0x802A0DA0
        // Local variables
        class xBase * to; // r30
    }
    {
        // Range: 0x802A0DAC -> 0x802A1020
        // Local variables
        class xBase * to; // r30
    }
}
// signature: SimpleShapePhantomCollector::SimpleShapePhantomCollector(const hkpShape *, const hkTransform &, TriggerPhantom *, unsigned int)
// Range: 0x802A1040 -> 0x802A109C
void * SimpleShapePhantomCollector::SimpleShapePhantomCollector(class SimpleShapePhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__27SimpleShapePhantomCollector;
}
// signature: SimpleShapePhantomCollector::addOverlappingCollidable(hkpCollidable *)
// Range: 0x802A10A0 -> 0x802A1188
void SimpleShapePhantomCollector::addOverlappingCollidable() {
}
// signature: SimpleShapePhantomCollector::removeOverlappingCollidable(hkpCollidable *)
// Range: 0x802A1190 -> 0x802A1194
void SimpleShapePhantomCollector::removeOverlappingCollidable() {
}
