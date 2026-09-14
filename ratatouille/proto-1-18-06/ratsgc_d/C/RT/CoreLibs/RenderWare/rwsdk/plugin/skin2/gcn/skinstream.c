/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\skin2\gcn\skinstream.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803FBA10 -> 0x803FC3AC
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9368
// Range: 0x803FBA10 -> 0x803FBB78
int _rpSkinGeometryNativeSize(const struct RpGeometry * geometry /* r29 */) {
    // Local variables
    int size; // r30
    struct RpSkin * skin; // r31
    struct RxGameCubeVertexBuffer * vbHeader; // r28

    // References
    // -> static char __dbFunctionName[26];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E9382
// Range: 0x803FBB78 -> 0x803FBD88
struct RwStream * _rpSkinGeometryNativeWrite(struct RwStream * stream /* r30 */, const struct RpGeometry * geometry /* r29 */) {
    // Local variables
    enum RwPlatformID id; // r1+0xC
    unsigned int skinInfo; // r1+0x8
    int numVertices; // r27
    int size; // r25
    int maxWeights; // r26
    const struct RpSkin * skin; // r31

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E939D
// Range: 0x803FBD88 -> 0x803FC290
struct RwStream * _rpSkinGeometryNativeRead(struct RwStream * stream /* r29 */, struct RpGeometry * geometry /* r27 */) {
    // Local variables
    unsigned int version; // r1+0x14
    unsigned int size; // r1+0x10
    unsigned int skinInfo; // r1+0xC
    int numVertices; // r28
    enum RwPlatformID id; // r1+0x8
    struct RpSkin * skin; // r31
    struct RwError _rwErrorCode; // r1+0x18

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[26];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E93B7
// Range: 0x803FC290 -> 0x803FC3AC
int _rpSkinAtomicNativeSize(const struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct SkinAtomicData * atomicData; // r31
    struct RxGameCubeVertexBuffer * vbHeader; // r29

    // References
    // -> static char __dbFunctionName[24];
    // -> struct SkinGlobals _rpSkinGlobals;
}


