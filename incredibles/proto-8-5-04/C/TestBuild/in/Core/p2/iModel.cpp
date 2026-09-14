/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static unsigned int gLastAtomicCount; // size: 0x4, address: 0x6088C0
static class RpAtomic * gLastAtomicList[256]; // size: 0x400, address: 0x61DC10
static class RpLight * sEmptyDirectionalLight[4]; // size: 0x10, address: 0x61E010
static class RpLight * sEmptyAmbientLight; // size: 0x4, address: 0x6088C4
static class RwRGBA sMaterialColor[16]; // size: 0x40, address: 0x61E020
static class RwTexture * sMaterialTexture[16]; // size: 0x40, address: 0x61E060
static unsigned char sMaterialAlpha[16]; // size: 0x10, address: 0x61E0A0
static unsigned int sMaterialIdx; // size: 0x4, address: 0x6088C8
static unsigned int sMaterialFlags; // size: 0x4, address: 0x6088CC
static class RpAtomic * sLastMaterial; // size: 0x4, address: 0x6088D0
class RwFrame * GetChildFrameHierarchy(class RwFrame *, void *); // size: 0x0, address: 0x1655D0
class RpMaterial * iModelMaterialMulCB(class RpMaterial *, void *); // size: 0x0, address: 0x163840
class RpMaterial * iModelSetMaterialTextureCB(class RpMaterial *, void *); // size: 0x0, address: 0x163B30
class RpAtomic * NextAtomicCallback(class RpAtomic *, void *); // size: 0x0, address: 0x165050
class RpAtomic * FindAtomicCallback(class RpAtomic *, void *); // size: 0x0, address: 0x165350
// total size: 0xB0
class RwFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
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
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x10
class RwMatrixWeights {
    // Members
public:
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x24
class RpHAnimHierarchy {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int numNodes; // offset 0x4, size 0x4
    class RwMatrixTag * pMatrixArray; // offset 0x8, size 0x4
    void * pMatrixArrayUnaligned; // offset 0xC, size 0x4
    class RpHAnimNodeInfo * pNodeInfo; // offset 0x10, size 0x4
    class RwFrame * parentFrame; // offset 0x14, size 0x4
    class RpHAnimHierarchy * parentHierarchy; // offset 0x18, size 0x4
    signed int rootParentOffset; // offset 0x1C, size 0x4
    class RtAnimInterpolator * currentAnim; // offset 0x20, size 0x4
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
class RpUserDataArray {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RpUserDataFormat format; // offset 0x4, size 0x4
    signed int numElements; // offset 0x8, size 0x4
    void * data; // offset 0xC, size 0x4
};
// total size: 0x40
class RpLight {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x4C
class RtAnimInterpolator {
    // Members
public:
    class RtAnimAnimation * pCurrentAnim; // offset 0x0, size 0x4
    float currentTime; // offset 0x4, size 0x4
    void * pNextFrame; // offset 0x8, size 0x4
    class RtAnimInterpolator * (* pAnimCallBack)(class RtAnimInterpolator *, void *); // offset 0xC, size 0x4
    void * pAnimCallBackData; // offset 0x10, size 0x4
    float animCallBackTime; // offset 0x14, size 0x4
    class RtAnimInterpolator * (* pAnimLoopCallBack)(class RtAnimInterpolator *, void *); // offset 0x18, size 0x4
    void * pAnimLoopCallBackData; // offset 0x1C, size 0x4
    signed int maxInterpKeyFrameSize; // offset 0x20, size 0x4
    signed int currentInterpKeyFrameSize; // offset 0x24, size 0x4
    signed int currentAnimKeyFrameSize; // offset 0x28, size 0x4
    signed int numNodes; // offset 0x2C, size 0x4
    signed int isSubInterpolator; // offset 0x30, size 0x4
    signed int offsetInParent; // offset 0x34, size 0x4
    class RtAnimInterpolator * parentAnimation; // offset 0x38, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0x3C, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x40, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x44, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x48, size 0x4
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
// total size: 0x0
class RpSkin {};
// total size: 0x60
class xLightKitLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
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
class RwMemory {
    // Members
public:
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x2C
class xModelTagWithNormal : public xModelTag {
    // Members
public:
    class xVec3 normal; // offset 0x20, size 0xC
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
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
class RtAnimAnimation {
    // Members
public:
    class RtAnimInterpolatorInfo * interpInfo; // offset 0x0, size 0x4
    signed int numFrames; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    void * pFrames; // offset 0x10, size 0x4
    void * customData; // offset 0x14, size 0x4
};
// total size: 0x10
class RpHAnimNodeInfo {
    // Members
public:
    signed int nodeID; // offset 0x0, size 0x4
    signed int nodeIndex; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    class RwFrame * pFrame; // offset 0xC, size 0x4
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
class RtAnimInterpolatorInfo {
    // Members
public:
    signed int typeID; // offset 0x0, size 0x4
    signed int interpKeyFrameSize; // offset 0x4, size 0x4
    signed int animKeyFrameSize; // offset 0x8, size 0x4
    void (* keyFrameApplyCB)(void *, void *); // offset 0xC, size 0x4
    void (* keyFrameBlendCB)(void *, void *, void *, float); // offset 0x10, size 0x4
    void (* keyFrameInterpolateCB)(void *, void *, void *, float, void *); // offset 0x14, size 0x4
    void (* keyFrameAddCB)(void *, void *, void *); // offset 0x18, size 0x4
    void (* keyFrameMulRecipCB)(void *, void *); // offset 0x1C, size 0x4
    class RtAnimAnimation * (* keyFrameStreamReadCB)(class RwStream *, class RtAnimAnimation *); // offset 0x20, size 0x4
    signed int (* keyFrameStreamWriteCB)(class RtAnimAnimation *, class RwStream *); // offset 0x24, size 0x4
    signed int (* keyFrameStreamGetSizeCB)(class RtAnimAnimation *); // offset 0x28, size 0x4
    signed int customDataSize; // offset 0x2C, size 0x4
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
enum RpUserDataFormat {
    rpNAUSERDATAFORMAT = 0,
    rpINTUSERDATA = 1,
    rpREALUSERDATA = 2,
    rpSTRINGUSERDATA = 3,
    rpUSERDATAFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00162CB0 -> 0x00163020
*/
// Range: 0x162CB0 -> 0x163020
void iModelAnimBoundWorld(class xBox * box /* r21 */, class xBox * combinedBox /* r20 */, class RpAtomic * model /* r19 */, class RwMatrixTag * mat /* r18 */, class RwMatrixTag * bonemat /* r22 */) {
    /* anonymous block */ {
        // Range: 0x162CB0 -> 0x163020
        signed int i; // r17
        signed int * data; // r2
        signed int count; // r2
        class RpUserDataArray * usrdat; // r2
        signed int numbones; // r2
        signed int * boneidx; // r6
        class xSphere * bonesph; // r5
        float maxscale; // r29+0x80
        float scaleX; // r4
        float scaleY; // r3
        float scaleZ; // r1
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163020 -> 0x001637D0
*/
// Range: 0x163020 -> 0x1637D0
void iModelAnimBoundPrepare(class RpAtomic * model /* r20 */) {
    /* anonymous block */ {
        // Range: 0x163020 -> 0x1637D0
        class RpHAnimHierarchy * pHier; // r2
        signed int numbones; // r19
        signed int i; // r17
        signed int j; // r8
        signed int count; // r2
        class RpUserDataArray * usrdat; // r21
        class RpSkin * skin; // r16
        unsigned int * boneidx; // r22
        class RwMatrixWeights * bonewt; // r2
        class RwV3d * vert; // r7
        signed int numVert; // r2
        signed int * cntarr; // r18
        class xBox * boxarr; // r17
        float * currwt; // r6
        unsigned int curridx; // r5
        unsigned int matidx; // r2
        class xSphere * spharr; // r2
        float * currwt; // r9
        float dist2; // r29+0x90
        unsigned int curridx; // r8
        signed int numused; // r16
        class RwMatrixTag * skinmat; // r2
        unsigned int AnimBoundUsrDatArray[2]; // r29+0x80
        signed int index; // r2
        signed int * idata; // r2
        signed int * idata_boneidx; // r7
        class xSphere * idata_sphere; // r6
        signed int * idata; // r2
        signed int * idata_sphstart; // r5
        signed int * idata_sphactual; // r4
        signed int numel; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001637D0 -> 0x0016383C
*/
// Range: 0x1637D0 -> 0x16383C
void iModelMaterialMul(class RpAtomic * model /* r16 */, float rm /* r29+0x30 */, float gm /* r29+0x30 */, float bm /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x1637D0 -> 0x16383C
        class RpGeometry * geom; // r2
        float cols[3]; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163840 -> 0x00163ACC
*/
// Range: 0x163840 -> 0x163ACC
static class RpMaterial * iModelMaterialMulCB(class RpMaterial * material /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x163840 -> 0x163ACC
        class RwRGBA * rw_col; // r2
        class RwRGBA col; // r29+0xC
        float tmp; // r29+0x10
        float * mods; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163AD0 -> 0x00163B24
*/
// Range: 0x163AD0 -> 0x163B24
void iModelSetMaterialTexture(class RpAtomic * model /* r16 */, void * texture /* r2 */) {
    /* anonymous block */ {
        // Range: 0x163AD0 -> 0x163B24
        class RpGeometry * geom; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163B30 -> 0x00163B7C
*/
// Range: 0x163B30 -> 0x163B7C
static class RpMaterial * iModelSetMaterialTextureCB(class RpMaterial * material /* r16 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x163B30 -> 0x163B7C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163B80 -> 0x00163D80
*/
// Range: 0x163B80 -> 0x163D80
void iModelResetMaterial(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x163B80 -> 0x163D80
        unsigned int i; // r20
        class RpGeometry * geom; // r21
        class RpMaterial * material; // r2
        class RwRGBA newColor; // r29+0xAC
        class RwRGBA newColor; // r29+0xA8
        class RwRGBA newColor; // r29+0xA4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163D80 -> 0x00163E50
*/
// Range: 0x163D80 -> 0x163E50
void iModelSetMaterialAlpha(class RpAtomic * model /* r2 */, unsigned char alpha /* r2 */) {
    /* anonymous block */ {
        // Range: 0x163D80 -> 0x163E50
        unsigned int i; // r6
        class RpGeometry * geom; // r3
        class RpMaterial * material; // r2
        class RwRGBA * col; // r2
        class RwRGBA new_col; // r29+0xC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00163E50 -> 0x00164160
*/
// Range: 0x163E50 -> 0x164160
void iModelTagEval(class RpAtomic * model /* r2 */, class xModelTag * tag /* r21 */, class RwMatrixTag * mat /* r16 */, class xVec3 * dest /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x163E50 -> 0x164160
        class RpGeometry * geom; // r2
        class RpSkin * skin; // r2
        class RwMatrixTag * skinmat; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164160 -> 0x00164168
*/
// Range: 0x164160 -> 0x164168
unsigned int iModelTagSetup(class xModelTag * tag /* r2 */, class RpAtomic * model /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x164160 -> 0x164168
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164170 -> 0x00164300
*/
// Range: 0x164170 -> 0x164300
static unsigned int iModelTagInternal(class xModelTag * tag /* r17 */, class RpAtomic * model /* r2 */, float x /* r29+0x40 */, float y /* r29+0x40 */, float z /* r29+0x40 */, signed int closeV /* r16 */) {
    /* anonymous block */ {
        // Range: 0x164170 -> 0x164300
        class RpGeometry * geom; // r2
        class RwV3d * vert; // r7
        signed int v; // r4
        signed int numV; // r2
        float distSqr; // r29+0x40
        float closeDistSqr; // r3
        class RpSkin * skin; // r18
        class RwMatrixWeights * wt; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164300 -> 0x0016452C
*/
// Range: 0x164300 -> 0x16452C
static unsigned int iModelTagUserData(class xModelTag * tag /* r21 */, class RpAtomic * model /* r20 */, float x /* r22 */, float y /* r21 */, float z /* r20 */, signed int closeV /* r19 */) {
    /* anonymous block */ {
        // Range: 0x164300 -> 0x16452C
        signed int i; // r18
        signed int count; // r2
        class RpUserDataArray * array; // r22
        class RpUserDataArray * testarray; // r17
        float distSqr; // r29+0x90
        float closeDistSqr; // r3
        signed int numTags; // r2
        signed int t; // r6
        class xModelTag * tagList; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164530 -> 0x001648D0
*/
// Range: 0x164530 -> 0x1648D0
unsigned int iModelVertEval(class RpAtomic * model /* r2 */, unsigned int index /* r18 */, unsigned int count /* r29+0xE0 */, class RwMatrixTag * mat /* r17 */, class xVec3 * vert /* r21 */, class xVec3 * dest /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x164530 -> 0x1648D0
        class RpGeometry * geom; // r2
        unsigned int numV; // r2
        class RpSkin * skin; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001648D0 -> 0x00164A44
*/
// Range: 0x1648D0 -> 0x164A44
void iModel_SetLightKit(class xLightKit * lightKit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1648D0 -> 0x164A44
        class RpLight * amb; // r10
        class RpLight * dir[4]; // r29+0x30
        signed int lightTypes[5]; // r29+0x10
        unsigned int i; // r10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164A50 -> 0x00164A5C
*/
// Range: 0x164A50 -> 0x164A5C
unsigned int iModelVertCount(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x164A50 -> 0x164A5C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164A60 -> 0x00164B10
*/
// Range: 0x164A60 -> 0x164B10
void iModelSetWorldBoundFromBox(class RpAtomic * model /* r2 */, class xBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x164A60 -> 0x164B10
        float sizeX; // r29
        float sizeY; // r29
        float sizeZ; // r29
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164B10 -> 0x00164C40
*/
// Range: 0x164B10 -> 0x164C40
class xSphere * iModelWorldBoundSphere(class RpAtomic * model /* r16 */, class RwMatrixTag * mat /* r19 */, class xSphere * sphere /* r2 */) {
    /* anonymous block */ {
        // Range: 0x164B10 -> 0x164C40
        class RwSphere * modelsphere; // r18
        float xScale2; // r4
        float yScale2; // r3
        float zScale2; // r1
        class RwV3d * up; // r2
        class RwV3d * at; // r2
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164C40 -> 0x00164D84
*/
// Range: 0x164C40 -> 0x164D84
void iModelRender(class RpAtomic * model /* r20 */, class RwMatrixTag * mat /* r19 */) {
    /* anonymous block */ {
        // Range: 0x164C40 -> 0x164D84
        class RwMatrixTag * pAnimOldMatrix; // r18
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164D90 -> 0x00164F9C
*/
// Range: 0x164D90 -> 0x164F9C
void iModelAnimMatrices(class RpAtomic * model /* r2 */, class xQuat * quat /* r18 */, class xVec3 * tran /* r17 */, class RwMatrixTag * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x164D90 -> 0x164F9C
        class RpHAnimHierarchy * pHierarchy; // r2
        class RwMatrixTag matrixStack[32]; // r29+0x50
        class RwMatrixTag * pMatrixStackTop; // r11
        class RpHAnimNodeInfo * pCurrentFrame; // r7
        signed int currentFrameFlags; // r2
        signed int i; // r6
        signed int numFrames; // r2
        class RwMatrixTag * pMatrixArray; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00164FA0 -> 0x00165008
*/
// Range: 0x164FA0 -> 0x165008
unsigned int iModelNumBones(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x164FA0 -> 0x165008
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165010 -> 0x00165050
*/
// Range: 0x165010 -> 0x165050
class RpAtomic * iModelFile_RWMultiAtomic(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x165010 -> 0x165050
        class RpClump * clump; // r2
        class RpAtomic * nextModel; // r29+0x1C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165050 -> 0x00165080
*/
// Range: 0x165050 -> 0x165080
static class RpAtomic * NextAtomicCallback(class RpAtomic * atomic /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x165050 -> 0x165080
        class RpAtomic * * nextModel; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165080 -> 0x001650E8
*/
// Range: 0x165080 -> 0x1650E8
void iModelUnload(class RpAtomic * userdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x165080 -> 0x1650E8
        class RpClump * clump; // r17
        class RwFrame * frame; // r16
        class RwFrame * root; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001650F0 -> 0x00165124
*/
// Range: 0x1650F0 -> 0x165124
class RpAtomic * iModelFileNew(void * buffer /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1650F0 -> 0x165124
        class RwMemory rwmem; // r29+0x18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165130 -> 0x0016534C
*/
// Range: 0x165130 -> 0x16534C
static class RpAtomic * iModelStreamRead(class RwStream * stream /* r17 */) {
    /* anonymous block */ {
        // Range: 0x165130 -> 0x16534C
        class RpClump * clump; // r16
        unsigned int i; // r5
        unsigned int maxIndex; // r2
        float maxRadius; // r7
        float testRadius; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165350 -> 0x00165488
*/
// Range: 0x165350 -> 0x165488
static class RpAtomic * FindAtomicCallback(class RpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x165350 -> 0x165488
        class RpHAnimHierarchy * pHier; // r19
        class RpSkin * pSkin; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165490 -> 0x00165554
*/
// Range: 0x165490 -> 0x165554
void iModelInitOnce() {
    /* anonymous block */ {
        // Range: 0x165490 -> 0x165554
        class RwFrame * frame; // r2
        class RwRGBAReal black; // r29+0x30
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165560 -> 0x00165568
*/
// Range: 0x165560 -> 0x165568
void iModelInit() {
    /* anonymous block */ {
        // Range: 0x165560 -> 0x165568
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00165570 -> 0x001655C8
*/
// Range: 0x165570 -> 0x1655C8
class RpHAnimHierarchy * iModelGetHierarchy(class RpAtomic * imodel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x165570 -> 0x1655C8
        class RpHAnimHierarchy * hierarchy; // r29+0x2C
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iModel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001655D0 -> 0x00165628
*/
// Range: 0x1655D0 -> 0x165628
static class RwFrame * GetChildFrameHierarchy(class RwFrame * frame /* r17 */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1655D0 -> 0x165628
        class RpHAnimHierarchy * hierarchy; // r2
    }
}


