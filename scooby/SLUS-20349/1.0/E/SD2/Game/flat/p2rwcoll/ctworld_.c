/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char rcsid[67]; // size: 0x43, address: 0x0
class RpWorldSector * WorldSectorQueryDataCallBack(class RpWorldSector *, void *); // size: 0x0, address: 0x0
class RpWorldSector * WorldSectorDestroyDataCallBack(class RpWorldSector *, void *); // size: 0x0, address: 0x0
class RpWorldSector * WorldSectorBuildDataCallBack(class RpWorldSector *, void *); // size: 0x0, address: 0x0
signed int _rpCollisionWorldSectorDataOffset; // size: 0x4, address: 0x358640
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B5AD0
class RpWorldSector * WorldSectorForAllPrimitiveAtomicIntersections(class RpWorldSector *, void *); // size: 0x0, address: 0x0
class RpAtomic * AtomicSphereTest(class RpAtomic *, void *); // size: 0x0, address: 0x0
class RpAtomic * AtomicBoxTest(class RpAtomic *, void *); // size: 0x0, address: 0x0
class RpAtomic * AtomicLineTest(class RpAtomic *, void *); // size: 0x0, address: 0x0
signed int _rpCollisionGlobalsOffset; // size: 0x4, address: 0x358634
class RpWorldSector * WorldSectorForAllBoxedPrimitivePolyIntersections(class RpWorldSector *, void *); // size: 0x0, address: 0x273400
signed int OldLeafNodeForAllSpherePolyIntersections(signed int, signed int, void *); // size: 0x0, address: 0x273EF0
signed int LeafNodeForAllSpherePolyIntersections(signed int, signed int, void *); // size: 0x0, address: 0x273730
signed int OldLeafNodeForAllBoxPolyIntersections(signed int, signed int, void *); // size: 0x0, address: 0x274070
signed int LeafNodeForAllBoxPolyIntersections(signed int, signed int, void *); // size: 0x0, address: 0x2734D0
class RpWorldSector * WorldSectorForAllLinePolyIntersections(class RpWorldSector *, void *); // size: 0x0, address: 0x273460
class RpWorldSector * WorldSectorIntersectionCallBack(class RpWorldSector *, void *); // size: 0x0, address: 0x0
class RpWorldSector * CollisionWorldSectorTranslate(class RpWorldSector *, void *); // size: 0x0, address: 0x0
signed int _rpCollisionAtomicDataOffset; // size: 0x4, address: 0x358638
signed int LeafNodeForAllLinePolyIntersections(signed int, signed int, void *); // size: 0x0, address: 0x2738C0
// total size: 0x8
class TestSphere {
    // Members
public:
    class RwSphere * sphere; // offset 0x0, size 0x4
    float recipRadius; // offset 0x4, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
// total size: 0x10
class RpCollisionData {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class RpCollBSPTree * tree; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    unsigned short * triangleMap; // offset 0xC, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x2C
class PolyTestParam {
    // Members
public:
    class RwBBox bbox; // offset 0x0, size 0x18
    class RpWorldSector * worldSector; // offset 0x18, size 0x4
    signed int (* leafTest)(signed int, signed int, void *); // offset 0x1C, size 0x4
    signed int (* v303leafTest)(signed int, signed int, void *); // offset 0x20, size 0x4
    void * leafTestData; // offset 0x24, size 0x4
    class CallBackParam * cbParam; // offset 0x28, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x94
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpCollSector * colSectorRoot; // offset 0x80, size 0x4
    class RpMeshHeader * mesh; // offset 0x84, size 0x4
    class RxPipeline * pipeline; // offset 0x88, size 0x4
    unsigned short matListWindowBase; // offset 0x8C, size 0x2
    unsigned short numVertices; // offset 0x8E, size 0x2
    unsigned short numPolygons; // offset 0x90, size 0x2
    unsigned short pad; // offset 0x92, size 0x2
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x10
class RpCollBSPBranchNode {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned char leftType; // offset 0x2, size 0x1
    unsigned char rightType; // offset 0x3, size 0x1
    unsigned short leftNode; // offset 0x4, size 0x2
    unsigned short rightNode; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0xC
class CallBackParam {
    // Members
public:
    class RpIntersection * intersection; // offset 0x0, size 0x4
    class IntersectionCallBack u; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x7C
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
    class RwSurfaceProperties surfaceProps; // offset 0x68, size 0xC
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x74, size 0x4
    class RxPipeline * pipeline; // offset 0x78, size 0x4
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
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0x1C
class AtomicTestParam {
    // Members
public:
    class CallBackParam cbParam; // offset 0x0, size 0xC
    class RpWorldSector * worldSector; // offset 0xC, size 0x4
    class RpAtomic * (* atomicCallBack)(class RpAtomic *, void *); // offset 0x10, size 0x4
    class RpAtomic * testAtomic; // offset 0x14, size 0x4
    void * testData; // offset 0x18, size 0x4
};
// total size: 0x18
class RpPlaneSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    float value; // offset 0x4, size 0x4
    class RpSector * leftSubTree; // offset 0x8, size 0x4
    class RpSector * rightSubTree; // offset 0xC, size 0x4
    float leftValue; // offset 0x10, size 0x4
    float rightValue; // offset 0x14, size 0x4
};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x6C
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
    class RwSurfaceProperties ignoredSurfaceProps; // offset 0x54, size 0xC
    class RpMeshHeader * mesh; // offset 0x60, size 0x4
    class RwResEntry * repEntry; // offset 0x64, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x68, size 0x4
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
// total size: 0x4
class RpCollisionBuildParam {
    // Members
public:
    signed int dummy; // offset 0x0, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// total size: 0x48
class PolyLineTestParam {
    // Members
public:
    class RpV3dGradient grad; // offset 0x0, size 0x18
    class RwLine clippedLine; // offset 0x18, size 0x18
    class RpWorldSector * worldSector; // offset 0x30, size 0x4
    class RwV3d * start; // offset 0x34, size 0x4
    class RwV3d delta; // offset 0x38, size 0xC
    class CallBackParam * cbParam; // offset 0x44, size 0x4
};
// total size: 0x10
class RpCollBSPTree {
    // Members
public:
    unsigned int numLeafNodes; // offset 0x0, size 0x4
    class RpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    class RpCollBSPLeafNode * leafNodes; // offset 0x8, size 0x4
    unsigned char pad[4]; // offset 0xC, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x20
class RpClump {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLLLink inWorldLink; // offset 0x10, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
    unsigned short pad; // offset 0x1E, size 0x2
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0x4
class RpCollBSPLeafNode {
    // Members
public:
    unsigned short numPolygons; // offset 0x0, size 0x2
    unsigned short firstPolygon; // offset 0x2, size 0x2
};
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
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
// total size: 0x8
class buildCallBackData {
    // Members
public:
    class RpCollisionBuildParam * param; // offset 0x0, size 0x4
    signed int error; // offset 0x4, size 0x4
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
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0x18
class RpV3dGradient {
    // Members
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
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
// total size: 0x0
class rxReq {};
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
class RpCollBSPTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short index; // offset 0x6, size 0x2
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class TestLine {
    // Members
public:
    class RwLine * line; // offset 0x0, size 0x4
    class RwV3d dir; // offset 0x4, size 0xC
    float length; // offset 0x10, size 0x4
    float recipLength; // offset 0x14, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00272FB0 -> 0x002733FC
*/
// Range: 0x272FB0 -> 0x2733FC
class RpWorld * RpCollisionWorldForAllIntersections(class RpWorld * world /* r16 */, class RpIntersection * intersection /* r2 */, class RpCollisionTriangle * (* callBack)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x272FB0 -> 0x2733FC
        class RpAtomic * atomic; // r17
        class RwSphere sphere; // r29+0x110
        class TestSphere testSphere; // r29+0x138
        class PolyTestParam isData; // r29+0xE0
        class PolyTestParam isData; // r29+0xB0
        class TestSphere testSphere; // r29+0x130
        class PolyTestParam isData; // r29+0x80
        class PolyLineTestParam isData; // r29+0x30
        class CallBackParam cbParam; // r29+0x120
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273400 -> 0x0027345C
*/
// Range: 0x273400 -> 0x27345C
static class RpWorldSector * WorldSectorForAllBoxedPrimitivePolyIntersections(class RpWorldSector * worldSector /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273400 -> 0x27345C
        class RpCollisionData * collData; // r2
        class PolyTestParam * isData; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273460 -> 0x002734C8
*/
// Range: 0x273460 -> 0x2734C8
static class RpWorldSector * WorldSectorForAllLinePolyIntersections(class RpWorldSector * worldSector /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273460 -> 0x2734C8
        class RpCollisionData * collData; // r2
        class PolyLineTestParam * isData; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002734D0 -> 0x00273724
*/
// Range: 0x2734D0 -> 0x273724
static signed int LeafNodeForAllBoxPolyIntersections(signed int numPolygons /* r22 */, signed int polyOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2734D0 -> 0x273724
        float _result; // r29+0xE0
        float lengthSq; // r29+0xE0
        class RpCollisionTriangle collisionTri; // r29+0xB0
        class RwV3d * v2; // r21
        class RwV3d * v1; // r20
        class RwV3d * v0; // r19
        class RpPolygon * poly; // r2
        unsigned short * polyIndex; // r18
        class RpPolygon * polygons; // r30
        class RwV3d * vertices; // r17
        class RpWorldSector * worldSector; // r23
        class CallBackParam * cbParam; // r16
        class PolyTestParam * isData; // r29+0xAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273730 -> 0x002738BC
*/
// Range: 0x273730 -> 0x2738BC
static signed int LeafNodeForAllSpherePolyIntersections(signed int numPolygons /* r16 */, signed int polyOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273730 -> 0x2738BC
        class RpCollisionTriangle collisionTri; // r29+0xB0
        float distance; // r29+0xDC
        class RwV3d * v2; // r21
        class RwV3d * v1; // r22
        class RwV3d * v0; // r20
        class RpPolygon * poly; // r2
        unsigned short * polyIndex; // r19
        class RpPolygon * polygons; // r29+0xA0
        class RwV3d * vertices; // r18
        class RpWorldSector * worldSector; // r30
        class TestSphere * testSphere; // r23
        class CallBackParam * cbParam; // r17
        class PolyTestParam * isData; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002738C0 -> 0x00273D88
*/
// Range: 0x2738C0 -> 0x273D88
static signed int LeafNodeForAllLinePolyIntersections(signed int numPolygons /* r16 */, signed int polyOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2738C0 -> 0x273D88
        float _result; // r29+0xE0
        float lengthSq; // r1
        class RpCollisionTriangle collisionTri; // r29+0x90
        float v; // r3
        float u; // r6
        float hi; // r15
        float lo; // r14
        class RwV3d edgetmp; // r29+0xD0
        float det; // r13
        class RwV3d edge1; // r29+0xC0
        signed int result; // r7
        float distance; // r20
        class RwV3d * v2; // r4
        class RwV3d * v1; // r3
        class RwV3d * v0; // r2
        class RpPolygon * poly; // r2
        unsigned short * polyIndex; // r21
        class RpPolygon * polygons; // r22
        class RwV3d * vertices; // r20
        class RpWorldSector * worldSector; // r19
        class CallBackParam * cbParam; // r18
        class PolyLineTestParam * isData; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273D90 -> 0x00273EF0
*/
// Range: 0x273D90 -> 0x273EF0
static class RpWorldSector * OldWorldSectorForAllBoxedPrimitivePolyIntersections(class RpWorldSector * worldSector /* r21 */, class PolyTestParam * isData /* r20 */) {
    /* anonymous block */ {
        // Range: 0x273D90 -> 0x273EF0
        class RwSplitBits right; // r29+0xBC
        class RwSplitBits left; // r29+0xB8
        float value; // r1
        signed int plane; // r6
        signed int polyOffset; // r2
        signed int numPolygons; // r2
        signed int cutStack[16]; // r29+0x70
        signed int cut; // r18
        signed int nStack; // r17
        class RwV3d * vertices; // r16
        class RpCollSector * collSector; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00273EF0 -> 0x00274064
*/
// Range: 0x273EF0 -> 0x274064
static signed int OldLeafNodeForAllSpherePolyIntersections(signed int numPolygons /* r21 */, signed int polyOffset /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x273EF0 -> 0x274064
        class RpCollisionTriangle collTri; // r29+0xB0
        float distance; // r29+0xDC
        class RwV3d * v2; // r22
        class RwV3d * v1; // r23
        class RwV3d * v0; // r19
        class RpPolygon * poly; // r18
        class RwV3d * vertices; // r17
        class RpWorldSector * worldSector; // r29+0xA0
        class CallBackParam * cbParam; // r16
        class TestSphere * testSphere; // r30
        class PolyTestParam * isData; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274070 -> 0x002742A4
*/
// Range: 0x274070 -> 0x2742A4
static signed int OldLeafNodeForAllBoxPolyIntersections(signed int numPolygons /* r22 */, signed int polyOffset /* r23 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x274070 -> 0x2742A4
        float _result; // r29+0xE0
        float lengthSq; // r29+0xE0
        class RpCollisionTriangle collTri; // r29+0xB0
        class RwV3d * v2; // r21
        class RwV3d * v1; // r20
        class RwV3d * v0; // r19
        class RpPolygon * poly; // r18
        class RwV3d * vertices; // r17
        class RpWorldSector * worldSector; // r30
        class CallBackParam * cbParam; // r16
        class PolyTestParam * isData; // r29+0xAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002742B0 -> 0x00274A54
*/
// Range: 0x2742B0 -> 0x274A54
static class RpWorldSector * OldWorldSectorForAllLinePolyIntersections(class RpWorldSector * worldSector /* r30 */, class PolyLineTestParam * isData /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2742B0 -> 0x274A54
        float _result; // r29+0x2F0
        float lengthSq; // r1
        class RpCollisionTriangle collTri; // r29+0x2A0
        float v; // r3
        float u; // r5
        float hi; // r17
        float lo; // r16
        class RwV3d edgetmp; // r29+0x2D8
        float det; // r15
        class RwV3d edge1; // r29+0x2C8
        signed int result; // r7
        float distance; // r20
        class RwV3d * v2; // r4
        class RwV3d * v1; // r3
        class RwV3d * v0; // r2
        float delta; // r4
        class RwSplitBits end; // r29+0x2EC
        class RwSplitBits start; // r29+0x2E8
        float value; // r5
        signed int plane; // r2
        class RpPolygon * poly; // r19
        signed int polyOffset; // r18
        signed int numPolygons; // r2
        class RwLine lineStack[16]; // r29+0x120
        class RwLine line; // r29+0x100
        signed int cutStack[16]; // r29+0xC0
        signed int cut; // r2
        signed int nStack; // r23
        class RwV3d * vertices; // r17
        class RpCollSector * collSector; // r2
        class CallBackParam * cbParam; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274A60 -> 0x00274B50
*/
// Range: 0x274A60 -> 0x274B50
static class RpWorld * WorldForAllBoxWorldSectorIntersections(class RpWorld * world /* r20 */, class RwBBox * box /* r19 */, class RpWorldSector * (* callBack)(class RpWorldSector *, void *) /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x274A60 -> 0x274B50
        class RpPlaneSector * plane; // r3
        class RpSector * sectorStack[64]; // r29+0x60
        class RpSector * sector; // r2
        signed int nStack; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctworld_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00274B50 -> 0x00275438
*/
// Range: 0x274B50 -> 0x275438
static class RpWorld * WorldForAllLineWorldSectorIntersections(class RpWorld * world /* r29+0xDC */, class RwLine * testLine /* r2 */, class RpV3dGradient * grad /* r21 */, class RpWorldSector * (* callBack)(class RpWorldSector *, void *) /* r30 */, void * data /* r29+0xD8 */, class RwLine * clippedLineOut /* r20 */) {
    /* anonymous block */ {
        // Range: 0x274B50 -> 0x275438
        float delta; // r5
        float delta; // r6
        float delta; // r5
        float delta; // r5
        class RwSplitBits rEnd; // r29+0x80C
        class RwSplitBits rStart; // r29+0x808
        class RwSplitBits lEnd; // r29+0x804
        class RwSplitBits lStart; // r29+0x800
        class RpPlaneSector * plane; // r2
        class RwLine lineStack[64]; // r29+0x200
        class RwLine line; // r29+0x1E0
        class RpSector * sectorStack[64]; // r29+0xE0
        class RpSector * sector; // r2
        signed int nStack; // r16
    }
}


