/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iModel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800811B4 -> 0x800830F0
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
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
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
struct RpWorld * instance_world; // size: 0x4, address: 0x803C16C0
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
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
struct RwCamera * instance_camera; // size: 0x4, address: 0x803C16C4
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
// total size: 0x10
struct RpHAnimNodeInfo {
    // Members
    int nodeID; // offset 0x0, size 0x4
    int nodeIndex; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    struct RwFrame * pFrame; // offset 0xC, size 0x4
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RwStreamMemory {
    // Members
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
union RwStreamFile {
    void * fpFile; // offset 0x0, size 0x4
    void * constfpFile; // offset 0x0, size 0x4
};
// total size: 0x14
struct RwStreamCustom {
    // Members
    int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
union RwStreamUnion {
    struct RwStreamMemory memory; // offset 0x0, size 0xC
    union RwStreamFile file; // offset 0x0, size 0x4
    struct RwStreamCustom custom; // offset 0x0, size 0x14
};
// total size: 0x24
struct RwStream {
    // Members
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    int position; // offset 0x8, size 0x4
    union RwStreamUnion Type; // offset 0xC, size 0x14
    int rwOwned; // offset 0x20, size 0x4
};
// total size: 0x30
struct RtAnimInterpolatorInfo {
    // Members
    int typeID; // offset 0x0, size 0x4
    int interpKeyFrameSize; // offset 0x4, size 0x4
    int animKeyFrameSize; // offset 0x8, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0xC, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x10, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x14, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x18, size 0x4
    void (* keyFrameMulRecipCB)(void *, void *); // offset 0x1C, size 0x4
    struct RtAnimAnimation * (* keyFrameStreamReadCB)(struct RwStream *, struct RtAnimAnimation *); // offset 0x20, size 0x4
    int (* keyFrameStreamWriteCB)(struct RtAnimAnimation *, struct RwStream *); // offset 0x24, size 0x4
    int (* keyFrameStreamGetSizeCB)(struct RtAnimAnimation *); // offset 0x28, size 0x4
    int customDataSize; // offset 0x2C, size 0x4
};
// total size: 0x18
struct RtAnimAnimation {
    // Members
    struct RtAnimInterpolatorInfo * interpInfo; // offset 0x0, size 0x4
    int numFrames; // offset 0x4, size 0x4
    int flags; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    void * pFrames; // offset 0x10, size 0x4
    void * customData; // offset 0x14, size 0x4
};
// total size: 0x4C
struct RtAnimInterpolator {
    // Members
    struct RtAnimAnimation * pCurrentAnim; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    void * pNextFrame; // offset 0x8, size 0x4
    struct RtAnimInterpolator * (* pAnimCallBack)(struct RtAnimInterpolator *, void *); // offset 0xC, size 0x4
    void * pAnimCallBackData; // offset 0x10, size 0x4
    float animCallBackTime; // offset 0x14, size 0x4
    struct RtAnimInterpolator * (* pAnimLoopCallBack)(struct RtAnimInterpolator *, void *); // offset 0x18, size 0x4
    void * pAnimLoopCallBackData; // offset 0x1C, size 0x4
    int maxInterpKeyFrameSize; // offset 0x20, size 0x4
    int currentInterpKeyFrameSize; // offset 0x24, size 0x4
    int currentAnimKeyFrameSize; // offset 0x28, size 0x4
    int numNodes; // offset 0x2C, size 0x4
    int isSubInterpolator; // offset 0x30, size 0x4
    int offsetInParent; // offset 0x34, size 0x4
    struct RtAnimInterpolator * parentAnimation; // offset 0x38, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0x3C, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x40, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x44, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x48, size 0x4
};
// total size: 0x24
struct RpHAnimHierarchy {
    // Members
    int flags; // offset 0x0, size 0x4
    int numNodes; // offset 0x4, size 0x4
    struct RwMatrixTag * pMatrixArray; // offset 0x8, size 0x4
    void * pMatrixArrayUnaligned; // offset 0xC, size 0x4
    struct RpHAnimNodeInfo * pNodeInfo; // offset 0x10, size 0x4
    struct RwFrame * parentFrame; // offset 0x14, size 0x4
    struct RpHAnimHierarchy * parentHierarchy; // offset 0x18, size 0x4
    int rootParentOffset; // offset 0x1C, size 0x4
    struct RtAnimInterpolator * currentAnim; // offset 0x20, size 0x4
};
// Range: 0x800811B4 -> 0x80081210
static struct RwFrame * GetChildFrameHierarchy(struct RwFrame * frame /* r30 */, void * data /* r31 */) {
    // Local variables
    struct RpHAnimHierarchy * hierarchy; // r0
}

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
// Range: 0x80081210 -> 0x80081244
struct RpHAnimHierarchy * iModelGetHierarchy(struct RpAtomic * imodel /* r3 */) {
    // Local variables
    struct RpHAnimHierarchy * hierarchy; // r1+0x8
}

static unsigned int gLastAtomicCount; // size: 0x4, address: 0x803C16C8
static struct RpAtomic * gLastAtomicList[256]; // size: 0x400, address: 0x8033B848
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
static struct RpLight * sEmptyDirectionalLight[4]; // size: 0x10, address: 0x803C16CC
static struct RpLight * sEmptyAmbientLight; // size: 0x4, address: 0x803C16DC
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// Range: 0x80081244 -> 0x800812F0
void iModelInit() {
    // Local variables
    struct RwFrame * frame; // r4
    struct RwRGBAReal black; // r1+0x8
    int i; // r29

    // References
    // -> static struct RpLight * sEmptyAmbientLight;
    // -> static struct RpLight * sEmptyDirectionalLight[4];
}

// Range: 0x800812F0 -> 0x8008136C
void iModelDeInit() {
    // Local variables
    int i; // r28

    // References
    // -> static struct RpLight * sEmptyAmbientLight;
    // -> static struct RpLight * sEmptyDirectionalLight[4];
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
// total size: 0x0
struct RpSkin {};
// Range: 0x8008136C -> 0x80081484
static struct RpAtomic * FindAndInstanceAtomicCallback(struct RpAtomic * atomic /* r29 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r30
    struct RpSkin * pSkin; // r0

    // References
    // -> static unsigned int gLastAtomicCount;
    // -> static struct RpAtomic * gLastAtomicList[256];
    // -> void * RwEngineInstance;
}

static int num_models; // size: 0x4, address: 0x803C16E0
static signed char init; // size: 0x1, address: 0x803C16E4
unsigned int FB_XRES; // size: 0x4, address: 0x803BE15C
unsigned int FB_YRES; // size: 0x4, address: 0x803BE160
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// Range: 0x80081484 -> 0x800817D0
static struct RpAtomic * iModelStreamRead(struct RwStream * stream /* r25 */) {
    // Local variables
    struct RpClump * clump; // r26
    struct RwBBox tmpbbox; // r1+0x8
    unsigned int i; // r6
    unsigned int maxIndex; // r30
    float maxRadius; // f31
    float testRadius; // f0
    int i; // r26
    struct RpAtomic * atomic; // r27
    struct RpGeometry * geom; // r3
    struct RpSkin * skin; // r0
    int i; // r26
    struct RpGeometry * geom; // r27
    int j; // r28
    struct RpMaterial * material; // r25
    float coeff; // f0

    // References
    // -> static struct RpAtomic * gLastAtomicList[256];
    // -> static unsigned int gLastAtomicCount;
    // -> struct RpWorld * instance_world;
    // -> struct RwCamera * instance_camera;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static signed char init;
    // -> static int num_models;
}

// total size: 0x8
struct RwMemory {
    // Members
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
};
// Range: 0x800817D0 -> 0x80081808
struct RpAtomic * iModelFileNew(void * buffer /* r0 */, unsigned int size /* r0 */) {
    // Local variables
    struct RwMemory rwmem; // r1+0x8
}

// Range: 0x80081808 -> 0x80081874
void iModelUnload(struct RpAtomic * userdata /* r0 */) {
    // Local variables
    struct RpClump * clump; // r31
    struct RwFrame * frame; // r30
    struct RwFrame * root; // r3
}

// Range: 0x80081874 -> 0x8008189C
static struct RpAtomic * NextAtomicCallback(struct RpAtomic * atomic /* r3 */, void * data /* r0 */) {
    // Local variables
    struct RpAtomic * * nextModel; // r0
}

// Range: 0x8008189C -> 0x800818E8
struct RpAtomic * iModelFile_RWMultiAtomic(struct RpAtomic * model /* r0 */) {
    // Local variables
    struct RpClump * clump; // r0
    struct RpAtomic * nextModel; // r1+0x8
}

// Range: 0x800818E8 -> 0x8008191C
unsigned int iModelNumBones(struct RpAtomic * model /* r0 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r0
}

// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x8008191C -> 0x80081984
void iModelQuatToMat(struct xQuat * quat /* r29 */, struct xVec3 * tran /* r30 */, struct RwMatrixTag * mat /* r31 */) {}

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
// Range: 0x80081984 -> 0x80081AB0
void iModelAnimMatrices(struct RpAtomic * model /* r0 */, struct xQuat * quat /* r24 */, struct xVec3 * tran /* r25 */, struct RwMatrixTag * mat /* r26 */) {
    // Local variables
    struct RpHAnimHierarchy * pHierarchy; // r0
    struct RwMatrixTag matrixStack[32]; // r1+0xC8
    struct RwMatrixTag * pMatrixStackTop; // r30
    struct RpHAnimNodeInfo * pCurrentFrame; // r31
    int currentFrameFlags; // r29
    int i; // r28
    int numFrames; // r27
    struct RwMatrixTag * pMatrixArray; // r26
    struct RwMatrixTag parentMatrix; // r1+0x88
    struct RwMatrixTag frameMatrix; // r1+0x48
    struct RwMatrixTag tempMatrix; // r1+0x8
    struct RwMatrixTag * ptrMatrix; // r0
}

// Range: 0x80081AB0 -> 0x80081AB4
static struct RpAtomic * iModelCacheAtomic(struct RpAtomic * model /* r0 */) {}

enum RpMatFXMaterialFlags {
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX = 7,
    rpMATFXNUMEFFECTS = 6,
    rpMATFXFORCEENUMSIZEINT = 2147483647,
};
static int draw_all; // size: 0x4, address: 0x803C16E8
static signed char init; // size: 0x1, address: 0x803C16EC
// Range: 0x80081AB4 -> 0x80081B5C
void iModelRender(struct RpAtomic * model /* r27 */, struct RwMatrixTag * mat /* r28 */) {
    // Local variables
    struct RpHAnimHierarchy * pHierarchy; // r0
    struct RwMatrixTag * pAnimOldMatrix; // r29
    struct RwFrame * frame; // r31

    // References
    // -> static signed char init;
    // -> static int draw_all;
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// Range: 0x80081B5C -> 0x80081C64
struct xSphere * iModelWorldBoundSphere(struct RpAtomic * model /* r0 */, struct RwMatrixTag * mat /* r29 */, struct xSphere * sphere /* r5 */) {
    // Local variables
    struct RwSphere * modelsphere; // r30
    float xScale2; // f1
    float yScale2; // f3
    float zScale2; // f4
    float atomicScale; // f0
    struct RwV3d * up; // r0
    struct RwV3d * at; // r0
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80081C64 -> 0x80081D10
void iModelSetWorldBoundFromBox(struct RpAtomic * model /* r31 */, struct xBox * box /* r0 */) {
    // Local variables
    float sizeX; // f2
    float sizeY; // f5
    float sizeZ; // f1
}

// Range: 0x80081D10 -> 0x80081D1C
unsigned int iModelVertCount(struct RpAtomic * model /* r0 */) {}

// Range: 0x80081D1C -> 0x80081E08
unsigned int iModelVertEval(struct RpAtomic * model /* r0 */, unsigned int index /* r23 */, unsigned int count /* r24 */, struct RwMatrixTag * mat /* r25 */, struct xVec3 * vert /* r26 */, struct xVec3 * dest /* r27 */) {
    // Local variables
    struct RpGeometry * geom; // r0
    unsigned int numV; // r0
    struct RpSkin * skin; // r31
}

// Range: 0x80081E08 -> 0x80082034
static void SkinXform(struct xVec3 * dest /* r20 */, const struct xVec3 * vert /* r21 */, struct RwMatrixTag * mat /* r22 */, const struct RwMatrixTag * skinmat /* r23 */, const float * wt /* r24 */, const unsigned int * idx /* r25 */, unsigned int count /* r26 */) {
    // Local variables
    unsigned int catMatFlags[2]; // r1+0x8
    struct RwMatrixTag * catmat; // r28
    struct RwMatrixTag * rootmat; // r0
    unsigned int i; // r27
    unsigned int midx; // r3
    struct RwMatrixTag * pMatrix; // r3
    const float * fwt; // r4
    unsigned int wtidx; // r5
    unsigned int maxwt; // r6
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
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x20
struct xModelTag {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
enum RpUserDataFormat {
    rpNAUSERDATAFORMAT = 0,
    rpINTUSERDATA = 1,
    rpREALUSERDATA = 2,
    rpSTRINGUSERDATA = 3,
    rpUSERDATAFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
struct RpUserDataArray {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RpUserDataFormat format; // offset 0x4, size 0x4
    int numElements; // offset 0x8, size 0x4
    void * data; // offset 0xC, size 0x4
};
// Range: 0x80082034 -> 0x800821D4
static unsigned int iModelTagUserData(struct xModelTag * tag /* r24 */, const struct RpAtomic * model /* r25 */, float x /* f29 */, float y /* f30 */, float z /* f31 */, int closeV /* r26 */) {
    // Local variables
    int i; // r29
    int count; // r0
    struct RpUserDataArray * array; // r28
    struct RpUserDataArray * testarray; // r27
    float distSqr; // f0
    float closeDistSqr; // f4
    int numTags; // r0
    int t; // r5
    struct xModelTag * tagList; // r6
}

// total size: 0x10
struct RwMatrixWeights {
    // Members
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// Range: 0x80082218 -> 0x80082398
static unsigned int iModelTagInternal(struct xModelTag * tag /* r28 */, const struct RpAtomic * model /* r0 */, float x /* f0 */, float y /* f0 */, float z /* f0 */, int closeV /* r29 */) {
    // Local variables
    struct RpGeometry * geom; // r7
    struct RwV3d * vert; // r6
    int v; // r7
    int numV; // r0
    float distSqr; // f0
    float closeDistSqr; // f7
    struct RpSkin * skin; // r31
    const struct RwMatrixWeights * wt; // r30
}

// Range: 0x80082398 -> 0x800823BC
unsigned int iModelTagSetup(struct xModelTag * tag /* r0 */, const struct RpAtomic * model /* r0 */, float x /* f0 */, float y /* f0 */, float z /* f0 */) {}

// total size: 0x2C
struct xModelTagWithNormal : public xModelTag {
    // Members
    struct xVec3 normal; // offset 0x20, size 0xC
};
// Range: 0x800823BC -> 0x80082440
void iModelTagEval(struct RpAtomic * model /* r3 */, const struct xModelTag * tag /* r29 */, struct RwMatrixTag * mat /* r30 */, struct xVec3 * dest /* r31 */) {
    // Local variables
    struct RpSkin * skin; // r0
    const struct RwMatrixTag * skinmat; // r6
}

static struct RwRGBA sMaterialColor[32]; // size: 0x80, address: 0x8033BC48
static struct RwTexture * sMaterialTexture[32]; // size: 0x80, address: 0x8033BCC8
static unsigned char sMaterialAlpha[32]; // size: 0x20, address: 0x803C16F0
static unsigned int sMaterialIdx; // size: 0x4, address: 0x803C1710
static unsigned int sMaterialFlags; // size: 0x4, address: 0x803C1714
static struct RpAtomic * sLastMaterial; // size: 0x4, address: 0x803C1718
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x80082440 -> 0x80082508
void iModelSetMaterialAlpha(struct RpAtomic * model /* r30 */, unsigned char alpha /* r31 */) {
    // Local variables
    struct RpGeometry * geom; // r27
    int i; // r26
    struct RpMaterial * material; // r3
    const struct RwRGBA * col; // r3
    struct RwRGBA new_col; // r1+0x8

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned char sMaterialAlpha[32];
    // -> static unsigned int sMaterialIdx;
}

// Range: 0x80082508 -> 0x80082628
void iModelResetMaterial(struct RpAtomic * model /* r0 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    int i; // r30
    struct RpMaterial * material; // r29
    struct RwRGBA newColor; // r1+0x10
    struct RwRGBA newColor; // r1+0xC
    struct RwRGBA newColor; // r1+0x8

    // References
    // -> static unsigned int sMaterialFlags;
    // -> static struct RwTexture * sMaterialTexture[32];
    // -> static unsigned char sMaterialAlpha[32];
    // -> static struct RwRGBA sMaterialColor[32];
    // -> static struct RpAtomic * sLastMaterial;
}

// Range: 0x80082628 -> 0x80082678
static struct RpMaterial * iModelSetMaterialTextureCB(struct RpMaterial * material /* r31 */, void * data /* r0 */) {
    // References
    // -> static unsigned int sMaterialIdx;
    // -> static struct RwTexture * sMaterialTexture[32];
}

// Range: 0x80082678 -> 0x800826E0
void iModelSetMaterialTexture(struct RpAtomic * model /* r31 */, void * texture /* r4 */) {
    // Local variables
    struct RpGeometry * geom; // r3

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned int sMaterialIdx;
}

// Range: 0x800826E0 -> 0x800827CC
static struct RpMaterial * iModelMaterialMulCB(struct RpMaterial * material /* r30 */, void * data /* r31 */) {
    // Local variables
    struct RwRGBA col; // r1+0x8
    float tmp; // f1
    float * mods; // r0

    // References
    // -> static unsigned int sMaterialIdx;
    // -> static struct RwRGBA sMaterialColor[32];
}

// Range: 0x800827CC -> 0x8008280C
static void U8_COLOR_CLAMP(unsigned char & destu8 /* r0 */, float srcf32 /* f1 */) {}

// Range: 0x8008280C -> 0x8008288C
void iModelMaterialMul(struct RpAtomic * model /* r31 */, float rm /* f0 */, float gm /* f0 */, float bm /* f0 */) {
    // Local variables
    struct RpGeometry * geom; // r3
    float cols[3]; // r1+0x8

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned int sMaterialIdx;
}

// Range: 0x8008288C -> 0x80082DB8
void iModelAnimBoundPrepare(struct RpAtomic * model /* r28 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r0
    int numbones; // r25
    int i; // r17
    int j; // r24
    int count; // r0
    struct RpUserDataArray * usrdat; // r21
    struct RpSkin * skin; // r23
    const unsigned int * boneidx; // r22
    const struct RwMatrixWeights * bonewt; // r21
    struct RwV3d * vert; // r20
    int numVert; // r31
    int * cntarr; // r30
    struct xBox * boxarr; // r29
    const float * currwt; // r19
    unsigned int curridx; // r18
    unsigned int matidx; // r3
    struct xSphere * spharr; // r0
    const float * currwt; // r7
    float dist2; // f0
    unsigned int curridx; // r8
    int numused; // r18
    const struct RwMatrixTag * skinmat; // r0
    unsigned int AnimBoundUsrDatArray[2]; // r1+0x8
    int index; // r4
    int * idata; // r4
    int * idata_boneidx; // r18
    struct xSphere * idata_sphere; // r22
    int * idata; // r5
    int * idata_sphstart; // r6
    int * idata_sphactual; // r7
    int numel; // r0
}

// Range: 0x80082DB8 -> 0x800830F0
void iModelAnimBoundWorld(struct xBox * box /* r28 */, struct xBox * combinedBox /* r29 */, struct RpAtomic * model /* r24 */, struct RwMatrixTag * mat /* r30 */, struct RwMatrixTag * bonemat /* r31 */) {
    // Local variables
    int i; // r26
    int * data; // r3
    int count; // r0
    struct RpUserDataArray * usrdat; // r3
    int numbones; // r26
    int * boneidx; // r25
    struct xSphere * bonesph; // r24
    float maxscale; // f0
    float scaleX; // f1
    float scaleY; // f4
    float scaleZ; // f2
    struct xVec3 sphcenter; // r1+0x8
    float scalerad; // f2
}


