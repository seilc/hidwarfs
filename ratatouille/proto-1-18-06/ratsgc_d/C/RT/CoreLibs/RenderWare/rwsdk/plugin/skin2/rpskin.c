/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\skin2\rpskin.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F6E30 -> 0x803F97D4
*/
static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8F30
// Range: 0x803F6E30 -> 0x803F6E7C
static int MatfxPluginIsAttached() {
    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8F46
// Range: 0x803F6E7C -> 0x803F6EC8
static int ToonPluginIsAttached() {
    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[43]; // size: 0x2B, address: 0x804E8F5B
enum RpSkinType {
    rpNASKINTYPE = 0,
    rpSKINTYPEGENERIC = 1,
    rpSKINTYPEMATFX = 2,
    rpSKINTYPETOON = 3,
    rpSKINTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x803F6EC8 -> 0x803F6F8C
static struct RpAtomic * SkinAtomicAttachBestPipeForAttachedPlugins(struct RpAtomic * atomic /* r1+0x8 */, enum RpSkinType type /* r30 */) {
    // References
    // -> static char __dbFunctionName[43];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E8F86
// Range: 0x803F6F8C -> 0x803F7064
static struct RpAtomic * SkinAtomicSetup(struct RpAtomic * atomic /* r31 */, enum RpSkinType type /* r1+0x8 */) {
    // Local variables
    struct RpGeometry * geometry; // r29
    struct RpSkin * skin; // r28
    struct RpAtomic * success; // r27

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E8F96
// Range: 0x803F7064 -> 0x803F7170
static void SkinFindMaxWeights(struct RpSkin * skin /* r31 */, struct RwMatrixWeights * matrixWeights /* r27 */, unsigned int numVertices /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r29

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8FA9
// Range: 0x803F7170 -> 0x803F72B0
static void SkinFindNumUsedBones(struct RpSkin * skin /* r24 */, unsigned int * indices /* r23 */, struct RwMatrixWeights * weights /* r1+0x8 */, unsigned char * usedBoneList /* r27 */, unsigned int * numUsedBones /* r31 */, unsigned int numVertices /* r1+0xC */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r29
    unsigned int k; // r28
    unsigned int index; // r26
    int newBone; // r25

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E8FBE
// Range: 0x803F72B0 -> 0x803F7590
static int SkinCreateSkinData(struct RpSkin * skin /* r31 */, unsigned int numBones /* r26 */, unsigned int numUsedBones /* r29 */, unsigned int numVertices /* r27 */, unsigned char * usedBoneList /* r17 */, struct RwMatrixWeights * vertexWeights /* r18 */, unsigned int * vertexIndices /* r19 */, struct RwMatrixTag * inverseMatrices /* r20 */) {
    // Local variables
    unsigned int size; // r25
    unsigned int size; // r24
    unsigned int iBone; // r28
    unsigned int size; // r23
    unsigned int size; // r22

    // References
    // -> static char __dbFunctionName[19];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804E8FD1
// Range: 0x803F7590 -> 0x803F7738
static struct RpSkin * SkinCreate(unsigned int numVertices /* r29 */, unsigned int numBones /* r26 */, unsigned int numBonesUsed /* r1+0x8 */, unsigned int maxWeights /* r1+0xC */, struct RwMatrixWeights * vertexWeights /* r28 */, unsigned int * vertexIndices /* r27 */, struct RwMatrixTag * inverseMatrices /* r1+0x10 */) {
    // Local variables
    unsigned char usedBoneList[256]; // r1+0x14
    struct RpSkin * skin; // r31

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[11];
}

static int _rpSkinFreeListBlockSize; // size: 0x4, address: 0x80D68448
static int _rpSkinFreeListPreallocBlocks; // size: 0x4, address: 0x80D6844C
static char __dbFunctionName[9]; // size: 0x9, address: 0x804E8FDC
static struct RwFreeList _rpSkinFreeList; // size: 0x30, address: 0x80D5C2B8
// Range: 0x803F7738 -> 0x803F7934
static void * SkinOpen(void * instance /* r26 */) {
    // Local variables
    unsigned int pipes; // r30
    int success; // r28
    unsigned int size; // r29

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[9];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwFreeList _rpSkinFreeList;
    // -> static int _rpSkinFreeListPreallocBlocks;
    // -> static int _rpSkinFreeListBlockSize;
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804E8FE5
// Range: 0x803F7934 -> 0x803F7ADC
static void * SkinClose(void * instance /* r29 */) {
    // Local variables
    int success; // r30

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8FEF
// Range: 0x803F7ADC -> 0x803F7B60
static void * SkinGeometryConstructor(void * object /* r31 */) {
    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E9007
// Range: 0x803F7B60 -> 0x803F7C48
static void * SkinGeometryDestructor(void * object /* r30 */) {
    // Local variables
    struct RpGeometry * geometry; // r31
    struct RpSkin * skin; // r28

    // References
    // -> static char __dbFunctionName[23];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E901E
// Range: 0x803F7C48 -> 0x803F7D08
static void * SkinGeometryCopy(void * dstObject /* r30 */, void * srcObject /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E902F
// total size: 0x8
struct SkinAtomicPlatformData {
    // Members
    void * vertices; // offset 0x0, size 0x4
    void * normals; // offset 0x4, size 0x4
};
// total size: 0xC
struct SkinAtomicData {
    // Members
    struct RpHAnimHierarchy * hierarchy; // offset 0x0, size 0x4
    struct SkinAtomicPlatformData platformData; // offset 0x4, size 0x8
};
// Range: 0x803F7D08 -> 0x803F7DA4
static void * SkinAtomicConstructor(void * object /* r31 */) {
    // Local variables
    struct RpAtomic * atomic; // r30
    struct SkinAtomicData * atomicData; // r29

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E9045
// Range: 0x803F7DA4 -> 0x803F7E44
static void * SkinAtomicDestructor(void * object /* r30 */) {
    // Local variables
    struct RpAtomic * atomic; // r29
    struct SkinAtomicData * atomicData; // r31

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E905A
// Range: 0x803F7E44 -> 0x803F7FA4
static void * SkinAtomicCopy(void * dstObject /* r26 */, void * srcObject /* r25 */) {
    // Local variables
    const struct RpAtomic * srcAtomic; // r28
    const struct SkinAtomicData * srcAtomicData; // r30
    struct RpAtomic * dstAtomic; // r27
    struct SkinAtomicData * dstAtomicData; // r29

    // References
    // -> static char __dbFunctionName[15];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9069
// Range: 0x803F7FA4 -> 0x803F80A0
static int SkinAtomicAlways(void * object /* r28 */) {
    // Local variables
    enum RpSkinType type; // r29
    struct RpAtomic * atomic; // r31

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E907A
// Range: 0x803F80A0 -> 0x803F817C
static int SkinAtomicRights(void * object /* r28 */, unsigned int extraData /* r1+0x8 */) {
    // Local variables
    struct RpAtomic * atomic; // r30
    enum RpSkinType type; // r29

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E908B
// Range: 0x803F817C -> 0x803F82C4
static int SkinGeometrySize(void * object /* r26 */) {
    // Local variables
    const struct RpGeometry * geometry; // r30
    const struct RpSkin * skin; // r29
    int size; // r31
    unsigned int numVertices; // r27

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E909C
// Range: 0x803F82C4 -> 0x803F84DC
static struct RwStream * SkinGeometryWrite(struct RwStream * stream /* r29 */, void * object /* r25 */) {
    // Local variables
    const struct RpGeometry * geometry; // r28
    const struct RpSkin * skin; // r31
    unsigned int skinInfo; // r1+0x8
    unsigned int numVertices; // r26
    struct RwStream * success; // r30

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E90AE
// Range: 0x803F84DC -> 0x803F8764
static struct RwStream * SkinGeometryRead(struct RwStream * stream /* r28 */, void * object /* r21 */) {
    // Local variables
    struct RpGeometry * geometry; // r27
    unsigned int skinInfo; // r1+0x8
    unsigned int maxWeights; // r25
    unsigned int numBones; // r22
    unsigned int numUsedBones; // r24
    unsigned int numVertices; // r26
    struct RpSkin * skin; // r31
    struct RwStream * success; // r30
    unsigned int size; // r23

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804E90BF
// Range: 0x803F8764 -> 0x803F8A60
static struct RwStream * SkinAtomicRead(struct RwStream * stream /* r28 */, void * object /* r23 */, int sizeInObject /* r1+0x8 */) {
    // Local variables
    struct RpAtomic * atomic; // r24
    struct RpGeometry * geometry; // r27
    struct RpSkin * skin; // r31
    struct RwStream * success; // r30
    unsigned int numBones; // r1+0xC
    unsigned int numVertices; // r26
    unsigned int iBone; // r25

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E90CE
// Range: 0x803F8A60 -> 0x803F8A7C
static struct RwStream * SkinAtomicWrite(struct RwStream * stream /* r3 */) {
    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E90DE
// Range: 0x803F8A7C -> 0x803F8AD0
static int SkinAtomicGetSize(void * object /* r1+0x8 */) {
    // Local variables
    int size; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804E90F0
// Range: 0x803F8AD0 -> 0x803F8D38
int RpSkinPluginAttach() {
    // Local variables
    int success; // r30

    // References
    // -> static char __dbFunctionName[19];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E9103
// Range: 0x803F8D38 -> 0x803F8E4C
struct RpAtomic * RpSkinAtomicSetHAnimHierarchy(struct RpAtomic * atomic /* r28 */, struct RpHAnimHierarchy * hierarchy /* r29 */) {
    // Local variables
    struct SkinAtomicData * atomicData; // r30

    // References
    // -> static char __dbFunctionName[30];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E9121
// Range: 0x803F8E4C -> 0x803F8F28
struct RpHAnimHierarchy * RpSkinAtomicGetHAnimHierarchy(const struct RpAtomic * atomic /* r29 */) {
    // Local variables
    const struct SkinAtomicData * atomicData; // r30

    // References
    // -> static char __dbFunctionName[30];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E913F
// Range: 0x803F8F28 -> 0x803F8FE0
struct RpSkin * RpSkinGeometryGetSkin(struct RpGeometry * geometry /* r29 */) {
    // Local variables
    struct RpSkin * skin; // r30

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9155
// Range: 0x803F8FE0 -> 0x803F90E4
struct RpGeometry * RpSkinGeometrySetSkin(struct RpGeometry * geometry /* r31 */, struct RpSkin * skin /* r28 */) {
    // Local variables
    struct RpSkin * oldSkin; // r29

    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804E916B
// Range: 0x803F90E4 -> 0x803F9260
struct RpSkin * RpSkinCreate(unsigned int numVertices /* r25 */, unsigned int numBones /* r26 */, struct RwMatrixWeights * vertexWeights /* r27 */, unsigned int * vertexIndices /* r28 */, struct RwMatrixTag * inverseMatrices /* r29 */) {
    // Local variables
    struct RpSkin * skin; // r30

    // References
    // -> static char __dbFunctionName[13];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804E9178
// Range: 0x803F9260 -> 0x803F9354
struct RpSkin * RpSkinDestroy(struct RpSkin * skin /* r31 */) {
    // References
    // -> struct SkinGlobals _rpSkinGlobals;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E9186
// Range: 0x803F9354 -> 0x803F93FC
unsigned int RpSkinGetNumBones(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E9198
// Range: 0x803F93FC -> 0x803F94A4
struct RwMatrixWeights * RpSkinGetVertexBoneWeights(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E91B3
// Range: 0x803F94A4 -> 0x803F954C
unsigned int * RpSkinGetVertexBoneIndices(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E91CE
// Range: 0x803F954C -> 0x803F95F4
struct RwMatrixTag * RpSkinGetSkinToBoneMatrices(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E91EA
// Range: 0x803F95F4 -> 0x803F96D4
struct RpAtomic * RpSkinAtomicSetType(struct RpAtomic * atomic /* r30 */, enum RpSkinType type /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[20];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E91FE
// Range: 0x803F96D4 -> 0x803F97D4
enum RpSkinType RpSkinAtomicGetType(struct RpAtomic * atomic /* r28 */) {
    // Local variables
    struct RxPipeline * pipeline; // r1+0x8
    enum RpSkinType type; // r29

    // References
    // -> static char __dbFunctionName[20];
    // -> struct SkinGlobals _rpSkinGlobals;
}


