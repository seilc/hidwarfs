/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCEntity.cpp
*/
class zNPCEntity_ModelUpdater g_npcEntityModelUpdater; // size: 0x10, address: 0x80753210
class xOGModelUpdater * g_npcEntityModelUpdaterPtr; // size: 0x4, address: 0x806BDAF4
// Range: 0x80103E30 -> 0x80103E74
void zNPCEntity_ModelUpdater::DoUpdate() {
}
// Range: 0x800EB0E0 -> 0x800EB138
void * zNPCBound::zNPCBound(class zNPCBound * this /* r31 */) {
    // References
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
}
// Range: 0x800EB140 -> 0x800EB194
float zNPCBound::GetBoundMinRadiusXZ(class zNPCBound * this /* r31 */) const {
    // Local variables
    float boundRadiusXZ; // f0
}
// Range: 0x800EB1A0 -> 0x800EB3C4
void zNPCBound::GetCapsuleLocal(class zNPCBound * this /* r28 */, class xVec3 & bottom /* r29 */, class xVec3 & top /* r30 */, float & r /* r31 */) {
    // Local variables
    enum eNPCEntityCollMainAxis axis; // r0
}
// signature: zNPCBound::GetCylinderLocal(xVec3 &, xVec3 &, float &)
// Range: 0x800EB3D0 -> 0x800EB5CC
void zNPCBound::GetCylinderLocal(class zNPCBound * this /* r29 */, class xVec3 & bottom /* r30 */, class xVec3 & top /* r31 */) {
    // Local variables
    enum eNPCEntityCollMainAxis axis; // r0
}
// signature: zNPCBound::GetModelBoundFromArticle(const World::xOGModel *, xVec3 &, xVec3 &)
// Range: 0x800EB5D0 -> 0x800EB774
bool zNPCBound::GetModelBoundFromArticle(class xVec3 & upper /* r31 */) {
    // Local variables
    class Model & model; // r0
    unsigned int numberOfRenderables; // r0
    class BroadBound mergedBound; // r1+0x8
    class Vector * lowerNG; // r0
    class Vector * upperNG; // r0
    bool initialized; // r30

    {
        // Range: 0x800EB614 -> 0x800EB730
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x800EB614 -> 0x800EB730
            // Local variables
            class BroadBound * curBound; // r29

            {
                // Range: 0x800EB628 -> 0x800EB658
                // Local variables
                enum NodeTypeEnum type; // r0
            }
        }
    }
}
// signature: zNPCBound::GetModelBoundFromCollMesh(const World::xOGModel *, xVec3 &, xVec3 &)
// Range: 0x800EB780 -> 0x800EB810
bool zNPCBound::GetModelBoundFromCollMesh() {
}
// Range: 0x800EB810 -> 0x800EBA74
void zNPCBound::Init(class zNPCBound * this /* r29 */, class xOGModel * modelInst /* r28 */, class NPCTemplate * parameters /* r30 */, class xVec3 * modelScale /* r31 */) {
    // Local variables
    class xVec3 lower; // r1+0x14
    class xVec3 upper; // r1+0x8
}
// signature: zNPCEntity::NPCBeforeAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800EBA80 -> 0x800EBAC4
void zNPCEntity::NPCBeforeAnimMatrices(class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r9
}
// signature: zNPCEntity::NPCAfterAnimMatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x800EBAD0 -> 0x800EBB3C
void zNPCEntity::NPCAfterAnimMatrices(class Matrix43 * skinMat /* r30 */, class xQuat * quat /* r31 */, class xVec3 * scale /* r11 */, class xVec3 * tran /* r0 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r10
}
// signature: zNPCEntity::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EBB40 -> 0x800EBB70
void zNPCEntity::EventWrapper(class xBase * from /* r9 */, class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// signature: zNPCEntity::zNPCEntity(World::EntityHandleBase *)
// Range: 0x800EBB70 -> 0x800EBBFC
void * zNPCEntity::zNPCEntity(class zNPCEntity * this /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__10zNPCEntity;
}
// signature: zNPCEntity::SetParameters(zNPCEntityParams *)
// Range: 0x800EBC00 -> 0x800EBC14
void zNPCEntity::SetParameters() {
}
// Range: 0x800EBC20 -> 0x800EBDD0
void zNPCEntity::SetupInstanceAnimTable(class zNPCEntity * this /* r25 */) {
    // Local variables
    class xAnimState * mainState1; // r0
    class xAnimState * mainState2; // r0
    class xAnimState * ourState; // r0
}
// Range: 0x800EBDD0 -> 0x800EC1A8
void zNPCEntity::Attached(class zNPCEntity * this /* r28 */, class zNPCStatus * npcStatus /* r29 */) {
    // Local variables
    class zNPCBase * ownerNPC; // r0
    class NPCAsset * npcAsset; // r0
    class CharacterAssets * characterAsset; // r25
    class xAnimTable * animTable; // r3

    {
        // Range: 0x800EBDF8 -> 0x800EBE18
        // Local variables
        unsigned int sizeIgnore; // r1+0x8
    }
    {
        // Range: 0x800EBE18 -> 0x800EBE7C
        // Local variables
        class EntityHandleBase * entHandle; // r0
        unsigned long long characterAssetID; // r24:r23

        {
            // Range: 0x800EBE24 -> 0x800EBE60
            // Local variables
            class NPCTemplate * templateAsset; // r0
        }
    }
    {
        // Range: 0x800EBFC8 -> 0x800EBFEC
        // Local variables
        class zCharacterAsset * npcCharacterAsset; // r0
    }
    {
        // Range: 0x800EC124 -> 0x800EC144
        // Local variables
        unsigned int i; // r5
    }
    {
        // Range: 0x800EC144 -> 0x800EC160
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class zGlobals globals;
    // -> static class zNPCManager gNPCManager;
    // -> class Factory factory;
    // -> class zNPCEntity_ModelUpdater g_npcEntityModelUpdater;
    // -> unsigned int mModelNameHash;
}
// Range: 0x800EC1B0 -> 0x800EC220
class xAnimTable * zNPCEntity::GetAnimTable() {
    // Local variables
    class xAnimTable * animTable; // r7

    // References
    // -> static class zNPCManager gNPCManager;
}
// Range: 0x800EC220 -> 0x800EC368
void zNPCEntity::Detached(class zNPCEntity * this /* r29 */, class zNPCStatus * npcStatus /* r30 */) {
    {
        // Range: 0x800EC23C -> 0x800EC270
        // Local variables
        class xVec3 orientation; // r1+0x8
    }
    {
        // Range: 0x800EC29C -> 0x800EC2C8
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x800EC2D4 -> 0x800EC304
        // Local variables
        unsigned int i; // r30
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800EC370 -> 0x800EC3C4
void zNPCEntity::Enable(class zNPCEntity * this /* r31 */) {
}
// Range: 0x800EC3D0 -> 0x800EC434
void zNPCEntity::Disable(class zNPCEntity * this /* r31 */) {
}
// Range: 0x800EC440 -> 0x800ECCF8
void zNPCEntity::EnableCollision(class zNPCEntity * this /* r28 */) {
    // Local variables
    class hkpShape * collisionShape; // r30
    unsigned int collisionFilter; // r29

    {
        // Range: 0x800EC4D0 -> 0x800EC564
        // Local variables
        float r; // r1+0x14
        class xVec3 top; // r1+0xE8
        class xVec3 bottom; // r1+0xF4
    }
    {
        // Range: 0x800EC568 -> 0x800EC5D4
        // Local variables
        float r; // f0
    }
    {
        // Range: 0x800EC5D8 -> 0x800EC66C
        // Local variables
        float r; // r1+0x10
        class xVec3 top; // r1+0xD0
        class xVec3 bottom; // r1+0xDC
    }
    {
        // Range: 0x800EC6EC -> 0x800ECC1C
        {
            // Range: 0x800EC6EC -> 0x800EC8DC
            // Local variables
            class hkpPropertyValue val; // r1+0x40
            class hkpRigidBody * body; // r25
            class hkpCharacterRigidBody * charRigidBody; // r0
            class hkpCharacterRigidBodyCinfo cinfo; // r1+0x1C0

            {
                // Range: 0x800EC8AC -> 0x800EC8DC
                // Local variables
                unsigned int i; // r25
            }
        }
        {
            // Range: 0x800EC8DC -> 0x800ECB44
            // Local variables
            class hkpPropertyValue val; // r1+0x38
            class hkpCharacterProxyCinfo cpci; // r1+0x140

            {
                // Range: 0x800ECB0C -> 0x800ECB44
                // Local variables
                unsigned int i; // r25
            }
        }
        {
            // Range: 0x800ECB44 -> 0x800ECC1C
            {
                // Range: 0x800ECB50 -> 0x800ECC1C
                // Local variables
                class hkTransform rigidBodySystemTransform; // r1+0x100
            }
        }
    }
    {
        // Range: 0x800ECC20 -> 0x800ECCD4
        // Local variables
        class hkpPropertyValue val; // r1+0x30
    }

    // References
    // -> class hkTransform hkTransformIdentity;
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x800ECD70 -> 0x800ECE14
void zNPCEntity::DisableCollision(class zNPCEntity * this /* r30 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r31
    class hkpCharacterRigidBody * characterRigidBody; // r0

    {
        // Range: 0x800ECDBC -> 0x800ECDD8
        // Local variables
        class hkpRigidBody * rigidBody; // r31
    }
}
// signature: zNPCEntity::RegisterCollisionListener(zNPCRigidBodyCollisionListener *)
// Range: 0x800ECE20 -> 0x800ECE90
void zNPCEntity::RegisterCollisionListener() {
    // Local variables
    bool registered; // r7

    {
        // Range: 0x800ECE28 -> 0x800ECE50
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x800ECE5C -> 0x800ECE8C
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCEntity::RegisterCollisionListener(zNPCCollisionListener *)
// Range: 0x800ECE90 -> 0x800ECF00
void zNPCEntity::RegisterCollisionListener() {
    // Local variables
    bool registered; // r7

    {
        // Range: 0x800ECE98 -> 0x800ECEC0
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x800ECECC -> 0x800ECEFC
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zNPCEntity::UnregisterCollisionListener(zNPCCollisionListener *)
// Range: 0x800ECF00 -> 0x800ECF34
void zNPCEntity::UnregisterCollisionListener() {
    {
        // Range: 0x800ECF04 -> 0x800ECF30
        // Local variables
        unsigned int i; // r7
    }
}
// signature: zNPCEntity::UnregisterCollisionListener(zNPCRigidBodyCollisionListener *)
// Range: 0x800ECF40 -> 0x800ECF74
void zNPCEntity::UnregisterCollisionListener() {
    {
        // Range: 0x800ECF44 -> 0x800ECF70
        // Local variables
        unsigned int i; // r7
    }
}
// Range: 0x800ECF80 -> 0x800ECFE4
void zNPCEntity::_AddCollisionListener(class zNPCCollisionListener * collList /* r1+0x8 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r31
}
// Range: 0x800ECFF0 -> 0x800ED058
void zNPCEntity::_AddCollisionListener(class zNPCRigidBodyCollisionListener * collList /* r1+0x8 */) {
    // Local variables
    class hkpCharacterRigidBody * charRigidBody; // r0

    {
        // Range: 0x800ED00C -> 0x800ED044
        // Local variables
        class hkpRigidBody * rigidBody; // r31
    }
}
// Range: 0x800ED0B0 -> 0x800ED114
void zNPCEntity::_RemoveCollisionListener(class zNPCCollisionListener * collList /* r1+0x8 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r31
}
// Range: 0x800ED120 -> 0x800ED180
void zNPCEntity::_RemoveCollisionListener(class zNPCRigidBodyCollisionListener * collList /* r1+0x8 */) {
    // Local variables
    class hkpCharacterRigidBody * charRigidBody; // r0

    {
        // Range: 0x800ED13C -> 0x800ED16C
        // Local variables
        class hkpRigidBody * rigidBody; // r31
    }
}
// signature: zNPCEntity::Reset(const zNPCStatus *)
// Range: 0x800ED180 -> 0x800ED31C
void zNPCEntity::Reset(class zNPCEntity * this /* r31 */) {
    // Local variables
    float yaw; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
}
// signature: zNPCEntity::_InitializeBounds(xVec3 &)
// Range: 0x800ED320 -> 0x800ED33C
void zNPCEntity::_InitializeBounds() {
}
// signature: zNPCEntity::GetBoneWorldPosition(int, xVec3 &)
// Range: 0x800ED340 -> 0x800ED354
void zNPCEntity::GetBoneWorldPosition(int bone /* r0 */) {
}
// Range: 0x800ED360 -> 0x800ED440
void zNPCEntity::RenderModelInstance(class zNPCEntity * this /* r30 */) {
    // Local variables
    class xMat4x3 * renderMat; // r31
    class xMat4x3 scaledMat; // r1+0x78
    class xMat4x3 matWithRenderExtraMat; // r1+0x38
    class Matrix43 ngMatrix; // r1+0x8
}
// signature: zNPCEntity::SetAnimState(const unsigned int, float, const char *)
// Range: 0x800ED440 -> 0x800ED538
void zNPCEntity::SetAnimState(class zNPCEntity * this /* r29 */, unsigned int new_stateID /* r30 */, float blend /* f31 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// Range: 0x800ED540 -> 0x800ED60C
void zNPCEntity::SetInstanceAnimState(class zNPCEntity * this /* r29 */, unsigned int new_stateID /* r30 */, float blend /* f31 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// signature: zNPCEntity::DoesAnimExist(const char *)
// Range: 0x800ED610 -> 0x800ED6A0
bool zNPCEntity::DoesAnimExist(class zNPCEntity * this /* r31 */) {
    // Local variables
    unsigned int animID; // r0
    class xAnimState * animState; // r0
}
// signature: zNPCEntity::DoesAnimExist(const unsigned int)
// Range: 0x800ED6A0 -> 0x800ED70C
bool zNPCEntity::DoesAnimExist() {
    // Local variables
    class xAnimState * animState; // r0
}
// signature: zNPCEntity::SetAnimState(const unsigned int, float, float, const char *)
// Range: 0x800ED710 -> 0x800ED820
void zNPCEntity::SetAnimState(class zNPCEntity * this /* r29 */, unsigned int new_stateID /* r30 */, float blend /* f30 */, float dest_time /* f31 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// signature: zNPCEntity::SetCurAnimLerp0(float)
// Range: 0x800ED820 -> 0x800ED850
void zNPCEntity::SetCurAnimLerp0() {
}
// signature: zNPCEntity::SetCurAnimLerp1(float)
// Range: 0x800ED850 -> 0x800ED880
void zNPCEntity::SetCurAnimLerp1() {
}
// Range: 0x800ED880 -> 0x800ED8C0
unsigned int zNPCEntity::GetCurAnimID() {
}
// signature: zNPCEntity::SetCurAnimSpeed(float)
// Range: 0x800ED8C0 -> 0x800ED8F0
void zNPCEntity::SetCurAnimSpeed() {
}
// Range: 0x800ED8F0 -> 0x800ED930
void zNPCEntity::ClearCurAnimLoopCount() {
}
// Range: 0x800ED930 -> 0x800ED970
unsigned int zNPCEntity::GetCurAnimLoopCount() {
}
// signature: zNPCEntity::IsAnimationStopped(unsigned int)
// Range: 0x800ED970 -> 0x800EDA18
bool zNPCEntity::IsAnimationStopped() {
}
// Range: 0x800EDA20 -> 0x800EDBF8
void TriggerIdentifyingPointCollectorNoShrapnelOrPuck::addCdPoint(class TriggerIdentifyingPointCollectorNoShrapnelOrPuck * this /* r26 */, class hkpCdPoint & event /* r27 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x800EDA54 -> 0x800EDBD0
        // Local variables
        class xBase * bodyOwner; // r28

        {
            // Range: 0x800EDAF4 -> 0x800EDBD0
            // Local variables
            class hkpPhantom * otherPhantom; // r0
            class hkpCollidable * otherRootCollidable; // r0

            {
                // Range: 0x800EDB00 -> 0x800EDBD0
                // Local variables
                class xBase * otherPhantomOwner; // r0

                {
                    // Range: 0x800EDB18 -> 0x800EDBD0
                    // Local variables
                    class hkVector4 havokVelocity; // r1+0x10
                    class hkVector4 havokNormal; // r1+0x20
                    class hkVector4 havokPosition; // r1+0x30
                    class ProjectileCollisionDetails collDetails; // r1+0x70
                    class zProjectile * projectile; // r28
                }
            }
        }
    }
}
// Range: 0x800EDC40 -> 0x800EDC60
void TriggerIdentifyingPointCollectorNoShrapnelOrPuck::reset() {
}
// Range: 0x800EDC60 -> 0x800EDF5C
void zNPCEntity::_EvalAnimPhysics(class zNPCEntity * this /* r28 */, class xVec3 & dTran /* r29 */, float & dYaw /* r30 */, class xQuat & dQuat /* r31 */) {
    // Local variables
    float trans[3]; // r1+0x50
    float heading; // r1+0x8
    float quat[4]; // r1+0x40
    class ComboAnimBlobAssetV2 * comboAnimV2; // r31
    class xQuat temp; // r1+0x30

    {
        // Range: 0x800EDEB8 -> 0x800EDF44
        // Local variables
        class xQuat newQuat; // r1+0x10
        class xQuat dQuat; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// Range: 0x800EDF60 -> 0x800EE08C
void zNPCEntity::_ApplyAnimPhysicsRotation(class zNPCEntity * this /* r30 */, float dYaw /* r1+0x8 */, class xQuat & dQuat /* r31 */) {
    {
        // Range: 0x800EDF68 -> 0x800EDFF8
        // Local variables
        class xVec3 npcHeading; // r1+0x20
    }
    {
        // Range: 0x800EDFF8 -> 0x800EE074
        // Local variables
        class xQuat currentQuat; // r1+0x10
    }
}
// Range: 0x800EE090 -> 0x800EE14C
class xVec3 zNPCEntity::_ApplyAnimPhysicsTranslationToVel(class xVec3 & dTran /* r30 */, float dt /* f31 */, class xVec3 & vel /* r31 */) {
    // Local variables
    class xVec3 dVel; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800EE150 -> 0x800EE4AC
void zNPCEntity::_UpdateCharacterProxy(class zNPCEntity * this /* r30 */, class xVec3 & vel /* r26 */, float dt /* f31 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r31
    class xVec3 dTran; // r1+0x80
    float dYaw; // r1+0x10
    class xQuat dQuat; // r1+0x70
    class xVec3 dVel; // r1+0x60
    class hkVector4 velHk; // r1+0x50

    {
        // Range: 0x800EE260 -> 0x800EE294
        // Local variables
        class TriggerIdentifyingPointCollectorNoShrapnelOrPuck startCollector; // r1+0x100
        class TriggerIdentifyingPointCollectorNoShrapnelOrPuck castCollector; // r1+0x2D0
    }
    {
        // Range: 0x800EE314 -> 0x800EE348
        // Local variables
        class zCombatDamageInfo info; // r1+0xC0
    }
    {
        // Range: 0x800EE3AC -> 0x800EE488
        // Local variables
        class hkVector4 right; // r1+0x40
        class hkVector4 & col2; // r26
        class hkVector4 & col1; // r27
        class hkVector4 & col0; // r28
        class hkRotation rotation; // r1+0x90
    }

    // References
    // -> class xVec3 m_Null;
    // -> float dt;
}
// Range: 0x800EE590 -> 0x800EE6A4
void zNPCEntity::PreUpdate(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800EE5B0 -> 0x800EE668
        // Local variables
        class hkpCharacterRigidBody * charRigidBody; // r3
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800EE6B0 -> 0x800EE7E0
void zNPCEntity::UpdateWithVelocity(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800EE700 -> 0x800EE794
        // Local variables
        class xQuat dQuat; // r1+0x28
        float dYaw; // r1+0x8
        class xVec3 dTran; // r1+0x38
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800EE7E0 -> 0x800EE9AC
void zNPCEntity::UpdateWithTeleport(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800EE83C -> 0x800EE8D0
        // Local variables
        class xQuat dQuat; // r1+0x70
        float dYaw; // r1+0x14
        class xVec3 dTran; // r1+0x80
    }
    {
        // Range: 0x800EE8D4 -> 0x800EE98C
        // Local variables
        class hkpCharacterProxy * proxy; // r0
        class hkVector4 posHk; // r1+0x40
        class xQuat dQuat; // r1+0x50
        float dYaw; // r1+0x10
        class xVec3 dTran; // r1+0x60

        {
            // Range: 0x800EE96C -> 0x800EE98C
            // Local variables
            class hkpCharacterRigidBody * characterRigidBody; // r0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800EE9B0 -> 0x800EEC10
void zNPCEntity::PostUpdate(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800EEA78 -> 0x800EEB0C
        // Local variables
        class hkpRigidBody * body; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800EEC10 -> 0x800EEC44
void zNPCEntity::Paused() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800EEC50 -> 0x800EEC70
void zNPCEntity::Resumed() {
}
// signature: zNPCEntity::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EEC70 -> 0x800EED5C
bool zNPCEntity::SystemEvent() {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x800EED60 -> 0x800EEDAC
void zNPCEntity::Hide(class zNPCEntity * this /* r31 */) {
}
// Range: 0x800EEDB0 -> 0x800EEE14
void zNPCEntity::Show(class zNPCEntity * this /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
}
// Range: 0x800EEE20 -> 0x800EEE7C
void zNPCEntity::KillVelocity(class zNPCEntity * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800EEE80 -> 0x800EEEEC
void zNPCEntity::SetFrameFromHeading(class xVec3 & heading /* r30 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800EEEF0 -> 0x800EEF60
void zNPCEntity::SetFrameFromYaw(class zNPCEntity * this /* r31 */, float yaw /* f31 */) {
    // Local variables
    class xVec3 heading; // r1+0x8
}
// Range: 0x800EEF60 -> 0x800EEFE4
void zNPCEntity::Teleport(class zNPCEntity * this /* r30 */, class xMat4x3 & inMat /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800EEFF0 -> 0x800EF074
void zNPCEntity::TeleportComplete(class zNPCEntity * this /* r30 */, class xMat4x3 & inMat /* r31 */) {
    // Local variables
    class hkVector4 hkPos; // r1+0x10
}
// Range: 0x800EF080 -> 0x800EF12C
void zNPCEntity::CopyFrame(class zNPCEntity * this /* r29 */, class xEntFrame * frame /* r30 */) {
}
// Range: 0x800EF130 -> 0x800EF2A0
void zNPCEntity::GetAABBCenter(class zNPCEntity * this /* r30 */, class xVec3 & center /* r31 */) const {
    {
        // Range: 0x800EF158 -> 0x800EF27C
        // Local variables
        class hkVector4 aabbCenter; // r1+0x10
        class hkAabb aabb; // r1+0x20
        class hkTransform xform; // r1+0x40
    }
}
// Range: 0x800EF2F0 -> 0x800EF3DC
void zNPCEntity::UpdateRender(class zNPCEntity * this /* r30 */) {
    // Local variables
    class xMat4x3 * renderMat; // r31
    class xMat4x3 scaledMat; // r1+0x78
    class xMat4x3 modifiedRenderMat; // r1+0x38
    class Matrix43 ngRenderMat; // r1+0x8
}
// Range: 0x800EF3E0 -> 0x800EF410
void zNPCEntity::ResetDamageColor() {
}
