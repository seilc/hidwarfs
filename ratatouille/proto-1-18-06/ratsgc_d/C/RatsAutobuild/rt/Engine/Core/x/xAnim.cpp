/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xAnim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800058E0 -> 0x8000C67C
*/
char __FUNCTION__$localstatic1$xBinom__Fii[7]; // size: 0x7, address: 0x80D5E2A0
char __FUNCTION__$localstatic1$xSCurve__Ff[8]; // size: 0x8, address: 0x80D5E2A7
char __FUNCTION__$localstatic1$end_t__14xResponseCurveCFv[6]; // size: 0x6, address: 0x80D5E2AF
char __FUNCTION__$localstatic1$start_t__14xResponseCurveCFv[8]; // size: 0x8, address: 0x80D5E2B5
char __FUNCTION__$localstatic1$normalize__5xVec3Fv[10]; // size: 0xA, address: 0x80D5E2BD
char __FUNCTION__$localstatic1$xMat3x3MulScaleC__FP7xMat3x3PC7xMat3x3fff[17]; // size: 0x11, address: 0x80D5E2C7
char __FUNCTION__$localstatic1$xMat3x3MulScale__FP7xMat3x3PC7xMat3x3P5xVec3[16]; // size: 0x10, address: 0x80D5E2D8
char __FUNCTION__$localstatic1$xMemPushTemp__FUiUiPCcPCci[13]; // size: 0xD, address: 0x80D5E2E8
char __FUNCTION__$localstatic1$__nw__FUl14xMemStaticTypeUiUi[5]; // size: 0x5, address: 0x80D5E2F5
char __FUNCTION__$localstatic1$__nwa__FUl14xMemStaticTypeUiUi[6]; // size: 0x6, address: 0x80D5E2FA
char __FUNCTION__$localstatic1$xStrHashVerify__FPCcUi[15]; // size: 0xF, address: 0x80D5E300
char __FUNCTION__$localstatic1$skip_ws__FRPCcRUl[8]; // size: 0x8, address: 0x80D5E30F
char __FUNCTION__$localstatic1$rskip_ws__FRPCcRUl[9]; // size: 0x9, address: 0x80D5E317
char __FUNCTION__$localstatic1$xrand_RandomBipolarUnitFloatWithGap__Ff[36]; // size: 0x24, address: 0x804EFD60
char __FUNCTION__$localstatic1$xrand_RandomChoice__FUi[19]; // size: 0x13, address: 0x80D5E320
char __FUNCTION__$localstatic1$xrand_RandomRange__Fii[18]; // size: 0x12, address: 0x80D5E333
char __FUNCTION__$localstatic1$xrand_RandomChance__Ff[19]; // size: 0x13, address: 0x80D5E345
char __FUNCTION__$localstatic1$xSndSetListenerData__F12xSndListenerPC7xMat4x3RC5xVec3[20]; // size: 0x14, address: 0x80D5E358
char __FUNCTION__$localstatic1$xModelGetFrame__FP14xModelInstance[15]; // size: 0xF, address: 0x80D5E36C
char __FUNCTION__$localstatic1$xModelSetFrame__FP14xModelInstancePC7xMat4x3[15]; // size: 0xF, address: 0x80D5E37B
char __FUNCTION__$localstatic1$xModelGetLocalSBound__FP14xModelInstance[21]; // size: 0x15, address: 0x804EFD84
char __FUNCTION__$localstatic1$xModelSetMaterialAlpha__FP14xModelInstanceUc[23]; // size: 0x17, address: 0x804EFD99
char __FUNCTION__$localstatic1$xModelMaterialMul__FP14xModelInstancefff[18]; // size: 0x12, address: 0x80D5E38A
char __FUNCTION__$localstatic1$xModelResetMaterial__FP14xModelInstance[20]; // size: 0x14, address: 0x80D5E39C
// total size: 0x20
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
    unsigned short Allocated; // offset 0x1C, size 0x2
    unsigned short Pad0; // offset 0x1E, size 0x2
};
static struct xMemPool sxAnimTempTranPool; // size: 0x20, address: 0x8055B720
static struct xMemPool sxAnimTempStatePool; // size: 0x20, address: 0x8055B740
static unsigned int sxMaxTempTranPool; // size: 0x4, address: 0x80D68B20
static unsigned int sxMaxTempStatePool; // size: 0x4, address: 0x80D68B24
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x80D68B28
// Range: 0x800058E0 -> 0x80005968
static unsigned char _xSingleCompare(char ch /* r3 */, char pattern /* r4 */) {}

// Range: 0x80005968 -> 0x800059C8
static unsigned char _xSingleCompare(char ch /* r1+0x8 */, const char * pattern /* r31 */) {}

// Range: 0x800059C8 -> 0x80005A14
static unsigned char _xCharIn(char ch /* r3 */, const char * string /* r4 */) {
    // Local variables
    int i; // r31
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804EFDB0
// Range: 0x80005A14 -> 0x80006210
static unsigned char _xCheckAnimNameInner(const char * name /* r24 */, const char * pattern /* r26 */, int patternSize /* r1+0x8 */, char * extra /* r27 */, int * nameOut /* r1+0xC */, int * extraOut /* r1+0x10 */) {
    // Local variables
    const char * startExtra; // r23
    const char * initialExtra; // r1+0x48
    int patternCurrent; // r29
    int nameCurrent; // r30
    char masterCharacter; // r1+0x18
    int check; // r25
    char nextPattern[128]; // r1+0x4C
    int nextPatternCount; // r20
    unsigned char first; // r17
    int parenCount; // r22
    const char * IGNORE_PATTERNS; // r1+0x44
    const char * endExtra; // r1+0x40
    int length; // r19
    unsigned char done; // r1+0x17
    const char * current; // r31
    const char * startPattern; // r1+0x3C
    int pc; // r21
    int nameOut; // r1+0x38
    int extraOut; // r1+0x34
    unsigned char ret; // r1+0x16
    const char * current; // r28
    const char * positive; // r1+0x30
    const char * positiveEnd; // r1+0x2C
    const char * negative; // r18
    const char * negativeEnd; // r1+0x28
    int nameOut; // r1+0x24
    int extraOut; // r1+0x20
    unsigned char matched; // r1+0x15

    // References
    // -> static char __FUNCTION__[21];
}

// Range: 0x80006210 -> 0x80006294
static unsigned char _xCheckAnimName(const char * name /* r29 */, const char * pattern /* r26 */, char * extra /* r30 */) {
    // Local variables
    int patternLength; // r28
    int sizeOut; // r1+0x8
    unsigned char ret; // r27
}

// Range: 0x80006294 -> 0x800062F8
static void _xAnimDebugModeService() {
    // References
    // -> static unsigned int sxMaxTempStatePool;
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static unsigned int sxMaxTempTranPool;
    // -> static struct xMemPool sxAnimTempTranPool;
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D5E3B0
// Range: 0x800062F8 -> 0x800064A8
void xAnimInit() {
    // Local variables
    unsigned long il; // r31
    unsigned long ir; // r30
    unsigned long il; // r29
    unsigned long ir; // r28
    unsigned long il; // r27
    unsigned long ir; // r26

    // References
    // -> static unsigned int sxMaxTempStatePool;
    // -> static unsigned int sxMaxTempTranPool;
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x804EFDC5
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x800064A8 -> 0x8000659C
void xAnimTempTransitionInit(unsigned int count /* r31 */) {
    // References
    // -> static unsigned int sxMaxTempTranPool;
    // -> static char __FUNCTION__[24];
    // -> unsigned int gActiveHeap;
    // -> static struct xMemPool sxAnimTempTranPool;
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804EFDDD
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x0
struct xLightKit {};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x4
struct /* @class$884xAnim_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$884xAnim_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// Range: 0x8000659C -> 0x800066A0
struct xAnimTransition * xAnimTempTransitionAlloc(const struct xAnimTransition * source /* r30 */) {
    // Local variables
    struct xAnimTransition * tran; // r31

    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x804EFDF6
// Range: 0x800066A0 -> 0x80006738
void xAnimTempTransitionFree(struct xAnimTransition * tran /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5E3BA
// Range: 0x80006738 -> 0x80006824
void xAnimTempStateInit(unsigned int count /* r31 */) {
    // References
    // -> static unsigned int sxMaxTempStatePool;
    // -> static char __FUNCTION__[19];
    // -> unsigned int gActiveHeap;
    // -> static struct xMemPool sxAnimTempStatePool;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5E3CD
// Range: 0x80006824 -> 0x80006980
struct xAnimState * xAnimTempStateAlloc(const struct xAnimState * source /* r30 */) {
    // Local variables
    struct xAnimState * state; // r31

    // References
    // -> static char __FUNCTION__[20];
    // -> static struct xMemPool sxAnimTempStatePool;
}

// Range: 0x80006980 -> 0x80006A60
static float CalcRecipBlendMax(unsigned short * timeOffs /* r3 */) {
    // Local variables
    float test; // f30
    float max; // f31
}

// Range: 0x80006A60 -> 0x80006AA0
static unsigned int StateHasTransition(struct xAnimState * state /* r3 */, struct xAnimTransition * tran /* r4 */) {
    // Local variables
    struct xAnimTransitionList * curr; // r31
}

// Range: 0x80006AA0 -> 0x80006B24
static unsigned int DefaultHasTransition(struct xAnimState * state /* r3 */, struct xAnimTransition * tran /* r4 */, unsigned int * allocCount /* r5 */) {
    // Local variables
    unsigned int needalloc; // r30
    struct xAnimTransitionList * curr; // r31
}

static char __FUNCTION__[27]; // size: 0x1B, address: 0x804EFE0E
// Range: 0x80006B24 -> 0x80006EF0
static void _xAnimTransitionListInsert(struct xAnimTransitionList * * list /* r29 */, struct xAnimTransitionList * toInsert /* r31 */, unsigned char isDefault /* r27 */, const char * stateName /* r28 */) {
    // Local variables
    const char * errorLowerPriority; // r26
    const char * errorHigherPriority; // r25
    struct xAnimTransitionList * curr; // r30

    // References
    // -> static char __FUNCTION__[27];
}

// Range: 0x80006EF0 -> 0x80006FE8
static unsigned int DefaultOverride(struct xAnimState * state /* r29 */, struct xAnimTransition * tran /* r30 */) {
    // Local variables
    struct xAnimTransitionList * curr; // r31
    struct xAnimTransitionList * prev; // r28
}

// Range: 0x80006FE8 -> 0x80007028
static unsigned int TableHasStateID(struct xAnimTable * table /* r3 */, unsigned int ID /* r4 */) {
    // Local variables
    struct xAnimState * curr; // r31
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5E3E1
static char __FUNCTION__[9]; // size: 0x9, address: 0x80D5E3EF
// Range: 0x80007028 -> 0x800071B4
static void TransitionTimeInit(struct xAnimSingle * single /* r31 */, struct xAnimTransition * tran /* r30 */) {
    // Local variables
    struct xAnimFile * src; // r26
    struct xAnimFile * dest; // r28
    struct xAnimFile * src; // r27
    struct xAnimFile * dest; // r29
    struct xAnimFile * src; // r25
    struct xAnimFile * dest; // r24
    float played; // f30
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804EFE29
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
struct xVec3 g_O3; // size: 0xC, address: 0x80D6D198
// total size: 0x1C
struct iAnimSKBHeader {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    void * ExtractedData; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned short KeyCount; // offset 0xC, size 0x2
    unsigned short TranCount; // offset 0xE, size 0x2
    float Scale[3]; // offset 0x10, size 0xC
};
// Range: 0x800071B4 -> 0x80007900
void xAnimCalcPhysicsData(struct xAnimFile * afile /* r31 */, struct xAnimFile * endPose /* r1+0x8 */) {
    // Local variables
    int numAnims; // r28
    struct iAnimSKBHeader * firstHeader; // r23
    unsigned char axis[3]; // r1+0x20
    int tranCount; // r29
    unsigned int size; // r22
    struct xAnimPhysicsData * physDat; // r30
    struct xVec3 * tranTable; // r26
    float * yawTable; // r27
    struct xVec3 tranStart[100]; // r1+0x1160
    struct xQuat quatStart[100]; // r1+0xB20
    struct xVec3 tranEnd[100]; // r1+0x670
    struct xQuat quatEnd[100]; // r1+0x30
    struct xVec3 * tempTable; // r1+0x1C
    int i; // r21
    int thisTranCount; // r1+0x18
    int i; // r25
    struct xVec3 subOff; // r1+0x24
    int i; // r20
    float yawStart; // f30
    float yawEnd; // f29
    float * tempYaw; // r1+0x14
    int i; // r19
    int thisTranCount; // r1+0x10
    int i; // r24
    float subOff; // f31
    int i; // r18
    int i; // r17

    // References
    // -> static char __FUNCTION__[21];
    // -> struct xVec3 g_O3;
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x804EFE3E
// Range: 0x80007900 -> 0x80007B98
struct xAnimFile * xAnimFileNewBilinear(void * rawData /* r28 */, const char * name /* r1+0x8 */, unsigned int hashed_name_id /* r1+0xC */, unsigned int flags /* r30 */, struct xAnimFile * * linkedList /* r25 */, unsigned int numX /* r26 */, unsigned int numY /* r27 */) {
    // Local variables
    int i; // r29
    struct xAnimFile * afile; // r31

    // References
    // -> static char __FUNCTION__[21];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

// Range: 0x80007B98 -> 0x80007C00
struct xAnimFile * xAnimFileNew(void * rawData /* r1+0x8 */, const char * name /* r30 */, unsigned int flags /* r1+0xC */, struct xAnimFile * * linkedList /* r1+0x10 */) {
    // Local variables
    void * temp; // r31
}

// Range: 0x80007C00 -> 0x80007D00
void xAnimFileSetTime(struct xAnimFile * data /* r31 */, float duration /* f29 */, float timeOffset /* f30 */) {
    // Local variables
    float rawDuration; // f31
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5E3F8
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x80D61DF8
// Range: 0x80007D00 -> 0x800083A8
void xAnimFileEval(struct xAnimFile * data /* r31 */, float time /* f30 */, float * bilinear /* r23 */, unsigned int flags /* r26 */, struct xVec3 * tran /* r28 */, struct xQuat * quat /* r29 */) {
    // Local variables
    int i; // r30
    unsigned int numBones; // r24
    unsigned int fileflags; // r18
    float evalTime; // f31
    float bilerp[2]; // r1+0x20
    float lerp; // f29
    float tmpf; // f28
    unsigned int biindex[2]; // r1+0x18
    unsigned int biplus[2]; // r1+0x10
    struct xQuat * q0; // r27
    struct xVec3 * t0; // r25
    struct xQuat * q1; // r22
    struct xVec3 * t1; // r21

    // References
    // -> unsigned char * g_iAnim_workBuffer;
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5E406
// Range: 0x800083D4 -> 0x800084D4
struct xAnimEffect * xAnimStateNewEffect(struct xAnimState * state /* r27 */, unsigned short flags /* r1+0x8 */, unsigned short probability /* r1+0xA */, float startTime /* f31 */, float endTime /* r1+0xC */, unsigned int (* callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *) /* r1+0x10 */, unsigned int userDataSize /* r26 */) {
    // Local variables
    struct xAnimEffect * curr; // r30
    struct xAnimEffect * * prev; // r29
    struct xAnimEffect * effect; // r31

    // References
    // -> static char __FUNCTION__[20];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5E41A
// Range: 0x800084D4 -> 0x80008560
struct xAnimTable * xAnimTableNew(const char * name /* r1+0x8 */, unsigned int userFlags /* r1+0xC */) {
    // Local variables
    struct xAnimTable * table; // r31

    // References
    // -> static char __FUNCTION__[14];
    // -> unsigned int gActiveHeap;
}

// Range: 0x80008560 -> 0x800085C8
void xAnimDefaultBeforeEnter(struct xAnimState * state /* r31 */) {
    // Local variables
    unsigned int entry; // r30
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5E428
// Range: 0x800085C8 -> 0x800087C8
struct xAnimState * xAnimTableNewState(struct xAnimTable * table /* r30 */, const char * name /* r27 */, unsigned int flags /* r1+0x8 */, unsigned int userFlags /* r1+0xC */, float speed /* r1+0x10 */, float * boneBlend /* r1+0x14 */, float * timeSnap /* r1+0x18 */, float fadeRecip /* r1+0x1C */, unsigned short * fadeOffset /* r28 */, void * callbackData /* r1+0x20 */, void (* beforeEnter)(struct xAnimPlay *, struct xAnimState *, void *) /* r1+0x58 */, void (* stateCallback)(struct xAnimState *, struct xAnimSingle *, void *) /* r1+0x5C */, void (* beforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int) /* r1+0x60 */) {
    // Local variables
    struct xAnimState * state; // r31

    // References
    // -> static char __FUNCTION__[19];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x804EFE53
// Range: 0x800087C8 -> 0x8000894C
void xAnimTableNewStateMany(struct xAnimTable * table /* r1+0x18 */, const char * name /* r28 */, int howMany /* r24 */, unsigned int flags /* r1+0x1C */, unsigned int userFlags /* r1+0x20 */, float speed /* r1+0x24 */, float * boneBlend /* r1+0x28 */, float * timeSnap /* r1+0x2C */, float fadeRecip /* r1+0x30 */, unsigned short * fadeOffset /* r1+0x34 */, void * callbackData /* r1+0x68 */, void (* beforeEnter)(struct xAnimPlay *, struct xAnimState *, void *) /* r1+0x6C */, void (* stateCallback)(struct xAnimState *, struct xAnimSingle *, void *) /* r1+0x70 */, void (* beforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int) /* r1+0x74 */) {
    // Local variables
    unsigned long state_name_len; // r27
    unsigned long alignedLength; // r26
    int i; // r30
    char * duplicate; // r29
    char * digit; // r31

    // References
    // -> static char __FUNCTION__[23];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

// Range: 0x8000894C -> 0x800089FC
static void _xAnimTableAddTransitionHelper(struct xAnimState * state /* r28 */, struct xAnimTransition * tran /* r29 */, unsigned int & allocCount /* r27 */, unsigned int & stateCount /* r31 */, struct xAnimState * * stateList /* r30 */) {
    // Local variables
    unsigned int flags; // r26
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804EFE6A
// Range: 0x800089FC -> 0x80009238
static void _xAnimTableAddTransition(struct xAnimTable * table /* r1+0x8 */, struct xAnimTransition * tran /* r30 */, const char * source /* r1+0xC */, const char * dest /* r31 */) {
    // Local variables
    unsigned char * buffer; // r18
    struct xAnimState * * stateList; // r26
    struct xAnimState * state; // r22
    unsigned int i; // r29
    unsigned int stateCount; // r1+0x44
    unsigned int allocCount; // r1+0x40
    const char * stateName; // r21
    struct xAnimTransitionList * tlist; // r27
    struct xAnimTransition * substTransitionList[32]; // r1+0x148
    unsigned int substTransitionCount; // r1+0x3C
    unsigned char hasSubst; // r17
    int i; // r24
    unsigned char isComplex; // r1+0x11
    const char * COMPLEX_PATTERNS; // r1+0x38
    const char * search; // r20
    struct xAnimState * state; // r25
    int count; // r1+0x34
    char extra[128]; // r1+0xC8
    char tempName[128]; // r1+0x48
    char * tempIterator; // r23
    char * extraIterator; // r19
    unsigned char allowMissingState; // r1+0x10
    int i; // r28
    unsigned long extraIteratorLength; // r1+0x30
    struct xAnimState * tempState; // r1+0x2C
    struct xAnimTransition * duplicatedTransition; // r1+0x28
    struct xAnimTransition * currentTransition; // r1+0x24

    // References
    // -> static char __FUNCTION__[25];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x804EFE83
// Range: 0x80009238 -> 0x800094D4
struct xAnimTransition * xAnimTableNewTransition(struct xAnimTable * table /* r28 */, const char * source /* r1+0x8 */, const char * dest /* r30 */, unsigned int (* conditional)(struct xAnimTransition *, struct xAnimSingle *, void *) /* r1+0xC */, unsigned int (* callback)(struct xAnimTransition *, struct xAnimSingle *, void *) /* r1+0x10 */, unsigned int flags /* r1+0x14 */, unsigned int userFlags /* r1+0x18 */, float srcTime /* r1+0x1C */, float destTime /* r1+0x20 */, unsigned short priority /* r1+0x24 */, unsigned short queuePriority /* r1+0x9A */, float fBlendTime /* f28 */, unsigned short * blendOffset /* r23 */) {
    // Local variables
    struct xAnimTransition * tran; // r31
    float fOOBlendTime; // f29
    unsigned char isComplex; // r27
    int i; // r29

    // References
    // -> static char __FUNCTION__[24];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D5E43B
// Range: 0x800094D4 -> 0x800095E4
void xAnimTableAddFile(struct xAnimTable * table /* r1+0x8 */, struct xAnimFile * file /* r1+0xC */, const char * states /* r1+0x10 */) {
    // Local variables
    unsigned char * buffer; // r31
    const char * stateName; // r30

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D5E44D
// Range: 0x800095E4 -> 0x80009878
struct xAnimState * xAnimTableAddFileID(struct xAnimTable * table /* r30 */, struct xAnimFile * file /* r28 */, unsigned int stateID /* r1+0x8 */, unsigned int subStateID /* r25 */, unsigned int subStateCount /* r26 */) {
    // Local variables
    struct xAnimState * state; // r31
    unsigned char setFile; // r24
    unsigned int current; // r29

    // References
    // -> static char __FUNCTION__[20];
    // -> unsigned int gActiveHeap;
    // -> unsigned int gxAnimUseGrowAlloc;
}

// Range: 0x80009878 -> 0x800098C8
struct xAnimState * xAnimTableGetStateID(struct xAnimTable * table /* r3 */, unsigned int ID /* r4 */) {
    // Local variables
    struct xAnimState * curr; // r31
}

// Range: 0x800098C8 -> 0x80009900
struct xAnimState * xAnimTableGetState(struct xAnimTable * table /* r1+0x8 */, const char * name /* r1+0xC */) {}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D5E461
// Range: 0x80009900 -> 0x800099F0
static void EffectActiveInsert(struct xAnimSingle * single /* r28 */, struct xAnimActiveEffect * active /* r1+0x8 */) {
    // Local variables
    unsigned int index; // r30
    unsigned int count; // r29
    struct xAnimActiveEffect * alist; // r31

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x80009A04 -> 0x80009AAC
static void EffectActiveRemove(struct xAnimActiveEffect * active /* r30 */, unsigned int index /* r29 */, unsigned int count /* r28 */) {
    // Local variables
    struct xAnimActiveEffect * alist; // r31
}

// Range: 0x80009AAC -> 0x80009B0C
static unsigned int EffectPlaying(struct xAnimSingle * single /* r3 */, struct xAnimEffect * effect /* r4 */) {
    // Local variables
    unsigned int i; // r31
}

enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// Range: 0x80009B0C -> 0x80009C7C
static void EffectSingleStart(struct xAnimSingle * single /* r30 */) {
    // Local variables
    struct xAnimEffect * effect; // r31
    struct xAnimActiveEffect tempActive; // r1+0x8
    float time; // f31
    unsigned int flags; // r29
}

// Range: 0x80009C7C -> 0x80009D7C
static void EffectSingleDuration(struct xAnimSingle * single /* r30 */) {
    // Local variables
    float time; // f31
    struct xAnimActiveEffect * alist; // r31
    unsigned int index; // r29
    unsigned int count; // r28
}

// Range: 0x80009D7C -> 0x80009EA0
static void EffectSingleRun(struct xAnimSingle * single /* r30 */) {
    // Local variables
    struct xAnimEffect * effect; // r31
    struct xAnimActiveEffect tempActive; // r1+0x8
    float time; // f31
    unsigned int flags; // r29
}

// Range: 0x80009EA0 -> 0x80009F6C
static void EffectSingleLoop(struct xAnimSingle * single /* r31 */) {
    // Local variables
    struct xAnimActiveEffect * alist; // r30
    unsigned int index; // r28
    unsigned int count; // r27
    struct xAnimEffect * effect; // r29
}

// Range: 0x80009F6C -> 0x8000A0C8
static void EffectSingleStop(struct xAnimSingle * single /* r31 */) {
    // Local variables
    unsigned int i; // r29
    struct xAnimEffect * effect; // r30
    struct xAnimActiveEffect tempActive; // r1+0x8
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D5E474
// Range: 0x8000A0C8 -> 0x8000A2AC
void xAnimPhysicsEval(struct xAnimPhysicsData * phys /* r31 */, float time /* f30 */, struct xVec3 * disp /* r28 */, float * yaw /* r29 */) {
    // Local variables
    float interp; // f31
    int index; // r30

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x8000A2AC -> 0x8000A2EC
static void StopUpdate(struct xAnimSingle * single /* r3 */) {
    // Local variables
    float duration; // f31
}

// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// Range: 0x8000A2EC -> 0x8000A404
static void LoopUpdate(struct xAnimSingle * single /* r31 */) {
    // Local variables
    float duration; // f31
    float remainDelta; // f30
    struct xVec3 disp; // r1+0x14
    float yaw; // r1+0x10
    struct xMat3x3 rot; // r1+0x20
}

// Range: 0x8000A404 -> 0x8000A540
void xAnimPlaySetState(struct xAnimSingle * single /* r31 */, struct xAnimState * state /* r30 */, float startTime /* f30 */) {}

// Range: 0x8000A540 -> 0x8000A63C
static void SetTransition(struct xAnimTransition * & dest /* r30 */, struct xAnimTransition * tran /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[14];
}

// Range: 0x8000A63C -> 0x8000A754
static void SetState(struct xAnimState * & dest /* r30 */, struct xAnimState * state /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D5E485
// total size: 0x4
struct __file_modes {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4
    unsigned int io_mode : 3; // offset 0x0, size 0x4
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4
    unsigned int file_kind : 3; // offset 0x0, size 0x4
    unsigned int file_orientation : 2; // offset 0x0, size 0x4
    unsigned int binary_io : 1; // offset 0x0, size 0x4
};
// total size: 0x4
struct __file_state {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4
    unsigned int free_buffer : 1; // offset 0x0, size 0x4
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
};
// total size: 0x50
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    struct __file_modes mode; // offset 0x4, size 0x4
    struct __file_state state; // offset 0x8, size 0x4
    unsigned char is_dynamically_allocated; // offset 0xC, size 0x1
    unsigned char char_buffer; // offset 0xD, size 0x1
    unsigned char char_buffer_overflow; // offset 0xE, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xF, size 0x2
    unsigned short ungetwc_buffer[2]; // offset 0x12, size 0x4
    unsigned long position; // offset 0x18, size 0x4
    unsigned char * buffer; // offset 0x1C, size 0x4
    unsigned long buffer_size; // offset 0x20, size 0x4
    unsigned char * buffer_ptr; // offset 0x24, size 0x4
    unsigned long buffer_len; // offset 0x28, size 0x4
    unsigned long buffer_alignment; // offset 0x2C, size 0x4
    unsigned long saved_buffer_len; // offset 0x30, size 0x4
    unsigned long buffer_pos; // offset 0x34, size 0x4
    int (* position_proc)(unsigned long, unsigned long *, int, void (*)()); // offset 0x38, size 0x4
    int (* read_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x3C, size 0x4
    int (* write_proc)(unsigned long, unsigned char *, unsigned long *, void (*)()); // offset 0x40, size 0x4
    int (* close_proc)(unsigned long); // offset 0x44, size 0x4
    void (* idle_proc)(); // offset 0x48, size 0x4
    struct _FILE * next_file_struct; // offset 0x4C, size 0x4
};
struct _FILE __files[]; // size: 0x0, address: 0x805352C8
// Range: 0x8000A754 -> 0x8000B1F4
static void SingleUpdate(struct xAnimSingle * single /* r31 */, float timeDelta /* f31 */) {
    // Local variables
    unsigned int foundBlendstop; // r27
    unsigned int firstStep; // r25
    struct xAnimTransition * foundTransition; // r29
    struct xAnimSingle * bl; // r30
    float tranDelta; // f30
    float blendDelta; // f25
    float singleTime; // f27
    void * object; // r24
    float duration; // f29
    float timeCmp; // f28
    char tempText[1024]; // r1+0x90
    float timeCmp; // f26
    struct xAnimTransitionList * curr; // r28
    float recip; // f24
    unsigned char transferredState; // r26
    struct xVec3 disp; // r1+0x24
    float yaw; // r1+0x14
    struct xMat3x3 rot; // r1+0x60
    struct xVec3 disp; // r1+0x18
    float yaw; // r1+0x10
    struct xMat3x3 rot; // r1+0x30

    // References
    // -> static char __FUNCTION__[13];
    // -> struct _FILE __files[];
}

// Range: 0x8000B1F4 -> 0x8000B304
static void SingleEval(struct xAnimSingle * single /* r31 */, struct xVec3 * tran /* r29 */, struct xQuat * quat /* r30 */) {
    // Local variables
    struct xQuat * blendquat; // r28
    struct xVec3 * blendtran; // r27

    // References
    // -> unsigned char * g_iAnim_workBuffer;
}

// Range: 0x8000B304 -> 0x8000B430
void xAnimPlaySetup(struct xAnimPlay * play /* r31 */, void * object /* r1+0x8 */, struct xAnimTable * table /* r28 */, struct xModelInstance * modelInst /* r29 */) {
    // Local variables
    int i; // r30
}

static unsigned char * tmpBuffer; // size: 0x4, address: 0x80D68B2C
static signed char init; // size: 0x1, address: 0x80D68B30
static char __FUNCTION__[26]; // size: 0x1A, address: 0x804EFE9B
// Range: 0x8000B430 -> 0x8000B694
void xAnimPlayChooseTransition(struct xAnimPlay * play /* r31 */) {
    // Local variables
    unsigned int i; // r29
    void * object; // r26
    struct xAnimTransition * * found; // r28
    struct xAnimTransitionList * curr; // r30
    unsigned int index; // r27

    // References
    // -> static char __FUNCTION__[26];
    // -> static unsigned char * tmpBuffer;
    // -> static signed char init;
    // -> unsigned char * g_iAnim_workBuffer;
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804EFEB5
// Range: 0x8000B694 -> 0x8000BA64
void xAnimPlayStartTransition(struct xAnimPlay * play /* r29 */, struct xAnimTransition * transition /* r1+0x8 */) {
    // Local variables
    unsigned int index; // r27
    struct xAnimSingle * single; // r31
    struct xAnimSingle * bl; // r30
    unsigned char transferredState; // r28
    unsigned char tookOwnership; // r26

    // References
    // -> static char __FUNCTION__[25];
}

// Range: 0x8000BA64 -> 0x8000BB08
void xAnimPlayUpdate(struct xAnimPlay * play /* r30 */, float timeDelta /* r1+0x8 */) {
    // Local variables
    unsigned int i; // r29
    struct xAnimSingle * single; // r31
}

// Range: 0x8000BB08 -> 0x8000BE08
void xAnimPlayEval(struct xAnimPlay * play /* r31 */) {
    // Local variables
    unsigned int i; // r24
    unsigned int bone; // r28
    struct xQuat * quatresult; // r27
    struct xVec3 * tranresult; // r29
    struct xQuat * quatblend; // r25
    struct xVec3 * tranblend; // r26
    struct xAnimSingle * si; // r30
    float blendF; // f31
    float blendR; // f30
    unsigned short * blendO; // r23

    // References
    // -> unsigned char * g_iAnim_workBuffer;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D5E492
// Range: 0x8000BE08 -> 0x8000BFB4
void xAnimPoolCB(struct xMemPool * pool /* r25 */, void * data /* r24 */) {
    // Local variables
    int i; // r29
    struct xAnimPlay * clone; // r28
    struct xAnimPlay * play; // r30
    struct xAnimSingle * clonesingle; // r27
    struct xAnimSingle * currsingle; // r31
    struct xAnimActiveEffect * curract; // r26

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D5E49E
// Range: 0x8000BFB4 -> 0x8000C3A8
void xAnimPoolInit(struct xMemPool * pool /* r21 */, unsigned int count /* r22 */, unsigned int singles /* r30 */, unsigned int blendFlags /* r29 */, unsigned int effectMax /* r26 */) {
    // Local variables
    unsigned int size; // r24
    unsigned int i; // r27
    void * buffer; // r23
    struct xAnimPlay * play; // r28
    struct xAnimSingle * currsingle; // r31
    struct xAnimActiveEffect * curract; // r25

    // References
    // -> static char __FUNCTION__[14];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8000C3A8 -> 0x8000C400
struct xAnimPlay * xAnimPoolAlloc(struct xMemPool * pool /* r1+0x8 */, void * object /* r1+0xC */, struct xAnimTable * table /* r1+0x10 */, struct xModelInstance * modelInst /* r1+0x14 */) {
    // Local variables
    struct xAnimPlay * play; // r31
}

// Range: 0x8000C400 -> 0x8000C4C4
void xAnimPoolFree(struct xAnimPlay * play /* r31 */) {
    // Local variables
    unsigned int i; // r30
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x804EFECE
// Range: 0x8000C4C4 -> 0x8000C67C
void xAnimSetMultifileFromCode(struct xAnimState * state /* r31 */, unsigned int animCode /* r29 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static char __FUNCTION__[26];
}


