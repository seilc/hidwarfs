/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RpAtomic * (* sAtmDefaultRenderCB)(class RpAtomic *); // size: 0x4, address: 0x608F84
static class RxPipeline * sCloneAtmPipe_Generic; // size: 0x4, address: 0x608F88
signed int CloneGenericObjectSetupCallBack(class RxPS2AllPipeData *, class RwMatrixTag * *); // size: 0x0, address: 0x2BD4C0
signed int rwPip2AtomicOffset; // size: 0x4, address: 0x609434
unsigned char skyTransType; // size: 0x1, address: 0x607EE0
signed int rwPip2GeometryOffset; // size: 0x4, address: 0x609430
class RpAtomic * SingletonCloneRenderCB(class RpAtomic *); // size: 0x0, address: 0x2BD9F0
class rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneSkinDownload; // size: 0x10, address: 0x50E060
class rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneGenericDownload; // size: 0x10, address: 0x50DFC0
signed int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x6093A8
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
signed int skyCameraExt; // size: 0x4, address: 0x609344
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x6092A8
class rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneFlatDownload; // size: 0x10, address: 0x5DB440
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
// total size: 0x50
class rwPDS_HICloneFlatArray {
    // Members
public:
    float mat1X; // offset 0x0, size 0x4
    float mat1Y; // offset 0x4, size 0x4
    signed int cloneFlag; // offset 0x8, size 0x4
    float mat1W; // offset 0xC, size 0x4
    float mat2X; // offset 0x10, size 0x4
    float mat2Y; // offset 0x14, size 0x4
    signed int UNUSED1; // offset 0x18, size 0x4
    float mat2W; // offset 0x1C, size 0x4
    float mat3X; // offset 0x20, size 0x4
    float mat3Y; // offset 0x24, size 0x4
    signed int UNUSED2; // offset 0x28, size 0x4
    float mat3W; // offset 0x2C, size 0x4
    float mat4X; // offset 0x30, size 0x4
    float mat4Y; // offset 0x34, size 0x4
    float mat4Z; // offset 0x38, size 0x4
    float mat4W; // offset 0x3C, size 0x4
    float colScale[4]; // offset 0x40, size 0x10
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x10
class rwPDS_HICloneDownloadInfo {
    // Members
public:
    unsigned int weightsControls; // offset 0x0, size 0x4
    unsigned int cloneCount; // offset 0x4, size 0x4
    unsigned int cloneStride; // offset 0x8, size 0x4
    unsigned int cloneArrayAddress; // offset 0xC, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0xC0
class rwPDS_HICloneArray {
    // Members
public:
    float mat1X; // offset 0x0, size 0x4
    float mat1Y; // offset 0x4, size 0x4
    signed int cloneFlag; // offset 0x8, size 0x4
    float mat1W; // offset 0xC, size 0x4
    float mat2X; // offset 0x10, size 0x4
    float mat2Y; // offset 0x14, size 0x4
    signed int UNUSED1; // offset 0x18, size 0x4
    float mat2W; // offset 0x1C, size 0x4
    float mat3X; // offset 0x20, size 0x4
    float mat3Y; // offset 0x24, size 0x4
    signed int UNUSED2; // offset 0x28, size 0x4
    float mat3W; // offset 0x2C, size 0x4
    float mat4X; // offset 0x30, size 0x4
    float mat4Y; // offset 0x34, size 0x4
    float mat4Z; // offset 0x38, size 0x4
    float mat4W; // offset 0x3C, size 0x4
    float colScale[4]; // offset 0x40, size 0x10
    class RwV3d lmat1; // offset 0x50, size 0xC
    float lmatposX; // offset 0x5C, size 0x4
    class RwV3d lmat2; // offset 0x60, size 0xC
    float lmatposY; // offset 0x6C, size 0x4
    class RwV3d lmat3; // offset 0x70, size 0xC
    float lmatposZ; // offset 0x7C, size 0x4
    float bonusLt0_color[3]; // offset 0x80, size 0xC
    signed int UNUSED3; // offset 0x8C, size 0x4
    class RwV3d bonusLt0_dir; // offset 0x90, size 0xC
    float bonusLt0_rad; // offset 0x9C, size 0x4
    float bonusLt1_color[3]; // offset 0xA0, size 0xC
    signed int UNUSED4; // offset 0xAC, size 0x4
    class RwV3d bonusLt1_dir; // offset 0xB0, size 0xC
    float bonusLt1_rad; // offset 0xBC, size 0x4
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
// total size: 0x8
class rwPS2AllClusterInstanceInfo {
    // Members
public:
    unsigned int attrib; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x2C
class RpSkin {
    // Members
public:
    class SkinBoneData boneData; // offset 0x0, size 0x10
    class SkinVertexMaps vertexMaps; // offset 0x10, size 0xC
    class SkinPlatformData platformData; // offset 0x1C, size 0x10
};
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x10
class SkinBoneData {
    // Members
public:
    unsigned int numBones; // offset 0x0, size 0x4
    unsigned int numUsedBones; // offset 0x4, size 0x4
    unsigned char * usedBoneList; // offset 0x8, size 0x4
    class RwMatrixTag * invBoneToSkinMat; // offset 0xC, size 0x4
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
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class SkinVertexMaps {
    // Members
public:
    unsigned int maxWeights; // offset 0x0, size 0x4
    unsigned int * matrixIndices; // offset 0x4, size 0x4
    class RwMatrixWeights * matrixWeights; // offset 0x8, size 0x4
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
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class rxNodePS2AllPvtData {};
// total size: 0x10
class RwMatrixWeights {
    // Members
public:
    float w0; // offset 0x0, size 0x4
    float w1; // offset 0x4, size 0x4
    float w2; // offset 0x8, size 0x4
    float w3; // offset 0xC, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x32C
class rxNodePS2AllMatPvtData {
    // Members
public:
    signed int (* meshInstanceTestCB)(class RxPS2AllPipeData *); // offset 0x0, size 0x4
    class RwResEntry * (* resEntryAllocCB)(class RxPS2AllPipeData *, class RwResEntry * *, unsigned int, void (*)(class RwResEntry *)); // offset 0x4, size 0x4
    signed int (* instanceCB)(class RxPS2AllPipeData *, void * *, unsigned int); // offset 0x8, size 0x4
    signed int (* bridgeCB)(class RxPS2AllPipeData *); // offset 0xC, size 0x4
    signed int (* postMeshCB)(class RxPS2AllPipeData *); // offset 0x10, size 0x4
    signed int vifOffset; // offset 0x14, size 0x4
    void * * vu1CodeArray; // offset 0x18, size 0x4
    unsigned int codeArrayLength; // offset 0x1C, size 0x4
    class rwPS2AllClusterInstanceInfo clinfo[12]; // offset 0x20, size 0x60
    unsigned int cliIndex[12]; // offset 0x80, size 0x30
    enum RpMeshHeaderFlags pipeType; // offset 0xB0, size 0x4
    unsigned char totallyOpaque; // offset 0xB4, size 0x1
    unsigned char numStripes; // offset 0xB5, size 0x1
    unsigned char sizeOnVU; // offset 0xB6, size 0x1
    unsigned char pad0; // offset 0xB7, size 0x1
    class rwPS2AllResEntryFormat strip; // offset 0xB8, size 0x138
    class rwPS2AllResEntryFormat list; // offset 0x1F0, size 0x138
    unsigned int magicValue; // offset 0x328, size 0x4
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
// total size: 0x10
class SkinPlatformData {
    // Members
public:
    unsigned int numVerticesWithWeight[4]; // offset 0x0, size 0x10
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
// total size: 0x138
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
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x18, size 0x120
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
enum RwFrustumTestResult {
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
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
enum RpLightType {
    rpNALIGHTTYPE = 0,
    rpLIGHTDIRECTIONAL = 1,
    rpLIGHTAMBIENT = 2,
    rpLIGHTPOINT = 128,
    rpLIGHTSPOT = 129,
    rpLIGHTSPOTSOFT = 130,
    rpLIGHTTYPEFORCEENUMSIZEINT = 2147483647,
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
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD410 -> 0x002BD4BC
*/
// Range: 0x2BD410 -> 0x2BD4BC
void rwPSD_HICloneInitOnce() {
    /* anonymous block */ {
        // Range: 0x2BD410 -> 0x2BD4BC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD4C0 -> 0x002BD620
*/
// Range: 0x2BD4C0 -> 0x2BD620
static signed int CloneGenericObjectSetupCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r18 */, class RwMatrixTag * * transform /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BD4C0 -> 0x2BD620
        class RpAtomic * atomic; // r2
        class RpGeometry * _gmty; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD620 -> 0x002BD774
*/
// Range: 0x2BD620 -> 0x2BD774
void rwPDS_HICloneFlatEnable(class RpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BD620 -> 0x2BD774
        signed int i; // r18
        class RpMaterialList * matList; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD780 -> 0x002BD9F0
*/
// Range: 0x2BD780 -> 0x2BD9F0
void rwPDS_HICloneEnable(class RpAtomic * atomic /* r18 */, unsigned char prelit /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BD780 -> 0x2BD9F0
        signed int i; // r18
        class RpMaterialList * matList; // r17
        class RxPipeline * matpipe; // r2
        class RxPipeline * skinGrpAtm; // @ 0x00608F90
        class RxPipeline * skinAtm; // @ 0x00608F8C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD9F0 -> 0x002BDA70
*/
// Range: 0x2BD9F0 -> 0x2BDA70
static class RpAtomic * SingletonCloneRenderCB(class RpAtomic * atomic /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BD9F0 -> 0x2BDA70
        class rwPDS_HICloneArray tmpclone; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BDA70 -> 0x002BDB8C
*/
// Range: 0x2BDA70 -> 0x2BDB8C
enum RwFrustumTestResult rwPDS_HICloneAtomicInFrustum(class RpAtomic * atomic /* r18 */, class RwMatrixTag * ltm /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BDA70 -> 0x2BDB8C
        class RwCamera * cam; // r16
        float xScale2; // r4
        float yScale2; // r3
        float zScale2; // r1
        float atomicScale; // r29+0x50
        class RwV3d * up; // r2
        class RwV3d * at; // r2
        class RwSphere worldsph; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BDB90 -> 0x002BDDFC
*/
// Range: 0x2BDB90 -> 0x2BDDFC
enum RwFrustumTestResult rwPDS_HICloneBoxInFrustum(class RwBBox * box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BDB90 -> 0x2BDDFC
        signed int i; // r8
        class RwCamera * cam; // r2
        class RwFrustumPlane * plane; // r7
        class RwFrustumPlane * widePlane; // r6
        enum RwFrustumTestResult result; // r2
        float centerX; // r5
        float centerY; // r4
        float centerZ; // r3
        float sizeX; // r2
        float sizeY; // r1
        float sizeZ; // r29
        float centerDot; // r12
        float nearDot; // r29
        float centerDot; // r12
        float nearDot; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BDE00 -> 0x002BDF34
*/
// Range: 0x2BDE00 -> 0x2BDF34
enum RwFrustumTestResult rwPDS_HICloneInFrustum(class RwCamera * cam /* r2 */, class RwSphere * sphere /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BDE00 -> 0x2BDF34
        signed int i; // r8
        class RwFrustumPlane * plane; // r7
        class RwFrustumPlane * widePlane; // r6
        enum RwFrustumTestResult result; // r2
        float nDot; // r29
        float nDot; // r29
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BDF40 -> 0x002BE378
*/
// Range: 0x2BDF40 -> 0x2BE378
void rwPDS_HICloneFlatRenderIndirect(class RpAtomic * atomic /* r21 */, class rwPDS_HICloneFlatArray * * clone /* r20 */, unsigned int cloneCount /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2BDF40 -> 0x2BE378
        class rwPDS_HICloneDownloadInfo * dlinfo; // r2
        unsigned int MAX_CLONES; // r22
        unsigned int i; // r5
        unsigned int curCount; // r18
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        __int128 * * cloneArr; // r5
        __int128 * _rwDMA_local_rwDMAPktPtr; // r4
        __int128 * qword; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE380 -> 0x002BE740
*/
// Range: 0x2BE380 -> 0x2BE740
void rwPDS_HICloneRender(class RpAtomic * atomic /* r21 */, class rwPDS_HICloneArray * clone /* r20 */, unsigned int cloneCount /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2BE380 -> 0x2BE740
        unsigned int MAX_CLONES; // r22
        class RpSkin * skin; // r2
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        unsigned int * numVerticesWithWeight; // r16
        unsigned int i; // r5
        unsigned int curCount; // r18
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        __int128 * cloneArr; // r5
        __int128 * _rwDMA_local_rwDMAPktPtr; // r4
        __int128 ltmp2; // r2
        __int128 ltmp3; // r2
        __int128 ltmp4; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE740 -> 0x002BE7E4
*/
// Range: 0x2BE740 -> 0x2BE7E4
void rwPDS_HICloneFlatTransform(class rwPDS_HICloneFlatArray * clone /* r2 */, class RwMatrixTag * ltm /* r2 */, signed int inFrustum /* r2 */, signed int trueClip /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BE740 -> 0x2BE7E4
        class RwMatrixTag * viewMatrix; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE7F0 -> 0x002BE9B4
*/
// Range: 0x2BE7F0 -> 0x2BE9B4
void rwPDS_HICloneFlatSetup(class rwPDS_HICloneFlatArray * clone /* r2 */, class RwMatrixTag * ltm /* r2 */, signed int inFrustum /* r2 */, signed int trueClip /* r2 */, class RwRGBA * matcol /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BE7F0 -> 0x2BE9B4
        class RwMatrixTag * viewMatrix; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\hiclone\VCL_HIClone.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE9C0 -> 0x002BEF90
*/
// Range: 0x2BE9C0 -> 0x2BEF90
void rwPDS_HICloneSetup(class rwPDS_HICloneArray * clone /* r21 */, class RpAtomic * atomic /* r2 */, class RwMatrixTag * ltm /* r2 */, signed int inFrustum /* r2 */, signed int trueClip /* r2 */, class RwRGBA * matcol /* r2 */, class RpLight * bonus0 /* r2 */, class RpLight * bonus1 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BE9C0 -> 0x2BEF90
        float recipinv; // r21
        class RwMatrixTag * viewMatrix; // r2
        class RwMatrixTag invmat; // r29+0xB0
        signed int i; // r20
        class RpLight * bonusArr[2]; // r29+0xF8
        float * lightData; // r19
        float diffuse; // r29+0x100
        enum RpLightType ltype; // r2
        class RwMatrixTag * lmat; // r2
        class RwRGBAReal * color; // r2
        float rad; // r29+0x100
    }
}


