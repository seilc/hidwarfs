/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\pipe\p2\p2dep.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80466F6C -> 0x80468B78
*/
static char __dbFunctionName[11]; // size: 0xB, address: 0x804EF508
// Range: 0x80466F6C -> 0x8046700C
static struct rxReq * _ReqCreate(struct RxPipelineNode * node /* r1+0x8 */, unsigned int numClusters /* r30 */) {
    // Local variables
    struct rxReq * req; // r31

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EF513
// Range: 0x8046700C -> 0x80467088
static struct RwReqEntry * _ReqSearch4Cluster(struct rxReq * req /* r3 */, struct RxClusterDefinition * clusterDef /* r4 */) {
    // Local variables
    struct RwReqEntry * reqentry; // r31
    unsigned int n; // r30

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EF526
// Range: 0x80467088 -> 0x8046719C
static struct RwReqEntry * _ReqAddEntry(struct rxReq * req /* r30 */, struct RxClusterDefinition * clusterDef /* r27 */, enum RxClusterValidityReq required /* r28 */, unsigned int inputs /* r1+0x8 */, struct RxPipelineNode * originatingNode /* r29 */) {
    // Local variables
    struct RwReqEntry * reqentry; // r31

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EF533
// Range: 0x8046719C -> 0x80467220
static void _ReqDeleteEntry(struct rxReq * req /* r3 */, struct RwReqEntry * reqentry /* r4 */) {
    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF543
// Range: 0x80467220 -> 0x80467284
static unsigned int _IoSpecSearch4Cluster(struct RxIoSpec * iospec /* r3 */, struct RxClusterDefinition * clusterDef /* r4 */) {
    // Local variables
    unsigned int i; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EF559
// Range: 0x80467284 -> 0x804673BC
static void _PropDownElimPath(struct RxPipeline * pipeline /* r24 */, struct RxPipelineNode * node /* r31 */, struct RxClusterDefinition * clusterDef /* r25 */) {
    // Local variables
    unsigned int i; // r30
    struct RxIoSpec * iospec; // r23
    struct RwReqEntry * reqentry; // r29
    struct RxOutputSpec * outspec; // r28
    unsigned int n; // r27
    enum RxClusterValid presinout; // r22

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EF56B
// Range: 0x804673BC -> 0x80467448
static struct RwScopeTrace * _ScopeTraceCreate(struct RwScopeTrace * * headref /* r30 */) {
    // Local variables
    struct RwScopeTrace * scopetrace; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF57D
// Range: 0x80467448 -> 0x80467470
static void _ScopeTraceAddEntry(struct RwScopeTrace * scopetrace /* r3 */, struct RwReqEntry * reqentry /* r4 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EF591
// Range: 0x80467470 -> 0x80467530
static void _ScopeTraceMerge(struct RwScopeTrace * * headref /* r3 */, struct RwScopeTrace * p /* r4 */, struct RwScopeTrace * q /* r5 */) {
    // Local variables
    struct RwScopeTrace * proot; // r30
    struct RwScopeTrace * qroot; // r31
    struct RwScopeTrace * prootfinalpage; // r29

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[39]; // size: 0x27, address: 0x804EF5A2
// Range: 0x80467530 -> 0x80467C4C
static unsigned int _PropagateDependenciesAndKillDeadPaths(struct RxPipeline * pipeline /* r24 */) {
    // Local variables
    unsigned int numUniqueClusters; // r1+0xC
    unsigned int i; // r21
    unsigned int j; // r30
    unsigned int k; // r27
    struct RxPipelineNode * node; // r31
    struct RxIoSpec * iospec; // r25
    struct RxClusterDefinition * cluster; // r20
    struct RwError _rwErrorCode; // r1+0x38
    struct RxClusterDefinition * cluster2; // r23
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    struct RxPipelineNode * outnode; // r28
    struct RxOutputSpec * outspec; // r26
    struct RwReqEntry * reqentry; // r29
    unsigned int n; // r19
    enum RxClusterValid presinout; // r22
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwError _rwErrorCode; // r1+0x10

    // References
    // -> static char __dbFunctionName[39];
}

static char __dbFunctionName[60]; // size: 0x3C, address: 0x804EF5C9
// Range: 0x80467C4C -> 0x80467F78
static unsigned int _ForAllNodeReqsAddOutputClustersAndBuildContinuityBitfields(struct RxPipeline * pipeline /* r25 */) {
    // Local variables
    unsigned int i; // r22
    unsigned int j; // r30
    unsigned int k; // r26
    struct RxPipelineNode * node; // r31
    struct RxIoSpec * iospec; // r29
    struct RwError _rwErrorCode; // r1+0x10
    struct RxPipelineNode * outnode; // r28
    struct RxOutputSpec * outspec; // r24
    struct RwReqEntry * reqentry; // r27
    unsigned int n; // r21
    enum RxClusterValid presinout; // r20
    struct RwReqEntry * drivingreqe; // r23
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[60];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF605
// Range: 0x80467F78 -> 0x80468200
static unsigned int _TraceClusterScopes(struct RxPipeline * pipeline /* r24 */, struct RwScopeTrace * * stheadref /* r19 */) {
    // Local variables
    unsigned int i; // r23
    unsigned int j; // r26
    unsigned int k; // r30
    struct RxPipelineNode * node; // r31
    struct RwReqEntry * reqentry; // r27
    struct RwError _rwErrorCode; // r1+0x8
    struct RxPipelineNode * outnode; // r25
    struct RwReqEntry * reqentry; // r29
    struct RwReqEntry * drivingreqe; // r28

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EF619
// Range: 0x80468200 -> 0x80468300
static unsigned int _AssignClusterSlots(struct RxPipeline * pipeline /* r3 */, struct RwScopeTrace * * stheadref /* r4 */) {
    // Local variables
    unsigned int numslotsused; // r25
    struct RwScopeTrace * st; // r29
    struct RwScopeTrace * st2; // r31
    unsigned int unavailslots; // r26
    unsigned int assignedslot; // r28
    struct RwReqEntry * reqentry; // r27
    struct RwReqEntry * reqentry; // r30

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EF62D
// Range: 0x80468300 -> 0x804683C8
static unsigned int _EnumPipelineClusters(struct RwScopeTrace * head /* r27 */, void (* fp)(struct RxClusterDefinition *, unsigned int, void *) /* r28 */, void * callbackprivatedata /* r1+0x8 */) {
    // Local variables
    unsigned int numpipelineclusters; // r29
    struct RwScopeTrace * st; // r31
    struct RwScopeTrace * stdedupe; // r30

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EF643
// Range: 0x804683C8 -> 0x80468488
static unsigned int _CountHeadNodeRqdsAndOpts(struct RxPipeline * pipeline /* r3 */) {
    // Local variables
    struct RxPipelineNode * node; // r31
    unsigned int i; // r30
    unsigned int count; // r28
    struct RwReqEntry * reqentry; // r29

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[47]; // size: 0x2F, address: 0x804EF65D
// Range: 0x80468488 -> 0x80468590
static void _WriteHeadNodeRqdsAndOpts2PipelineRequirements(struct RxPipeline * pipeline /* r30 */) {
    // Local variables
    struct RxPipelineNode * node; // r29
    unsigned int i; // r27
    unsigned int count; // r26
    struct RwReqEntry * reqentry; // r31
    struct RxPipelineRequiresCluster * reqcl; // r28

    // References
    // -> static char __dbFunctionName[47];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EF68C
// Range: 0x80468590 -> 0x80468630
static void _MyEnumPipelineClustersCallBack(struct RxClusterDefinition * clusterdef /* r29 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RxPipelineCluster * * array; // r30
    struct RxPipelineCluster * pipelineCluster; // r31

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[36]; // size: 0x24, address: 0x804EF6AC
// Range: 0x80468630 -> 0x80468AB4
static unsigned int _ForAllNodesWriteClusterAllocations(struct RxPipeline * pipeline /* r30 */, struct RwScopeTrace * stHead /* r1+0x8 */) {
    // Local variables
    unsigned int numPipelineRequiresClusters; // r20
    unsigned int numPipelineClusters; // r17
    struct RxPipelineCluster * pipelineClusters; // r1+0xC
    struct RxPipelineNode * node; // r31
    unsigned char * titeBase; // r19
    unsigned char * miteBase; // r24
    unsigned int slotsContinueAND; // r23
    unsigned int i; // r25
    unsigned int j; // r29
    unsigned int k; // r28
    unsigned int * magic; // r22
    struct RxPipelineCluster * pipelineCluster; // r21
    struct RwReqEntry * reqEntry; // r27

    // References
    // -> static char __dbFunctionName[36];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EF6D0
// Range: 0x80468AB4 -> 0x80468B78
unsigned int _rxChaseDependencies(struct RxPipeline * pipeline /* r30 */) {
    // Local variables
    struct RwScopeTrace * sthead; // r1+0x8
    unsigned int result; // r31

    // References
    // -> static char __dbFunctionName[21];
}


