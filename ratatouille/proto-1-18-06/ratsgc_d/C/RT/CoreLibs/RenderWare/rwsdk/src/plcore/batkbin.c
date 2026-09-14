/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\batkbin.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80437D58 -> 0x80438888
*/
static char __dbFunctionName[33]; // size: 0x21, address: 0x804ECD20
// Range: 0x80437D58 -> 0x80437E28
int _rwPluginRegistryAddPluginStream(struct RwPluginRegistry * reg /* r30 */, unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r1+0xC */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r1+0x10 */, int (* getSizeCB)(void *, int, int) /* r1+0x14 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804ECD41
// Range: 0x80437E28 -> 0x80437EE0
int _rwPluginRegistryAddPlgnStrmlwysCB(struct RwPluginRegistry * reg /* r30 */, unsigned int pluginID /* r1+0x8 */, int (* alwaysCB)(void *, int, int) /* r1+0xC */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804ECD64
// Range: 0x80437EE0 -> 0x80437F98
int _rwPluginRegistryAddPlgnStrmRightsCB(struct RwPluginRegistry * reg /* r30 */, unsigned int pluginID /* r1+0x8 */, int (* rightsCB)(void *, int, int, unsigned int) /* r1+0xC */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[37];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804ECD89
// Range: 0x80437F98 -> 0x80438330
struct RwPluginRegistry * _rwPluginRegistryReadDataChunks(const struct RwPluginRegistry * reg /* r29 */, struct RwStream * stream /* r27 */, void * object /* r28 */) {
    // Local variables
    unsigned int length; // r1+0x14
    unsigned int version; // r1+0x10
    struct RwPluginRegEntry * entry; // r31
    unsigned int readType; // r1+0xC
    unsigned int readLength; // r1+0x8
    char tmpStr[128]; // r1+0x20
    unsigned int venderID; // r26
    unsigned int objectID; // r25
    struct RwError _rwErrorCode; // r1+0x18

    // References
    // -> static char __dbFunctionName[32];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ECDA9
// Range: 0x80438330 -> 0x8043841C
struct RwPluginRegistry * _rwPluginRegistryInvokeRights(const struct RwPluginRegistry * reg /* r30 */, unsigned int id /* r1+0x8 */, void * obj /* r1+0xC */, unsigned int extraData /* r1+0x10 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ECDC7
// Range: 0x8043841C -> 0x80438560
int _rwPluginRegistryGetSize(const struct RwPluginRegistry * reg /* r30 */, void * object /* r26 */) {
    // Local variables
    int size; // r29
    struct RwPluginRegEntry * entry; // r31
    int thisSize; // r27

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804ECDE0
// Range: 0x80438560 -> 0x80438760
struct RwPluginRegistry * _rwPluginRegistryWriteDataChunks(const struct RwPluginRegistry * reg /* r30 */, struct RwStream * stream /* r27 */, void * object /* r29 */) {
    // Local variables
    struct RwPluginRegEntry * entry; // r31
    int size; // r28

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804ECE01
// Range: 0x80438760 -> 0x80438888
struct RwPluginRegistry * _rwPluginRegistrySkipDataChunks(const struct RwPluginRegistry * reg /* r30 */, struct RwStream * stream /* r31 */) {
    // Local variables
    unsigned int length; // r1+0xC
    unsigned int readLength; // r1+0x8

    // References
    // -> static char __dbFunctionName[32];
}


