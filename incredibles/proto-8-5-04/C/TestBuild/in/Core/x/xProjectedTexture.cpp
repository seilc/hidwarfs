/*
    Compile unit: C:\TestBuild\in\Core\x\xProjectedTexture.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RxPipeline * normal_pipeline; // size: 0x4, address: 0x609510
static class RxPipeline * skin_pipeline; // size: 0x4, address: 0x609514
static class RwCamera * projection_cam; // size: 0x4, address: 0x609520
static class RxPipeline * old_atomic_pipe; // size: 0x4, address: 0x0
static class RxPipeline * old_group_pipe; // size: 0x4, address: 0x0
static class RxPipeline * defpipe; // size: 0x4, address: 0x0
static class RxPipeline * oldpipes[8]; // size: 0x20, address: 0x0
signed int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x6093A8
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
class RwCamera * RwProjectedTextureCamera; // size: 0x4, address: 0x608058
class RpPDSSkyMatTemplate rwPDS_VCL_SkinPrj_MatPipe; // size: 0x84, address: 0x5160A0
class RpPDSSkyMatTemplate rwPDS_VCL_Prj_MatPipe; // size: 0x84, address: 0x516018
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
// total size: 0x4
class RpPDSPipeDefinition {
    // Members
public:
    union { // inferred
        void * ptr; // offset 0x0, size 0x4
        class RpPDSSkyMatTemplate * mat; // offset 0x0, size 0x4
        class RpPDSSkyObjTemplate * obj; // offset 0x0, size 0x4
    };
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
// total size: 0x1C
class xMemPool {
    // Members
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
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
// total size: 0x2C
class xAnimTransition {
    // Members
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
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
// total size: 0x8
class RpPDSSkyVU1CodeTemplate {
    // Members
public:
    void * * array; // offset 0x0, size 0x4
    unsigned int slots; // offset 0x4, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
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
// total size: 0x84
class RpPDSSkyMatTemplate {
    // Members
public:
    unsigned int pluginId; // offset 0x0, size 0x4
    unsigned int pluginData; // offset 0x4, size 0x4
    class RpPDSSkyMatCluster clusters[10]; // offset 0x8, size 0x50
    class RpPDSSkyMatPrimitive primitive; // offset 0x58, size 0x14
    class RpPDSSkyVU1CodeTemplate * vu1code; // offset 0x6C, size 0x4
    signed int (* meshInstanceTestCallBack)(class RxPS2AllPipeData *); // offset 0x70, size 0x4
    class RwResEntry * (* resEntryAllocCallBack)(class RxPS2AllPipeData *, class RwResEntry * *, unsigned int, void (*)(class RwResEntry *)); // offset 0x74, size 0x4
    signed int (* instanceCallBack)(class RxPS2AllPipeData *, void * *, unsigned int); // offset 0x78, size 0x4
    signed int (* bridgeCallBack)(class RxPS2AllPipeData *); // offset 0x7C, size 0x4
    signed int (* postMeshCallBack)(class RxPS2AllPipeData *); // offset 0x80, size 0x4
};
// total size: 0x50
class xAnimSingle {
    // Members
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    class xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
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
// total size: 0x14
class RpPDSSkyObjTemplate {
    // Members
public:
    unsigned int pluginId; // offset 0x0, size 0x4
    unsigned int pluginData; // offset 0x4, size 0x4
    signed int (* objectSetupCallBack)(class RxPS2AllPipeData *, class RwMatrixTag * *); // offset 0x8, size 0x4
    signed int (* objectFinalizeCallBack)(class RxPS2AllPipeData *); // offset 0xC, size 0x4
    class RxPipeline * matGroup; // offset 0x10, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x8
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x4C
class xAnimState {
    // Members
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
// total size: 0x20
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
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
// total size: 0xA4
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    class xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    class xSurface * Surf; // offset 0x38, size 0x4
    class xModelBucket * * Bucket; // offset 0x3C, size 0x4
    class xModelInstance * BucketNext; // offset 0x40, size 0x4
    class xLightKit * LightKit; // offset 0x44, size 0x4
    void * Object; // offset 0x48, size 0x4
    unsigned short Flags; // offset 0x4C, size 0x2
    unsigned char BoneCount; // offset 0x4E, size 0x1
    unsigned char BoneIndex; // offset 0x4F, size 0x1
    unsigned char * BoneRemap; // offset 0x50, size 0x4
    class RwMatrixTag * Mat; // offset 0x54, size 0x4
    class xVec3 Scale; // offset 0x58, size 0xC
    class xBox animBound; // offset 0x64, size 0x18
    class xBox combinedAnimBound; // offset 0x7C, size 0x18
    unsigned int modelID; // offset 0x94, size 0x4
    unsigned int shadowID; // offset 0x98, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x9C, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA0, size 0x4
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
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x14
class RpPDSRegister {
    // Members
public:
    class RpPDSPipeDefinition def; // offset 0x0, size 0x4
    enum RpPDSPipeID attachId; // offset 0x4, size 0x4
    enum RpPDSPipeID id; // offset 0x8, size 0x4
    enum RpPDSPipeType type; // offset 0xC, size 0x4
    class RxPipeline * pipe; // offset 0x10, size 0x4
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
// total size: 0x18
class xAnimTable {
    // Members
public:
    char * Name; // offset 0x0, size 0x4
    class xAnimTransition * TransitionList; // offset 0x4, size 0x4
    class xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
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
enum iSndHandle {
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
// total size: 0x24
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
    class xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
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
class rxNodePS2AllPvtData {};
// total size: 0x18
class xModelBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        class xModelInstance * List; // offset 0x8, size 0x4
        class xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    signed int ClipFlags; // offset 0xC, size 0x4
    class xModelPipe Pipe; // offset 0x10, size 0x8
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
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x0
class xSurface {};
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
class RpPDSSkyMatCluster {
    // Members
public:
    class RxClusterDefinition * definition; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
};
// total size: 0x0
class xLightKit {};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x14
class RpPDSSkyMatPrimitive {
    // Members
public:
    enum RwPrimitiveType type; // offset 0x0, size 0x4
    signed int clusterStride; // offset 0x4, size 0x4
    signed int vertexCount; // offset 0x8, size 0x4
    signed int primCount; // offset 0xC, size 0x4
    signed int vifOffset; // offset 0x10, size 0x4
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum iSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
enum RpPDSPipeType {
    rpNAPDSPIPETYPE = 0,
    rpPDSMATPIPE = 1,
    rpPDSOBJPIPE = 2,
    rpPDSPIPETYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xProjectedTexture.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442360 -> 0x004423A4
*/
// Range: 0x442360 -> 0x4423A4
void xProjectedTextureShutdown() {
    /* anonymous block */ {
        // Range: 0x442360 -> 0x4423A4
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xProjectedTexture.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004423B0 -> 0x00442490
*/
// Range: 0x4423B0 -> 0x442490
void xProjectedTextureStartup() {
    /* anonymous block */ {
        // Range: 0x4423B0 -> 0x442490
        class RpPDSRegister _matPipe; // r29+0x40
        class RpPDSRegister _matPipe; // r29+0x20
        class RwV2d view_window; // r29+0x58
    }
}


