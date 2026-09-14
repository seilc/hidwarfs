/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\batkreg.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80438888 -> 0x804397D4
*/
static struct RwPluginRegistry * * toolkitNonFLRegList; // size: 0x4, address: 0x80D6C340
static unsigned int numRegToolkits; // size: 0x4, address: 0x80D6C344
static int _rwPluginRegFreeListBlockSize; // size: 0x4, address: 0x80D687F8
static int _rwPluginRegListPreallocBlocks; // size: 0x4, address: 0x80D687FC
static char __dbFunctionName[22]; // size: 0x16, address: 0x804ECE28
static struct RwFreeList * toolkitRegEntries; // size: 0x4, address: 0x80D6C348
static struct RwFreeList toolkitRegEntriesSpace; // size: 0x30, address: 0x80D5D440
// Range: 0x80438888 -> 0x80438930
int _rwPluginRegistryOpen() {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwPluginRegistry * * toolkitNonFLRegList;
    // -> static unsigned int numRegToolkits;
    // -> static struct RwFreeList * toolkitRegEntries;
    // -> static struct RwFreeList toolkitRegEntriesSpace;
    // -> static int _rwPluginRegListPreallocBlocks;
    // -> static int _rwPluginRegFreeListBlockSize;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ECE3E
// Range: 0x80438930 -> 0x804389C8
static void rwDestroyEntry(void * object /* r1+0x8 */, void * freelist /* r1+0xC */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ECE4D
// Range: 0x804389C8 -> 0x80438B10
int _rwPluginRegistryClose() {
    // Local variables
    unsigned int i; // r29
    struct RwPluginRegEntry * entry; // r30
    struct RwPluginRegistry * parentReg; // r31
    struct RwPluginRegEntry * nextEntry; // r28

    // References
    // -> static struct RwFreeList * toolkitRegEntries;
    // -> static struct RwPluginRegistry * * toolkitNonFLRegList;
    // -> void * RwEngineInstance;
    // -> static unsigned int numRegToolkits;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ECE64
// Range: 0x80438B10 -> 0x80438B2C
static void * PluginDefaultConstructor(void * object /* r3 */) {
    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ECE7D
// Range: 0x80438B2C -> 0x80438B48
static void * PluginDefaultDestructor(void * object /* r3 */) {
    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ECE95
// Range: 0x80438B48 -> 0x80438B64
static void * PluginDefaultCopy(void * dstObject /* r3 */) {
    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804ECEA7
// Range: 0x80438B64 -> 0x80438C08
int _rwPluginRegistryGetPluginOffset(const struct RwPluginRegistry * reg /* r30 */, unsigned int pluginID /* r1+0x8 */) {
    // Local variables
    const struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804ECEC8
// Range: 0x80438C08 -> 0x80439128
int _rwPluginRegistryAddPlugin(struct RwPluginRegistry * reg /* r30 */, int size /* r1+0x8 */, unsigned int pluginID /* r25 */, void * (* constructCB)(void *, int, int) /* r17 */, void * (* destructCB)(void *, int, int) /* r18 */, void * (* copyCB)(void *, void *, int, int) /* r19 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31
    int newStructSize; // r24
    struct RwError _rwErrorCode; // r1+0x14
    unsigned int i; // r27
    struct RwPluginRegistry * * newRegistryList; // r26
    unsigned int j; // r28
    char msg[80]; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0xC

    // References
    // -> static char __dbFunctionName[27];
    // -> static struct RwFreeList * toolkitRegEntries;
    // -> void * RwEngineInstance;
    // -> static struct RwPluginRegistry * * toolkitNonFLRegList;
    // -> static unsigned int numRegToolkits;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804ECEE3
// Range: 0x80439128 -> 0x80439214
void _rwPluginRegistryPlaceValidationCodes(const struct RwPluginRegistry * reg /* r27 */, void * object /* r28 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31
    unsigned int frontOfMemoryOffset; // r26
    unsigned int backOfMemoryOffset; // r25
    unsigned int * frontOfMemory; // r30
    unsigned int * backOfMemory; // r29

    // References
    // -> static char __dbFunctionName[38];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804ECF09
// Range: 0x80439214 -> 0x80439314
int _rwPluginRegistryValidateObject(const struct RwPluginRegistry * reg /* r26 */, void * object /* r27 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31
    int valid; // r30
    unsigned int frontOfMemoryOffset; // r25
    unsigned int backOfMemoryOffset; // r24
    const unsigned int * frontOfMemory; // r29
    const unsigned int * backOfMemory; // r28

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ECF29
// Range: 0x80439314 -> 0x8043946C
struct RwPluginRegistry * _rwPluginRegistryInitObject(const struct RwPluginRegistry * reg /* r30 */, void * object /* r29 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ECF45
// Range: 0x8043946C -> 0x804395EC
struct RwPluginRegistry * _rwPluginRegistryDeInitObject(const struct RwPluginRegistry * reg /* r29 */, void * object /* r25 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31
    void * (* const destructCB)(void *, int, int); // r28
    int offsetInObject; // r27
    int sizeInObject; // r26

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804ECF63
// Range: 0x804395EC -> 0x804397D4
struct RwPluginRegistry * _rwPluginRegistryCopyObject(const struct RwPluginRegistry * reg /* r29 */, void * dstObject /* r27 */, void * srcObject /* r28 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r30

    // References
    // -> static char __dbFunctionName[28];
}


