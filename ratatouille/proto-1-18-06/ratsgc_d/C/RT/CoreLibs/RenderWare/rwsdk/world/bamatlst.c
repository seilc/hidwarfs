/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\bamatlst.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80411BE4 -> 0x80412BB4
*/
static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EA628
// Range: 0x80411BE4 -> 0x80411CC0
struct RpMaterialList * _rpMaterialListDeinitialize(struct RpMaterialList * matList /* r31 */) {
    // Local variables
    struct RpMaterial * * materialArray; // r30
    int materialCount; // r28
    int nI; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA644
// Range: 0x80411CC0 -> 0x80411D44
struct RpMaterialList * _rpMaterialListInitialize(struct RpMaterialList * matList /* r31 */) {
    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA65E
// Range: 0x80411D44 -> 0x80411DD4
struct RpMaterial * * _rpMaterialListAlloc(unsigned int count /* r1+0x8 */) {
    // Local variables
    struct RpMaterial * * result; // r31
    unsigned int memSize; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EA673
// Range: 0x80411DD4 -> 0x80411E8C
struct RpMaterial * _rpMaterialListGetMaterial(const struct RpMaterialList * matList /* r31 */, int matIndex /* r30 */) {
    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EA68E
// Range: 0x80411E8C -> 0x80412080
struct RpMaterialList * _rpMaterialListSetSize(struct RpMaterialList * matList /* r31 */, int size /* r28 */) {
    // Local variables
    struct RpMaterial * * materials; // r29
    unsigned long memSize; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[23];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EA6A5
// Range: 0x80412080 -> 0x804122B4
int _rpMaterialListAppendMaterial(struct RpMaterialList * matList /* r31 */, struct RpMaterial * material /* r28 */) {
    // Local variables
    struct RpMaterial * * materials; // r30
    unsigned int count; // r27
    unsigned long memSize; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[30];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EA6C3
// Range: 0x804122B4 -> 0x80412380
int _rpMaterialListFindMaterialIndex(const struct RpMaterialList * matList /* r30 */, const struct RpMaterial * material /* r29 */) {
    // Local variables
    int numMats; // r31

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EA6E4
// Range: 0x80412380 -> 0x80412404
static unsigned int MaterialListStreamGetSizeActual(const struct RpMaterialList * matList /* r30 */) {
    // Local variables
    unsigned int size; // r31

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EA704
// Range: 0x80412404 -> 0x804124F4
unsigned int _rpMaterialListStreamGetSize(const struct RpMaterialList * matList /* r31 */) {
    // Local variables
    unsigned int size; // r29
    int i; // r30
    int j; // r28

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EA721
// Range: 0x804124F4 -> 0x8041271C
struct RpMaterialList * _rpMaterialListStreamWrite(const struct RpMaterialList * matList /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    int i; // r30
    int j; // r1+0x8

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA73C
// Range: 0x8041271C -> 0x80412BB4
struct RpMaterialList * _rpMaterialListStreamRead(struct RwStream * stream /* r27 */, struct RpMaterialList * matList /* r30 */) {
    // Local variables
    int i; // r28
    int len; // r1+0x10
    int * matindex; // r31
    unsigned int size; // r1+0xC
    unsigned int version; // r1+0x8
    int status; // r25
    struct RpMaterial * material; // r26
    struct RwError _rwErrorCode; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[26];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}


