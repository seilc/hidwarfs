/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x607840
unsigned char xClumpColl_FilterFlagsAllMask; // size: 0x1, address: 0x608C3C
unsigned char xClumpColl_FilterFlagsAllEqual; // size: 0x1, address: 0x607844
signed int LeafNodeBoxPolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x1D5990
signed int LeafNodeSpherePolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x1D5BE0
signed int LeafNodeLinePolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x1D5E50
signed int rwPip2AtomicOffset; // size: 0x4, address: 0x609434
signed int rwPip2GeometryOffset; // size: 0x4, address: 0x609430
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class CallBackParam {
    // Members
public:
    class RpIntersection * intersection; // offset 0x0, size 0x4
    class IntersectionCallBack u; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
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
// total size: 0x8
class TestSphere {
    // Members
public:
    class RwSphere * sphere; // offset 0x0, size 0x4
    float recipRadius; // offset 0x4, size 0x4
};
// total size: 0x10
class TempAtomicList {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    class RpGeometry * geom; // offset 0x4, size 0x4
    class RpMeshHeader * meshHeader; // offset 0x8, size 0x4
    class RwMeshCache * meshCache; // offset 0xC, size 0x4
};
// total size: 0x8
class xClumpCollBSPTriangle {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            unsigned int rawIdx; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
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
// total size: 0x50
class PolyLineTestParam {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RpWorldSector * worldSector; // offset 0xC, size 0x4
    class RwV3d delta; // offset 0x10, size 0xC
    class xClumpCollV3dGradient grad; // offset 0x1C, size 0x18
    class RwLine line; // offset 0x34, size 0x18
    class CallBackParam * cbParam; // offset 0x4C, size 0x4
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
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x8
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x4
class RwStreamFile {
    // Members
public:
    union { // inferred
        void * fpFile; // offset 0x0, size 0x4
        void * constfpFile; // offset 0x0, size 0x4
    };
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
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0x8
class nodeInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class xClumpCollV3dGradient {
    // Members
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
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
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x1B0
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
    class rwPS2AllClusterQuickInfo clquickinfo[12]; // offset 0x30, size 0x60
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x90, size 0x120
};
// total size: 0x4
class IntersectionCallBack {
    // Members
public:
    union { // inferred
        class RpWorldSector * (* sectorCB)(class RpIntersection *, class RpWorldSector *, void *); // offset 0x0, size 0x4
        class RpCollisionTriangle * (* worldCB)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // offset 0x0, size 0x4
        class RpAtomic * (* atomicCB)(class RpIntersection *, class RpWorldSector *, class RpAtomic *, float, void *); // offset 0x0, size 0x4
    };
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
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
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
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RpIntersectData {
    // Members
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
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
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class RwSplitBits {
    // Members
public:
    union { // inferred
        float nReal; // offset 0x0, size 0x4
        signed int nInt; // offset 0x0, size 0x4
        unsigned int nUInt; // offset 0x0, size 0x4
    };
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
// total size: 0x24
class PolyTestParam {
    // Members
public:
    class RwBBox bbox; // offset 0x0, size 0x18
    class RpWorldSector * worldSector; // offset 0x18, size 0x4
    void * leafTestData; // offset 0x1C, size 0x4
    class CallBackParam * cbParam; // offset 0x20, size 0x4
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
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x24
class RwStream {
    // Members
public:
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
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
// total size: 0x14
class RwStreamUnion {
    // Members
public:
    union { // inferred
        class RwStreamMemory memory; // offset 0x0, size 0xC
        class RwStreamFile file; // offset 0x0, size 0x4
        class RwStreamCustom custom; // offset 0x0, size 0x14
    };
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
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
// total size: 0x14
class RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D5170 -> 0x001D563C
*/
// Range: 0x1D5170 -> 0x1D563C
static signed int FastIntersectSphereTriangle(class RwSphere * sphere /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */, class RwV3d * normal /* r2 */, float * distance /* r2 */, class RwV3d * vc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D5170 -> 0x1D563C
        float nDotN; // r29
        float distToPlane; // r29
        float sphereRadiusSquared; // r10
        float factor; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D5640 -> 0x001D5988
*/
// Range: 0x1D5640 -> 0x1D5988
class xClumpCollBSPTree * xClumpColl_ForAllIntersections(class xClumpCollBSPTree * tree /* r16 */, class RpIntersection * intersection /* r2 */, class RpCollisionTriangle * (* callBack)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D5640 -> 0x1D5988
        class CallBackParam cbParam; // r29+0xE0
        class PolyLineTestParam isData; // r29+0x80
        class PolyTestParam isData; // r29+0x50
        class TestSphere testSphere; // r29+0xD8
        class PolyTestParam isData; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D5990 -> 0x001D5BD8
*/
// Range: 0x1D5990 -> 0x1D5BD8
static signed int LeafNodeBoxPolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D5990 -> 0x1D5BD8
        class PolyTestParam * isData; // r23
        class CallBackParam * cbParam; // r2
        class RwV3d * v1; // r19
        class RwV3d * v2; // r18
        class RpCollisionTriangle collisionTri; // r29+0xA0
        float lengthSq; // r29+0xD0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D5BE0 -> 0x001D5E48
*/
// Range: 0x1D5BE0 -> 0x1D5E48
static signed int LeafNodeSpherePolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D5BE0 -> 0x1D5E48
        class PolyTestParam * isData; // r2
        class CallBackParam * cbParam; // r2
        class TestSphere * testSphere; // r19
        class RwV3d * v0; // r2
        class RwV3d * v1; // r2
        class RwV3d * v2; // r2
        float distance; // r29+0xFC
        class RpCollisionTriangle collisionTri; // r29+0xD0
        class RwV3d vc[3]; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D5E50 -> 0x001D6254
*/
// Range: 0x1D5E50 -> 0x1D6254
static signed int LeafNodeLinePolyIntersect(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D5E50 -> 0x1D6254
        class PolyLineTestParam * isData; // r19
        class CallBackParam * cbParam; // r2
        class RwV3d * v0; // r5
        class RwV3d * v1; // r4
        class RwV3d * v2; // r3
        float distance; // r29+0xFC
        class RpCollisionTriangle collisionTri; // r29+0xB0
        class RwV3d vTmp; // r29+0xF0
        class RwV3d vTmp2; // r29+0xE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6260 -> 0x001D6E6C
*/
// Range: 0x1D6260 -> 0x1D6E6C
class xClumpCollBSPTree * xClumpColl_ForAllCapsuleLeafNodeIntersections(class xClumpCollBSPTree * tree /* r29+0xBC */, class RwLine * line /* r2 */, float radius /* r20 */, class xClumpCollV3dGradient * grad /* r21 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r29+0xB8 */, void * data /* r29+0xB4 */) {
    /* anonymous block */ {
        // Range: 0x1D6260 -> 0x1D6E6C
        signed int nStack; // r20
        class nodeInfo nodeStack[33]; // r29+0x400
        class RwLine lineStack[33]; // r29+0xE0
        class RwLine currLine; // r29+0xC0
        class RwSplitBits lStart; // r29+0x55C
        class RwSplitBits lEnd; // r29+0x558
        class RwSplitBits rStart; // r29+0x554
        class RwSplitBits rEnd; // r29+0x550
        class xClumpCollBSPBranchNode * branch; // r3
        class RwV3d vTmp; // r29+0x540
        float delta; // r29+0x560
        class RwV3d vTmp; // r29+0x530
        float delta; // r29+0x560
        class RwV3d vLeft; // r29+0x520
        class RwV3d vRight; // r29+0x510
        float delta; // r29+0x560
        float delta; // r29+0x560
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D6E70 -> 0x001D7A60
*/
// Range: 0x1D6E70 -> 0x1D7A60
class xClumpCollBSPTree * xClumpColl_ForAllLineLeafNodeIntersections(class xClumpCollBSPTree * tree /* r29+0xAC */, class RwLine * line /* r2 */, class xClumpCollV3dGradient * grad /* r21 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r29+0xA8 */, void * data /* r29+0xA4 */) {
    /* anonymous block */ {
        // Range: 0x1D6E70 -> 0x1D7A60
        signed int nStack; // r20
        class nodeInfo nodeStack[33]; // r29+0x3F0
        class RwLine lineStack[33]; // r29+0xD0
        class RwLine currLine; // r29+0xB0
        class RwSplitBits lStart; // r29+0x54C
        class RwSplitBits lEnd; // r29+0x548
        class RwSplitBits rStart; // r29+0x544
        class RwSplitBits rEnd; // r29+0x540
        class xClumpCollBSPBranchNode * branch; // r3
        class RwV3d vTmp; // r29+0x530
        float delta; // r29+0x550
        class RwV3d vTmp; // r29+0x520
        float delta; // r29+0x550
        class RwV3d vLeft; // r29+0x510
        class RwV3d vRight; // r29+0x500
        float delta; // r29+0x550
        float delta; // r29+0x550
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D7A60 -> 0x001D7B9C
*/
// Range: 0x1D7A60 -> 0x1D7B9C
class xClumpCollBSPTree * xClumpColl_ForAllBoxLeafNodeIntersections(class xClumpCollBSPTree * tree /* r20 */, class RwBBox * box /* r19 */, signed int (* callBack)(class xClumpCollBSPTriangle *, void *) /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D7A60 -> 0x1D7B9C
        signed int nStack; // r16
        class nodeInfo nodeStack[33]; // r29+0x60
        class xClumpCollBSPBranchNode * branch; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D7BA0 -> 0x001D7BA8
*/
// Range: 0x1D7BA0 -> 0x1D7BA8
void xClumpColl_InstancePointers() {
    /* anonymous block */ {
        // Range: 0x1D7BA0 -> 0x1D7BA8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D7BB0 -> 0x001D7C34
*/
// Range: 0x1D7BB0 -> 0x1D7C34
class xClumpCollBSPTree * xClumpColl_StaticBufferInit(void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D7BB0 -> 0x1D7C34
        unsigned int * header; // r18
        unsigned int numBranchNodes; // r2
        unsigned int numTriangles; // r2
        class xClumpCollBSPTree * tree; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D7C40 -> 0x001D7C58
*/
// Range: 0x1D7C40 -> 0x1D7C58
void xClumpColl_RestoreFilterFlags(unsigned int previousFlags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D7C40 -> 0x1D7C58
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xClumpColl.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D7C60 -> 0x001D7C8C
*/
// Range: 0x1D7C60 -> 0x1D7C8C
unsigned int xClumpColl_SetFilterFlags(unsigned char filterFlags /* r2 */, unsigned char allMask /* r2 */, unsigned char allEqual /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D7C60 -> 0x1D7C8C
        unsigned int previousFlags; // r2
    }
}


