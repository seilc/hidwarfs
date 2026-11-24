/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCEntity.cpp
*/
class zNPCEntity_ModelUpdater g_npcEntityModelUpdater; // size: 0x10, address: 0x80822DE8
class xOGModelUpdater * g_npcEntityModelUpdaterPtr; // size: 0x4, address: 0x807AF8D4
// Range: 0x801F3010 -> 0x801F305C
void zNPCEntity_ModelUpdater::DoUpdate() {
}
// signature: zNPCBound::GetCapsuleLocal(xVec3 &, xVec3 &, float &)
// Range: 0x801CB130 -> 0x801CB364
void zNPCBound::GetCapsuleLocal() {
    // Local variables
    enum eNPCEntityCollMainAxis axis; // r0
}
// signature: zNPCBound::GetCylinderLocal(xVec3 &, xVec3 &, float &)
// Range: 0x801CB370 -> 0x801CB580
void zNPCBound::GetCylinderLocal() {
    // Local variables
    enum eNPCEntityCollMainAxis axis; // r0
}
// signature: zNPCBound::GetModelBoundFromArticle(const World::xOGModel *, xVec3 &, xVec3 &)
// Range: 0x801CB580 -> 0x801CB724
bool zNPCBound::GetModelBoundFromArticle() {
    // Local variables
    class Model & model; // r0
    unsigned int numberOfRenderables; // r0
    class BroadBound mergedBound; // r1+0x8
    class Vector * lowerNG; // r0
    class Vector * upperNG; // r0
    bool initialized; // r30

    {
        // Range: 0x801CB5BC -> 0x801CB6D4
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x801CB5BC -> 0x801CB6D4
            // Local variables
            class BroadBound * curBound; // r29

            {
                // Range: 0x801CB5D4 -> 0x801CB604
                // Local variables
                enum NodeTypeEnum type; // r0
            }
        }
    }
}
// signature: zNPCBound::GetModelBoundFromCollMesh(const World::xOGModel *, xVec3 &, xVec3 &)
// Range: 0x801CB730 -> 0x801CB7C0
bool zNPCBound::GetModelBoundFromCollMesh() {
}
// Range: 0x801CB7C0 -> 0x801CBAB8
void zNPCBound::Init(class zNPCBound * this /* r29 */, class xOGModel * modelInst /* r28 */, class NPCTemplate * parameters /* r30 */, class xVec3 * modelScale /* r31 */) {
    // Local variables
    class xVec3 lower; // r1+0x14
    class xVec3 upper; // r1+0x8
}
// signature: zNPCEntity::NPCBeforeAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801CBAC0 -> 0x801CBB04
void zNPCEntity::NPCBeforeAnimMatrices(class xQuat * quat /* r11 */, class xVec3 * scale /* r10 */, class xVec3 * tran /* r0 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r9
}
// signature: zNPCEntity::NPCAfterAnimMatrices(xAnimPlay *, Math::Matrix43 *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801CBB10 -> 0x801CBB84
void zNPCEntity::NPCAfterAnimMatrices(class Matrix43 * skinMat /* r30 */, class xQuat * quat /* r31 */, class xVec3 * scale /* r11 */, class xVec3 * tran /* r0 */) {
    // Local variables
    class zNPCEntity * npcEntity; // r10
}
// signature: zNPCEntity::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801CBB90 -> 0x801CBBC0
void zNPCEntity::EventWrapper(class xBase * from /* r9 */, class xBase * to /* r8 */, unsigned int to_event /* r0 */) {
}
// signature: zNPCEntity::SetParameters(zNPCEntityParams *)
// Range: 0x801CBBC0 -> 0x801CBBD4
void zNPCEntity::SetParameters() {
}
// Range: 0x801CBBE0 -> 0x801CC5A4
void zNPCEntity::Attached(class zNPCEntity * this /* r24 */, class zNPCStatus * npcStatus /* r25 */) {
    // Local variables
    class zNPCBase * ownerNPC; // r0
    class NPCAsset * npcAsset; // r0
    class CharacterAssets * characterAsset; // r26
    class xAnimTable * animTable; // r5

    {
        // Range: 0x801CBC08 -> 0x801CBC28
        // Local variables
        unsigned int sizeIgnore; // r1+0x30
    }
    {
        // Range: 0x801CBC28 -> 0x801CBC8C
        // Local variables
        class EntityHandleBase * entHandle; // r0
        unsigned long long characterAssetID; // r29:r30

        {
            // Range: 0x801CBC34 -> 0x801CBC70
            // Local variables
            class NPCTemplate * templateAsset; // r0
        }
    }
    {
        // Range: 0x801CC0C0 -> 0x801CC120
        // Local variables
        class zCharacterAsset * npcCharacterAsset; // r0
    }
    {
        // Range: 0x801CC4D0 -> 0x801CC4D0
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> class zGlobals globals;
    // -> static class zNPCManager gNPCManager;
    // -> class zFactory factory;
    // -> class zNPCEntity_ModelUpdater g_npcEntityModelUpdater;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> unsigned int mModelNameHash;
}
// Range: 0x801CC5B0 -> 0x801CC8EC
void zNPCEntity::Detached(class zNPCEntity * this /* r29 */, class zNPCStatus * npcStatus /* r25 */) {
    {
        // Range: 0x801CC5EC -> 0x801CC638
        // Local variables
        class xVec3 orientation; // r1+0x14
    }
    {
        // Range: 0x801CC690 -> 0x801CC6F8
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class zFactory factory;
    // -> class Scene * primaryScene;
}
// Range: 0x801CC8F0 -> 0x801CD00C
void zNPCEntity::EnableCollision(class zNPCEntity * this /* r30 */) {
    // Local variables
    class hkpShape * collisionShape; // r31

    {
        // Range: 0x801CC97C -> 0x801CCA08
        // Local variables
        float r; // r1+0x14
        class xVec3 top; // r1+0xD8
        class xVec3 bottom; // r1+0xE4
    }
    {
        // Range: 0x801CCA0C -> 0x801CCA78
        // Local variables
        float r; // f0
    }
    {
        // Range: 0x801CCA7C -> 0x801CCB10
        // Local variables
        float r; // r1+0x10
        class xVec3 top; // r1+0xC0
        class xVec3 bottom; // r1+0xCC
    }
    {
        // Range: 0x801CCB14 -> 0x801CCB54
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r3
        class ModelPrototypeEntity * proto; // r0
    }
    {
        // Range: 0x801CCB78 -> 0x801CCF2C
        // Local variables
        class ModelPrototypeEntity * proto; // r0
        class hkpPropertyValue val; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0x130
        unsigned int collisionFilter; // r29

        {
            // Range: 0x801CCDA0 -> 0x801CCE0C
            // Local variables
            unsigned int i; // r29
        }
        {
            // Range: 0x801CCE24 -> 0x801CCF2C
            // Local variables
            class CollisionMeshBlobEntity * collMesh; // r28

            {
                // Range: 0x801CCE30 -> 0x801CCF2C
                // Local variables
                class hkTransform rigidBodySystemTransform; // r1+0xF0
            }
        }
    }
    {
        // Range: 0x801CCF30 -> 0x801CCFE0
        // Local variables
        class hkpPropertyValue val; // r1+0x28
    }

    // References
    // -> class hkTransform hkTransformIdentity;
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCEntity::RegisterCollisionListener(zNPCCollisionListener *)
// Range: 0x801CD080 -> 0x801CD17C
void zNPCEntity::RegisterCollisionListener() {
    // Local variables
    bool registered; // r6

    {
        // Range: 0x801CD080 -> 0x801CD0D4
        // Local variables
        unsigned int i; // r0
    }
    {
        // Range: 0x801CD0E4 -> 0x801CD118
        // Local variables
        unsigned int i; // r6
    }
}
// signature: zNPCEntity::Reset(const zNPCStatus *)
// Range: 0x801CD180 -> 0x801CDA1C
void zNPCEntity::Reset(class zNPCEntity * this /* r30 */) {
    // Local variables
    float yaw; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Ones;
    // -> class xVec3 m_Null;
}
// Range: 0x801CDA20 -> 0x801CE814
void zNPCEntity::RenderModelInstance(class zNPCEntity * this /* r20 */) {
    // Local variables
    class xMat4x3 * renderMat; // r19
    class xMat4x3 scaledMat; // r1+0x90
    class xMat4x3 matWithRenderExtraMat; // r1+0x50
    class Matrix43 ngMatrix; // r1+0x20

    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: zNPCEntity::SetAnimState(const unsigned int, float, float, const char *)
// Range: 0x801CE820 -> 0x801CE914
void zNPCEntity::SetAnimState(class zNPCEntity * this /* r29 */, unsigned int new_stateID /* r30 */, float blend /* f30 */, float dest_time /* f31 */) {
    // Local variables
    class xAnimTransition * transition; // r31
}
// signature: zNPCEntity::_EvalAnimPhysics(xVec3 &, float &, xQuat &)
// Range: 0x801CE920 -> 0x801CF488
void zNPCEntity::_EvalAnimPhysics(class zNPCEntity * this /* r28 */, class xVec3 & dTran /* r29 */, float & dYaw /* r30 */) {
    // Local variables
    float trans[3]; // r1+0x88
    float quat[4]; // r1+0x78
    class ComboAnimBlobAssetV2 * comboAnimV2; // r31
    class xQuat temp; // r1+0x68

    {
        // Range: 0x801CF3A8 -> 0x801CF440
        // Local variables
        class xQuat newQuat; // r1+0x48
        class xQuat dQuat; // r1+0x58
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// Range: 0x801CF490 -> 0x801CF9EC
void zNPCEntity::_UpdateCharacterProxy(class zNPCEntity * this /* r30 */, class xVec3 & vel /* r31 */, float dt /* f28 */) {
    // Local variables
    class xVec3 dTran; // r1+0xB0
    float dYaw; // r1+0x10
    class xQuat dQuat; // r1+0xA0
    class xVec3 dVel; // r1+0x90
    class hkVector4 velHk; // r1+0x80

    {
        // Range: 0x801CF85C -> 0x801CF9A8
        // Local variables
        class hkVector4 right; // r1+0x70
        class hkVector4 & col2; // r10
        class hkVector4 & col1; // r9
        class hkVector4 & col0; // r31
        class hkRotation rotation; // r1+0xC0
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zNPCEntity::PreUpdate(float)
// Range: 0x801CF9F0 -> 0x801CFB90
void zNPCEntity::PreUpdate() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801CFB90 -> 0x801CFE54
void zNPCEntity::UpdateWithVelocity(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801CFBEC -> 0x801CFDFC
        // Local variables
        class xQuat dQuat; // r1+0x48
        float dYaw; // r1+0x8
        class xVec3 dTran; // r1+0x58
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class zGlobals globals;
}
// Range: 0x801CFE60 -> 0x801D032C
void zNPCEntity::UpdateWithTeleport(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801CFED4 -> 0x801D00E8
        // Local variables
        class xQuat dQuat; // r1+0xB0
        float dYaw; // r1+0x14
        class xVec3 dTran; // r1+0xC0
    }
    {
        // Range: 0x801D00EC -> 0x801D02FC
        // Local variables
        class hkVector4 posHk; // r1+0x80
        class xVec3 * pos; // r0
        class xQuat dQuat; // r1+0x90
        float dYaw; // r1+0x10
        class xVec3 dTran; // r1+0xA0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class zGlobals globals;
}
// Range: 0x801D0330 -> 0x801D05DC
void zNPCEntity::PostUpdate(class zNPCEntity * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801D04EC -> 0x801D05A4
        // Local variables
        class hkpRigidBody * body; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801D05E0 -> 0x801D0720
void zNPCEntity::Paused() {
    // References
    // -> class Scene * primaryScene;
    // -> class zGlobals globals;
}
// Range: 0x801D0720 -> 0x801D07BC
void zNPCEntity::Resumed() {
    // References
    // -> class Scene * primaryScene;
}
// signature: zNPCEntity::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801D07C0 -> 0x801D09E0
bool zNPCEntity::SystemEvent(class zNPCEntity * this /* r30 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zNPCEntity::Teleport(const xMat4x3 &)
// Range: 0x801D09E0 -> 0x801D0B28
void zNPCEntity::Teleport() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801D0B30 -> 0x801D0CD8
void zNPCEntity::GetAABBCenter(class xVec3 & center /* r31 */) const {
    {
        // Range: 0x801D0B44 -> 0x801D0C28
        // Local variables
        class hkVector4 aabbCenter; // r1+0x20
        class hkAabb aabb; // r1+0x30
        class hkTransform xform; // r1+0x50
    }
}
// Range: 0x801D0CE0 -> 0x801D1AE8
void zNPCEntity::UpdateRender(class zNPCEntity * this /* r20 */) {
    // Local variables
    class xMat4x3 * renderMat; // r19
    class xMat4x3 scaledMat; // r1+0x90
    class xMat4x3 modifiedRenderMat; // r1+0x50
    class Matrix43 ngRenderMat; // r1+0x20

    // References
    // -> class Renderable3DTransform g_identity;
}
