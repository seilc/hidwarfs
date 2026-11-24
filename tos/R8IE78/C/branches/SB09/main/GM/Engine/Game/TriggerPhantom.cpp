/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\TriggerPhantom.cpp
*/
// Range: 0x801918D0 -> 0x80191990
bool CheckForActiveBodyPartProperty(class hkpWorldObject * wo /* r31 */) {
}
// Range: 0x80191990 -> 0x80191A18
class Entity * Sext::TriggerPhantomAsset::Create(class EntityHandleBase * handle /* r29 */, class TriggerPhantomAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__14TriggerPhantom;
}
// signature: TriggerPhantomEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80191A20 -> 0x80191A4C
static void TriggerPhantomEventWrapper(class xBase * to /* r8 */, unsigned int toEvent /* r0 */) {
}
// Range: 0x80191A50 -> 0x80192034
void TriggerPhantom::CreateCollector(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x80191AB0 -> 0x80191B60
        // Local variables
        class hkAabb infoAABB; // r1+0x140
        class Vector4 scaleAABBox; // r1+0x110
        class Vector4 posAABBox; // r1+0x120
        class xVec3 scale; // r1+0x130
        class Matrix43 matNg; // r1+0x400
        class xMat4x3 matrix; // r1+0x430
    }
    {
        // Range: 0x80191B60 -> 0x80191D18
        // Local variables
        class hkVector4 halfExtent; // r1+0xF0
        class hkTransform transform; // r1+0x320
        class hkRotation rt; // r1+0x360
        class xVec3 scale; // r1+0x100
        class Matrix43 matNg; // r1+0x390
        class xMat4x3 matrix; // r1+0x3C0
    }
    {
        // Range: 0x80191D18 -> 0x80191E70
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
        // Range: 0x80191E70 -> 0x80192008
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

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80192140 -> 0x801922BC
void TriggerPhantom::Init(class TriggerPhantom * this /* r31 */, class TriggerPhantomAsset * inAsset /* r30 */) {
    {
        // Range: 0x801921F4 -> 0x80192224
        // Local variables
        class hkpPropertyValue val; // r1+0x10
    }
    {
        // Range: 0x80192228 -> 0x80192258
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80192258 -> 0x80192288
        // Local variables
        int i; // r0
    }
}
// Range: 0x801922C0 -> 0x80192378
void TriggerPhantom::PopulateIncludeAndExcludeLists(class TriggerPhantom * this /* r28 */) {
    // Local variables
    unsigned int i; // r29

    {
        // Range: 0x801922D4 -> 0x8019231C
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x8019231C -> 0x80192364
        // Local variables
        class xBase * base; // r0
    }
}
// Range: 0x80192380 -> 0x801923FC
void TriggerPhantom::Update(class TriggerPhantom * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80192400 -> 0x80192B7C
void TriggerPhantom::UpdatePenetrations(class TriggerPhantom * this /* r25 */) {
    // Local variables
    class hkpAllCdBodyPairCollector collPenetrations; // r1+0x8

    {
        // Range: 0x80192428 -> 0x801924AC
        // Local variables
        int i; // r23

        {
            // Range: 0x80192428 -> 0x801924AC
            // Local variables
            class hkpCollidable * c; // r26

            {
                // Range: 0x80192438 -> 0x801924AC
                // Local variables
                class xBase * to; // r4
            }
        }
    }
    {
        // Range: 0x80192520 -> 0x80192898
        // Local variables
        int i; // r27

        {
            // Range: 0x80192520 -> 0x80192898
            // Local variables
            bool hasLeft; // r8

            {
                // Range: 0x80192528 -> 0x80192528
                // Local variables
                int j; // r0
            }
            {
                // Range: 0x80192534 -> 0x80192538
                // Local variables
                class xBase * to; // r22
            }
            {
                // Range: 0x80192538 -> 0x80192898
                // Local variables
                class xBase * to; // r22
            }
        }
    }
    {
        // Range: 0x80192898 -> 0x80192B58
        // Local variables
        int i; // r27

        {
            // Range: 0x80192898 -> 0x80192B58
            // Local variables
            bool hasEntered; // r26

            {
                // Range: 0x801928A0 -> 0x801928A0
                // Local variables
                int j; // r0
            }
            {
                // Range: 0x801928A0 -> 0x80192AC4
                // Local variables
                class xBase * to; // r22
            }
            {
                // Range: 0x80192AC8 -> 0x80192B58
                // Local variables
                class xBase * to; // r4
            }
        }
    }

    // References
    // -> struct {} __vt__25hkpAllCdBodyPairCollector;
    // -> struct {} __vt__22hkpCdBodyPairCollector;
}
// Range: 0x80192B80 -> 0x80192C50
void TriggerPhantom::AddPenetratingCollidableToList(class TriggerPhantom * this /* r31 */, class hkpCollidable * pColl /* r30 */) {
}
// signature: TriggerPhantom::RemovePenetratingCollidableFromList(int)
// Range: 0x80192C50 -> 0x80192CAC
void TriggerPhantom::RemovePenetratingCollidableFromList() {
    {
        // Range: 0x80192C74 -> 0x80192CA4
        // Local variables
        int i; // r4
    }
}
// signature: TriggerPhantom::AddToDotTargetList(xBase *)
// Range: 0x80192CB0 -> 0x80192CE8
void TriggerPhantom::AddToDotTargetList() {
}
// signature: TriggerPhantom::RemoveFromDotTargetList(xBase *)
// Range: 0x80192CF0 -> 0x80192D6C
void TriggerPhantom::RemoveFromDotTargetList() {
    // Local variables
    bool found; // r8
    int i; // r9
}
// Range: 0x80192D70 -> 0x80192DF4
bool TriggerPhantom::IsDotTarget(class TriggerPhantom * this /* r30 */, class xBase * target /* r31 */) {
}
// Range: 0x80192E00 -> 0x80193060
void TriggerPhantom::DealDotDamage(class TriggerPhantom * this /* r22 */, float dt /* f30 */) {
    {
        // Range: 0x80192E38 -> 0x80193034
        // Local variables
        int i; // r23

        {
            // Range: 0x80192E4C -> 0x80193034
            // Local variables
            class zCombatDamageInfo info; // r1+0xB0

            {
                // Range: 0x80192F84 -> 0x80193034
                // Local variables
                class zPlayer * player; // r0

                {
                    // Range: 0x80192F90 -> 0x80193034
                    // Local variables
                    class zSBPlayer * sbPlayer; // r0

                    {
                        // Range: 0x80192F9C -> 0x80193034
                        // Local variables
                        class xVec3 at; // r1+0x28
                        class hkRotation curHKRot; // r1+0x40
                        class hkTransform curHKTrans; // r1+0x70
                    }
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
}
// Range: 0x801930B0 -> 0x80193144
bool TriggerPhantom::CanPenetrate(class hkpCollidable * pColl /* r30 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
}
// Range: 0x80193170 -> 0x80193820
void TriggerPhantom::Reset(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x801931D8 -> 0x80193288
        // Local variables
        class hkAabb infoAABB; // r1+0x150
        class Vector4 scaleAABBox; // r1+0x120
        class Vector4 posAABBox; // r1+0x130
        class xVec3 scale; // r1+0x140
        class Matrix43 matNg; // r1+0x410
        class xMat4x3 matrix; // r1+0x440
    }
    {
        // Range: 0x80193288 -> 0x80193440
        // Local variables
        class hkVector4 halfExtent; // r1+0x100
        class hkTransform transform; // r1+0x330
        class hkRotation rt; // r1+0x370
        class xVec3 scale; // r1+0x110
        class Matrix43 matNg; // r1+0x3A0
        class xMat4x3 matrix; // r1+0x3D0
    }
    {
        // Range: 0x80193440 -> 0x80193598
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
        // Range: 0x80193598 -> 0x80193730
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
        // Range: 0x80193740 -> 0x80193770
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
    {
        // Range: 0x80193774 -> 0x801937B4
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801937B4 -> 0x801937E4
        // Local variables
        int i; // r0
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80193820 -> 0x80193824
void TriggerPhantom::Setup() {
}
// Range: 0x80193830 -> 0x80193920
class hkTransform TriggerPhantom::getTransform() {
    {
        // Range: 0x80193854 -> 0x801938F4
        // Local variables
        class hkTransform trans; // r1+0x40
        class Vector4 posAABBox; // r1+0x20
        class xVec3 scale; // r1+0x30
        class Matrix43 matNg; // r1+0x80
        class xMat4x3 matrix; // r1+0xB0
    }
}
// Range: 0x80193920 -> 0x80193998
void * TriggerPhantom::~TriggerPhantom(class TriggerPhantom * this /* r30 */) {
    // References
    // -> struct {} __vt__14TriggerPhantom;
}
// Range: 0x801939A0 -> 0x80193B30
void TriggerPhantom::DebugReset(class TriggerPhantom * this /* r31 */) {
    {
        // Range: 0x80193AD8 -> 0x80193B08
        // Local variables
        class hkpPropertyValue val; // r1+0x10
    }
}
// signature: TriggerPhantom::HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80193B30 -> 0x80193D38
void TriggerPhantom::HandleEvent(class TriggerPhantom * this /* r28 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x80193C28 -> 0x80193CE8
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r29
        class EventActionDrivenBy * paramst; // r0
    }
}
// signature: TriggerPhantom::DriveGetCurMat(int)
// Range: 0x80193D40 -> 0x80193E10
class xMat4x3 * TriggerPhantom::DriveGetCurMat(class TriggerPhantom * this /* r31 */) {
    // Local variables
    class hkTransform curHKTrans; // r1+0x50
    class hkVector4 curHKPos; // r1+0x10
    class hkRotation curHKRot; // r1+0x20

    // References
    // -> class xMat4x3 g_I3;
}
// signature: TriggerPhantom::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80193E10 -> 0x801942C0
void TriggerPhantom::DriveCauseMove(class TriggerPhantom * this /* r31 */, class xMat4x3 * parent /* r8 */, class xMat4x3 * oldMat /* r29 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x190
    class xMat4x3 tempMat; // r1+0x150
    class xMat4x3 baseMat; // r1+0x110
    class xVec3 R; // r1+0x70

    {
        // Range: 0x8019411C -> 0x80194184
        // Local variables
        class hkAabb newAABB; // r1+0x80
        class Vector4 scaleAABBox; // r1+0x50
        class Vector4 posAABBox; // r1+0x60
    }
    {
        // Range: 0x80194184 -> 0x8019427C
        // Local variables
        class hkTransform transform; // r1+0xA0
        class hkRotation rt; // r1+0xE0
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801942C0 -> 0x8019435C
void TriggerPhantom::Listen(class TriggerPhantom * this /* r27 */, class xBase * to /* r28 */, unsigned int eventToListen /* r29 */) {
    {
        // Range: 0x801942F4 -> 0x80194348
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80194360 -> 0x8019446C
bool TriggerPhantom::IsAffectedByTrigger(class TriggerPhantom * this /* r28 */, class xBase * base /* r29 */) {
    {
        // Range: 0x80194378 -> 0x801943DC
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x801943F0 -> 0x80194454
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x80194470 -> 0x80194A84
void TriggerPhantom::ApplyTriggerPhysics(class TriggerPhantom * this /* r31 */, class hkpCollidable * c /* r28 */, bool firstFrame /* r29 */) {
    // Local variables
    class hkpRigidBody * rb; // r30
    class hkpPhantom * phantom; // r0
    class hkVector4 linVec; // r1+0x20

    {
        // Range: 0x801944D0 -> 0x801944E4
        // Local variables
        class xBase * base; // r4

        {
            // Range: 0x801944DC -> 0x801944E4
            // Local variables
            class zPlayer * player; // r0
        }
    }
    {
        // Range: 0x80194690 -> 0x80194A60
        // Local variables
        class xVec3 vec; // r1+0x10
        class xBase * base; // r30
        class zNPCSteering * npcSteering; // r3
        class zNPCEntity * npc; // r0
        class zPlayer * player; // reg65535

        {
            // Range: 0x80194970 -> 0x801949BC
            // Local variables
            class zNPCSteering * npcSteering; // r3
        }
        {
            // Range: 0x80194A14 -> 0x80194A60
            // Local variables
            class zNPCSteering * npcSteering; // r3
        }
    }

    // References
    // -> float dt;
}
// Range: 0x80194A90 -> 0x80194B34
void TriggerPhantom::ComputeVelocityInTriggerSpace(class TriggerPhantom * this /* r30 */, class hkVector4 & output /* r31 */) {
    // Local variables
    class hkRotation rotation; // r1+0x50
}
// Range: 0x80194B40 -> 0x80194CB4
void TriggerPhantom::ComputeVelocityToPoint(class TriggerPhantom * this /* r26 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r27 */) {
    // Local variables
    class hkVector4 offset; // r1+0x30
    class hkRotation eulerRotations; // r1+0xF0
    class hkRotation rotation; // r1+0xC0
}
// Range: 0x80194CC0 -> 0x80194E34
void TriggerPhantom::ComputeImpulseToPoint(class TriggerPhantom * this /* r26 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r27 */) {
    // Local variables
    class hkVector4 offset; // r1+0x30
    class hkRotation eulerRotations; // r1+0xF0
    class hkRotation rotation; // r1+0xC0
}
// Range: 0x80194E40 -> 0x80194F8C
void TriggerPhantom::ComputeForceTorqueInTriggerSpace(class TriggerPhantom * this /* r28 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r30 */) {
    // Local variables
    class hkRotation rotation; // r1+0xB0

    {
        // Range: 0x80194EBC -> 0x80194F60
        // Local variables
        float fallOffFactor; // f1
        class hkVector4 fallOffVec; // r1+0x10
        class hkVector4 subjectDisplacementFromCenter; // r1+0x20
    }
}
// Range: 0x80194F90 -> 0x80195198
void TriggerPhantom::ComputeForceTorqueToPoint(class TriggerPhantom * this /* r26 */, class hkVector4 * subjectPos /* r29 */, class hkVector4 & output /* r27 */) {
    // Local variables
    class hkVector4 offset; // r1+0x30
    float subjectDistFromPoint; // f2
    class hkRotation eulerRotations; // r1+0xF0
    class hkRotation rotation; // r1+0xC0

    {
        // Range: 0x80195060 -> 0x8019509C
        // Local variables
        float fallOffFactor; // f1
    }

    // References
    // -> float hkInfinity;
}
// Range: 0x801951A0 -> 0x80195270
float TriggerPhantom::getCollidableWeight(class hkpCollidable * c /* r30 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
    class hkpPhantom * phantom; // r0

    {
        // Range: 0x801951D4 -> 0x80195210
        // Local variables
        class xBase * base; // r3
    }
    {
        // Range: 0x8019521C -> 0x80195250
        // Local variables
        class xBase * base; // r3
    }
}
// signature: TriggerPhantom::NotifyWeightThresholdEnter(float, float)
// Range: 0x80195270 -> 0x80195298
bool TriggerPhantom::NotifyWeightThresholdEnter() {
}
// signature: TriggerPhantom::NotifyWeightThresholdExit(float, float)
// Range: 0x801952A0 -> 0x801952C8
bool TriggerPhantom::NotifyWeightThresholdExit() {
}
// Range: 0x801952D0 -> 0x8019537C
void TriggerPhantom::CalculateAABB(class Vector4 & posAABBox /* r28 */, class Vector4 & scaleAABBox /* r29 */, class hkAabb & infoAABB /* r30 */) {
}
// signature: AabbPhantomCollector::AabbPhantomCollector(const hkAabb &, TriggerPhantom *, unsigned int)
// Range: 0x80195380 -> 0x801953D0
void * AabbPhantomCollector::AabbPhantomCollector(class AabbPhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__20AabbPhantomCollector;
}
// Range: 0x801953D0 -> 0x801956A4
void AabbPhantomCollector::addOverlappingCollidable(class AabbPhantomCollector * this /* r30 */, class hkpCollidable * c /* r31 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
    class hkpPhantom * phantom; // r0

    {
        // Range: 0x8019545C -> 0x80195568
        // Local variables
        class xBase * to; // r27
    }
    {
        // Range: 0x80195574 -> 0x80195690
        // Local variables
        class xBase * to; // r27
    }
}
// Range: 0x801956B0 -> 0x8019596C
void AabbPhantomCollector::removeOverlappingCollidable(class AabbPhantomCollector * this /* r31 */, class hkpCollidable * c /* r27 */) {
    // Local variables
    class hkpRigidBody * rb; // r0
    class hkpPhantom * phantom; // r0

    {
        // Range: 0x8019573C -> 0x8019583C
        // Local variables
        class xBase * to; // r28
    }
    {
        // Range: 0x80195848 -> 0x80195958
        // Local variables
        class xBase * to; // r28
    }
}
// signature: SimpleShapePhantomCollector::SimpleShapePhantomCollector(const hkpShape *, const hkTransform &, TriggerPhantom *, unsigned int)
// Range: 0x80195970 -> 0x801959C4
void * SimpleShapePhantomCollector::SimpleShapePhantomCollector(class SimpleShapePhantomCollector * this /* r30 */, class TriggerPhantom * ptr /* r31 */) {
    // References
    // -> struct {} __vt__27SimpleShapePhantomCollector;
}
// Range: 0x801959D0 -> 0x80195A18
void SimpleShapePhantomCollector::addOverlappingCollidable(class SimpleShapePhantomCollector * this /* r30 */, class hkpCollidable * c /* r31 */) {
}
// signature: SimpleShapePhantomCollector::removeOverlappingCollidable(hkpCollidable *)
// Range: 0x80195A20 -> 0x80195A24
void SimpleShapePhantomCollector::removeOverlappingCollidable() {
}
