/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\baim3d.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804617B4 -> 0x80462DC8
*/
static char __dbFunctionName[18]; // size: 0x12, address: 0x804EF188
// Range: 0x804617B4 -> 0x804618F8
static int validate_vertices(void * indices /* r22 */, int numIndices /* r25 */, int numVertices /* r23 */) {
    // Local variables
    int result; // r29
    int i; // r30
    const unsigned short * const vertArray; // r28
    unsigned short vertIndex; // r24
    int validIndex; // r27

    // References
    // -> static char __dbFunctionName[18];
}

// total size: 0x10
struct RwScopeTrace {
    // Members
    struct RwReqEntry * head; // offset 0x0, size 0x4
    struct RwScopeTrace * continuation; // offset 0x4, size 0x4
    struct RwScopeTrace * next; // offset 0x8, size 0x4
    struct RwScopeTrace * parent; // offset 0xC, size 0x4
};
// total size: 0x24
struct RwReqEntry {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq required; // offset 0x4, size 0x4
    unsigned int inputs; // offset 0x8, size 0x4
    struct RwScopeTrace * st; // offset 0xC, size 0x4
    struct RwReqEntry * next; // offset 0x10, size 0x4
    struct rxReq * req; // offset 0x14, size 0x4
    unsigned int outbf; // offset 0x18, size 0x4
    unsigned int assignedslot; // offset 0x1C, size 0x4
    struct RxPipelineNode * originatingNode; // offset 0x20, size 0x4
};
// total size: 0x18
struct rwIm3DRenderPipelines {
    // Members
    struct RxPipeline * triList; // offset 0x0, size 0x4
    struct RxPipeline * triFan; // offset 0x4, size 0x4
    struct RxPipeline * triStrip; // offset 0x8, size 0x4
    struct RxPipeline * lineList; // offset 0xC, size 0x4
    struct RxPipeline * polyLine; // offset 0x10, size 0x4
    struct RxPipeline * pointList; // offset 0x14, size 0x4
};
// total size: 0x28
struct RxCamSpace3DVertex {
    // Members
    struct RwV3d cameraVertex; // offset 0x0, size 0xC
    unsigned char clipFlags; // offset 0xC, size 0x1
    unsigned char pad[3]; // offset 0xD, size 0x3
    struct RwRGBAReal col; // offset 0x10, size 0x10
    float u; // offset 0x20, size 0x4
    float v; // offset 0x24, size 0x4
};
// total size: 0xBC
struct RxMeshStateVector {
    // Members
    int Flags; // offset 0x0, size 0x4
    void * SourceObject; // offset 0x4, size 0x4
    struct RwMatrixTag Obj2World; // offset 0x8, size 0x40
    struct RwMatrixTag Obj2Cam; // offset 0x48, size 0x40
    struct RwSurfaceProperties SurfaceProperties; // offset 0x88, size 0xC
    struct RwTexture * Texture; // offset 0x94, size 0x4
    struct RwRGBA MatCol; // offset 0x98, size 0x4
    struct RxPipeline * Pipeline; // offset 0x9C, size 0x4
    enum RwPrimitiveType PrimType; // offset 0xA0, size 0x4
    unsigned int NumElements; // offset 0xA4, size 0x4
    unsigned int NumVertices; // offset 0xA8, size 0x4
    int ClipFlagsOr; // offset 0xAC, size 0x4
    int ClipFlagsAnd; // offset 0xB0, size 0x4
    void * SourceMesh; // offset 0xB4, size 0x4
    void * DataObject; // offset 0xB8, size 0x4
};
enum RwShadeMode {
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT = 1,
    rwSHADEMODEGOURAUD = 2,
    rwSHADEMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x2C
struct RxRenderStateVector {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    enum RwShadeMode ShadeMode; // offset 0x4, size 0x4
    enum RwBlendFunction SrcBlend; // offset 0x8, size 0x4
    enum RwBlendFunction DestBlend; // offset 0xC, size 0x4
    struct RwRaster * TextureRaster; // offset 0x10, size 0x4
    enum RwTextureAddressMode AddressModeU; // offset 0x14, size 0x4
    enum RwTextureAddressMode AddressModeV; // offset 0x18, size 0x4
    enum RwTextureFilterMode FilterMode; // offset 0x1C, size 0x4
    struct RwRGBA BorderColor; // offset 0x20, size 0x4
    enum RwFogType FogType; // offset 0x24, size 0x4
    struct RwRGBA FogColor; // offset 0x28, size 0x4
};
// total size: 0x30
struct _rwIm3DPoolStash {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    struct RwMatrixTag * ltm; // offset 0x4, size 0x4
    unsigned int numVerts; // offset 0x8, size 0x4
    struct RxObjSpace3DVertex * objVerts; // offset 0xC, size 0x4
    struct RxCamSpace3DVertex * camVerts; // offset 0x10, size 0x4
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * devVerts; // offset 0x14, size 0x4
    struct RxMeshStateVector * meshState; // offset 0x18, size 0x4
    struct RxRenderStateVector * renderState; // offset 0x1C, size 0x4
    struct RxPipeline * pipeline; // offset 0x20, size 0x4
    enum RwPrimitiveType primType; // offset 0x24, size 0x4
    unsigned short * indices; // offset 0x28, size 0x4
    unsigned int numIndices; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct rwIm3DPool {
    // Members
    unsigned short numElements; // offset 0x0, size 0x2
    unsigned short pad; // offset 0x2, size 0x2
    void * elements; // offset 0x4, size 0x4
    int stride; // offset 0x8, size 0x4
    struct _rwIm3DPoolStash stash; // offset 0xC, size 0x30
};
// total size: 0x74
struct rwImmediGlobals {
    // Members
    struct RxPipeline * im3DTransformPipeline; // offset 0x0, size 0x4
    struct rwIm3DRenderPipelines im3DRenderPipelines; // offset 0x4, size 0x18
    struct RxPipeline * platformIm3DTransformPipeline; // offset 0x1C, size 0x4
    struct rwIm3DRenderPipelines platformIm3DRenderPipelines; // offset 0x20, size 0x18
    struct rwIm3DPool curPool; // offset 0x38, size 0x3C
};
struct rwImmediGlobals * _rwIm3DGlobals; // size: 0x4, address: 0x80D6C448
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF19A
struct RwModuleInfo _rwIm3DModule; // size: 0x8, address: 0x80D6C44C
// Range: 0x804618F8 -> 0x80461AF4
void * RwIm3DTransform(struct RxObjSpace3DVertex * pVerts /* r30 */, unsigned int numVerts /* r28 */, struct RwMatrixTag * ltm /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // Local variables
    struct RxPipeline * result; // r29
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804EF1AA
// Range: 0x80461AF4 -> 0x80461B78
int RwIm3DEnd() {
    // Local variables
    int im3dactive; // r31

    // References
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EF1B4
// Range: 0x80461B78 -> 0x80461FC0
int RwIm3DRenderIndexedPrimitive(enum RwPrimitiveType primType /* r28 */, unsigned short * indices /* r26 */, int numIndices /* r29 */) {
    // Local variables
    int im3dactive; // r27
    struct _rwIm3DPoolStash * stash; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[29];
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF1D1
// Range: 0x80461FC0 -> 0x80462440
int RwIm3DRenderPrimitive(enum RwPrimitiveType primType /* r29 */) {
    // Local variables
    int im3dactive; // r28
    struct RxHeap * heap; // r27
    struct _rwIm3DPoolStash * stash; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EF1E7
// Range: 0x80462440 -> 0x80462520
struct RxPipeline * RwIm3DSetTransformPipeline(struct RxPipeline * pipeline /* r31 */) {
    // References
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF202
// Range: 0x80462520 -> 0x80462BE0
struct RxPipeline * RwIm3DSetRenderPipeline(struct RxPipeline * pipeline /* r29 */, enum RwPrimitiveType primType /* r30 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[24];
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF21A
// Range: 0x80462BE0 -> 0x80462C88
void * _rwIm3DClose(void * instance /* r1+0x8 */) {
    // References
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EF227
// Range: 0x80462C88 -> 0x80462DC8
void * _rwIm3DOpen(void * instance /* r28 */, int offset /* r29 */, int size /* r1+0x8 */) {
    // Local variables
    int success; // r31

    // References
    // -> struct RwModuleInfo _rwIm3DModule;
    // -> void * RwEngineInstance;
    // -> struct rwImmediGlobals * _rwIm3DGlobals;
    // -> static char __dbFunctionName[12];
}


