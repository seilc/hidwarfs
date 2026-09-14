/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zRemyPlayerActions.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80231AAC -> 0x8023708C
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x10
struct hitBoneInfo {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct xVec3 boneOffset; // offset 0x4, size 0xC
};
// total size: 0x0
struct zAnimCacheEntry {};
// total size: 0x8
struct effectBone {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct zAnimCacheEntry * positionCache; // offset 0x4, size 0x4
};
// total size: 0x8
struct RumbleEffectParams {
    // Members
    float startTime; // offset 0x0, size 0x4
    unsigned int emitterID; // offset 0x4, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
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
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
};
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
// total size: 0x4
struct /* @class$1124zRemyPlayerActions_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum eLightType {
    eLightType_Ambient = 0,
    eLightType_Spotlight = 1,
    eLightType_Directional = 2,
    eLightType_Point = 3,
};
// total size: 0x10
struct _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xLightAsset : public xDynAsset {
    // Members
    enum eLightType lightType; // offset 0x10, size 0x4
    unsigned int lightEffectID; // offset 0x14, size 0x4
    float lightEffectSpeed; // offset 0x18, size 0x4
    unsigned int lightFlags; // offset 0x1C, size 0x4
    struct _xFColor lightColor; // offset 0x20, size 0x10
    struct xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
    unsigned int lightCardID; // offset 0x44, size 0x4
    float lightCardScale; // offset 0x48, size 0x4
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x18
struct RpLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
    struct RwLLLink WorldSectorInLight; // offset 0xC, size 0x8
    struct RpWorldSector * sect; // offset 0x14, size 0x4
};
// total size: 0x54
struct iLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RpLight * hw; // offset 0x4, size 0x4
    struct RpLightTie lightTie; // offset 0x8, size 0x18
    struct xSphere sph; // offset 0x20, size 0x10
    float radius_sq; // offset 0x30, size 0x4
    struct _xFColor color; // offset 0x34, size 0x10
    struct xVec3 dir; // offset 0x44, size 0xC
    float coneangle; // offset 0x50, size 0x4
};
// total size: 0x14
class xLightEffectBase : public xBase {
    // Members
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x14
struct xLightEffectFlickerData {
    // Members
    struct _xFColor initialColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
};
// total size: 0x18
struct xLightEffectStrobeData {
    // Members
    struct _xFColor maxColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
    unsigned char stage; // offset 0x14, size 0x1
};
// total size: 0x258
struct xLight : public xBase {
    // Members
    unsigned int flags; // offset 0x10, size 0x4
    struct xLightAsset * tasset; // offset 0x14, size 0x4
    struct iLight light; // offset 0x18, size 0x54
    struct xBase * attachedTo; // offset 0x6C, size 0x4
    struct xVec3 attachedOffset; // offset 0x70, size 0xC
    struct xModelInstance * lightCard; // offset 0x7C, size 0x4
    float lightCardScale; // offset 0x80, size 0x4
    struct _xFColor startColor; // offset 0x84, size 0x10
    struct _xFColor endColor; // offset 0x94, size 0x10
    float transTimeLeft; // offset 0xA4, size 0x4
    float totalTransTime; // offset 0xA8, size 0x4
    class xLightEffectBase * lightEffect; // offset 0xAC, size 0x4
    unsigned char lightEffectRunning; // offset 0xB0, size 0x1
    float lightEffectSpeed; // offset 0xB4, size 0x4
    union { // inferred
        struct xLightEffectFlickerData flickerData; // offset 0xB8, size 0x14
        struct xLightEffectStrobeData strobeData; // offset 0xB8, size 0x18
    };
    char effectName[64]; // offset 0xD0, size 0x40
    char attachedToName[64]; // offset 0x110, size 0x40
    unsigned char drawDebugSpherePos; // offset 0x150, size 0x1
    unsigned char drawDebugSphereRange; // offset 0x151, size 0x1
    char fileName[256]; // offset 0x152, size 0x100
    unsigned int lineNumber; // offset 0x254, size 0x4
};
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
    struct /* @class$1124zRemyPlayerActions_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragExplosion = 8,
    eFragDistortion = 9,
    eFragFire = 10,
    eFragLight = 11,
    eFragSmoke = 12,
    eFragGoo = 13,
    eFragCount = 14,
    eFragForceSize = 2147483647,
};
// total size: 0x54
struct zFragGroup {
    // Members
    struct zFrag * list[21]; // offset 0x0, size 0x54
};
// total size: 0x18
struct zFragAsset {
    // Members
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
// total size: 0x20
struct zFragShrapnelAsset : public zFragAsset {
    // Members
    unsigned int shrapnelID; // offset 0x18, size 0x4
    struct zShrapnelAsset * shrapAsset; // offset 0x1C, size 0x4
};
// total size: 0x4
struct zFragShrapnel {
    // Members
    struct zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
};
enum zFragLocType {
    eFragLocBone = 0,
    eFragLocBoneUpdated = 1,
    eFragLocBoneLocal = 2,
    eFragLocBoneLocalUpdated = 3,
    eFragLocTag = 4,
    eFragLocTagUpdated = 5,
    eFragLocCount = 6,
    eFragLocForceSize = 2147483647,
};
// total size: 0x10
struct zFragBone {
    // Members
    int index; // offset 0x0, size 0x4
    struct xVec3 offset; // offset 0x4, size 0xC
};
// total size: 0x20
struct xModelTag {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
union zFragLocInfo {
    struct zFragBone bone; // offset 0x0, size 0x10
    struct xModelTag tag; // offset 0x0, size 0x20
};
// total size: 0x28
struct zFragLocation {
    // Members
    enum zFragLocType type; // offset 0x0, size 0x4
    union zFragLocInfo info; // offset 0x4, size 0x20
    float rand_radius; // offset 0x24, size 0x4
};
// total size: 0x14
struct xParInterp {
    // Members
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x138
struct xParEmitterPropsAsset : public xBaseAsset {
    // Members
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        struct xParInterp rate; // offset 0xC, size 0x14
        struct xParInterp value[1]; // offset 0xC, size 0x14
    };
    struct xParInterp life; // offset 0x20, size 0x14
    struct xParInterp size_birth; // offset 0x34, size 0x14
    struct xParInterp size_death; // offset 0x48, size 0x14
    struct xParInterp color_birth[4]; // offset 0x5C, size 0x50
    struct xParInterp color_death[4]; // offset 0xAC, size 0x50
    struct xParInterp vel_scale; // offset 0xFC, size 0x14
    struct xParInterp vel_angle; // offset 0x110, size 0x14
    struct xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
// total size: 0x184
struct xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // Members
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    struct xVec3 pos; // offset 0x140, size 0xC
    struct xVec3 last_emit_position; // offset 0x14C, size 0xC
    struct xVec3 vel; // offset 0x158, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x164, size 0xC
    float vel_angle_variation; // offset 0x170, size 0x4
    unsigned char rot[3]; // offset 0x174, size 0x3
    unsigned char padding; // offset 0x177, size 0x1
    float radius; // offset 0x178, size 0x4
    float emit_interval_current; // offset 0x17C, size 0x4
    struct xBase * emit_volume; // offset 0x180, size 0x4
};
// total size: 0x14
struct xPECircle {
    // Members
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    struct xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x4
struct xPESphere {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x8
struct xPERect {
    // Members
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x1C
struct xPELine {
    // Members
    struct xVec3 pos1; // offset 0x0, size 0xC
    struct xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x4
struct xPEVolume {
    // Members
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
struct xPEOffsetPoint {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0xC
struct xPEVCyl {
    // Members
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
struct xPEEntBone {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    struct xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0xC
struct xPEEntBound {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x54
struct xParEmitterAsset : public xBaseAsset {
    // Members
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        struct xPECircle e_circle; // offset 0x10, size 0x14
        struct xPESphere e_sphere; // offset 0x10, size 0x4
        struct xPERect e_rect; // offset 0x10, size 0x8
        struct xPELine e_line; // offset 0x10, size 0x1C
        struct xPEVolume e_volume; // offset 0x10, size 0x4
        struct xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        struct xPEVCyl e_vcyl; // offset 0x10, size 0xC
        struct xPEEntBone e_entbone; // offset 0x10, size 0x18
        struct xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    struct xVec3 pos; // offset 0x30, size 0xC
    struct xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0x0
struct xParGroup {};
// total size: 0x0
struct xParSys {};
// total size: 0x94
struct xParEmitter : public xBase {
    // Members
    struct xParEmitterAsset * tasset; // offset 0x10, size 0x4
    struct xParGroup * group; // offset 0x14, size 0x4
    struct xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned int sortID; // offset 0x1C, size 0x4
    unsigned char rate_mode; // offset 0x20, size 0x1
    struct xVec3 last_emit_position; // offset 0x24, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x30, size 0xC
    float rate; // offset 0x3C, size 0x4
    float rate_time; // offset 0x40, size 0x4
    float rate_fraction; // offset 0x44, size 0x4
    float rate_fraction_cull; // offset 0x48, size 0x4
    unsigned char emit_flags; // offset 0x4C, size 0x1
    unsigned char tweak_flags; // offset 0x4D, size 0x1
    unsigned char emit_pad[2]; // offset 0x4E, size 0x2
    unsigned char rot[3]; // offset 0x50, size 0x3
    struct xModelTag tag; // offset 0x54, size 0x20
    float oocull_distance_sqr; // offset 0x74, size 0x4
    float distance_to_cull_sqr; // offset 0x78, size 0x4
    void * attachTo; // offset 0x7C, size 0x4
    struct xParSys * parSys; // offset 0x80, size 0x4
    struct xBase * emit_volume; // offset 0x84, size 0x4
    struct xVec3 last_attach_loc; // offset 0x88, size 0xC
};
// total size: 0x94
struct zParEmitter : public xParEmitter {};
// total size: 0x1F4
struct zFragParticleAsset : public zFragAsset {
    // Members
    struct zFragLocation source; // offset 0x18, size 0x28
    struct zFragLocation vel; // offset 0x40, size 0x28
    struct xParEmitterCustomSettings emit; // offset 0x68, size 0x184
    unsigned int parEmitterID; // offset 0x1EC, size 0x4
    struct zParEmitter * parEmitter; // offset 0x1F0, size 0x4
};
// total size: 0x18
struct zFragParticle {
    // Members
    struct zFragParticleAsset * fasset; // offset 0x0, size 0x4
    unsigned char no_last_position; // offset 0x4, size 0x1
    float emit_remaining; // offset 0x8, size 0x4
    struct xVec3 last_position; // offset 0xC, size 0xC
};
// total size: 0x20
struct zFragLightInfo {
    // Members
    struct _xFColor lightColor; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float fadeUpTime; // offset 0x14, size 0x4
    float fadeDownTime; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x158
struct zFragProjectileAsset : public zFragAsset {
    // Members
    unsigned int modelInfoID; // offset 0x18, size 0x4
    struct RpAtomic * modelFile; // offset 0x1C, size 0x4
    struct zFragLocation launch; // offset 0x20, size 0x28
    struct zFragLocation vel; // offset 0x48, size 0x28
    struct zFragLocation velPlusMinus; // offset 0x70, size 0x28
    struct zFragLocation rot; // offset 0x98, size 0x28
    struct zFragLocation rotPlusMinus; // offset 0xC0, size 0x28
    struct zFragLocation initRot; // offset 0xE8, size 0x28
    float bounce; // offset 0x110, size 0x4
    int maxBounces; // offset 0x114, size 0x4
    unsigned int flags; // offset 0x118, size 0x4
    unsigned int childID; // offset 0x11C, size 0x4
    struct zShrapnelAsset * child; // offset 0x120, size 0x4
    float minScale; // offset 0x124, size 0x4
    float maxScale; // offset 0x128, size 0x4
    unsigned int _scaleCurveID; // offset 0x12C, size 0x4
    void * _scaleCurve; // offset 0x130, size 0x4
    float gravity; // offset 0x134, size 0x4
    struct zFragLightInfo lightInfo; // offset 0x138, size 0x20
};
// total size: 0x24
struct xParabola {
    // Members
    struct xVec3 initPos; // offset 0x0, size 0xC
    struct xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x68
struct zFragProjectile {
    // Members
    struct zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * model; // offset 0x4, size 0x4
    struct xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float alpha; // offset 0x40, size 0x4
    float bounceC1; // offset 0x44, size 0x4
    float bounceC2; // offset 0x48, size 0x4
    struct xVec3 N; // offset 0x4C, size 0xC
    struct xVec3 axis; // offset 0x58, size 0xC
    struct xLight * light; // offset 0x64, size 0x4
};
// total size: 0x70
struct zFragLightningAsset : public zFragAsset {
    // Members
    struct zFragLocation start; // offset 0x18, size 0x28
    struct zFragLocation end; // offset 0x40, size 0x28
    unsigned int startParentID; // offset 0x68, size 0x4
    unsigned int endParentID; // offset 0x6C, size 0x4
};
// total size: 0x54
struct /* @class$1825zRemyPlayerActions_cpp */ {
    // Members
    struct xVec3 endPoint[2]; // offset 0x0, size 0x18
    struct xVec3 endPointB; // offset 0x18, size 0xC
    struct xVec3 direction; // offset 0x24, size 0xC
    float length; // offset 0x30, size 0x4
    float scale; // offset 0x34, size 0x4
    float width; // offset 0x38, size 0x4
    float endParam[2]; // offset 0x3C, size 0x8
    float endVel[2]; // offset 0x44, size 0x8
    float paramSpan[2]; // offset 0x4C, size 0x8
};
// total size: 0x5C
struct zLightningAsset : public xDynAsset {
    // Members
    struct xVec3 start; // offset 0x10, size 0xC
    struct xVec3 end; // offset 0x1C, size 0xC
    struct xColor_tag color; // offset 0x28, size 0x4
    float thickness; // offset 0x2C, size 0x4
    float branchSpeed; // offset 0x30, size 0x4
    unsigned int mainTexture; // offset 0x34, size 0x4
    unsigned int branchTexture; // offset 0x38, size 0x4
    int damage; // offset 0x3C, size 0x4
    float knockBackSpeed; // offset 0x40, size 0x4
    unsigned int sound; // offset 0x44, size 0x4
    unsigned int soundHit1; // offset 0x48, size 0x4
    unsigned int soundHit2; // offset 0x4C, size 0x4
    unsigned int followStart; // offset 0x50, size 0x4
    unsigned int followEnd; // offset 0x54, size 0x4
    unsigned int collisionEnabled; // offset 0x58, size 0x4
};
// total size: 0x18
class zLightningWidget : private xBase {
    // Members
public:
    struct zLightning * l; // offset 0x10, size 0x4
private:
    struct zLightningAsset * asset; // offset 0x14, size 0x4
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$1263zRemyPlayerActions_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1263zRemyPlayerActions_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x70
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x1C
    struct xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x0
struct xFFX {};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0x110
struct zLightning {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    // total size: 0x54
    struct /* @class$1825zRemyPlayerActions_cpp */ {
        // Members
        struct xVec3 endPoint[2]; // offset 0x0, size 0x18
        struct xVec3 endPointB; // offset 0x18, size 0xC
        struct xVec3 direction; // offset 0x24, size 0xC
        float length; // offset 0x30, size 0x4
        float scale; // offset 0x34, size 0x4
        float width; // offset 0x38, size 0x4
        float endParam[2]; // offset 0x3C, size 0x8
        float endVel[2]; // offset 0x44, size 0x8
        float paramSpan[2]; // offset 0x4C, size 0x8
    } func; // offset 0x8, size 0x54
    class zLightningWidget * widget; // offset 0x5C, size 0x4
    unsigned int numStrips; // offset 0x60, size 0x4
    float alphaRamp; // offset 0x64, size 0x4
    struct xColor_tag color; // offset 0x68, size 0x4
    float time_left; // offset 0x6C, size 0x4
    float time_total; // offset 0x70, size 0x4
    struct zLightning * nextBranch; // offset 0x74, size 0x4
    struct zLightning * prevBranch; // offset 0x78, size 0x4
    float parentSegment; // offset 0x7C, size 0x4
    float lastParentSegment; // offset 0x80, size 0x4
    float segmentsPerMeter; // offset 0x84, size 0x4
    float branchSpeed; // offset 0x88, size 0x4
    int damage; // offset 0x8C, size 0x4
    float knockBackSpeed; // offset 0x90, size 0x4
    struct RwRaster * mainTexture; // offset 0x94, size 0x4
    struct RwRaster * branchTexture; // offset 0x98, size 0x4
    float sparkTimer; // offset 0x9C, size 0x4
    struct xVec3 collisionPoint; // offset 0xA0, size 0xC
    float genTime; // offset 0xAC, size 0x4
    unsigned char randomizeBranchEndPoint; // offset 0xB0, size 0x1
    unsigned char collisionEnabled; // offset 0xB1, size 0x1
    enum xSndHandle sndHandle; // offset 0xB4, size 0x4
    struct xEnt * followStart; // offset 0xB8, size 0x4
    struct xVec3 followStartOffset; // offset 0xBC, size 0xC
    struct xEnt * followEnd; // offset 0xC8, size 0x4
    struct xVec3 followEndOffset; // offset 0xCC, size 0xC
    void (* renderCB)(struct zLightning *, struct RxObjSpace3DVertex *, struct RxObjSpace3DVertex *, unsigned int); // offset 0xD8, size 0x4
    void * context; // offset 0xDC, size 0x4
    float weightParam[12]; // offset 0xE0, size 0x30
};
// total size: 0x10
struct zFragLightning {
    // Members
    struct zFragLightningAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * startParent; // offset 0x4, size 0x4
    struct xModelInstance * endParent; // offset 0x8, size 0x4
    struct zLightning * lightning; // offset 0xC, size 0x4
};
// total size: 0x44
struct zFragSoundAsset : public zFragAsset {
    // Members
    unsigned int assetID; // offset 0x18, size 0x4
    struct zFragLocation source; // offset 0x1C, size 0x28
};
// total size: 0x8
struct zFragSound {
    // Members
    struct zFragSoundAsset * fasset; // offset 0x0, size 0x4
    enum xSndHandle soundID; // offset 0x4, size 0x4
};
// total size: 0x54
struct zFragShockwaveAsset : public zFragAsset {
    // Members
    unsigned int modelInfoID; // offset 0x18, size 0x4
    float birthRadius; // offset 0x1C, size 0x4
    float deathRadius; // offset 0x20, size 0x4
    float birthVelocity; // offset 0x24, size 0x4
    float deathVelocity; // offset 0x28, size 0x4
    float birthSpin; // offset 0x2C, size 0x4
    float deathSpin; // offset 0x30, size 0x4
    float birthColor[4]; // offset 0x34, size 0x10
    float deathColor[4]; // offset 0x44, size 0x10
};
// total size: 0x38
struct zFragShockwave {
    // Members
    struct zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
};
// total size: 0x48
struct zFragExplosionAsset : public zFragAsset {
    // Members
    unsigned int type; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
};
// total size: 0x20
struct presence_volume {
    // Members
    float knockback; // offset 0x0, size 0x4
    struct xVec3 center; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float damage_player; // offset 0x14, size 0x4
    float damage_npc; // offset 0x18, size 0x4
    float damage_other; // offset 0x1C, size 0x4
};
// total size: 0x30
struct trail_emitter {
    // Members
    int type; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    float emitted; // offset 0x10, size 0x4
    int glare_id; // offset 0x14, size 0x4
    float streak_delay; // offset 0x18, size 0x4
    float streaks_emitted; // offset 0x1C, size 0x4
    float spark_delay; // offset 0x20, size 0x4
    float sparks_emitted; // offset 0x24, size 0x4
    struct presence_volume * presence; // offset 0x28, size 0x4
    enum xSndHandle tracking_sound; // offset 0x2C, size 0x4
};
// total size: 0x40
struct zFragExplosion {
    // Members
    struct zFragExplosionAsset * fasset; // offset 0x0, size 0x4
    struct trail_emitter trail; // offset 0x4, size 0x30
    struct xVec3 initPos; // offset 0x34, size 0xC
};
// total size: 0x5C
struct zFragDistortionAsset : public zFragAsset {
    // Members
    unsigned int type; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
    float radius; // offset 0x48, size 0x4
    float duration; // offset 0x4C, size 0x4
    float intensity; // offset 0x50, size 0x4
    float freq; // offset 0x54, size 0x4
    float repeat_delay; // offset 0x58, size 0x4
};
// total size: 0x18
struct zFragDistortion {
    // Members
    struct zFragDistortionAsset * fasset; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    int type; // offset 0x10, size 0x4
    float repeat_time; // offset 0x14, size 0x4
};
// total size: 0x60
struct property_set {
    // Members
    float damage; // offset 0x0, size 0x4
    float knockback; // offset 0x4, size 0x4
    float heat_magnify; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    struct xEnt * driver; // offset 0x10, size 0x4
    struct xBound damageBound; // offset 0x14, size 0x4C
};
// total size: 0xB4
struct zFragFireAsset : public zFragAsset {
    // Members
    struct zFragLocation loc; // offset 0x18, size 0x28
    unsigned int flags; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
    float scale; // offset 0x48, size 0x4
    float fuel; // offset 0x4C, size 0x4
    float heat; // offset 0x50, size 0x4
    struct property_set props; // offset 0x54, size 0x60
};
// total size: 0x4
struct zFragFire {
    // Members
    struct zFragFireAsset * fasset; // offset 0x0, size 0x4
};
// total size: 0x60
struct zFragLightAsset : public zFragAsset {
    // Members
    struct zFragLocation loc; // offset 0x18, size 0x28
    struct zFragLightInfo lightInfo; // offset 0x40, size 0x20
};
// total size: 0xC
struct zFragLight {
    // Members
    struct zFragLightAsset * fasset; // offset 0x0, size 0x4
    struct xLight * light; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x0
struct asset_type {};
// total size: 0x0
struct debug_info {};
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$1065zRemyPlayerActions_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1066zRemyPlayerActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1067zRemyPlayerActions_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$1068zRemyPlayerActions_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$1069zRemyPlayerActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$1070zRemyPlayerActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$1071zRemyPlayerActions_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$1065zRemyPlayerActions_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1066zRemyPlayerActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1067zRemyPlayerActions_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$1068zRemyPlayerActions_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$1069zRemyPlayerActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$1070zRemyPlayerActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$1071zRemyPlayerActions_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x50
struct zSmokeSphereVolume {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    float size_min; // offset 0x10, size 0x4
    float size_max; // offset 0x14, size 0x4
    float life_min; // offset 0x18, size 0x4
    float life_max; // offset 0x1C, size 0x4
    float vel_min; // offset 0x20, size 0x4
    float vel_max; // offset 0x24, size 0x4
    float growth; // offset 0x28, size 0x4
    struct xVec3 vel_dir; // offset 0x2C, size 0xC
    float vel_dir_vary; // offset 0x38, size 0x4
    float wind; // offset 0x3C, size 0x4
    struct xColor_tag color_birth; // offset 0x40, size 0x4
    struct xColor_tag color_death; // offset 0x44, size 0x4
    int texture_columns; // offset 0x48, size 0x4
    int texture_rows; // offset 0x4C, size 0x4
};
// total size: 0xA0
class zSmokeEmitter : private xBase {
    // Members
public:
    int system_id; // offset 0x10, size 0x4
private:
    struct asset_type * asset; // offset 0x14, size 0x4
    struct xMat4x3 emit_mat; // offset 0x20, size 0x40
    float emitted; // offset 0x60, size 0x4
    int flags; // offset 0x64, size 0x4
    struct xVec3 vel_dir; // offset 0x68, size 0xC
    int max_frame; // offset 0x74, size 0x4
    float du; // offset 0x78, size 0x4
    float dv; // offset 0x7C, size 0x4
    float age_rate_min; // offset 0x80, size 0x4
    float age_rate_range; // offset 0x84, size 0x4
    float dr; // offset 0x88, size 0x4
    float dg; // offset 0x8C, size 0x4
    float db; // offset 0x90, size 0x4
    float da; // offset 0x94, size 0x4
    struct debug_info * debug; // offset 0x98, size 0x4
};
// total size: 0x50
struct zFragSmokeAsset : public zFragAsset {
    // Members
    unsigned int parEmitterID; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    float rate; // offset 0x44, size 0x4
    float radius; // offset 0x48, size 0x4
    class zSmokeEmitter * parEmitter; // offset 0x4C, size 0x4
};
// total size: 0x58
struct zFragSmoke {
    // Members
    struct zFragSmokeAsset * fasset; // offset 0x0, size 0x4
    struct zSmokeSphereVolume volume; // offset 0x4, size 0x50
    float emit_remaining; // offset 0x54, size 0x4
};
// total size: 0x88
struct zFragGooAsset : public zFragAsset {
    // Members
    unsigned int dropModelInfoID; // offset 0x18, size 0x4
    struct RpAtomic * dropModelFile; // offset 0x1C, size 0x4
    unsigned int splatModelInfoID; // offset 0x20, size 0x4
    struct RpAtomic * splatModelFile; // offset 0x24, size 0x4
    unsigned int splatSndID; // offset 0x28, size 0x4
    struct zShrapnelAsset * splatSnd; // offset 0x2C, size 0x4
    struct zFragLocation loc; // offset 0x30, size 0x28
    struct zFragLocation vel; // offset 0x58, size 0x28
    float minScale; // offset 0x80, size 0x4
    float maxScale; // offset 0x84, size 0x4
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct node {
    // Members
    float t; // offset 0x0, size 0x4
};
// total size: 0x8
struct inode : public node {
    // Members
    float value[1]; // offset 0x4, size 0x4
};
// total size: 0x0
struct debug_data {};
// total size: 0x14
struct xResponseCurve {
    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
    struct debug_data * debug; // offset 0x10, size 0x4
};
// total size: 0x5C
struct emit_context {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int priority; // offset 0x8, size 0x4
    int max_owned; // offset 0xC, size 0x4
    int hard_max_owned; // offset 0x10, size 0x4
    float life; // offset 0x14, size 0x4
    float pause_time; // offset 0x18, size 0x4
    float accel_aging; // offset 0x1C, size 0x4
    float max_dist; // offset 0x20, size 0x4
    float lod_dist; // offset 0x24, size 0x4
    struct xVec2 size; // offset 0x28, size 0x8
    int blend_mode; // offset 0x30, size 0x4
    struct RwTexture * texture; // offset 0x34, size 0x4
    struct xVec2 uv[2]; // offset 0x38, size 0x10
    const struct xResponseCurve * curve; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    void (* emitAtomicCB)(struct RpAtomic *, struct xMat4x3 *, struct xEnt *, void *); // offset 0x50, size 0x4
    void (* destAtomicCB)(struct RpAtomic *, void *); // offset 0x54, size 0x4
    void (* emitVertListCB)(struct xVec3 *, unsigned short *, int, struct xMat4x3 *, struct xEnt *, void *); // offset 0x58, size 0x4
};
// total size: 0x2C
struct xEntDriveSimple {
    // Members
    struct xMat4x3 * drivenMat; // offset 0x0, size 0x4
    struct xEnt * driver; // offset 0x4, size 0x4
    struct xVec3 drivenPosInDriver; // offset 0x8, size 0xC
    struct xVec3 lastDrivenPos; // offset 0x14, size 0xC
    struct xVec3 dpos; // offset 0x20, size 0xC
};
enum zGooStates {
    ezGooState_Fly = 0,
    ezGooState_Stick = 1,
    ezGooState_Fade = 2,
    ezGooState_StickChr = 3,
};
// total size: 0xD0
struct zFragGoo {
    // Members
    struct zFragGooAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * dropModel; // offset 0x4, size 0x4
    struct xModelInstance * splatModel; // offset 0x8, size 0x4
    struct emit_context decalContext; // offset 0xC, size 0x5C
    unsigned int refVertIndex; // offset 0x68, size 0x4
    struct xVec3 currentPosition; // offset 0x6C, size 0xC
    struct xEntDriveSimple drivenData; // offset 0x78, size 0x2C
    struct xVec3 velocity; // offset 0xA4, size 0xC
    float t; // offset 0xB0, size 0x4
    float decal_t; // offset 0xB4, size 0x4
    float scale; // offset 0xB8, size 0x4
    struct xVec3 N; // offset 0xBC, size 0xC
    unsigned char slide; // offset 0xC8, size 0x1
    enum zGooStates state; // offset 0xCC, size 0x4
};
union zFragInfo {
    struct zFragGroup group; // offset 0x0, size 0x54
    struct zFragShrapnel shrapnel; // offset 0x0, size 0x4
    struct zFragParticle particle; // offset 0x0, size 0x18
    struct zFragProjectile projectile; // offset 0x0, size 0x68
    struct zFragLightning lightning; // offset 0x0, size 0x10
    struct zFragSound sound; // offset 0x0, size 0x8
    struct zFragShockwave shockwave; // offset 0x0, size 0x38
    struct zFragExplosion explosion; // offset 0x0, size 0x40
    struct zFragDistortion distortion; // offset 0x0, size 0x18
    struct zFragFire fire; // offset 0x0, size 0x4
    struct zFragLight light; // offset 0x0, size 0xC
    struct zFragSmoke smoke; // offset 0x0, size 0x58
    struct zFragGoo goo; // offset 0x0, size 0xD0
};
// total size: 0xF8
struct zFrag {
    // Members
    enum zFragType type; // offset 0x0, size 0x4
    union zFragInfo info; // offset 0x4, size 0xD0
    float delay; // offset 0xD4, size 0x4
    float alivetime; // offset 0xD8, size 0x4
    float lifetime; // offset 0xDC, size 0x4
    void (* update)(struct zFrag *, float); // offset 0xE0, size 0x4
    void (* destroy)(struct zFrag *); // offset 0xE4, size 0x4
    struct xModelInstance * parent[2]; // offset 0xE8, size 0x8
    struct zFrag * prev; // offset 0xF0, size 0x4
    struct zFrag * next; // offset 0xF4, size 0x4
};
// total size: 0xC
struct zShrapnelAsset {
    // Members
    int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(struct zShrapnelAsset *, struct xModelInstance *, struct xVec3 *, struct xVec3 *, void (*)(struct zFrag *, struct zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0xC
struct ShrapnelEffectParams {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    struct zShrapnelAsset * asset; // offset 0x4, size 0x4
    float startTime; // offset 0x8, size 0x4
};
// total size: 0x18
struct BlurEffectParams {
    // Members
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float life; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float fadeInTime; // offset 0x10, size 0x4
    float fadeOutTime; // offset 0x14, size 0x4
};
// total size: 0x8
struct FlashEffectParams {
    // Members
    signed short alpha; // offset 0x0, size 0x2
    float time; // offset 0x4, size 0x4
};
// total size: 0xB4
class zCombatAttack {
    // Members
public:
    unsigned int state; // offset 0x0, size 0x4
    float attackStart; // offset 0x4, size 0x4
    float attackEnd; // offset 0x8, size 0x4
    float attackRadius; // offset 0xC, size 0x4
    struct hitBoneInfo hitBones[4]; // offset 0x10, size 0x40
    signed short damage; // offset 0x50, size 0x2
    unsigned short source; // offset 0x52, size 0x2
    float velocityUp; // offset 0x54, size 0x4
    float velocityAway; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned short effect; // offset 0x60, size 0x2
    unsigned short hitEffect; // offset 0x62, size 0x2
    float effectStart; // offset 0x64, size 0x4
    float effectEnd; // offset 0x68, size 0x4
    struct effectBone effectBones[2]; // offset 0x6C, size 0x10
    struct RumbleEffectParams rumbleEffect; // offset 0x7C, size 0x8
    struct ShrapnelEffectParams shrapnelEffect; // offset 0x84, size 0xC
    struct BlurEffectParams blurEffect; // offset 0x90, size 0x18
    struct FlashEffectParams flashEffect; // offset 0xA8, size 0x8
    void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *); // offset 0xB0, size 0x4
};
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_EXPLOSION = 2,
    zHS_MELEE_HIGH = 3,
    zHS_MELEE_MID = 4,
    zHS_MELEE_LOW = 5,
    zHS_MELEE_BACK = 6,
    zHS_MELEE_DIZZY = 7,
    zHS_MELEE_MRI = 8,
    zHS_MELEE_FRO = 9,
    zHS_MELEE_NPC = 10,
    zHS_THROW = 11,
    zHS_PROJECTILE = 12,
    zHS_NUKE_MRI = 13,
    zHS_NUKE_FRO = 14,
    zHS_INCREDISLAM_LEVEL1 = 15,
    zHS_INCREDISLAM_LEVEL2 = 16,
    zHS_INCREDISLAM_LEVEL3 = 17,
    zHS_ICE_GLIDE_LEVEL1 = 18,
    zHS_ICE_GLIDE_LEVEL2 = 19,
    zHS_ICE_GLIDE_LEVEL3 = 20,
    zHS_DODGE_ROLL_LEVEL1 = 21,
    zHS_DODGE_ROLL_LEVEL2 = 22,
    zHS_DODGE_ROLL_LEVEL3 = 23,
    zHS_GOO = 24,
    zHS_FIRE = 25,
    zHS_LASERBEAM = 26,
    zHS_LEDGE_UP = 27,
    zHS_MELEE_UP = 28,
    zHS_LASER = 29,
    zHS_ENERGY = 30,
    zHS_SURFACE = 31,
    zHS_WATER = 32,
    zHS_DEATHPLANE = 33,
    zHS_KNOCKBACK = 34,
    zHS_INFINITE_FALL = 35,
    zHS_INCREDISLAM_FALL_LEVEL1 = 36,
    zHS_INCREDISLAM_FALL_LEVEL2 = 37,
    zHS_INCREDISLAM_FALL_LEVEL3 = 38,
    zHS_PUNCH_MRI_1_LEVEL1 = 39,
    zHS_PUNCH_MRI_1_LEVEL2 = 40,
    zHS_PUNCH_MRI_1_LEVEL3 = 41,
    zHS_PUNCH_MRI_2_LEVEL1 = 42,
    zHS_PUNCH_MRI_2_LEVEL2 = 43,
    zHS_PUNCH_MRI_2_LEVEL3 = 44,
    zHS_PUNCH_MRI_3_LEVEL1 = 45,
    zHS_PUNCH_MRI_3_LEVEL2 = 46,
    zHS_PUNCH_MRI_3_LEVEL3 = 47,
    zHS_PUNCH_MRI_4_LEVEL1 = 48,
    zHS_PUNCH_MRI_4_LEVEL2 = 49,
    zHS_PUNCH_MRI_4_LEVEL3 = 50,
    zHS_PUNCH_FRO_1_LEVEL1 = 51,
    zHS_PUNCH_FRO_1_LEVEL2 = 52,
    zHS_PUNCH_FRO_1_LEVEL3 = 53,
    zHS_PUNCH_FRO_2_LEVEL1 = 54,
    zHS_PUNCH_FRO_2_LEVEL2 = 55,
    zHS_PUNCH_FRO_2_LEVEL3 = 56,
    zHS_PUNCH_FRO_3_LEVEL1 = 57,
    zHS_PUNCH_FRO_3_LEVEL2 = 58,
    zHS_PUNCH_FRO_3_LEVEL3 = 59,
    zHS_PUNCH_FRO_4_LEVEL1 = 60,
    zHS_PUNCH_FRO_4_LEVEL2 = 61,
    zHS_PUNCH_FRO_4_LEVEL3 = 62,
    zHS_ENEMY_DAMAGE = 63,
    zHS_ENEMY_FLYBACK = 64,
    zHS_COUNT = 65,
    zHS_FORCE_INT = -1,
};
// Range: 0x80231AAC -> 0x80231B40
static void InitAttackState(class zCombatAttack * attack /* r28 */, char * state /* r4 */, float start /* f29 */, float end /* f30 */, float radius /* f31 */, unsigned short bone0 /* r29 */, enum zHitSource source /* r30 */, signed short damage /* r31 */) {}

enum zAttackHitEffect {
    zAHE_NONE = 0,
    zAHE_PUNCH_SMALL = 1,
    zAHE_PUNCH_NORMAL = 2,
    zAHE_PUNCH_HUGE = 3,
    zAHE_KICK_SMALL = 4,
    zAHE_KICK_NORMAL = 5,
    zAHE_KICK_HUGE = 6,
    zAHE_DOWN_SMASH_SMALL = 7,
    zAHE_DOWN_SMASH_NORMAL = 8,
    zAHE_DOWN_SMASH_HUGE = 9,
    zAHE_COUNT = 10,
};
enum zAttackEffect {
    zAE_NONE = 0,
    zAE_SIMPLE_STREAK = 1,
    zAE_BODY_SLAM_RINGS = 2,
    zAE_BODY_SLAM_DROP = 4,
    zAE_BODY_SLAM_LAND = 8,
    zAE_FIST_CONE = 16,
    zAE_TWO_BONE_STREAK = 32,
    zAE_PARTICLE_TRAIL = 64,
    zAE_COUNT = 65,
};
// Range: 0x80231B40 -> 0x80231B70
static void AddEffects(class zCombatAttack * attack /* r0 */, enum zAttackHitEffect hitEffect /* r0 */, enum zAttackEffect effect /* r0 */, float start /* f0 */, float end /* f0 */, unsigned short bone0 /* r0 */, unsigned short bone1 /* r0 */, void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *) /* r0 */) {}

static signed short szRemyHitPoints_Punch1[3]; // size: 0x6, address: 0x80C047B0
static signed short szRemyHitPoints_Punch2[3]; // size: 0x6, address: 0x80C047B8
static signed short szRemyHitPoints_Punch3[3]; // size: 0x6, address: 0x80C047C0
static signed short szRemyHitPoints_Punch4[3]; // size: 0x6, address: 0x80C047C8
static float CARRY_CHECK_RADIUS; // size: 0x4, address: 0x80C047D0
static float CARRY_FORWARD_OFFSET; // size: 0x4, address: 0x80C047D4
static float CARRY_HEIGHT_OFFSET; // size: 0x4, address: 0x80C047D8
static float CARRY_MIN_HEIGHT; // size: 0x4, address: 0x80C047DC
static float CARRY_MAX_HEIGHT; // size: 0x4, address: 0x80C047E0
static float CARRY_BOUND_RADIUS; // size: 0x4, address: 0x80C047E4
static unsigned char drawGrabCheck; // size: 0x1, address: 0x80C09028
static float MAX_GRAB_DIST; // size: 0x4, address: 0x80C047E8
// Range: 0x80231B70 -> 0x80231B78
static unsigned char IsStaticCarry() {}

// total size: 0x6C
class zRemyPlayerCarry : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int ControlOffCheck();

    unsigned int AnyMoveCheck();

    unsigned int AnyMoveNotUsingCheck();

    unsigned int AnyMoveLandingCheck();

    unsigned int LandingCheck();

    unsigned int AnyStopCheck();

    unsigned int GrabCheck();

    unsigned int DropCheck();

    unsigned int NotUsingCheck();

    unsigned int WhifCheck();

    unsigned int PickedUpCB();

    void GetCarryBound(struct xSphere * sphere);

    unsigned int GrabKillIdleNormalCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int GrabKillIdleEnemyCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int GrabKillWalkCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int GrabKillRunCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned char GrabbedObjectKilled();

    void End();

    unsigned char ExtraCarrySphere();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    void Setup();

    void Reset();

    void Begin();

    unsigned int GetAnimCode();

    void UpdateCarryAnimCode();

    void TryGrab();

    void GrabCarryBeforeEnter(struct xAnimPlay * play, struct xAnimState * state);

    // Members
protected:
    class zCarryableObject * grabFound; // offset 0xC, size 0x4
    struct xEnt * tossObject; // offset 0x10, size 0x4
    unsigned char grabFailed; // offset 0x14, size 0x1
    unsigned char grabHolding; // offset 0x15, size 0x1
    int grabRemyBone; // offset 0x18, size 0x4
    struct xVec3 grabRemyOffset; // offset 0x1C, size 0xC
    struct xVec3 grabTransPerSec; // offset 0x28, size 0xC
    float grabRotPerSec; // offset 0x34, size 0x4
    int grabNPCBone; // offset 0x38, size 0x4
    struct xVec3 grabNPCOffset; // offset 0x3C, size 0xC
    struct zShrapnelAsset * grabBadGuyShrap; // offset 0x48, size 0x4
    float total_grab_dust_time; // offset 0x4C, size 0x4
    unsigned int prevAnimFlags; // offset 0x50, size 0x4
    enum iSndGroupHandle pickupSmall; // offset 0x54, size 0x4
    enum iSndGroupHandle throwSmall; // offset 0x58, size 0x4
    enum iSndGroupHandle pickupMed; // offset 0x5C, size 0x4
    enum iSndGroupHandle throwMed; // offset 0x60, size 0x4
    enum iSndGroupHandle pickupLarge; // offset 0x64, size 0x4
    enum iSndGroupHandle throwLarge; // offset 0x68, size 0x4
};
// Range: 0x80231B78 -> 0x80231CBC
void zRemyPlayerCarry::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static float CARRY_BOUND_RADIUS;
    // -> static float CARRY_MAX_HEIGHT;
    // -> static float CARRY_MIN_HEIGHT;
    // -> static float CARRY_HEIGHT_OFFSET;
    // -> static float CARRY_FORWARD_OFFSET;
    // -> static float CARRY_CHECK_RADIUS;
}

// Range: 0x80231CBC -> 0x80231F30
// this: r30
void zRemyPlayerCarry::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80231F30 -> 0x80232078
void zRemyPlayerCarry::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80232078 -> 0x802322DC
// this: r30
void zRemyPlayerCarry::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x802322DC -> 0x8023236C
void zRemyPlayerCarry::AddUseTransitionsFrom(struct xAnimTable * table /* r30 */, const char * fromStates /* r31 */) {}

// Range: 0x8023236C -> 0x80232430
void zRemyPlayerCarry::AddUseEndTransitionsFrom(struct xAnimTable * table /* r30 */, const char * fromStates /* r31 */) {}

// Range: 0x80232430 -> 0x802324C4
void zRemyPlayerCarry::AddGlideTransitionsFrom(struct xAnimTable * table /* r30 */, const char * fromStates /* r31 */) {}

// Range: 0x802324C4 -> 0x80232510
void zRemyPlayerCarry::AddWhifTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */) {}

// Range: 0x80232510 -> 0x8023255C
void zRemyPlayerCarry::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x8023255C -> 0x802325A8
void zRemyPlayerCarry::AddPunchTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */) {}

// Range: 0x802325A8 -> 0x80232608
// this: r30
unsigned int zRemyPlayerCarry::ControlOffCheck() {}

// Range: 0x80232608 -> 0x80232660
static unsigned char ControlOff(struct zCommonPlayer * player /* r30 */) {}

// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x24
struct PlayerStats {
    // Members
    int enemiesDefeated; // offset 0x0, size 0x4
    int meleeDamage; // offset 0x4, size 0x4
    int airMeleeDamage; // offset 0x8, size 0x4
    int rangeDamage; // offset 0xC, size 0x4
    int dodgeDamage; // offset 0x10, size 0x4
    int finishingMoves; // offset 0x14, size 0x4
    int damageTaken; // offset 0x18, size 0x4
    int biggestCombo; // offset 0x1C, size 0x4
    int timesDefeated; // offset 0x20, size 0x4
};
enum eBrainType {
    eBrainType_Unknown = 0,
    eBrainType_NPC_Thief = 1,
    eBrainType_NPC_Chef = 2,
    eBrainType_NPC_Alarmer = 3,
    eBrainType_NPC_Waiter = 4,
    eBrainType_CMG_StirringPlayer = 5,
    eBrainType_CMG_StirringRemy = 6,
    eBrainType_CMG_LeftArm = 7,
    eBrainType_CMG_RightArm = 8,
    eBrainType_CMG_PourNSwirl = 9,
    eBrainType_NPC_SpringBoard = 10,
    eBrainType_NPC_ContextSensitive = 11,
    eBrainType_NPC_AnimViewer = 12,
    eBrainType_NPC_SwarmOwl = 13,
    eBrainType_NPC_Simpleton = 14,
    eBrainType_NPC_InstaKill = 15,
    eBrainType_Player_Remy = 16,
    eBrainType_Player_HumanVehicle = 17,
    eBrainType_Player_Ratball = 18,
    eBrainType_Player_MG1 = 19,
    eBrainType_Player_MG2_RatOnball = 20,
    eBrainType_Player_MG3_Pufferoids = 21,
    eBrainType_Player_MG4_GrapeStomper = 22,
    eBrainType_Player_MG5_CongaLine = 23,
    eBrainType_Player_MG6_AvoidTheStuff = 24,
};
// total size: 0x24
struct config_data {
    // Members
    int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float color_red; // offset 0x8, size 0x4
    float color_green; // offset 0xC, size 0x4
    float color_blue; // offset 0x10, size 0x4
    float color_alpha; // offset 0x14, size 0x4
    float card_dist; // offset 0x18, size 0x4
    float zbias; // offset 0x1C, size 0x4
    int max_card_renders; // offset 0x20, size 0x4
};
// total size: 0x0
struct activity_data {};
// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Static members
    static int activities_used; // size: 0x4
    static struct activity_data * activities[6]; // size: 0x18
    static struct activity_data * activity_buffer; // size: 0x4

    // Members
    struct activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x28
struct mblur_data {
    // Members
    struct config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0x8
class zPadAnalogControl {
    // Static members
    static int ANALOG_MAX; // size: 0x4
    static int ANALOG_MIN; // size: 0x4

    // Members
    class zPad * owner; // offset 0x0, size 0x4
    int analogIndex; // offset 0x4, size 0x4
};
// total size: 0x2
struct _tagPadAnalog {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_Enabled = 1,
    ePad_Total = 2,
};
// total size: 0x4
struct _tagiPad {
    // Members
    int port; // offset 0x0, size 0x4
};
// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x138
struct _tagxPad {
    // Members
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    struct _tagPadAnalog analog1; // offset 0x38, size 0x2
    struct _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    struct _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    struct analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x24
class zPad {
    // Static members
    static int MAX_PADS; // size: 0x4
    static int MAX_PORTS; // size: 0x4

    // Members
    unsigned char used; // offset 0x0, size 0x1
    unsigned char enable; // offset 0x1, size 0x1
    unsigned char triggered; // offset 0x2, size 0x1
    unsigned int key1; // offset 0x4, size 0x4
    unsigned int key2; // offset 0x8, size 0x4
    unsigned int key3; // offset 0xC, size 0x4
    int padPort; // offset 0x10, size 0x4
    class zPadAnalogControl analog1; // offset 0x14, size 0x8
    class zPadAnalogControl analog2; // offset 0x1C, size 0x8
};
// total size: 0x10
struct zPlayerCheckPoint {
    // Members
    struct xVec3 position; // offset 0x0, size 0xC
    float rotation; // offset 0xC, size 0x4
};
// total size: 0x8
struct AnalogStick {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x1
struct Buttons {
    // Members
    unsigned char jump : 1; // offset 0x0, size 0x1
    unsigned char actionMove : 1; // offset 0x0, size 0x1
    unsigned char contextMove : 1; // offset 0x0, size 0x1
    unsigned char otherMove : 1; // offset 0x0, size 0x1
};
// total size: 0x1C
class zPlayerInput {
    // Members
public:
    struct AnalogStick stick1; // offset 0x0, size 0x8
    struct AnalogStick stick2; // offset 0x8, size 0x8
    struct Buttons on; // offset 0x10, size 0x1
    struct Buttons pressed; // offset 0x11, size 0x1
    struct Buttons released; // offset 0x12, size 0x1
private:
    class zPad * mPad; // offset 0x14, size 0x4
    float mActionTimer; // offset 0x18, size 0x4
};
// total size: 0x0
struct zSlideCam {};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
};
// total size: 0x890
struct /* @class$2084zRemyPlayerActions_cpp */ {
    // Static members
    static int POS_COUNT_MAX; // size: 0x4

    // Members
    unsigned char debugging; // offset 0x0, size 0x1
    struct xVec3 positions[180]; // offset 0x4, size 0x870
    struct xVec3 startPos; // offset 0x874, size 0xC
    struct xVec3 endPos; // offset 0x880, size 0xC
    int posCount; // offset 0x88C, size 0x4
};
enum ReticleOrder {
    ROR_First = 0,
    ROR_Last = 1,
    ROR_None = 2,
};
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_OOB = 4,
    CONTROL_OWNER_INTERACTION = 8,
    CONTROL_OWNER_TALK_BOX = 16,
    CONTROL_OWNER_BLAST_DOORS = 32,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_REWARDANIM = 4096,
};
enum ezNPCAttackerType {
    ezNPCAT_Melee = 0,
    ezNPCAT_Range = 1,
    ezNPCAT_All = 2,
    ezNPCAT_Total = 3,
};
// total size: 0x13A0
struct zPlayer : public zEnt {
    // Static members
    static int MAX_EXTRA_SPHERES; // size: 0x4
    static unsigned int BUTTON_DEFINITIONS[12]; // size: 0x30
    static char * BUTTON_NAMES[12]; // size: 0x30
    static unsigned int BUTTON_COUNT; // size: 0x4

    // Members
    class zPlayerActionManager actionManager; // offset 0xDC, size 0xC
    int index; // offset 0xE8, size 0x4
    void * __vptr$; // offset 0xEC, size 0x4
    struct xVec3 trigLastFramePos; // offset 0xF0, size 0xC
    struct xScene * sc; // offset 0xFC, size 0x4
    struct xMat4x3 lastmat; // offset 0x100, size 0x40
    struct PlayerStats playStats; // offset 0x140, size 0x24
    enum eBrainType brain_id; // offset 0x164, size 0x4
    struct xVec3 floor_pos; // offset 0x168, size 0xC
    struct xVec3 floor_normal; // offset 0x174, size 0xC
    struct xSphere extraSpheres[5]; // offset 0x180, size 0x50
    int numExtraSpheres; // offset 0x1D0, size 0x4
    int zPlayerFlags; // offset 0x1D4, size 0x4
    float collision_underneath_height; // offset 0x1D8, size 0x4
    float collision_underneath_time; // offset 0x1DC, size 0x4
    struct mblur_data * mblur; // offset 0x1E0, size 0x4
protected:
    class zPad * pad; // offset 0x1E4, size 0x4
    float slipFadeTimer; // offset 0x1E8, size 0x4
    int slide; // offset 0x1EC, size 0x4
    float slideTimer; // offset 0x1F0, size 0x4
    float controlOffTimer; // offset 0x1F4, size 0x4
    float controlOnTime; // offset 0x1F8, size 0x4
    unsigned int controlOff; // offset 0x1FC, size 0x4
    unsigned int controlOnEvent; // offset 0x200, size 0x4
    struct zPlayerCheckPoint checkPoint; // offset 0x204, size 0x10
    unsigned char cheatMode; // offset 0x214, size 0x1
    class zPlayerInput playerInput; // offset 0x218, size 0x1C
    struct xVec3 lastDeltaPos; // offset 0x234, size 0xC
    float update_dt; // offset 0x240, size 0x4
    float last_update_dt; // offset 0x244, size 0x4
    struct xVec3 update_motion; // offset 0x248, size 0xC
    struct xVec3 previous_position; // offset 0x254, size 0xC
    struct xVec3 predictRotate; // offset 0x260, size 0xC
    struct xVec3 predictTranslate; // offset 0x26C, size 0xC
    float predictAngV; // offset 0x278, size 0x4
    struct xVec3 predictCurrDir; // offset 0x27C, size 0xC
    float predictCurrVel; // offset 0x288, size 0x4
    struct zSlideCam * slideCam; // offset 0x28C, size 0x4
    struct xJSPHeader * floor_jsp; // offset 0x290, size 0x4
    struct xClumpCollBSPTriangle * floor_bspTriangle; // offset 0x294, size 0x4
    struct xVec3 floorNorm; // offset 0x298, size 0xC
    int slope; // offset 0x2A4, size 0x4
    float floor_collision_timer; // offset 0x2A8, size 0x4
    float floor_distance; // offset 0x2AC, size 0x4
    struct xEnt * floor_entity; // offset 0x2B0, size 0x4
    unsigned int floor_oid; // offset 0x2B4, size 0x4
    struct xSurface * floor_surface; // offset 0x2B8, size 0x4
    unsigned int collisionFlags; // offset 0x2BC, size 0x4
    unsigned char currentIsNearLedge; // offset 0x2C0, size 0x1
    unsigned char currentIsNearLedgeValid; // offset 0x2C1, size 0x1
    float fallingTime; // offset 0x2C4, size 0x4
    float idleAnimationTimer; // offset 0x2C8, size 0x4
    unsigned int lorezModelID; // offset 0x2CC, size 0x4
    struct xModelInstance * lorezModel; // offset 0x2D0, size 0x4
    struct xModelInstance * hirezModel; // offset 0x2D4, size 0x4
    struct zNPCAttackerData npcAttacker[3]; // offset 0x2D8, size 0x618
    class zNPCCommon * roundRobinMelee; // offset 0x8F0, size 0x4
    float roundRobinTimeOut; // offset 0x8F4, size 0x4
    float enemyKilledComboTimer; // offset 0x8F8, size 0x4
    int enemyKilledCombo; // offset 0x8FC, size 0x4
private:
    float depenetration_velocity; // offset 0x900, size 0x4
    struct xEntShadow entShadow_embedded; // offset 0x904, size 0x2C
    struct xShadowSimpleCache simpShadow_embedded; // offset 0x930, size 0xA4
    unsigned int loaded_assetid; // offset 0x9D4, size 0x4
    struct xEntDrive drv; // offset 0x9E0, size 0xC0
    unsigned short parametersSize; // offset 0xAA0, size 0x2
    struct xModelAssetParam * parameters; // offset 0xAA4, size 0x4
    struct xEnt * reticleTarget; // offset 0xAA8, size 0x4
    struct RpAtomic * reticleModel; // offset 0xAAC, size 0x4
    float reticleRot; // offset 0xAB0, size 0x4
    float reticleAlpha; // offset 0xAB4, size 0x4
    struct xMat4x3 reticleMat; // offset 0xAC0, size 0x40
    float idleSoundTimer; // offset 0xB00, size 0x4
    unsigned int oldSlidePen; // offset 0xB04, size 0x4
    // total size: 0x890
    struct /* @class$2084zRemyPlayerActions_cpp */ {
        // Static members
        static int POS_COUNT_MAX; // size: 0x4

        // Members
        unsigned char debugging; // offset 0x0, size 0x1
        struct xVec3 positions[180]; // offset 0x4, size 0x870
        struct xVec3 startPos; // offset 0x874, size 0xC
        struct xVec3 endPos; // offset 0x880, size 0xC
        int posCount; // offset 0x88C, size 0x4
    } physicsDebug; // offset 0xB08, size 0x890
public:
    unsigned int * hitSoundsMap; // offset 0x1398, size 0x4
};
// total size: 0xC
class zCommonPlayerAction : public zPlayerAction {};
// Range: 0x80232660 -> 0x80232690
// this: r0
unsigned int zRemyPlayerCarry::AnyMoveCheck() {}

// total size: 0x4
struct /* @class$2231zRemyPlayerActions_cpp */ {
    // Members
    float u; // offset 0x0, size 0x4
};
// total size: 0x10
struct /* @class$2232zRemyPlayerActions_cpp */ {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    unsigned char forward; // offset 0xC, size 0x1
};
union MountData {
    // total size: 0x4
    struct /* @class$2231zRemyPlayerActions_cpp */ {
        // Members
        float u; // offset 0x0, size 0x4
    } tightrope; // offset 0x0, size 0x4
    // total size: 0x10
    struct /* @class$2232zRemyPlayerActions_cpp */ {
        // Members
        struct xVec3 pos; // offset 0x0, size 0xC
        unsigned char forward; // offset 0xC, size 0x1
    } poleSwing; // offset 0x0, size 0x10
};
enum zContextObjectType {
    ezContextObjectType_Tightrope = 0,
    ezContextObjectType_PoleSwing = 1,
    ezContextObjectType_ClimbableRope = 2,
    ezContextObjectType_Count = 3,
};
// total size: 0x14
class zContextObject : public xBase {
    // Members
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x1
class bit_array {
    // Members
    unsigned char bytes[1]; // offset 0x0, size 0x1
};
// total size: 0x1C
class zContextObjectManager {
    // Members
protected:
    union MountData mountData; // offset 0x0, size 0x10
    class zContextObject * currentObject; // offset 0x10, size 0x4
    unsigned char mounted; // offset 0x14, size 0x1
    unsigned char attemptContextMove; // offset 0x15, size 0x1
    class bit_array transition; // offset 0x16, size 0x1
    unsigned int animStateID; // offset 0x18, size 0x4
};
enum LedgeState {
    LedgeState_None = 0,
    LedgeState_JumpInterp = 1,
    LedgeState_Grab = 2,
    LedgeState_Count = 3,
    LedgeState_ForceSize = 2147483647,
};
// total size: 0x4
struct /* @class$2233zRemyPlayerActions_cpp */ {
    // Members
    unsigned char hasGrabbedLedge : 1; // offset 0x0, size 0x1
    unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
    unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
    unsigned int pad : 27; // offset 0x0, size 0x4
};
// total size: 0x3C
struct LedgeGrabParams {
    // Members
    enum LedgeState state; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$2233zRemyPlayerActions_cpp */ {
        // Members
        unsigned char hasGrabbedLedge : 1; // offset 0x0, size 0x1
        unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
        unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
        unsigned int pad : 27; // offset 0x0, size 0x4
    } flags; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    struct xVec3 playerToLedge; // offset 0xC, size 0xC
    struct xVec3 player_bound_pos; // offset 0x18, size 0xC
    struct xVec3 grab_position; // offset 0x24, size 0xC
    struct xVec3 flipUpTrans; // offset 0x30, size 0xC
};
// total size: 0x8
struct /* @class$2230zRemyPlayerActions_cpp */ {
    // Members
    float time; // offset 0x0, size 0x4
    signed short damageValue; // offset 0x4, size 0x2
};
// total size: 0x7C
class zPlayerOneLinerData {
    // Static members
    static int DAMAGE_RECORD_MAX; // size: 0x4

    // Members
protected:
    int currentDamageIndex; // offset 0x0, size 0x4
    int killCount; // offset 0x4, size 0x4
    // total size: 0x8
    struct /* @class$2230zRemyPlayerActions_cpp */ {
        // Members
        float time; // offset 0x0, size 0x4
        signed short damageValue; // offset 0x4, size 0x2
    } damageRecord[14]; // offset 0x8, size 0x70
    struct zPlayer * player; // offset 0x78, size 0x4
};
// total size: 0x1C
struct FootLockInfo {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    int bone; // offset 0xC, size 0x4
    struct xVec3 lockPos; // offset 0x10, size 0xC
};
// total size: 0x18
struct zSurfMatFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
// total size: 0x8
struct zSurfColorFX {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0xC
struct zSurfTextureAnim {
    // Members
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x60
struct zSurfUVFX {
    // Members
    int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    struct xVec3 trans; // offset 0xC, size 0xC
    struct xVec3 trans_spd; // offset 0x18, size 0xC
    struct xVec3 scale; // offset 0x24, size 0xC
    struct xVec3 scale_spd; // offset 0x30, size 0xC
    struct xVec3 min; // offset 0x3C, size 0xC
    struct xVec3 max; // offset 0x48, size 0xC
    struct xVec3 minmax_spd; // offset 0x54, size 0xC
};
// total size: 0x130
struct zSurfAssetBase : public xBaseAsset {
    // Members
    unsigned char game_damage_type; // offset 0x8, size 0x1
    unsigned char game_sticky; // offset 0x9, size 0x1
    unsigned char game_damage_flags; // offset 0xA, size 0x1
    unsigned char surf_type; // offset 0xB, size 0x1
    unsigned char phys_pad; // offset 0xC, size 0x1
    unsigned char sld_start; // offset 0xD, size 0x1
    unsigned char sld_stop; // offset 0xE, size 0x1
    unsigned char phys_flags; // offset 0xF, size 0x1
    float friction; // offset 0x10, size 0x4
    struct zSurfMatFX matfx; // offset 0x14, size 0x18
    struct zSurfColorFX colorfx; // offset 0x2C, size 0x8
    unsigned int texture_anim_flags; // offset 0x34, size 0x4
    struct zSurfTextureAnim texture_anim[2]; // offset 0x38, size 0x18
    unsigned int uvfx_flags; // offset 0x50, size 0x4
    struct zSurfUVFX uvfx[2]; // offset 0x54, size 0xC0
    unsigned char on; // offset 0x114, size 0x1
    unsigned char surf_pad[3]; // offset 0x115, size 0x3
    float oob_delay; // offset 0x118, size 0x4
    float walljump_scale_xz; // offset 0x11C, size 0x4
    float walljump_scale_y; // offset 0x120, size 0x4
    float damage_timer; // offset 0x124, size 0x4
    float damage_bounce; // offset 0x128, size 0x4
    unsigned int impact_sound; // offset 0x12C, size 0x4
};
// total size: 0x10
struct zFootstepsData {
    // Members
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
};
// total size: 0xC
struct zHitDecalData {
    // Members
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0x1B8
struct zSurfAssetIN : public zSurfAssetBase {
    // Members
    unsigned char dash_impact_type; // offset 0x130, size 0x1
    float dash_impact_throw_back; // offset 0x134, size 0x4
    float dash_spray_magnitude; // offset 0x138, size 0x4
    float dash_cool_rate; // offset 0x13C, size 0x4
    float dash_cool_amount; // offset 0x140, size 0x4
    float dash_pass; // offset 0x144, size 0x4
    float dash_ramp_max_distance; // offset 0x148, size 0x4
    float dash_ramp_min_distance; // offset 0x14C, size 0x4
    float dash_ramp_key_speed; // offset 0x150, size 0x4
    float dash_ramp_height; // offset 0x154, size 0x4
    unsigned int dash_ramp_target_movepoint_id; // offset 0x158, size 0x4
    int damage_amount; // offset 0x15C, size 0x4
    enum zHitSource damage_type; // offset 0x160, size 0x4
    struct zFootstepsData off_surface; // offset 0x164, size 0x10
    struct zFootstepsData on_surface; // offset 0x174, size 0x10
    struct zHitDecalData hit_decal_data[3]; // offset 0x184, size 0x24
    float off_surface_time; // offset 0x1A8, size 0x4
    unsigned char swimmable_surface; // offset 0x1AC, size 0x1
    unsigned char dash_fall; // offset 0x1AD, size 0x1
    unsigned char need_button_press; // offset 0x1AE, size 0x1
    unsigned char dash_attach; // offset 0x1AF, size 0x1
    unsigned char footstep_decals; // offset 0x1B0, size 0x1
    unsigned char pad1; // offset 0x1B1, size 0x1
    unsigned char pad2; // offset 0x1B2, size 0x1
    unsigned char pad3; // offset 0x1B3, size 0x1
    unsigned char pad4; // offset 0x1B4, size 0x1
    unsigned char driving_surface_type; // offset 0x1B5, size 0x1
};
// total size: 0x10
struct zFootstepDetect {
    // Members
    struct xVec3 last_emit_position; // offset 0x0, size 0xC
    unsigned char was_lifted; // offset 0xC, size 0x1
};
// total size: 0x0
class zDecalEmitterList {};
enum iSndGroupHandle {
};
// total size: 0x0
struct zDecalEmitterWithID {};
// total size: 0x48
class StepFX {
    // Members
    struct zSurfAssetIN * currentSurface; // offset 0x0, size 0x4
    struct zSurfAssetIN * lastSurface; // offset 0x4, size 0x4
    float lastSurfaceTime; // offset 0x8, size 0x4
    struct zFootstepDetect footsteps[2]; // offset 0xC, size 0x20
    class zDecalEmitterList * decals; // offset 0x2C, size 0x4
    float dust_emit_time_L; // offset 0x30, size 0x4
    float dust_time_L; // offset 0x34, size 0x4
    float dust_emit_remaining_L; // offset 0x38, size 0x4
    float dust_emit_time_R; // offset 0x3C, size 0x4
    float dust_time_R; // offset 0x40, size 0x4
    float dust_emit_remaining_R; // offset 0x44, size 0x4
};
enum HitType {
    eHitType_None = -1,
    eHitType_BackGround = 0,
    eHitType_FrontGround = 1,
    eHitType_BackAir = 2,
    eHitType_FrontAir = 3,
    eHitType_BackPlayerHit = 4,
    eHitType_FrontPlayerHit = 5,
    eHitType_InfiniteFall = 6,
    eHitType_FallInGoo = 7,
};
// total size: 0x8
struct Point {
    // Members
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
};
// total size: 0x28
struct MoveSupressParams {
    // Members
    struct Point points[3]; // offset 0x0, size 0x18
    unsigned char pointsInitialized[3]; // offset 0x18, size 0x3
    unsigned char verified_init; // offset 0x1B, size 0x1
    unsigned int num_segments; // offset 0x1C, size 0x4
    float cur_time; // offset 0x20, size 0x4
    float cur_supression; // offset 0x24, size 0x4
};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
};
// total size: 0x28
struct pointer_asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0x0
class zSpringboard {};
// total size: 0x0
class zNPCBase {};
// total size: 0x2
struct /* @class$2235zRemyPlayerActions_cpp */ {
    // Members
    signed short incrediPower; // offset 0x0, size 0x2
};
// total size: 0x30
struct OOBExtent {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float nearFarDist; // offset 0x4, size 0x4
    float sideDist; // offset 0x8, size 0x4
    struct xVec3 position; // offset 0xC, size 0xC
    struct xVec3 depen; // offset 0x18, size 0xC
    float magDepen; // offset 0x24, size 0x4
    float leftXMargin; // offset 0x28, size 0x4
    float rightXMargin; // offset 0x2C, size 0x4
};
// total size: 0x0
class xCamTransition {};
// total size: 0x14
class xCamTimeBias : public xCamBias {
    // Members
    float bias; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float blendTime; // offset 0x10, size 0x4
};
// total size: 0x8
class xCamBias {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char mIsBiDirectional; // offset 0x4, size 0x1
};
// total size: 0x18
struct xCamCoordCylinder {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x20
struct xCamCoordSphere {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    struct xQuat dir; // offset 0x10, size 0x10
};
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x0
class zCam2Player {};
// total size: 0x170
struct xCamBlend : public xCam {
    // Members
    struct xCam * src; // offset 0x140, size 0x4
    struct xCam * dst; // offset 0x144, size 0x4
    class xCamBias * bias; // offset 0x148, size 0x4
    class xCamTimeBias timeBias; // offset 0x14C, size 0x14
    class xCamTransition * transition; // offset 0x160, size 0x4
};
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0xC
struct xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
};
// total size: 0xE0
struct xCamGroup {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    struct xVec3 coll_atXZ; // offset 0x80, size 0xC
    float cameraPlayerAudioBias; // offset 0x8C, size 0x4
    struct xVec3 vel; // offset 0x90, size 0xC
    float fov; // offset 0x9C, size 0x4
    float fov_default; // offset 0xA0, size 0x4
    int flags; // offset 0xA4, size 0x4
    struct xCam * primary; // offset 0xA8, size 0x4
    struct analog_data analog; // offset 0xAC, size 0x18
private:
    int child_flags; // offset 0xC4, size 0x4
    int child_flags_mask; // offset 0xC8, size 0x4
    struct xCamBlend * blend_cam[4]; // offset 0xCC, size 0x10
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0x10
struct xCamOrient {
    // Members
    union { // inferred
        struct xQuat quat; // offset 0x0, size 0x10
        struct xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x30
struct xCamSpatialInfo {
    // Members
    struct xCamCoord coord; // offset 0x0, size 0x20
    struct xCamOrient orient; // offset 0x20, size 0x10
};
// total size: 0x10
struct /* @class$1837zRemyPlayerActions_cpp */ {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xColor_tag color[3]; // offset 0x4, size 0xC
};
// total size: 0x18
struct zone_data {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    struct xVec3 face; // offset 0xC, size 0xC
};
// total size: 0x54
struct xCamConfigFollow {
    // Members
    struct zone_data zone_rest; // offset 0x0, size 0x18
    struct zone_data zone_above; // offset 0x18, size 0x18
    struct zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x18
struct xCamCoordPolar {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
};
// total size: 0x0
class zCamSplineCommonMix {};
// total size: 0x140
struct xCam {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    float fov; // offset 0x80, size 0x4
    int flags; // offset 0x84, size 0x4
    unsigned int owner; // offset 0x88, size 0x4
    struct xCamGroup * group; // offset 0x8C, size 0x4
    struct analog_data analog; // offset 0x90, size 0x18
    enum xCamCoordType coord_type; // offset 0xA8, size 0x4
    enum xCamOrientType orient_type; // offset 0xAC, size 0x4
    struct xCamSpatialInfo spatial; // offset 0xB0, size 0x30
    struct xCamSpatialInfo coll_spatial; // offset 0xE0, size 0x30
    struct xCamConfigCommon cfg_common; // offset 0x110, size 0x8
    void * __vptr$; // offset 0x118, size 0x4
private:
    int group_flags; // offset 0x11C, size 0x4
    struct xCamBlend * blender; // offset 0x120, size 0x4
public:
    // total size: 0x10
    struct /* @class$1837zRemyPlayerActions_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
};
// total size: 0xCC
struct xSweptSphere {
    // Members
    unsigned char detect_initial_penetration; // offset 0x0, size 0x1
    unsigned char init_collide; // offset 0x1, size 0x1
    struct xVec3 start; // offset 0x4, size 0xC
    struct xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    unsigned short xEntFilterFlags; // offset 0x20, size 0x2
    float dist; // offset 0x24, size 0x4
    struct xVec3 dir; // offset 0x28, size 0xC
    struct xBox box; // offset 0x34, size 0x18
    struct xQCData qcd; // offset 0x4C, size 0x20
    float curdist; // offset 0x6C, size 0x4
    unsigned int oid; // offset 0x70, size 0x4
    void * optr; // offset 0x74, size 0x4
    struct xModelInstance * mptr; // offset 0x78, size 0x4
    struct xVec3 worldContact; // offset 0x7C, size 0xC
    int hitIt; // offset 0x88, size 0x4
    struct xVec3 worldPos; // offset 0x8C, size 0xC
    struct xVec3 worldNormal; // offset 0x98, size 0xC
    struct xVec3 worldTangent; // offset 0xA4, size 0xC
    struct xJSPHeader * jsp; // offset 0xB0, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0xB4, size 0x4
    enum xCollideSphereHitType type; // offset 0xB8, size 0x4
    class xPlane tri_plane; // offset 0xBC, size 0x10
};
// total size: 0x1
class zPlayerConstrainer {
    // Static members
    static unsigned int sDrawnFrame; // size: 0x4
    static unsigned char sCameraDisable; // size: 0x1
    static unsigned char sPlayerDisable; // size: 0x1
    static unsigned char sDebugRender; // size: 0x1
    static unsigned char sEnabled; // size: 0x1
    static float sFarWall; // size: 0x4
    static float sNearWall; // size: 0x4
    static float sDefaultFarWall; // size: 0x4
    static float sDefaultNearWall; // size: 0x4
};
// total size: 0xD0
struct zPlayerCarryInfo {
    // Members
    class zCarryableObject * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    unsigned int animCode; // offset 0x8, size 0x4
    struct xVec3 targetVelocity; // offset 0xC, size 0xC
    unsigned int lerpedIn; // offset 0x18, size 0x4
    struct xMat4x3 spin; // offset 0x20, size 0x40
    struct xQuat startQuat; // offset 0x60, size 0x10
    struct xQuat endQuat; // offset 0x70, size 0x10
    struct xVec3 objScale; // offset 0x80, size 0xC
    struct xVec3 physicsTranslation; // offset 0x8C, size 0xC
    float radius; // offset 0x98, size 0x4
    unsigned char orientToPlayer; // offset 0x9C, size 0x1
    unsigned char destroyed; // offset 0x9D, size 0x1
    float targetRot; // offset 0xA0, size 0x4
    float startRot; // offset 0xA4, size 0x4
    unsigned int grabTarget; // offset 0xA8, size 0x4
    struct xVec3 grabOffset; // offset 0xAC, size 0xC
    float grabLerpLast; // offset 0xB8, size 0x4
    unsigned int grabYclear; // offset 0xBC, size 0x4
    float grab_emit_remaining; // offset 0xC0, size 0x4
    float grab_dust_time; // offset 0xC4, size 0x4
};
enum xJawSpeaker {
    exJawSpeaker_Remy = 0,
    exJawSpeaker_Count = 1,
};
// total size: 0x20
struct AttackFX {
    // Members
    unsigned int anim; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float end; // offset 0x8, size 0x4
    unsigned short flags; // offset 0xC, size 0x2
    unsigned char upgrade; // offset 0xE, size 0x1
    unsigned char bone; // offset 0xF, size 0x1
    float dt; // offset 0x10, size 0x4
    struct xMat4x3 * mat; // offset 0x14, size 0x4
    unsigned int num; // offset 0x18, size 0x4
    void * data; // offset 0x1C, size 0x4
};
enum zCommonPlayerUpgradeType {
    ezCommonPlayerUpgradeType_Melee = 0,
    ezCommonPlayerUpgradeType_AirMelee = 1,
    ezCommonPlayerUpgradeType_Distance = 2,
    ezCommonPlayerUpgradeType_Health = 3,
    ezCommonPlayerUpgradeType_NukeCnt = 4,
    ezCommonPlayerUpgradeType_Count = 5,
};
// total size: 0x0
struct xSerial {};
// total size: 0xC
struct xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x80
struct xNearFloorPoly {
    // Members
    struct xBox box; // offset 0x0, size 0x18
    struct xVec3 center; // offset 0x18, size 0xC
    struct xVec3 facingVec; // offset 0x24, size 0xC
    float facingDot; // offset 0x30, size 0x4
    float floorDot; // offset 0x34, size 0x4
    struct xVec3 vert[3]; // offset 0x38, size 0x24
    float neardist; // offset 0x5C, size 0x4
    struct xVec3 nearpt; // offset 0x60, size 0xC
    int nearvert; // offset 0x6C, size 0x4
    int nearedge; // offset 0x70, size 0x4
    unsigned int oid; // offset 0x74, size 0x4
    void * optr; // offset 0x78, size 0x4
    struct xModelInstance * mptr; // offset 0x7C, size 0x4
};
// total size: 0x1840
struct zCommonPlayer : public zPlayer {
    // Static members
    static int MAX_STATES; // size: 0x4
    static unsigned int NUKE_CAPACITY_START; // size: 0x4

    // Members
    class zContextObjectManager contextManager; // offset 0x13A0, size 0x1C
    unsigned char has_picked_up_incredimeter; // offset 0x13BC, size 0x1
    unsigned char has_picked_up_health; // offset 0x13BD, size 0x1
    unsigned char has_grabbed_zipline; // offset 0x13BE, size 0x1
    struct xLight * light; // offset 0x13C0, size 0x4
    unsigned char lightOn; // offset 0x13C4, size 0x1
    float stickFlickMinTimer; // offset 0x13C8, size 0x4
    float stickFlickMaxTimer; // offset 0x13CC, size 0x4
    float stickFlickAngle; // offset 0x13D0, size 0x4
    float stickFlickUnit[2]; // offset 0x13D4, size 0x8
    struct LedgeGrabParams ledge; // offset 0x13DC, size 0x3C
protected:
    class zPlayerOneLinerData oneLinerData; // offset 0x1418, size 0x7C
    float collisionMasterRadius; // offset 0x1494, size 0x4
public:
    int surfaceDamage; // offset 0x1498, size 0x4
    enum zHitSource surfaceSource; // offset 0x149C, size 0x4
    struct xVec3 surfaceKnockback; // offset 0x14A0, size 0xC
protected:
    float surfAccelWalk; // offset 0x14AC, size 0x4
    float surfAccelRun; // offset 0x14B0, size 0x4
    float surfDecelIdle; // offset 0x14B4, size 0x4
    float surfDecelSkid; // offset 0x14B8, size 0x4
    float surfSlickRatio; // offset 0x14BC, size 0x4
    float surfSlickTimer; // offset 0x14C0, size 0x4
    float surfPeakRatio; // offset 0x14C4, size 0x4
    float surfMaxSpeed; // offset 0x14C8, size 0x4
    float surfSlipTimer; // offset 0x14CC, size 0x4
    float dust_emit_time; // offset 0x14D0, size 0x4
    float dust_time; // offset 0x14D4, size 0x4
    float dust_emit_remaining; // offset 0x14D8, size 0x4
    float smoke_emit_increment; // offset 0x14DC, size 0x4
    float max_smoke_emit_time; // offset 0x14E0, size 0x4
    float smoke_emit_timer; // offset 0x14E4, size 0x4
    float smoke_emit_remaining; // offset 0x14E8, size 0x4
    float smoke_offset; // offset 0x14EC, size 0x4
    struct FootLockInfo leftFoot; // offset 0x14F0, size 0x1C
    struct FootLockInfo rightFoot; // offset 0x150C, size 0x1C
public:
    class StepFX stepfx; // offset 0x1528, size 0x48
private:
    float hangTimer; // offset 0x1570, size 0x4
    float last_dt; // offset 0x1574, size 0x4
public:
    enum HitType currentHitType; // offset 0x1578, size 0x4
    struct xVec3 damageVec; // offset 0x157C, size 0xC
    float hitTimer; // offset 0x1588, size 0x4
    int hitJuggleCount; // offset 0x158C, size 0x4
private:
    struct MoveSupressParams move_supress; // offset 0x1590, size 0x28
public:
    class zInteraction * currAction; // offset 0x15B8, size 0x4
    float walkToActionTimer; // offset 0x15BC, size 0x4
    float autoMoveSpeed; // offset 0x15C0, size 0x4
    enum AutoMoveMode autoMoveMode; // offset 0x15C4, size 0x4
    float autoMoveDist; // offset 0x15C8, size 0x4
    struct pointer_asset * autoMovePointer; // offset 0x15CC, size 0x4
    struct xBase * autoMoveSender; // offset 0x15D0, size 0x4
    float extraIdleTimer; // offset 0x15D4, size 0x4
    class zSpringboard * springboard; // offset 0x15D8, size 0x4
    class zNPCBase * interactingNPC; // offset 0x15DC, size 0x4
    float walkLerp; // offset 0x15E0, size 0x4
    int finishingMove; // offset 0x15E4, size 0x4
    class zNPCCommon * lastHitNPC; // offset 0x15E8, size 0x4
protected:
    unsigned int powerUpTbl[5]; // offset 0x15EC, size 0x14
private:
    unsigned int expPoints; // offset 0x1600, size 0x4
    unsigned int expPointsToUpgrade; // offset 0x1604, size 0x4
    unsigned int nukes; // offset 0x1608, size 0x4
    unsigned char speed; // offset 0x160C, size 0x1
public:
    unsigned int upgradeLevel; // offset 0x1610, size 0x4
    unsigned int uCommonPlayerFlags; // offset 0x1614, size 0x4
private:
    struct xMat4x3 playerAbsMat; // offset 0x1620, size 0x40
    struct xVec3 lastFloorNorm; // offset 0x1660, size 0xC
    float maxVelmag; // offset 0x166C, size 0x4
    float leanLerp; // offset 0x1670, size 0x4
    float moveSpeedNormal[6]; // offset 0x1674, size 0x18
    float moveSpeedJump[6]; // offset 0x168C, size 0x18
    float normalTurnFactor; // offset 0x16A4, size 0x4
    float attackTurnFactor; // offset 0x16A8, size 0x4
    float airTurnFactor; // offset 0x16AC, size 0x4
    float stoppedTurnSpeedUp; // offset 0x16B0, size 0x4
    float animWalk[3]; // offset 0x16B4, size 0xC
    float animRun[3]; // offset 0x16C0, size 0xC
    struct xAnimState * lastState; // offset 0x16CC, size 0x4
    struct xAnimState * stateStack[16]; // offset 0x16D0, size 0x40
    // total size: 0x2
    struct /* @class$2235zRemyPlayerActions_cpp */ {
        // Members
        signed short incrediPower; // offset 0x0, size 0x2
    } checkpoint; // offset 0x1710, size 0x2
    unsigned char shouldTurnToFace; // offset 0x1712, size 0x1
    unsigned char allowTurnToFaceAbort; // offset 0x1713, size 0x1
    float turnToFaceAngle; // offset 0x1714, size 0x4
    float turnToFaceSpeed; // offset 0x1718, size 0x4
    float lastMag; // offset 0x171C, size 0x4
    float lastAngle; // offset 0x1720, size 0x4
    float moveAcceleration; // offset 0x1724, size 0x4
    float moveDeceleration; // offset 0x1728, size 0x4
    float runTimer; // offset 0x172C, size 0x4
    float minimumRunTime; // offset 0x1730, size 0x4
    float turnInPlaceTimer; // offset 0x1734, size 0x4
    float stickMagnitude; // offset 0x1738, size 0x4
    float stickAngle; // offset 0x173C, size 0x4
    float facingAngle; // offset 0x1740, size 0x4
    unsigned char facingAngleValid; // offset 0x1744, size 0x1
    unsigned char useThrowTarget; // offset 0x1745, size 0x1
    struct xVec3 throwTarget; // offset 0x1748, size 0xC
    float skidStopDeceleration; // offset 0x1754, size 0x4
    float skidStopDecelTime; // offset 0x1758, size 0x4
    float skidStopLerpTime; // offset 0x175C, size 0x4
    class zPlayerConstrainer constrainer; // offset 0x1760, size 0x1
    unsigned char pushedPlayerLastFrame; // offset 0x1761, size 0x1
    struct xVec3 pushedPlayerEnemyPos; // offset 0x1764, size 0xC
public:
    struct zPlayerCarryInfo carry; // offset 0x1770, size 0xD0
};
// Range: 0x80232690 -> 0x802326F0
// this: r30
unsigned int zRemyPlayerCarry::AnyMoveNotUsingCheck() {}

// Range: 0x802326F0 -> 0x8023274C
// this: r30
unsigned int zRemyPlayerCarry::AnyMoveLandingCheck() {}

// Range: 0x8023274C -> 0x80232774
// this: r3
unsigned int zRemyPlayerCarry::LandingCheck() {}

// Range: 0x80232774 -> 0x802327A0
// this: r0
unsigned int zRemyPlayerCarry::AnyStopCheck() {}

// Range: 0x802327A0 -> 0x80232810
// this: r31
unsigned int zRemyPlayerCarry::GrabCheck() {}

// Range: 0x80232810 -> 0x8023283C
// this: r3
unsigned int zRemyPlayerCarry::DropCheck() {}

// Range: 0x8023283C -> 0x80232870
// this: r3
unsigned int zRemyPlayerCarry::NotUsingCheck() {}

// Range: 0x80232870 -> 0x802328CC
// this: r31
unsigned int zRemyPlayerCarry::WhifCheck() {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C047EC
// Range: 0x802328CC -> 0x802329A4
// this: r30
unsigned int zRemyPlayerCarry::PickedUpCB() {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x802329A4 -> 0x80232A2C
// this: r29
void zRemyPlayerCarry::GetCarryBound(struct xSphere * sphere /* r30 */) {
    // Local variables
    struct xVec3 * playerPos; // r0
    float minY; // f1

    // References
    // -> static float CARRY_BOUND_RADIUS;
}

// Range: 0x80232A2C -> 0x80232AA8
// this: r30
unsigned int zRemyPlayerCarry::GrabKillIdleNormalCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x80232AA8 -> 0x80232B24
// this: r30
unsigned int zRemyPlayerCarry::GrabKillIdleEnemyCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x80232B24 -> 0x80232BA0
// this: r30
unsigned int zRemyPlayerCarry::GrabKillWalkCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x80232BA0 -> 0x80232C00
// this: r30
unsigned int zRemyPlayerCarry::GrabKillRunCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x80232C00 -> 0x80232C64
// this: r30
unsigned char zRemyPlayerCarry::GrabbedObjectKilled() {}

// Range: 0x80232C64 -> 0x80232CC4
// this: r31
void zRemyPlayerCarry::End() {}

// Range: 0x80232CC4 -> 0x80232D28
// this: r30
unsigned char zRemyPlayerCarry::ExtraCarrySphere() {}

// Range: 0x80232D28 -> 0x80232FE4
// this: r29
void zRemyPlayerCarry::Move(struct xScene * s /* r30 */, float dt /* f31 */, struct xEntFrame * frame /* r31 */) {
    // Local variables
    struct xAnimSingle * single; // r27
    struct xAnimState * state; // r28
    unsigned char skipAbsControl; // r26
    float diffAngle; // f2
    float atime; // f28
}

// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// Range: 0x80232FE4 -> 0x802330A4
// this: r31
void zRemyPlayerCarry::Setup() {}

// Range: 0x802330A4 -> 0x802330B8
// this: r0
void zRemyPlayerCarry::Reset() {}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80C047F8
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
struct xVec3 g_Y3; // size: 0xC, address: 0x80C0ADB8
struct xVec3 m_Null; // size: 0xC, address: 0x80C0B540
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
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
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x802330B8 -> 0x802338E0
// this: r31
void zRemyPlayerCarry::Begin() {
    // Local variables
    float tx; // f30
    float ty; // f29
    float tz; // f1
    struct xAnimState * stat; // r29
    class zNPCCommon * npc; // r29
    struct xVec3 tmptran; // r1+0x20
    struct xQuat tmpquat; // r1+0x10
    struct xMat4x3 objMat; // r1+0x70
    struct xMat4x3 targetMat; // r1+0x30
    float rsqr; // f29
    float restHeight; // f1

    // References
    // -> struct xVec3 m_Null;
    // -> struct xVec3 g_Y3;
    // -> static char __FUNCTION__[6];
}

// total size: 0x78
struct zNPCAssetIN2 : public xDynAsset {
    // Members
    struct xEntAsset ent_asset; // offset 0x10, size 0x50
    unsigned int navigation_mesh_id; // offset 0x60, size 0x4
    unsigned int npcFlags; // offset 0x64, size 0x4
    unsigned int respawnCounterID; // offset 0x68, size 0x4
    unsigned int settingsHashID; // offset 0x6C, size 0x4
    unsigned int interestPointerGroupID; // offset 0x70, size 0x4
    unsigned int lightKitID; // offset 0x74, size 0x4
};
// total size: 0x0
struct xModelAssetInfo {};
// total size: 0x4
struct instance_flags {
    // Members
    unsigned char living : 1; // offset 0x0, size 0x1
    unsigned char activated : 1; // offset 0x0, size 0x1
    unsigned char visibilityCull : 1; // offset 0x0, size 0x1
    unsigned int pad : 29; // offset 0x0, size 0x4
};
// total size: 0x28
struct zStoredSpawn {
    // Members
    int valid; // offset 0x0, size 0x4
    struct xBase * from; // offset 0x4, size 0x4
    struct xBase * to; // offset 0x8, size 0x4
    unsigned int toEvent; // offset 0xC, size 0x4
    float toParam[4]; // offset 0x10, size 0x10
    struct xBase * toParamWidget; // offset 0x20, size 0x4
    unsigned int toParamWidgetID; // offset 0x24, size 0x4
};
// total size: 0x98
class zNPCInstance : public xBase {
    // Members
protected:
    class zNPCBaseIN2 * npc_data; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    struct zNPCAssetIN2 * npc_asset; // offset 0x18, size 0x4
    int npc_asset_size; // offset 0x1C, size 0x4
    const struct xModelAssetInfo * model_asset; // offset 0x20, size 0x4
    struct xVec3 last_pos; // offset 0x24, size 0xC
    struct xVec3 last_orientation; // offset 0x30, size 0xC
    unsigned char canAttack; // offset 0x3C, size 0x1
    unsigned char canDetect; // offset 0x3D, size 0x1
    unsigned char canChase; // offset 0x3E, size 0x1
    unsigned char hasNuke; // offset 0x3F, size 0x1
    unsigned char ignoreAllDamage; // offset 0x40, size 0x1
    unsigned char inSpawnState; // offset 0x41, size 0x1
    unsigned char noMoreSpawning; // offset 0x42, size 0x1
    struct xVec3 moveRadiusCenter; // offset 0x44, size 0xC
    unsigned char hasManualMoveRadiusCenter; // offset 0x50, size 0x1
    struct xVec3 manualMoveRadiusCenter; // offset 0x54, size 0xC
    float moveRadius2; // offset 0x60, size 0x4
    float moveInnerRadius2; // offset 0x64, size 0x4
    struct instance_flags flags; // offset 0x68, size 0x4
public:
    void * __vptr$; // offset 0x6C, size 0x4
    struct zStoredSpawn storedSpawn; // offset 0x70, size 0x28
};
// total size: 0x8
struct zAnimFxSoundGroup {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
};
// total size: 0xE4
class zNPCBaseIN2 : public xEnt {
    // Members
protected:
    class zNPCInstance * inst; // offset 0xD8, size 0x4
public:
    void * __vptr$; // offset 0xDC, size 0x4
    unsigned char npc_selection; // offset 0xE0, size 0x1
};
// total size: 0x60
struct triData : public tri_data {
    // Members
    struct xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    const struct xCollis * coll; // offset 0x1C, size 0x4
    struct xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0xC0
struct xEntDrive {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float outroTime; // offset 0x4, size 0x4
    float outroTimer; // offset 0x8, size 0x4
    float influenceOfOldDriver; // offset 0xC, size 0x4
    float introTime; // offset 0x10, size 0x4
    float introTimer; // offset 0x14, size 0x4
    float influenceOfDriver; // offset 0x18, size 0x4
    struct xEnt * oldDriver; // offset 0x1C, size 0x4
    struct xEnt * driver; // offset 0x20, size 0x4
    struct xEnt * driven; // offset 0x24, size 0x4
    struct xVec3 drivenPosInOldDriver; // offset 0x28, size 0xC
    struct xVec3 drivenPosInDriver; // offset 0x34, size 0xC
    struct xVec3 lastDrivenPos; // offset 0x40, size 0xC
    float yawInDriver; // offset 0x4C, size 0x4
    struct xVec3 dLoc; // offset 0x50, size 0xC
    struct triData tri; // offset 0x60, size 0x60
};
// total size: 0x0
class zNPCCommonMoveToTransient {};
// total size: 0x0
class zNPCCommonNukeTransient {};
// total size: 0x0
class zNPCCommonAnimTest {};
// total size: 0x0
class zNPCCommonPlayTaunt {};
// total size: 0x0
class zNPCCommonPlayCustomTransient {};
// total size: 0x0
class zNPCCommonInterestingIdle {};
// total size: 0x4
struct /* @class$2688zRemyPlayerActions_cpp */ {
    // Members
    unsigned char human : 1; // offset 0x0, size 0x1
    unsigned char cast_shadow : 1; // offset 0x0, size 0x1
    unsigned char complex_shadow : 1; // offset 0x0, size 0x1
    unsigned char dying : 1; // offset 0x0, size 0x1
    unsigned char not_throw_target : 1; // offset 0x0, size 0x1
    unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
    unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
    unsigned char carried : 1; // offset 0x0, size 0x1
    unsigned char invincible : 1; // offset 0x1, size 0x1
    unsigned char firstUpdate : 1; // offset 0x1, size 0x1
    unsigned char noDamageSmoke : 1; // offset 0x1, size 0x1
    unsigned char pad2 : 5; // offset 0x1, size 0x1
    unsigned char pad3 : 8; // offset 0x2, size 0x1
    unsigned char old_chkby : 8; // offset 0x3, size 0x1
};
// total size: 0x20
struct zDebugStoredEvents {
    // Members
    long long storedTime; // offset 0x0, size 0x8
    struct xBase * from; // offset 0x8, size 0x4
    struct xBase * to; // offset 0xC, size 0x4
    unsigned int to_event; // offset 0x10, size 0x4
    float * to_param; // offset 0x14, size 0x4
    struct xBase * to_param_widget; // offset 0x18, size 0x4
};
// total size: 0x108
struct zDebugStoredAnimChanges {
    // Members
    long long storedTime; // offset 0x0, size 0x8
    char animName[256]; // offset 0x8, size 0x100
};
// total size: 0x0
class zNPCNavigate {};
// total size: 0x18
struct testNode {
    // Members
    unsigned char (* testFunction)(struct xEnt *, class behavior *, class behavior *); // offset 0x0, size 0x4
    class behavior * changeToBehavior; // offset 0x4, size 0x4
    struct testNode * next; // offset 0x8, size 0x4
    char * description; // offset 0xC, size 0x4
    float waitTime; // offset 0x10, size 0x4
    float remainingTime; // offset 0x14, size 0x4
};
// total size: 0x30
struct zTransientNodeData {
    // Members
    void * contextDataPtr[4]; // offset 0x0, size 0x10
    float contextDataF32[4]; // offset 0x10, size 0x10
    int contextDataS32[4]; // offset 0x20, size 0x10
};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
// total size: 0x10
class xPlane {
    // Members
public:
    struct xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x5C
struct SphereCollisionResults {
    // Members
    struct xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    int collisionFlags; // offset 0x10, size 0x4
    struct xVec3 contact; // offset 0x14, size 0xC
    struct xVec3 normal; // offset 0x20, size 0xC
    float collidingSphereRadius; // offset 0x2C, size 0x4
    unsigned int oid; // offset 0x30, size 0x4
    void * optr; // offset 0x34, size 0x4
    struct xModelInstance * mptr; // offset 0x38, size 0x4
    struct xJSPHeader * jsp; // offset 0x3C, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0x40, size 0x4
    enum xCollideSphereHitType hitTriangleType; // offset 0x44, size 0x4
    class xPlane triPlane; // offset 0x48, size 0x10
    int sphereIndex; // offset 0x58, size 0x4
};
// total size: 0x0
struct zEntTrigger {};
enum GrabType {
    eGrabTypeRemyStanding = 0,
    eGrabTypeElastigirl = 1,
    eGrabTypeCount = 2,
};
enum zHitTarget {
    zHT_GENERAL = 0,
    zHT_FRONT = 1,
    zHT_BACK = 2,
    zHT_LEFT = 3,
    zHT_RIGHT = 4,
    zHT_ENTITY = 5,
    zHT_ENV = 6,
    zHT_CRITICAL = 7,
    zHT_COUNT = 8,
};
// total size: 0x38
struct zCombatDamageInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xBase * from; // offset 0x4, size 0x4
    int damage; // offset 0x8, size 0x4
    enum zHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    struct xVec3 knockback; // offset 0x14, size 0xC
    struct xVec3 hitLocation; // offset 0x20, size 0xC
    struct xVec3 direction; // offset 0x2C, size 0xC
};
// total size: 0x2C
class behavior {
    // Members
protected:
    struct xEnt * owner; // offset 0x0, size 0x4
public:
    void * __vptr$; // offset 0x4, size 0x4
protected:
    struct testNode testList; // offset 0x8, size 0x18
    struct zTransientNodeData * transientData; // offset 0x20, size 0x4
public:
    unsigned int type; // offset 0x24, size 0x4
    unsigned int behaviorFlags; // offset 0x28, size 0x4
};
// total size: 0x14
struct behavior_node {
    // Members
    int priority; // offset 0x0, size 0x4
    class behavior * data; // offset 0x4, size 0x4
    struct behavior_node * next; // offset 0x8, size 0x4
    struct behavior_node * previous; // offset 0xC, size 0x4
    float delay; // offset 0x10, size 0x4
};
// total size: 0x34
struct zTransientNode {
    // Members
    class behavior * transient; // offset 0x0, size 0x4
    struct zTransientNodeData contextData; // offset 0x4, size 0x30
};
// total size: 0x84
class zBehaviorManager {
    // Members
protected:
    struct behavior_node behaviorList; // offset 0x0, size 0x14
    struct behavior_node * behaviorEndOfList; // offset 0x14, size 0x4
    class behavior * behaviorCurrentNonTransient; // offset 0x18, size 0x4
    class behavior * behaviorDefault; // offset 0x1C, size 0x4
    class behavior * behaviorDamage; // offset 0x20, size 0x4
    class behavior * behaviorProjectile; // offset 0x24, size 0x4
    class behavior * behaviorCarry; // offset 0x28, size 0x4
    class behavior * behaviorThrow; // offset 0x2C, size 0x4
    class behavior * behaviorFrozen; // offset 0x30, size 0x4
    class behavior * behaviorThaw; // offset 0x34, size 0x4
    class behavior * behaviorNuke; // offset 0x38, size 0x4
    class behavior * behaviorFrozenCarry; // offset 0x3C, size 0x4
    class behavior * behaviorFrozenThrow; // offset 0x40, size 0x4
    class behavior * behaviorDeath; // offset 0x44, size 0x4
    class behavior * behaviorBlock; // offset 0x48, size 0x4
    class behavior * behaviorBlockHit; // offset 0x4C, size 0x4
    class behavior * behaviorEscapeNoEnter; // offset 0x50, size 0x4
    class behavior * behaviorWaitNoEnter; // offset 0x54, size 0x4
    class behavior * behaviorJump; // offset 0x58, size 0x4
    class behavior * behaviorCover; // offset 0x5C, size 0x4
    class behavior * behaviorShield; // offset 0x60, size 0x4
    class behavior * behaviorRangeAttack; // offset 0x64, size 0x4
    class behavior * behaviorFrozenDamage; // offset 0x68, size 0x4
    struct zTransientNode * transientBehavior; // offset 0x6C, size 0x4
    int transientTotal; // offset 0x70, size 0x4
    int transientMax; // offset 0x74, size 0x4
    float inStateTimer; // offset 0x78, size 0x4
    unsigned int enteredBehavior; // offset 0x7C, size 0x4
public:
    void * __vptr$; // offset 0x80, size 0x4
};
// total size: 0x0
struct zNPCBlurInstance {};
// total size: 0x14
struct zInteractionAsset : public xDynAsset {
    // Members
    unsigned char initiallyActive; // offset 0x10, size 0x1
    unsigned char initiallyAvailable; // offset 0x11, size 0x1
};
enum zInteractionType {
    eInteractionTypeSwitchLever = 0,
    eInteractionTypeLaunch = 1,
    eInteractionTypeLookoutPoint = 2,
    eInteractionTypeDistractionPoint = 3,
    eInteractionTypeCount = 4,
};
// total size: 0x28
class zInteraction : public xBase {
    // Members
protected:
    struct zCommonPlayer * interactingPlayer; // offset 0x10, size 0x4
    struct zInteractionAsset * asset; // offset 0x14, size 0x4
    enum zInteractionType type; // offset 0x18, size 0x4
    struct xEnt * object; // offset 0x1C, size 0x4
    unsigned char activated; // offset 0x20, size 0x1
    unsigned char available; // offset 0x21, size 0x1
public:
    void * __vptr$; // offset 0x24, size 0x4
};
// total size: 0x18
struct zTriggerInteractionAsset : public zInteractionAsset {
    // Members
    unsigned int triggerID; // offset 0x14, size 0x4
};
// total size: 0x30
class zTriggerInteraction : public zInteraction {
    // Members
protected:
    float logoAlpha; // offset 0x28, size 0x4
    struct zEntTrigger * trigger; // offset 0x2C, size 0x4
};
enum zSwitchLeverState {
    eSwitchLeverOff = 0,
    eSwitchLeverOn = 1,
    eSwitchLeverSwitchingOff = 2,
    eSwitchLeverSwitchingOn = 3,
    eSwitchLeverCount = 4,
};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// total size: 0x6A8
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x70, size 0x4
    int num_base; // offset 0x74, size 0x4
    struct xBase * * base; // offset 0x78, size 0x4
    unsigned int num_update_base; // offset 0x7C, size 0x4
    struct xBase * * update_base; // offset 0x80, size 0x4
    int baseCount[195]; // offset 0x84, size 0x30C
    struct xBase * baseList[195]; // offset 0x390, size 0x30C
    struct _zEnv * zen; // offset 0x69C, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A0, size 0x4
    unsigned char enableDrawing; // offset 0x6A4, size 0x1
};
// total size: 0x4C
struct zSwitchLeverAsset : public zTriggerInteractionAsset {
    // Members
    struct xVec3 location; // offset 0x18, size 0xC
    float yaw; // offset 0x24, size 0x4
    unsigned int modelID; // offset 0x28, size 0x4
    unsigned int offIdleAnimID; // offset 0x2C, size 0x4
    unsigned int onIdleAnimID; // offset 0x30, size 0x4
    unsigned int switchOffAnimID; // offset 0x34, size 0x4
    unsigned int switchOnAnimID; // offset 0x38, size 0x4
    unsigned int lightID; // offset 0x3C, size 0x4
    unsigned int sparkOffID; // offset 0x40, size 0x4
    unsigned int sparkOnID; // offset 0x44, size 0x4
    unsigned char initiallyOn; // offset 0x48, size 0x1
};
// total size: 0x74
class zSwitchLever : public zTriggerInteraction {
    // Members
protected:
    struct pointer_asset playerLocation; // offset 0x30, size 0x28
    struct xLight * light; // offset 0x58, size 0x4
    enum zSwitchLeverState state; // offset 0x5C, size 0x4
    float animPercent; // offset 0x60, size 0x4
    struct xEnt * lockedEntity; // offset 0x64, size 0x4
    struct xBase * sparksOff; // offset 0x68, size 0x4
    struct xBase * sparksOn; // offset 0x6C, size 0x4
    float collisionTempOffTimer; // offset 0x70, size 0x4
};
// total size: 0x14
class zNPCPerceptionTarget {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct xEnt * targetEnt; // offset 0x4, size 0x4
    float priority; // offset 0x8, size 0x4
    float distSq; // offset 0xC, size 0x4
    float damagedByTimer; // offset 0x10, size 0x4
};
// total size: 0x70
class zNPCPerception {
    // Static members
    static int completeUpdateCount; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zNPCCommon * owner; // offset 0x4, size 0x4
    class zNPCPerceptionTarget target[4]; // offset 0x8, size 0x50
    int totalTargets; // offset 0x58, size 0x4
    struct xEnt * widgetTargetEnt; // offset 0x5C, size 0x4
    struct xEnt * smashMeWidgetTargetEnt; // offset 0x60, size 0x4
    float completeUpdateTimeSince; // offset 0x64, size 0x4
    float completeUpdateTimeLeft; // offset 0x68, size 0x4
    unsigned char widgetAttackForever; // offset 0x6C, size 0x1
};
// total size: 0x14
struct group_asset : public xDynAsset {
    // Static members
    static int VERSION; // size: 0x4

    // Members
    int max_attackers; // offset 0x10, size 0x4
};
// total size: 0x18
class group : public xBase {
    // Members
protected:
    const struct group_asset * asset; // offset 0x10, size 0x4
    int attacking_count; // offset 0x14, size 0x4
};
enum ezBlockDir {
    ezBlockDir_None = 0,
    ezBlockDir_Front = 1,
    ezBlockDir_Around = 2,
};
// total size: 0x0
struct xModelAssetParam {};
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0x14
struct xHierarchyNode {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
};
// total size: 0x8
struct xHierarchTweakInfo {
    // Members
    const char * * boneNames; // offset 0x0, size 0x4
    unsigned char lastCount; // offset 0x4, size 0x1
    signed char hilight; // offset 0x5, size 0x1
    signed char boneCount; // offset 0x6, size 0x1
    unsigned char rootSelected; // offset 0x7, size 0x1
};
// total size: 0x20
struct xHierarchyBound {
    // Members
    struct xSphere master; // offset 0x0, size 0x10
    struct xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
    struct xHierarchTweakInfo tweakInfo; // offset 0x18, size 0x8
};
// total size: 0x20
struct sphereInfo {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    struct xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x8
struct block_data {
    // Members
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0x1C
class tier_queue_allocator {
    // Members
    struct block_data * blocks; // offset 0x0, size 0x4
    unsigned long _unit_size; // offset 0x4, size 0x4
    unsigned long _block_size; // offset 0x8, size 0x4
    unsigned long _block_size_shift; // offset 0xC, size 0x4
    unsigned long _max_blocks; // offset 0x10, size 0x4
    unsigned long _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
// total size: 0x2C
struct joint_data {
    // Members
    int flags; // offset 0x0, size 0x4
    unsigned int born; // offset 0x4, size 0x4
    struct xVec3 loc; // offset 0x8, size 0xC
    struct xVec3 norm; // offset 0x14, size 0xC
    float orient; // offset 0x20, size 0x4
    float scale; // offset 0x24, size 0x4
    float alpha; // offset 0x28, size 0x4
};
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// total size: 0x30
class tier_queue {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
};
// total size: 0x48
struct activity_data {
    // Members
    struct xFXRibbon * owner; // offset 0x0, size 0x4
    struct activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x30
    int curve_index; // offset 0x38, size 0x4
    float ilife; // offset 0x3C, size 0x4
    unsigned int mtime; // offset 0x40, size 0x4
    unsigned int mlife; // offset 0x44, size 0x4
};
// total size: 0xC
struct curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x20
struct config_type {
    // Members
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    const struct curve_node * curve; // offset 0x14, size 0x4
    int curve_size; // offset 0x18, size 0x4
    struct RwRaster * raster; // offset 0x1C, size 0x4
};
// total size: 0x0
struct debug_info {};
// total size: 0x14
struct xFXRibbon {
    // Static members
    static unsigned char need_sort; // size: 0x1
    static int activities_used; // size: 0x4
    static struct activity_data * activities[32]; // size: 0x80
    static class tier_queue_allocator joint_alloc; // size: 0x1C

    // Members
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
private:
    struct activity_data * act; // offset 0x8, size 0x4
    const struct config_type * cfg; // offset 0xC, size 0x4
    struct debug_info * debug; // offset 0x10, size 0x4
};
// total size: 0x38
class PunchEffect {
    // Members
    struct xFXRibbon * up[2]; // offset 0x0, size 0x8
    struct xFXRibbon * right[2]; // offset 0x8, size 0x8
    float lastTime; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float distance[2]; // offset 0x18, size 0x8
    struct xVec3 averageWidth[2]; // offset 0x20, size 0x18
};
// total size: 0x180
struct zCombat {
    // Static members
    static int MAX_HIT_OBJECTS; // size: 0x4

    // Members
    struct xHierarchyBound bounds; // offset 0x0, size 0x20
    unsigned int lastBoundUpdateTime; // offset 0x20, size 0x4
    signed short currentHitPoints; // offset 0x24, size 0x2
    signed short maximumHitPoints; // offset 0x26, size 0x2
    unsigned short stateTableSize; // offset 0x28, size 0x2
    const class zCombatAttack * stateTable; // offset 0x2C, size 0x4
    const struct xAnimState * animationState; // offset 0x30, size 0x4
    const class zCombatAttack * runningAttack; // offset 0x34, size 0x4
    float runningAttackTimer; // offset 0x38, size 0x4
    struct xEnt * lastNPCDamaged; // offset 0x3C, size 0x4
    unsigned char disableMovement; // offset 0x40, size 0x1
    unsigned char runningEffect; // offset 0x41, size 0x1
    unsigned char runningBlur; // offset 0x42, size 0x1
    unsigned char hitting; // offset 0x43, size 0x1
    unsigned char hitEnv; // offset 0x44, size 0x1
    unsigned char hitObject; // offset 0x45, size 0x1
    unsigned char forceReset; // offset 0x46, size 0x1
    unsigned char hitObjectCount; // offset 0x47, size 0x1
    struct xEnt * hitObjects[24]; // offset 0x48, size 0x60
    signed short currentDamage; // offset 0xA8, size 0x2
    signed short lastHitDamage; // offset 0xAA, size 0x2
    enum zHitSource lastHitSource; // offset 0xAC, size 0x4
    enum zHitTarget lastHitTarget; // offset 0xB0, size 0x4
    struct sphereInfo location[4]; // offset 0xB4, size 0x80
    int (* envCollisionCB)(struct xEnt *, struct xSweptSphere *, struct xEnv *); // offset 0x134, size 0x4
    class PunchEffect punchEffect; // offset 0x138, size 0x38
    unsigned int effectParam; // offset 0x170, size 0x4
private:
    struct xEnt * DEBUG_ent; // offset 0x174, size 0x4
    const char * * DEBUG_bones; // offset 0x178, size 0x4
    int DEBUG_boneCount; // offset 0x17C, size 0x4
};
enum ezHitReaction {
    zHR_None = 0,
    zHR_Smash = 1,
    zHR_Damage = 2,
    zHR_FlyBack = 3,
    zHR_FlyBackFar = 4,
    zHR_FlyUp = 5,
    zHR_FlyIceGlide = 6,
    zHR_InstaThaw = 7,
    zHR_Total = 8,
};
enum ezHitReactionState {
    zHRS_Normal = 0,
    zHRS_Frozen = 1,
    zHRS_Total = 2,
};
enum zThrowableSize {
    ezThrowableSize_Small = 0,
    ezThrowableSize_Medium = 1,
    ezThrowableSize_Large = 2,
    ezThrowableSize_Count = 3,
};
enum ezNPCRumbleType {
    ezNPCRT_Tiny = 0,
    ezNPCRT_Small = 1,
    ezNPCRT_Medium = 2,
    ezNPCRT_Large = 3,
    ezNPCRT_Time = 4,
    ezNPCRT_Total = 5,
};
// total size: 0x0
class xNavigationMeshAsset {};
// total size: 0x30
class zMeshCircle {
    // Members
public:
    class zMeshCircle * masterListNext; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float radius2; // offset 0x8, size 0x4
    struct xEnt * ownerEntity; // offset 0xC, size 0x4
    struct xVec3 center; // offset 0x10, size 0xC
    struct xVec2 center2; // offset 0x1C, size 0x8
    class xNavigationMeshAsset * mesh; // offset 0x24, size 0x4
    unsigned int npcActiveFlags; // offset 0x28, size 0x4
    class zMeshCircle * nextNearbyCircle; // offset 0x2C, size 0x4
};
// total size: 0x18
class zMeshPosition {
    // Members
    class xNavigationMeshAsset * mesh; // offset 0x0, size 0x4
    int currentSubMesh; // offset 0x4, size 0x4
    int currentTriangle; // offset 0x8, size 0x4
    struct xVec3 currentPosition; // offset 0xC, size 0xC
};
// total size: 0x0
struct zNPCCombatInitData {};
enum ezNPCOneLinerType {
    ezOLT_Noticing = 0,
    ezOLT_Attacking = 1,
    ezOLT_Retreating = 2,
    ezOLT_TakingDamage = 3,
    ezOLT_PickedUp = 4,
    ezOLT_Frozen = 5,
    ezOLT_Defeated = 6,
    ezOLT_Blocking = 7,
    ezOLT_External = 8,
    ezOLT_Total = 9,
};
enum en_npctyp {
    NPC_TYPE_UNKNOWN = 0,
    NPC_TYPE_THIEF = 1,
    NPC_TYPE_CHEF = 2,
    NPC_TYPE_COUNT = 3,
    NPC_TYPE_FORCE_INT = 2147483647,
};
// total size: 0xDB0
class zNPCCommon : public zNPCBaseIN2 {
    // Static members
    static enum ezHitReaction hitReactionTable[3][2][65]; // size: 0x618

    // Members
public:
    struct xVec3 bound_offset; // offset 0xE4, size 0xC
    float move_speed_multiply; // offset 0xF0, size 0x4
    struct xEntDrive npcDrive; // offset 0x100, size 0xC0
    class zNPCCommonMoveToTransient * moveToTransient; // offset 0x1C0, size 0x4
    class zNPCCommonNukeTransient * nukeTransient; // offset 0x1C4, size 0x4
    class zNPCCommonAnimTest * animTestState; // offset 0x1C8, size 0x4
    class zNPCCommonPlayTaunt * playTauntState; // offset 0x1CC, size 0x4
    class zNPCCommonPlayCustomTransient * playCustomTransient; // offset 0x1D0, size 0x4
    class zNPCCommonInterestingIdle * interestingIdleState; // offset 0x1D4, size 0x4
    // total size: 0x4
    struct /* @class$2688zRemyPlayerActions_cpp */ {
        // Members
        unsigned char human : 1; // offset 0x0, size 0x1
        unsigned char cast_shadow : 1; // offset 0x0, size 0x1
        unsigned char complex_shadow : 1; // offset 0x0, size 0x1
        unsigned char dying : 1; // offset 0x0, size 0x1
        unsigned char not_throw_target : 1; // offset 0x0, size 0x1
        unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
        unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
        unsigned char carried : 1; // offset 0x0, size 0x1
        unsigned char invincible : 1; // offset 0x1, size 0x1
        unsigned char firstUpdate : 1; // offset 0x1, size 0x1
        unsigned char noDamageSmoke : 1; // offset 0x1, size 0x1
        unsigned char pad2 : 5; // offset 0x1, size 0x1
        unsigned char pad3 : 8; // offset 0x2, size 0x1
        unsigned char old_chkby : 8; // offset 0x3, size 0x1
    } commonFlags; // offset 0x1D8, size 0x4
    struct zDebugStoredEvents storedEvents[8]; // offset 0x1E0, size 0x100
    struct zDebugStoredAnimChanges storedAnimChanges[8]; // offset 0x2E0, size 0x840
    class zNPCNavigate * navigation_behavior; // offset 0xB20, size 0x4
    class zBehaviorManager manager; // offset 0xB24, size 0x84
    float freezeValue; // offset 0xBA8, size 0x4
    float freezeMultiplier; // offset 0xBAC, size 0x4
    float freezeColorValue; // offset 0xBB0, size 0x4
    unsigned char skipThaw; // offset 0xBB4, size 0x1
    unsigned char inJumpVolume; // offset 0xBB5, size 0x1
    unsigned char inSlowEnemyCollisionVolume; // offset 0xBB6, size 0x1
    unsigned char canBlock; // offset 0xBB7, size 0x1
    unsigned char canDodge; // offset 0xBB8, size 0x1
    unsigned char canJump; // offset 0xBB9, size 0x1
    unsigned char canTakeDamage; // offset 0xBBA, size 0x1
    unsigned char delayedFinishedSpawningEvent; // offset 0xBBB, size 0x1
    float nukeShockScaleRatio; // offset 0xBBC, size 0x4
    float nukeRotation; // offset 0xBC0, size 0x4
    float stunRotation; // offset 0xBC4, size 0x4
    float stunAxisRotation; // offset 0xBC8, size 0x4
    float nukeShockRotation; // offset 0xBCC, size 0x4
    struct xEnt * killedBy; // offset 0xBD0, size 0x4
    float shieldCurrent; // offset 0xBD4, size 0x4
    float lastAnimTime; // offset 0xBD8, size 0x4
    enum xSndHandle hackE3LoopingSoundHandle; // offset 0xBDC, size 0x4
    struct zNPCBlurInstance * blurInstance; // offset 0xBE0, size 0x4
    class zSwitchLever * lever; // offset 0xBE4, size 0x4
    int leverAction; // offset 0xBE8, size 0x4
    class zNPCPerception perception; // offset 0xBEC, size 0x70
    float shadow_radius; // offset 0xC5C, size 0x4
    signed short incredi_power_points; // offset 0xC60, size 0x2
    int grab_bone; // offset 0xC64, size 0x4
    struct xVec3 grab_offset; // offset 0xC68, size 0xC
    struct xVec3 surroundedMoveTo; // offset 0xC74, size 0xC
    unsigned char surroundedValid; // offset 0xC80, size 0x1
    struct xVec3 shakeModelDisp; // offset 0xC84, size 0xC
    float tweak_scale; // offset 0xC90, size 0x4
    struct xVec3 tweak_offset; // offset 0xC94, size 0xC
    const char * debug_name; // offset 0xCA0, size 0x4
    unsigned char tweak_use_bounding_box; // offset 0xCA4, size 0x1
    unsigned char debug_output; // offset 0xCA5, size 0x1
protected:
    unsigned char off_during_cinematic; // offset 0xCA6, size 0x1
    float NPCFXdt; // offset 0xCA8, size 0x4
    float near_target_radius; // offset 0xCAC, size 0x4
    float mass; // offset 0xCB0, size 0x4
    float cull_distance; // offset 0xCB4, size 0x4
    class group * group_data; // offset 0xCB8, size 0x4
    struct zCombatDamageInfo currentCombatInfo; // offset 0xCBC, size 0x38
    enum ezBlockDir blockDirection; // offset 0xCF4, size 0x4
    signed short bound_bone; // offset 0xCF8, size 0x2
    unsigned short sound_id_offset; // offset 0xCFA, size 0x2
    unsigned short globalParametersSize; // offset 0xCFC, size 0x2
    struct xModelAssetParam * globalParameters; // offset 0xD00, size 0x4
    unsigned short overrideParametersSize; // offset 0xD04, size 0x2
    struct xModelAssetParam * overrideParameters; // offset 0xD08, size 0x4
    float shadow_strength; // offset 0xD0C, size 0x4
    float attackingPlayerTimer; // offset 0xD10, size 0x4
    struct xEnt * attackingPlayerEnt; // offset 0xD14, size 0x4
    struct xGroup * interestPointerGroup; // offset 0xD18, size 0x4
    struct xModelInstance * nukeIcon; // offset 0xD1C, size 0x4
    struct xModelInstance * nukeRings[6]; // offset 0xD20, size 0x18
    struct xModelInstance * stunIcon; // offset 0xD38, size 0x4
    struct xModelInstance * shieldGenerator; // offset 0xD3C, size 0x4
    float destroyShieldGeneratorTimer; // offset 0xD40, size 0x4
    float destroyShieldSparkTimer; // offset 0xD44, size 0x4
    struct xBound oldBound; // offset 0xD48, size 0x4C
    struct xEnt * aboutToBeHitBy; // offset 0xD94, size 0x4
    struct xEnt * lastHitBy; // offset 0xD98, size 0x4
    unsigned char hitByThrowable; // offset 0xD9C, size 0x1
public:
    float originalScale; // offset 0xDA0, size 0x4
    unsigned char ourDeathHasBeenRegistered; // offset 0xDA4, size 0x1
protected:
    float prevAlpha; // offset 0xDA8, size 0x4
};
// total size: 0x0
struct zReactiveAnimationData {};
// total size: 0x0
struct zReactiveGenre {};
// total size: 0x3C
struct zSimpleMgr {
    // Members
    struct xSphere worldBound; // offset 0x0, size 0x10
    float noRenderDist; // offset 0x10, size 0x4
    float lodDist0; // offset 0x14, size 0x4
    float fadeDist; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    struct xModelBucket * * lodBucket[2]; // offset 0x20, size 0x8
    struct RpAtomic * lodAtomic[2]; // offset 0x28, size 0x8
    struct RwMatrixTag * mat; // offset 0x30, size 0x4
    struct xModelInstance * model; // offset 0x34, size 0x4
    struct zEntSimpleObj * ent; // offset 0x38, size 0x4
};
// total size: 0xC
struct zEntAnimData {
    // Members
    union { // inferred
        struct { // inferred
            struct zReactiveAnimationData * reactiveAnimationData; // offset 0x0, size 0x4
            struct zReactiveGenre * reactGenre; // offset 0x4, size 0x4
            struct zSimpleMgr * smgrExtra; // offset 0x8, size 0x4
        };
        struct { // inferred
            void * anim; // offset 0x0, size 0x4
            float animTime; // offset 0x4, size 0x4
        };
    };
};
// total size: 0xC
struct xSimpleObjAsset {
    // Members
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0x0
struct zDestructible {};
// total size: 0x10
struct xEntOpacity {
    // Members
    float startAlpha; // offset 0x0, size 0x4
    float endAlpha; // offset 0x4, size 0x4
    float deltaOpacity; // offset 0x8, size 0x4
    unsigned int oldPipeFlags; // offset 0xC, size 0x4
};
// total size: 0x108
struct zEntSimpleObj : public zEnt, public zEntAnimData {
    // Members
    struct xSimpleObjAsset * sasset; // offset 0xE8, size 0x4
    unsigned int sflags; // offset 0xEC, size 0x4
    struct zDestructible * destructible; // offset 0xF0, size 0x4
    struct zSimpleMgr * smgr; // offset 0xF4, size 0x4
    struct xEntOpacity opacity; // offset 0xF8, size 0x10
};
// total size: 0x70
struct zCarryableObjectAsset : public xDynAsset {
    // Members
    struct xEntAsset entAsset; // offset 0x10, size 0x50
    struct xSimpleObjAsset simpleObjAsset; // offset 0x60, size 0xC
    unsigned int propertyAsset; // offset 0x6C, size 0x4
};
// total size: 0x4
struct /* @class$2753zRemyPlayerActions_cpp */ {
    // Members
    unsigned char destroyDrop; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
};
// total size: 0x1C
struct zCarryableProperty : public xDynAsset {
    // Members
    unsigned int shrapnelID; // offset 0x10, size 0x4
    unsigned int animCode; // offset 0x14, size 0x4
    // total size: 0x4
    struct /* @class$2753zRemyPlayerActions_cpp */ {
        // Members
        unsigned char destroyDrop; // offset 0x0, size 0x1
        unsigned char pad1; // offset 0x1, size 0x1
        unsigned char pad2; // offset 0x2, size 0x1
        unsigned char pad3; // offset 0x3, size 0x1
    } flags; // offset 0x18, size 0x4
};
// total size: 0x118
class zCarryableObject : public zEntSimpleObj {
    // Members
protected:
    struct zCarryableObjectAsset & carryAsset; // offset 0x108, size 0x4
    const struct zCarryableProperty * property; // offset 0x10C, size 0x4
    float time; // offset 0x110, size 0x4
    struct xEnt * carriedBy; // offset 0x114, size 0x4
};
static char __FUNCTION__[12]; // size: 0xC, address: 0x80C04800
// Range: 0x802338E0 -> 0x80233974
// this: r31
unsigned int zRemyPlayerCarry::GetAnimCode() {
    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x80233974 -> 0x802339B8
// this: r30
void zRemyPlayerCarry::UpdateCarryAnimCode() {}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80C0480C
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
struct xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x80C0A2B4
// total size: 0x38
struct xGrid {
    // Members
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    struct xGridBound * * cells; // offset 0x2C, size 0x4
    struct xGridBound * other; // offset 0x30, size 0x4
    int iter_active; // offset 0x34, size 0x4
};
struct xGrid colls_grid; // size: 0x38, address: 0x80B93188
struct xGrid colls_oso_grid; // size: 0x38, address: 0x80B931C0
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x8
struct xCamScreen {
    // Members
    struct RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct PlaybackStruct {};
// total size: 0xC
struct PlaybackBuffers {
    // Members
    struct PlaybackStruct * PlaybackBuf; // offset 0x0, size 0x4
    struct PlaybackStruct * PlaybackCur; // offset 0x4, size 0x4
    struct PlaybackStruct * PlaybackEnd; // offset 0x8, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x0
class xDebugLink {};
// total size: 0x6C0
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    unsigned int PlaybackMode; // offset 0x480, size 0x4
    struct PlaybackBuffers PlaybackFrames[4]; // offset 0x484, size 0x30
    char PlaybackFile[128]; // offset 0x4B4, size 0x80
    unsigned int PlaybackStartFrame; // offset 0x534, size 0x4
    unsigned int PlaybackEndFrame; // offset 0x538, size 0x4
    unsigned int PlaybackResolution; // offset 0x53C, size 0x4
    int MemTrackingLvl; // offset 0x540, size 0x4
    char MemTrackLogFileName[128]; // offset 0x544, size 0x80
    signed short ForceCutscene; // offset 0x5C4, size 0x2
    int useHIPHOP; // offset 0x5C8, size 0x4
    unsigned char NoMusic; // offset 0x5CC, size 0x1
    unsigned char NoCutscenes; // offset 0x5CD, size 0x1
    unsigned char NoPadCheck; // offset 0x5CE, size 0x1
    unsigned char firstStartPressed; // offset 0x5CF, size 0x1
    unsigned char fromLauncher; // offset 0x5D0, size 0x1
    unsigned char skipAssertWithController; // offset 0x5D1, size 0x1
    unsigned char enableHelperAI; // offset 0x5D2, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x5D3, size 0x1
    unsigned char enableDebugControls; // offset 0x5D4, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x5D5, size 0x1
    unsigned char PlaybackFlashDemo; // offset 0x5D6, size 0x1
    unsigned char FlashWIP; // offset 0x5D7, size 0x1
    unsigned char inLoadingScreen; // offset 0x5D8, size 0x1
    unsigned char LoadingScene; // offset 0x5D9, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x5DA, size 0x1
    unsigned char ForceMono; // offset 0x5DB, size 0x1
    unsigned char UnlimitedNukes; // offset 0x5DC, size 0x1
    unsigned int minVSyncCnt; // offset 0x5E0, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x5E4, size 0x1
    unsigned char autoSaveFeature; // offset 0x5E5, size 0x1
    unsigned char skipAsserts; // offset 0x5E6, size 0x1
    unsigned char beforeFirstFrame; // offset 0x5E7, size 0x1
    int asyncLoadingScreen; // offset 0x5E8, size 0x4
    int asyncLoadingFlags; // offset 0x5EC, size 0x4
    char fromLauncherUser[32]; // offset 0x5F0, size 0x20
    class zPlayerContainer players; // offset 0x610, size 0x14
    struct zScene * sceneCur; // offset 0x624, size 0x4
    struct zScene * scenePreload; // offset 0x628, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x62C, size 0x4
    char watermark[127]; // offset 0x630, size 0x7F
    unsigned char watermarkAlpha; // offset 0x6AF, size 0x1
    float watermarkSize; // offset 0x6B0, size 0x4
    class xDebugLink * debugLink; // offset 0x6B4, size 0x4
    unsigned char enableRealTimeUpdate; // offset 0x6B8, size 0x1
    unsigned char showMenuOnBoot; // offset 0x6B9, size 0x1
    unsigned char enableHUD; // offset 0x6BA, size 0x1
    unsigned char skipAnimViewer; // offset 0x6BB, size 0x1
};
// total size: 0x1C
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned int AccelScripts; // offset 0x14, size 0x4
    float CameraFOV; // offset 0x18, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xC
struct zCheckPoint {
    // Members
    unsigned int initCamID; // offset 0x0, size 0x4
    unsigned char * jsp_active; // offset 0x4, size 0x4
    enum xSndEffect currentEffect; // offset 0x8, size 0x4
};
// total size: 0x0
struct zAssetPickupTable {};
// total size: 0xCC
struct xCutsceneMgrAsset : public xBaseAsset {
    // Members
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    unsigned int uSubtitlesID; // offset 0x14, size 0x4
    float startTime[15]; // offset 0x18, size 0x3C
    float endTime[15]; // offset 0x54, size 0x3C
    unsigned int emitID[15]; // offset 0x90, size 0x3C
};
// total size: 0x80
struct xCutsceneAudioTrack {
    // Members
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x1030
struct xCutsceneInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    struct xCutsceneAudioTrack AudioTracks[32]; // offset 0x30, size 0x1000
};
// total size: 0x10
struct xCutsceneData {
    // Members
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
// total size: 0x8
struct xCutsceneBreak {
    // Members
    float Time; // offset 0x0, size 0x4
    int Index; // offset 0x4, size 0x4
};
// total size: 0x10
struct xCutsceneTime {
    // Members
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// total size: 0xC
struct XCSNNosey {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    int flg_nosey; // offset 0x8, size 0x4
};
// total size: 0x4
struct xCutsceneModelHack {
    // Members
    struct xModelPipe * pipe; // offset 0x0, size 0x4
};
// total size: 0x1A8
struct xCutscene {
    // Members
    struct xCutsceneInfo * Info; // offset 0x0, size 0x4
    struct xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    struct xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    struct xCutsceneTime * Play; // offset 0x14, size 0x4
    struct xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    struct tag_xFile File; // offset 0x54, size 0x114
    int AsyncID; // offset 0x168, size 0x4
    void * MemBuf; // offset 0x16C, size 0x4
    void * MemCurr; // offset 0x170, size 0x4
    unsigned int SndStarted; // offset 0x174, size 0x4
    unsigned int SndNumChannel; // offset 0x178, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x17C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x184, size 0x8
    enum xSndHandle SndHandle[2]; // offset 0x18C, size 0x8
    unsigned int SubTitlesID; // offset 0x194, size 0x4
    struct XCSNNosey * cb_nosey; // offset 0x198, size 0x4
    struct xCutsceneModelHack * ModelHack; // offset 0x19C, size 0x4
    unsigned char started; // offset 0x1A0, size 0x1
    unsigned char useDefaultTrack; // offset 0x1A1, size 0x1
    unsigned int useDefaultTrackID; // offset 0x1A4, size 0x4
};
// total size: 0x20
struct xCutsceneMgr : public xBase {
    // Members
    struct xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    struct xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
};
// total size: 0x24
struct zCutsceneMgr : public xCutsceneMgr {
    // Members
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x0
class zEconomics {};
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ezMiniGameTypes {
    MG_GAMETYPE_UNKNOWN = 0,
    MG_GAMETYPE_TYPE1 = 1,
    MG_GAMETYPE_DEFENDTHEBASE = 2,
    MG_GAMETYPE_RATONBALL = 3,
    MG_GAMETYPE_PUFFEROIDS = 4,
    MG_GAMETYPE_GRAPESTOMPER = 5,
    MG_GAMETYPE_CONGALINE = 6,
    MG_GAMETYPE_AVOIDTHESTUFF = 7,
    MG_GAMETYPE_COUNT = 8,
};
// total size: 0x14
struct zMiniGameAsset : public xDynAsset {
    // Members
    unsigned int dispatcherID; // offset 0x10, size 0x4
};
enum eMiniGameState {
    GAMESTATE_GAME_START = 0,
    GAMESTATE_STAGE_START = 1,
    GAMESTATE_GAME_PLAY = 2,
    GAMESTATE_STAGE_END = 3,
    GAMESTATE_GAME_END = 4,
};
// total size: 0x2C
class zMiniGameBase : public xBase {
    // Static members
    static class zMiniGameBase * currentMiniGame; // size: 0x4

    // Members
protected:
    enum ezMiniGameTypes gameType; // offset 0x10, size 0x4
    struct zMiniGameAsset * asset; // offset 0x14, size 0x4
    int playerCount; // offset 0x18, size 0x4
    unsigned char gameDone; // offset 0x1C, size 0x1
    struct xBase * dispatcher; // offset 0x20, size 0x4
    enum eMiniGameState gameState; // offset 0x24, size 0x4
public:
    void * __vptr$; // offset 0x28, size 0x4
};
// total size: 0xC
class zMiniGameManager : public zLightweightSystemBase {
    // Members
    class zMiniGameBase * currentGame; // offset 0x4, size 0x4
    int userSetPlayerCount; // offset 0x8, size 0x4
};
// total size: 0x798
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x6C0, size 0x1C
    struct zCheckPoint checkPoint; // offset 0x6DC, size 0xC
    unsigned int playerTag[9]; // offset 0x6E8, size 0x24
    unsigned char playerLoaded; // offset 0x70C, size 0x1
    unsigned char invertJoystick; // offset 0x70D, size 0x1
    float timeMultiplier; // offset 0x710, size 0x4
    float timeMultiplierTarget; // offset 0x714, size 0x4
    float XPMultiplier; // offset 0x718, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x71C, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x720, size 0x4
    char startDebugMode[32]; // offset 0x724, size 0x20
    unsigned int noMovies; // offset 0x744, size 0x4
    unsigned int boundUpdateTime; // offset 0x748, size 0x4
    unsigned char draw_player_after_fx; // offset 0x74C, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x74D, size 0x1
    unsigned char enableFriendlyFly; // offset 0x74E, size 0x1
    unsigned char stopCurrentConversation; // offset 0x74F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x750, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x754, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x758, size 0xC
    struct xVec3 cameraLookAt; // offset 0x764, size 0xC
    int cameraAIFocus; // offset 0x770, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x774, size 0x4
    class zEconomics * economics; // offset 0x778, size 0x4
    class zMiniGameManager * mgManager; // offset 0x77C, size 0x4
    unsigned char fmvJustFinished; // offset 0x780, size 0x1
    unsigned int initialRemyPowerUp[5]; // offset 0x784, size 0x14
};
struct zGlobals globals; // size: 0x798, address: 0x80B9EF78
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0xC
class grab_collide_callback {
    // Functions
    static grab_collide_callback(struct zPlayer * player, unsigned int & objectCount, class zCarryableObject * * objects);

    static unsigned char operator()(struct xEnt & ent);

    // Members
    struct zPlayer * player; // offset 0x0, size 0x4
    unsigned int & objectCount; // offset 0x4, size 0x4
    class zCarryableObject * * objects; // offset 0x8, size 0x4
};
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0xC
struct /* @class$1262zRemyPlayerActions_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$1262zRemyPlayerActions_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// Range: 0x802339B8 -> 0x80233DC0
// this: r25
void zRemyPlayerCarry::TryGrab() {
    // Local variables
    unsigned int objectCount; // r1+0xC
    class zCarryableObject * objects[32]; // r1+0x170
    struct xSphere normSphere; // r1+0x50
    struct xSphere lowSphere; // r1+0x40
    struct xVec3 offset; // r1+0x34
    struct xBound normBound; // r1+0x124
    struct xBound lowBound; // r1+0xD8
    class grab_collide_callback cb; // r1+0x28
    class zCarryableObject * bestObject; // r28
    unsigned int i; // r27
    class zCarryableObject * carryableObject; // r26
    struct xVec3 center; // r1+0x1C
    struct xVec3 disp; // r1+0x10
    float dist; // f0
    struct xRay3 ray; // r1+0x60
    struct xCollis rayCollis; // r1+0x84
    float newDot; // f0

    // References
    // -> static char __FUNCTION__[8];
    // -> static unsigned char drawGrabCheck;
    // -> static float MAX_GRAB_DIST;
    // -> struct zGlobals globals;
    // -> struct xGrid colls_oso_grid;
    // -> struct xGrid colls_grid;
    // -> struct xColor_tag g_PIMP_GOLD;
    // -> static float CARRY_CHECK_RADIUS;
    // -> static float CARRY_FORWARD_OFFSET;
    // -> static float CARRY_HEIGHT_OFFSET;
}

// Range: 0x80233DC0 -> 0x80233DD0
// this: r0
static grab_collide_callback::grab_collide_callback(struct zPlayer * player /* r0 */, unsigned int & objectCount /* r0 */, class zCarryableObject * * objects /* r0 */) {}

// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
// Range: 0x80233DD0 -> 0x80233E18
// this: r0
void zRemyPlayerCarry::GrabCarryBeforeEnter(struct xAnimPlay * play /* r30 */, struct xAnimState * state /* r31 */) {}

// total size: 0xC
class zRemyPlayerUseGeneric : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void UseBeforeEnter(struct xAnimPlay * play, struct xAnimState * state);

    void BeginHide();

    void Begin();

    void Update(float dt);

    void EndHide();

    void End();
};
// Range: 0x80233E18 -> 0x80233ED4
// this: r30
void zRemyPlayerUseGeneric::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80233ED4 -> 0x80233F1C
// this: r3
void zRemyPlayerUseGeneric::AddActionTransitions(struct xAnimTable * table /* r31 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r0
}

// Range: 0x80233F1C -> 0x80233F68
void zRemyPlayerUseGeneric::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04814
// Range: 0x80233F68 -> 0x80234028
// this: r30
unsigned int zRemyPlayerUseGeneric::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x20
struct zCarryableGenericUseProperty : public zCarryableProperty {
    // Members
    unsigned int useAnimCode; // offset 0x1C, size 0x4
};
// Range: 0x80234028 -> 0x802340B0
// this: r28
void zRemyPlayerUseGeneric::UseBeforeEnter(struct xAnimPlay * play /* r29 */, struct xAnimState * state /* r30 */) {
    // Local variables
    struct zCarryableGenericUseProperty * useProperty; // r0
}

// Range: 0x802340B0 -> 0x802340D4
// this: r0
void zRemyPlayerUseGeneric::BeginHide() {}

// Range: 0x802340D4 -> 0x80234134
// this: r31
void zRemyPlayerUseGeneric::Begin() {
    // Local variables
    struct zCarryableGenericUseProperty * useProperty; // r0
}

// Range: 0x80234134 -> 0x80234164
// this: r3
void zRemyPlayerUseGeneric::Update(float dt /* f0 */) {}

// Range: 0x80234164 -> 0x80234188
// this: r0
void zRemyPlayerUseGeneric::EndHide() {}

// Range: 0x80234188 -> 0x802341D4
// this: r31
void zRemyPlayerUseGeneric::End() {
    // Local variables
    struct zCarryableGenericUseProperty * useProperty; // r0
}

// total size: 0xC
class zRemyPlayerUseSwipe : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void UseBeforeEnter(struct xAnimPlay * play, struct xAnimState * state);

    void Update(float dt);

    void Begin();
};
// Range: 0x802341D4 -> 0x80234294
// this: r30
void zRemyPlayerUseSwipe::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80234294 -> 0x802342DC
// this: r3
void zRemyPlayerUseSwipe::AddActionTransitions(struct xAnimTable * table /* r31 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r0
}

// Range: 0x802342DC -> 0x80234328
void zRemyPlayerUseSwipe::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04820
// Range: 0x80234328 -> 0x802343E8
// this: r30
unsigned int zRemyPlayerUseSwipe::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x20
struct zCarryableSwipeUseProperty : public zCarryableProperty {
    // Members
    unsigned int useAnimCode; // offset 0x1C, size 0x4
};
static struct xVec3 SWIPE_BONE_OFFSET; // size: 0xC, address: 0x80C0DF4C
// Range: 0x802343E8 -> 0x80234448
static void InitializeSwipeAttack(class zCombatAttack * attack /* r8 */, unsigned int stateID /* r0 */, unsigned short SwipeBone /* r0 */, void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *) /* r0 */) {
    // References
    // -> static struct xVec3 SWIPE_BONE_OFFSET;
}

// Range: 0x80234448 -> 0x8023447C
void zRemyPlayerUseSwipe::AddAttacks(class zCombatAttack * attackStates /* r0 */, void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *) /* r6 */) {}

// Range: 0x8023447C -> 0x80234504
// this: r28
void zRemyPlayerUseSwipe::UseBeforeEnter(struct xAnimPlay * play /* r29 */, struct xAnimState * state /* r30 */) {
    // Local variables
    struct zCarryableSwipeUseProperty * useProperty; // r0
}

// Range: 0x80234504 -> 0x80234534
// this: r3
void zRemyPlayerUseSwipe::Update(float dt /* f0 */) {}

// Range: 0x80234534 -> 0x80234560
// this: r0
void zRemyPlayerUseSwipe::Begin() {}

// total size: 0xC
class zRemyPlayerUseHide : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void Update(float dt);

    void Begin();

    void End();
};
// Range: 0x80234560 -> 0x80234724
// this: r30
void zRemyPlayerUseHide::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80234724 -> 0x80234790
// this: r3
void zRemyPlayerUseHide::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
}

// Range: 0x80234790 -> 0x802347F4
void zRemyPlayerUseHide::AddInternalTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x802347F4 -> 0x80234840
void zRemyPlayerUseHide::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C0482C
// Range: 0x80234840 -> 0x80234900
// this: r30
unsigned int zRemyPlayerUseHide::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x20
struct zCarryableHideUseProperty : public zCarryableProperty {
    // Members
    unsigned int useAnimCode; // offset 0x1C, size 0x4
};
// Range: 0x80234900 -> 0x80234978
// this: r31
void zRemyPlayerUseHide::Update(float dt /* f0 */) {}

// Range: 0x80234978 -> 0x802349BC
// this: r31
void zRemyPlayerUseHide::Begin() {}

// Range: 0x802349BC -> 0x80234A00
// this: r31
void zRemyPlayerUseHide::End() {}

static float sREMYUSEATTRACT_RADIUS; // size: 0x4, address: 0x80C0902C
// total size: 0xC
class zRemyPlayerUseAttract : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void Update(float dt);

    void Begin();

    void End();
};
// Range: 0x80234A00 -> 0x80234BC4
// this: r30
void zRemyPlayerUseAttract::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80234BC4 -> 0x80234C30
// this: r3
void zRemyPlayerUseAttract::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
}

// Range: 0x80234C30 -> 0x80234C94
void zRemyPlayerUseAttract::AddInternalTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x80234C94 -> 0x80234CE0
void zRemyPlayerUseAttract::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04838
// Range: 0x80234CE0 -> 0x80234DA0
// this: r30
unsigned int zRemyPlayerUseAttract::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x1C
struct zCarryableAttractUseProperty : public zCarryableProperty {};
// Range: 0x80234DA0 -> 0x80234E5C
// this: r31
void zRemyPlayerUseAttract::Update(float dt /* f31 */) {
    // References
    // -> static float sREMYUSEATTRACT_RADIUS;
}

// Range: 0x80234E5C -> 0x80234EB0
// this: r31
void zRemyPlayerUseAttract::Begin() {
    // References
    // -> static float sREMYUSEATTRACT_RADIUS;
}

// Range: 0x80234EB0 -> 0x80234EFC
// this: r31
void zRemyPlayerUseAttract::End() {}

// total size: 0xC
class zRemyPlayerUseRepel : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void Update(float dt);

    void Begin();

    void End();
};
// Range: 0x80234EFC -> 0x802350C0
// this: r30
void zRemyPlayerUseRepel::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x802350C0 -> 0x8023512C
// this: r3
void zRemyPlayerUseRepel::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
}

// Range: 0x8023512C -> 0x80235190
void zRemyPlayerUseRepel::AddInternalTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x80235190 -> 0x802351DC
void zRemyPlayerUseRepel::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04844
// Range: 0x802351DC -> 0x8023529C
// this: r30
unsigned int zRemyPlayerUseRepel::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x1C
struct zCarryableRepelUseProperty : public zCarryableProperty {};
// Range: 0x8023529C -> 0x80235358
// this: r31
void zRemyPlayerUseRepel::Update(float dt /* f31 */) {
    // References
    // -> static float sREMYUSEATTRACT_RADIUS;
}

// Range: 0x80235358 -> 0x802353AC
// this: r31
void zRemyPlayerUseRepel::Begin() {
    // References
    // -> static float sREMYUSEATTRACT_RADIUS;
}

// Range: 0x802353AC -> 0x802353F8
// this: r31
void zRemyPlayerUseRepel::End() {}

float REMYGLIDE_JUMPVEL; // size: 0x4, address: 0x80C04850
float REMYGLIDE_GLIDEVEL; // size: 0x4, address: 0x80C04854
float REMYGLIDE_FLYVEL; // size: 0x4, address: 0x80C04858
float REMYGLIDE_ACCEL; // size: 0x4, address: 0x80C0485C
float REMYGLIDE_INITVEL; // size: 0x4, address: 0x80C04860
// total size: 0xC
class zRemyPlayerUseGlide : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    unsigned int StopCheck();

    void Update(float dt);

    void Timestep();

    void Begin();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    void End();
};
// Range: 0x802353F8 -> 0x80235510
void zRemyPlayerUseGlide::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> float REMYGLIDE_INITVEL;
    // -> float REMYGLIDE_ACCEL;
    // -> float REMYGLIDE_FLYVEL;
    // -> float REMYGLIDE_GLIDEVEL;
    // -> float REMYGLIDE_JUMPVEL;
}

// Range: 0x80235510 -> 0x802356D4
// this: r30
void zRemyPlayerUseGlide::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x802356D4 -> 0x80235788
// this: r3
void zRemyPlayerUseGlide::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
}

// Range: 0x80235788 -> 0x802357EC
void zRemyPlayerUseGlide::AddInternalTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x802357EC -> 0x80235838
void zRemyPlayerUseGlide::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04864
// Range: 0x80235838 -> 0x80235914
// this: r30
unsigned int zRemyPlayerUseGlide::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x24
struct zCarryableGlideUseProperty : public zCarryableProperty {
    // Members
    unsigned int DirectionOfFlight; // offset 0x1C, size 0x4
    float timer; // offset 0x20, size 0x4
};
// Range: 0x80235914 -> 0x8023594C
// this: r0
unsigned int zRemyPlayerUseGlide::StopCheck() {
    // Local variables
    unsigned int ret; // r0
}

// Range: 0x8023594C -> 0x80235A50
// this: r31
void zRemyPlayerUseGlide::Update(float dt /* f30 */) {
    // Local variables
    struct xVec3 position; // r1+0x8
    float theTime; // f0
}

// Range: 0x80235A50 -> 0x80235B38
// this: r30
void zRemyPlayerUseGlide::Timestep() {
    // Local variables
    struct zCarryableGlideUseProperty * useProperty; // r0
    char timerText[32]; // r1+0x14
    struct xVec3 pos; // r1+0x8
}

// Range: 0x80235B38 -> 0x80235C0C
// this: r30
void zRemyPlayerUseGlide::Begin() {
    // Local variables
    struct zCarryableGlideUseProperty * useProperty; // r0

    // References
    // -> float REMYGLIDE_JUMPVEL;
}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80C04870
// Range: 0x80235C0C -> 0x80235D94
// this: r29
void zRemyPlayerUseGlide::Move(struct xScene * s /* r30 */, float dt /* f30 */, struct xEntFrame * frame /* r31 */) {
    // Local variables
    float glideVel; // f31
    struct zCarryableGlideUseProperty * useProperty; // r0

    // References
    // -> float REMYGLIDE_ACCEL;
    // -> struct zGlobals globals;
    // -> float REMYGLIDE_INITVEL;
    // -> static char __FUNCTION__[5];
    // -> float REMYGLIDE_FLYVEL;
    // -> float REMYGLIDE_GLIDEVEL;
}

// Range: 0x80235D94 -> 0x80235DCC
// this: r0
void zRemyPlayerUseGlide::End() {}

float PLAYER_MAX_STICK_SPEED; // size: 0x4, address: 0x80C04878
float PLAYER_TURN_SPEED; // size: 0x4, address: 0x80C0487C
float PLAYER_COLLISION_DECEL; // size: 0x4, address: 0x80C04880
float PLAYER_MAX_VEL; // size: 0x4, address: 0x80C04884
float PLAYER_FRICTION; // size: 0x4, address: 0x80C04888
float PLAYER_BOUNCE; // size: 0x4, address: 0x80C0488C
float PLAYER_ACCEL; // size: 0x4, address: 0x80C04890
// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
struct tweak_callback cb_tweak_convert_degrees; // size: 0x28, address: 0x803A9AF0
// total size: 0x40
class zRemyPlayerUseRoll : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    void Update(float dt);

    void Begin();

    void UpdateOrientation(float dt);

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    unsigned char CollisionResponse(const struct xVec3 & currentDir, const struct SphereCollisionResults & sceneCollide, struct xVec3 & responseDpos);

    void End();

    // Members
public:
    class zBallForces forces; // offset 0xC, size 0x34
};
// Range: 0x80235DCC -> 0x80235EE8
void zRemyPlayerUseRoll::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> float PLAYER_BOUNCE;
    // -> float PLAYER_FRICTION;
    // -> float PLAYER_ACCEL;
    // -> float PLAYER_MAX_VEL;
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> float PLAYER_TURN_SPEED;
}

// Range: 0x80235EE8 -> 0x802360AC
// this: r30
void zRemyPlayerUseRoll::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x802360AC -> 0x80236118
// this: r3
void zRemyPlayerUseRoll::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
}

// Range: 0x80236118 -> 0x8023617C
void zRemyPlayerUseRoll::AddInternalTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x8023617C -> 0x802361C8
void zRemyPlayerUseRoll::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C04894
// Range: 0x802361C8 -> 0x80236288
// this: r30
unsigned int zRemyPlayerUseRoll::StartCheck() {
    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x1C
struct zCarryableRollUseProperty : public zCarryableProperty {};
// Range: 0x80236288 -> 0x802362B8
// this: r3
void zRemyPlayerUseRoll::Update(float dt /* f0 */) {}

// Range: 0x802362B8 -> 0x80236320
// this: r31
void zRemyPlayerUseRoll::Begin() {}

// total size: 0x34
class zBallForces {
    // Functions
    void Update(struct xMat4x3 * directionMat, float xInput, float zInput, float dt);

    void Apply(struct xEntFrame * frame, float dt);

    // Members
protected:
    struct xVec3 velocity; // offset 0x0, size 0xC
    struct xVec3 stickVec; // offset 0xC, size 0xC
    struct xVec3 turboVec; // offset 0x18, size 0xC
    struct xVec3 collisionVec; // offset 0x24, size 0xC
    struct zPlayer * ourPlayer; // offset 0x30, size 0x4
};
// Range: 0x80236320 -> 0x80236408
// this: r31
void zRemyPlayerUseRoll::UpdateOrientation(float dt /* f31 */) {
    // Local variables
    struct xVec3 stickVec; // r1+0x1C
    struct xVec3 worldStickVec; // r1+0x10
    float angle; // r1+0xC
    float mag; // r1+0x8
    const struct xMat4x3 & camMat; // r4
    float angleDiff; // f0

    // References
    // -> float PLAYER_TURN_SPEED;
    // -> struct xVec3 m_Null;
}

// Range: 0x80236408 -> 0x802364E4
// this: r28
void zRemyPlayerUseRoll::Move(struct xScene * s /* r29 */, float dt /* f31 */, struct xEntFrame * frame /* r30 */) {}

float sTimeElapsed; // size: 0x4, address: 0x80C07E04
// Range: 0x802364E4 -> 0x8023659C
// this: r30
unsigned char zRemyPlayerUseRoll::CollisionResponse(const struct xVec3 & currentDir /* r0 */, const struct SphereCollisionResults & sceneCollide /* r31 */, struct xVec3 & responseDpos /* r0 */) {
    // Local variables
    struct xVec3 velocityVector; // r1+0x20
    struct xVec3 bounceVector; // r1+0x14

    // References
    // -> float sTimeElapsed;
    // -> float PLAYER_BOUNCE;
}

// Range: 0x8023659C -> 0x80236610
static void ReflectVector(struct xVec3 & o /* r30 */, const struct xVec3 & v /* r0 */, const struct xVec3 & unitAxis /* r31 */) {
    // Local variables
    struct xVec3 v_1; // r1+0x8
}

// Range: 0x80236610 -> 0x8023663C
// this: r0
void zRemyPlayerUseRoll::End() {}

// total size: 0xC
class zRemyPlayerGrabWhif : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    void Update(float dt);

    void AddStandardTransitionsFrom(struct xAnimTable * table, const char * fromStates);
};
// Range: 0x8023663C -> 0x80236694
// this: r0
void zRemyPlayerGrabWhif::AddStates(struct xAnimTable * table /* r0 */) {}

// Range: 0x80236694 -> 0x8023670C
// this: r30
void zRemyPlayerGrabWhif::AddActionTransitions(struct xAnimTable * table /* r31 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r0
}

// Range: 0x8023670C -> 0x80236784
// this: r31
void zRemyPlayerGrabWhif::Update(float dt /* f31 */) {}

// Range: 0x80236784 -> 0x802367C0
// this: r0
void zRemyPlayerGrabWhif::AddStandardTransitionsFrom(struct xAnimTable * table /* r0 */, const char * fromStates /* r0 */) {}

// Range: 0x802367C0 -> 0x8023680C
void zRemyPlayerGrabWhif::AddPunchTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */) {}

// Range: 0x8023680C -> 0x80236814
unsigned int zRemyPlayerGrabWhif::StartCheck() {}

// Range: 0x80236814 -> 0x80236860
void zRemyPlayerGrabWhif::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// total size: 0xC
class zRemyPlayerIdle : public zPlayerIdle {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
// Range: 0x80236860 -> 0x802368C8
// this: r30
void zRemyPlayerIdle::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// total size: 0xC
class zPlayerIdle : public zCommonPlayerAction {};
// total size: 0xC
class zRemyPlayerSkidStop : public zPlayerSkidStop {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
// Range: 0x802368C8 -> 0x80236930
// this: r30
void zRemyPlayerSkidStop::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// total size: 0xC
class zPlayerSkidStop : public zCommonPlayerAction {};
// total size: 0xC
class zRemyPlayerSlip : public zPlayerSlip {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
// Range: 0x80236930 -> 0x80236998
// this: r30
void zRemyPlayerSlip::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// total size: 0xC
class zPlayerSlip : public zCommonPlayerAction {};
// total size: 0xC
class zRemyPlayerWalk : public zPlayerWalk {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
// Range: 0x80236998 -> 0x80236A00
// this: r30
void zRemyPlayerWalk::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// total size: 0xC
class zPlayerWalk : public zCommonPlayerAction {};
// total size: 0x10
class zRemyPlayerRun : public zPlayerRun {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
// Range: 0x80236A00 -> 0x80236A68
// this: r30
void zRemyPlayerRun::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// total size: 0x10
class zPlayerRun : public zCommonPlayerAction {
    // Members
protected:
    float runTimer; // offset 0xC, size 0x4
};
// total size: 0xC
class zRemyPlayerPunch : public zPlayerPunch {
    // Functions
    void AddActionTransitions(struct xAnimTable * table);
};
enum zCommonPlayerUpgradeLevel {
    ezCommonPlayerUpgradeLevel_Normal = 0,
    ezCommonPlayerUpgradeLevel_Level1 = 1,
    ezCommonPlayerUpgradeLevel_Level2 = 2,
    ezCommonPlayerUpgradeLevel_Count = 3,
};
// Range: 0x80236A68 -> 0x80236AF0
void zRemyPlayerPunch::SetUpgradeLevel(class zCombatAttack * attackStates /* r0 */, enum zCommonPlayerUpgradeLevel level /* r0 */) {
    // References
    // -> static signed short szRemyHitPoints_Punch4[3];
    // -> static signed short szRemyHitPoints_Punch3[3];
    // -> static signed short szRemyHitPoints_Punch2[3];
    // -> static signed short szRemyHitPoints_Punch1[3];
}

// Range: 0x80236AF0 -> 0x80236DC4
void zRemyPlayerPunch::AddAttacks(class zCombatAttack * attackStates /* r30 */, void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *) /* r31 */) {
    // References
    // -> static signed short szRemyHitPoints_Punch4[3];
    // -> static signed short szRemyHitPoints_Punch3[3];
    // -> static signed short szRemyHitPoints_Punch2[3];
    // -> static signed short szRemyHitPoints_Punch1[3];
}

// Range: 0x80236DC4 -> 0x80236E4C
// this: r29
void zRemyPlayerPunch::AddActionTransitions(struct xAnimTable * table /* r30 */) {
    // Local variables
    class zRemyPlayerCarry * carry; // r31
    class zRemyPlayerGrabWhif * whif; // r31
}

// total size: 0xC
class zPlayerPunch : public zCommonPlayerAction {};
// total size: 0x28
class zRemyPlayerDodge : public zPlayerDodge {};
// Range: 0x80236E4C -> 0x80236FB0
// this: r30
void zBallForces::Update(struct xMat4x3 * directionMat /* r31 */, float xInput /* f29 */, float zInput /* f30 */, float dt /* f31 */) {
    // Local variables
    float accel; // f1
    float len; // f0
    float decel; // f1
    float vMag; // f0

    // References
    // -> float PLAYER_MAX_VEL;
    // -> float PLAYER_COLLISION_DECEL;
    // -> float PLAYER_FRICTION;
    // -> float PLAYER_MAX_STICK_SPEED;
    // -> float PLAYER_ACCEL;
}

// Range: 0x80236FB0 -> 0x80236FE4
// this: r0
void zBallForces::Apply(struct xEntFrame * frame /* r0 */, float dt /* f0 */) {}

enum DodgeState {
    DODGE_NONE = 0,
    DODGE_START = 1,
    DODGE_EXECUTE = 2,
};
enum DodgeDir {
    DODGE_FRONT = 0,
    DODGE_LEFT = 1,
    DODGE_BACK = 2,
    DODGE_RIGHT = 3,
};
// total size: 0x28
class zPlayerDodge : public zPlayerAction {
    // Members
protected:
    enum DodgeState dodgeState; // offset 0xC, size 0x4
    enum DodgeDir dodgeDir; // offset 0x10, size 0x4
    float dodgeDRot; // offset 0x14, size 0x4
    unsigned char dodgeBlurring; // offset 0x18, size 0x1
    float dodgeRollVelocity; // offset 0x1C, size 0x4
    float dodgeRunVelocity; // offset 0x20, size 0x4
    float dodgeTimer; // offset 0x24, size 0x4
};
// total size: 0xC
class zPlayerActionManager {
    // Members
protected:
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
};
// total size: 0xC
class zPlayerAction {
    // Members
protected:
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    struct zPlayer * player; // offset 0x4, size 0x4
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0x58
struct {} zRemyPlayerPunch::__vtable; // size: 0x58, address: 0x80440698
// total size: 0x54
struct {} zRemyPlayerRun::__vtable; // size: 0x54, address: 0x804406F0
// total size: 0x54
struct {} zRemyPlayerWalk::__vtable; // size: 0x54, address: 0x80440744
// total size: 0x54
struct {} zRemyPlayerSlip::__vtable; // size: 0x54, address: 0x80440798
// total size: 0x54
struct {} zRemyPlayerSkidStop::__vtable; // size: 0x54, address: 0x804407EC
// total size: 0x54
struct {} zRemyPlayerIdle::__vtable; // size: 0x54, address: 0x80440840
// total size: 0x54
struct {} zRemyPlayerGrabWhif::__vtable; // size: 0x54, address: 0x80440894
// total size: 0x54
struct {} zRemyPlayerUseRoll::__vtable; // size: 0x54, address: 0x804408E8
// total size: 0x54
struct {} zRemyPlayerUseGlide::__vtable; // size: 0x54, address: 0x8044093C
// total size: 0x54
struct {} zRemyPlayerUseRepel::__vtable; // size: 0x54, address: 0x80440990
// total size: 0x54
struct {} zRemyPlayerUseAttract::__vtable; // size: 0x54, address: 0x804409E4
// total size: 0x54
struct {} zRemyPlayerUseHide::__vtable; // size: 0x54, address: 0x80440A38
// total size: 0x54
struct {} zRemyPlayerUseSwipe::__vtable; // size: 0x54, address: 0x80440A8C
// total size: 0x54
struct {} zRemyPlayerUseGeneric::__vtable; // size: 0x54, address: 0x80440AE0
// total size: 0x54
struct {} zRemyPlayerCarry::__vtable; // size: 0x54, address: 0x80440B34
// total size: 0xC
struct xGridIterator {
    // Members
    struct xGridBound * * listhead; // offset 0x0, size 0x4
    struct xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80236FE4 -> 0x8023708C
// this: r30
static unsigned char grab_collide_callback::operator()(struct xEnt & ent /* r31 */) {}


