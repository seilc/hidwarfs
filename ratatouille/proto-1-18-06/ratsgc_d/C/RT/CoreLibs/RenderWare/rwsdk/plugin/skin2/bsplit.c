/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\skin2\bsplit.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F6808 -> 0x803F6E30
*/
static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E8E58
// total size: 0x8
struct SkinMatrixCache {
    // Members
    struct RwMatrixTag * aligned; // offset 0x0, size 0x4
    void * unaligned; // offset 0x4, size 0x4
};
// total size: 0x14
struct SkinGlobalPlatform {
    // Members
    struct RxPipeline * pipelines[5]; // offset 0x0, size 0x14
};
// total size: 0x18
struct SkinSplitData {
    // Members
    unsigned int boneLimit; // offset 0x0, size 0x4
    unsigned int numMeshes; // offset 0x4, size 0x4
    unsigned int numRLE; // offset 0x8, size 0x4
    unsigned char * matrixRemapIndices; // offset 0xC, size 0x4
    unsigned char * meshRLECount; // offset 0x10, size 0x4
    unsigned char * meshRLE; // offset 0x14, size 0x4
};
// total size: 0x3C
struct SkinGlobals {
    // Members
    int engineOffset; // offset 0x0, size 0x4
    int atomicOffset; // offset 0x4, size 0x4
    int geometryOffset; // offset 0x8, size 0x4
    struct SkinMatrixCache matrixCache; // offset 0xC, size 0x8
    unsigned int numMatrices; // offset 0x14, size 0x4
    struct RwFreeList * freeList; // offset 0x18, size 0x4
    struct RwModuleInfo module; // offset 0x1C, size 0x8
    struct SkinGlobalPlatform platform; // offset 0x24, size 0x14
    struct SkinSplitData * skinSplitData; // offset 0x38, size 0x4
};
struct SkinGlobals _rpSkinGlobals; // size: 0x3C, address: 0x8054F9F0
// total size: 0x10
struct SkinBoneData {
    // Members
    unsigned int numBones; // offset 0x0, size 0x4
    unsigned int numUsedBones; // offset 0x4, size 0x4
    unsigned char * usedBoneList; // offset 0x8, size 0x4
    struct RwMatrixTag * invBoneToSkinMat; // offset 0xC, size 0x4
};
// total size: 0x10
struct RwMatrixWeights {
    // Members
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// total size: 0xC
struct SkinVertexMaps {
    // Members
    unsigned int maxWeights; // offset 0x0, size 0x4
    unsigned int * matrixIndices; // offset 0x4, size 0x4
    struct RwMatrixWeights * matrixWeights; // offset 0x8, size 0x4
};
// total size: 0x14
struct SkinPlatformData {
    // Members
    void * vertices; // offset 0x0, size 0x4
    void * normals; // offset 0x4, size 0x4
    unsigned char * weights; // offset 0x8, size 0x4
    unsigned char * indices; // offset 0xC, size 0x4
    unsigned int skinType; // offset 0x10, size 0x4
};
// total size: 0x4C
struct RpSkin {
    // Members
    struct SkinBoneData boneData; // offset 0x0, size 0x10
    struct SkinVertexMaps vertexMaps; // offset 0x10, size 0xC
    struct SkinPlatformData platformData; // offset 0x1C, size 0x14
    struct SkinSplitData skinSplitData; // offset 0x30, size 0x18
    void * unaligned; // offset 0x48, size 0x4
};
// Range: 0x803F6808 -> 0x803F68B0
unsigned char * _rpSkinGetMeshBoneRemapIndices(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E8E77
// Range: 0x803F68B0 -> 0x803F6958
unsigned char * _rpSkinGetMeshBoneRLECount(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[27];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8E92
// Range: 0x803F6958 -> 0x803F6A00
unsigned char * _rpSkinGetMeshBoneRLE(struct RpSkin * skin /* r30 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> struct SkinGlobals _rpSkinGlobals;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804E8EA8
// Range: 0x803F6A00 -> 0x803F6B00
struct RpSkin * _rpSkinSplitDataCreate(struct RpSkin * skin /* r28 */, unsigned int boneLimit /* r1+0x8 */, unsigned int numMatrices /* r25 */, unsigned int numMeshes /* r29 */, unsigned int numRLE /* r26 */) {
    // Local variables
    unsigned int size; // r30
    struct SkinSplitData * skinSplitData; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8EBF
// Range: 0x803F6B00 -> 0x803F6B9C
int _rpSkinSplitDataDestroy(struct RpSkin * skin /* r1+0x8 */) {
    // Local variables
    struct SkinSplitData * skinSplitData; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E8ED7
// Range: 0x803F6B9C -> 0x803F6C98
struct RwStream * _rpSkinSplitDataStreamWrite(struct RwStream * stream /* r29 */, const struct RpSkin * skin /* r30 */) {
    // Local variables
    int streamSize; // r28
    const struct SkinSplitData * skinSplitData; // r31

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E8EF3
// Range: 0x803F6C98 -> 0x803F6DD0
struct RwStream * _rpSkinSplitDataStreamRead(struct RwStream * stream /* r29 */, struct RpSkin * skin /* r30 */) {
    // Local variables
    int numMeshes; // r1+0x10
    int numRLE; // r1+0xC
    int boneLimit; // r1+0x8
    int streamSize; // r28
    struct SkinSplitData * skinSplitData; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E8F0E
// Range: 0x803F6DD0 -> 0x803F6E30
int _rpSkinSplitDataStreamGetSize(const struct RpSkin * skin /* r3 */) {
    // Local variables
    unsigned int streamSize; // r31

    // References
    // -> static char __dbFunctionName[30];
}


