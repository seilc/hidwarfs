/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\gc\iEnv.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D80A0 -> 0x800D99F0
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
static int sBeginDrawFX; // size: 0x4, address: 0x80C078F0
unsigned char iEnvAllJSPSActive; // size: 0x1, address: 0x80C078F4
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
static struct RpWorld * sPipeWorld; // size: 0x4, address: 0x80C078F8
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
static struct RwCamera * sPipeCamera; // size: 0x4, address: 0x80C078FC
enum RpGXTevColorArg {
    rpGX_CC_CPREV = 0,
    rpGX_CC_APREV = 1,
    rpGX_CC_C0 = 2,
    rpGX_CC_A0 = 3,
    rpGX_CC_C1 = 4,
    rpGX_CC_A1 = 5,
    rpGX_CC_C2 = 6,
    rpGX_CC_A2 = 7,
    rpGX_CC_TEXC = 8,
    rpGX_CC_TEXA = 9,
    rpGX_CC_RASC = 10,
    rpGX_CC_RASA = 11,
    rpGX_CC_ONE = 12,
    rpGX_CC_HALF = 13,
    rpGX_CC_KONST = 14,
    rpGX_CC_ZERO = 15,
};
enum RpGXTevAlphaArg {
    rpGX_CA_APREV = 0,
    rpGX_CA_A0 = 1,
    rpGX_CA_A1 = 2,
    rpGX_CA_A2 = 3,
    rpGX_CA_TEXA = 4,
    rpGX_CA_RASA = 5,
    rpGX_CA_KONST = 6,
    rpGX_CA_ZERO = 7,
};
enum RpGXTevOp {
    rpGX_TEV_ADD = 0,
    rpGX_TEV_SUB = 1,
    rpGX_TEV_COMP_R8_GT = 8,
    rpGX_TEV_COMP_R8_EQ = 9,
    rpGX_TEV_COMP_GR16_GT = 10,
    rpGX_TEV_COMP_GR16_EQ = 11,
    rpGX_TEV_COMP_BGR24_GT = 12,
    rpGX_TEV_COMP_BGR24_EQ = 13,
    rpGX_TEV_COMP_RGB8_GT = 14,
    rpGX_TEV_COMP_RGB8_EQ = 15,
    rpGX_TEV_COMP_A8_GT = 14,
    rpGX_TEV_COMP_A8_EQ = 15,
};
enum RpGXTevBias {
    rpGX_TB_ZERO = 0,
    rpGX_TB_ADDHALF = 1,
    rpGX_TB_SUBHALF = 2,
    rpGX_MAX_TEVBIAS = 3,
};
enum RpGXTevScale {
    rpGX_CS_SCALE_1 = 0,
    rpGX_CS_SCALE_2 = 1,
    rpGX_CS_SCALE_4 = 2,
    rpGX_CS_DIVIDE_2 = 3,
    rpGX_MAX_TEVSCALE = 4,
};
enum RpGXTevRegID {
    rpGX_TEVPREV = 0,
    rpGX_TEVREG0 = 1,
    rpGX_TEVREG1 = 2,
    rpGX_TEVREG2 = 3,
    rpGX_MAX_TEVREG = 4,
};
enum RpGXTevKColorSel {
    rpGX_TEV_KCSEL_1 = 0,
    rpGX_TEV_KCSEL_7_8 = 1,
    rpGX_TEV_KCSEL_3_4 = 2,
    rpGX_TEV_KCSEL_5_8 = 3,
    rpGX_TEV_KCSEL_1_2 = 4,
    rpGX_TEV_KCSEL_3_8 = 5,
    rpGX_TEV_KCSEL_1_4 = 6,
    rpGX_TEV_KCSEL_1_8 = 7,
    rpGX_TEV_KCSEL_K0 = 12,
    rpGX_TEV_KCSEL_K1 = 13,
    rpGX_TEV_KCSEL_K2 = 14,
    rpGX_TEV_KCSEL_K3 = 15,
    rpGX_TEV_KCSEL_K0_R = 16,
    rpGX_TEV_KCSEL_K1_R = 17,
    rpGX_TEV_KCSEL_K2_R = 18,
    rpGX_TEV_KCSEL_K3_R = 19,
    rpGX_TEV_KCSEL_K0_G = 20,
    rpGX_TEV_KCSEL_K1_G = 21,
    rpGX_TEV_KCSEL_K2_G = 22,
    rpGX_TEV_KCSEL_K3_G = 23,
    rpGX_TEV_KCSEL_K0_B = 24,
    rpGX_TEV_KCSEL_K1_B = 25,
    rpGX_TEV_KCSEL_K2_B = 26,
    rpGX_TEV_KCSEL_K3_B = 27,
    rpGX_TEV_KCSEL_K0_A = 28,
    rpGX_TEV_KCSEL_K1_A = 29,
    rpGX_TEV_KCSEL_K2_A = 30,
    rpGX_TEV_KCSEL_K3_A = 31,
};
enum RpGXTevKAlphaSel {
    rpGX_TEV_KASEL_1 = 0,
    rpGX_TEV_KASEL_7_8 = 1,
    rpGX_TEV_KASEL_3_4 = 2,
    rpGX_TEV_KASEL_5_8 = 3,
    rpGX_TEV_KASEL_1_2 = 4,
    rpGX_TEV_KASEL_3_8 = 5,
    rpGX_TEV_KASEL_1_4 = 6,
    rpGX_TEV_KASEL_1_8 = 7,
    rpGX_TEV_KASEL_K0_R = 16,
    rpGX_TEV_KASEL_K1_R = 17,
    rpGX_TEV_KASEL_K2_R = 18,
    rpGX_TEV_KASEL_K3_R = 19,
    rpGX_TEV_KASEL_K0_G = 20,
    rpGX_TEV_KASEL_K1_G = 21,
    rpGX_TEV_KASEL_K2_G = 22,
    rpGX_TEV_KASEL_K3_G = 23,
    rpGX_TEV_KASEL_K0_B = 24,
    rpGX_TEV_KASEL_K1_B = 25,
    rpGX_TEV_KASEL_K2_B = 26,
    rpGX_TEV_KASEL_K3_B = 27,
    rpGX_TEV_KASEL_K0_A = 28,
    rpGX_TEV_KASEL_K1_A = 29,
    rpGX_TEV_KASEL_K2_A = 30,
    rpGX_TEV_KASEL_K3_A = 31,
};
// total size: 0x50
struct RpGameCubeTevOp {
    // Members
    enum RpGXTevColorArg colorA; // offset 0x0, size 0x4
    enum RpGXTevColorArg colorB; // offset 0x4, size 0x4
    enum RpGXTevColorArg colorC; // offset 0x8, size 0x4
    enum RpGXTevColorArg colorD; // offset 0xC, size 0x4
    enum RpGXTevAlphaArg alphaA; // offset 0x10, size 0x4
    enum RpGXTevAlphaArg alphaB; // offset 0x14, size 0x4
    enum RpGXTevAlphaArg alphaC; // offset 0x18, size 0x4
    enum RpGXTevAlphaArg alphaD; // offset 0x1C, size 0x4
    enum RpGXTevOp colorOp; // offset 0x20, size 0x4
    enum RpGXTevBias colorBias; // offset 0x24, size 0x4
    enum RpGXTevScale colorScale; // offset 0x28, size 0x4
    unsigned char colorClamp; // offset 0x2C, size 0x1
    enum RpGXTevRegID colorOutReg; // offset 0x30, size 0x4
    enum RpGXTevOp alphaOp; // offset 0x34, size 0x4
    enum RpGXTevBias alphaBias; // offset 0x38, size 0x4
    enum RpGXTevScale alphaScale; // offset 0x3C, size 0x4
    unsigned char alphaClamp; // offset 0x40, size 0x1
    enum RpGXTevRegID alphaOutReg; // offset 0x44, size 0x4
    enum RpGXTevKColorSel colorSel; // offset 0x48, size 0x4
    enum RpGXTevKAlphaSel alphaSel; // offset 0x4C, size 0x4
};
static struct RpGameCubeTevOp sTevOpAddLightmap; // size: 0x50, address: 0x80430D00
static struct RpGameCubeTevOp sTevOpModulate; // size: 0x50, address: 0x80430D50
enum RpGXTexGenType {
    rpGX_TG_MTX3x4 = 0,
    rpGX_TG_MTX2x4 = 1,
    rpGX_TG_BUMP0 = 2,
    rpGX_TG_BUMP1 = 3,
    rpGX_TG_BUMP2 = 4,
    rpGX_TG_BUMP3 = 5,
    rpGX_TG_BUMP4 = 6,
    rpGX_TG_BUMP5 = 7,
    rpGX_TG_BUMP6 = 8,
    rpGX_TG_BUMP7 = 9,
    rpGX_TG_SRTG = 10,
};
enum RpGXTexGenSrc {
    rpGX_TG_POS = 0,
    rpGX_TG_NRM = 1,
    rpGX_TG_BINRM = 2,
    rpGX_TG_TANGENT = 3,
    rpGX_TG_TEX0 = 4,
    rpGX_TG_TEX1 = 5,
    rpGX_TG_TEX2 = 6,
    rpGX_TG_TEX3 = 7,
    rpGX_TG_TEX4 = 8,
    rpGX_TG_TEX5 = 9,
    rpGX_TG_TEX6 = 10,
    rpGX_TG_TEX7 = 11,
    rpGX_TG_TEXCOORD0 = 12,
    rpGX_TG_TEXCOORD1 = 13,
    rpGX_TG_TEXCOORD2 = 14,
    rpGX_TG_TEXCOORD3 = 15,
    rpGX_TG_TEXCOORD4 = 16,
    rpGX_TG_TEXCOORD5 = 17,
    rpGX_TG_TEXCOORD6 = 18,
    rpGX_TG_COLOR0 = 19,
    rpGX_TG_COLOR1 = 20,
};
// total size: 0x18
struct RpGameCubeTexGen {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    enum RpGXTexGenType func; // offset 0x4, size 0x4
    enum RpGXTexGenSrc srcParam; // offset 0x8, size 0x4
    unsigned int mtx; // offset 0xC, size 0x4
    unsigned int postMtx; // offset 0x10, size 0x4
    unsigned short scaleS; // offset 0x14, size 0x2
    unsigned short scaleT; // offset 0x16, size 0x2
};
static struct RpGameCubeTexGen sTexGenIdentity; // size: 0x18, address: 0x80BFEEE0
enum RwPlatformID {
    rwID_PCD3D7 = 1,
    rwID_PCOGL = 2,
    rwID_MAC = 3,
    rwID_PS2 = 4,
    rwID_XBOX = 5,
    rwID_GAMECUBE = 6,
    rwID_SOFTRAS = 7,
    rwID_PCD3D8 = 8,
    rwID_PCD3D9 = 9,
    rwPLATFROMIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x30
struct RpMTEffect {
    // Members
    enum RwPlatformID platformID; // offset 0x0, size 0x4
    unsigned int refCount; // offset 0x4, size 0x4
    char name[32]; // offset 0x8, size 0x20
    struct RwLLLink dictLink; // offset 0x28, size 0x8
};
static struct RpMTEffect * sEffectLightMap; // size: 0x4, address: 0x80C07900
static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFEEF8
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
// total size: 0x0
struct RpMultiTexture {};
// Range: 0x800D80A0 -> 0x800D83A0
static struct RpAtomic * SetPipelineCB(struct RpAtomic * atomic /* r28 */) {
    // Local variables
    struct RpMaterialList * matList; // r0
    int i; // r29
    unsigned int matEffect; // r0
    struct RpGeometry * geom; // r27
    int vert_size; // r26
    struct RwRGBA * vert_colors; // r5
    int j; // r6
    struct RwTexture * baseTexture; // r26
    struct RwTexture * lightmapTexture; // r27
    struct RpMaterial * material; // r0
    struct RpMultiTexture * multiTexture; // r25

    // References
    // -> static struct RpMTEffect * sEffectLightMap;
    // -> static char __FUNCTION__[14];
    // -> static struct RwCamera * sPipeCamera;
    // -> static struct RpWorld * sPipeWorld;
}

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
union /* @class$822iEnv_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$822iEnv_cpp */ {
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
// total size: 0x14
struct RwChunkHeaderInfo {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    unsigned int version; // offset 0x8, size 0x4
    unsigned int buildNum; // offset 0xC, size 0x4
    int isComplex; // offset 0x10, size 0x4
};
// total size: 0x8
struct RpGXColorS10 {
    // Members
    signed short r; // offset 0x0, size 0x2
    signed short g; // offset 0x2, size 0x2
    signed short b; // offset 0x4, size 0x2
    signed short a; // offset 0x6, size 0x2
};
enum RpGameCubeTexFrameID {
    rpGAMECUBETEXFRAME_NONE = 0,
    rpGAMECUBETEXFRAME_OBJECT = 1,
    rpGAMECUBETEXFRAME_WORLD = 2,
    rpGAMECUBETEXFRAME_CAMERA = 3,
    rpGAMECUBETEXFRAME_MISC0 = 16,
    rpGAMECUBETEXFRAME_MISC1 = 17,
    rpGAMECUBETEXFRAME_MISC2 = 18,
    rpGAMECUBETEXFRAME_MISC3 = 19,
    rpGAMECUBETEXFRAME_MISCMAX = 47,
    rpGAMECUBETEXFRAME_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0x3C
struct RpGameCubeTexMtx {
    // Members
    unsigned int offset; // offset 0x0, size 0x4
    enum RpGameCubeTexFrameID refFrame; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float data[3][4]; // offset 0xC, size 0x30
};
enum RpGXIndTexMtxID {
    rpGX_ITM_OFF = 0,
    rpGX_ITM_0 = 1,
    rpGX_ITM_1 = 2,
    rpGX_ITM_2 = 3,
    rpGX_ITM_S0 = 5,
    rpGX_ITM_S1 = 6,
    rpGX_ITM_S2 = 7,
    rpGX_ITM_T0 = 9,
    rpGX_ITM_T1 = 10,
    rpGX_ITM_T2 = 11,
};
// total size: 0x28
struct RpGameCubeIndMtx {
    // Members
    enum RpGXIndTexMtxID id; // offset 0x0, size 0x4
    enum RpGameCubeTexFrameID refFrame; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    float data[2][3]; // offset 0xC, size 0x18
    int scale; // offset 0x24, size 0x4
};
enum RpGXTexCoordID {
    rpGX_TEXCOORD0 = 0,
    rpGX_TEXCOORD1 = 1,
    rpGX_TEXCOORD2 = 2,
    rpGX_TEXCOORD3 = 3,
    rpGX_TEXCOORD4 = 4,
    rpGX_TEXCOORD5 = 5,
    rpGX_TEXCOORD6 = 6,
    rpGX_TEXCOORD7 = 7,
    rpGX_MAX_TEXCOORD = 8,
    rpGX_TEXCOORD_NULL = 255,
};
enum RpGXTexMapID {
    rpGX_TEXMAP0 = 0,
    rpGX_TEXMAP1 = 1,
    rpGX_TEXMAP2 = 2,
    rpGX_TEXMAP3 = 3,
    rpGX_TEXMAP4 = 4,
    rpGX_TEXMAP5 = 5,
    rpGX_TEXMAP6 = 6,
    rpGX_TEXMAP7 = 7,
    rpGX_MAX_TEXMAP = 8,
    rpGX_TEXMAP_NULL = 255,
    rpGX_TEX_DISABLE = 256,
};
enum RpGXIndTexScale {
    rpGX_ITS_1 = 0,
    rpGX_ITS_2 = 1,
    rpGX_ITS_4 = 2,
    rpGX_ITS_8 = 3,
    rpGX_ITS_16 = 4,
    rpGX_ITS_32 = 5,
    rpGX_ITS_64 = 6,
    rpGX_ITS_128 = 7,
    rpGX_ITS_256 = 8,
};
// total size: 0x14
struct RpGameCubeIndStage {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    enum RpGXTexCoordID texCoordID; // offset 0x4, size 0x4
    enum RpGXTexMapID texMapID; // offset 0x8, size 0x4
    enum RpGXIndTexScale scaleS; // offset 0xC, size 0x4
    enum RpGXIndTexScale scaleT; // offset 0x10, size 0x4
};
enum RpGXChannelID {
    rpGX_COLOR0 = 0,
    rpGX_COLOR1 = 1,
    rpGX_ALPHA0 = 2,
    rpGX_ALPHA1 = 3,
    rpGX_COLOR0A0 = 4,
    rpGX_COLOR1A1 = 5,
    rpGX_COLOR_ZERO = 6,
    rpGX_ALPHA_BUMP = 7,
    rpGX_ALPHA_BUMPN = 8,
    rpGX_COLOR_NULL = 255,
};
// total size: 0x64
struct RpGameCubeTevStage {
    // Members
    struct RpGameCubeTevOp op; // offset 0x0, size 0x50
    enum RpGXTexCoordID texCoordID; // offset 0x50, size 0x4
    enum RpGXTexMapID texMapID; // offset 0x54, size 0x4
    enum RpGXChannelID channelID; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned int indirect; // offset 0x60, size 0x4
};
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x5C
struct RpGameCubeMTConfig {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char maxNumTexGens; // offset 0x4, size 0x1
    unsigned char maxNumTevStages; // offset 0x5, size 0x1
    unsigned char maxNumTexMtx; // offset 0x6, size 0x1
    unsigned char maxNumIndStages; // offset 0x7, size 0x1
    unsigned char maxNumIndMtx; // offset 0x8, size 0x1
    unsigned char numTexGens; // offset 0x9, size 0x1
    unsigned char numTevStages; // offset 0xA, size 0x1
    unsigned char numTexMtx; // offset 0xB, size 0x1
    unsigned char numIndStages; // offset 0xC, size 0x1
    unsigned char numIndMtx; // offset 0xD, size 0x1
    struct RpGXColorS10 reg[4]; // offset 0xE, size 0x20
    struct RwRGBA kreg[4]; // offset 0x2E, size 0x10
    struct RpGameCubeTexMtx * texMtx; // offset 0x40, size 0x4
    struct RpGameCubeTexGen * texGens; // offset 0x44, size 0x4
    struct RpGameCubeIndMtx * indMtx; // offset 0x48, size 0x4
    struct RpGameCubeIndStage * indStages; // offset 0x4C, size 0x4
    struct RpGameCubeTevStage * tevStages; // offset 0x50, size 0x4
    enum RwBlendFunction srcBlend; // offset 0x54, size 0x4
    enum RwBlendFunction destBlend; // offset 0x58, size 0x4
};
// Range: 0x800D83A0 -> 0x800D8494
void iEnvStartup() {
    // Local variables
    struct RpGameCubeMTConfig * config; // r0

    // References
    // -> static struct RpGameCubeTexGen sTexGenIdentity;
    // -> static struct RpGameCubeTevOp sTevOpModulate;
    // -> static struct RpGameCubeTevOp sTevOpAddLightmap;
    // -> static struct RpMTEffect * sEffectLightMap;
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFEF08
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// Range: 0x800D8574 -> 0x800D876C
void iEnvLoadBegin(struct iEnv * env /* r31 */, int dataType /* r30 */, int count /* r29 */) {
    // Local variables
    struct RwBBox tmpbbox; // r1+0x8

    // References
    // -> static struct RwCamera * sPipeCamera;
    // -> static struct RpWorld * sPipeWorld;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> static char __FUNCTION__[14];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFEF18
// Range: 0x800D876C -> 0x800D88E8
unsigned char iEnvLoadJSP(struct iEnv * env /* r27 */, unsigned int aid /* r28 */, void * data /* r29 */, int dataType /* r30 */, int index /* r31 */) {
    // Local variables
    struct xJSPHeader * jsp; // r0

    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFEF24
// Range: 0x800D88E8 -> 0x800D89C8
void iEnvJSPVisibilityInc(struct iEnv * env /* r30 */, struct xJSPHeader * jsp /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80BFEF3C
// Range: 0x800D89C8 -> 0x800D8AA8
void iEnvJSPVisibilityDec(struct iEnv * env /* r30 */, struct xJSPHeader * jsp /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80BFEF54
// Range: 0x800D8AA8 -> 0x800D8B84
void iEnvJSPOn(struct iEnv * env /* r30 */, struct xJSPHeader * jsp /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[10];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFEF60
// Range: 0x800D8B84 -> 0x800D8C60
void iEnvJSPOff(struct iEnv * env /* r30 */, struct xJSPHeader * jsp /* r0 */) {
    // Local variables
    int i; // r6

    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x800D8C60 -> 0x800D8CD4
void iBuildJSPBound(const struct xClumpCollBSPTree * colltree /* r0 */, struct xBox & box /* r26 */) {
    // Local variables
    int j; // r28
    int k; // r27
}

// Range: 0x800D8CD4 -> 0x800D8D30
void iEnvLoadEnd(struct iEnv * env /* r31 */, int dataType /* r0 */) {
    // References
    // -> static struct RwCamera * sPipeCamera;
    // -> static struct RpWorld * sPipeWorld;
}

static char __FUNCTION__[9]; // size: 0x9, address: 0x80BFEF6C
// Range: 0x800D8D30 -> 0x800D8FD8
void iEnvFree(struct iEnv * env /* r31 */) {
    // Local variables
    int result; // r0
    int result; // r0
    int result; // r0

    // References
    // -> static char __FUNCTION__[9];
}

// Range: 0x800D8FD8 -> 0x800D8FDC
void iEnvDefaultLighting() {}

// Range: 0x800D8FDC -> 0x800D8FE0
void iEnvLightingBasics() {}

// total size: 0x28
struct RpCollisionTriangle {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    struct RwV3d point; // offset 0xC, size 0xC
    int index; // offset 0x18, size 0x4
    struct RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
static struct iEnv * lastEnv; // size: 0x4, address: 0x80C07904
// Range: 0x800D8FE0 -> 0x800D8FE8
void iEnvSetup(struct iEnv * env /* r0 */) {
    // References
    // -> static struct iEnv * lastEnv;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFEF78
// Range: 0x800D8FE8 -> 0x800D90E8
void iEnvRender(struct iEnv * env /* r30 */, unsigned char alpha /* r31 */) {
    // References
    // -> static struct iEnv * lastEnv;
    // -> static char __FUNCTION__[11];
}

struct RwCamera * globalCamera; // size: 0x4, address: 0x80C08D88
static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFEF84
// Range: 0x800D90E8 -> 0x800D91A0
void iEnvEndRenderFX(struct iEnv * env /* r0 */) {
    // References
    // -> static int sBeginDrawFX;
    // -> struct RwCamera * globalCamera;
    // -> static char __FUNCTION__[16];
    // -> static struct iEnv * lastEnv;
}

static struct iEnv * sCmpEnv; // size: 0x4, address: 0x80C07908
static int sColorCompare; // size: 0x4, address: 0x80C0790C
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
// Range: 0x800D91A0 -> 0x800D93F8
static int CmpMatOrder(void * a /* r0 */, void * b /* r0 */) {
    // Local variables
    const struct iEnvMatOrder * ael; // r0
    const struct iEnvMatOrder * bel; // r0
    struct xJSPNodeInfo * anod; // r28
    struct xJSPNodeInfo * bnod; // r27
    int decalcmp; // r0
    struct RpMaterial * amat; // r31
    struct RpMaterial * bmat; // r30
    enum RpMatFXMaterialFlags matfx1; // r0
    enum RpMatFXMaterialFlags matfx2; // r0
    int sidecmp; // r0
    char * atex; // r3
    char * btex; // r4
    int namecmp; // r0
    struct RwTexture * dual1; // r0
    struct RwTexture * dual2; // r0
    char * tname1; // r0
    char * tname2; // r4
    unsigned int acol; // r0
    unsigned int bcol; // r3

    // References
    // -> static int sColorCompare;
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFEF94
// Range: 0x800D93F8 -> 0x800D96A4
static void iEnvMatOrderSetup(struct iEnv * env /* r21 */) {
    // Local variables
    int i; // r6
    int currMatGroup; // r25
    int nodeIndex; // r24
    struct RwLLLink * cur; // r23
    struct RwLLLink * end; // r22
    struct RpClump * clump; // r3
    int i; // r5

    // References
    // -> static int sColorCompare;
    // -> static struct iEnv * sCmpEnv;
    // -> static char __FUNCTION__[18];
    // -> unsigned int gActiveHeap;
}

int _RwGameCubeRasterExtOffset; // size: 0x4, address: 0x80C09FD8
// Range: 0x800D96A4 -> 0x800D9908
static void iEnvMatOrderRenderGC(struct iEnv * env /* r23 */, unsigned char alpha /* r25 */) {
    // Local variables
    int i; // r31
    int backcullon; // r30
    int zbufferon; // r29
    struct iEnvMatOrder * currMatOrder; // r28
    int matOrderEnd; // r27
    struct RpAtomic * apAtom; // r26
    struct xJSPNodeInfo * nodeInfo; // r25
    unsigned int flagValue; // r0
    unsigned char alphaDiscard; // r24
    int i; // r0
    struct RwTexture * texture; // r4

    // References
    // -> int _RwGameCubeRasterExtOffset;
}

// Range: 0x800D9908 -> 0x800D998C
void iEnvLightPreRender(struct iEnv * env /* r28 */, struct RpLight * light /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800D998C -> 0x800D99F0
void iEnvLightPostRender(struct iEnv * env /* r29 */) {
    // Local variables
    int i; // r30
}


