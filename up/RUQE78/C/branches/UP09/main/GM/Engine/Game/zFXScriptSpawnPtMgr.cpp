/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXScriptSpawnPtMgr.cpp
*/
class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr; // size: 0x4, address: 0x8081E4B0
bool sInvalidSceneState; // size: 0x1, address: 0x807AEED4
// Range: 0x80162F70 -> 0x801630BC
void zFXScriptSpawnPtMgr::Setup() {
    // References
    // -> bool sInvalidSceneState;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// signature: zFXScriptSpawnPtMgr::GetNewPoolSpawnPoint(const char *)
// Range: 0x801632D0 -> 0x801632FC
class zFXSpawn * zFXScriptSpawnPtMgr::GetNewPoolSpawnPoint() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zFXScriptSpawnPtMgr::_GetNewPoolSpawnPoint(const char *)
// Range: 0x80163300 -> 0x801634A8
class zFXSpawn * zFXScriptSpawnPtMgr::_GetNewPoolSpawnPoint(class zFXScriptSpawnPtMgr * this /* r30 */) {
    // Local variables
    int idx; // r31
    class SpawnSlot & spawnSlot; // r3

    {
        // Range: 0x80163380 -> 0x80163474
        // Local variables
        int startidx; // r3

        {
            // Range: 0x80163398 -> 0x80163474
            // Local variables
            class SpawnSlot & spawnSlot; // r29
        }
    }
}
// Range: 0x801634B0 -> 0x80163518
void zFXScriptSpawnPtMgr::ReturnPoolSpawnPoint(class zFXSpawn * usedSpawnPt /* r31 */) {
    // References
    // -> bool sInvalidSceneState;
}
// Range: 0x80163520 -> 0x80163620
void zFXScriptSpawnPtMgr::SceneExit() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x80163620 -> 0x80163714
void zFXScriptSpawnPtMgr::Reset() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x80163720 -> 0x80163830
void zFXScriptSpawnPtMgr::UpdateAll(float dt /* f31 */) {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
