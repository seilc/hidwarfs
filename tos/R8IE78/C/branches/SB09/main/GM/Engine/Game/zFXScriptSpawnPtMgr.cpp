/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXScriptSpawnPtMgr.cpp
*/
class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr; // size: 0x4, address: 0x80734630
bool sInvalidSceneState; // size: 0x1, address: 0x806BD518
// Range: 0x800B4A60 -> 0x800B4AA8
void zFXScriptSpawnPtMgr::Setup() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800B4AB0 -> 0x800B4B48
void * zFXScriptSpawnPtMgr::zFXScriptSpawnPtMgr(class zFXScriptSpawnPtMgr * this /* r31 */) {
    {
        // Range: 0x800B4B00 -> 0x800B4B24
        // Local variables
        int idx; // r5

        {
            // Range: 0x800B4B00 -> 0x800B4B24
            // Local variables
            class SpawnSlot & spawnSlot; // r6
        }
    }

    // References
    // -> bool sInvalidSceneState;
}
// signature: zFXScriptSpawnPtMgr::GetNewPoolSpawnPoint(const char *)
// Range: 0x800B4CD0 -> 0x800B4CFC
class zFXSpawn * zFXScriptSpawnPtMgr::GetNewPoolSpawnPoint() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// signature: zFXScriptSpawnPtMgr::_GetNewPoolSpawnPoint(const char *)
// Range: 0x800B4D00 -> 0x800B4DB8
class zFXSpawn * zFXScriptSpawnPtMgr::_GetNewPoolSpawnPoint(class zFXScriptSpawnPtMgr * this /* r30 */) {
    // Local variables
    int idx; // r31
    class SpawnSlot & spawnSlot; // r4

    {
        // Range: 0x800B4D20 -> 0x800B4D88
        // Local variables
        int startidx; // r3

        {
            // Range: 0x800B4D40 -> 0x800B4D88
            // Local variables
            class SpawnSlot & spawnSlot; // r4
        }
    }
}
// Range: 0x800B4E30 -> 0x800B4E8C
void zFXScriptSpawnPtMgr::ReturnPoolSpawnPoint(class zFXSpawn * usedSpawnPt /* r31 */) {
    // References
    // -> bool sInvalidSceneState;
}
// signature: zFXScriptSpawnPtMgr::_ImmediateReturnPoolSpawnPoint(FX::zFXSpawn *)
// Range: 0x800B4E90 -> 0x800B4ED4
void zFXScriptSpawnPtMgr::_ImmediateReturnPoolSpawnPoint() {
    {
        // Range: 0x800B4E94 -> 0x800B4ED0
        // Local variables
        int idx; // r5

        {
            // Range: 0x800B4E94 -> 0x800B4ED0
            // Local variables
            class SpawnSlot & spawnSlot; // r7
        }
    }
}
// Range: 0x800B4EE0 -> 0x800B4F50
void zFXScriptSpawnPtMgr::_ImmediateReturnPoolSpawnPoint(class zFXScriptSpawnPtMgr * this /* r29 */, class zFXSpawn * usedSpawnPt /* r30 */, int idx /* r31 */) {
}
// Range: 0x800B4FB0 -> 0x800B5008
void zFXScriptSpawnPtMgr::_ReturnPoolSpawnPoint(class zFXScriptSpawnPtMgr * this /* r29 */, class zFXSpawn * usedSpawnPt /* r30 */, int idx /* r31 */) {
}
// Range: 0x800B5010 -> 0x800B5078
void zFXScriptSpawnPtMgr::SceneExit() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x800B50E0 -> 0x800B5100
void zFXScriptSpawnPtMgr::Reset() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x800B5100 -> 0x800B518C
void zFXScriptSpawnPtMgr::_Reset(class zFXScriptSpawnPtMgr * this /* r26 */) {
    {
        // Range: 0x800B5110 -> 0x800B5178
        // Local variables
        int idx; // r28

        {
            // Range: 0x800B5110 -> 0x800B5178
            // Local variables
            class SpawnSlot & spawnSlot; // r27
        }
    }
}
// signature: zFXScriptSpawnPtMgr::UpdateAll(float)
// Range: 0x800B5190 -> 0x800B51B0
void zFXScriptSpawnPtMgr::UpdateAll() {
    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x800B51B0 -> 0x800B523C
void zFXScriptSpawnPtMgr::_UpdateAll(class zFXScriptSpawnPtMgr * this /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x800B51CC -> 0x800B5224
        // Local variables
        int idx; // r29

        {
            // Range: 0x800B51CC -> 0x800B5224
            // Local variables
            class SpawnSlot & spawnSlot; // r4
        }
    }

    // References
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
