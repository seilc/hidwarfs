/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFloatingCollectibleSpawner.cpp
*/
static class xAnimTable * animSpawnerTables; // size: 0x4, address: 0x8081D804
// Range: 0x8015E7D0 -> 0x8015EED0
void zFloatingCollectibleSpawner::Setup(class zFloatingCollectibleSpawner * this /* r28 */) {
    // Local variables
    class hkpRigidBodyCinfo havokCinfo; // r1+0x70
    class xAnimTable * table; // r5

    {
        // Range: 0x8015E898 -> 0x8015EC44
        // Local variables
        int i; // r29
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animSpawnerTables;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> class Scene * primaryScene;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class generator_data * sInstanceDataPool;
}
// signature: zFloatingCollectibleSpawner::SetVisible(bool)
// Range: 0x8015EED0 -> 0x8015F010
void zFloatingCollectibleSpawner::SetVisible() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8015F010 -> 0x8015F094
void zFloatingCollectibleSpawner::Reset(class zFloatingCollectibleSpawner * this /* r29 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: zFloatingCollectibleSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8015F0A0 -> 0x8015F95C
void zFloatingCollectibleSpawner::HandleEvent(class zFloatingCollectibleSpawner * this /* r30 */) {
    {
        // Range: 0x8015F3B8 -> 0x8015F490
        // Local variables
        class xVec3 pos; // r1+0x9C
    }
    {
        // Range: 0x8015F4AC -> 0x8015F570
        // Local variables
        int i; // r18

        {
            // Range: 0x8015F4AC -> 0x8015F560
            // Local variables
            class xVec3 pos; // r1+0x90
        }
    }
    {
        // Range: 0x8015F584 -> 0x8015F924
        // Local variables
        int i; // r31
    }

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class generator_data * sInstanceDataPool;
    // -> class zPlayerInventory inventory;
    // -> class Scene * primaryScene;
}
// Range: 0x8015F960 -> 0x80160044
void zFloatingCollectibleSpawner::Update(class zFloatingCollectibleSpawner * this /* r15 */, float dt /* f25 */) {
    {
        // Range: 0x8015FA18 -> 0x8015FFD0
        // Local variables
        float dy; // f6
        float flyHeight; // f26
        float flyTime; // f27
        float startTime; // f2
        class xVec3 currentPos; // r1+0x28
        class xVec3 targetPos; // r1+0x34
        class xVec3 spawnPos; // r1+0x40

        {
            // Range: 0x8015FA24 -> 0x8015FF6C
            // Local variables
            int i; // r16
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x80160050 -> 0x801603F4
class xAnimTable * zFloatingCollectibleSpawner::CreateAnimTable(unsigned long long animSetID /* r27:r26 */) {
    // Local variables
    class xAnimTable * table; // r25

    // References
    // -> static class xAnimTable * animSpawnerTables;
}
// signature: zFloatingCollectibleSpawner::RemoveAnimTable(unsigned long long)
// Range: 0x801605C0 -> 0x80160674
void zFloatingCollectibleSpawner::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animSpawnerTables;
}
// Range: 0x801606D0 -> 0x80160A34
class Entity * Sext::zFloatingCollectibleSpawnerAsset::Create(class EntityHandleBase * handle /* r24 */, class zFloatingCollectibleSpawnerAsset * asset /* r27 */) {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> struct {} __vt__27zFloatingCollectibleSpawner;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80160A40 -> 0x80160EE4
void zFloatingCollectibleGroup::Setup(class zFloatingCollectibleGroup * this /* r15 */) {
    {
        // Range: 0x80160ABC -> 0x80160EA4
        // Local variables
        int i; // r16
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x80160EF0 -> 0x80160FCC
void zFloatingCollectibleGroup::Reset(class zFloatingCollectibleGroup * this /* r31 */) {
    // Local variables
    class xVec3 hidePos; // r1+0x14

    {
        // Range: 0x80160F14 -> 0x80160F14
        // Local variables
        int i; // r7
    }
}
// Range: 0x80160FD0 -> 0x80161190
class zFloatingCollectible * zFloatingCollectibleGroup::GetFreeCollectible(class zFloatingCollectibleGroup * this /* r31 */) {
    // Local variables
    int min; // r7
    int minIdx; // r8

    {
        // Range: 0x80160FDC -> 0x801610E0
        // Local variables
        int i; // r9
    }
}
// Range: 0x80161190 -> 0x80161264
class Entity * Sext::zFloatingCollectibleGroupAsset::Create(class EntityHandleBase * handle /* r29 */, class zFloatingCollectibleGroupAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__25zFloatingCollectibleGroup;
    // -> struct {} __vt__Q25World9xOGEntity;
}
