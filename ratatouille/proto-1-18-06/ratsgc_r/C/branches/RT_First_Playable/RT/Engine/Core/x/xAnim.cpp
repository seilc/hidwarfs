/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xAnim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800058A0 -> 0x8000B6F8
*/
char __FUNCTION__$localstatic1$xBinom__Fii[7]; // size: 0x7, address: 0x80BFB3E0
char __FUNCTION__$localstatic1$xSCurve__Ff[8]; // size: 0x8, address: 0x80BFB3E8
char __FUNCTION__$localstatic1$end_t__14xResponseCurveCFv[6]; // size: 0x6, address: 0x80BFB3F0
char __FUNCTION__$localstatic1$start_t__14xResponseCurveCFv[8]; // size: 0x8, address: 0x80BFB3F8
char __FUNCTION__$localstatic1$xsqrtfast__FRff[10]; // size: 0xA, address: 0x80BFB400
char __FUNCTION__$localstatic1$xinvsqrt__Ff[9]; // size: 0x9, address: 0x80BFB40C
char __FUNCTION__$localstatic1$normalize__5xVec3Fv[10]; // size: 0xA, address: 0x80BFB418
char __FUNCTION__$localstatic1$xVec3Cross__FP5xVec3PC5xVec3PC5xVec3[11]; // size: 0xB, address: 0x80BFB424
char __FUNCTION__$localstatic1$xVec3Cross__FR5xVec3RC5xVec3RC5xVec3[11]; // size: 0xB, address: 0x80BFB430
char __FUNCTION__$localstatic1$xMat3x3MulScaleC__FP7xMat3x3PC7xMat3x3fff[17]; // size: 0x11, address: 0x80BFB43C
char __FUNCTION__$localstatic1$xMat3x3MulScale__FP7xMat3x3PC7xMat3x3P5xVec3[16]; // size: 0x10, address: 0x80BFB450
char __FUNCTION__$localstatic1$xMemPushTemp__FUi[13]; // size: 0xD, address: 0x80BFB460
char __FUNCTION__$localstatic1$skip_ws__FRPCcRUl[8]; // size: 0x8, address: 0x80BFB470
char __FUNCTION__$localstatic1$rskip_ws__FRPCcRUl[9]; // size: 0x9, address: 0x80BFB478
char __FUNCTION__$localstatic1$xrand_RandomBipolarUnitFloatWithGap__Ff[36]; // size: 0x24, address: 0x80413220
char __FUNCTION__$localstatic1$xrand_RandomChoice__FUi[19]; // size: 0x13, address: 0x80BFB484
char __FUNCTION__$localstatic1$xrand_RandomRange__Fii[18]; // size: 0x12, address: 0x80BFB498
char __FUNCTION__$localstatic1$xrand_RandomChance__Ff[19]; // size: 0x13, address: 0x80BFB4AC
char __FUNCTION__$localstatic1$xSndSetListenerData__F12xSndListenerPC7xMat4x3RC5xVec3[20]; // size: 0x14, address: 0x80BFB4C0
char __FUNCTION__$localstatic1$xModelGetFrame__FP14xModelInstance[15]; // size: 0xF, address: 0x80BFB4D4
char __FUNCTION__$localstatic1$xModelSetFrame__FP14xModelInstancePC7xMat4x3[15]; // size: 0xF, address: 0x80BFB4E4
char __FUNCTION__$localstatic1$xModelGetLocalSBound__FP14xModelInstance[21]; // size: 0x15, address: 0x80BFB4F4
char __FUNCTION__$localstatic1$xModelSetMaterialAlpha__FP14xModelInstanceUc[23]; // size: 0x17, address: 0x80BFB50C
char __FUNCTION__$localstatic1$xModelMaterialMul__FP14xModelInstancefff[18]; // size: 0x12, address: 0x80BFB524
char __FUNCTION__$localstatic1$xModelResetMaterial__FP14xModelInstance[20]; // size: 0x14, address: 0x80BFB538
// total size: 0x1C
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
};
static struct xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x804592E0
static struct xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x804592FC
static unsigned int sxMaxTempTranPool; // size: 0x4, address: 0x80C06E20
static unsigned int sxMaxTempStatePool; // size: 0x4, address: 0x80C06E24
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x80C06E28
// Range: 0x800058A0 -> 0x80005910
static unsigned char _xSingleCompare(char ch /* r0 */, char pattern /* r0 */) {}

// Range: 0x80005910 -> 0x80005974
static unsigned char _xSingleCompare(char ch /* r30 */, const char * pattern /* r31 */) {}

// Range: 0x80005974 -> 0x800059A8
static unsigned char _xCharIn(char ch /* r0 */, const char * string /* r0 */) {
    // Local variables
    int i; // r0
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFB54C
// Range: 0x800059A8 -> 0x80006090
static unsigned char _xCheckAnimNameInner(const char * name /* r22 */, const char * pattern /* r23 */, int patternSize /* r24 */, char * extra /* r25 */, int * nameOut /* r26 */, int * extraOut /* r27 */) {
    // Local variables
    const char * startExtra; // r31
    const char * initialExtra; // r30
    int patternCurrent; // r29
    int nameCurrent; // r28
    char masterCharacter; // r0
    int check; // r20
    char nextPattern[128]; // r1+0x18
    int nextPatternCount; // r21
    unsigned char first; // r19
    int parenCount; // r18
    const char * IGNORE_PATTERNS; // r0
    int length; // r16
    unsigned char done; // r18
    const char * current; // r19
    const char * startPattern; // r4
    int pc; // r5
    int nameOut; // r1+0x14
    int extraOut; // r1+0x10
    const char * current; // r18
    const char * positive; // r4
    const char * positiveEnd; // r5
    const char * negative; // r19
    const char * negativeEnd; // r17
    int nameOut; // r1+0xC
    int extraOut; // r1+0x8
    unsigned char matched; // r16

    // References
    // -> static char __FUNCTION__[21];
}

// Range: 0x80006090 -> 0x80006120
static unsigned char _xCheckAnimName(const char * name /* r29 */, const char * pattern /* r30 */, char * extra /* r31 */) {
    // Local variables
    int patternLength; // r5
    int sizeOut; // r1+0x8
    unsigned char ret; // r0
}

// Range: 0x80006120 -> 0x80006174
void xAnimInit() {
    // References
    // -> static unsigned int sxMaxTempStatePool;
    // -> static unsigned int sxMaxTempTranPool;
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static struct xMemPool sxAnimTempTranPool;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFB564
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// Range: 0x80006174 -> 0x80006238
void xAnimTempTransitionInit(unsigned int count /* r31 */) {
    // References
    // -> static unsigned int sxMaxTempTranPool;
    // -> unsigned int gActiveHeap;
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x80413244
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
struct /* @class$1080xAnim_cpp */ {
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
    struct /* @class$1080xAnim_cpp */ {
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
// Range: 0x80006238 -> 0x80006324
struct xAnimTransition * xAnimTempTransitionAlloc(const struct xAnimTransition * source /* r30 */) {
    // Local variables
    struct xAnimTransition * tran; // r31

    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFB57C
// Range: 0x80006324 -> 0x800063A8
void xAnimTempTransitionFree(struct xAnimTransition * tran /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[24];
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFB594
// Range: 0x800063A8 -> 0x8000646C
void xAnimTempStateInit(unsigned int count /* r31 */) {
    // References
    // -> static unsigned int sxMaxTempStatePool;
    // -> unsigned int gActiveHeap;
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static char __FUNCTION__[19];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFB5A8
// Range: 0x8000646C -> 0x800065A8
struct xAnimState * xAnimTempStateAlloc(const struct xAnimState * source /* r30 */) {
    // Local variables
    struct xAnimState * state; // r31

    // References
    // -> static char __FUNCTION__[20];
    // -> static struct xMemPool sxAnimTempStatePool;
}

// Range: 0x800065A8 -> 0x8000664C
static float CalcRecipBlendMax(unsigned short * timeOffs /* r3 */) {
    // Local variables
    float test; // f1
    float max; // f6
}

// Range: 0x8000664C -> 0x8000667C
static unsigned int StateHasTransition(struct xAnimState * state /* r0 */, struct xAnimTransition * tran /* r0 */) {
    // Local variables
    struct xAnimTransitionList * curr; // r3
}

// Range: 0x8000667C -> 0x800066E0
static unsigned int DefaultHasTransition(struct xAnimState * state /* r0 */, struct xAnimTransition * tran /* r0 */, unsigned int * allocCount /* r0 */) {
    // Local variables
    unsigned int needalloc; // r7
    struct xAnimTransitionList * curr; // r8
}

static char __FUNCTION__[27]; // size: 0x1B, address: 0x80413260
// Range: 0x800066E0 -> 0x8000680C
static void _xAnimTransitionListInsert(struct xAnimTransitionList * * list /* r30 */, struct xAnimTransitionList * toInsert /* r31 */) {
    // Local variables
    struct xAnimTransitionList * curr; // r7

    // References
    // -> static char __FUNCTION__[27];
}

// Range: 0x8000680C -> 0x800068BC
static unsigned int DefaultOverride(struct xAnimState * state /* r3 */, struct xAnimTransition * tran /* r0 */) {
    // Local variables
    struct xAnimTransitionList * curr; // r8
    struct xAnimTransitionList * prev; // r9
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFB5BC
static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFB5CC
// Range: 0x800068BC -> 0x80006A24
static void TransitionTimeInit(struct xAnimSingle * single /* r31 */, struct xAnimTransition * tran /* r0 */) {
    // Local variables
    struct xAnimFile * dest; // r4
    struct xAnimFile * src; // r4
    struct xAnimFile * dest; // r5
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFB5D8
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
struct xVec3 g_O3; // size: 0xC, address: 0x80C0ADA0
// Range: 0x80006A24 -> 0x800073BC
void xAnimCalcPhysicsData(struct xAnimFile * afile /* r31 */, struct xAnimFile * endPose /* r24 */) {
    // Local variables
    int numAnims; // r28
    unsigned char axis[3]; // r1+0x8
    int tranCount; // r27
    unsigned int size; // r4
    struct xAnimPhysicsData * physDat; // r0
    struct xVec3 * tranTable; // r26
    float * yawTable; // r25
    struct xVec3 tranStart[100]; // r1+0x1148
    struct xQuat quatStart[100]; // r1+0xB08
    struct xVec3 tranEnd[100]; // r1+0x658
    struct xQuat quatEnd[100]; // r1+0x18
    struct xVec3 * tempTable; // r21
    int i; // r22
    int thisTranCount; // r0
    int i; // r20
    struct xVec3 subOff; // r1+0xC
    int i; // r20
    float yawStart; // f31
    float yawEnd; // f30
    float * tempYaw; // r20
    int i; // r21
    int thisTranCount; // r0
    int i; // r3
    float subOff; // f7
    int i; // r20
    int i; // r4

    // References
    // -> static char __FUNCTION__[21];
    // -> struct xVec3 g_O3;
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFB5F0
// Range: 0x800073BC -> 0x80007688
struct xAnimFile * xAnimFileNewBilinear(void * rawData /* r24 */, const char * name /* r25 */, unsigned int hashed_name_id /* r26 */, unsigned int flags /* r27 */, struct xAnimFile * * linkedList /* r28 */, unsigned int numX /* r29 */, unsigned int numY /* r30 */) {
    // Local variables
    int i; // r6
    struct xAnimFile * afile; // r31

    // References
    // -> static char __FUNCTION__[21];
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

// Range: 0x80007688 -> 0x800076F4
struct xAnimFile * xAnimFileNew(void * rawData /* r1+0x8 */, const char * name /* r29 */, unsigned int flags /* r30 */, struct xAnimFile * * linkedList /* r31 */) {}

// Range: 0x800076F4 -> 0x800077B4
void xAnimFileSetTime(struct xAnimFile * data /* r31 */, float duration /* f30 */, float timeOffset /* f31 */) {
    // Local variables
    float rawDuration; // f0
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFB608
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x80BFF6D0
// Range: 0x800077B4 -> 0x80007D44
void xAnimFileEval(struct xAnimFile * data /* r21 */, float time /* f28 */, float * bilinear /* r26 */, unsigned int flags /* r22 */, struct xVec3 * tran /* r23 */, struct xQuat * quat /* r24 */) {
    // Local variables
    int i; // r26
    unsigned int numBones; // r25
    unsigned int fileflags; // r20
    float evalTime; // f31
    float bilerp[2]; // r1+0x20
    float tmpf; // f0
    unsigned int biindex[2]; // r1+0x18
    unsigned int biplus[2]; // r1+0x10
    struct xQuat * q0; // r26
    struct xVec3 * t0; // r27
    struct xQuat * q1; // r28
    struct xVec3 * t1; // r29

    // References
    // -> unsigned char * g_iAnim_workBuffer;
    // -> static char __FUNCTION__[14];
}

// Range: 0x80007D68 -> 0x80007E54
struct xAnimEffect * xAnimStateNewEffect(struct xAnimState * state /* r28 */, unsigned short flags /* r29 */, unsigned short probability /* r30 */, float startTime /* f30 */, float endTime /* f31 */, unsigned int (* callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *) /* r31 */, unsigned int userDataSize /* r0 */) {
    // Local variables
    struct xAnimEffect * curr; // r4
    struct xAnimEffect * * prev; // r5
    struct xAnimEffect * effect; // r3

    // References
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

// Range: 0x80007E54 -> 0x80007EB8
struct xAnimTable * xAnimTableNew(const char * name /* r30 */, unsigned int userFlags /* r31 */) {
    // Local variables
    struct xAnimTable * table; // r0

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80007EB8 -> 0x80007F14
void xAnimDefaultBeforeEnter(struct xAnimState * state /* r31 */) {
    // Local variables
    unsigned int entry; // r0
}

// Range: 0x80007F14 -> 0x80008054
struct xAnimState * xAnimTableNewState(struct xAnimTable * table /* r20 */, const char * name /* r21 */, unsigned int flags /* r22 */, unsigned int userFlags /* r23 */, float speed /* f30 */, float * boneBlend /* r24 */, float * timeSnap /* r25 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r26 */, void * callbackData /* r27 */, void (* beforeEnter)(struct xAnimPlay *, struct xAnimState *, void *) /* r28 */, void (* stateCallback)(struct xAnimState *, struct xAnimSingle *, void *) /* r29 */, void (* beforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int) /* r30 */) {
    // Local variables
    struct xAnimState * state; // r31

    // References
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

// Range: 0x80008054 -> 0x800081D0
void xAnimTableNewStateMany(struct xAnimTable * table /* r29 */, const char * name /* r30 */, int howMany /* r31 */, unsigned int flags /* r17 */, unsigned int userFlags /* r18 */, float speed /* f30 */, float * boneBlend /* r19 */, float * timeSnap /* r20 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r21 */, void * callbackData /* r22 */, void (* beforeEnter)(struct xAnimPlay *, struct xAnimState *, void *) /* r23 */, void (* stateCallback)(struct xAnimState *, struct xAnimSingle *, void *) /* r14 */, void (* beforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int) /* r24 */) {
    // Local variables
    unsigned long state_name_len; // r0
    int i; // r25
    char * duplicate; // r16
    char * digit; // r15

    // References
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

// Range: 0x800081D0 -> 0x80008280
static void _xAnimTableAddTransitionHelper(struct xAnimState * state /* r28 */, struct xAnimTransition * tran /* r0 */, unsigned int & allocCount /* r29 */, unsigned int & stateCount /* r30 */, struct xAnimState * * stateList /* r31 */) {}

static char __FUNCTION__[25]; // size: 0x19, address: 0x8041327C
// Range: 0x80008280 -> 0x80008968
static void _xAnimTableAddTransition(struct xAnimTable * table /* r15 */, struct xAnimTransition * tran /* r16 */, const char * source /* r18 */, const char * dest /* r17 */) {
    // Local variables
    unsigned char * buffer; // r14
    struct xAnimState * * stateList; // r28
    struct xAnimState * state; // r18
    unsigned int i; // r20
    unsigned int stateCount; // r1+0xC
    unsigned int allocCount; // r1+0x8
    const char * stateName; // r27
    struct xAnimTransitionList * tlist; // r26
    struct xAnimTransition * substTransitionList[32]; // r1+0x110
    unsigned int substTransitionCount; // r25
    unsigned char hasSubst; // r24
    int i; // r0
    unsigned char isComplex; // r18
    const char * COMPLEX_PATTERNS; // r19
    const char * search; // r20
    struct xAnimState * state; // r23
    int count; // r22
    char extra[128]; // r1+0x90
    char tempName[128]; // r1+0x10
    char * tempIterator; // r21
    char * extraIterator; // r20
    unsigned char allowMissingState; // r19
    int i; // r18
    unsigned long extraIteratorLength; // r0
    struct xAnimState * tempState; // r0
    struct xAnimTransition * duplicatedTransition; // r0

    // References
    // -> static char __FUNCTION__[25];
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80BFB618
// Range: 0x80008968 -> 0x80008B98
struct xAnimTransition * xAnimTableNewTransition(struct xAnimTable * table /* r20 */, const char * source /* r21 */, const char * dest /* r22 */, unsigned int (* conditional)(struct xAnimTransition *, struct xAnimSingle *, void *) /* r23 */, unsigned int (* callback)(struct xAnimTransition *, struct xAnimSingle *, void *) /* r24 */, unsigned int flags /* r25 */, unsigned int userFlags /* r26 */, float srcTime /* f28 */, float destTime /* f29 */, unsigned short priority /* r27 */, unsigned short queuePriority /* r28 */, float fBlendTime /* f30 */, unsigned short * blendOffset /* r29 */) {
    // Local variables
    struct xAnimTransition * tran; // r31
    unsigned char isComplex; // r30
    int i; // r0

    // References
    // -> static char __FUNCTION__[24];
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFB630
// Range: 0x80008B98 -> 0x80008C9C
void xAnimTableAddFile(struct xAnimTable * table /* r28 */, struct xAnimFile * file /* r29 */, const char * states /* r31 */) {
    // Local variables
    unsigned char * buffer; // r30
    const char * stateName; // r3

    // References
    // -> static char __FUNCTION__[18];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFB644
// Range: 0x80008C9C -> 0x80008EC8
struct xAnimState * xAnimTableAddFileID(struct xAnimTable * table /* r28 */, struct xAnimFile * file /* r29 */, unsigned int stateID /* r5 */, unsigned int subStateID /* r30 */, unsigned int subStateCount /* r26 */) {
    // Local variables
    struct xAnimState * state; // r31
    unsigned int current; // r27

    // References
    // -> static char __FUNCTION__[20];
    // -> unsigned int gxAnimUseGrowAlloc;
    // -> unsigned int gActiveHeap;
}

// Range: 0x80008EC8 -> 0x80008F00
struct xAnimState * xAnimTableGetStateID(struct xAnimTable * table /* r0 */, unsigned int ID /* r0 */) {
    // Local variables
    struct xAnimState * curr; // r3
}

// Range: 0x80008F00 -> 0x80008F3C
struct xAnimState * xAnimTableGetState(struct xAnimTable * table /* r31 */, const char * name /* r4 */) {}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFB658
// Range: 0x80008F3C -> 0x80009018
static void EffectActiveInsert(struct xAnimSingle * single /* r0 */, struct xAnimActiveEffect * active /* r28 */) {
    // Local variables
    unsigned int index; // r31
    unsigned int count; // r30
    struct xAnimActiveEffect * alist; // r29

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x8000902C -> 0x800090A8
static void EffectActiveRemove(struct xAnimActiveEffect * active /* r3 */, unsigned int index /* r4 */, unsigned int count /* r0 */) {
    // Local variables
    struct xAnimActiveEffect * alist; // r31
}

// Range: 0x800090A8 -> 0x800090F0
static unsigned int EffectPlaying(struct xAnimSingle * single /* r0 */, struct xAnimEffect * effect /* r0 */) {
    // Local variables
    unsigned int i; // r7
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
// Range: 0x800090F0 -> 0x80009250
static void EffectSingleStart(struct xAnimSingle * single /* r30 */) {
    // Local variables
    struct xAnimEffect * effect; // r31
    struct xAnimActiveEffect tempActive; // r1+0x8
    float time; // f31
    unsigned int flags; // r3
}

// Range: 0x80009250 -> 0x80009340
static void EffectSingleDuration(struct xAnimSingle * single /* r28 */) {
    // Local variables
    float time; // f31
    struct xAnimActiveEffect * alist; // r31
    unsigned int index; // r30
    unsigned int count; // r29
}

// Range: 0x80009340 -> 0x8000946C
static void EffectSingleRun(struct xAnimSingle * single /* r28 */) {
    // Local variables
    struct xAnimEffect * effect; // r30
    struct xAnimActiveEffect tempActive; // r1+0x8
    float time; // f31
    unsigned int flags; // r29
}

// Range: 0x8000946C -> 0x80009548
static void EffectSingleLoop(struct xAnimSingle * single /* r28 */) {
    // Local variables
    struct xAnimActiveEffect * alist; // r31
    unsigned int index; // r30
    unsigned int count; // r29
    struct xAnimEffect * effect; // r3
}

// Range: 0x80009548 -> 0x80009688
static void EffectSingleStop(struct xAnimSingle * single /* r31 */) {
    // Local variables
    unsigned int i; // r29
    struct xAnimEffect * effect; // r29
    struct xAnimActiveEffect tempActive; // r1+0x8
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFB66C
// Range: 0x80009688 -> 0x80009818
void xAnimPhysicsEval(struct xAnimPhysicsData * phys /* r29 */, float time /* f31 */, struct xVec3 * disp /* r30 */, float * yaw /* r31 */) {
    // Local variables
    float interp; // f31
    int index; // r27

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x80009818 -> 0x80009840
static void StopUpdate(struct xAnimSingle * single /* r0 */) {
    // Local variables
    float duration; // f1
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
// Range: 0x80009840 -> 0x80009948
static void LoopUpdate(struct xAnimSingle * single /* r31 */) {
    // Local variables
    float duration; // f30
    float remainDelta; // f0
    struct xVec3 disp; // r1+0x14
    float yaw; // r1+0x10
    struct xMat3x3 rot; // r1+0x20
}

// Range: 0x80009948 -> 0x80009A64
void xAnimPlaySetState(struct xAnimSingle * single /* r30 */, struct xAnimState * state /* r31 */, float startTime /* f31 */) {}

// Range: 0x80009A64 -> 0x80009B44
static void SetTransition(struct xAnimTransition * & dest /* r30 */, struct xAnimTransition * tran /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempTranPool;
    // -> static char __FUNCTION__[14];
}

// Range: 0x80009B44 -> 0x80009C40
static void SetState(struct xAnimState * & dest /* r30 */, struct xAnimState * state /* r31 */) {
    // References
    // -> static struct xMemPool sxAnimTempStatePool;
    // -> static char __FUNCTION__[9];
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFB680
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
struct _FILE __files[]; // size: 0x0, address: 0x8044F4A8
// Range: 0x80009C40 -> 0x8000A5A0
static void SingleUpdate(struct xAnimSingle * single /* r26 */, float timeDelta /* f28 */) {
    // Local variables
    unsigned int foundBlendstop; // r31
    unsigned int firstStep; // r30
    struct xAnimTransition * foundTransition; // r29
    struct xAnimSingle * bl; // r28
    float tranDelta; // f31
    float blendDelta; // f30
    float singleTime; // f27
    void * object; // r27
    float duration; // f29
    float timeCmp; // f1
    float timeCmp; // f26
    struct xAnimTransitionList * curr; // r25
    float recip; // f3
    unsigned char transferredState; // r27
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

// Range: 0x8000A5A0 -> 0x8000A68C
static void SingleEval(struct xAnimSingle * single /* r27 */, struct xVec3 * tran /* r28 */, struct xQuat * quat /* r29 */) {
    // Local variables
    struct xQuat * blendquat; // r31
    struct xVec3 * blendtran; // r30

    // References
    // -> unsigned char * g_iAnim_workBuffer;
}

// Range: 0x8000A68C -> 0x8000A79C
void xAnimPlaySetup(struct xAnimPlay * play /* r28 */, void * object /* r0 */, struct xAnimTable * table /* r29 */, struct xModelInstance * modelInst /* r0 */) {
    // Local variables
    int i; // r30
}

static unsigned char * tmpBuffer; // size: 0x4, address: 0x80C06E2C
static signed char init; // size: 0x1, address: 0x80C06E30
static char __FUNCTION__[26]; // size: 0x1A, address: 0x80413298
// Range: 0x8000A79C -> 0x8000A9B0
void xAnimPlayChooseTransition(struct xAnimPlay * play /* r26 */) {
    // Local variables
    unsigned int i; // r30
    void * object; // r29
    struct xAnimTransition * * found; // r28
    struct xAnimTransitionList * curr; // r27
    unsigned int index; // r25

    // References
    // -> static char __FUNCTION__[26];
    // -> static unsigned char * tmpBuffer;
    // -> static signed char init;
    // -> unsigned char * g_iAnim_workBuffer;
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804132B4
// Range: 0x8000A9B0 -> 0x8000AD04
void xAnimPlayStartTransition(struct xAnimPlay * play /* r27 */, struct xAnimTransition * transition /* r1+0x8 */) {
    // Local variables
    unsigned int index; // r28
    struct xAnimSingle * single; // r31
    struct xAnimSingle * bl; // r30
    unsigned char transferredState; // r29
    unsigned char tookOwnership; // r28

    // References
    // -> static char __FUNCTION__[25];
}

// Range: 0x8000AD04 -> 0x8000ADAC
void xAnimPlayUpdate(struct xAnimPlay * play /* r28 */, float timeDelta /* f31 */) {
    // Local variables
    unsigned int i; // r30
    struct xAnimSingle * single; // r29
}

// Range: 0x8000ADAC -> 0x8000B064
void xAnimPlayEval(struct xAnimPlay * play /* r24 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int bone; // r20
    struct xQuat * quatresult; // r29
    struct xVec3 * tranresult; // r28
    struct xQuat * quatblend; // r27
    struct xVec3 * tranblend; // r26
    struct xAnimSingle * si; // r25
    float blendF; // f31
    float blendR; // f30
    unsigned short * blendO; // r20

    // References
    // -> unsigned char * g_iAnim_workBuffer;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFB690
// Range: 0x8000B064 -> 0x8000B1F4
void xAnimPoolCB(struct xMemPool * pool /* r30 */, void * data /* r31 */) {
    // Local variables
    int i; // r9
    struct xAnimPlay * clone; // r3
    struct xAnimPlay * play; // r0
    struct xAnimSingle * clonesingle; // r8
    struct xAnimSingle * currsingle; // r10
    struct xAnimActiveEffect * curract; // r9

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFB69C
// Range: 0x8000B1F4 -> 0x8000B468
void xAnimPoolInit(struct xMemPool * pool /* r25 */, unsigned int count /* r26 */, unsigned int singles /* r27 */, unsigned int blendFlags /* r28 */, unsigned int effectMax /* r29 */) {
    // Local variables
    unsigned int size; // r31
    unsigned int i; // r8
    void * buffer; // r30
    struct xAnimPlay * play; // r0
    struct xAnimSingle * currsingle; // r9
    struct xAnimActiveEffect * curract; // r8

    // References
    // -> static char __FUNCTION__[14];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8000B468 -> 0x8000B4C8
struct xAnimPlay * xAnimPoolAlloc(struct xMemPool * pool /* r0 */, void * object /* r31 */, struct xAnimTable * table /* r29 */, struct xModelInstance * modelInst /* r30 */) {
    // Local variables
    struct xAnimPlay * play; // r31
}

// Range: 0x8000B4C8 -> 0x8000B574
void xAnimPoolFree(struct xAnimPlay * play /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x804132D0
// Range: 0x8000B574 -> 0x8000B6F8
void xAnimSetMultifileFromCode(struct xAnimState * state /* r30 */, unsigned int animCode /* r31 */) {
    // Local variables
    unsigned int i; // r5

    // References
    // -> static char __FUNCTION__[26];
}


