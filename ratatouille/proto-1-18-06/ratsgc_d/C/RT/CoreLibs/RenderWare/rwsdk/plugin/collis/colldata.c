/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\collis\colldata.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803DCDBC -> 0x803DD6A4
*/
int _rpCollisionNumInstances; // size: 0x4, address: 0x80D6C1C0
int _rpCollisionGlobalRefOffset; // size: 0x4, address: 0x80D6C1C4
int _rpCollisionAtomicRefOffset; // size: 0x4, address: 0x80D6C1C8
int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x80D6C1CC
int _rpCollisionWorldSectorDataOffset; // size: 0x4, address: 0x80D6C1D0
static char __dbFunctionName[14]; // size: 0xE, address: 0x804E7848
// Range: 0x803DCDBC -> 0x803DCE48
static void * CollisionOpen(void * instance /* r31 */) {
    // References
    // -> int _rpCollisionGlobalRefOffset;
    // -> void * RwEngineInstance;
    // -> int _rpCollisionNumInstances;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E7856
// Range: 0x803DCE48 -> 0x803DCEC4
static void * CollisionClose(void * instance /* r31 */) {
    // References
    // -> int _rpCollisionNumInstances;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7865
// total size: 0x4
struct RpCollisionData {
    // Members
    struct RpCollTree * tree; // offset 0x0, size 0x4
};
// Range: 0x803DCEC4 -> 0x803DCF60
static void * CollisionDataDestructor(void * object /* r30 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpCollisionData * collData; // r31

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E787D
// Range: 0x803DCF60 -> 0x803DCFE8
static void * CollisionDataConstructor(void * object /* r30 */, int offset /* r1+0x8 */) {
    // Local variables
    struct RpCollisionData * collData; // r31

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E7896
// Range: 0x803DCFE8 -> 0x803DD088
static int CollisionDataStreamGetSize(void * object /* r29 */, int offsetInObject /* r1+0x8 */) {
    // Local variables
    const struct RpCollisionData * collData; // r31
    unsigned int binarySize; // r30

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E78B1
// Range: 0x803DD088 -> 0x803DD184
static struct RwStream * CollisionDataStreamWrite(struct RwStream * stream /* r30 */, void * object /* r29 */, int offset /* r1+0x8 */) {
    // Local variables
    const struct RpCollisionData * collData; // r31
    unsigned int version; // r1+0xC

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E78CA
// Range: 0x803DD184 -> 0x803DD3C4
static struct RwStream * CollisionDataStreamRead(struct RwStream * stream /* r30 */, void * object /* r28 */, int offset /* r1+0x8 */) {
    // Local variables
    unsigned int version; // r1+0x14
    struct RpCollisionData * collData; // r29
    unsigned int numTriangles; // r1+0x10
    unsigned int numSplits; // r26
    int failConv; // r1+0xC
    struct RwBBox bbox; // r1+0x18
    struct RpMorphTarget * mt; // r25
    struct RwSphere * sph; // r31

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E78E2
// Range: 0x803DD3C4 -> 0x803DD470
static int CollisionGeometryPluginAttach() {
    // Local variables
    int result; // r31
    int offset; // r30

    // References
    // -> int _rpCollisionGeometryDataOffset;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804E7900
// Range: 0x803DD470 -> 0x803DD51C
static int CollisionWorldSectorPluginAttach() {
    // Local variables
    int result; // r31
    int offset; // r30

    // References
    // -> int _rpCollisionWorldSectorDataOffset;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E7921
// Range: 0x803DD51C -> 0x803DD544
static void * CollisionAtomicInit(void * object /* r3 */) {
    // References
    // -> int _rpCollisionAtomicRefOffset;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E7935
// Range: 0x803DD544 -> 0x803DD5C4
struct RpCollTree * RpCollisionGeometryGetCollTree(struct RpGeometry * geometry /* r30 */) {
    // Local variables
    struct RpCollisionData * collData; // r31

    // References
    // -> int _rpCollisionGeometryDataOffset;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E7954
// Range: 0x803DD5C4 -> 0x803DD6A4
int RpCollisionPluginAttach() {
    // Local variables
    int result; // r31

    // References
    // -> int _rpCollisionAtomicRefOffset;
    // -> int _rpCollisionGlobalRefOffset;
    // -> static char __dbFunctionName[24];
}


