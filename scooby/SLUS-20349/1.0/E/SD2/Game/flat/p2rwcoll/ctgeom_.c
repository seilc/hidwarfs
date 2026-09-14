/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char rcsid[66]; // size: 0x42, address: 0x0
signed int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x35863C
signed int GeomLeafNodeForAllBBoxIntersections(signed int, signed int, void *); // size: 0x0, address: 0x0
signed int GeomLeafNodeForAllSphereIntersections(signed int, signed int, void *); // size: 0x0, address: 0x272960
signed int GeomLeafNodeForAllLineIntersections(signed int, signed int, void *); // size: 0x0, address: 0x272AF0
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0xC
class GeomCallBack {
    // Members
public:
    class RpIntersection * intersection; // offset 0x0, size 0x4
    class RpCollisionTriangle * (* func)(class RpIntersection *, class RpCollisionTriangle *, float, void *); // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
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
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
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
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x18
class LineCollParam {
    // Members
public:
    class RpGeometry * geometry; // offset 0x0, size 0x4
    class GeomCallBack * callBack; // offset 0x4, size 0x4
    class RwLine * line; // offset 0x8, size 0x4
    class RwV3d delta; // offset 0xC, size 0xC
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
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
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
class SphereCollParam {
    // Members
public:
    class RpGeometry * geometry; // offset 0x0, size 0x4
    class GeomCallBack * callBack; // offset 0x4, size 0x4
    class RwSphere * sphere; // offset 0x8, size 0x4
    float recipRadius; // offset 0xC, size 0x4
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
// total size: 0x10
class RpCollBSPTree {
    // Members
public:
    unsigned int numLeafNodes; // offset 0x0, size 0x4
    class RpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    class RpCollBSPLeafNode * leafNodes; // offset 0x8, size 0x4
    unsigned char pad[4]; // offset 0xC, size 0x4
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
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x4
class RpCollBSPLeafNode {
    // Members
public:
    unsigned short numPolygons; // offset 0x0, size 0x2
    unsigned short firstPolygon; // offset 0x2, size 0x2
};
// total size: 0xC
class BBoxCollParam {
    // Members
public:
    class RpGeometry * geometry; // offset 0x0, size 0x4
    class GeomCallBack * callBack; // offset 0x4, size 0x4
    class RwBBox * bbox; // offset 0x8, size 0x4
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
// total size: 0x0
class rxReq {};
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
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
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

/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271370 -> 0x00271414
*/
// Range: 0x271370 -> 0x271414
class RpAtomic * RpAtomicForAllIntersections(class RpAtomic * atomic /* r16 */, class RpIntersection * intersection /* r2 */, class RpCollisionTriangle * (* callBack)(class RpIntersection *, class RpCollisionTriangle *, float, void *) /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x271370 -> 0x271414
        class RwSphere * boundingSphere; // r2
        class RpAtomic * intersectionAtomic; // r2
        class GeomCallBack cb; // r29+0x20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271420 -> 0x002718F8
*/
// Range: 0x271420 -> 0x2718F8
static class RpAtomic * AtomicForAllSphereIntersections(class RpAtomic * atomic /* r29+0xBC */, class RwSphere * testSphere /* r16 */, class GeomCallBack * cb /* r21 */) {
    /* anonymous block */ {
        // Range: 0x271420 -> 0x2718F8
        class RwV3d * endVert; // r7
        class RwV3d * startVert; // r6
        class RpCollisionTriangle collisionTri; // r29+0x110
        float distance; // r29+0x16C
        class RpTriangle * triangle; // r20
        signed int iTri; // r19
        float recipSphereRad; // r21
        float blendFactor; // r20
        class RwV3d * endFramePoints; // r18
        class RwV3d * startFramePoints; // r17
        class RpInterpolator * interpolator; // r5
        class RwV3d * vp2; // r22
        class RwV3d * vp1; // r23
        class RwV3d * vp0; // r16
        class RwV3d v2; // r29+0x160
        class RwV3d v1; // r29+0x150
        class RwV3d v0; // r29+0x140
        float _result; // r1
        float scaleSq; // r1
        class RwMatrixTag inverseLTM; // r29+0xD0
        class RwSphere localSphere; // r29+0xC0
        class RpGeometry * geom; // r30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00271900 -> 0x002720E8
*/
// Range: 0x271900 -> 0x2720E8
static class RpAtomic * AtomicForAllLineIntersections(class RpAtomic * atomic /* r29+0xCC */, class RwLine * testLine /* r16 */, class GeomCallBack * cb /* r23 */) {
    /* anonymous block */ {
        // Range: 0x271900 -> 0x2720E8
        float _result; // r29+0x1B0
        float lengthSq; // r1
        class RpCollisionTriangle collisionTri; // r29+0x130
        float v; // r6
        float u; // r8
        float hi; // r2
        float lo; // r1
        class RwV3d edgetmp; // r29+0x1A0
        float det; // r29+0x1B0
        class RwV3d edge1; // r29+0x190
        class RwV3d * endVert; // r7
        class RwV3d * startVert; // r6
        signed int result; // r4
        float distance; // r21
        class RpTriangle * triangle; // r21
        signed int iTri; // r22
        float blendFactor; // r29+0x1B0
        class RwV3d * endFramePoints; // r20
        class RwV3d * startFramePoints; // r19
        class RpInterpolator * interpolator; // r5
        class RwV3d * vp2; // r18
        class RwV3d * vp1; // r17
        class RwV3d * vp0; // r16
        class RwV3d v2; // r29+0x180
        class RwV3d v1; // r29+0x170
        class RwV3d v0; // r29+0x160
        class RwMatrixTag inverseLTM; // r29+0xF0
        class RwLine localLine; // r29+0xD0
        class RpGeometry * geom; // r30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002720F0 -> 0x00272360
*/
// Range: 0x2720F0 -> 0x272360
static class RpGeometry * GeometryForAllSphereIntersections(class RpGeometry * geometry /* r30 */, class RwSphere * testSphere /* r23 */, class GeomCallBack * cb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2720F0 -> 0x272360
        class RpCollisionTriangle collisionTri; // r29+0xE0
        float distance; // r29+0x10C
        class RwV3d * v2; // r21
        class RwV3d * v1; // r22
        class RwV3d * v0; // r20
        signed int iTri; // r19
        float recipRadius; // r20
        class RpTriangle * triangle; // r18
        class RwV3d * vertices; // r17
        class SphereCollParam isData; // r29+0xD0
        class RwBBox bbox; // r29+0xB0
        class RpCollisionData * collData; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00272360 -> 0x00272960
*/
// Range: 0x272360 -> 0x272960
static class RpGeometry * GeometryForAllLineIntersections(class RpGeometry * geometry /* r18 */, class RwLine * testLine /* r17 */, class GeomCallBack * cb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x272360 -> 0x272960
        float _result; // r29+0x110
        float lengthSq; // r1
        class RpCollisionTriangle collisionTri; // r29+0xC0
        float v; // r4
        float u; // r6
        float hi; // r11
        float lo; // r10
        class RwV3d edgetmp; // r29+0x100
        float det; // r9
        class RwV3d edge1; // r29+0xF0
        signed int result; // r7
        float distance; // r20
        class RwV3d * v2; // r4
        class RwV3d * v1; // r3
        class RwV3d * v0; // r2
        signed int iTri; // r21
        class RpTriangle * triangle; // r20
        class RwV3d * vertices; // r19
        class LineCollParam isData; // r29+0xA0
        class RpV3dGradient grad; // r29+0x80
        class RpCollisionData * collData; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00272960 -> 0x00272AE4
*/
// Range: 0x272960 -> 0x272AE4
static signed int GeomLeafNodeForAllSphereIntersections(signed int numTriangles /* r16 */, signed int triOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x272960 -> 0x272AE4
        class RpCollisionTriangle collisionTri; // r29+0xA0
        float distance; // r29+0xCC
        class RwV3d * v2; // r21
        class RwV3d * v1; // r22
        class RwV3d * v0; // r20
        class RpTriangle * tri; // r2
        unsigned short * triIndex; // r19
        class GeomCallBack * cb; // r18
        class RpTriangle * triangles; // r30
        class RwV3d * vertices; // r17
        class RpGeometry * geometry; // r7
        class SphereCollParam * isData; // r23
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\ctgeom_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00272AF0 -> 0x00272FAC
*/
// Range: 0x272AF0 -> 0x272FAC
static signed int GeomLeafNodeForAllLineIntersections(signed int numTriangles /* r16 */, signed int triOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x272AF0 -> 0x272FAC
        float _result; // r29+0xD0
        float lengthSq; // r1
        class RpCollisionTriangle collisionTri; // r29+0x80
        float v; // r3
        float u; // r6
        float hi; // r15
        float lo; // r14
        class RwV3d edgetmp; // r29+0xC0
        float det; // r13
        class RwV3d edge1; // r29+0xB0
        signed int result; // r7
        float distance; // r20
        class RwV3d * v2; // r4
        class RwV3d * v1; // r3
        class RwV3d * v0; // r2
        class RpTriangle * tri; // r2
        unsigned short * triIndex; // r21
        class GeomCallBack * cb; // r20
        class RpTriangle * triangles; // r19
        class RwV3d * vertices; // r18
        class RpGeometry * geometry; // r7
        class LineCollParam * isData; // r17
    }
}


