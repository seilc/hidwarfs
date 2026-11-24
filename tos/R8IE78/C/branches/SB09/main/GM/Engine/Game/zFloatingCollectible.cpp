/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFloatingCollectible.cpp
*/
class zFXSpawn * nuggetBecomeUnhappyScriptAsset; // size: 0x4, address: 0x8073415C
class zHintSphere * UnHappyDialog; // size: 0x4, address: 0x80734160
static class SystemInstance * sGenericIdleFX; // size: 0x4, address: 0x80734164
int unhappyNuggetsInProgress; // size: 0x4, address: 0x80734168
float bounceStopThreshold; // size: 0x4, address: 0x806BD4F0
float depenAdditional; // size: 0x4, address: 0x80753E2C
float depenFactor; // size: 0x4, address: 0x806BD4F4
float gravity; // size: 0x4, address: 0x806BD4F8
float rotScale; // size: 0x4, address: 0x806BD4FC
float g_idleRotCos; // size: 0x4, address: 0x8073416C
float g_idleRotSin; // size: 0x4, address: 0x80734170
// signature: @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AF0A0 -> 0x800AF0BC
static void @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800AF0C0 -> 0x800AF168
void zCollectibleCollisionListener::contactPointAddedCallback(class hkpContactPointAddedEvent & event /* r29 */) {
    // Local variables
    class zFloatingCollectible * owner; // r30
    class hkpRigidBody * otherBody; // reg65535

    {
        // Range: 0x800AF0D8 -> 0x800AF10C
        // Local variables
        class hkpRigidBody * bodyB; // r3
        class hkpRigidBody * bodyA; // r31
    }
    {
        // Range: 0x800AF10C -> 0x800AF154
        // Local variables
        class xBase * otherBase; // r3

        {
            // Range: 0x800AF118 -> 0x800AF154
            // Local variables
            class zProjectile * projectile; // r0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800AF170 -> 0x800AF1D8
void * zCollectibleCollisionListener::zCollectibleCollisionListener(class zCollectibleCollisionListener * this /* r30 */, class hkpRigidBody * rigidBody /* r31 */) {
    // References
    // -> struct {} __vt__29zCollectibleCollisionListener;
}
// signature: zFloatingCollectible::CollisionCallback(zFloatingCollectible *, xBase *, hkpContactProcessEvent &, bool)
// Range: 0x800AF1E0 -> 0x800AF320
void zFloatingCollectible::CollisionCallback(class zFloatingCollectible * obj /* r24 */, class xBase * other /* r25 */, bool flip /* r26 */) {
    // Local variables
    class hkpProcessCollisionData * pCollisionData; // r28
    int totalContactPoints; // r0

    {
        // Range: 0x800AF238 -> 0x800AF2F4
        // Local variables
        int i; // r27

        {
            // Range: 0x800AF238 -> 0x800AF2F4
            // Local variables
            float distFromPos; // f0
            class hkVector4 separatingNormal; // r1+0x20
            class hkContactPoint & contactPoint; // r0

            {
                // Range: 0x800AF238 -> 0x800AF2F4
                // Local variables
                class xVec3 depenDir; // r1+0x10
                float depenMag; // f30
            }
        }
    }
}
// Range: 0x800AF350 -> 0x800AF3F4
void zCollectibleCollisionListener::contactProcessCallback(class hkpContactProcessEvent & event /* r30 */) {
    // Local variables
    class hkpRigidBody * rbA; // r0
    class hkpRigidBody * rbB; // r0
    class xBase * baseA; // r5
    class xBase * baseB; // r4
}
// Range: 0x800AF400 -> 0x800AF45C
void zFloatingCollectible::Instance(class zFloatingCollectible * this /* r30 */, class zFloatingCollectible * toCopy /* r31 */) {
}
// Range: 0x800AF460 -> 0x800AF4B8
void zFloatingCollectible::Init(class zFloatingCollectible * this /* r30 */, class zFloatingCollectibleAsset * asset /* r31 */) {
}
// Range: 0x800AF4C0 -> 0x800AF844
void zFloatingCollectible::LoadModel(class zFloatingCollectible * this /* r29 */) {
    // Local variables
    unsigned int hash; // r30
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x800AF6EC -> 0x800AF748
        // Local variables
        enum eShadow castShadow; // r0
        class ModelInstanceAsset * modelInstanceAsset; // r0

        {
            // Range: 0x800AF6FC -> 0x800AF738
            // Local variables
            class ModelInstanceAsset * tmpAsset; // r0
        }
    }
    {
        // Range: 0x800AF748 -> 0x800AF79C
        // Local variables
        enum eShadow castShadow; // r0
        class ModelInstanceAsset * modelInstanceAsset; // r3

        {
            // Range: 0x800AF750 -> 0x800AF78C
            // Local variables
            class ModelInstanceAsset * tmpAsset; // r0
        }
    }
    {
        // Range: 0x800AF7CC -> 0x800AF82C
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0

        {
            // Range: 0x800AF7D4 -> 0x800AF7E8
            // Local variables
            unsigned long long modelID; // r0:r0
        }
        {
            // Range: 0x800AF7E8 -> 0x800AF82C
            // Local variables
            class dxTriMeshData * triMeshData; // r0
        }
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x800AF850 -> 0x800AF91C
void zFloatingCollectible::Setup(class zFloatingCollectible * this /* r28 */, bool sceneStart /* r29 */, class xVec3 * startPos /* r30 */) {
    // References
    // -> class zHintSphere * UnHappyDialog;
    // -> class zFXSpawn * nuggetBecomeUnhappyScriptAsset;
}
// Range: 0x800AF920 -> 0x800AF9C0
void zFloatingCollectible::Show(class zFloatingCollectible * this /* r30 */) {
}
// Range: 0x800AF9C0 -> 0x800AFCD4
void zFloatingCollectible::Reset(class zFloatingCollectible * this /* r29 */, bool sceneStart /* r30 */, class xVec3 * startPos /* r31 */) {
    {
        // Range: 0x800AFB48 -> 0x800AFB70
        // Local variables
        float initialAngle; // f1
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xMat4x3 g_I3;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x800AFE00 -> 0x800AFE60
void zFloatingCollectible::DebugReset(class zFloatingCollectible * this /* r29 */) {
}
// Range: 0x800AFE60 -> 0x800AFE68
void zFloatingCollectible::Render() {
}
// Range: 0x800AFE70 -> 0x800AFE80
void zFloatingCollectible::SceneExit() {
}
// Range: 0x800AFE80 -> 0x800AFEF4
void zFloatingCollectible::Free(class zFloatingCollectible * this /* r30 */) {
}
// Range: 0x800AFF50 -> 0x800B00C4
void zFloatingCollectible::StartPhysics(class zFloatingCollectible * this /* r31 */) {
    // Local variables
    class hkpShape * pNewShape; // r27
    class hkpShape * scaled_shape; // r27
    enum E_HAVOK_COLLIDE_FILTER_LAYER collisionLayer; // r0
    class xVec3 & position; // r0
    class hkTransform transform; // r1+0x40

    // References
    // -> class CHavokShapeBuilder * s_instance;
}
// Range: 0x800B0160 -> 0x800B01A4
void zFloatingCollectible::StopPhysics(class zFloatingCollectible * this /* r31 */) {
}
// Range: 0x800B01B0 -> 0x800B01EC
enum E_HAVOK_COLLIDE_FILTER_LAYER zFloatingCollectible::GetCollisionFilter() {
}
// signature: zFloatingCollectible::SetInactiveFade(bool)
// Range: 0x800B01F0 -> 0x800B0280
void zFloatingCollectible::SetInactiveFade() {
}
// Range: 0x800B0280 -> 0x800B03A0
void zFloatingCollectible::TurnUnhappy(class zFloatingCollectible * this /* r31 */) {
    // References
    // -> int unhappyNuggetsInProgress;
    // -> unsigned short ACH42_PTTurnUnhappyCount;
    // -> class zFXSpawn * nuggetBecomeUnhappyScriptAsset;
}
// Range: 0x800B03A0 -> 0x800B0564
void zFloatingCollectible::StartCollecting(class zFloatingCollectible * this /* r30 */, class xEnt * collector /* r31 */) {
    {
        // Range: 0x800B0440 -> 0x800B0518
        // Local variables
        float angle; // f1
        class xVec3 perp; // r1+0x14
        class xVec3 dir; // r1+0x20
        class xVec3 collectPos; // r1+0x2C
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800B05A0 -> 0x800B074C
void zFloatingCollectible::Collect(class zFloatingCollectible * this /* r31 */) {
    {
        // Range: 0x800B05B8 -> 0x800B06B8
        // Local variables
        class zPlayer * player; // r29
    }

    // References
    // -> int unhappyNuggetsInProgress;
    // -> class zHintSphere * UnHappyDialog;
}
// Range: 0x800B0750 -> 0x800B07F4
void zFloatingCollectible::StartFX(class zFloatingCollectible * this /* r29 */, class zFXSpawn * fxSpawnPt_Asset /* r30 */, class zFXSpawn * * fxSpawnPt /* r31 */) {
    {
        // Range: 0x800B0794 -> 0x800B07DC
        // Local variables
        float forceAgeRate; // f1
    }
}
// Range: 0x800B0800 -> 0x800B0BA4
void zFloatingCollectible::Update(class zFloatingCollectible * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool needUpdateRender; // r30

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x800B0BB0 -> 0x800B12E4
void zFloatingCollectible::UpdateIdle(class zFloatingCollectible * this /* r26 */, float dt /* f28 */) {
    // Local variables
    bool playerDoesNotNeed; // r24

    {
        // Range: 0x800B0BF0 -> 0x800B0DB4
        // Local variables
        class hkTransform transform; // r1+0x80
        class xVec3 & position; // r0

        {
            // Range: 0x800B0C14 -> 0x800B0D44
            // Local variables
            float dot; // f0
        }
    }
    {
        // Range: 0x800B0DF4 -> 0x800B0E44
        // Local variables
        class zSBPlayer * sbPlayer; // r25
    }
    {
        // Range: 0x800B0E44 -> 0x800B0E6C
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0E6C -> 0x800B0E90
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0E90 -> 0x800B0EB4
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0EB4 -> 0x800B0ED8
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0ED8 -> 0x800B0EFC
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0EFC -> 0x800B0F1C
        // Local variables
        class zSBPlayer * sbPlayer; // r0
    }
    {
        // Range: 0x800B0F54 -> 0x800B0FD4
        // Local variables
        float ss; // f10
        float cc; // f9
        float az; // f8
        float ay; // f7
        float ax; // f6
        float lz; // f5
        float ly; // f4
        float lx; // f3
    }
    {
        // Range: 0x800B1024 -> 0x800B1060
        // Local variables
        int ii; // r0
    }
    {
        // Range: 0x800B10A4 -> 0x800B12A8
        // Local variables
        class xVec3 pos; // r1+0x74
        class xMat4x3 & matrix; // r0
        class xEnt * closestPlayer; // r28
        float closestDist2; // f29
        bool canCollect; // r29

        {
            // Range: 0x800B10D0 -> 0x800B126C
            // Local variables
            int ii; // r27

            {
                // Range: 0x800B10D0 -> 0x800B120C
                // Local variables
                float dist2; // f28
            }
            {
                // Range: 0x800B120C -> 0x800B126C
                // Local variables
                float dist2; // f1
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> float g_idleRotCos;
    // -> float g_idleRotSin;
    // -> float gravity;
    // -> class xVec3 m_Null;
    // -> float bounceStopThreshold;
    // -> float depenAdditional;
    // -> float depenFactor;
}
// signature: zFloatingCollectible::zFloatingCollectible(World::EntityHandleBase *)
// Range: 0x800B12F0 -> 0x800B133C
void * zFloatingCollectible::zFloatingCollectible(class zFloatingCollectible * this /* r31 */) {
    // References
    // -> struct {} __vt__20zFloatingCollectible;
}
// Range: 0x800B13A0 -> 0x800B1438
void zFloatingCollectible::Rotate(float rotScale /* f30 */, float dt /* f31 */) {
    // Local variables
    class xQuat currentRot; // r1+0x18
    class xQuat dRot; // r1+0x8
    float dRotAngle; // f1

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800B1440 -> 0x800B15BC
void zFloatingCollectible::UpdateToBeCollected(class zFloatingCollectible * this /* r30 */, float dt /* f29 */) {
    {
        // Range: 0x800B14A8 -> 0x800B158C
        // Local variables
        float scale; // f0
        class xVec3 vC; // r1+0x38
        float jumpHeight; // f30
        float collectProportion; // f31
    }

    // References
    // -> float rotScale;
}
// signature: zFloatingCollectible::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B15C0 -> 0x800B1948
void zFloatingCollectible::HandleEvent(class zFloatingCollectible * this /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x800B1744 -> 0x800B1784
        // Local variables
        class xOGEntity * drivingObject; // r5
    }
    {
        // Range: 0x800B17BC -> 0x800B187C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
    {
        // Range: 0x800B18BC -> 0x800B1930
        // Local variables
        class xVec3 vel; // r1+0x8
        class EventActionVector * paramst; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800B1950 -> 0x800B19A8
void zFloatingCollectible::Save(class zFloatingCollectible * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x800B19B0 -> 0x800B1A3C
void zFloatingCollectible::Load(class zFloatingCollectible * this /* r29 */, class xSerial * s /* r30 */) {
    // Local variables
    int b; // r1+0x8
}
// signature: zFloatingCollectible::SetVisible(bool, bool)
// Range: 0x800B1A40 -> 0x800B1A94
void zFloatingCollectible::SetVisible() {
}
// Range: 0x800B1AA0 -> 0x800B1B20
class Entity * Sext::zFloatingCollectibleAsset::Create(class EntityHandleBase * handle /* r29 */, class zFloatingCollectibleAsset * asset /* r30 */) {
}
// Range: 0x800B1B20 -> 0x800B1BE8
void zFloatingCollectibleUpdate(float dt /* f30 */) {
    // Local variables
    float dRotAngle; // f31

    // References
    // -> class zGlobals globals;
    // -> float g_idleRotSin;
    // -> float g_idleRotCos;
}
// Range: 0x800B1BF0 -> 0x800B1C70
void zFloatingCollectibleSceneExit() {
    // References
    // -> static class SystemInstance * sGenericIdleFX;
    // -> class zGlobals globals;
}
// signature: zFloatingCollectible::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800B1C70 -> 0x800B1D34
void zFloatingCollectible::DriveCauseMove(class zFloatingCollectible * this /* r28 */, class xMat4x3 * parent /* r29 */, class xMat4x3 * relMat /* r30 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x98
    class xMat4x3 tempMat; // r1+0x58
    class xMat4x3 baseMat; // r1+0x18
    class xVec3 R; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
