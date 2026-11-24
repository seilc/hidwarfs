/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFloatingCollectible.cpp
*/
class _OGFloatingCollectibleSchema _OGFloatingCollectibleschema; // size: 0x18, address: 0x8076D320
class SchemaRegistrator _OGFloatingCollectibleschemaReg; // size: 0x8, address: 0x8076D338
static int collectableTypeIndex; // size: 0x4, address: 0x806FAF9C
// Range: 0x800CFAC0 -> 0x800CFAD0
void World::_OGFloatingCollectibleEntity::Deactivate() {
}
// Range: 0x800CFAD0 -> 0x800CFB20
void World::_OGFloatingCollectibleEntity::Destroy(class _OGFloatingCollectibleEntity * this /* r31 */) {
}
// signature: World::_OGFloatingCollectibleSchema::Fix(World::Asset *, long, int)
// Range: 0x800CFB80 -> 0x800CFB88
void World::_OGFloatingCollectibleSchema::Fix() {
}
// signature: World::_OGFloatingCollectibleSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800CFB90 -> 0x800CFBDC
class EntityStub * World::_OGFloatingCollectibleSchema::CreateStub(class _OGFloatingCollectibleSchema * this /* r31 */) {
}
// signature: World::_OGFloatingCollectibleSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800CFBE0 -> 0x800CFBF8
void World::_OGFloatingCollectibleSchema::DestroyStub() {
}
// signature: World::_OGFloatingCollectibleSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800CFC00 -> 0x800CFC64
class Entity * World::_OGFloatingCollectibleSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World28_OGFloatingCollectibleEntity;
}
// signature: @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CFCB0 -> 0x800CFCCC
static void @unnamed@WAD02_cpp@::FloatingCollectibleEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800CFCD0 -> 0x800CFD48
void zFloatingCollectible::Init(class zFloatingCollectible * this /* r30 */, class zFloatingCollectibleAsset * asset /* r31 */) {
}
// Range: 0x800CFD50 -> 0x800CFE74
void zFloatingCollectible::LoadModel(class zFloatingCollectible * this /* r30 */) {
    // Local variables
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x800CFDDC -> 0x800CFE3C
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0

        {
            // Range: 0x800CFDE4 -> 0x800CFDF8
            // Local variables
            unsigned long long modelID; // r0:r0
        }
        {
            // Range: 0x800CFDF8 -> 0x800CFE3C
            // Local variables
            class dxTriMeshData * triMeshData; // r0
        }
    }
}
// Range: 0x800CFE80 -> 0x800CFEC0
void zFloatingCollectible::Setup(class zFloatingCollectible * this /* r31 */) {
}
// Range: 0x800CFEC0 -> 0x800D009C
void zFloatingCollectible::Reset(class zFloatingCollectible * this /* r30 */) {
}
// Range: 0x800D0210 -> 0x800D07DC
void zFloatingCollectible::SetupFX(class zFloatingCollectible * this /* r29 */, class zFXScriptSpawnPt * fxSpawnPt_Asset /* r30 */, class zFXScriptSpawnPt * * fxSpawnPt /* r31 */) {
    {
        // Range: 0x800D05F0 -> 0x800D07BC
        // Local variables
        float forceAgeRate; // f1
    }

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800D07E0 -> 0x800D084C
void zFloatingCollectible::Render(class zFloatingCollectible * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800D0850 -> 0x800D11F8
void zFloatingCollectible::SceneExit(class zFloatingCollectible * this /* r31 */) {
}
// Range: 0x800D1200 -> 0x800D1338
void zFloatingCollectible::FindDriver(class zFloatingCollectible * this /* r31 */) {
    {
        // Range: 0x800D1224 -> 0x800D1250
        // Local variables
        class xBase * drivingObject; // r0
    }
}
// Range: 0x800D1350 -> 0x800D1F24
void zFloatingCollectible::StartCollecting(class zFloatingCollectible * this /* r30 */, class xEnt * collector /* r31 */) {
    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800D1F30 -> 0x800D26A8
void zFloatingCollectible::Collect(class zFloatingCollectible * this /* r26 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800D26D0 -> 0x800D2B9C
void zFloatingCollectible::StopFX(class zFXScriptSpawnPt * * fxSpawnPt /* r27 */) {
}
// Range: 0x800D2BA0 -> 0x800D3204
void zFloatingCollectible::StartFX(class zFloatingCollectible * this /* r29 */, class zFXScriptSpawnPt * fxSpawnPt_Asset /* r30 */, class zFXScriptSpawnPt * * fxSpawnPt /* r31 */) {
    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// signature: zFloatingCollectible::Update(float)
// Range: 0x800D3210 -> 0x800D327C
void zFloatingCollectible::Update(class zFloatingCollectible * this /* r31 */) {
}
// Range: 0x800D3280 -> 0x800D41F4
void zFloatingCollectible::UpdateIdle(class zFloatingCollectible * this /* r30 */, float dt /* f31 */) {
    // Local variables
    float offset; // f2
    class xQuat currentRot; // r1+0x48
    class xQuat dRot; // r1+0x38
    float dRotAngle; // f1

    {
        // Range: 0x800D32C0 -> 0x800D3368
        // Local variables
        class xVec3 offset; // r1+0x58
    }
    {
        // Range: 0x800D356C -> 0x800D41C4
        // Local variables
        class xVec3 pos; // r1+0x2C
        class xEnt * closestPlayer; // r31
        float closestDist2; // f8
        bool canCollect; // r22

        {
            // Range: 0x800D357C -> 0x800D3588
            // Local variables
            int ii; // r0

            {
                // Range: 0x800D357C -> 0x800D3588
                // Local variables
                float dist2; // f0
            }
        }
    }

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800D4200 -> 0x800D4720
void zFloatingCollectible::UpdateToBeCollected(class zFloatingCollectible * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 * collectorPos; // r0
    class xVec3 * at; // r0
    class xVec3 targetVec; // r1+0x38
    float diffAngle; // f0
    float prevDiffAngle; // f0

    {
        // Range: 0x800D43D8 -> 0x800D45C0
        // Local variables
        float yTrans; // f31
        float yDiff; // f1
        float xzOffset; // f5
        float xzDist; // f0
        float yTransAmt; // r31
        float xzTransAmt; // f27
        float scaleFactor; // f2

        {
            // Range: 0x800D4410 -> 0x800D4478
            // Local variables
            float rotAngle; // f29
        }
    }
}
// signature: zFloatingCollectible::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D47F0 -> 0x800D4894
void zFloatingCollectible::HandleEvent(class zFloatingCollectible * this /* r31 */) {
}
// Range: 0x800D48A0 -> 0x800D4900
void zFloatingCollectible::Save(class zFloatingCollectible * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x800D4900 -> 0x800D59F0
void zFloatingCollectible::Load(class zFloatingCollectible * this /* r31 */, class xSerial * s /* r23 */) {
    // Local variables
    int b; // r1+0x8

    // References
    // -> class Scene * primaryScene;
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// signature: zFloatingCollectible::SetVisible(bool)
// Range: 0x800D59F0 -> 0x800D6A90
void zFloatingCollectible::SetVisible(class zFloatingCollectible * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800D6A90 -> 0x800D6AC8
bool zFloatingCollectible::IsScannable() {
}
// signature: zFloatingCollectibleInit(void *, void *)
// Range: 0x800D6AD0 -> 0x800D6AF4
void zFloatingCollectibleInit() {
    // References
    // -> struct {} __vt__20zFloatingCollectible;
}
// Range: 0x800D6B00 -> 0x800D6B2C
void zFloatingCollectibleSceneInit() {
    // References
    // -> static int collectableTypeIndex;
}
// Range: 0x800D6B30 -> 0x800D6BC8
void zFloatingCollectibleUpdate(float dt /* f31 */) {
    // Local variables
    class zFloatingCollectible * current; // r31
    class zFloatingCollectible * last; // r30

    // References
    // -> static int collectableTypeIndex;
    // -> class zGlobals globals;
}
// Range: 0x800D6BD0 -> 0x800D6C4C
void zFloatingCollectibleSceneExit() {
    // Local variables
    class zFloatingCollectible * current; // r31
    class zFloatingCollectible * last; // r30

    // References
    // -> static int collectableTypeIndex;
    // -> class zGlobals globals;
}
