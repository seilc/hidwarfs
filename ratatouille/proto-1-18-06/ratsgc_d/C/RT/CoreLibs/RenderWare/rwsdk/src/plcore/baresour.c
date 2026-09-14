/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\baresour.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043565C -> 0x8043661C
*/
static char __dbFunctionName[14]; // size: 0xE, address: 0x804ECB50
// total size: 0x28
struct rwResources {
    // Members
    int maxSize; // offset 0x0, size 0x4
    int currentSize; // offset 0x4, size 0x4
    int reusageSize; // offset 0x8, size 0x4
    void * memHeap; // offset 0xC, size 0x4
    struct RwLinkList entriesA; // offset 0x10, size 0x8
    struct RwLinkList entriesB; // offset 0x18, size 0x8
    struct RwLinkList * freeEntries; // offset 0x20, size 0x4
    struct RwLinkList * usedEntries; // offset 0x24, size 0x4
};
// Range: 0x8043565C -> 0x804358B8
static struct rwResources * ResourcesInit(struct rwResources * res /* r31 */, unsigned int size /* r30 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ECB5E
struct RwModuleInfo resourcesModule; // size: 0x8, address: 0x80D6C330
// Range: 0x804358B8 -> 0x804359A4
void * _rwResourcesOpen(void * instance /* r29 */, int offset /* r1+0x8 */) {
    // Local variables
    unsigned int arenaSize; // r30

    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ECB6F
// Range: 0x804359A4 -> 0x80435A88
void * _rwResourcesClose(void * instance /* r31 */) {
    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ECB81
// Range: 0x80435A88 -> 0x80435BC4
int RwResourcesFreeResEntry(struct RwResEntry * entry /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> struct RwModuleInfo resourcesModule;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ECB99
// Range: 0x80435BC4 -> 0x80435CCC
void _rwResourcesPurge() {
    // Local variables
    struct RwLinkList * usedEntries; // r30
    struct RwLinkList * freeEntries; // r31
    struct RwLLLink * first; // r28
    struct RwLLLink * last; // r29

    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ECBAB
// Range: 0x80435CCC -> 0x80435FB4
struct RwResEntry * RwResourcesAllocateResEntry(void * owner /* r23 */, struct RwResEntry * * ownerRef /* r29 */, int size /* r27 */, void (* destroyNotify)(struct RwResEntry *) /* r1+0x8 */) {
    // Local variables
    struct RwResEntry * entry; // r31
    int exhaustedOptions; // r25
    struct RwLLLink * cur; // r28
    struct RwLLLink * end; // r26
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[28];
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ECBC7
// Range: 0x80435FB4 -> 0x804360DC
struct RwResEntry * RwResourcesUseResEntry(struct RwResEntry * entry /* r31 */) {
    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ECBDE
// Range: 0x804360DC -> 0x80436338
int RwResourcesSetArenaSize(unsigned int size /* r30 */) {
    // Local variables
    struct rwResources * res; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[24];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> struct RwModuleInfo resourcesModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ECBF6
// Range: 0x80436338 -> 0x804363AC
int RwResourcesGetArenaSize() {
    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ECC0E
// Range: 0x804363AC -> 0x80436478
int RwResourcesGetArenaUsage() {
    // Local variables
    struct RwLLLink * cur; // r31
    struct RwLLLink * end; // r28
    int usage; // r30
    struct RwResEntry * entry; // r29

    // References
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ECC27
// Range: 0x80436478 -> 0x8043661C
int RwResourcesEmptyArena() {
    // Local variables
    struct RwLLLink * cur; // r31
    struct RwLLLink * end; // r29
    struct RwResEntry * entry; // r28

    // References
    // -> static char __dbFunctionName[22];
    // -> struct RwModuleInfo resourcesModule;
    // -> void * RwEngineInstance;
}


