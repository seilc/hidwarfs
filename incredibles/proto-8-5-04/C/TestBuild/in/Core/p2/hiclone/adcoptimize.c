/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int sUsingDummyMesh; // size: 0x4, address: 0x608F94
static signed int sReorderMode; // size: 0x4, address: 0x608F98
static signed int sPreserveWinding; // size: 0x4, address: 0x607BC0
class RpMesh * ReorderMeshCB(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x2BFB70
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
class RpMesh * OptimalADC_SlamData(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x2C1220
class RpMesh * Dummy_RestoreMesh(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x2BFB30
class RpMesh * OptimalADC_RemoveDegen(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x2C1310
class RpMesh * OptimalADC_Count(class RpMesh *, class RpMeshHeader *, void *); // size: 0x0, address: 0x2C1A30
// total size: 0x8
class TriStripIdx {
    // Members
public:
    signed int start; // offset 0x0, size 0x4
    signed int length; // offset 0x4, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
// total size: 0x14
class rpADCRemovalStructure {
    // Members
public:
    unsigned int numVertices; // offset 0x0, size 0x4
    unsigned int numOrigVertices; // offset 0x4, size 0x4
    signed char * adcBits; // offset 0x8, size 0x4
    unsigned short * adcIndex; // offset 0xC, size 0x4
    unsigned int * perMeshIndices; // offset 0x10, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BF910 -> 0x002BFB28
*/
// Range: 0x2BF910 -> 0x2BFB28
signed int OptimalADCGeometryConvert(class RpGeometry * geometry /* r17 */, signed int preserveWinding /* r2 */, signed int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BF910 -> 0x2BFB28
        signed char * adcBits; // r16
        signed char * outBits; // r21
        unsigned short * adcIndex; // r20
        unsigned int * perMeshIndices; // r19
        class rpADCRemovalStructure adcRemoval; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BFB30 -> 0x002BFB70
*/
// Range: 0x2BFB30 -> 0x2BFB70
static class RpMesh * Dummy_RestoreMesh(class RpMesh * pMesh /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BFB30 -> 0x2BFB70
        class RpMesh * dummyMesh; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BFB70 -> 0x002C0084
*/
// Range: 0x2BFB70 -> 0x2C0084
static class RpMesh * ReorderMeshCB(class RpMesh * pMesh /* r21 */, class RpMeshHeader * pMeshHeader /* r22 */, void * pData /* r23 */) {
    /* anonymous block */ {
        // Range: 0x2BFB70 -> 0x2C0084
        class RpMesh * dummyMesh; // r2
        signed int numStrips; // r20
        signed int i; // r5
        signed int j; // r9
        signed int totalStripIndices; // r19
        signed int runStart; // r18
        signed int runLength; // r17
        signed int origUsage; // r2
        signed int finiteUsage; // r2
        signed int infiniteUsage; // r2
        class TriStripIdx * strips; // r16
        class TriStripIdx * finiteStrips; // r18
        class TriStripIdx * infiniteStrips; // r17
        signed int estimateIndices; // r18
        class TriStripIdx * spatialStrips; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C0090 -> 0x002C06DC
*/
// Range: 0x2C0090 -> 0x2C06DC
static class TriStripIdx * Spatial_Reorder(class RpMesh * pMesh /* r30 */, class TriStripIdx * instrips /* r21 */, signed int numStrips /* r19 */, class RpGeometry * geom /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2C0090 -> 0x2C06DC
        signed int i; // r4
        signed int j; // r11
        signed int currStrip; // r18
        signed int fifoLen; // r25
        signed int fifoCur; // r24
        class RwV3d fifoContents[92]; // r29+0xE0
        class TriStripIdx * strips; // r17
        class RwBBox * stripboxes; // r16
        class RwV3d * verts; // r2
        signed int endstrip; // r2
        class RwV3d * curvert; // r5
        signed int bestidx; // r15
        float bestdimension; // r1
        class RwBBox swapBox; // r29+0xC0
        signed int testFifo; // r14
        class RwBBox testBox; // r29+0xA0
        class RwV3d * testFifoVec; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C06E0 -> 0x002C0970
*/
// Range: 0x2C06E0 -> 0x2C0970
static class TriStripIdx * GreedyCache_ReorderInfinite(class RpMesh * pMesh /* r21 */, class RpMeshHeader * pMeshHeader /* r20 */, class TriStripIdx * instrips /* r23 */, signed int numStrips /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2C06E0 -> 0x2C0970
        signed int i; // r6
        signed int j; // r9
        signed int currStrip; // r18
        class TriStripIdx * strips; // r17
        signed char * fifoCount; // r16
        signed int bestidx; // r5
        float curusage; // r5
        float bestusage; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C0970 -> 0x002C0FFC
*/
// Range: 0x2C0970 -> 0x2C0FFC
static class TriStripIdx * GreedyCache_ReorderFinite(class RpMesh * pMesh /* r21 */, class RpMeshHeader * pMeshHeader /* r20 */, class TriStripIdx * instrips /* r23 */, signed int numStrips /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2C0970 -> 0x2C0FFC
        signed int i; // r7
        signed int j; // r14
        signed int currStrip; // r18
        signed int fifoContents[92]; // r29+0x90
        signed int fifoLen; // r6
        signed int fifoCur; // r5
        class TriStripIdx * strips; // r17
        signed char * fifoCount; // r16
        signed int bestidx; // r4
        signed int fifoReset; // r13
        float curusage; // r5
        float bestusage; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C1000 -> 0x002C1214
*/
// Range: 0x2C1000 -> 0x2C1214
static signed int Eval_Reusage(unsigned short * indices /* r21 */, class TriStripIdx * strips /* r20 */, signed int numstrip /* r22 */, signed int batchSize /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2C1000 -> 0x2C1214
        signed int i; // r4
        signed int j; // r3
        signed int k; // r9
        signed int curbatch; // r18
        signed int curvert; // r17
        signed int reusage; // r16
        signed int batch[2][256]; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C1220 -> 0x002C1304
*/
// Range: 0x2C1220 -> 0x2C1304
static class RpMesh * OptimalADC_SlamData(class RpMesh * pMesh /* r17 */, void * pData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C1220 -> 0x2C1304
        class rpADCRemovalStructure * adcData; // r16
        signed int i; // r7
        signed int numIndices; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C1310 -> 0x002C1A2C
*/
// Range: 0x2C1310 -> 0x2C1A2C
static class RpMesh * OptimalADC_RemoveDegen(class RpMesh * pMesh /* r2 */, void * pData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C1310 -> 0x2C1A2C
        class rpADCRemovalStructure * adcData; // r2
        unsigned short * pSourceIndex; // r2
        unsigned short * pDestIndex; // r8
        unsigned short * pDestRunStart; // r18
        unsigned short * pDestRunEnd; // r11
        unsigned short tempIndex; // r2
        signed int numIndices; // r7
        signed int i; // r17
        signed int j; // r5
        signed int runStart; // r2
        signed int runLength; // r3
        class RpMesh * origMesh; // r2
        signed int flipneeded; // r16
        signed int flipneeded; // r13
        signed char lastADC; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\adcoptimize.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002C1A30 -> 0x002C1C68
*/
// Range: 0x2C1A30 -> 0x2C1C68
static class RpMesh * OptimalADC_Count(class RpMesh * pMesh /* r2 */, void * pData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2C1A30 -> 0x2C1C68
        class rpADCRemovalStructure * adcData; // r2
        signed int i; // r12
        signed int accumIndex; // r11
        signed int runStart; // r10
        signed int runLength; // r9
        class RpMesh * origMesh; // r8
    }
}


