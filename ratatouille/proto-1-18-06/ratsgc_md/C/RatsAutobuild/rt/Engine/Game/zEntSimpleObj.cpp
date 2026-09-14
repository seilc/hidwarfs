/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zEntSimpleObj.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009F8C4 -> 0x800A16A0
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
static unsigned int sMgrCount; // size: 0x4, address: 0x803C1A88
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
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
union /* @class$617zEntSimpleObj_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$617zEntSimpleObj_cpp */ {
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
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0xC
struct /* @class$806zEntSimpleObj_cpp */ {
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
        struct /* @class$806zEntSimpleObj_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
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
// total size: 0x28
struct xSurface : public xBase {
    // Members
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        struct xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
// total size: 0x4
struct /* @class$786zEntSimpleObj_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
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
// total size: 0xD0
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
    struct /* @class$786zEntSimpleObj_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
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
// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x0
struct zReactiveAnimationData {};
// total size: 0x0
struct zReactiveGenre {};
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
// total size: 0x8
struct xDestructibleAssetAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0x34
struct xDestructibleAssetState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int shrapnelID; // offset 0x8, size 0x4
    unsigned int shrapnelhitID; // offset 0xC, size 0x4
    unsigned int soundgroupidleID; // offset 0x10, size 0x4
    unsigned int soundgroupfxID; // offset 0x14, size 0x4
    unsigned int soundgrouphitID; // offset 0x18, size 0x4
    unsigned int soundgroupfxIDswitch; // offset 0x1C, size 0x4
    unsigned int soundgrouphitIDswitch; // offset 0x20, size 0x4
    unsigned int rumbleIDhit; // offset 0x24, size 0x4
    unsigned int rumbleIDswitch; // offset 0x28, size 0x4
    unsigned int fx_flags; // offset 0x2C, size 0x4
    struct xDestructibleAssetAttachedAnimList * animlist; // offset 0x30, size 0x4
};
// total size: 0x40
struct xDestructibleAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nstates; // offset 0x4, size 0x4
    unsigned int hit_points; // offset 0x8, size 0x4
    unsigned int hit_filter; // offset 0xC, size 0x4
    unsigned int hit_filter_excluded; // offset 0x10, size 0x4
    unsigned int healthPoints; // offset 0x14, size 0x4
    unsigned int expPoints; // offset 0x18, size 0x4
    float healthChance; // offset 0x1C, size 0x4
    float expChance; // offset 0x20, size 0x4
    unsigned int launch_flag; // offset 0x24, size 0x4
    unsigned int behaviour; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    unsigned int soundgroupidleID; // offset 0x30, size 0x4
    float respawn; // offset 0x34, size 0x4
    unsigned char target_priority; // offset 0x38, size 0x1
    struct xDestructibleAssetState * states; // offset 0x3C, size 0x4
};
enum iSndGroupHandle {
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
    unsigned char emit_pad[3]; // offset 0x4D, size 0x3
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
struct /* @class$1232zEntSimpleObj_cpp */ {
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
    struct /* @class$1232zEntSimpleObj_cpp */ {
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
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$751zEntSimpleObj_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$752zEntSimpleObj_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$753zEntSimpleObj_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$754zEntSimpleObj_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$755zEntSimpleObj_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$756zEntSimpleObj_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$757zEntSimpleObj_cpp */ {
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
        struct /* @class$751zEntSimpleObj_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$752zEntSimpleObj_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$753zEntSimpleObj_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$754zEntSimpleObj_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$755zEntSimpleObj_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$756zEntSimpleObj_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$757zEntSimpleObj_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
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
// total size: 0x10
struct xResponseCurve {
    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
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
// total size: 0x38
struct effectAsset : public xDynAsset {
    // Members
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int id; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char type; // offset 0x1D, size 0x1
    unsigned char rumbleInPause; // offset 0x1E, size 0x1
    unsigned char pad; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    float shakeMagnitude; // offset 0x28, size 0x4
    float shakeCycleMax; // offset 0x2C, size 0x4
    float shakeRotationalMagnitude; // offset 0x30, size 0x4
    unsigned char shakeY; // offset 0x34, size 0x1
};
// total size: 0x18
struct emitterBase : public xBase {
    // Members
    struct effectAsset * pEffectAsset; // offset 0x10, size 0x4
    void * __vptr$; // offset 0x14, size 0x4
};
// total size: 0x28
struct sphericalEmitterAsset : public xDynAsset {
    // Members
    unsigned int effectID; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    struct xVec3 position; // offset 0x18, size 0xC
    unsigned char onlyRumbleOnY; // offset 0x24, size 0x1
    unsigned char fallOff; // offset 0x25, size 0x1
    unsigned char onlyOnFloor; // offset 0x26, size 0x1
};
// total size: 0x20
struct sphericalEmitter : public emitterBase {
    // Members
    struct sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0x8
struct zDestructibleStateAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    void * animData; // offset 0x4, size 0x4
};
// total size: 0x10
struct zDestructibleStateFXParams {
    // Members
    float timer; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    struct zParEmitter * emitter; // offset 0x8, size 0x4
    unsigned int (* fn)(float); // offset 0xC, size 0x4
};
// total size: 0x8
struct zDestructibleStateFXList {
    // Members
    unsigned int nfx; // offset 0x0, size 0x4
    struct zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x44
struct zDestructibleState {
    // Members
    struct xModelInstance * model; // offset 0x0, size 0x4
    struct zShrapnelAsset * shrapnel; // offset 0x4, size 0x4
    struct zShrapnelAsset * shrapnelhit; // offset 0x8, size 0x4
    unsigned int percent; // offset 0xC, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x10, size 0x4
    enum iSndGroupHandle sg_handle_hit; // offset 0x14, size 0x4
    enum iSndGroupHandle sg_handle_hit_switch; // offset 0x18, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x1C, size 0x4
    enum xSndHandle sh_handle_hit; // offset 0x20, size 0x4
    enum xSndHandle sh_handle_hit_switch; // offset 0x24, size 0x4
    unsigned int sg_fx_id; // offset 0x28, size 0x4
    unsigned int sg_fx_id_switch; // offset 0x2C, size 0x4
    struct sphericalEmitter * rumbleHit; // offset 0x30, size 0x4
    struct sphericalEmitter * rumbleSwitch; // offset 0x34, size 0x4
    struct zDestructibleStateAttachedAnimList * animList; // offset 0x38, size 0x4
    struct zDestructibleStateFXList fxList; // offset 0x3C, size 0x8
};
// total size: 0x7C
struct zDestructible {
    // Members
    struct xDestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int cur_hit_pts; // offset 0x8, size 0x4
    unsigned int curstateidx; // offset 0xC, size 0x4
    unsigned int nstates; // offset 0x10, size 0x4
    unsigned int hit_pts; // offset 0x14, size 0x4
    unsigned int hit_filter; // offset 0x18, size 0x4
    unsigned int hit_filter_excluded; // offset 0x1C, size 0x4
    unsigned int healthPoints; // offset 0x20, size 0x4
    unsigned int expPoints; // offset 0x24, size 0x4
    float healthChance; // offset 0x28, size 0x4
    float expChance; // offset 0x2C, size 0x4
    unsigned int launch_flag; // offset 0x30, size 0x4
    unsigned int behaviour; // offset 0x34, size 0x4
    unsigned int base_modelID; // offset 0x38, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x3C, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x40, size 0x4
    struct xModelInstance * base_model; // offset 0x44, size 0x4
    struct xModelInstance * base_collision; // offset 0x48, size 0x4
    struct zDestructibleState * dstates; // offset 0x4C, size 0x4
    float hit_to_destroy_timer; // offset 0x50, size 0x4
    float timer; // offset 0x54, size 0x4
    float respawn_time; // offset 0x58, size 0x4
    void (* destroy_notify)(struct zDestructible *, void *); // offset 0x5C, size 0x4
    void * notify_context; // offset 0x60, size 0x4
    struct xEnt * root_ent; // offset 0x64, size 0x4
    unsigned int flags; // offset 0x68, size 0x4
    int owner; // offset 0x6C, size 0x4
    unsigned char has_animation; // offset 0x70, size 0x1
    unsigned char active; // offset 0x71, size 0x1
    struct xModelInstance * * baseChildrenList; // offset 0x74, size 0x4
    int baseChildrenCount; // offset 0x78, size 0x4
};
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
static struct zSimpleMgr * sMgrList; // size: 0x4, address: 0x803C1A8C
static unsigned int sSimpleCustomCount; // size: 0x4, address: 0x803C1A90
static struct xEnt * * sSimpleCustomList; // size: 0x4, address: 0x803C1A94
// Range: 0x8009F8C4 -> 0x8009F924
static void CollisionReset(struct zEntSimpleObj * ent /* r0 */) {}

// Range: 0x8009F924 -> 0x8009F95C
static void CollisionOn(struct zEntSimpleObj * ent /* r0 */) {}

// total size: 0xC
struct xLightKitBlendInfo {
    // Members
    struct xLightKit * lightKit; // offset 0x0, size 0x4
    struct xLightKit * lightKitBlend; // offset 0x4, size 0x4
    float blendPercentage; // offset 0x8, size 0x4
};
// Range: 0x8009F95C -> 0x8009F9CC
static int CmpSimpleMgr(void * a /* r3 */, void * b /* r31 */) {
    // Local variables
    const struct zSimpleMgr * simpA; // r0
    const struct zSimpleMgr * simpB; // r0
    struct xLightKitBlendInfo blendInfoA; // r1+0x14
    struct xLightKitBlendInfo blendInfoB; // r1+0x8
}

// Range: 0x8009F9CC -> 0x8009FA40
static void VisUpdateSimpleMgr(struct xEnt * ent /* r31 */) {
    // Local variables
    struct zEntSimpleObj * simpent; // r0
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
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
// total size: 0x0
class zCam2Player {};
// total size: 0x160
struct xCamBlend : public xCam {
    // Members
    struct xCam * src; // offset 0x130, size 0x4
    struct xCam * dst; // offset 0x134, size 0x4
    class xCamBias * bias; // offset 0x138, size 0x4
    class xCamTimeBias timeBias; // offset 0x13C, size 0x14
    class xCamTransition * transition; // offset 0x150, size 0x4
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
// total size: 0x130
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
// total size: 0x570
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
    signed short ForceCutscene; // offset 0x480, size 0x2
    int useHIPHOP; // offset 0x484, size 0x4
    unsigned char NoMusic; // offset 0x488, size 0x1
    unsigned char NoCutscenes; // offset 0x489, size 0x1
    unsigned char NoPadCheck; // offset 0x48A, size 0x1
    unsigned char firstStartPressed; // offset 0x48B, size 0x1
    unsigned char fromLauncher; // offset 0x48C, size 0x1
    unsigned char skipAssertWithController; // offset 0x48D, size 0x1
    unsigned char enableHelperAI; // offset 0x48E, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x48F, size 0x1
    unsigned char enableDebugControls; // offset 0x490, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x491, size 0x1
    unsigned char FlashWIP; // offset 0x492, size 0x1
    unsigned char inLoadingScreen; // offset 0x493, size 0x1
    unsigned char LoadingScene; // offset 0x494, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x495, size 0x1
    unsigned char ForceMono; // offset 0x496, size 0x1
    unsigned char UnlimitedNukes; // offset 0x497, size 0x1
    unsigned int minVSyncCnt; // offset 0x498, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x49C, size 0x1
    unsigned char autoSaveFeature; // offset 0x49D, size 0x1
    unsigned char skipAsserts; // offset 0x49E, size 0x1
    unsigned char beforeFirstFrame; // offset 0x49F, size 0x1
    int asyncLoadingScreen; // offset 0x4A0, size 0x4
    int asyncLoadingFlags; // offset 0x4A4, size 0x4
    char fromLauncherUser[32]; // offset 0x4A8, size 0x20
    class zPlayerContainer players; // offset 0x4C8, size 0x14
    struct zScene * sceneCur; // offset 0x4DC, size 0x4
    struct zScene * scenePreload; // offset 0x4E0, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x4E4, size 0x4
    char watermark[127]; // offset 0x4E8, size 0x7F
    unsigned char watermarkAlpha; // offset 0x567, size 0x1
    float watermarkSize; // offset 0x568, size 0x4
    unsigned char showMenuOnBoot; // offset 0x56C, size 0x1
    unsigned char enableHUD; // offset 0x56D, size 0x1
    unsigned char skipAnimViewer; // offset 0x56E, size 0x1
};
// total size: 0x18
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    float CameraFOV; // offset 0x14, size 0x4
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
// total size: 0x0
struct zCutsceneMgr {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x0
class zEconomics {};
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
// total size: 0x630
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x570, size 0x18
    struct zCheckPoint checkPoint; // offset 0x588, size 0xC
    unsigned int playerTag[9]; // offset 0x594, size 0x24
    unsigned char playerLoaded; // offset 0x5B8, size 0x1
    unsigned char invertJoystick; // offset 0x5B9, size 0x1
    float timeMultiplier; // offset 0x5BC, size 0x4
    float timeMultiplierTarget; // offset 0x5C0, size 0x4
    float XPMultiplier; // offset 0x5C4, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x5C8, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x5CC, size 0x4
    char startDebugMode[32]; // offset 0x5D0, size 0x20
    unsigned int noMovies; // offset 0x5F0, size 0x4
    unsigned int boundUpdateTime; // offset 0x5F4, size 0x4
    unsigned char draw_player_after_fx; // offset 0x5F8, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x5F9, size 0x1
    unsigned char enableFriendlyFly; // offset 0x5FA, size 0x1
    unsigned char stopCurrentConversation; // offset 0x5FB, size 0x1
    enum zGlobalDemoType demoType; // offset 0x5FC, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x600, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x604, size 0xC
    struct xVec3 cameraLookAt; // offset 0x610, size 0xC
    int cameraAIFocus; // offset 0x61C, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x620, size 0x4
    class zEconomics * economics; // offset 0x624, size 0x4
    class zMiniGameManager * mgManager; // offset 0x628, size 0x4
    unsigned char fmvJustFinished; // offset 0x62C, size 0x1
};
struct zGlobals globals; // size: 0x630, address: 0x80369F18
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
float VBLANKS_PER_SEC; // size: 0x4, address: 0x803BE158
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x803BDC98
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x24
struct zLODTable {
    // Members
    struct xModelBucket * * baseBucket; // offset 0x0, size 0x4
    float noRenderDist; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    struct xModelBucket * * lodBucket[3]; // offset 0xC, size 0xC
    float lodDist[3]; // offset 0x18, size 0xC
};
// Range: 0x8009FA40 -> 0x800A01A4
void zEntSimpleObj_MgrInit(struct zEntSimpleObj * * entList /* r29 */, unsigned int entCount /* r30 */) {
    // Local variables
    unsigned int i; // r23
    unsigned int reactiveExtras; // r0
    unsigned int modelsRequired; // r22
    struct zEntSimpleObj * * tempEntList; // r31
    unsigned int tempEntCount; // r21
    unsigned int custEntCount; // r20
    struct zEntSimpleObj * ent; // r0
    float dt; // f30
    float duration; // f0
    int frameCount; // r19
    int boneCount; // r25
    struct xQuat * q0; // r18
    struct xVec3 * t0; // r17
    float t; // f31
    struct RwMatrixTag * fastMatList; // r16
    int i; // r15
    struct zSimpleMgr * smgr; // r15
    struct RpAtomic * model; // r17
    struct RwSphere oldbound; // r1+0x8
    struct zLODTable * lod; // r0
    float distscale; // f2
    unsigned char uvAnimated; // r3

    // References
    // -> void * RwEngineInstance;
    // -> static unsigned int sMgrCount;
    // -> static struct zSimpleMgr * sMgrList;
    // -> unsigned int gActiveHeap;
    // -> static struct xEnt * * sSimpleCustomList;
    // -> static unsigned int sSimpleCustomCount;
    // -> unsigned char * g_iAnim_workBuffer;
    // -> float VBLANKS_PER_SEC;
    // -> struct zGlobals globals;
}

struct xGlobals * xglobals; // size: 0x4, address: 0x803BE168
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x800A01A4 -> 0x800A04EC
void zEntSimpleObj_MgrUpdateRender(float dt /* f27 */) {
    // Local variables
    unsigned int i; // r31
    unsigned int currPipeFlags; // r30
    unsigned int pipeMask; // r29
    enum RwFogType oldfogtype; // r0
    float camX; // f31
    float camY; // f30
    float camZ; // f29
    struct zSimpleMgr * smgr; // r28
    unsigned int smgrFlags; // r26
    float camdist2; // f28
    struct zEntSimpleObj * ent; // r27
    unsigned int testPipeFlags; // r25
    unsigned int xorFlags; // r24
    int picklod; // r0
    struct xModelInstance * minst; // r3
    struct RpAtomic * modelData; // r24

    // References
    // -> void * RwEngineInstance;
    // -> struct xGlobals * xglobals;
    // -> static unsigned int sMgrCount;
    // -> static struct zSimpleMgr * sMgrList;
    // -> struct zGlobals globals;
}

// Range: 0x800A04EC -> 0x800A055C
void zEntSimpleObj_MgrCustomUpdate(struct zScene * s /* r29 */, float dt /* f31 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static unsigned int sSimpleCustomCount;
    // -> static struct xEnt * * sSimpleCustomList;
}

// Range: 0x800A055C -> 0x800A05B4
void zEntSimpleObj_MgrCustomRender() {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static unsigned int sSimpleCustomCount;
    // -> static struct xEnt * * sSimpleCustomList;
}

// Range: 0x800A05B4 -> 0x800A0600
static void zEntSimpleObj_Render(struct xEnt * ent /* r31 */) {}

// Range: 0x800A0600 -> 0x800A0628
void zEntTrackPhysics_Init(void * ent /* r0 */, void * asset /* r0 */) {}

// Range: 0x800A0628 -> 0x800A0650
void zEntSimpleObj_Init(void * ent /* r0 */, void * asset /* r0 */) {}

// Range: 0x800A0650 -> 0x800A0988
void zEntSimpleObj_Init(struct zEntSimpleObj * ent /* r27 */, struct xEntAsset * asset /* r28 */, unsigned char physparams /* r30 */, unsigned char candestroy /* r29 */) {
    // Local variables
    struct xSimpleObjAsset * sasset; // r0
    unsigned int tmpsize; // r1+0xC
    struct RpAtomic * modelData; // r31
    void * animData; // r30
    unsigned int animBoneCount; // r0
    unsigned int size; // r1+0x8
    unsigned int newid; // r28
    struct xDestructibleAsset * destruct; // r0
}

// Range: 0x800A0988 -> 0x800A098C
static void zEntSimpleObj_Move() {}

// Range: 0x800A098C -> 0x800A09B8
void zEntSimpleObj_CustomMove(struct xEnt * ent /* r3 */, struct xEntFrame * frame /* r5 */) {}

// Range: 0x800A09B8 -> 0x800A0B30
void zEntSimpleObj_Update(struct zEntSimpleObj * ent /* r31 */, struct xScene * sc /* r29 */, float dt /* f31 */) {
    // Local variables
    float duration; // f0
    struct xQuat * q0; // r30
    struct xVec3 * t0; // r29

    // References
    // -> unsigned char * g_iAnim_workBuffer;
    // -> struct xGlobals * xglobals;
    // -> struct zGlobals globals;
}

// total size: 0x0
struct SphereCollisionResults {};
// total size: 0xC
class zPlayerAction {
    // Members
protected:
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    struct zPlayer * player; // offset 0x4, size 0x4
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0xC
class zPlayerActionManager {
    // Members
protected:
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
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
    eBrainType_Player_Remy = 15,
    eBrainType_Player_HumanVehicle = 16,
    eBrainType_Player_Ratball = 17,
    eBrainType_Player_MG1 = 18,
    eBrainType_Player_MG2_RatOnball = 19,
    eBrainType_Player_MG3_Pufferoids = 20,
    eBrainType_Player_MG4_GrapeStomper = 21,
    eBrainType_Player_MG5_CongaLine = 22,
    eBrainType_Player_MG6_AvoidTheStuff = 23,
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
// total size: 0x0
class zNPCCommon {};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
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
struct xModelAssetParam {};
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
// total size: 0x0
struct xSweptSphere {};
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
// total size: 0x14
struct xHierarchyNode {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
};
// total size: 0x18
struct xHierarchyBound {
    // Members
    struct xSphere master; // offset 0x0, size 0x10
    struct xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
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
// total size: 0x10
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
// total size: 0xC
struct xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x16C
struct zCombat {
    // Static members
    static int MAX_HIT_OBJECTS; // size: 0x4

    // Members
    struct xHierarchyBound bounds; // offset 0x0, size 0x18
    unsigned int lastBoundUpdateTime; // offset 0x18, size 0x4
    signed short currentHitPoints; // offset 0x1C, size 0x2
    signed short maximumHitPoints; // offset 0x1E, size 0x2
    unsigned short stateTableSize; // offset 0x20, size 0x2
    const class zCombatAttack * stateTable; // offset 0x24, size 0x4
    const struct xAnimState * animationState; // offset 0x28, size 0x4
    const class zCombatAttack * runningAttack; // offset 0x2C, size 0x4
    float runningAttackTimer; // offset 0x30, size 0x4
    struct xEnt * lastNPCDamaged; // offset 0x34, size 0x4
    unsigned char disableMovement; // offset 0x38, size 0x1
    unsigned char runningEffect; // offset 0x39, size 0x1
    unsigned char runningBlur; // offset 0x3A, size 0x1
    unsigned char hitting; // offset 0x3B, size 0x1
    unsigned char hitEnv; // offset 0x3C, size 0x1
    unsigned char hitObject; // offset 0x3D, size 0x1
    unsigned char forceReset; // offset 0x3E, size 0x1
    unsigned char hitObjectCount; // offset 0x3F, size 0x1
    struct xEnt * hitObjects[24]; // offset 0x40, size 0x60
    signed short currentDamage; // offset 0xA0, size 0x2
    signed short lastHitDamage; // offset 0xA2, size 0x2
    enum zHitSource lastHitSource; // offset 0xA4, size 0x4
    enum zHitTarget lastHitTarget; // offset 0xA8, size 0x4
    struct sphereInfo location[4]; // offset 0xAC, size 0x80
    int (* envCollisionCB)(struct xEnt *, struct xSweptSphere *, struct xEnv *); // offset 0x12C, size 0x4
    class PunchEffect punchEffect; // offset 0x130, size 0x38
    unsigned int effectParam; // offset 0x168, size 0x4
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
// total size: 0x0
struct st_SERIAL_CLIENTINFO {};
// total size: 0x1C
struct xSerial {
    // Members
private:
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    struct st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// total size: 0x0
class zInteraction {};
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
// total size: 0xB10
struct zPlayer : public zEnt {
    // Static members
    static int MAX_EXTRA_SPHERES; // size: 0x4

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
public:
    unsigned int * hitSoundsMap; // offset 0xB08, size 0x4
};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// Range: 0x800A0B30 -> 0x800A0B90
void zEntSimpleObj_Setup(struct zEntSimpleObj * ent /* r31 */) {}

// Range: 0x800A0B90 -> 0x800A0BB0
void zEntSimpleObj_Save(struct zEntSimpleObj * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x800A0BB0 -> 0x800A0BD0
void zEntSimpleObj_Load(struct zEntSimpleObj * ent /* r0 */, struct xSerial * s /* r0 */) {}

// Range: 0x800A0BD0 -> 0x800A0C10
void zEntSimpleObj_ReReset(struct zEntSimpleObj * ent /* r3 */) {}

// Range: 0x800A0C10 -> 0x800A0F88
void zEntSimpleObj_Reset(struct zEntSimpleObj * ent /* r30 */) {
    // Local variables
    struct RpAtomic * imodel; // r29
    struct xLightKit * pLightKit; // r28
    struct xSurface * surfaces[32]; // r1+0x8
    int i; // r31
    int j; // r7
    struct xModelInstance * model; // r5
    int k; // r8
}

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
class zLightweightSystem * zLightweight<z::toss, 10>::GetSystem()::system; // size: 0x4, address: 0x803C1A98
signed char zLightweight<z::toss, 10>::GetSystem()::localstatic4 guard; // size: 0x1, address: 0x803C1A9C
union FloatAndVoid {
    float f; // offset 0x0, size 0x4
    void * v; // offset 0x0, size 0x4
};
// Range: 0x800A0F88 -> 0x800A1668
void zEntSimpleObjEventCB(struct xBase * from /* r27 */, struct xBase * to /* r4 */, unsigned int toEvent /* r28 */, const float * toParam /* r29 */, struct xBase * toParamWidget /* r30 */, unsigned int toParamWidgetID /* r9 */) {
    // Local variables
    struct zEntSimpleObj * s; // r31
    struct zShrapnelAsset * shrap; // r0
    union FloatAndVoid dist; // r1+0x8
    class zMeshCircle * circle; // r31
    class zMeshCircle * circle; // r31

    // References
    // -> struct zGlobals globals;
}

// total size: 0xC
struct Exit {
    // Members
    int exitTriangleIndex; // offset 0x0, size 0x4
    int destTriangleIndex; // offset 0x4, size 0x4
    int neighborMeshIndex; // offset 0x8, size 0x4
};
// total size: 0x4
struct Triangle {
    // Members
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
};
// total size: 0x34
class xNavigationMeshAssetSubMesh {
    // Members
public:
    unsigned char * portalLookup; // offset 0x0, size 0x4
    unsigned char * portal; // offset 0x4, size 0x4
    float * edgeShift; // offset 0x8, size 0x4
    struct Exit * exits; // offset 0xC, size 0x4
    int numExits; // offset 0x10, size 0x4
    struct xVec3 * vertices; // offset 0x14, size 0x4
    int numVertices; // offset 0x18, size 0x4
    struct Triangle * triangles; // offset 0x1C, size 0x4
    int numTriangles; // offset 0x20, size 0x4
    unsigned int * objects; // offset 0x24, size 0x4
    int numObjects; // offset 0x28, size 0x4
    unsigned char * levelTwoRouteExits; // offset 0x2C, size 0x4
    unsigned int runtimeFlags; // offset 0x30, size 0x4
};
// total size: 0x14
class xNavigationMeshAsset : public xBaseAsset {
    // Members
public:
    int numSubMeshes; // offset 0x8, size 0x4
    class xNavigationMeshAssetSubMesh * subMeshes; // offset 0xC, size 0x4
    class zMeshCircle * circleList; // offset 0x10, size 0x4
};
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
// total size: 0xC
class zLightweight {
    // Members
    unsigned char used; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0x3A4
class zLightweightSystem : public zLightweightSystemBase {
    // Members
    class toss object[10]; // offset 0x4, size 0x398
    class zLightweightSystem * * system; // offset 0x39C, size 0x4
    unsigned int current_id; // offset 0x3A0, size 0x4
};
// total size: 0x24
struct {} zLightweightSystem<z::toss, 10>::__vtable; // size: 0x24, address: 0x803BDDDC
// total size: 0x20
struct {} z::toss::__vtable; // size: 0x20, address: 0x803BEA10
// total size: 0x0
struct pointer_asset {};
// total size: 0x5C
class toss : public zLightweight {
    // Members
    struct xEnt * ent; // offset 0xC, size 0x4
    struct pointer_asset * dest_pointer; // offset 0x10, size 0x4
    float arc_height; // offset 0x14, size 0x4
    float speed; // offset 0x18, size 0x4
    struct xBase * toss_event_sender; // offset 0x1C, size 0x4
    float peakDist; // offset 0x20, size 0x4
    float totalDist; // offset 0x24, size 0x4
    float parabola_scale; // offset 0x28, size 0x4
    struct xVec3 toDest; // offset 0x2C, size 0xC
    struct xQuat startQuat; // offset 0x38, size 0x10
    struct xQuat destQuat; // offset 0x48, size 0x10
    float dist; // offset 0x58, size 0x4
};
// total size: 0x20
struct {} zLightweight<z::toss, 10>::__vtable; // size: 0x20, address: 0x803BDDBC
// Range: 0x800A1668 -> 0x800A16A0
void zEntSimpleObj_MoveUpdate(struct zEntSimpleObj * object /* r0 */) {}

// total size: 0x24
struct {} zLightweightSystemBase::__vtable; // size: 0x24, address: 0x803BDD98
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};

