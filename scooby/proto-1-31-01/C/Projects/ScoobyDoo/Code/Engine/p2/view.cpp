/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class ViewSkel * App; // size: 0x4, address: 0x4A4B00
class _RwRGBA FGNDColor; // size: 0x4, address: 0x0
class _RwRGBA BGNDColor; // size: 0x4, address: 0x4A2B00
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x4400D8
class _RpCollisionTriangle * AtomicPickFunc(class _RpIntersection *, class _RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x202070
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
// total size: 0x1C
class _RpIntersection {
    // Members
public:
    class _RpIntersectData t; // offset 0x0, size 0x18
    enum _RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0x1C
class _RpMorphTarget {
    // Members
public:
    class _RpGeometry * parentGeom; // offset 0x0, size 0x4
    class _RwSphere boundingSphere; // offset 0x4, size 0x10
    class _RwV3d * verts; // offset 0x14, size 0x4
    class _RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x4
class PsMouse {};
// total size: 0x10
class _RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
// total size: 0x28
class ViewApp {
    // Members
public:
    class _RpWorld * world; // offset 0x0, size 0x4
    class _RpClump * clump; // offset 0x4, size 0x4
    class _RpLight * dirLight; // offset 0x8, size 0x4
    class _RpLight * ambLight; // offset 0xC, size 0x4
    class AppCamera * appCamera; // offset 0x10, size 0x4
    class _rpAtomic * pickedAtomic; // offset 0x14, size 0x4
    class _RwMatrix * spinMatrix; // offset 0x18, size 0x4
    enum VMode viewingMode; // offset 0x1C, size 0x4
    enum MMMode mouseMoveMode; // offset 0x20, size 0x4
    enum AMode animMode; // offset 0x24, size 0x4
};
// total size: 0x70
class _rpAtomic {
    // Members
public:
    class _RwObjectHasFrame object; // offset 0x0, size 0x14
    class _rwResEntryTag * repEntry; // offset 0x14, size 0x4
    class _RpGeometry * geometry; // offset 0x18, size 0x4
    class _RwSphere boundingSphere; // offset 0x1C, size 0x10
    class _RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class _RpClump * clump; // offset 0x3C, size 0x4
    class _RwLLLink inClumpLink; // offset 0x40, size 0x8
    class _rpAtomic * (* renderCallBack)(class _rpAtomic *); // offset 0x48, size 0x4
    class _rpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short collisionFrame; // offset 0x62, size 0x2
    class _RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class _RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0xC
class _rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class _rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x4
class _RwStreamFile {
    // Members
public:
    void * fpFile; // offset 0x0, size 0x4
};
// total size: 0x14
class _rpInterpolator {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
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
enum _RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x20
class _RpClump {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList atomicList; // offset 0x8, size 0x8
    class _RwLLLink inWorldLink; // offset 0x10, size 0x8
    class _RpClump * (* callback)(class _RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
};
// total size: 0x3
class _RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
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
// total size: 0x40
class _RpLight {
    // Members
public:
    class _RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class _RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class _RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class _RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x4
class _RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x24
class AppCamera : public Camera {
    // Members
public:
    class _RwRaster * backdrop; // offset 0x10, size 0x4
    float cameraDistance; // offset 0x14, size 0x4
    class _RwV2d offset; // offset 0x18, size 0x8
    class _RpWorld * world; // offset 0x20, size 0x4
};
enum _rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _RpIntersectData {
    // Members
public:
    union { // inferred
        class _RwLine line; // offset 0x0, size 0x18
        class _RwV3d point; // offset 0x0, size 0xC
        class _RwSphere sphere; // offset 0x0, size 0x10
        class _RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
};
// total size: 0xB0
class _RwFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwMatrix modelling; // offset 0x10, size 0x40
    class _RwMatrix ltm; // offset 0x50, size 0x40
    class _RwLLLink inDirtyListLink; // offset 0x90, size 0x8
    class _RwLinkList objectList; // offset 0x98, size 0x8
    class _RwFrame * child; // offset 0xA0, size 0x4
    class _RwFrame * next; // offset 0xA4, size 0x4
    class _RwFrame * root; // offset 0xA8, size 0x4
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
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
// total size: 0xC
class _RpMaterialList {
    // Members
public:
    class _RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0x24
class _RwStream {
    // Members
public:
    enum _RwStreamType type; // offset 0x0, size 0x4
    enum _RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class _RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0x14
class _RwObjectHasFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLLLink lFrame; // offset 0x8, size 0x8
    class _RwObjectHasFrame * (* sync)(class _RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x1C
class PadMap {
    // Members
public:
    class RwSkel * skel; // offset 0x0, size 0x4
    class _RsMouseStatus ms; // offset 0x4, size 0x18
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x20
class ViewSkel : public RwSkel {
    // Members
public:
    class ViewApp * Viewer; // offset 0x18, size 0x4
    class PadMap * PdMap; // offset 0x1C, size 0x4
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
// total size: 0x18
class _RwTexDictionary {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList texturesInDict; // offset 0x8, size 0x8
    class _RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0x28
class _RpCollisionTriangle {
    // Members
public:
    class _RwV3d normal; // offset 0x0, size 0xC
    class _RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class _RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// total size: 0x8
class _RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x0
class _rxReq {};
// total size: 0x4
class _RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x44
class _RpGeometry {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    unsigned short lockedSinceLastInst; // offset 0x8, size 0x2
    signed short refCount; // offset 0xA, size 0x2
    class _RpMaterialList matList; // offset 0xC, size 0xC
    signed int numTriangles; // offset 0x18, size 0x4
    signed int numVertices; // offset 0x1C, size 0x4
    signed int numMorphTargets; // offset 0x20, size 0x4
    class _RpTriangle * triangles; // offset 0x24, size 0x4
    class _RwRGBA * preLitLum; // offset 0x28, size 0x4
    class _RwTexCoords * vertexTexCoords; // offset 0x2C, size 0x4
    class _RwSurfaceProperties ignoredSurfaceProps; // offset 0x30, size 0xC
    class _RpMeshHeader * mesh; // offset 0x3C, size 0x4
    class _RpMorphTarget * morphTarget; // offset 0x40, size 0x4
};
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
// total size: 0x10
class _RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x14
class _RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
// total size: 0x18
class _RsMouseStatus {
    // Members
public:
    class _RwV2d pos; // offset 0x0, size 0x8
    class _RwV2d delta; // offset 0x8, size 0x8
    signed int shift; // offset 0x10, size 0x4
    signed int control; // offset 0x14, size 0x4
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
// total size: 0x8
class Platform {
    // Members
public:
    signed int quit; // offset 0x0, size 0x4
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
enum _RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class _RxClusterRef {
    // Members
public:
    class _RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum _RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x18
class _RwBBox {
    // Members
public:
    class _RwV3d sup; // offset 0x0, size 0xC
    class _RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x10
class _RwSphere {
    // Members
public:
    class _RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
enum VMode {
    VModeClump = 0,
    VModeWorld = 1,
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
// total size: 0x14
class _RwStreamUnion {
    // Members
public:
    union { // inferred
        class _RwStreamMemory memory; // offset 0x0, size 0xC
        class _RwStreamFile file; // offset 0x0, size 0x4
        class _RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
// total size: 0x8
class _RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
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
enum _RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
enum _RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
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
enum MMMode {
    MMNoAction = 0,
    MMScrollBackdrop = 1,
    MMPanAndZoomCamera = 2,
    MMTiltCamera = 3,
    MMSpinClump = 4,
    MMDragClump = 5,
    MMDragClumpInZ = 6,
    MMAimCamera = 7,
    MMMoveCamera = 8,
    MMPanLight = 9,
};
enum _RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _RwLine {
    // Members
public:
    class _RwV3d start; // offset 0x0, size 0xC
    class _RwV3d end; // offset 0xC, size 0xC
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
enum _RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
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
enum _rpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class _RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
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
// total size: 0x10
class Camera {
    // Members
public:
    class _RwCamera * camera; // offset 0x0, size 0x4
    signed int m_Preset; // offset 0x4, size 0x4
    float m_TetherLength; // offset 0x8, size 0x4
    float m_TetherHeightPerc; // offset 0xC, size 0x4
};
enum _RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
enum AMode {
    ANoAction = 0,
    ASpinClump = 1,
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201500 -> 0x002015E0
*/
// Range: 0x201500 -> 0x2015E0
// this: r16
ViewApp::ViewApp() {
    /* anonymous block */ {
        // Range: 0x201500 -> 0x2015E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002015E0 -> 0x002017B8
*/
// Range: 0x2015E0 -> 0x2017B8
// this: r17
ViewApp::~ViewApp() {
    /* anonymous block */ {
        // Range: 0x2015E0 -> 0x2017B8
        class _RwFrame * frame; // r18
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002017C0 -> 0x00201A7C
*/
// Range: 0x2017C0 -> 0x201A7C
// this: r19
signed int ViewApp::fileLoad(char * filename /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2017C0 -> 0x201A7C
        signed int dot; // r16
        signed int status; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201A80 -> 0x00201B28
*/
// Range: 0x201A80 -> 0x201B28
// this: r16
void ViewApp::worldDestroy() {
    /* anonymous block */ {
        // Range: 0x201A80 -> 0x201B28
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201B30 -> 0x00201C30
*/
// Range: 0x201B30 -> 0x201C30
// this: r16
void ViewApp::worldInit() {
    /* anonymous block */ {
        // Range: 0x201B30 -> 0x201C30
        class _RwV3d v; // r29+0x30
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201C30 -> 0x00201D08
*/
// Range: 0x201C30 -> 0x201D08
// this: r16
void ViewApp::render() {
    /* anonymous block */ {
        // Range: 0x201C30 -> 0x201D08
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201D10 -> 0x00201D64
*/
// Range: 0x201D10 -> 0x201D64
class RwSkel * RegisterSkelClass() {
    /* anonymous block */ {
        // Range: 0x201D10 -> 0x201D64
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201D70 -> 0x00201DB8
*/
// Range: 0x201D70 -> 0x201DB8
void UnRegisterSkelClass() {
    /* anonymous block */ {
        // Range: 0x201D70 -> 0x201DB8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201DC0 -> 0x00201E3C
*/
// Range: 0x201DC0 -> 0x201E3C
class _rpAtomic * WorldPickFunc(class _RpIntersection * is /* r2 */, class _rpAtomic * a /* r17 */, float distance /* r29+0x40 */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x201DC0 -> 0x201E3C
        float oldDistance; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00201E40 -> 0x00202070
*/
// Range: 0x201E40 -> 0x202070
signed int RsSetModelTexturePath(char * pathName /* r18 */) {
    /* anonymous block */ {
        // Range: 0x201E40 -> 0x202070
        char separator[2]; // r29+0x44C
        char * extender; // r2
        char * testSeparator; // r2
        char * lastSeparator; // r18
        unsigned int numChars; // r17
        char * temp; // r16
        char pad[1024]; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\view.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00202070 -> 0x00202094
*/
// Range: 0x202070 -> 0x202094
static class _RpCollisionTriangle * AtomicPickFunc(class _RpCollisionTriangle * cp /* r2 */, float distance /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x202070 -> 0x202094
    }
}


