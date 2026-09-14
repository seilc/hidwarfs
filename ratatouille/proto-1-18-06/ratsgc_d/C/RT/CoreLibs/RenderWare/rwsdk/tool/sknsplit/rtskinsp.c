/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\sknsplit\rtskinsp.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804703D0 -> 0x804711C8
*/
static char __dbFunctionName[32]; // size: 0x20, address: 0x804EFC38
// Range: 0x804703D0 -> 0x804707D4
static struct rtSkinSplitMatTriList * _rtSkinSplitMeshBoneRLEValidate(struct rtSkinSplitGeomStat * geomStat /* r26 */, struct rtSkinSplitMatTriList * matTriList /* r27 */, struct RpMesh * mesh /* r25 */, unsigned int meshId /* r18 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r22
    unsigned int idx; // r31
    unsigned char * rle; // r24
    unsigned char * skinMeshRLECount; // r23
    unsigned char * skinMeshRLE; // r21
    unsigned int skinBoneIdx; // r29
    const struct RwMatrixWeights * skinBoneWeight; // r28
    unsigned int numRLE; // r20
    unsigned int numMtx; // r19
    struct rtSkinSplitBoneFlag boneFlag; // r1+0x8

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EFC58
// Range: 0x804707D4 -> 0x80470924
static struct RpMesh * _rtSkinSplitMeshSetBoneRLE(struct RpMesh * mesh /* r26 */, struct RpMeshHeader * meshHeader /* r24 */, void * data /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int meshId; // r28
    struct RpMesh * meshHead; // r23
    unsigned char * rle; // r25
    unsigned char * skinMeshRLECount; // r30
    unsigned char * skinMeshRLE; // r22
    struct rtSkinSplitGeomStat * geomStat; // r29
    struct rtSkinSplitMatTriList * matTriList; // r31

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EFC73
// Range: 0x80470924 -> 0x804709CC
static struct RpGeometry * _rtSkinSplitGeomResetTriMat(struct rtSkinSplitGeomStat * geomStat /* r26 */, struct RpGeometry * geom /* r27 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r28
    struct RpTriangle * tri; // r29
    struct rtSkinSplitMatTriList * matTriList; // r31

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EFC8F
// Range: 0x804709CC -> 0x80470B54
static struct RpAtomic * _rtSkinSplitCreateGeometryMesh(struct rtSkinSplitGeomStat * geomStat /* r31 */, struct RpAtomic * atomic /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int j; // r27
    struct RpAtomic * result; // r26
    struct RpGeometry * geom; // r28
    struct RpTriangle * tri; // r25
    struct rtSkinSplitMatTriList * matTriList; // r30

    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EFCAE
// Range: 0x80470B54 -> 0x804711C8
struct RpAtomic * RtSkinSplitAtomicSplitGeometry(struct RpAtomic * atomic /* r27 */, unsigned int boneLimit /* r28 */) {
    // Local variables
    struct rtSkinSplitGeomStat geomStat; // r1+0xC
    struct rtSkinSplitMatTriList * matTriList; // r1+0x8
    struct rtSkinSplitMatTriList * matTriListNew; // r26
    struct rtSkinSplitMatTriList * matTriListNext; // r24
    struct RpAtomic * result; // r30
    struct RpMaterial * mat; // r23
    unsigned int i; // r29
    unsigned int size; // r25

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}


