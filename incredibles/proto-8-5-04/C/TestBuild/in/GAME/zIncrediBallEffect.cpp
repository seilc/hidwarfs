/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class _xFColor color_back; // size: 0x10, address: 0x5FC380
static class _xFColor color_front; // size: 0x10, address: 0x5FC390
static // total size: 0x30
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
    signed int verts_size; // offset 0x4, size 0x4
    unsigned short * strip_indices; // offset 0x8, size 0x4
    signed int strip_indices_size; // offset 0xC, size 0x4
    float * full_heightmap[2]; // offset 0x10, size 0x8
    float * heightmap[2]; // offset 0x18, size 0x8
    signed int active_heightmap; // offset 0x20, size 0x4
    class xVec2 * energy_uv; // offset 0x24, size 0x4
    class xColor_tag * refract_color; // offset 0x28, size 0x4
    float * cell_width_scale; // offset 0x2C, size 0x4
} mesh; // size: 0x30, address: 0x6BFF50
static class xMat4x3 ball_mat; // size: 0x40, address: 0x6BFF80
static class RwRaster * energy_raster; // size: 0x4, address: 0x6096B4
static float energy_spin; // size: 0x4, address: 0x6096B8
static float damp_multiplier; // size: 0x4, address: 0x6096BC
static float Aold; // size: 0x4, address: 0x6096C0
static float Avel; // size: 0x4, address: 0x6096C4
unsigned char HDR_brightening; // size: 0x1, address: 0x609450
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
class xColor_tag g_WHITE; // size: 0x4, address: 0x5E7210
class xMat4x3 g_I3; // size: 0x40, address: 0x643E60
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x10
class xIMLockParameters {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class xVec3 * cpos; // offset 0x4, size 0x4
    class xVec2 * cuv; // offset 0x8, size 0x4
    class xColor_tag * ccolor; // offset 0xC, size 0x4
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
// total size: 0x10
class _xFColor {
    // Members
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x1C
class HIFastIMLockStruct {
    // Members
public:
    __int128 * dmaPacket; // offset 0x0, size 0x4
    signed int qwCount; // offset 0x4, size 0x4
    signed int format; // offset 0x8, size 0x4
    class xVec3 * pos; // offset 0xC, size 0x4
    class xVec2 * uv; // offset 0x10, size 0x4
    class xColor_tag * color; // offset 0x14, size 0x4
    signed int vertCount; // offset 0x18, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x30
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
    signed int verts_size; // offset 0x4, size 0x4
    unsigned short * strip_indices; // offset 0x8, size 0x4
    signed int strip_indices_size; // offset 0xC, size 0x4
    float * full_heightmap[2]; // offset 0x10, size 0x8
    float * heightmap[2]; // offset 0x18, size 0x8
    signed int active_heightmap; // offset 0x20, size 0x4
    class xVec2 * energy_uv; // offset 0x24, size 0x4
    class xColor_tag * refract_color; // offset 0x28, size 0x4
    float * cell_width_scale; // offset 0x2C, size 0x4
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00486590 -> 0x00486784
*/
// Range: 0x486590 -> 0x486784
void zIncrediBallImpact(class xVec3 & loc /* r2 */, float radius /* r21 */, float amount /* r20 */, unsigned char depress /* r18 */) {
    /* anonymous block */ {
        // Range: 0x486590 -> 0x486784
        class xVec3 dir; // r29+0x60
        class xVec2 center; // r29+0x58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00486790 -> 0x00487018
*/
// Range: 0x486790 -> 0x487018
void zIncrediBallRender(void (* cb)(void *) /* r20 */, void * context /* r21 */) {
    /* anonymous block */ {
        // Range: 0x486790 -> 0x487018
        signed int verts_size; // r2
        signed int indices_size; // r2
        class xMat4x3 view_mat; // r29+0xF0
        class xSphere sphere; // r29+0xE0
        class xFXCameraTexture * camtex; // r2
        class HIFastIMLockStruct refract_lock; // r29+0xC0
        class HIFastIMLockStruct energy_lock; // r29+0xA0
        class xIMLockParameters refract_params; // r29+0x90
        class xIMLockParameters energy_params; // r29+0x80
        class xVec3 * verts; // r19
        class xVec2 * uvs; // r18
        class xColor_tag * colors; // r17
        signed int old_test; // r29+0x13C
        unsigned int old_blend_mode; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00487020 -> 0x00487070
*/
// Range: 0x487020 -> 0x487070
void zIncrediBallUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x487020 -> 0x487070
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00487070 -> 0x00487134
*/
// Range: 0x487070 -> 0x487134
void zIncrediBallMove(class xMat4x3 & mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x487070 -> 0x487134
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00487140 -> 0x00487190
*/
// Range: 0x487140 -> 0x487190
void zIncrediBallSetup() {
    /* anonymous block */ {
        // Range: 0x487140 -> 0x487190
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00487190 -> 0x004875B0
*/
// Range: 0x487190 -> 0x4875B0
static void shade_sphere(class xVec3 * verts /* r18 */, class xVec2 * uvs /* r17 */, class xColor_tag * colors /* r16 */, class xMat4x3 & view_mat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x487190 -> 0x4875B0
        class xMat4x3 tex_mat; // r29+0x80
        class xMat4x3 & cam_mat; // r2
        class xVec3 cam_loc; // r29+0xE0
        float Cx; // r24
        float Cy; // r23
        float Cz; // r22
        float iEmag; // r21
        float * hmap; // r2
        class xVec3 * iv; // r11
        class xVec3 * ov; // r10
        class xVec3 * endov; // r2
        class xVec2 * uv; // r2
        class xColor_tag * color; // r2
        float height_offset; // r20
        float Nx; // r29+0xF0
        float Ny; // r29+0xF0
        float Nz; // r29+0xF0
        float height; // r29+0xF0
        float Wx; // r19
        float Wy; // r18
        float Wz; // r17
        float Ex; // r29+0xF0
        float Ey; // r29+0xF0
        float Ez; // r29+0xF0
        float EdotN; // r16
        float nr; // r29+0xF0
        float nr2; // r29+0xF0
        float Tx; // r7
        float Ty; // r3
        float Tz; // r2
        float EXNx; // r29+0xF0
        float EXNy; // r29+0xF0
        float EXNz; // r29+0xF0
        float r3; // r29+0xF0
        float Nscale; // r29+0xF0
        float Tmag; // r29+0xF0
        class xVec3 refract_loc; // r29+0xD0
        class xVec3 tex_loc; // r29+0xC0
        float rz; // r29+0xF0
        float s; // r3
        float s2; // r29+0xF0
        signed int alpha; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004875B0 -> 0x004878B4
*/
// Range: 0x4875B0 -> 0x4878B4
static void impact_surface(class xVec2 & grid_center /* r16 */, class xVec3 & dir /* r20 */, float radius /* r21 */, float mag /* r20 */, unsigned char depress /* r19 */) {
    /* anonymous block */ {
        // Range: 0x4875B0 -> 0x4878B4
        signed int lower_iy; // r18
        signed int upper_iy; // r17
        signed int lower_ix; // r16
        signed int upper_ix; // r6
        float rx; // r22
        float Cx; // r9
        float Cy; // r8
        float Cz; // r7
        class xVec3 * verts; // r2
        float * hmap; // r2
        float r2; // r6
        float ir2; // r5
        signed int iy; // r2
        class xVec3 * row_verts; // r2
        float * row_hmap; // r2
        signed int ix; // r12
        signed int gx; // r2
        class xVec3 & v; // r2
        float dx; // r29+0x70
        float dy; // r29+0x70
        float dz; // r29+0x70
        float dist2; // r29+0x70
        float offset; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004878C0 -> 0x00487CB0
*/
// Range: 0x4878C0 -> 0x487CB0
static void animate_heightmap(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x4878C0 -> 0x487CB0
        float Anew; // r21
        float Adelta; // r23
        float A; // r1
        float B; // r29+0x20
        float * M0; // r3
        float * M1; // r11
        float * rowend_M1; // r2
        float * L0; // r2
        float * R0; // r8
        float * U0; // r10
        float * D0; // r9
        float val; // r29+0x20
        float * end_M1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00487CB0 -> 0x00488048
*/
// Range: 0x487CB0 -> 0x488048
static void create_sphere_mesh() {
    /* anonymous block */ {
        // Range: 0x487CB0 -> 0x488048
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00488050 -> 0x0048839C
*/
// Range: 0x488050 -> 0x48839C
static void unit_sphere_calc_indices(unsigned short * indices /* r2 */, signed int rows /* r2 */, signed int cols /* r2 */) {
    /* anonymous block */ {
        // Range: 0x488050 -> 0x48839C
        signed int i; // r10
        signed int j; // r11
        unsigned short * index; // r2
        signed int start; // r9
        signed int bottom; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zIncrediBallEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004883A0 -> 0x004885EC
*/
// Range: 0x4883A0 -> 0x4885EC
static void unit_sphere_calc_vertices(class xVec3 * verts /* r18 */, signed int rows /* r17 */, signed int cols /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4883A0 -> 0x4885EC
        float drow; // r29+0xD0
        float dcol; // r29+0xD0
        class xMat3x3 drow_mat; // r29+0x80
        class xMat3x3 dcol_mat; // r29+0x50
        class xVec3 * v; // r5
        class xVec3 row_dir; // r29+0xC0
        signed int i; // r4
        class xVec3 col_dir; // r29+0xB0
        signed int j; // r24
    }
}


