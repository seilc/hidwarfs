/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\gcpipe.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8041F350 -> 0x8041F960
*/
static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB2A8
// Range: 0x8041F350 -> 0x8041F3A0
void _rxGCResEntryWaitDone(struct RwResEntry * resEntry /* r1+0x8 */) {
    // Local variables
    struct RxGameCubeVertexBuffer * vbHeader; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EB2BE
// Range: 0x8041F3A0 -> 0x8041F700
void * _rxGCDefaultRenderCallback(void * object /* r21 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    unsigned int numMeshes; // r24
    struct RxGameCubeVertexBuffer * vbHeader; // r27
    struct RxGameCubeVertexAttr * vAttr; // r1+0x8
    struct RxGameCubeDisplayList * dList; // r29
    struct RpMesh * mesh; // r30
    struct RwMatrixTag * ltm; // r23
    struct RpGameCubeVtxFmt * vtxFmt; // r26
    void (* matFunc)(struct RwRGBAReal *, struct RwRGBA *, float); // r22
    struct RwMatrixTag offsetMatrix; // r1+0xC
    struct RpAtomic * atomic; // r19
    float scale; // f30
    float recipScale; // f31
    struct RwV3d * inf; // r28
    struct RwTexture * texture; // r25
    struct RwGameCubeRasterExtension * rasExt; // r18

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[39]; // size: 0x27, address: 0x804EB2D9
// total size: 0x10
struct _rxGameCubeAllInOneNodeData {
    // Members
    void * (* instanceCallback)(void *, struct RxGameCubePipeData *); // offset 0x0, size 0x4
    void * (* reinstanceCallback)(void *, struct RxGameCubePipeData *); // offset 0x4, size 0x4
    void * (* lightingCallback)(void *, struct RxGameCubePipeData *); // offset 0x8, size 0x4
    void * (* renderCallback)(void *, struct RxGameCubePipeData *); // offset 0xC, size 0x4
};
// Range: 0x8041F700 -> 0x8041F788
void _rxGameCubeAllInOneSetInstanceCallBack(struct RxPipelineNode * node /* r30 */, void * (* callback)(void *, struct RxGameCubePipeData *) /* r1+0x8 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[39];
}

static char __dbFunctionName[41]; // size: 0x29, address: 0x804EB300
// Range: 0x8041F788 -> 0x8041F810
void _rxGameCubeAllInOneSetReinstanceCallBack(struct RxPipelineNode * node /* r30 */, void * (* callback)(void *, struct RxGameCubePipeData *) /* r1+0x8 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[41];
}

static char __dbFunctionName[39]; // size: 0x27, address: 0x804EB329
// Range: 0x8041F810 -> 0x8041F898
void _rxGameCubeAllInOneSetLightingCallBack(struct RxPipelineNode * node /* r30 */, void * (* callback)(void *, struct RxGameCubePipeData *) /* r1+0x8 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[39];
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804EB350
// Range: 0x8041F898 -> 0x8041F920
void RxGameCubeAllInOneSetRenderCallBack(struct RxPipelineNode * node /* r30 */, void * (* callback)(void *, struct RxGameCubePipeData *) /* r1+0x8 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[36];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EB374
// Range: 0x8041F920 -> 0x8041F940
void RxGameCubePreInstanceSetOptimize(int optimize /* r3 */) {
    // References
    // -> int _RwDlPreInstanceOptimize;
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EB395
// Range: 0x8041F940 -> 0x8041F960
int RxGameCubePreInstanceGetOptimize() {
    // References
    // -> int _RwDlPreInstanceOptimize;
    // -> static char __dbFunctionName[33];
}


