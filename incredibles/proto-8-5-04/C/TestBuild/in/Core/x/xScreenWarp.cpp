/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class xVec2 * uvmap_buffer; // size: 0x4, address: 0x609054
static float uvmap_uoffset; // size: 0x4, address: 0x609058
static float uvmap_voffset; // size: 0x4, address: 0x60905C
static float uvmap_uscale; // size: 0x4, address: 0x609060
static float uvmap_vscale; // size: 0x4, address: 0x609064
static float uvmap_udelta; // size: 0x4, address: 0x609068
static float uvmap_vdelta; // size: 0x4, address: 0x60906C
static float uvmap_xscale; // size: 0x4, address: 0x609070
static float uvmap_yscale; // size: 0x4, address: 0x609074
static float uvmap_xdelta; // size: 0x4, address: 0x609078
static float uvmap_ydelta; // size: 0x4, address: 0x60907C
static unsigned int common_warp_ids[6]; // size: 0x18, address: 0x689200
static class warper warp_buffer[128]; // size: 0x1800, address: 0x689220
static class warper warp_lists[6]; // size: 0x120, address: 0x68AA20
static class warper * warp_stack; // size: 0x4, address: 0x609080
static unsigned char render_this_frame; // size: 0x1, address: 0x609084
char * common_warp_names[7]; // size: 0x1C, address: 0x50E4B0
void (* common_warp_animate[6])(class xVec2 *, class warper &, class xVec2 &, float, float, float, float); // size: 0x18, address: 0x50E4D0
static class xFXCameraTexture camtex; // size: 0x48, address: 0x68AB40
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x6092A8
unsigned int FB_YRES; // size: 0x4, address: 0x6076C0
unsigned int FB_XRES; // size: 0x4, address: 0x6076BC
class xColor_tag g_WHITE; // size: 0x4, address: 0x5E7210
__int128 * _rwDMAGateSlot; // size: 0x4, address: 0x6092B0
// total size: 0x30
class warper {
    // Members
public:
    class warper * next; // offset 0x0, size 0x4
    class warper * prev; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    float life; // offset 0xC, size 0x4
    float iduration; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float intensity; // offset 0x18, size 0x4
    float freq; // offset 0x1C, size 0x4
    enum type_enum type; // offset 0x20, size 0x4
    union { // inferred
        class xVec3 loc3; // offset 0x24, size 0xC
        class xVec2 loc2; // offset 0x24, size 0x8
        class xVec3 * ploc3; // offset 0x24, size 0x4
        class xVec2 * ploc2; // offset 0x24, size 0x4
    };
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class RwFrustumPlane {
    // Members
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x20
class rxHeapBlockHeader {
    // Members
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x14
class RxIoSpec {
    // Members
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x70
class RpWorld {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
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
// total size: 0x30
class RxPacket {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x88
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpTriangle * triangles; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    class RwBBox boundingBox; // offset 0x48, size 0x18
    class RwBBox tightBoundingBox; // offset 0x60, size 0x18
    class RpMeshHeader * mesh; // offset 0x78, size 0x4
    class RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x1C
class RxCluster {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x14
class xFXFastRaster {
    // Members
public:
    class RwRaster * src; // offset 0x0, size 0x4
    class RwRaster * dst; // offset 0x4, size 0x4
    unsigned int fbmsk; // offset 0x8, size 0x4
    unsigned int test; // offset 0xC, size 0x4
    unsigned int old_alpha_1; // offset 0x10, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
enum type_enum {
    TYPE_INVALID = -1,
    TYPE_WARBLE = 0,
    TYPE_LENS = 1,
    TYPE_RIPPLE = 2,
    TYPE_SHOCKWAVE = 3,
    TYPE_HEAT_SHIMMER = 4,
    TYPE_STATIC_LENS = 5,
    MAX_TYPE = 6,
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x1C
class RpMaterial {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x1C
class RxNodeMethods {
    // Members
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x48
class xFXCameraTexture {
    // Members
public:
    class RwCamera * cam; // offset 0x0, size 0x4
    class RwRaster * raster; // offset 0x4, size 0x4
    class RwRaster * bgraster; // offset 0x8, size 0x4
    class RpWorld * world; // offset 0xC, size 0x4
    class RwTexture * texture; // offset 0x10, size 0x4
    unsigned int vert_buffer_used; // offset 0x14, size 0x4
    class xColor_tag bgcolor; // offset 0x18, size 0x4
    class RwCamera * oldcam; // offset 0x1C, size 0x4
    class RpWorld * oldworld; // offset 0x20, size 0x4
    float rcz; // offset 0x24, size 0x4
    float w; // offset 0x28, size 0x4
    float h; // offset 0x2C, size 0x4
    class RwRaster * zraster; // offset 0x30, size 0x4
    signed int max_tw; // offset 0x34, size 0x4
    signed int max_th; // offset 0x38, size 0x4
    float old_near_plane; // offset 0x3C, size 0x4
    float old_far_plane; // offset 0x40, size 0x4
    float old_znear; // offset 0x44, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x190
class RwCamera {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x28
class RxPipelineNode {
    // Members
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x34
class RxPipeline {
    // Members
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x0
class rxReq {};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x1C
class RxHeap {
    // Members
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x40
class RxNodeDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E8FF0 -> 0x002E9348
*/
// Range: 0x2E8FF0 -> 0x2E9348
static void render_uvmap() {
    /* anonymous block */ {
        // Range: 0x2E8FF0 -> 0x2E9348
        class xFXFastRaster fr; // r29+0xB0
        signed int mesh_width; // r2
        signed int mesh_height; // r2
        signed int qwords_max; // r20
        __int128 * pkt; // r19
        signed int qwords_used; // r18
        signed int qwords_remain; // r21
        unsigned int msb; // r29+0xCC
        unsigned int lsb; // r29+0xC8
        signed int dx; // r30
        signed int dy; // r2
        signed int x; // r17
        class xVec2 * uv0; // r16
        class xVec2 * uv1; // r22
        signed int i; // r23
        signed int y; // r7
        signed int j; // r6
        __int128 * start_strip_pkt; // r2
        float one; // @ 0x005F04D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9350 -> 0x002E9548
*/
// Range: 0x2E9350 -> 0x2E9548
static void warp_animate_static_lens(class xVec2 * uvmap /* r2 */, class xVec2 & loc /* r2 */, float radius /* r29 */, float base_intensity /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2E9350 -> 0x2E9548
        float mag; // r29
        float r2; // r3
        float ir2; // r2
        float umag; // r1
        float vmag; // r29
        signed int istart; // r11
        signed int iend; // r10
        signed int jstart; // r9
        signed int jend; // r8
        float dx; // r16
        float dy; // r15
        float x; // r14
        signed int i; // r2
        float y; // r13
        signed int j; // r6
        float xoff; // r29
        float yoff; // r29
        float dist2; // r29
        float scale; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9550 -> 0x002E990C
*/
// Range: 0x2E9550 -> 0x2E990C
static void warp_animate_heat_shimmer(class xVec2 * uvmap /* r21 */, class warper & warp /* r2 */, class xVec2 & loc /* r20 */, float radius /* r23 */, float base_intensity /* r29+0x80 */, float s /* r29+0x80 */) {
    /* anonymous block */ {
        // Range: 0x2E9550 -> 0x2E990C
        float mag; // r22
        float start_theta; // r7
        signed int istart; // r19
        signed int iend; // r18
        signed int jstart; // r17
        signed int jend; // r16
        float phase; // r21
        float startcos0; // r21
        float startsin0; // r29+0x80
        float ir; // r29+0x80
        float dx; // r13
        float dy; // r12
        float ystart; // r11
        signed int ysize; // r2
        class xVec2 * uv; // r9
        class xVec2 * uv_xend; // r2
        signed int uvstride; // r2
        float x; // r10
        float tempcos; // r1
        float cos0; // r9
        float sin0; // r8
        float y; // r7
        float x2; // r6
        class xVec2 * uv_yend; // r2
        float dist2; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9910 -> 0x002E9C00
*/
// Range: 0x2E9910 -> 0x2E9C00
static void warp_animate_shockwave(class xVec2 * uvmap /* r2 */, class xVec2 & loc /* r2 */, float radius /* r29+0x20 */, float base_intensity /* r29+0x20 */, float s /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2E9910 -> 0x2E9C00
        float mag; // r29+0x20
        float umag; // r22
        float vmag; // r21
        float r2; // r20
        float ir; // r19
        signed int istart; // r9
        signed int iend; // r8
        signed int jstart; // r7
        signed int jend; // r5
        float dx; // r18
        float dy; // r17
        float x; // r16
        signed int i; // r2
        float y; // r14
        signed int j; // r11
        float xoff; // r13
        float yoff; // r12
        float dist2; // r29+0x20
        float theta; // r25
        float stheta; // r29+0x20
        float scale; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9C00 -> 0x002E9F4C
*/
// Range: 0x2E9C00 -> 0x2E9F4C
static void warp_animate_ripple(class xVec2 * uvmap /* r2 */, class warper & warp /* r2 */, class xVec2 & loc /* r23 */, float radius /* r29+0xD0 */, float base_intensity /* r29+0xD0 */, float s /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x2E9C00 -> 0x2E9F4C
        float mag; // r29+0xD0
        float umag; // r31
        float vmag; // r30
        float freq; // r29
        float r2; // r29+0xCC
        float ir2; // r28
        signed int istart; // r18
        signed int iend; // r17
        signed int jstart; // r22
        signed int jend; // r16
        float dx; // r27
        float dy; // r26
        float x; // r25
        signed int i; // r2
        float y; // r24
        signed int j; // r21
        float xoff; // r23
        float yoff; // r22
        float dist2; // r29+0xD0
        float t; // r29+0xD0
        float scale; // r29+0xD0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9F50 -> 0x002EA1B0
*/
// Range: 0x2E9F50 -> 0x2EA1B0
static void warp_animate_lens(class xVec2 * uvmap /* r17 */, class xVec2 & loc /* r16 */, float radius /* r20 */, float base_intensity /* r22 */, float s /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2E9F50 -> 0x2EA1B0
        float mag; // r29+0x40
        float r2; // r3
        float ir2; // r2
        float umag; // r1
        float vmag; // r29+0x40
        signed int istart; // r11
        signed int iend; // r10
        signed int jstart; // r9
        signed int jend; // r8
        float dx; // r16
        float dy; // r15
        float x; // r14
        signed int i; // r2
        float y; // r13
        signed int j; // r7
        float xoff; // r29+0x40
        float yoff; // r29+0x40
        float dist2; // r29+0x40
        float scale; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA1B0 -> 0x002EA544
*/
// Range: 0x2EA1B0 -> 0x2EA544
static void warp_animate_warble(class xVec2 * uvmap /* r2 */, class warper & warp /* r2 */, class xVec2 & loc /* r23 */, float radius /* r29+0xC0 */, float base_intensity /* r29+0xC0 */, float s /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x2EA1B0 -> 0x2EA544
        float random_u; // r29
        float random_v; // r28
        float r2; // r27
        float ir2; // r26
        signed int istart; // r18
        signed int iend; // r17
        signed int jstart; // r22
        signed int jend; // r16
        float dx; // r25
        float dy; // r24
        float x; // r23
        signed int i; // r2
        float y; // r22
        signed int j; // r21
        float xoff; // r29+0xC0
        float yoff; // r29+0xC0
        float dist2; // r29+0xC0
        float intensity; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA550 -> 0x002EA580
*/
// Range: 0x2EA550 -> 0x2EA580
void remove(class warper * warp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EA550 -> 0x2EA580
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA580 -> 0x002EA68C
*/
// Range: 0x2EA580 -> 0x2EA68C
void modify(class warper * warp /* r17 */, class xVec3 & loc /* r16 */, float radius /* r29+0x30 */, float duration /* r29+0x30 */, enum type_enum type /* r2 */, float intensity /* r29+0x30 */, float freq /* r29+0x30 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EA580 -> 0x2EA68C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA690 -> 0x002EA760
*/
// Range: 0x2EA690 -> 0x2EA760
class warper * emit(class xVec3 & loc /* r2 */, float radius /* r29 */, float duration /* r29 */, enum type_enum type /* r2 */, float intensity /* r29 */, float freq /* r29 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EA690 -> 0x2EA760
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA760 -> 0x002EA79C
*/
// Range: 0x2EA760 -> 0x2EA79C
enum type_enum find_type(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EA760 -> 0x2EA79C
        signed int i; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA7A0 -> 0x002EA7F8
*/
// Range: 0x2EA7A0 -> 0x2EA7F8
void render(class RwCamera * cam /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2EA7A0 -> 0x2EA7F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA800 -> 0x002EA808
*/
// Range: 0x2EA800 -> 0x2EA808
void pre_render() {
    /* anonymous block */ {
        // Range: 0x2EA800 -> 0x2EA808
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA810 -> 0x002EA900
*/
// Range: 0x2EA810 -> 0x2EA900
void update(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2EA810 -> 0x2EA900
        signed int type; // r8
        class warper * warp; // r7
        class warper * next_warp; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA900 -> 0x002EA96C
*/
// Range: 0x2EA900 -> 0x2EA96C
void reset() {
    /* anonymous block */ {
        // Range: 0x2EA900 -> 0x2EA96C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA970 -> 0x002EA97C
*/
// Range: 0x2EA970 -> 0x2EA97C
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x2EA970 -> 0x2EA97C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA980 -> 0x002EABB8
*/
// Range: 0x2EA980 -> 0x2EABB8
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x2EA980 -> 0x2EABB8
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xScreenWarp.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EABC0 -> 0x002EAF38
*/
// Range: 0x2EABC0 -> 0x2EAF38
static unsigned char animate_uvmap(class xVec2 * uvmap /* r20 */, class RwCamera * cam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EABC0 -> 0x2EAF38
        class xMat4x3 & view_mat; // r2
        unsigned char need_render; // r19
        signed int type; // r18
        void (* animate_cb)(class xVec2 *, class warper &, class xVec2 &, float, float, float, float); // r2
        class warper * warp; // r17
        class xVec2 loc; // r29+0xD8
        float radius; // r29+0xE0
        float iz; // r29+0xE0
        class xVec3 loc3; // r29+0xC8
        float intensity; // r29+0xE0
    }
}


