/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\pipe\p2\gcn\nodeGameCubeWorldSectorAllInOne.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80421A70 -> 0x80422234
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EB740
// Range: 0x80421A70 -> 0x80421C70
struct RxPipeline * _rpDlSectorPipelineCreate(unsigned int id /* r1+0x8 */, unsigned int type /* r1+0xC */, void * (* instance)(void *, struct RxGameCubePipeData *) /* r1+0x10 */, void * (* reinstance)(void *, struct RxGameCubePipeData *) /* r1+0x14 */, void * (* lighting)(void *, struct RxGameCubePipeData *) /* r1+0x18 */, void * (* render)(void *, struct RxGameCubePipeData *) /* r1+0x1C */) {
    // Local variables
    struct RxPipeline * pipe; // r30
    struct RxPipeline * lpipe; // r29
    struct RxNodeDefinition * nodeDfn; // r27
    struct RxPipelineNode * node; // r28

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EB75A
// Range: 0x80421C70 -> 0x80421DCC
void * _rxGCSectorDefaultLightingCallback(void * object /* r24 */, struct RxGameCubePipeData * pipeData /* r31 */) {
    // Local variables
    unsigned int flags; // r26
    struct RwLLLink * curLight; // r30
    struct RwLLLink * endLight; // r25
    struct RpWorldSector * sector; // r29
    struct RpLight * light; // r28
    struct RpLightTie * lightTie; // r27

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[35];
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EB77D
// Range: 0x80421DCC -> 0x80421F14
void * _rxGCSectorDefaultInstanceCallback(void * object /* r27 */, struct RxGameCubePipeData * pipeData /* r30 */) {
    // Local variables
    struct RpWorldSector * sector; // r31
    struct RpWorld * world; // r28

    // References
    // -> static char __dbFunctionName[35];
    // -> int _RwDlPreInstanceOptimize;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EB7A0
// Range: 0x80421F14 -> 0x80422168
static int _rxGCWorldSectorAllInOneNode(struct RxPipelineNode * self /* r24 */, const struct RxPipelineNodeParam * params /* r25 */) {
    // Local variables
    unsigned int numMeshes; // r23
    unsigned int numVerts; // r22
    struct RpWorld * world; // r28
    struct RpWorldSector * sector; // r31
    struct RpMeshHeader * meshHeader; // r27
    struct RxGameCubeVertexBuffer * vbHeader; // r26
    struct _rxGameCubeAllInOneNodeData * nodeData; // r30
    struct RxGameCubePipeData pipeData; // r1+0x8

    // References
    // -> static char __dbFunctionName[29];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804EB7BD
// Range: 0x80422168 -> 0x80422210
static int _rxGCWorldSectorAllInOnePipelineInit(struct RxPipelineNode * node /* r30 */) {
    // Local variables
    struct _rxGameCubeAllInOneNodeData * nodeData; // r31

    // References
    // -> static char __dbFunctionName[37];
}

static struct RxNodeDefinition nodeGameCubeWorldSectorAllInOneCSL; // size: 0x40, address: 0x805526FC
static char __dbFunctionName[47]; // size: 0x2F, address: 0x804EB7E2
// Range: 0x80422210 -> 0x80422234
struct RxNodeDefinition * RxNodeDefinitionGetGameCubeWorldSectorAllInOne() {
    // References
    // -> static struct RxNodeDefinition nodeGameCubeWorldSectorAllInOneCSL;
    // -> static char __dbFunctionName[47];
}


