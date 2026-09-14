/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\iModel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80116218 -> 0x8011990C
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
struct RpWorld * instance_world; // size: 0x4, address: 0x80D69AF0
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
struct RwCamera * instance_camera; // size: 0x4, address: 0x80D69AF4
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
// Range: 0x80116218 -> 0x80116288
static struct RwFrame * GetChildFrameHierarchy(struct RwFrame * frame /* r29 */, void * data /* r30 */) {
    // Local variables
    struct RpHAnimHierarchy * hierarchy; // r31
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
// Range: 0x80116288 -> 0x801162CC
struct RpHAnimHierarchy * iModelGetHierarchy(struct RpAtomic * imodel /* r1+0x8 */) {
    // Local variables
    struct RpHAnimHierarchy * hierarchy; // r1+0xC
    struct RwFrame * frame; // r31
}

static unsigned int gLastAtomicCount; // size: 0x4, address: 0x80D69AF8
static struct RpAtomic * gLastAtomicList[256]; // size: 0x400, address: 0x80C70030
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
static struct RpLight * sEmptyDirectionalLight[4]; // size: 0x10, address: 0x80D69AFC
static struct RpLight * sEmptyAmbientLight; // size: 0x4, address: 0x80D69B0C
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// Range: 0x801162CC -> 0x80116394
void iModelInit() {
    // Local variables
    struct RwFrame * frame; // r30
    struct RwRGBAReal black; // r1+0x8
    int i; // r31

    // References
    // -> static struct RpLight * sEmptyAmbientLight;
    // -> static struct RpLight * sEmptyDirectionalLight[4];
}

// Range: 0x80116394 -> 0x80116428
void iModelDeInit() {
    // Local variables
    int i; // r31
    struct RwFrame * frame; // r30

    // References
    // -> static struct RpLight * sEmptyAmbientLight;
    // -> static struct RpLight * sEmptyDirectionalLight[4];
}

static char __FUNCTION__[30]; // size: 0x1E, address: 0x80516B98
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
// total size: 0x0
struct RpSkin {};
// Range: 0x80116428 -> 0x801165BC
static struct RpAtomic * FindAndInstanceAtomicCallback(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r31
    struct RpGeometry * pGeom; // r28
    struct RpSkin * pSkin; // r29
    struct RwFrame * frame; // r27
    struct RwFrame * root; // r1+0x8

    // References
    // -> static unsigned int gLastAtomicCount;
    // -> static struct RpAtomic * gLastAtomicList[256];
    // -> static char __FUNCTION__[30];
    // -> void * RwEngineInstance;
}

static int num_models; // size: 0x4, address: 0x80D69B10
static signed char init; // size: 0x1, address: 0x80D69B14
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D61958
unsigned int FB_XRES; // size: 0x4, address: 0x80D63014
unsigned int FB_YRES; // size: 0x4, address: 0x80D63018
unsigned int gModelReadAssetIDDebug; // size: 0x4, address: 0x80D69E64
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// Range: 0x801165BC -> 0x80116ACC
static struct RpAtomic * iModelStreamRead(struct RwStream * stream /* r24 */) {
    // Local variables
    struct RpClump * clump; // r23
    struct RwBBox tmpbbox; // r1+0x8
    unsigned int i; // r31
    unsigned int maxIndex; // r30
    float maxRadius; // f31
    float testRadius; // f30
    int i; // r29
    struct RpAtomic * atomic; // r22
    struct RpGeometry * geom; // r21
    struct RpSkin * skin; // r20
    int i; // r28
    struct RpAtomic * atomic; // r19
    struct RpGeometry * geom; // r27
    int j; // r26
    struct RpMaterial * material; // r25
    float coeff; // f29

    // References
    // -> static struct RpAtomic * gLastAtomicList[256];
    // -> static unsigned int gLastAtomicCount;
    // -> static char __FUNCTION__[17];
    // -> unsigned int gModelReadAssetIDDebug;
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
// Range: 0x80116ACC -> 0x80116B14
struct RpAtomic * iModelFileNew(void * buffer /* r1+0x8 */, unsigned int size /* r1+0xC */) {
    // Local variables
    struct RwMemory rwmem; // r1+0x10
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D61969
// Range: 0x80116B14 -> 0x80116C0C
void iModelUnload(struct RpAtomic * userdata /* r26 */) {
    // Local variables
    struct RpClump * clump; // r31
    struct RpAtomic * atomic; // r28
    struct RpAtomic * atomicCopy; // r27
    struct RwFrame * frame; // r30
    struct RwFrame * root; // r29

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x80116C0C -> 0x80116C4C
static struct RpAtomic * NextAtomicCallback(struct RpAtomic * atomic /* r3 */, void * data /* r4 */) {
    // Local variables
    struct RpAtomic * * nextModel; // r31
}

// Range: 0x80116C4C -> 0x80116CA8
struct RpAtomic * iModelFile_RWMultiAtomic(struct RpAtomic * model /* r31 */) {
    // Local variables
    struct RpClump * clump; // r30
    struct RpAtomic * nextModel; // r1+0x8
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D61976
// Range: 0x80116CA8 -> 0x80116D4C
unsigned int iModelNumBones(struct RpAtomic * model /* r1+0x8 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r31

    // References
    // -> static char __FUNCTION__[15];
}

// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// Range: 0x80116D4C -> 0x80116DD0
void iModelQuatToMat(struct xQuat * quat /* r31 */, struct xVec3 * tran /* r29 */, struct RwMatrixTag * mat /* r30 */) {}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80D61985
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
// Range: 0x80116DD0 -> 0x801170AC
void iModelAnimMatrices(struct RpAtomic * model /* r1+0x8 */, struct xQuat * quat /* r21 */, struct xVec3 * tran /* r22 */, struct RwMatrixTag * mat /* r1+0xC */) {
    // Local variables
    struct RpHAnimHierarchy * pHierarchy; // r30
    struct RwMatrixTag matrixStack[32]; // r1+0xD0
    struct RwMatrixTag * pMatrixStackTop; // r31
    struct RpHAnimNodeInfo * pCurrentFrame; // r29
    int currentFrameFlags; // r25
    int i; // r28
    int numFrames; // r24
    struct RwMatrixTag * pMatrixArray; // r27
    struct RwMatrixTag parentMatrix; // r1+0x90
    struct RwMatrixTag frameMatrix; // r1+0x50
    struct RwMatrixTag tempMatrix; // r1+0x10
    struct RwMatrixTag * ptrMatrix; // r26

    // References
    // -> static char __FUNCTION__[19];
}

// Range: 0x801170AC -> 0x801170C0
static struct RpAtomic * iModelCacheAtomic(struct RpAtomic * model /* r3 */) {
    // Local variables
    unsigned int maddr; // r30
    unsigned char * a_ptr; // r29
    unsigned char * g_ptr; // r28
    unsigned char * m_ptr; // r27
    unsigned int a_len; // r26
    unsigned int g_len; // r25
    unsigned int m_len; // r24
    unsigned int tot_len; // r23
    struct RpAtomic * tmf; // r31
}

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
static int draw_all; // size: 0x4, address: 0x80D69B18
static signed char init; // size: 0x1, address: 0x80D69B1C
// Range: 0x801170C0 -> 0x80117174
void iModelRender(struct RpAtomic * model /* r30 */, struct RwMatrixTag * mat /* r27 */) {
    // Local variables
    struct RpHAnimHierarchy * pHierarchy; // r31
    struct RwMatrixTag * pAnimOldMatrix; // r28
    struct RwFrame * frame; // r29

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
// Range: 0x80117174 -> 0x801172E0
struct xSphere * iModelWorldBoundSphere(struct RpAtomic * model /* r23 */, struct RwMatrixTag * mat /* r29 */, struct xSphere * sphere /* r24 */) {
    // Local variables
    struct RwSphere * modelsphere; // r30
    struct RwSphere * worldsphere; // r31
    float xScale2; // f29
    float yScale2; // f31
    float zScale2; // f30
    float atomicScale; // f25
    struct RwV3d * right; // r28
    struct RwV3d * up; // r27
    struct RwV3d * at; // r26
}

// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x801172E0 -> 0x801173D8
void iModelSetWorldBoundFromBox(struct RpAtomic * model /* r30 */, struct xBox * box /* r31 */) {
    // Local variables
    float sizeX; // f31
    float sizeY; // f30
    float sizeZ; // f29
}

// Range: 0x801173D8 -> 0x80117404
unsigned int iModelVertCount(struct RpAtomic * model /* r1+0x8 */) {}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80D61998
// Range: 0x80117404 -> 0x80117524
unsigned int iModelVertEval(struct RpAtomic * model /* r22 */, unsigned int index /* r29 */, unsigned int count /* r31 */, struct RwMatrixTag * mat /* r23 */, struct xVec3 * vert /* r30 */, struct xVec3 * dest /* r24 */) {
    // Local variables
    struct RpGeometry * geom; // r26
    unsigned int numV; // r27
    struct RpSkin * skin; // r28
}

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
// Range: 0x80117524 -> 0x80117824
static void SkinXform(struct xVec3 * dest /* r26 */, const struct xVec3 * vert /* r29 */, struct RwMatrixTag * mat /* r20 */, const struct RwMatrixTag * skinmat /* r1+0x8 */, const float * wt /* r17 */, const unsigned int * idx /* r25 */, unsigned int count /* r18 */) {
    // Local variables
    unsigned int catMatFlags[2]; // r1+0xC
    struct RwMatrixTag * catmat; // r24
    struct RwMatrixTag * rootmat; // r31
    unsigned int i; // r23
    unsigned int midx; // r27
    struct xVec3 accumV; // r1+0x14
    struct RwMatrixTag * pMatrix; // r30
    const float * fwt; // r28
    unsigned int wtidx; // r22
    unsigned int maxwt; // r21

    // References
    // -> static char __FUNCTION__[10];
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
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D619A2
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
// Range: 0x80117824 -> 0x80117A6C
static unsigned int iModelTagUserData(struct xModelTag * tag /* r26 */, const struct RpAtomic * model /* r23 */, float x /* f27 */, float y /* f28 */, float z /* f29 */, int closeV /* r28 */) {
    // Local variables
    int i; // r27
    int count; // r22
    struct RpUserDataArray * array; // r29
    struct RpUserDataArray * testarray; // r25
    float distSqr; // f31
    float closeDistSqr; // f30
    int numTags; // r24
    int t; // r30
    struct xModelTag * tagList; // r31

    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x10
struct RwMatrixWeights {
    // Members
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// Range: 0x80117AB0 -> 0x80117D08
static unsigned int iModelTagInternal(struct xModelTag * tag /* r31 */, const struct RpAtomic * model /* r23 */, float x /* f29 */, float y /* f30 */, float z /* f31 */, int closeV /* r28 */) {
    // Local variables
    struct RpGeometry * geom; // r25
    struct RwV3d * vert; // r30
    int v; // r29
    int numV; // r24
    float distSqr; // f28
    float closeDistSqr; // f27
    struct RpSkin * skin; // r26
    const struct RwMatrixWeights * wt; // r27
}

// Range: 0x80117D08 -> 0x80117D54
unsigned int iModelTagSetup(struct xModelTag * tag /* r1+0x8 */, const struct RpAtomic * model /* r1+0xC */, float x /* r1+0x10 */, float y /* r1+0x14 */, float z /* r1+0x18 */) {}

// total size: 0x2C
struct xModelTagWithNormal : public xModelTag {
    // Members
    struct xVec3 normal; // offset 0x20, size 0xC
};
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D619B4
// Range: 0x80117D54 -> 0x80117EFC
void iModelTagEval(struct RpAtomic * model /* r1+0x8 */, const struct xModelTag * tag /* r31 */, struct RwMatrixTag * mat /* r26 */, struct xVec3 * dest /* r27 */) {
    // Local variables
    struct RpGeometry * geom; // r30
    struct RpSkin * skin; // r29
    const struct RwMatrixTag * skinmat; // r28

    // References
    // -> static char __FUNCTION__[14];
}

static struct RwV3d wireVertBuf[6000]; // size: 0x11940, address: 0x80C70430
static unsigned int wireIndexBuf[40000]; // size: 0x27100, address: 0x80C81D70
struct xMat4x3 g_I3; // size: 0x40, address: 0x80B7FA80
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
// Range: 0x80117EFC -> 0x80118118
void iModelDrawWire(struct RpAtomic * model /* r27 */, struct RwMatrixTag * mat /* r1+0x8 */, struct xColor_tag & color /* r25 */) {
    // Local variables
    unsigned int numVert; // r29
    struct RpGeometry * geom; // r31
    unsigned int i; // r30
    unsigned int numIndices; // r28

    // References
    // -> struct xMat4x3 g_I3;
    // -> static unsigned int wireIndexBuf[40000];
    // -> static struct RwV3d wireVertBuf[6000];
}

static struct RwRGBA sMaterialColor[32]; // size: 0x80, address: 0x80CA8E70
static struct RwTexture * sMaterialTexture[32]; // size: 0x80, address: 0x80CA8EF0
static unsigned char sMaterialAlpha[32]; // size: 0x20, address: 0x80CA8F70
static unsigned int sMaterialIdx; // size: 0x4, address: 0x80D69B20
static unsigned int sMaterialFlags; // size: 0x4, address: 0x80D69B24
static struct RpAtomic * sLastMaterial; // size: 0x4, address: 0x80D69B28
static char __FUNCTION__[23]; // size: 0x17, address: 0x80516BB6
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// Range: 0x80118118 -> 0x8011833C
void iModelSetMaterialAlpha(struct RpAtomic * model /* r28 */, unsigned char alpha /* r1+0x8 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    int i; // r30
    struct RpMaterial * material; // r27
    const struct RwRGBA * col; // r29
    struct RwRGBA new_col; // r1+0x9

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned char sMaterialAlpha[32];
    // -> static unsigned int sMaterialIdx;
    // -> static char __FUNCTION__[23];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D619C2
// Range: 0x8011833C -> 0x801185BC
void iModelResetMaterial(struct RpAtomic * model /* r28 */) {
    // Local variables
    struct RpGeometry * geom; // r29
    int i; // r31
    struct RpMaterial * material; // r30
    struct RwRGBA newColor; // r1+0x10
    struct RwRGBA newColor; // r1+0xC
    struct RwRGBA newColor; // r1+0x8

    // References
    // -> static unsigned int sMaterialFlags;
    // -> static struct RwTexture * sMaterialTexture[32];
    // -> static unsigned char sMaterialAlpha[32];
    // -> static struct RwRGBA sMaterialColor[32];
    // -> static char __FUNCTION__[20];
    // -> static struct RpAtomic * sLastMaterial;
}

static char __FUNCTION__[27]; // size: 0x1B, address: 0x80516BCD
// Range: 0x801185BC -> 0x80118688
static struct RpMaterial * iModelSetMaterialTextureCB(struct RpMaterial * material /* r31 */, void * data /* r1+0x8 */) {
    // References
    // -> static unsigned int sMaterialIdx;
    // -> static struct RwTexture * sMaterialTexture[32];
    // -> static char __FUNCTION__[27];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x80516BE8
// Range: 0x80118688 -> 0x80118828
void iModelSetMaterialTexture(struct RpAtomic * model /* r31 */, void * texture /* r29 */) {
    // Local variables
    struct RpGeometry * geom; // r30

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned int sMaterialIdx;
    // -> static char __FUNCTION__[25];
}

// Range: 0x80118828 -> 0x80118968
static struct RpMaterial * iModelMaterialMulCB(struct RpMaterial * material /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    const struct RwRGBA * rw_col; // r29
    struct RwRGBA col; // r1+0xC
    float tmp; // f31
    float * mods; // r31

    // References
    // -> static unsigned int sMaterialIdx;
    // -> static struct RwRGBA sMaterialColor[32];
}

// Range: 0x80118968 -> 0x801189A8
static void U8_COLOR_CLAMP(unsigned char & destu8 /* r3 */, float srcf32 /* f1 */) {}

// Range: 0x801189CC -> 0x80118A80
void iModelMaterialMul(struct RpAtomic * model /* r30 */, float rm /* r1+0x8 */, float gm /* r1+0xC */, float bm /* r1+0x10 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    float cols[3]; // r1+0x14

    // References
    // -> static struct RpAtomic * sLastMaterial;
    // -> static unsigned int sMaterialFlags;
    // -> static unsigned int sMaterialIdx;
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80516C01
// Range: 0x80118A80 -> 0x80119388
void iModelAnimBoundPrepare(struct RpAtomic * model /* r26 */) {
    // Local variables
    struct RpHAnimHierarchy * pHier; // r1+0x4C
    int numbones; // r1+0x48
    int i; // r31
    int j; // r19
    int count; // r1+0x44
    struct RpUserDataArray * usrdat; // r22
    struct RpSkin * skin; // r1+0x40
    const unsigned int * boneidx; // r21
    const struct RwMatrixWeights * bonewt; // r18
    struct RwV3d * vert; // r29
    int numVert; // r1+0x3C
    int * cntarr; // r24
    struct xBox * boxarr; // r30
    const float * currwt; // r1+0x38
    unsigned int curridx; // r1+0x34
    unsigned int matidx; // r27
    struct xSphere * spharr; // r28
    const float * currwt; // r1+0x30
    float dist2; // f31
    unsigned int curridx; // r1+0x2C
    unsigned int matidx; // r20
    int numused; // r17
    const struct RwMatrixTag * skinmat; // r1+0x28
    unsigned int AnimBoundUsrDatArray[2]; // r1+0x50
    int index; // r1+0x24
    int * idata; // r1+0x20
    int * idata_boneidx; // r1+0x1C
    struct xSphere * idata_sphere; // r1+0x18
    int * idata; // r25
    int * idata_boneidx; // r1+0x14
    int * idata_sphstart; // r23
    int * idata_sphactual; // r1+0x10
    int numel; // r1+0xC

    // References
    // -> static char __FUNCTION__[23];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80516C18
// Range: 0x80119388 -> 0x8011990C
void iModelAnimBoundWorld(struct xBox * box /* r31 */, struct xBox * combinedBox /* r30 */, struct RpAtomic * model /* r23 */, struct RwMatrixTag * mat /* r29 */, struct RwMatrixTag * bonemat /* r1+0x8 */) {
    // Local variables
    int i; // r28
    int * data; // r27
    int count; // r22
    struct RpUserDataArray * usrdat; // r26
    int numbones; // r21
    int * boneidx; // r24
    struct xSphere * bonesph; // r25
    float maxscale; // r1+0x20
    float scaleX; // f30
    float scaleY; // f29
    float scaleZ; // f28
    struct xVec3 sphcenter; // r1+0x24
    float scalerad; // f31

    // References
    // -> static char __FUNCTION__[21];
}


