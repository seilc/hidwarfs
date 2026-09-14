/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int paddata; // size: 0x4, address: 0x4A4B08
unsigned char rdata[32]; // size: 0x20, address: 0x4A5200
__int128 pad_dma_buf[16]; // size: 0x100, address: 0x4A5240
static class Ps * PsSky; // size: 0x4, address: 0x4A4B0C
static class RwSkel * Skel; // size: 0x4, address: 0x4A4B10
unsigned long gTimerValue; // size: 0x4, address: 0x4A5340
static unsigned long sweHighCount; // size: 0x4, address: 0x4A5348
static signed int skyTimerHandlerHid; // size: 0x4, address: 0x4A2B08
static signed int keybHandle; // size: 0x4, address: 0x0
static class _RwMemoryFunctions bugWorkAround; // size: 0x10, address: 0x4A5350
// total size: 0x40
struct /* @anon0 */ {} Ps::__vtable; // size: 0x40, address: 0x4A26E0
class RWInfo gRWInfo; // size: 0x8, address: 0xB02B80
// total size: 0x40
struct /* @anon1 */ {} Platform::__vtable; // size: 0x40, address: 0x4A2720
signed int TimerHandler(signed int); // size: 0x0, address: 0x204920
void * private_calloc(unsigned int, unsigned int); // size: 0x0, address: 0x203FD0
void * private_realloc(void *, unsigned int); // size: 0x0, address: 0x204050
void private_free(void *); // size: 0x0, address: 0x204110
void * private_malloc(unsigned int); // size: 0x0, address: 0x204140
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x4400D8
void DebugMessageHandler(enum _RwDebugType, char *); // size: 0x0, address: 0x2049F0
// total size: 0x10
class _RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x30
class _RxPacket {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class _RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class _RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class _RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0x2C
class _RxPipeline {
    // Members
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class _RxPipelineNode * nodes; // offset 0x8, size 0x4
    void * nodesBlock; // offset 0xC, size 0x4
    unsigned int packetNumClusterSlots; // offset 0x10, size 0x4
    enum _rxEmbeddedPacketState embeddedPacketState; // offset 0x14, size 0x4
    class _RxPacket * embeddedPacket; // offset 0x18, size 0x4
    unsigned int numInputRequirements; // offset 0x1C, size 0x4
    class _RxPipelineRequiresCluster * inputRequirements; // offset 0x20, size 0x4
    unsigned int * superBlock; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
};
// total size: 0x34
class _RwRaster {
    // Members
public:
    class _RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
class _RsPadButtonStatus {
    // Members
public:
    signed int padID; // offset 0x0, size 0x4
    unsigned int padButtons; // offset 0x4, size 0x4
};
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class Platform {
    // Members
public:
    signed int quit; // offset 0x0, size 0x4
};
// total size: 0x40
struct /* @anon0 */ {};
// total size: 0x10
class _RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x8
class RWInfo {
    // Members
public:
    class AppCamera * m_camera; // offset 0x0, size 0x4
    class RwSkel * m_skel; // offset 0x4, size 0x4
};
// total size: 0xC
class _RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum _RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum _RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x20
class _RxPipelineNode {
    // Members
public:
    class _RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class _RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class _RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x18
class _rwResEntryTag {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class _rwResEntryTag * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class _rwResEntryTag *); // offset 0x14, size 0x4
};
// total size: 0x18
class _RxHeap {
    // Members
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class _rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class _rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class _rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
};
// total size: 0x24
class AppCamera : public Camera {
    // Members
public:
    class _RwRaster * backdrop; // offset 0x10, size 0x4
    float cameraDistance; // offset 0x14, size 0x4
    class _RwV2d offset; // offset 0x18, size 0x8
    class _RpWorld * world; // offset 0x20, size 0x4
};
// total size: 0x20
class _rxHeapBlockHeader {
    // Members
public:
    class _rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class _rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x18
class RwSkel {
    // Members
public:
    char * appName; // offset 0x0, size 0x4
    signed int maximumWidth; // offset 0x4, size 0x4
    signed int maximumHeight; // offset 0x8, size 0x4
    class RsMouse * mouse; // offset 0xC, size 0x4
    class Platform * ps; // offset 0x10, size 0x4
};
// total size: 0x8
class _rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class _rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x14
class _RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class _rxReq * req; // offset 0x8, size 0x4
    void * initialisationData; // offset 0xC, size 0x4
    unsigned int initialisationDataSize; // offset 0x10, size 0x4
};
// total size: 0x1C
class _RpMaterial {
    // Members
public:
    class _RwTexture * texture; // offset 0x0, size 0x4
    class _RwRGBA color; // offset 0x4, size 0x4
    class _RxPipeline * pipeline; // offset 0x8, size 0x4
    class _RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x14
class RsMouse {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwRaster * raster; // offset 0x8, size 0x4
    class PsMouse * psmouse; // offset 0xC, size 0x4
    signed int draw; // offset 0x10, size 0x4
};
// total size: 0x4
class _RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x60
class _RwTexture {
    // Members
public:
    class _RwRaster * raster; // offset 0x0, size 0x4
    class _RwTexDictionary * dict; // offset 0x4, size 0x4
    class _RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum _RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum _RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum _RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
enum _RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class _RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x8
class _RxPipelineCluster {
    // Members
public:
    class _RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class PsMouse {};
// total size: 0x40
class _RxNodeDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class _RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class _RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum _RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
enum _RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class Ps : public Platform {
    // Members
public:
    signed int fullScreen; // offset 0x8, size 0x4
    class _RwV2d lastMousePos; // offset 0xC, size 0x8
    signed int validDelta; // offset 0x14, size 0x4
};
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0xC
class _RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum _RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class _RwObjectHasFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLLLink lFrame; // offset 0x8, size 0x8
    class _RwObjectHasFrame * (* sync)(class _RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x40
struct /* @anon1 */ {};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class _RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0xC
class _RxPipelineRequiresCluster {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x18
class _RwTexDictionary {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList texturesInDict; // offset 0x8, size 0x8
    class _RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x60
class _RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class _RpPolygon * polygons; // offset 0x4, size 0x4
    class _RwV3d * vertices; // offset 0x8, size 0x4
    class _RpVertexNormal * normals; // offset 0xC, size 0x4
    class _RwTexCoords * vertexTexCoords; // offset 0x10, size 0x4
    class _RwRGBA * preLitLum; // offset 0x14, size 0x4
    class _rwResEntryTag * repEntry; // offset 0x18, size 0x4
    class _RwLinkList collAtomicsInWorldSector; // offset 0x1C, size 0x8
    class _RwLinkList noCollAtomicsInWorldSector; // offset 0x24, size 0x8
    class _RwLinkList lightsInWorldSector; // offset 0x2C, size 0x8
    class _RwBBox boundingBox; // offset 0x34, size 0x18
    class _RpCollSector * colSectorRoot; // offset 0x4C, size 0x4
    class _RpMeshHeader * mesh; // offset 0x50, size 0x4
    class _RxPipeline * pipeline; // offset 0x54, size 0x4
    unsigned short matListWindowBase; // offset 0x58, size 0x2
    unsigned short numVertices; // offset 0x5A, size 0x2
    unsigned short numPolygons; // offset 0x5C, size 0x2
};
// total size: 0x0
class _rxReq {};
// total size: 0x8
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x74
class _RpWorld {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    enum _rpWorldRenderOrder renderOrder; // offset 0x8, size 0x4
    class _RpMaterialList matList; // offset 0xC, size 0xC
    class _RpSector * rootSector; // offset 0x18, size 0x4
    signed int numClumpsInWorld; // offset 0x1C, size 0x4
    class _RwLLLink * currentClumpLink; // offset 0x20, size 0x4
    class _RwLinkList clumpList; // offset 0x24, size 0x8
    class _RwLinkList lightList; // offset 0x2C, size 0x8
    class _RwLinkList directionalLightList; // offset 0x34, size 0x8
    class _RwV3d worldOrigin; // offset 0x3C, size 0xC
    class _RwBBox boundingBox; // offset 0x48, size 0x18
    class _RwSurfaceProperties surfaceProps; // offset 0x60, size 0xC
    class _RpWorldSector * (* renderCallBack)(class _RpWorldSector *); // offset 0x6C, size 0x4
    class _RxPipeline * pipeline; // offset 0x70, size 0x4
};
// total size: 0x10
class _RwMemoryFunctions {
    // Members
public:
    void * (* rwmalloc)(unsigned int); // offset 0x0, size 0x4
    void (* rwfree)(void *); // offset 0x4, size 0x4
    void * (* rwrealloc)(void *, unsigned int); // offset 0x8, size 0x4
    void * (* rwcalloc)(unsigned int, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
// total size: 0x190
class _RwCamera {
    // Members
public:
    class _RwObjectHasFrame object; // offset 0x0, size 0x14
    enum _RwCameraProjection projectionType; // offset 0x14, size 0x4
    class _RwCamera * (* beginUpdate)(class _RwCamera *); // offset 0x18, size 0x4
    class _RwCamera * (* endUpdate)(class _RwCamera *); // offset 0x1C, size 0x4
    class _RwMatrix viewMatrix; // offset 0x20, size 0x40
    class _RwRaster * frameBuffer; // offset 0x60, size 0x4
    class _RwRaster * zBuffer; // offset 0x64, size 0x4
    class _RwV2d viewWindow; // offset 0x68, size 0x8
    class _RwV2d recipViewWindow; // offset 0x70, size 0x8
    class _RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    unsigned short renderFrame; // offset 0x94, size 0x2
    class _RwFrustumPlane frustumPlanes[6]; // offset 0x98, size 0x78
    class _RwBBox frustumBoundBox; // offset 0x110, size 0x18
    class _RwV3d frustumCorners[8]; // offset 0x128, size 0x60
};
// total size: 0x10
class Camera {
    // Members
public:
    class _RwCamera * camera; // offset 0x0, size 0x4
    signed int m_Preset; // offset 0x4, size 0x4
    float m_TetherLength; // offset 0x8, size 0x4
    float m_TetherHeightPerc; // offset 0xC, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x14
class _RxIoSpec {
    // Members
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class _RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum _RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class _RxOutputSpec * outputs; // offset 0x10, size 0x4
};
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
enum _RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODEFSAA0 = 8,
    rwVIDEOMODEFSAA1 = 16,
    rwVIDEOMODEforceEnumSize = 2147483647,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x1C
class _RxNodeMethods {
    // Members
public:
    signed int (* nodeBody)(class _RxPipelineNode *, class _RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class _RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class _RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class _RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class _RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class _RxPipelineNode *, class _RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class _RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class _RwFrustumPlane {
    // Members
public:
    class _RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x40
class _RwMatrix {
    // Members
public:
    class _RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class _RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
class _RxClusterUnion {
    // Members
public:
    union { // inferred
        class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
        class _RxPipelineCluster * clusterRef; // offset 0x0, size 0x4
    };
};
enum _RwDebugType {
    rwNADEBUGTYPE = 0,
    rwDEBUGASSERT = 1,
    rwDEBUGERROR = 2,
    rwDEBUGMESSAGE = 3,
    rwDEBUGTRACE = 4,
    rwDEBUGTYPEFORCEENUMSIZEINT = 2147483647,
};
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class _RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum _RwVideoModeFlag flags; // offset 0xC, size 0x4
};
// total size: 0x1C
class _RxCluster {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class _RxClusterUnion clusterUnion; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x10
class _RwPlane {
    // Members
public:
    class _RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203D40 -> 0x00203EA4
*/
// Range: 0x203D40 -> 0x203EA4
signed int p2RenderWareInit() {
    /* anonymous block */ {
        // Range: 0x203D40 -> 0x203EA4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203F10 -> 0x00203F1C
*/
// Range: 0x203F10 -> 0x203F1C
signed int NativeTextureSupport() {
    /* anonymous block */ {
        // Range: 0x203F10 -> 0x203F1C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203F20 -> 0x00203F80
*/
// Range: 0x203F20 -> 0x203F80
signed int InstallFileSystem() {
    /* anonymous block */ {
        // Range: 0x203F20 -> 0x203F80
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203F80 -> 0x00203FCC
*/
// Range: 0x203F80 -> 0x203FCC
class _RwMemoryFunctions * GetMemoryFunctions() {
    /* anonymous block */ {
        // Range: 0x203F80 -> 0x203FCC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00203FD0 -> 0x00204050
*/
// Range: 0x203FD0 -> 0x204050
static void * private_calloc(unsigned int a /* r2 */, unsigned int b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x203FD0 -> 0x204050
        void * newMem; // r2
        unsigned int realSize; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204050 -> 0x00204110
*/
// Range: 0x204050 -> 0x204110
static void * private_realloc(void * oldMem /* r18 */, unsigned int newSize /* r17 */) {
    /* anonymous block */ {
        // Range: 0x204050 -> 0x204110
        unsigned int oldSize; // r2
        void * newMem; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204110 -> 0x00204134
*/
// Range: 0x204110 -> 0x204134
static void private_free(void * alignedMem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204110 -> 0x204134
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204140 -> 0x0020419C
*/
// Range: 0x204140 -> 0x20419C
static void * private_malloc(unsigned int s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x204140 -> 0x20419C
        void * alignedMem; // r3
        void * newMem; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002041A0 -> 0x002041EC
*/
// Range: 0x2041A0 -> 0x2041EC
signed int SelectDevice() {
    /* anonymous block */ {
        // Range: 0x2041A0 -> 0x2041EC
        class _RwVideoMode videoMode; // r29+0x10
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002041F0 -> 0x002044E4
*/
// Range: 0x2041F0 -> 0x2044E4
void _handlePad() {
    /* anonymous block */ {
        // Range: 0x2041F0 -> 0x2044E4
        class _RwV2d delta; // r29+0x38
        class _RwV2d delta; // r29+0x30
        signed int dRighty; // r3
        signed int dRightx; // r4
        signed int dLefty; // r3
        signed int dLeftx; // r4
        unsigned int buttons; // r16
        class _RsPadButtonStatus padButtonsUp; // r29+0x28
        class _RsPadButtonStatus padButtonsDown; // r29+0x20
        unsigned int oldButtons; // @ 0x004A4B14
        unsigned char rightV; // @ 0x004A4B34
        unsigned char rightH; // @ 0x004A4B2C
        unsigned char leftV; // @ 0x004A4B24
        unsigned char leftH; // @ 0x004A4B1C
        signed char init; // @ 0x004A4B38
        signed char init; // @ 0x004A4B30
        signed char init; // @ 0x004A4B28
        signed char init; // @ 0x004A4B20
        signed char init; // @ 0x004A4B18
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002044F0 -> 0x002045FC
*/
// Range: 0x2044F0 -> 0x2045FC
static unsigned int remapButtons(signed int sceButtons /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2044F0 -> 0x2045FC
        unsigned int rsButtons; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204600 -> 0x0020479C
*/
// Range: 0x204600 -> 0x20479C
static signed int SkyPadOpen() {
    /* anonymous block */ {
        // Range: 0x204600 -> 0x20479C
        char _PADMAN[256]; // r29+0x210
        char _SIO2MAN[256]; // r29+0x110
        char buf[256]; // r29+0x10
        char _empty[1]; // @ 0x004A2B0C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002047A0 -> 0x002047AC
*/
// Range: 0x2047A0 -> 0x2047AC
char PathGetSeparator() {
    /* anonymous block */ {
        // Range: 0x2047A0 -> 0x2047AC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002047B0 -> 0x002047F4
*/
// Range: 0x2047B0 -> 0x2047F4
void PathnameDestroy(char * pathname /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2047B0 -> 0x2047F4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204800 -> 0x00204910
*/
// Range: 0x204800 -> 0x204910
char * PathnameCreate(char * pathname /* r17 */) {
    /* anonymous block */ {
        // Range: 0x204800 -> 0x204910
        char * charToConvert; // r2
        char * dstBuffer; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204910 -> 0x00204920
*/
// Range: 0x204910 -> 0x204920
unsigned int Timer() {
    /* anonymous block */ {
        // Range: 0x204910 -> 0x204920
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204920 -> 0x002049DC
*/
// Range: 0x204920 -> 0x2049DC
static signed int TimerHandler(signed int ca /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204920 -> 0x2049DC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002049E0 -> 0x002049F0
*/
// Range: 0x2049E0 -> 0x2049F0
void (* GetDebugMessageHandler())(enum _RwDebugType, char *) {
    /* anonymous block */ {
        // Range: 0x2049E0 -> 0x2049F0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002049F0 -> 0x00204A18
*/
// Range: 0x2049F0 -> 0x204A18
void DebugMessageHandler(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2049F0 -> 0x204A18
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204A20 -> 0x00204A4C
*/
// Range: 0x204A20 -> 0x204A4C
void CameraShowRaster(class _RwCamera * camera /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204A20 -> 0x204A4C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204A50 -> 0x00204A8C
*/
// Range: 0x204A50 -> 0x204A8C
void WarningMessage(char * message /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204A50 -> 0x204A8C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204A90 -> 0x00204ACC
*/
// Range: 0x204A90 -> 0x204ACC
void ErrorMessage(char * message /* r2 */) {
    /* anonymous block */ {
        // Range: 0x204A90 -> 0x204ACC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204AD0 -> 0x00204AD8
*/
// Range: 0x204AD0 -> 0x204AD8
void WindowSetText() {
    /* anonymous block */ {
        // Range: 0x204AD0 -> 0x204AD8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\skel\demoskel\sky\sky.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00204AE0 -> 0x00204B4C
*/
// Range: 0x204AE0 -> 0x204B4C
// this: r16
Ps::~Ps() {
    /* anonymous block */ {
        // Range: 0x204AE0 -> 0x204B4C
    }
}


