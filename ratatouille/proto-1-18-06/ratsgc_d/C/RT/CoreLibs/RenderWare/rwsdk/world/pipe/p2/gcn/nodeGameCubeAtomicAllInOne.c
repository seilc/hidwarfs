/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\nodeGameCubeAtomicAllInOne.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80420C08 -> 0x80421A70
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EB640
// Range: 0x80420C08 -> 0x80420E20
struct RxPipeline * _rpDlAtomicPipelineCreate(unsigned int id /* r1+0x8 */, unsigned int type /* r1+0xC */, void * (* instance)(void *, struct RxGameCubePipeData *) /* r1+0x10 */, void * (* reinstance)(void *, struct RxGameCubePipeData *) /* r1+0x14 */, void * (* lighting)(void *, struct RxGameCubePipeData *) /* r1+0x18 */, void * (* render)(void *, struct RxGameCubePipeData *) /* r1+0x1C */) {
    // Local variables
    struct RxPipeline * pipe; // r30
    struct RxPipeline * lpipe; // r29
    struct RxNodeDefinition * nodeDfn; // r27
    struct RxPipelineNode * node; // r28

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EB65A
// Range: 0x80420E20 -> 0x80421054
void * _rxGCAtomicDefaultLightingCallback(void * object /* r18 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    struct RpAtomic * atomic; // r29
    int flags; // r23
    struct RwLLLink * cur; // r28
    struct RwLLLink * end; // r22
    struct RpTie * tpTie; // r26
    struct RwLLLink * curLight; // r27
    struct RwLLLink * endLight; // r21
    struct RpLightTie * lightTie; // r25
    struct RpLight * theLight; // r30
    const struct RwMatrixTag * matrixLight; // r20
    const struct RwV3d * pos; // r19
    const struct RwSphere * sphere; // r24
    struct RwV3d distanceVector; // r1+0x8
    float distanceSquare; // f30
    float distanceCollision; // f31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB67D
// Range: 0x80421054 -> 0x804213C0
static void _rxGCDefaultReinstance(struct RpGeometry * geometry /* r30 */, struct RxGameCubeVertexBuffer * vbHeader /* r31 */) {
    // Local variables
    unsigned int numVerts; // r22
    unsigned int size; // r26
    unsigned int geomFlags; // r25
    unsigned int count; // r29
    unsigned short lockedFlags; // r24
    struct RpGameCubeVtxFmt * vtxFmt; // r28
    unsigned int i; // r23
    int i; // r27

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804EB694
// Range: 0x804213C0 -> 0x80421540
void * _rxGCAtomicDefaultReinstanceCallback(void * object /* r26 */, struct RxGameCubePipeData * pipeData /* r27 */) {
    // Local variables
    struct RpAtomic * atomic; // r28
    struct RpGeometry * geometry; // r31
    struct RxGameCubeVertexBuffer * vbHeader; // r30

    // References
    // -> static char __dbFunctionName[37];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EB6B9
// Range: 0x80421540 -> 0x804216D8
void * _rxGCAtomicDefaultInstanceCallback(void * object /* r25 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    void * owner; // r27
    struct RpAtomic * atomic; // r28
    struct RpGeometry * geometry; // r31
    struct RwResEntry * * resEntryOwner; // r26

    // References
    // -> static char __dbFunctionName[35];
    // -> int _RwDlPreInstanceOptimize;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EB6DC
// Range: 0x804216D8 -> 0x8042199C
static int _rxGCAtomicAllInOneNode(struct RxPipelineNode * self /* r22 */, const struct RxPipelineNodeParam * params /* r23 */) {
    // Local variables
    struct RpAtomic * atomic; // r30
    struct RpGeometry * geometry; // r29
    struct RxGameCubeVertexBuffer * vbHeader; // r26
    struct RpMeshHeader * meshHeader; // r28
    unsigned int numMeshes; // r25
    unsigned int numVerts; // r24
    struct RxGameCubePipeData pipeData; // r1+0x8
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EB6F4
// Range: 0x8042199C -> 0x80421A4C
static int _rxGCAtomicAllInOnePipelineInit(struct RxPipelineNode * node /* r30 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[32];
}

static struct RxNodeDefinition nodeGameCubeAtomicAllInOneCSL; // size: 0x40, address: 0x805525BC
static char __dbFunctionName[42]; // size: 0x2A, address: 0x804EB714
// Range: 0x80421A4C -> 0x80421A70
struct RxNodeDefinition * RxNodeDefinitionGetGameCubeAtomicAllInOne() {
    // References
    // -> static struct RxNodeDefinition nodeGameCubeAtomicAllInOneCSL;
    // -> static char __dbFunctionName[42];
}


