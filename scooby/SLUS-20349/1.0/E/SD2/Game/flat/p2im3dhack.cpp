/*
    Compile unit: E:\SD2\Game\flat\p2im3dhack.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int gRWPS2FastPath; // size: 0x4, address: 0x0
signed int (* oldTriInstanceCB)(class RxPS2AllPipeData *, void * *, unsigned int); // size: 0x4, address: 0x35866C
signed int NewIm3DPS2AllInstance(class RxPS2AllPipeData *, void * *, unsigned int); // size: 0x0, address: 0x27E2F0
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
// total size: 0xB
class _rwPS2AllTriFanLUTs {
    // Members
public:
    unsigned char counterGen; // offset 0x0, size 0x1
    unsigned char startIndOffset; // offset 0x1, size 0x1
    unsigned char shiftMask[3]; // offset 0x2, size 0x3
    unsigned char shiftMask2[3]; // offset 0x5, size 0x3
    unsigned char vertInc[3]; // offset 0x8, size 0x3
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x48
class RxPS2AllPipeData {
    // Members
public:
    class rxNodePS2AllPvtData * objPvtData; // offset 0x0, size 0x4
    class rxNodePS2AllMatPvtData * matPvtData; // offset 0x4, size 0x4
    void * sourceObject; // offset 0x8, size 0x4
    class RpMeshHeader * meshHeader; // offset 0xC, size 0x4
    class RwMeshCache * meshCache; // offset 0x10, size 0x4
    enum RxInstanceFlags objInstance; // offset 0x14, size 0x4
    unsigned int objIdentifier; // offset 0x18, size 0x4
    float spExtra; // offset 0x1C, size 0x4
    signed int numMorphTargets; // offset 0x20, size 0x4
    unsigned int fastMorphing; // offset 0x24, size 0x4
    unsigned char transType; // offset 0x28, size 0x1
    unsigned char primType; // offset 0x29, size 0x1
    unsigned char matModulate; // offset 0x2A, size 0x1
    unsigned char vu1CodeIndex; // offset 0x2B, size 0x1
    class RpMesh * mesh; // offset 0x2C, size 0x4
    class RwResEntry * * cacheEntryRef; // offset 0x30, size 0x4
    enum RxInstanceFlags meshInstance; // offset 0x34, size 0x4
    unsigned int meshIdentifier; // offset 0x38, size 0x4
    class RwSurfaceProperties * surfProps; // offset 0x3C, size 0x4
    class RwTexture * texture; // offset 0x40, size 0x4
    class RwRGBA matCol; // offset 0x44, size 0x4
};
// total size: 0x18
class rwPS2AllFieldRec {
    // Members
public:
    signed int numVerts; // offset 0x0, size 0x4
    signed int morphNumVerts; // offset 0x4, size 0x4
    signed int dataoffset; // offset 0x8, size 0x4
    signed int morphDataoffset; // offset 0xC, size 0x4
    signed short skip; // offset 0x10, size 0x2
    signed short morphSkip; // offset 0x12, size 0x2
    signed short reverse; // offset 0x14, size 0x2
    unsigned char vuoffset; // offset 0x16, size 0x1
    unsigned char pad[1]; // offset 0x17, size 0x1
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x190
class rwPS2AllResEntryHeader {
    // Members
public:
    signed int refCnt; // offset 0x0, size 0x4
    signed int clrCnt; // offset 0x4, size 0x4
    __int128 * data; // offset 0x8, size 0x4
    unsigned int numVerts; // offset 0xC, size 0x4
    unsigned int objIdentifier; // offset 0x10, size 0x4
    unsigned int meshIdentifier; // offset 0x14, size 0x4
    signed int batchSize; // offset 0x18, size 0x4
    signed int numBatches; // offset 0x1C, size 0x4
    signed int batchesPerTag; // offset 0x20, size 0x4
    signed int morphStart; // offset 0x24, size 0x4
    signed int morphFinish; // offset 0x28, size 0x4
    signed int morphNum; // offset 0x2C, size 0x4
    class rwPS2AllClusterQuickInfo clquickinfo[11]; // offset 0x30, size 0x58
    class rwPS2AllFieldRec fieldRec[11]; // offset 0x88, size 0x108
};
// total size: 0x60
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    signed int refCount; // offset 0x50, size 0x4
    enum RwTextureFilterMode filtering; // offset 0x54, size 0x4
    enum RwTextureAddressMode addressingU; // offset 0x58, size 0x4
    enum RwTextureAddressMode addressingV; // offset 0x5C, size 0x4
};
enum RpMeshHeaderFlags {
    rpMESHHEADERTRISTRIP = 1,
    rpMESHHEADERTRIFAN = 2,
    rpMESHHEADERLINELIST = 4,
    rpMESHHEADERPOLYLINE = 8,
    rpMESHHEADERPOINTLIST = 16,
    rpMESHHEADERPRIMMASK = 255,
    rpMESHHEADERUNINDEXED = 256,
    rpMESHHEADERFLAGSFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x12
class rwPS2AllIndexLUTs {
    // Members
public:
    unsigned short fakeIndices[1]; // offset 0x0, size 0x2
    class _rwPS2AllNormalLUTs normal; // offset 0x2, size 0x5
    class _rwPS2AllTriFanLUTs triFan; // offset 0x7, size 0xB
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
// total size: 0x24
class RxObjSpace3DVertex {
    // Members
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
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
enum RxInstanceFlags {
    rxINSTANCENAINSTANCEFLAG = 0,
    rxINSTANCEDONTINSTANCE = 1,
    rxINSTANCEINPLACEINSTANCE = 2,
    rxINSTANCECONGRUENTINSTANCE = 4,
    rxINSTANCEFULLINSTANCE = 8,
    rxINSTANCETYPEMASK = 14,
    rxINSTANCEXYZ = 16,
    rxINSTANCENORMAL = 32,
    rxINSTANCERGBA = 64,
    rxINSTANCEUV = 128,
    rxINSTANCEUV1 = 128,
    rxINSTANCEUV2 = 256,
    rxINSTANCEUV3 = 512,
    rxINSTANCEUV4 = 1024,
    rxINSTANCEUV5 = 2048,
    rxINSTANCEUV6 = 4096,
    rxINSTANCEUV7 = 8192,
    rxINSTANCEUV8 = 16384,
    rxINSTANCEUSER1 = 32768,
    rxINSTANCEUSER2 = 65536,
    rxINSTANCEUSER3 = 131072,
    rxINSTANCEUSER4 = 262144,
    rxINSTANCEALL = 524272,
    rxINSTANCEMASK = 524287,
    rxINSTANCEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x120
class rwPS2AllResEntryFormat {
    // Members
public:
    unsigned char batchRound; // offset 0x0, size 0x1
    unsigned char stripReverse; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    unsigned int maxInputSize; // offset 0x4, size 0x4
    signed int batchSize; // offset 0x8, size 0x4
    signed int batchesPerTag; // offset 0xC, size 0x4
    signed int morphBatchSize; // offset 0x10, size 0x4
    signed int morphBatchesPerTag; // offset 0x14, size 0x4
    class rwPS2AllFieldRec fieldRec[11]; // offset 0x18, size 0x108
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xE
class rwPS2AllPrimTypeLUT {
    // Members
public:
    unsigned char vertToIndRatio[7]; // offset 0x0, size 0x7
    unsigned char vertToIndOffset[7]; // offset 0x7, size 0x7
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
enum RwShadeMode {
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT = 1,
    rwSHADEMODEGOURAUD = 2,
    rwSHADEMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x30
class _rwIm3DPoolStash {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class RwMatrixTag * ltm; // offset 0x4, size 0x4
    unsigned int numVerts; // offset 0x8, size 0x4
    class RxObjSpace3DVertex * objVerts; // offset 0xC, size 0x4
    class RxCamSpace3DVertex * camVerts; // offset 0x10, size 0x4
    class RwSky2DVertex * devVerts; // offset 0x14, size 0x4
    class RxMeshStateVector * meshState; // offset 0x18, size 0x4
    class RxRenderStateVector * renderState; // offset 0x1C, size 0x4
    class RxPipeline * pipeline; // offset 0x20, size 0x4
    enum RwPrimitiveType primType; // offset 0x24, size 0x4
    unsigned short * indices; // offset 0x28, size 0x4
    unsigned int numIndices; // offset 0x2C, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
// total size: 0xD0
class RxMeshStateVector {
    // Members
public:
    signed int Flags; // offset 0x0, size 0x4
    void * SourceObject; // offset 0x4, size 0x4
    class RwMatrixTag Obj2World; // offset 0x10, size 0x40
    class RwMatrixTag Obj2Cam; // offset 0x50, size 0x40
    class RwSurfaceProperties SurfaceProperties; // offset 0x90, size 0xC
    class RwTexture * Texture; // offset 0x9C, size 0x4
    class RwRGBA MatCol; // offset 0xA0, size 0x4
    class RxPipeline * Pipeline; // offset 0xA4, size 0x4
    enum RwPrimitiveType PrimType; // offset 0xA8, size 0x4
    unsigned int NumElements; // offset 0xAC, size 0x4
    unsigned int NumVertices; // offset 0xB0, size 0x4
    signed int ClipFlagsOr; // offset 0xB4, size 0x4
    signed int ClipFlagsAnd; // offset 0xB8, size 0x4
    void * SourceMesh; // offset 0xBC, size 0x4
    void * DataObject; // offset 0xC0, size 0x4
};
// total size: 0x2FC
class rxNodePS2AllMatPvtData {
    // Members
public:
    signed int (* im3DPreMeshCB)(class RxPS2AllPipeData *); // offset 0x0, size 0x4
    signed int (* meshInstanceTestCB)(class RxPS2AllPipeData *); // offset 0x4, size 0x4
    class RwResEntry * (* resEntryAllocCB)(class RxPS2AllPipeData *, class RwResEntry * *, unsigned int, void (*)(class RwResEntry *)); // offset 0x8, size 0x4
    signed int (* instanceCB)(class RxPS2AllPipeData *, void * *, unsigned int); // offset 0xC, size 0x4
    signed int (* bridgeCB)(class RxPS2AllPipeData *); // offset 0x10, size 0x4
    signed int (* im3DPostMeshCB)(class RxPS2AllPipeData *); // offset 0x14, size 0x4
    signed int (* im3DMeshSplitCB)(class RxPS2AllPipeData *); // offset 0x18, size 0x4
    signed int (* postMeshCB)(class RxPS2AllPipeData *); // offset 0x1C, size 0x4
    signed int vifOffset; // offset 0x20, size 0x4
    void * * vu1CodeArray; // offset 0x24, size 0x4
    unsigned int codeArrayLength; // offset 0x28, size 0x4
    class rwPS2AllClusterInstanceInfo clinfo[11]; // offset 0x2C, size 0x58
    unsigned int cliIndex[11]; // offset 0x84, size 0x2C
    enum RpMeshHeaderFlags pipeType; // offset 0xB0, size 0x4
    unsigned char totallyOpaque; // offset 0xB4, size 0x1
    unsigned char numStripes; // offset 0xB5, size 0x1
    unsigned char sizeOnVU; // offset 0xB6, size 0x1
    unsigned char pad0; // offset 0xB7, size 0x1
    class rwPS2AllResEntryFormat strip; // offset 0xB8, size 0x120
    class rwPS2AllResEntryFormat list; // offset 0x1D8, size 0x120
    unsigned int magicValue; // offset 0x2F8, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x28
class RxCamSpace3DVertex {
    // Members
public:
    class RwV3d cameraVertex; // offset 0x0, size 0xC
    unsigned char clipFlags; // offset 0xC, size 0x1
    unsigned char pad[3]; // offset 0xD, size 0x3
    class RwRGBAReal col; // offset 0x10, size 0x10
    float u; // offset 0x20, size 0x4
    float v; // offset 0x24, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x30
class RxRenderStateVector {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    enum RwShadeMode ShadeMode; // offset 0x4, size 0x4
    enum RwBlendFunction SrcBlend; // offset 0x8, size 0x4
    enum RwBlendFunction DestBlend; // offset 0xC, size 0x4
    class RwRaster * TextureRaster; // offset 0x10, size 0x4
    enum RwTextureAddressMode AddressModeU; // offset 0x14, size 0x4
    enum RwTextureAddressMode AddressModeV; // offset 0x18, size 0x4
    enum RwTextureFilterMode FilterMode; // offset 0x1C, size 0x4
    class RwRGBA BorderColor; // offset 0x20, size 0x4
    enum RwFogType FogType; // offset 0x24, size 0x4
    class RwRGBA FogColor; // offset 0x28, size 0x4
    unsigned char * FogTable; // offset 0x2C, size 0x4
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
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0x0
class rxReq {};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x5
class _rwPS2AllNormalLUTs {
    // Members
public:
    unsigned char counterGen; // offset 0x0, size 0x1
    unsigned char startIndOffset; // offset 0x1, size 0x1
    unsigned char shiftMask[1]; // offset 0x2, size 0x1
    unsigned char shiftMask2[1]; // offset 0x3, size 0x1
    unsigned char vertInc[1]; // offset 0x4, size 0x1
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
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
// total size: 0x58
class rxNodePS2AllPvtData {
    // Members
public:
    class rwPS2AllPrimTypeLUT primLUT; // offset 0x0, size 0xE
    unsigned char pad[2]; // offset 0xE, size 0x2
    signed int (* objectSetupCB)(class RxPS2AllPipeData *, class RwMatrixTag * *); // offset 0x10, size 0x4
    signed int (* objectFinalizeCB)(class RxPS2AllPipeData *); // offset 0x14, size 0x4
    class RxPipeline * groupPipe; // offset 0x18, size 0x4
    unsigned int lightOffset; // offset 0x1C, size 0x4
    unsigned int lightBufferSize; // offset 0x20, size 0x4
    __int128 * nullLightBlock; // offset 0x24, size 0x4
    float nullLightBuffer[12]; // offset 0x28, size 0x30
};
// total size: 0x8
class rwPS2AllClusterInstanceInfo {
    // Members
public:
    unsigned int attrib; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
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
enum RwPrimitiveType {
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = 2147483647,
};

/*
    Compile unit: E:\SD2\Game\flat\p2im3dhack.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027E2F0 -> 0x0027E8A4
*/
// Range: 0x27E2F0 -> 0x27E8A4
signed int NewIm3DPS2AllInstance(class RxPS2AllPipeData * ps2AllPipeData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27E2F0 -> 0x27E8A4
        class RxObjSpace3DVertex * verts; // r5
        unsigned int * dataTmp; // r2
        __int128 * data; // r4
        class RxObjSpace3DVertex * vert; // r20
        class RxObjSpace3DVertex * verts; // r9
        float * dataTmp; // r2
        __int128 * data; // r8
        class RxObjSpace3DVertex * verts; // r24
        float * dataTmp; // r2
        __int128 * data; // r15
        signed int * dataUV; // r17
        signed int * dataRGBA; // r24
        signed int * dataXYZ; // r9
        class RxObjSpace3DVertex * verts; // r8
        signed int batch; // r7
        signed int uvskip; // r16
        signed int rgbaskip; // r5
        signed int xyzskip; // r4
        __int128 * data; // r12
        unsigned short * indexArray; // r14
        unsigned char * swap; // r2
        unsigned char * vertInc; // r13
        unsigned char * shiftMask2; // r12
        unsigned char * shiftMask; // r11
        unsigned int stripReverse; // r10
        unsigned int modCnt; // r9
        unsigned int startIndOffset; // r2
        unsigned int indOffset; // r8
        unsigned int cntGen; // r7
        signed int j; // r2
        signed int vertCounter; // r2
        unsigned int numVerts; // r2
        class rwPS2AllResEntryHeader * ps2ResHeader; // r6
        class _rwIm3DPoolStash * stash; // r5
        class rwPS2AllIndexLUTs IndexLUT; // @ 0x00356FF0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2im3dhack.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027E8B0 -> 0x0027E900
*/
// Range: 0x27E8B0 -> 0x27E900
void p2EnableFastIm3D() {
    /* anonymous block */ {
        // Range: 0x27E8B0 -> 0x27E900
        class rxNodePS2AllMatPvtData * matPvtData; // r5
        class RxPipeline * objPipe; // r2
    }
}


