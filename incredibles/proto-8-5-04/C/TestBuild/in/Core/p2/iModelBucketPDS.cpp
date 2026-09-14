/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class PipeTranslation sPipeTrans[8]; // size: 0xC0, address: 0x509270
static class FastPipeTrans sFastPipeList[2]; // size: 0x10, address: 0x509330
// total size: 0x14
class RpInterpolator {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x18
class PipeTranslation {
    // Members
public:
    enum RpPDSPipeID atm; // offset 0x0, size 0x4
    enum RpPDSPipeID mat; // offset 0x4, size 0x4
    class RxPipeline * (* atmpipeTranslateCB)(class RpAtomic *, class RpMaterial *); // offset 0x8, size 0x4
    class RxPipeline * (* matpipeTranslateCB)(class RpAtomic *, class RpMaterial *); // offset 0xC, size 0x4
    class RxPipeline * atmPipe; // offset 0x10, size 0x4
    class RxPipeline * matPipe; // offset 0x14, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x70
class RpAtomic {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
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
// total size: 0x60
class RpGeometry {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
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
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
// total size: 0x8
class FastPipeTrans {
    // Members
public:
    enum RpPDSPipeID fast; // offset 0x0, size 0x4
    class RxPipeline * fastPipe; // offset 0x4, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x2C
class RpClump {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
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
enum RpPDSPipeID {
    rpNAPDSPIPEID = 0,
    rwPDS_G3_Generic_MatPipeID = 1,
    rwPDS_G3_Generic_AtmPipeID = 2,
    rwPDS_G3_Generic_SctPipeID = 3,
    rwPDS_G3_Im3D_TriPipeID = 4,
    rwPDS_G3_Im3D_SegPipeID = 5,
    rwPDS_G3_Im3D_TriObjPipeID = 6,
    rwPDS_G3_Im3D_SegObjPipeID = 7,
    rwPDS_G3_Generic_GrpMatPipeID = 4097,
    rwPDS_G3_Generic_GrpAtmPipeID = 4098,
    rwPDS_G3_Generic_GrpSctPipeID = 4099,
    rwPDS_G3_Skin_MatPipeID = 65537,
    rwPDS_G3_Skin_AtmPipeID = 65538,
    rwPDS_G3_Emb_MatPipeID = 65539,
    rwPDS_G3_Gem_MatPipeID = 65540,
    rwPDS_G3_Bem_MatPipeID = 65541,
    rwPDS_G3_Dup_MatPipeID = 65542,
    rwPDS_G3_Toon_MatPipeID = 65543,
    rwPDS_G3_SkinEmb_MatPipeID = 65544,
    rwPDS_G3_SkinGem_MatPipeID = 65545,
    rwPDS_G3_SkinBem_MatPipeID = 65546,
    rwPDS_G3_SkinDup_MatPipeID = 65547,
    rwPDS_G3_SkinToon_MatPipeID = 65548,
    rwPDS_G2_BPatch_AtmPipeID = 65549,
    rwPDS_G2_BPatch_MatPipeID = 65550,
    rwPDS_G2_SkinBPatch_AtmPipeID = 65551,
    rwPDS_G2_SkinBPatch_MatPipeID = 65552,
    rwPDS_G2_EmbBPatch_MatPipeID = 65553,
    rwPDS_G2_GemBPatch_MatPipeID = 65554,
    rwPDS_G2_BemBPatch_MatPipeID = 65555,
    rwPDS_G2_DupBPatch_MatPipeID = 65556,
    rwPDS_G2_SkinEmbBPatch_MatPipeID = 65557,
    rwPDS_G2_SkinGemBPatch_MatPipeID = 65558,
    rwPDS_G2_SkinBemBPatch_MatPipeID = 65559,
    rwPDS_G2_SkinDupBPatch_MatPipeID = 65560,
    rwPDS_G3_2DStroke_MatPipeID = 65561,
    rwPDS_G3_2DStroke_ObjPipeID = 65562,
    rwPDS_G3_2DFont_MatPipeID = 65563,
    rwPDS_G3_2DFont_ObjPipeID = 65564,
    rwPDS_G3_2DFill_MatPipeID = 65565,
    rwPDS_G3_2DFill_ObjPipeID = 65566,
    rwPDS_G3_SkSpt_AtmPipeID = 65567,
    rwPDS_G3_SkSpt_MatPipeID = 65568,
    rwPDS_G3_SkSptEmb_MatPipeID = 65569,
    rwPDS_G3_SkSptGem_MatPipeID = 65570,
    rwPDS_G3_SkSptBem_MatPipeID = 65571,
    rwPDS_G3_SkSptDup_MatPipeID = 65572,
    rwPDS_G3_SkSptToon_MatPipeID = 65573,
    rwPDS_G3_Uva_MatPipeID = 65574,
    rwPDS_G3_DupUva_MatPipeID = 65575,
    rwPDS_G3_SkinUva_MatPipeID = 65576,
    rwPDS_G3_SkinDupUva_MatPipeID = 65577,
    rwPDS_G3_SkSptUva_MatPipeID = 65578,
    rwPDS_G3_SkSptDupUva_MatPipeID = 65579,
    rwPDS_G3_Prj_MatPipeID = 65580,
    rwPDS_G3_SkinPrj_MatPipeID = 65581,
    rwPDS_G3_DMorph_MatPipeID = 65582,
    rwPDS_G3_Skin_GrpMatPipeID = 69633,
    rwPDS_G3_Skin_GrpAtmPipeID = 69634,
    rwPDS_G2_DarkMaps_GrpMatPipeID = 69635,
    rwPDS_G2_DarkMaps_GrpAtmPipeID = 69636,
    rwPDS_G2_DarkMaps_GrpSctPipeID = 69637,
    rwPDS_G3_Toon_GrpMatPipeID = 69638,
    rwPDS_G3_Toon_GrpAtmPipeID = 69639,
    rwPDS_G3_Toon_GrpSctPipeID = 69640,
    rwPDS_G3_SkinToon_GrpMatPipeID = 69641,
    rwPDS_G3_SkinToon_GrpAtmPipeID = 69642,
    rwPDS_G3_MatfxUV1_GrpMatPipeID = 69643,
    rwPDS_G3_MatfxUV2_GrpMatPipeID = 69644,
    rwPDS_G3_MatfxUV1_GrpAtmPipeID = 69645,
    rwPDS_G3_MatfxUV2_GrpAtmPipeID = 69646,
    rwPDS_G3_MatfxUV1_GrpSctPipeID = 69647,
    rwPDS_G3_MatfxUV2_GrpSctPipeID = 69648,
    rwPDS_G3_SkinfxUV1_GrpMatPipeID = 69649,
    rwPDS_G3_SkinfxUV2_GrpMatPipeID = 69650,
    rwPDS_G3_SkinfxUV1_GrpAtmPipeID = 69651,
    rwPDS_G3_SkinfxUV2_GrpAtmPipeID = 69652,
    rwPDS_G2_BPatch_GrpAtmPipeID = 69653,
    rwPDS_G2_BPatch_GrpMatPipeID = 69654,
    rwPDS_G2_SkinBPatch_GrpAtmPipeID = 69655,
    rwPDS_G2_SkinBPatch_GrpMatPipeID = 69656,
    rwPDS_G2_MatfxUV1BPatch_GrpMatPipeID = 69657,
    rwPDS_G2_MatfxUV2BPatch_GrpMatPipeID = 69658,
    rwPDS_G2_MatfxUV1BPatch_GrpAtmPipeID = 69659,
    rwPDS_G2_MatfxUV2BPatch_GrpAtmPipeID = 69660,
    rwPDS_G2_SkinfxUV1BPatch_GrpMatPipeID = 69661,
    rwPDS_G2_SkinfxUV2BPatch_GrpMatPipeID = 69662,
    rwPDS_G2_SkinfxUV1BPatch_GrpAtmPipeID = 69663,
    rwPDS_G2_SkinfxUV2BPatch_GrpAtmPipeID = 69664,
    rwPDS_VCL_Uva_MatPipeID = 73728,
    rwPDS_VCL_DupUva_MatPipeID = 73729,
    rwPDS_VCL_SkinUva_MatPipeID = 73730,
    rwPDS_VCL_SkinDupUva_MatPipeID = 73731,
    rwPDS_VCL_Prj_MatPipeID = 73732,
    rwPDS_VCL_SkinPrj_MatPipeID = 73733,
    rwPDS_G3x_Generic_AtmPipeID = 327681,
    rwPDS_G3x_APL_MatPipeID = 327682,
    rwPDS_G3x_ADL_MatPipeID = 327683,
    rwPDS_G3x_A4D_MatPipeID = 327684,
    rwPDS_G3x_APLDup_MatPipeID = 327685,
    rwPDS_G3x_ADLDup_MatPipeID = 327686,
    rwPDS_G3x_A4DDup_MatPipeID = 327687,
    rwPDS_G3x_APLGem_MatPipeID = 327688,
    rwPDS_G3x_ADLGem_MatPipeID = 327689,
    rwPDS_G3x_A4DGem_MatPipeID = 327690,
    rwPDS_G3x_Skin_AtmPipeID = 327691,
    rwPDS_G3x_APLSkin_MatPipeID = 327692,
    rwPDS_G3x_ADLSkin_MatPipeID = 327693,
    rwPDS_G3x_A4DSkin_MatPipeID = 327694,
    rwPDS_G3x_APLSkinDup_MatPipeID = 327695,
    rwPDS_G3x_ADLSkinDup_MatPipeID = 327696,
    rwPDS_G3x_A4DSkinDup_MatPipeID = 327697,
    rwPDS_G3x_APLSkinGem_MatPipeID = 327698,
    rwPDS_G3x_ADLSkinGem_MatPipeID = 327699,
    rwPDS_G3x_A4DSkinGem_MatPipeID = 327700,
    rwPDS_G3x_ADLClone_MatPipeID = 327701,
    rwPDS_G3x_ADLClone_AtmPipeID = 327702,
    rwPDS_G3x_OPLClone_MatPipeID = 327703,
    rwPDS_G3x_OPLClone_AtmPipeID = 327704,
    rwPDS_G3x_Team_MatPipeID = 327705,
    rwPDS_G3x_DupTeam_MatPipeID = 327706,
    rwPDS_G3x_GemTeam_MatPipeID = 327707,
    rwPDS_G3x_SkinTeam_MatPipeID = 327708,
    rwPDS_G3x_SkinDupTeam_MatPipeID = 327709,
    rwPDS_G3x_SkinGemTeam_MatPipeID = 327710,
    rwPDS_G3x_Team_AtmPipeID = 327711,
    rwPDS_G3x_SkinTeam_AtmPipeID = 327712,
    rwPDS_G3x_APLUva_MatPipeID = 327713,
    rwPDS_G3x_ADLUva_MatPipeID = 327714,
    rwPDS_G3x_A4DUva_MatPipeID = 327715,
    rwPDS_G3x_APLDupUva_MatPipeID = 327716,
    rwPDS_G3x_ADLDupUva_MatPipeID = 327717,
    rwPDS_G3x_A4DDupUva_MatPipeID = 327718,
    rwPDS_G3x_APLSkinUva_MatPipeID = 327719,
    rwPDS_G3x_ADLSkinUva_MatPipeID = 327720,
    rwPDS_G3x_A4DSkinUva_MatPipeID = 327721,
    rwPDS_G3x_APLSkDupUva_MatPipeID = 327722,
    rwPDS_G3x_ADLSkDupUva_MatPipeID = 327723,
    rwPDS_G3x_A4DSkDupUva_MatPipeID = 327724,
    rwPDS_G3xd_APL_MatPipeID = 327725,
    rwPDS_G3xd_ADL_MatPipeID = 327726,
    rwPDS_G3xd_A4D_MatPipeID = 327727,
    rwPDS_G3xd_APLDup_MatPipeID = 327728,
    rwPDS_G3xd_ADLDup_MatPipeID = 327729,
    rwPDS_G3xd_A4DDup_MatPipeID = 327730,
    rwPDS_G3xd_APLGem_MatPipeID = 327731,
    rwPDS_G3xd_ADLGem_MatPipeID = 327732,
    rwPDS_G3xd_A4DGem_MatPipeID = 327733,
    rwPDS_G3xd_APLUva_MatPipeID = 327734,
    rwPDS_G3xd_ADLUva_MatPipeID = 327735,
    rwPDS_G3xd_A4DUva_MatPipeID = 327736,
    rwPDS_G3xd_APLDupUva_MatPipeID = 327737,
    rwPDS_G3xd_ADLDupUva_MatPipeID = 327738,
    rwPDS_G3xd_A4DDupUva_MatPipeID = 327739,
    rwPDS_G3xd_APLSkin_MatPipeID = 327740,
    rwPDS_G3xd_ADLSkin_MatPipeID = 327741,
    rwPDS_G3xd_A4DSkin_MatPipeID = 327742,
    rwPDS_G3xd_APLSkinDup_MatPipeID = 327743,
    rwPDS_G3xd_ADLSkinDup_MatPipeID = 327744,
    rwPDS_G3xd_A4DSkinDup_MatPipeID = 327745,
    rwPDS_G3xd_APLSkinGem_MatPipeID = 327746,
    rwPDS_G3xd_ADLSkinGem_MatPipeID = 327747,
    rwPDS_G3xd_A4DSkinGem_MatPipeID = 327748,
    rwPDS_G3xd_APLSkinUva_MatPipeID = 327749,
    rwPDS_G3xd_ADLSkinUva_MatPipeID = 327750,
    rwPDS_G3xd_A4DSkinUva_MatPipeID = 327751,
    rwPDS_G3xd_APLSkDupUva_MatPipeID = 327752,
    rwPDS_G3xd_ADLSkDupUva_MatPipeID = 327753,
    rwPDS_G3xd_A4DSkDupUva_MatPipeID = 327754,
    rwPDS_G3x_SkinShd_AtmPipeID = 327755,
    rwPDS_G3x_SkinShd_MatPipeID = 327756,
    rwPDS_G3x_ADLDMorph_MatPipeID = 65613,
    rwPDS_G3x_APLDMorph_MatPipeID = 65614,
    rwPDS_G3x_A4DDMorph_MatPipeID = 65615,
    rwPDS_VCL_Generic_AtmPipeID = 331776,
    rwPDS_VCL_ADLDot3_MatPipeID = 331777,
    rwPDS_VCL_APLDot3_MatPipeID = 331778,
    rwPDS_VCL_ADLSpec_MatPipeID = 331779,
    rwPDS_VCL_APLSpec_MatPipeID = 331780,
    rwPDS_VCL_Skin_AtmPipeID = 331781,
    rwPDS_VCL_ADLSkinDot3_MatPipeID = 331782,
    rwPDS_VCL_APLSkinDot3_MatPipeID = 331783,
    rwPDS_VCL_ADLSkinSpec_MatPipeID = 331784,
    rwPDS_VCL_APLSkinSpec_MatPipeID = 331785,
    rpPDSMAXPIPEID = 331786,
    rpPDSPIPEIDFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD640 -> 0x001FD878
*/
// Range: 0x1FD640 -> 0x1FD878
unsigned char iModelCanUseFastPipes(class RpAtomic * dataTemp /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1FD640 -> 0x1FD878
        class RxPipeline * curAtmPipe; // r2
        signed int i; // r5
        class RpMaterialList * matList; // r2
        signed int i; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FD880 -> 0x001FDAB0
*/
// Range: 0x1FD880 -> 0x1FDAB0
void iModelUseFastPipes(class RpAtomic * dataTemp /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1FD880 -> 0x1FDAB0
        signed int i; // r5
        class RpMaterialList * matList; // r2
        signed int i; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDAB0 -> 0x001FDB5C
*/
// Range: 0x1FDAB0 -> 0x1FDB5C
void iModelInitFastPipes() {
    /* anonymous block */ {
        // Range: 0x1FDAB0 -> 0x1FDB5C
        signed int i; // r17
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDB60 -> 0x001FDBEC
*/
// Range: 0x1FDB60 -> 0x1FDBEC
static class RxPipeline * SkinfxMatCB(class RpMaterial * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FDB60 -> 0x1FDBEC
        enum RpMatFXMaterialFlags matfxFlags; // r2
        class RxPipeline * pgem; // @ 0x00608D90
        class RxPipeline * pnull; // @ 0x00608D94
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDBF0 -> 0x001FDC54
*/
// Range: 0x1FDBF0 -> 0x1FDC54
static class RxPipeline * SkinfxAtmCB(class RpMaterial * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1FDBF0 -> 0x1FDC54
        enum RpMatFXMaterialFlags matfxFlags; // r2
        class RxPipeline * p; // @ 0x00608D8C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDC60 -> 0x001FDC98
*/
// Range: 0x1FDC60 -> 0x1FDC98
static class RxPipeline * GenericMatCB() {
    /* anonymous block */ {
        // Range: 0x1FDC60 -> 0x1FDC98
        class RxPipeline * p; // @ 0x00608D88
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDCA0 -> 0x001FDCD8
*/
// Range: 0x1FDCA0 -> 0x1FDCD8
static class RxPipeline * GenericAtmCB() {
    /* anonymous block */ {
        // Range: 0x1FDCA0 -> 0x1FDCD8
        class RxPipeline * p; // @ 0x00608D84
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDCE0 -> 0x001FDD18
*/
// Range: 0x1FDCE0 -> 0x1FDD18
static class RxPipeline * SkinMatCB() {
    /* anonymous block */ {
        // Range: 0x1FDCE0 -> 0x1FDD18
        class RxPipeline * p; // @ 0x00608D80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModelBucketPDS.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FDD20 -> 0x001FDD58
*/
// Range: 0x1FDD20 -> 0x1FDD58
static class RxPipeline * SkinAtmCB() {
    /* anonymous block */ {
        // Range: 0x1FDD20 -> 0x1FDD58
        class RxPipeline * p; // @ 0x00608D7C
    }
}


