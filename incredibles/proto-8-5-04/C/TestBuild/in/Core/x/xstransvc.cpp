/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static signed int g_straninit; // size: 0x4, address: 0x608B6C
static class st_STRAN_DATA g_xstdata; // size: 0x1144, address: 0x66A230
static class PKRReadFuncs * g_pkrf; // size: 0x4, address: 0x608B70
static class PKRAssetType * g_typeHandlers; // size: 0x4, address: 0x608B74
static char g_localCode[4]; // size: 0x4, address: 0x607814
static enum xRegion g_localEnum; // size: 0x4, address: 0x608B78
char * apszRegionCode[21]; // size: 0x54, address: 0x50E240
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
// total size: 0x8F8
class st_PACKER_READ_DATA {
    // Members
public:
    class PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    unsigned int opts; // offset 0x8, size 0x4
    unsigned int pkgver; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    signed int subver; // offset 0x14, size 0x4
    signed int compatver; // offset 0x18, size 0x4
    class st_HIPLOADDATA * pkg; // offset 0x1C, size 0x4
    unsigned int base_sector; // offset 0x20, size 0x4
    signed int lockid; // offset 0x24, size 0x4
    char packfile[128]; // offset 0x28, size 0x80
    signed int asscnt; // offset 0xA8, size 0x4
    signed int laycnt; // offset 0xAC, size 0x4
    class st_XORDEREDARRAY asstoc; // offset 0xB0, size 0x10
    class st_XORDEREDARRAY laytoc; // offset 0xC0, size 0x10
    class st_PACKER_ATOC_NODE * pool_anode; // offset 0xD0, size 0x4
    signed int pool_nextaidx; // offset 0xD4, size 0x4
    class st_XORDEREDARRAY typelist[129]; // offset 0xD8, size 0x810
    signed long time_made; // offset 0x8E8, size 0x4
    signed long time_mod; // offset 0x8F0, size 0x4
};
// total size: 0x28
class PKRAssetType {
    // Members
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x0
class st_HIPLOADDATA {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x2C
class xUpdateCullMgr {
    // Members
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x114
class st_STRAN_SCENE {
    // Members
public:
    unsigned int scnid; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    class st_PACKER_READ_DATA * spkg; // offset 0x8, size 0x4
    signed int flgHipHop; // offset 0xC, size 0x4
    void * userdata; // offset 0x10, size 0x4
    char fnam[256]; // offset 0x14, size 0x100
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x18
class PKRAssetTOCInfo {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
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
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x0
class xCamGroup {};
enum xRegion {
    eRegionUnknown = -1,
    eRegionUS = 0,
    eRegionBE = 1,
    eRegionCH = 2,
    eRegionCZ = 3,
    eRegionDE = 4,
    eRegionDK = 5,
    eRegionES = 6,
    eRegionFI = 7,
    eRegionFR = 8,
    eRegionIT = 9,
    eRegionJP = 10,
    eRegionKR = 11,
    eRegionNL = 12,
    eRegionNO = 13,
    eRegionPL = 14,
    eRegionPT = 15,
    eRegionRU = 16,
    eRegionSE = 17,
    eRegionSK = 18,
    eRegionTW = 19,
    eRegionUK = 20,
    eRegionCount = 21,
    eRegionMaxCount = 32,
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
    SCE_DEMO_ENDREASON_NETCONFIG_REQUEST = 6,
    SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE = 7,
};
// total size: 0x0
class xCamScreen {};
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
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x0
class zPlayer {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
enum en_pkrfindmyass {
    PKR_FIND_FAILED = 0,
    PKR_FIND_EXACT = 1,
    PKR_FIND_EXACT_XFORM = 2,
    PKR_FIND_RANGE = 3,
    PKR_FIND_RANGE_XFORM = 4,
};
enum en_LAYER_TYPE {
    PKR_LTYPE_ALL = -1,
    PKR_LTYPE_DEFAULT = 0,
    PKR_LTYPE_TEXTURE = 1,
    PKR_LTYPE_TEXTURE_STRM = 2,
    PKR_LTYPE_BSP = 3,
    PKR_LTYPE_MODEL = 4,
    PKR_LTYPE_ANIMATION = 5,
    PKR_LTYPE_VRAM = 6,
    PKR_LTYPE_SRAM = 7,
    PKR_LTYPE_SNDTOC = 8,
    PKR_LTYPE_CUTSCENE = 9,
    PKR_LTYPE_CUTSCENETOC = 10,
    PKR_LTYPE_JSPINFO = 11,
    PKR_LTYPE_NOMORE = 12,
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class zScene {};
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
// total size: 0x60
class st_PACKER_ATOC_NODE {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int asstype; // offset 0x4, size 0x4
    signed int d_off; // offset 0x8, size 0x4
    signed int d_size; // offset 0xC, size 0x4
    signed int d_pad; // offset 0x10, size 0x4
    unsigned int d_chksum; // offset 0x14, size 0x4
    signed int assalign; // offset 0x18, size 0x4
    signed int infoflag; // offset 0x1C, size 0x4
    signed int loadflag; // offset 0x20, size 0x4
    char * memloc; // offset 0x24, size 0x4
    signed int x_size; // offset 0x28, size 0x4
    signed int readcnt; // offset 0x2C, size 0x4
    signed int readrem; // offset 0x30, size 0x4
    class PKRAssetType * typeref; // offset 0x34, size 0x4
    class st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    class st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char name[32]; // offset 0x40, size 0x20
};
// total size: 0x44
class PKRReadFuncs {
    // Members
public:
    unsigned int api_ver; // offset 0x0, size 0x4
    class st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, signed int *, class PKRAssetType *, signed int); // offset 0x4, size 0x4
    void (* Done)(class st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    signed int (* LoadLayer)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(class st_PACKER_READ_DATA *, unsigned int, char *, void *, signed int *); // offset 0x14, size 0x4
    void * (* AssetByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, unsigned int *); // offset 0x18, size 0x4
    signed int (* AssetCount)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    signed int (* IsAssetReady)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    signed int (* SetActive)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(class st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    signed int (* GetAssetInfo)(class st_PACKER_READ_DATA *, unsigned int, class PKRAssetTOCInfo *); // offset 0x30, size 0x4
    signed int (* GetAssetInfoByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, class PKRAssetTOCInfo *); // offset 0x34, size 0x4
    signed int (* PkgHasAsset)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(class st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(class st_PACKER_READ_DATA *); // offset 0x40, size 0x4
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x138
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    class _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    class analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x560
class xGlobals {
    // Members
public:
    class xCamGroup * cam; // offset 0x0, size 0x4
    class xCamScreen * screen; // offset 0x4, size 0x4
    class xVec4 frustplane[12]; // offset 0x10, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0xD0, size 0x4
            class _tagxPad * pad1; // offset 0xD4, size 0x4
            class _tagxPad * pad2; // offset 0xD8, size 0x4
            class _tagxPad * pad3; // offset 0xDC, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0xD0, size 0x10
    };
    signed int profile; // offset 0xE0, size 0x4
    char profFunc[6][128]; // offset 0xE4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x3E4, size 0x4
    signed int sceneFirst; // offset 0x3E8, size 0x4
    char sceneStart[32]; // offset 0x3EC, size 0x20
    class RpWorld * currWorld; // offset 0x40C, size 0x4
    class iFogParams fog; // offset 0x410, size 0x1C
    class iFogParams fogA; // offset 0x42C, size 0x1C
    class iFogParams fogB; // offset 0x448, size 0x1C
    signed long fog_t0; // offset 0x468, size 0x4
    signed long fog_t1; // offset 0x470, size 0x4
    signed int option_vibration; // offset 0x478, size 0x4
    signed int option_subtitles; // offset 0x47C, size 0x4
    unsigned int slowdown; // offset 0x480, size 0x4
    float update_dt; // offset 0x484, size 0x4
    signed short ForceCinematic; // offset 0x488, size 0x2
    signed int useHIPHOP; // offset 0x48C, size 0x4
    unsigned char NoMusic; // offset 0x490, size 0x1
    unsigned char NoCutscenes; // offset 0x491, size 0x1
    unsigned char NoPadCheck; // offset 0x492, size 0x1
    char currentActivePad; // offset 0x493, size 0x1
    unsigned char firstStartPressed; // offset 0x494, size 0x1
    unsigned char fromLauncher; // offset 0x495, size 0x1
    unsigned char FlashWIP; // offset 0x496, size 0x1
    unsigned char inLoadingScreen; // offset 0x497, size 0x1
    unsigned char LoadingScene; // offset 0x498, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x499, size 0x1
    unsigned char ForceMono; // offset 0x49A, size 0x1
    unsigned int minVSyncCnt; // offset 0x49C, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x4A0, size 0x1
    unsigned char autoSaveFeature; // offset 0x4A1, size 0x1
    signed int asyncLoadingScreen; // offset 0x4A4, size 0x4
    signed int asyncLoadingFlags; // offset 0x4A8, size 0x4
    char fromLauncherUser[32]; // offset 0x4AC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x4CC, size 0x4
    class zScene * sceneCur; // offset 0x4D0, size 0x4
    class zScene * scenePreload; // offset 0x4D4, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x4D8, size 0x4
    char watermark[127]; // offset 0x4DC, size 0x7F
    unsigned char watermarkAlpha; // offset 0x55B, size 0x1
    float watermarkSize; // offset 0x55C, size 0x4
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
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0x1144
class st_STRAN_DATA {
    // Members
public:
    class st_STRAN_SCENE hipscn[16]; // offset 0x0, size 0x1140
    unsigned int loadlock; // offset 0x1140, size 0x4
};
// total size: 0x1C
class iFogParams {
    // Members
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
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
// total size: 0x34
class PS2DemoGlobals {
    // Members
public:
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    float inactive_timer; // offset 0x18, size 0x4
    float gameplay_timer; // offset 0x1C, size 0x4
    char subdir[16]; // offset 0x20, size 0x10
    unsigned short quit; // offset 0x30, size 0x2
    unsigned short vmode; // offset 0x32, size 0x2
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD990 -> 0x001BD998
*/
// Range: 0x1BD990 -> 0x1BD998
enum xRegion xSTGetLocalizationEnum() {
    /* anonymous block */ {
        // Range: 0x1BD990 -> 0x1BD998
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD9A0 -> 0x001BD9A8
*/
// Range: 0x1BD9A0 -> 0x1BD9A8
char * xSTGetLocalizationCode() {
    /* anonymous block */ {
        // Range: 0x1BD9A0 -> 0x1BD9A8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD9B0 -> 0x001BDA44
*/
// Range: 0x1BD9B0 -> 0x1BDA44
void xSTSetLocalizationCode(char * code /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BD9B0 -> 0x1BDA44
        enum xRegion iRegion; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDA50 -> 0x001BDAC4
*/
// Range: 0x1BDA50 -> 0x1BDAC4
static class st_STRAN_SCENE * XST_find_bySID(unsigned int sid /* r2 */, signed int flagHipHop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BDA50 -> 0x1BDAC4
        class st_STRAN_SCENE * da_sdata; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDAD0 -> 0x001BDB88
*/
// Range: 0x1BDAD0 -> 0x1BDB88
static class st_STRAN_SCENE * XST_lock_next() {
    /* anonymous block */ {
        // Range: 0x1BDAD0 -> 0x1BDB88
        class st_STRAN_SCENE * sdata; // r17
        signed int i; // r16
        signed int uselock; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDB90 -> 0x001BDCC4
*/
// Range: 0x1BDB90 -> 0x1BDCC4
static char * XST_translate_sid_path(unsigned int sid /* r18 */, char * exten /* r17 */, unsigned char local /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1BDB90 -> 0x1BDCC4
        char path_delimiter[2]; // r29+0x4C
        char subdir[4]; // r29+0x48
        char fname[64]; // @ 0x0066B3C0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDCD0 -> 0x001BDE28
*/
// Range: 0x1BDCD0 -> 0x1BDE28
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r20 */, unsigned int * sceneID /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BDCD0 -> 0x1BDE28
        char * da_hipname; // r21
        signed int rc; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDE30 -> 0x001BDE38
*/
// Range: 0x1BDE30 -> 0x1BDE38
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BDE30 -> 0x1BDE38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDE40 -> 0x001BDFE0
*/
// Range: 0x1BDE40 -> 0x1BDFE0
signed int xSTGetAssetInfoByType(unsigned int type /* r20 */, signed int idx /* r19 */, class PKRAssetTOCInfo * tocainfo /* r30 */) {
    /* anonymous block */ {
        // Range: 0x1BDE40 -> 0x1BDFE0
        signed int found; // r23
        signed int sum; // r18
        signed int cnt; // r2
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BDFE0 -> 0x001BE120
*/
// Range: 0x1BDFE0 -> 0x1BE120
signed int xSTGetAssetInfo(unsigned int aid /* r20 */, class PKRAssetTOCInfo * tocainfo /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BDFE0 -> 0x1BE120
        signed int found; // r18
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE120 -> 0x001BE2B4
*/
// Range: 0x1BE120 -> 0x1BE2B4
void * xSTFindAssetByType(unsigned int type /* r20 */, signed int idx /* r21 */, unsigned int * size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1BE120 -> 0x1BE2B4
        void * memptr; // r22
        signed int i; // r19
        signed int sum; // r18
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE2C0 -> 0x001BE3E4
*/
// Range: 0x1BE2C0 -> 0x1BE3E4
signed int xSTAssetCountByType(unsigned int type /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BE2C0 -> 0x1BE3E4
        signed int sum; // r18
        signed int cnt; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE3F0 -> 0x001BE54C
*/
// Range: 0x1BE3F0 -> 0x1BE54C
void * xSTFindAsset(unsigned int aid /* r19 */, unsigned int * size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BE3F0 -> 0x1BE54C
        void * memloc; // r2
        signed int i; // r17
        signed int asssize; // r29+0x5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE550 -> 0x001BE680
*/
// Range: 0x1BE550 -> 0x1BE680
char * xSTAssetName(unsigned int aid /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1BE550 -> 0x1BE680
        char * aname; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE680 -> 0x001BE778
*/
// Range: 0x1BE680 -> 0x1BE778
signed int xSTSwitchScene(unsigned int sid /* r21 */, void * userdata /* r20 */, signed int (* progmon)(void *, float) /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1BE680 -> 0x1BE778
        class st_STRAN_SCENE * sdata; // r2
        signed int rc; // r22
        signed int i; // r18
        signed int types[3]; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE780 -> 0x001BE7B8
*/
// Range: 0x1BE780 -> 0x1BE7B8
void xSTDisconnect(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BE780 -> 0x1BE7B8
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE7C0 -> 0x001BE810
*/
// Range: 0x1BE7C0 -> 0x1BE810
float xSTLoadStep() {
    /* anonymous block */ {
        // Range: 0x1BE7C0 -> 0x1BE810
        float pct; // r29+0x20
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BE810 -> 0x001BE9F4
*/
// Range: 0x1BE810 -> 0x1BE9F4
void xSTUnLoadSceneMany(unsigned int sceneID /* r18 */, signed int type /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1BE810 -> 0x1BE9F4
        class st_STRAN_SCENE * sdata; // r16
        class st_STRAN_SCENE * sdata; // r16
        class st_STRAN_SCENE * sdata; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA00 -> 0x001BEA58
*/
// Range: 0x1BEA00 -> 0x1BEA58
signed int xSTQueueSceneAssets(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEA00 -> 0x1BEA58
        signed int result; // r16
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEA60 -> 0x001BEF10
*/
// Range: 0x1BEA60 -> 0x1BEF10
signed int xSTPreLoadScene(unsigned int sid /* r20 */, void * userdata /* r23 */, signed int flg_hiphop /* r22 */, signed int fileflags /* r19 */, char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEA60 -> 0x1BEF10
        signed int result; // r2
        class st_STRAN_SCENE * sdata; // r16
        char * sfile; // r18
        signed int cltver; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEF10 -> 0x001BEFD8
*/
// Range: 0x1BEF10 -> 0x1BEFD8
signed int xSTShutdown() {
    /* anonymous block */ {
        // Range: 0x1BEF10 -> 0x1BEFD8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEFE0 -> 0x001BF03C
*/
// Range: 0x1BEFE0 -> 0x1BF03C
signed int xSTStartup(class PKRAssetType * handlers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEFE0 -> 0x1BF03C
    }
}


