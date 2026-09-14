/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\bamesh.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80412BB4 -> 0x80413E08
*/
// total size: 0x4
struct RpMeshStatic {
    // Members
    struct RwFreeList * BuildMeshFreeList; // offset 0x0, size 0x4
};
static struct RpMeshStatic MeshStatic; // size: 0x4, address: 0x80D68598
static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA758
// Range: 0x80412BB4 -> 0x80412C04
static void MeshFreeListsDestroy() {
    // References
    // -> static struct RpMeshStatic MeshStatic;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA76D
// Range: 0x80412C04 -> 0x80412C80
static int MeshFreeListsCreate() {
    // Local variables
    int result; // r31

    // References
    // -> static struct RpMeshStatic MeshStatic;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA781
// Range: 0x80412C80 -> 0x80412D08
void _rpMeshHeaderDestroy(struct RpMeshHeader * meshHeader /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA796
// Range: 0x80412D08 -> 0x80412D8C
struct RpMeshHeader * _rpMeshHeaderCreate(unsigned int size /* r1+0x8 */) {
    // Local variables
    struct RpMeshHeader * meshHeader; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EA7AA
struct RwModuleInfo meshModule; // size: 0x8, address: 0x80D6C2B0
// Range: 0x80412D8C -> 0x80412DEC
void * _rpMeshClose(void * instance /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo meshModule;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EA7B7
// Range: 0x80412DEC -> 0x80412F78
void * _rpMeshOpen(void * instance /* r31 */, int offset /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA7C3
// Range: 0x80412F78 -> 0x804131CC
struct RpBuildMesh * _rpBuildMeshCreate(unsigned int bufferSize /* r29 */) {
    // Local variables
    struct RpBuildMesh * mesh; // r31
    unsigned int size; // r30
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RpMeshStatic MeshStatic;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EA7D6
// Range: 0x804131CC -> 0x8041327C
int _rpBuildMeshDestroy(struct RpBuildMesh * mesh /* r31 */) {
    // References
    // -> static struct RpMeshStatic MeshStatic;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA7EA
// Range: 0x8041327C -> 0x8041332C
int _rpMeshDestroy(struct RpMeshHeader * mesh /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA7F9
// Range: 0x8041332C -> 0x80413600
struct RpBuildMesh * _rpBuildMeshAddTriangle(struct RpBuildMesh * mesh /* r31 */, struct RpMaterial * material /* r1+0x8 */, int vert1 /* r1+0xC */, int vert2 /* r1+0x10 */, int vert3 /* r1+0x14 */, unsigned short matIndex /* r1+0x18 */, unsigned short textureIndex /* r1+0x1A */, unsigned short rasterIndex /* r1+0x1C */, unsigned short pipelineIndex /* r1+0x4A */) {
    // Local variables
    struct RpBuildMeshTriangle * newMeshTriangles; // r29
    unsigned int size; // r30
    struct RwError _rwErrorCode; // r1+0x20

    // References
    // -> static char __dbFunctionName[24];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

enum RwPrimitiveType {
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = 2147483647,
};
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA811
// Range: 0x80413600 -> 0x804136A4
struct RpMeshHeader * RpMeshHeaderSetPrimType(struct RpMeshHeader * meshHeader /* r31 */, enum RwPrimitiveType primType /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA829
// Range: 0x804136A4 -> 0x804137C0
struct RpMeshHeader * _rpMeshHeaderForAllMeshes(struct RpMeshHeader * meshHeader /* r31 */, struct RpMesh * (* fpCallBack)(struct RpMesh *, struct RpMeshHeader *, void *) /* r27 */, void * pData /* r1+0x8 */) {
    // Local variables
    int numMeshes; // r28
    struct RpMesh * mesh; // r29

    // References
    // -> static char __dbFunctionName[26];
    // -> struct RwModuleInfo meshModule;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EA843
// total size: 0xC
struct binMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int numMeshes; // offset 0x4, size 0x4
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
};
// total size: 0x8
struct binMesh {
    // Members
    unsigned int numIndices; // offset 0x0, size 0x4
    int matIndex; // offset 0x4, size 0x4
};
// Range: 0x804137C0 -> 0x80413A18
struct RwStream * _rpMeshWrite(const struct RpMeshHeader * meshHeader /* r30 */, void * object /* r26 */, struct RwStream * stream /* r27 */, const struct RpMaterialList * matList /* r21 */) {
    // Local variables
    struct binMeshHeader bmh; // r1+0x10
    unsigned int numMeshes; // r24
    const struct RpMesh * mesh; // r31
    struct binMesh bm; // r1+0x8
    unsigned int numIndices; // r29
    unsigned short * meshIndices; // r23
    unsigned int IndexBuffer[256]; // r1+0x1C
    unsigned int writeIndices; // r25
    unsigned int i; // r28

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EA850
// Range: 0x80413A18 -> 0x80413CD4
struct RpMeshHeader * _rpMeshRead(struct RwStream * stream /* r23 */, void * object /* r29 */, const struct RpMaterialList * matList /* r20 */) {
    // Local variables
    struct binMeshHeader bmh; // r1+0x10
    struct RpMeshHeader * meshHeader; // r31
    unsigned int size; // r26
    struct RpMesh * mesh; // r30
    unsigned short * meshIndices; // r25
    unsigned int numMeshes; // r22
    struct binMesh bm; // r1+0x8
    unsigned int remainingIndices; // r28
    unsigned int IndexBuffer[256]; // r1+0x1C
    int * source; // r24
    unsigned int readIndices; // r27

    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EA85C
// Range: 0x80413CD4 -> 0x80413DB8
int _rpMeshSize(const struct RpMeshHeader * meshHeader /* r31 */, void * object /* r30 */) {
    // Local variables
    unsigned int size; // r29

    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EA868
// Range: 0x80413DB8 -> 0x80413E08
signed short _rpMeshGetNextSerialNumber() {
    // Local variables
    signed short serialNum; // r31

    // References
    // -> struct RwModuleInfo meshModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}


