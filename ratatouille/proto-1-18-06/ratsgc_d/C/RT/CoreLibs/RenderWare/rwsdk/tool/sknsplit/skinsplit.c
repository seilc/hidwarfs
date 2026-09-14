/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\sknsplit\skinsplit.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8046E408 -> 0x804703D0
*/
unsigned char _rtSkinSplitBitTable[16]; // size: 0x10, address: 0x8055B430
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EFAA8
// total size: 0x90
struct rtSkinSplitMatTriList {
    // Members
    struct rtSkinSplitMatTriList * next; // offset 0x0, size 0x4
    unsigned int numBones; // offset 0x4, size 0x4
    unsigned int boneRoot; // offset 0x8, size 0x4
    struct rtSkinSplitBoneFlag boneFlag; // offset 0xC, size 0x20
    struct rtSkinSplitBoneFlag boneLockFlag; // offset 0x2C, size 0x20
    struct rtSkinSplitBoneFlag boneFreeFlag; // offset 0x4C, size 0x20
    unsigned int * boneRemapIndex; // offset 0x6C, size 0x4
    unsigned int numRLE; // offset 0x70, size 0x4
    unsigned int * rleMap; // offset 0x74, size 0x4
    struct RpMaterial * mat; // offset 0x78, size 0x4
    int matIdx; // offset 0x7C, size 0x4
    int origMatIdx; // offset 0x80, size 0x4
    unsigned int maxTris; // offset 0x84, size 0x4
    unsigned int numTris; // offset 0x88, size 0x4
    unsigned int * triList; // offset 0x8C, size 0x4
};
// total size: 0x74
struct rtSkinSplitGeomStat {
    // Members
    unsigned int flag; // offset 0x0, size 0x4
    struct RpAtomic * atomic; // offset 0x4, size 0x4
    struct RpGeometry * geom; // offset 0x8, size 0x4
    struct RpMaterialList * matList; // offset 0xC, size 0x4
    struct RpSkin * skin; // offset 0x10, size 0x4
    struct RpHAnimHierarchy * hierarchy; // offset 0x14, size 0x4
    const struct RwMatrixWeights * skinBoneWeight; // offset 0x18, size 0x4
    const unsigned int * skinBoneIndex; // offset 0x1C, size 0x4
    unsigned int * boneRemapIndex; // offset 0x20, size 0x4
    unsigned int * rleMap; // offset 0x24, size 0x4
    unsigned int boneLimit; // offset 0x28, size 0x4
    unsigned int maxTriBones; // offset 0x2C, size 0x4
    unsigned int numTris; // offset 0x30, size 0x4
    unsigned int numMats; // offset 0x34, size 0x4
    unsigned int numVerts; // offset 0x38, size 0x4
    unsigned int numBones; // offset 0x3C, size 0x4
    unsigned int numMatTriLists; // offset 0x40, size 0x4
    unsigned int numWeights; // offset 0x44, size 0x4
    unsigned int * meshBoneCount; // offset 0x48, size 0x4
    unsigned int * boneMeshCount; // offset 0x4C, size 0x4
    unsigned int * boneVertCount; // offset 0x50, size 0x4
    unsigned int * meshTriCount; // offset 0x54, size 0x4
    unsigned int * boneBoneCount; // offset 0x58, size 0x4
    struct rtSkinSplitBoneFlag * boneBoneFlag; // offset 0x5C, size 0x4
    struct rtSkinSplitMatTriList * matTriListStack; // offset 0x60, size 0x4
    struct rtSkinSplitMatTriList * matTriListDone; // offset 0x64, size 0x4
    unsigned char * skinBoneRemapIndices; // offset 0x68, size 0x4
    unsigned char * skinMeshBoneRLECount; // offset 0x6C, size 0x4
    unsigned char * skinMeshBoneRLE; // offset 0x70, size 0x4
};
// total size: 0x20
struct rtSkinSplitBoneFlag {
    // Members
    unsigned int flag[8]; // offset 0x0, size 0x20
};
// Range: 0x8046E408 -> 0x8046E70C
int _rtSkinSplitTriClassify(struct rtSkinSplitGeomStat * geomStat /* r25 */, struct RpTriangle * tri /* r28 */, struct rtSkinSplitBoneFlag * boneFlag /* r31 */) {
    // Local variables
    int result; // r1+0x8
    unsigned int i; // r27
    unsigned int mtxIdx; // r29
    unsigned int idx; // r30
    struct rtSkinSplitBoneFlag mtxFlag; // r1+0xC
    const unsigned int * skinBoneIndex; // r24
    const struct RwMatrixWeights * skinBoneWeight; // r26

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EFAC0
// Range: 0x8046E70C -> 0x8046E730
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListPush(struct rtSkinSplitMatTriList * triListHead /* r3 */, struct rtSkinSplitMatTriList * triList /* r4 */) {
    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EFADB
// Range: 0x8046E730 -> 0x8046E788
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListPop(struct rtSkinSplitMatTriList * triListHead /* r3 */, struct rtSkinSplitMatTriList * * triListPtr /* r4 */) {
    // Local variables
    struct rtSkinSplitMatTriList * triListHeadNew; // r31

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EFAF5
// Range: 0x8046E788 -> 0x8046E8D8
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListCreate(unsigned int count /* r28 */) {
    // Local variables
    struct rtSkinSplitMatTriList * matTriList; // r31
    unsigned int size; // r30

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EFB12
// Range: 0x8046E8D8 -> 0x8046E944
int _rtSkinSplitMatTriListDestroy(struct rtSkinSplitMatTriList * matTriList /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EFB30
// Range: 0x8046E944 -> 0x8046EA10
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListAddTriByMat(struct rtSkinSplitGeomStat * geomStat /* r27 */, struct rtSkinSplitMatTriList * matTriList /* r31 */, struct RpMaterial * mat /* r1+0x8 */, unsigned int matIdx /* r26 */) {
    // Local variables
    struct RpTriangle * tri; // r30
    unsigned int i; // r29
    unsigned int j; // r28

    // References
    // -> static char __dbFunctionName[34];
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EFB52
// Range: 0x8046EA10 -> 0x8046EDAC
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListGetBoneFlag(struct rtSkinSplitGeomStat * geomStat /* r24 */, struct rtSkinSplitMatTriList * matTriList /* r31 */) {
    // Local variables
    struct RpTriangle * tri; // r29
    const unsigned int * skinBoneIndex; // r22
    const struct RwMatrixWeights * skinBoneWeight; // r27
    unsigned int i; // r23
    unsigned int j; // r26
    unsigned int triIdx; // r25
    unsigned int mtxIdx; // r28
    unsigned int idx; // r30

    // References
    // -> static char __dbFunctionName[34];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EFB74
// Range: 0x8046EDAC -> 0x8046F14C
struct rtSkinSplitMatTriList * _rtSkinSplitMatTriListSplit(struct rtSkinSplitGeomStat * geomStat /* r31 */, struct rtSkinSplitMatTriList * matTriList /* r30 */, unsigned int boneLimit /* r21 */) {
    // Local variables
    unsigned int i; // r26
    unsigned int triCount1; // r27
    unsigned int triCount2; // r25
    int boneSplit; // r29
    struct rtSkinSplitBoneFlag boneSplitFlag; // r1+0x28
    struct rtSkinSplitBoneFlag boneExcludeFlag; // r1+0x8
    struct RpMaterial * matNew; // r24
    struct RpTriangle * tri; // r22
    struct rtSkinSplitMatTriList * matTriListNew; // r28

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[34]; // size: 0x22, address: 0x804EFB90
// total size: 0x400
struct rtSkinSplitGlobalVars {
    // Members
    unsigned int boneStack[256]; // offset 0x0, size 0x400
};
struct rtSkinSplitGlobalVars rtSkinSplitGlobals; // size: 0x400, address: 0x80D5DE98
// Range: 0x8046F14C -> 0x8046F278
struct rtSkinSplitGeomStat * _rtSkinSplitHierarchyGetChildFlag(struct rtSkinSplitGeomStat * geomStat /* r3 */, struct RpHAnimHierarchy * hierarchy /* r4 */, unsigned int currBone /* r5 */, unsigned int * subHierarchyCount /* r6 */, struct rtSkinSplitBoneFlag * subHierarchyFlag /* r7 */) {
    // Local variables
    unsigned int stackIndex; // r31
    unsigned int boneCount; // r29
    unsigned int * boneStack; // r30

    // References
    // -> struct rtSkinSplitGlobalVars rtSkinSplitGlobals;
    // -> static char __dbFunctionName[34];
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804EFBB2
// Range: 0x8046F278 -> 0x8046F454
struct rtSkinSplitGeomStat * _rtSkinSplitMatTriListGetBoneLockFlag(struct rtSkinSplitGeomStat * geomStat /* r3 */, struct rtSkinSplitMatTriList * matTriList /* r4 */) {
    // Local variables
    struct rtSkinSplitBoneFlag boneFlag; // r1+0x8
    struct rtSkinSplitMatTriList * matTriListA; // r31
    struct rtSkinSplitMatTriList * matTriListB; // r30

    // References
    // -> static char __dbFunctionName[38];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804EFBD8
// Range: 0x8046F454 -> 0x8046FB18
struct rtSkinSplitGeomStat * _rtSkinSplitMatTriListRemapBoneIndex(struct rtSkinSplitGeomStat * geomStat /* r30 */, struct rtSkinSplitMatTriList * matTriListHead /* r25 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int j; // r27
    unsigned int k; // r28
    unsigned int l; // r26
    unsigned int size; // r24
    struct rtSkinSplitBoneFlag boneLockFlag; // r1+0x28
    struct rtSkinSplitBoneFlag boneFreeFlag; // r1+0x8
    struct rtSkinSplitMatTriList * matTriList; // r31

    // References
    // -> static char __dbFunctionName[37];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EFBFD
// Range: 0x8046FB18 -> 0x80470014
struct rtSkinSplitGeomStat * _rtSkinSplitGeomGetStat(struct rtSkinSplitGeomStat * geomStat /* r31 */) {
    // Local variables
    struct RpGeometry * geom; // r20
    struct RpTriangle * tri; // r28
    struct RpHAnimHierarchy * hierarchy; // r19
    struct RpSkin * skin; // r18
    const struct RwMatrixWeights * skinBoneWeight; // r17
    const struct RwMatrixWeights * skinMtxWeight; // r24
    const unsigned int * skinBoneIndex; // r21
    unsigned int i; // r26
    unsigned int j; // r22
    unsigned int k; // r30
    unsigned int idx; // r29
    unsigned int skinMtxIndex; // r25
    unsigned int meshBoneIndexStart; // r23
    unsigned int numBones; // r1+0x8
    unsigned int maxTriBones; // r27
    unsigned int triBoneIdx[12]; // r1+0xC

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EFC15
// Range: 0x80470014 -> 0x804703D0
int _rtSkinSplitMeshSplitSimple(struct rtSkinSplitGeomStat * geomStat /* r3 */, struct rtSkinSplitMatTriList * matTriList /* r4 */, unsigned int boneLimit /* r5 */, struct rtSkinSplitBoneFlag * boneExcludeFlag /* r6 */) {
    // Local variables
    struct RpHAnimHierarchy * hierarchy; // r28
    unsigned int stackIndex; // r29
    unsigned int currBone; // r31
    unsigned int * boneStack; // r27
    unsigned int boneCount; // r26
    int boneIdx; // r25
    struct rtSkinSplitBoneFlag boneFlag; // r1+0x8
    unsigned int _i; // r30

    // References
    // -> unsigned char _rtSkinSplitBitTable[16];
    // -> struct rtSkinSplitGlobalVars rtSkinSplitGlobals;
    // -> static char __dbFunctionName[28];
}


