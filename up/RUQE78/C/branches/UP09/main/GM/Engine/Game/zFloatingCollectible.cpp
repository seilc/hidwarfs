/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFloatingCollectible.cpp
*/
class zFXSpawn * balloonPopScriptAsset; // size: 0x4, address: 0x8081D7F8
class zFXSpawn * balloonPopCheatScriptAsset; // size: 0x4, address: 0x8081D7FC
static class SystemInstance * sGenericIdleFX; // size: 0x4, address: 0x8081D800
// signature: @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80158320 -> 0x8015833C
static void @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(class xBase * from /* r0 */) {
}
// signature: zCollectibleCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x801583C0 -> 0x801583C4
void zCollectibleCollisionListener::contactPointAddedCallback() {
}
// signature: zCollectibleCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x801583D0 -> 0x801583D4
void zCollectibleCollisionListener::contactPointConfirmedCallback() {
}
// signature: zCollectibleCollisionListener::entityAddedCallback(hkpEntity *)
// Range: 0x801583E0 -> 0x801583E4
void zCollectibleCollisionListener::entityAddedCallback() {
}
// signature: zCollectibleCollisionListener::contactProcessCallback(hkpContactProcessEvent &)
// Range: 0x801583F0 -> 0x80158470
void zCollectibleCollisionListener::contactProcessCallback() {
    // Local variables
    class xBase * baseA; // r5
    class xBase * baseB; // r6
}
// Range: 0x80158490 -> 0x8015858C
void zFloatingCollectible::Init(class zFloatingCollectible * this /* r30 */, class zFloatingCollectibleAsset * asset /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80158590 -> 0x801593F8
void zFloatingCollectible::LoadModel(class zFloatingCollectible * this /* r31 */) {
    // Local variables
    unsigned int hash; // r28
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x801587BC -> 0x80158D48
        // Local variables
        enum eShadow castShadow; // r25
        class ModelInstanceAsset * modelInstanceAsset; // r27

        {
            // Range: 0x801587CC -> 0x80158AA8
            // Local variables
            class ModelInstanceAsset * tmpAsset; // r27
        }
    }
    {
        // Range: 0x80158D48 -> 0x801592C8
        // Local variables
        enum eShadow castShadow; // r25
        class ModelInstanceAsset * modelInstanceAsset; // r27

        {
            // Range: 0x80158D54 -> 0x80159028
            // Local variables
            class ModelInstanceAsset * tmpAsset; // r27
        }
    }
    {
        // Range: 0x80159380 -> 0x801593E0
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0

        {
            // Range: 0x80159388 -> 0x8015939C
            // Local variables
            unsigned long long modelID; // r0:r0
        }
        {
            // Range: 0x8015939C -> 0x801593E0
            // Local variables
            class dxTriMeshData * triMeshData; // r0
        }
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80159400 -> 0x801594C8
void zFloatingCollectible::Setup(class zFloatingCollectible * this /* r30 */) {
    // References
    // -> class zFXSpawn * balloonPopCheatScriptAsset;
    // -> class zFXSpawn * balloonPopScriptAsset;
}
// Range: 0x80159590 -> 0x8015A0C0
void zFloatingCollectible::Reset(class zFloatingCollectible * this /* r27 */, bool sceneStart /* r29 */) {
    {
        // Range: 0x80159970 -> 0x801599A8
        // Local variables
        class xOGEntity * drivingObject; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zGlobals globals;
}
// Range: 0x8015A0C0 -> 0x8015A12C
void zFloatingCollectible::DebugReset(class zFloatingCollectible * this /* r29 */) {
}
// Range: 0x8015A130 -> 0x8015B0B4
void zFloatingCollectible::Render() {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8015B0C0 -> 0x8015B0D0
void zFloatingCollectible::SceneExit() {
}
// Range: 0x8015B0D0 -> 0x8015B1B0
void zFloatingCollectible::Free(class zFloatingCollectible * this /* r30 */) {
    // References
    // -> bool sInvalidSceneState;
}
// Range: 0x8015B1B0 -> 0x8015B654
void zFloatingCollectible::Collect(class zFloatingCollectible * this /* r29 */) {
    // Local variables
    enum eUPFloatingItemType type; // r25

    {
        // Range: 0x8015B1C4 -> 0x8015B328
        // Local variables
        float randType; // f0
    }

    // References
    // -> class Scene * primaryScene;
    // -> bool sInvalidSceneState;
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
}
// signature: zFloatingCollectible::Update(float)
// Range: 0x8015B660 -> 0x8015B6F4
void zFloatingCollectible::Update(class zFloatingCollectible * this /* r30 */) {
    // Local variables
    bool needUpdateRender; // r31
}
// Range: 0x8015B700 -> 0x8015BE40
void zFloatingCollectible::UpdateIdle(class zFloatingCollectible * this /* r27 */, float dt /* f31 */) {
    // Local variables
    float offset; // f1

    {
        // Range: 0x8015B7B8 -> 0x8015B860
        // Local variables
        class xMat4x3 emitMat; // r1+0x58
        class xMat4x3 offsetMat; // r1+0x98
    }
    {
        // Range: 0x8015B90C -> 0x8015BE08
        // Local variables
        class xVec3 pos; // r1+0x48
        class xEnt * closestPlayer; // r29
        float closestDist2; // f31
        bool canCollect; // r30

        {
            // Range: 0x8015B918 -> 0x8015BAB0
            // Local variables
            int ii; // r28

            {
                // Range: 0x8015B918 -> 0x8015BA48
                // Local variables
                float dist2; // f28
            }
            {
                // Range: 0x8015BA48 -> 0x8015BAB0
                // Local variables
                float dist2; // f0
            }
        }
    }

    // References
    // -> class generator_data * sInstanceDataPool;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisY;
    // -> static class SystemInstance * sGenericIdleFX;
}
// Range: 0x8015BE50 -> 0x8015C3C4
void zFloatingCollectible::UpdateToBeCollected(class zFloatingCollectible * this /* r30 */, float dt /* f30 */) {
    // Local variables
    class xVec3 oldPos; // r1+0x58
    class xVec3 & collectorPos; // r0
    class xVec3 & at; // r0
    class xVec3 targetVec; // r1+0x4C
    float diffAngle; // f0
    float prevDiffAngle; // f0

    {
        // Range: 0x8015C038 -> 0x8015C10C
        {
            // Range: 0x8015C070 -> 0x8015C10C
            {
                // Range: 0x8015C0A8 -> 0x8015C10C
                // Local variables
                class xVec3 bPos; // r1+0x40
            }
        }
    }
    {
        // Range: 0x8015C10C -> 0x8015C314
        // Local variables
        float yTrans; // f6
        float yDiff; // f1
        float xzOffset; // f5
        float xzDist; // f0
        float yTransAmt; // r31
        float xzTransAmt; // f5
        float scaleFactor; // f5

        {
            // Range: 0x8015C148 -> 0x8015C1B8
            // Local variables
            float rotAngle; // f28
        }
    }

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zFXSpawn * balloonPopScriptAsset;
    // -> class zFXSpawn * balloonPopCheatScriptAsset;
    // -> class zGameCheats gGameCheats;
}
// signature: zFloatingCollectible::SetPosition(xVec3)
// Range: 0x8015C430 -> 0x8015C470
void zFloatingCollectible::SetPosition() {
}
// signature: zFloatingCollectible::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8015C470 -> 0x8015D124
void zFloatingCollectible::HandleEvent(class zFloatingCollectible * this /* r27 */, class EventAny * params /* r26 */) {
    {
        // Range: 0x8015C594 -> 0x8015C668
        {
            // Range: 0x8015C5CC -> 0x8015C668
            {
                // Range: 0x8015C604 -> 0x8015C668
                // Local variables
                class xVec3 bPos; // r1+0x34
            }
        }
    }
    {
        // Range: 0x8015D018 -> 0x8015D0D0
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }

    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zFXSpawn * balloonPopScriptAsset;
    // -> class zFXSpawn * balloonPopCheatScriptAsset;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x8015D130 -> 0x8015D190
void zFloatingCollectible::Save(class zFloatingCollectible * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x8015D190 -> 0x8015D5A0
void zFloatingCollectible::Load(class zFloatingCollectible * this /* r30 */, class xSerial * s /* r26 */) {
    // Local variables
    int b; // r1+0x10

    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zFloatingCollectible::SetVisible(bool, bool)
// Range: 0x8015D5A0 -> 0x8015D980
void zFloatingCollectible::SetVisible(class zFloatingCollectible * this /* r30 */) {
    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x8015D9B0 -> 0x8015DA8C
class Entity * Sext::zFloatingCollectibleAsset::Create(class EntityHandleBase * handle /* r29 */, class zFloatingCollectibleAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__20zFloatingCollectible;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zFloatingCollectibleUpdate(float)
// Range: 0x8015DA90 -> 0x8015DB14
void zFloatingCollectibleUpdate() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8015DB20 -> 0x8015DCE0
void zFloatingCollectibleSceneSetup() {
    // Local variables
    class zFXParticleSystem * system; // r31

    // References
    // -> class xMat4x3 g_I3;
    // -> class generator_data * sInstanceDataPool;
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
    // -> static class SystemInstance * sGenericIdleFX;
}
// Range: 0x8015DCE0 -> 0x8015DE14
void zFloatingCollectibleSceneExit() {
    // References
    // -> class NumberPool sNumberPool;
    // -> class SystemInstance * * sInstances;
    // -> static class SystemInstance * sGenericIdleFX;
    // -> class zGlobals globals;
}
// Range: 0x8015DE20 -> 0x8015E324
void zFloatingCollectible::DriveAttach(class zFloatingCollectible * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// signature: zFloatingCollectible::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x8015E340 -> 0x8015E744
void zFloatingCollectible::DriveCauseMove(class zFloatingCollectible * this /* r30 */, class xMat4x3 * parent /* r8 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x98
    class xMat4x3 tempMat; // r1+0x58
    class xMat4x3 baseMat; // r1+0x18
    class xVec3 R; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
