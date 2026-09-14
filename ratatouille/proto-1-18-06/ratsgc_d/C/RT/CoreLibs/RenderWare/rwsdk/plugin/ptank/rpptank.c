/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\ptank\rpptank.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803F0754 -> 0x803F2760
*/
int _rpPTankAtomicDataOffset; // size: 0x4, address: 0x80D6C210
int _rpPTankGlobalsOffset; // size: 0x4, address: 0x80D6C214
int datasize[9]; // size: 0x24, address: 0x804E8B08
static char __dbFunctionName[16]; // size: 0x10, address: 0x804E8B2C
// Range: 0x803F0754 -> 0x803F077C
static void * PTankAtomicInit(void * object /* r3 */) {
    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8B3C
// Range: 0x803F077C -> 0x803F0830
static void * PTankAtomicDestruct(void * object /* r31 */) {
    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8B50
// Range: 0x803F0830 -> 0x803F08C8
int RpPTankPluginAttach() {
    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> int _rpPTankGlobalsOffset;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8B64
// total size: 0x48
struct RpPTANKInstanceSetupData {
    // Members
    int instancePositions; // offset 0x0, size 0x4
    int instanceUVs; // offset 0x4, size 0x4
    int instanceColors; // offset 0x8, size 0x4
    int instanceNormals; // offset 0xC, size 0x4
    struct RpPTankLockStruct positionOut; // offset 0x10, size 0x8
    struct RpPTankLockStruct UVOut; // offset 0x18, size 0x8
    struct RpPTankLockStruct colorsOut; // offset 0x20, size 0x8
    struct RpPTankLockStruct normalsOut; // offset 0x28, size 0x8
    struct RwV3d right; // offset 0x30, size 0xC
    struct RwV3d up; // offset 0x3C, size 0xC
};
// total size: 0x138
struct RpPTankAtomicExtPrv {
    // Members
    int maxPCount; // offset 0x0, size 0x4
    int actPCount; // offset 0x4, size 0x4
    int isAStructure; // offset 0x8, size 0x4
    void * rawdata; // offset 0xC, size 0x4
    struct RpAtomic * (* defaultRenderCB)(struct RpAtomic *); // offset 0x10, size 0x4
    struct RpPTankCallBacks ptankCallBacks; // offset 0x14, size 0x10
    void (* insSetupCB)(struct RpPTANKInstanceSetupData *, struct RpAtomic *, struct RpPTankData *, int, unsigned int); // offset 0x24, size 0x4
    void (* insPosCB)(struct RpPTankLockStruct *, struct RwV3d *, struct RwV3d *, int, struct RpPTankData *); // offset 0x28, size 0x4
    void (* insUVCB)(struct RpPTankLockStruct *, int, struct RpPTankData *); // offset 0x2C, size 0x4
    void (* insColorsCB)(struct RpPTankLockStruct *, int, struct RpPTankData *); // offset 0x30, size 0x4
    void (* insNormalsCB)(struct RpPTankLockStruct *, int, struct RpPTankData *); // offset 0x34, size 0x4
    void (* insEndingCB)(struct RpPTANKInstanceSetupData *, struct RpAtomic *, struct RpPTankData *, int, unsigned int); // offset 0x38, size 0x4
    unsigned int lockFlags; // offset 0x3C, size 0x4
    unsigned int instFlags; // offset 0x40, size 0x4
    unsigned int platFlags; // offset 0x44, size 0x4
    struct RpPTankData publicData; // offset 0x48, size 0xF0
};
// Range: 0x803F08C8 -> 0x803F0E54
static int rpPTankAStructAlloc(struct RpPTankAtomicExtPrv * ptankGlobal /* r31 */, unsigned int dataFlags /* r28 */) {
    // Local variables
    int result; // r25
    int gotPosition; // r24
    int gotColor; // r23
    int gotSize; // r22
    int gotMatrix; // r21
    int gotNormal; // r20
    int got2DRotate; // r19
    int gotVtxColor; // r18
    int gotVtx2TexCoords; // r17
    int gotVtx4TexCoords; // r1+0x10
    unsigned int size; // r1+0xC
    unsigned int tmpSize; // r30
    unsigned char * data; // r26
    unsigned char * alignedData; // r29

    // References
    // -> int datasize[9];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8B78
// Range: 0x803F0E54 -> 0x803F1358
static int rpPTankSStructAlloc(struct RpPTankAtomicExtPrv * ptankGlobal /* r31 */, unsigned int dataFlags /* r28 */) {
    // Local variables
    int result; // r24
    int gotPosition; // r23
    int gotColor; // r22
    int gotSize; // r21
    int gotMatrix; // r26
    int gotNormal; // r20
    int got2DRotate; // r19
    int gotVtxColor; // r18
    int gotVtx2TexCoords; // r17
    int gotVtx4TexCoords; // r1+0x10
    unsigned int size; // r1+0xC
    unsigned int tmpSize; // r30
    unsigned char * data; // r25
    unsigned char * alignedData; // r29

    // References
    // -> int datasize[9];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8B8C
// Range: 0x803F1358 -> 0x803F1704
static unsigned int rpPTankValidateFlag(unsigned int dataFlags /* r31 */) {
    // Local variables
    unsigned int result; // r28
    int gotPosition; // r27
    int gotColor; // r1+0xC
    int gotSize; // r25
    int gotMatrix; // r29
    int gotNormal; // r1+0x8
    int got2DRotate; // r26
    int gotVtxColor; // r24
    int gotVtx2TexCoords; // r23
    int gotVtx4TexCoords; // r22
    int gotCMatrix; // r21
    int gotC2DRotate; // r20
    int gotCVtxColor; // r19
    int gotCVtx2TexCoords; // r18
    int gotCVtx4TexCoords; // r17

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E8BA0
// Range: 0x803F1704 -> 0x803F1834
static struct RpAtomic * rpPTankAtomicRenderCB(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    int callDefault; // r29
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8BB6
// total size: 0xF0
struct RpPTankData {
    // Members
    void * data; // offset 0x0, size 0x4
    struct RpPTankLockStruct clusters[9]; // offset 0x4, size 0x48
    void * userData; // offset 0x4C, size 0x4
    struct RpPTankFormatDescriptor format; // offset 0x50, size 0xC
    unsigned int srcBlend; // offset 0x5C, size 0x4
    unsigned int dstBlend; // offset 0x60, size 0x4
    int vertexAlphaBlend; // offset 0x64, size 0x4
    struct RwV2d cCenter; // offset 0x68, size 0x8
    struct RwV2d cSize; // offset 0x70, size 0x8
    float cRotate; // offset 0x78, size 0x4
    struct RwRGBA cColor; // offset 0x7C, size 0x4
    struct RwRGBA cVtxColor[4]; // offset 0x80, size 0x10
    struct RwTexCoords cUV[4]; // offset 0x90, size 0x20
    struct RwMatrixTag cMatrix; // offset 0xB0, size 0x40
};
// total size: 0x10
struct RpPTankCallBacks {
    // Members
    void * (* alloc)(struct RpPTankData *, int, unsigned int, unsigned int); // offset 0x0, size 0x4
    int (* create)(struct RpAtomic *, struct RpPTankData *, int, unsigned int, unsigned int); // offset 0x4, size 0x4
    int (* instance)(struct RpAtomic *, struct RpPTankData *, int, unsigned int); // offset 0x8, size 0x4
    int (* render)(struct RpAtomic *, struct RpPTankData *, int); // offset 0xC, size 0x4
};
struct RpPTankCallBacks defaultCB; // size: 0x10, address: 0x8054F280
// Range: 0x803F1834 -> 0x803F18D8
struct RpAtomic * RpPTankAtomicCreate(int maxParticleNum /* r30 */, unsigned int dataFlags /* r1+0x8 */, unsigned int platFlags /* r1+0xC */) {
    // Local variables
    struct RpAtomic * atomic; // r31

    // References
    // -> struct RpPTankCallBacks defaultCB;
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E8BCA
// Range: 0x803F18D8 -> 0x803F1C90
struct RpAtomic * _rpPTankAtomicCreateCustom(int maxParticleNum /* r22 */, unsigned int dataFlags /* r29 */, unsigned int platFlags /* r28 */, struct RpPTankCallBacks * callbacks /* r23 */) {
    // Local variables
    int aResult; // r26
    struct RpAtomic * atomic; // r30
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31
    struct RwV2d center; // r1+0x14
    struct RwV2d size; // r1+0xC
    struct RwRGBA color; // r1+0x8
    struct RwTexCoords uv[4]; // r1+0x1C

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804E8C08
// Range: 0x803F1C90 -> 0x803F1D34
void RpPTankAtomicDestroy(struct RpAtomic * ptank /* r31 */) {
    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E8C1D
// Range: 0x803F1D34 -> 0x803F1D98
int RpAtomicIsPTank(struct RpAtomic * atomic /* r3 */) {
    // Local variables
    int result; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E8C2D
// Range: 0x803F1D98 -> 0x803F1E40
int RpPTankAtomicGetActiveParticlesCount(struct RpAtomic * atomic /* r31 */) {
    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[37];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804E8C52
// Range: 0x803F1E40 -> 0x803F1F28
void RpPTankAtomicSetActiveParticlesCount(struct RpAtomic * atomic /* r29 */, int count /* r28 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> static char __dbFunctionName[37];
    // -> int _rpPTankAtomicDataOffset;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8C77
// Range: 0x803F1F28 -> 0x803F2038
void RpPTankAtomicSetTexture(struct RpAtomic * atomic /* r31 */, struct RwTexture * texture /* r27 */) {
    // Local variables
    struct RpGeometry * geom; // r29
    struct RpMaterial * material; // r28

    // References
    // -> static char __dbFunctionName[24];
    // -> int _rpPTankAtomicDataOffset;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804E8C8F
// Range: 0x803F2038 -> 0x803F2100
struct RwTexture * RpPTankAtomicGetTexture(struct RpAtomic * atomic /* r31 */) {
    // Local variables
    struct RpGeometry * geom; // r30
    struct RpMaterial * material; // r29

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804E8CA7
// Range: 0x803F2100 -> 0x803F21D4
void RpPTankAtomicSetBlendModes(struct RpAtomic * atomic /* r30 */, enum RwBlendFunction srcBlendMode /* r1+0x8 */, enum RwBlendFunction dstBlendMode /* r1+0xC */) {
    // Local variables
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E8CC2
// Range: 0x803F21D4 -> 0x803F2290
void RpPTankAtomicSetVertexAlpha(struct RpAtomic * atomic /* r30 */, int vtxAlphaState /* r1+0x8 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[38]; // size: 0x26, address: 0x804E8CDE
// Range: 0x803F2290 -> 0x803F2388
void RpPTankAtomicSetConstantVtx2TexCoords(struct RpAtomic * atomic /* r30 */, struct RwTexCoords * UVs /* r29 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[38];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804E8D04
enum RpPTankLockFlags {
    rpPTANKLOCKWRITE = 1073741824,
    rpPTANKLOCKREAD = -2147483648,
};
// Range: 0x803F2388 -> 0x803F2694
int RpPTankAtomicLock(struct RpAtomic * atomic /* r27 */, struct RpPTankLockStruct * dst /* r31 */, unsigned int dataFlags /* r28 */, enum RpPTankLockFlags lockFlag /* r26 */) {
    // Local variables
    struct RpPTankData * ptankGlobal; // r30

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804E8D16
// Range: 0x803F2694 -> 0x803F2760
struct RpAtomic * RpPTankAtomicUnlock(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RpPTankAtomicExtPrv * ptankGlobal; // r31

    // References
    // -> int _rpPTankAtomicDataOffset;
    // -> static char __dbFunctionName[20];
}


