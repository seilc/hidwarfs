/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCManager.cpp
*/
static class zNPCManager gNPCManager; // size: 0x1C, address: 0x8075329C
class Factory factory; // size: 0x3C, address: 0x807532B8
// Range: 0x800F4AA0 -> 0x800F4AAC
class zNPCManager * zNPCManager::Manager() {
    // References
    // -> static class zNPCManager gNPCManager;
}
// Range: 0x800F4AB0 -> 0x800F4B40
void zNPCManager::ModulePrepUse(class zNPCManager * this /* r30 */) {
    {
        // Range: 0x800F4AC4 -> 0x800F4AFC
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4AFC -> 0x800F4B24
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F4BA0 -> 0x800F4C44
void zNPCManager::ScenePrepare() {
    {
        // Range: 0x800F4BE0 -> 0x800F4C08
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4C08 -> 0x800F4C30
        // Local variables
        unsigned int i; // r31
    }

    // References
    // -> class Factory factory;
}
// Range: 0x800F4C50 -> 0x800F4CC4
void zNPCManager::SceneFinish() {
    {
        // Range: 0x800F4C60 -> 0x800F4C88
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4C88 -> 0x800F4CB0
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F4CD0 -> 0x800F4D44
void zNPCManager::SceneInit() {
    {
        // Range: 0x800F4CE0 -> 0x800F4D08
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4D08 -> 0x800F4D30
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F4D50 -> 0x800F4DC4
void zNPCManager::ScenePostInit() {
    {
        // Range: 0x800F4D60 -> 0x800F4D88
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4D88 -> 0x800F4DB0
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F4DD0 -> 0x800F4F64
void zNPCManager::SceneSetup() {
    {
        // Range: 0x800F4E88 -> 0x800F4EB0
        // Local variables
        unsigned int i; // r25
    }
    {
        // Range: 0x800F4EB0 -> 0x800F4ED8
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// Range: 0x800F4F70 -> 0x800F4FE4
void zNPCManager::ScenePostSetup() {
    {
        // Range: 0x800F4F80 -> 0x800F4FA8
        // Local variables
        unsigned int i; // r31
    }
    {
        // Range: 0x800F4FA8 -> 0x800F4FD0
        // Local variables
        unsigned int i; // r31
    }
}
// Range: 0x800F4FF0 -> 0x800F5164
void zNPCManager::SceneReset() {
    {
        // Range: 0x800F5100 -> 0x800F5128
        // Local variables
        unsigned int i; // r25
    }
    {
        // Range: 0x800F5128 -> 0x800F5150
        // Local variables
        unsigned int i; // r25
    }

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// Range: 0x800F5170 -> 0x800F5340
void zNPCManager::SceneExit() {
    {
        // Range: 0x800F52D0 -> 0x800F52F8
        // Local variables
        unsigned int i; // r26
    }
    {
        // Range: 0x800F52F8 -> 0x800F5320
        // Local variables
        unsigned int i; // r26
    }

    // References
    // -> class Factory factory;
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// Range: 0x800F5340 -> 0x800F538C
int zNPCManager::_FindNumberOfBases() {
    // References
    // -> class zGlobals globals;
}
// signature: zNPCManager::CreateNPC(World::EntityHandleBase *, Sext::NPCAsset *, const unsigned int)
// Range: 0x800F53F0 -> 0x800F5490
class Entity * zNPCManager::CreateNPC(class NPCAsset * npcAsset /* r28 */, unsigned int dynAssetSize /* r29 */) {
    // References
    // -> static class zNPCManager gNPCManager;
    // -> class zNPCType npcDefaultType;
    // -> class zNPCType * npcTypes[28];
}
// signature: zNPCManager::CreateNPCGroup(World::EntityHandleBase *, Sext::NPCGroupAsset *, const unsigned int)
// Range: 0x800F5490 -> 0x800F553C
class Entity * zNPCManager::CreateNPCGroup(class NPCGroupAsset * npcGroupAsset /* r28 */, unsigned int dynAssetSize /* r29 */) {
    // References
    // -> class zNPCGroupType npcGroupDefaultType;
    // -> class zNPCGroupType * npcGroupTypes[2];
}
// signature: zNPCManager::_LoadNPC(zNPCBase *, zNPCType *, const Sext::xBaseAsset *, const unsigned int)
// Range: 0x800F5540 -> 0x800F55D8
void zNPCManager::_LoadNPC(class zNPCBase * npc /* r26 */, class zNPCType * type /* r27 */, unsigned int dynAssetSize /* r28 */) {
    // Local variables
    class NPCAsset * npcAsset; // r31

    {
        // Range: 0x800F5560 -> 0x800F5594
        // Local variables
        unsigned long long characterAssetsID; // r30:r29
    }
}
// signature: zNPCManager::_GetAllNPCsWithinSphereByType(eNPCType, xVec3 *, float, fixed_stack_list<zNPCBase *, 32> *)
// Range: 0x800F55E0 -> 0x800F5730
void zNPCManager::_GetAllNPCsWithinSphereByType(enum eNPCType type /* r24 */) {
    // Local variables
    class zNPCManager_WithinSphereCheck_CB sphereCB; // r1+0x30
    class zNPCType * npcType; // r0

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// signature: zNPCManager::_GetAllNPCsWithinConeByType(eNPCType, xVec3 *, xVec3 *, float, fixed_stack_list<zNPCBase *, 32> *)
// Range: 0x800F57D0 -> 0x800F5A04
void zNPCManager::_GetAllNPCsWithinConeByType(enum eNPCType type /* r24 */, float angle /* f28 */, class fixed_stack_list * outputList /* r23 */) {
    // Local variables
    class zNPCManager_WithinConeCheck_CB coneCB; // r1+0x3C
    class xVec3 coneDir; // r1+0x30
    class zNPCType * npcType; // r0

    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
// Range: 0x800F5A10 -> 0x800F5B7C
class xAnimTable * zNPCManager::_CreateAnimTable(class zNPCManager * this /* r25 */, enum eAnimSetType animSetType /* r28 */, unsigned long long animSetID /* r27:r26 */) {
    // Local variables
    class xAnimTable * table; // r28
}
// signature: zNPCManager::_DestroyAnimTable(Sext::AnimationSet::eAnimSetType, unsigned long long)
// Range: 0x800F5B80 -> 0x800F5B84
void zNPCManager::_DestroyAnimTable() {
}
// Range: 0x800F5B90 -> 0x800F5BF0
void zNPCManager::_AddAnimTable(class zNPCManager * this /* r28 */, class xAnimTable * table /* r29 */, unsigned long long animSetID /* r31:r30 */) {
}
// signature: zNPCManager::_GetAnimTable(unsigned long long)
// Range: 0x800F5BF0 -> 0x800F5C30
class xAnimTable * zNPCManager::_GetAnimTable() {
    // Local variables
    class xAnimTable * curTable; // r3
}
// signature: zNPCManager::_RemoveAnimTable(unsigned long long)
// Range: 0x800F5C30 -> 0x800F5CCC
bool zNPCManager::_RemoveAnimTable(class zNPCManager * this /* r29 */) {
    // Local variables
    class xAnimTable * prevTable; // r31
    class xAnimTable * curTable; // r30
}
// Range: 0x800F5CD0 -> 0x800F5EF0
void zNPCManager::Timestep(float dt /* f31 */) {
    // References
    // -> unsigned int g_rttidParentTable[264];
    // -> class zGlobals globals;
}
