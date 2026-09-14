/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x66BA70
static class xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x66BA90
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x608BAC
void xAnimPoolCB(class xMemPool *, void *); // size: 0x0, address: 0x1C3D30
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x607758
class _reent * _impure_ptr; // size: 0x4, address: 0x503708
char _ctype_[]; // size: 0x0, address: 0x5E3180
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
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
// total size: 0x2F0
class _reent {
    // Members
public:
    signed int _errno; // offset 0x0, size 0x4
    class __sFILE * _stdin; // offset 0x4, size 0x4
    class __sFILE * _stdout; // offset 0x8, size 0x4
    class __sFILE * _stderr; // offset 0xC, size 0x4
    signed int _inc; // offset 0x10, size 0x4
    char _emergency[25]; // offset 0x14, size 0x19
    signed int _current_category; // offset 0x30, size 0x4
    char * _current_locale; // offset 0x34, size 0x4
    signed int __sdidinit; // offset 0x38, size 0x4
    void (* __cleanup)(class _reent *); // offset 0x3C, size 0x4
    class _Bigint * _result; // offset 0x40, size 0x4
    signed int _result_k; // offset 0x44, size 0x4
    class _Bigint * _p5s; // offset 0x48, size 0x4
    class _Bigint * * _freelist; // offset 0x4C, size 0x4
    signed int _cvtlen; // offset 0x50, size 0x4
    char * _cvtbuf; // offset 0x54, size 0x4
    // total size: 0xF0
    class /* @class */ {
        // Members
    public:
        union { // inferred
            // total size: 0x58
            class /* @class */ {
                // Members
            public:
                unsigned int _unused_rand; // offset 0x0, size 0x4
                char * _strtok_last; // offset 0x4, size 0x4
                char _asctime_buf[26]; // offset 0x8, size 0x1A
                class tm _localtime_buf; // offset 0x24, size 0x24
                signed int _gamma_signgam; // offset 0x48, size 0x4
                unsigned long long _rand_next; // offset 0x50, size 0x8
            } _reent; // offset 0x0, size 0x58
            // total size: 0xF0
            class /* @class */ {
                // Members
            public:
                unsigned char * _nextf[30]; // offset 0x0, size 0x78
                unsigned int _nmalloc[30]; // offset 0x78, size 0x78
            } _unused; // offset 0x0, size 0xF0
        };
    } _new; // offset 0x58, size 0xF0
    class _atexit * _atexit; // offset 0x148, size 0x4
    class _atexit _atexit0; // offset 0x14C, size 0x88
    void (* * _sig_func)(signed int); // offset 0x1D4, size 0x4
    class _glue __sglue; // offset 0x1D8, size 0xC
    class __sFILE __sf[3]; // offset 0x1E4, size 0x108
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum iSndHandle SndHandle; // offset 0x4, size 0x4
    };
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0x0
class xLightKit {};
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
// total size: 0xC
class _glue {
    // Members
public:
    class _glue * _next; // offset 0x0, size 0x4
    signed int _niobs; // offset 0x4, size 0x4
    class __sFILE * _iobs; // offset 0x8, size 0x4
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
// total size: 0x8
class __sbuf {
    // Members
public:
    unsigned char * _base; // offset 0x0, size 0x4
    signed int _size; // offset 0x4, size 0x4
};
// total size: 0x88
class _atexit {
    // Members
public:
    class _atexit * _next; // offset 0x0, size 0x4
    signed int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0xF0
class /* @class */ {
    // Members
public:
    union { // inferred
        // total size: 0x58
        class /* @class */ {
            // Members
        public:
            unsigned int _unused_rand; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            class tm _localtime_buf; // offset 0x24, size 0x24
            signed int _gamma_signgam; // offset 0x48, size 0x4
            unsigned long long _rand_next; // offset 0x50, size 0x8
        } _reent; // offset 0x0, size 0x58
        // total size: 0xF0
        class /* @class */ {
            // Members
        public:
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    };
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
// total size: 0xF0
class /* @class */ {
    // Members
public:
    unsigned char * _nextf[30]; // offset 0x0, size 0x78
    unsigned int _nmalloc[30]; // offset 0x78, size 0x78
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
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
// total size: 0x58
class /* @class */ {
    // Members
public:
    unsigned int _unused_rand; // offset 0x0, size 0x4
    char * _strtok_last; // offset 0x4, size 0x4
    char _asctime_buf[26]; // offset 0x8, size 0x1A
    class tm _localtime_buf; // offset 0x24, size 0x24
    signed int _gamma_signgam; // offset 0x48, size 0x4
    unsigned long long _rand_next; // offset 0x50, size 0x8
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
// total size: 0x24
class tm {
    // Members
public:
    signed int tm_sec; // offset 0x0, size 0x4
    signed int tm_min; // offset 0x4, size 0x4
    signed int tm_hour; // offset 0x8, size 0x4
    signed int tm_mday; // offset 0xC, size 0x4
    signed int tm_mon; // offset 0x10, size 0x4
    signed int tm_year; // offset 0x14, size 0x4
    signed int tm_wday; // offset 0x18, size 0x4
    signed int tm_yday; // offset 0x1C, size 0x4
    signed int tm_isdst; // offset 0x20, size 0x4
};
enum iSndHandle {
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
// total size: 0x18
class _Bigint {
    // Members
public:
    class _Bigint * _next; // offset 0x0, size 0x4
    signed int _k; // offset 0x4, size 0x4
    signed int _maxwds; // offset 0x8, size 0x4
    signed int _sign; // offset 0xC, size 0x4
    signed int _wds; // offset 0x10, size 0x4
    unsigned int _x[1]; // offset 0x14, size 0x4
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
// total size: 0x58
class __sFILE {
    // Members
public:
    unsigned char * _p; // offset 0x0, size 0x4
    signed int _r; // offset 0x4, size 0x4
    signed int _w; // offset 0x8, size 0x4
    signed short _flags; // offset 0xC, size 0x2
    signed short _file; // offset 0xE, size 0x2
    class __sbuf _bf; // offset 0x10, size 0x8
    signed int _lbfsize; // offset 0x18, size 0x4
    void * _cookie; // offset 0x1C, size 0x4
    signed int (* _read)(void *, char *, signed int); // offset 0x20, size 0x4
    signed int (* _write)(void *, char *, signed int); // offset 0x24, size 0x4
    signed long (* _seek)(void *, signed long, signed int); // offset 0x28, size 0x4
    signed int (* _close)(void *); // offset 0x2C, size 0x4
    class __sbuf _ub; // offset 0x30, size 0x8
    unsigned char * _up; // offset 0x38, size 0x4
    signed int _ur; // offset 0x3C, size 0x4
    unsigned char _ubuf[3]; // offset 0x40, size 0x3
    unsigned char _nbuf[1]; // offset 0x43, size 0x1
    class __sbuf _lb; // offset 0x44, size 0x8
    signed int _blksize; // offset 0x4C, size 0x4
    signed int _offset; // offset 0x50, size 0x4
    class _reent * _data; // offset 0x54, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x0
class xSurface {};
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
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3970 -> 0x001C3A50
*/
// Range: 0x1C3970 -> 0x1C3A50
void xAnimPoolFree(class xAnimPlay * play /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1C3970 -> 0x1C3A50
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3A50 -> 0x001C3AB0
*/
// Range: 0x1C3A50 -> 0x1C3AB0
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r2 */, void * object /* r19 */, class xAnimTable * table /* r18 */, class xModelInstance * modelInst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1C3A50 -> 0x1C3AB0
        class xAnimPlay * play; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3AB0 -> 0x001C3D28
*/
// Range: 0x1C3AB0 -> 0x1C3D28
void xAnimPoolInit(class xMemPool * pool /* r18 */, unsigned int count /* r17 */, unsigned int singles /* r16 */, unsigned int blendFlags /* r22 */, unsigned int effectMax /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C3AB0 -> 0x1C3D28
        unsigned int size; // r21
        unsigned int i; // r7
        void * buffer; // r2
        class xAnimPlay * play; // r2
        class xAnimSingle * currsingle; // r2
        class xAnimActiveEffect * curract; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3D30 -> 0x001C3E60
*/
// Range: 0x1C3D30 -> 0x1C3E60
void xAnimPoolCB(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C3D30 -> 0x1C3E60
        signed int i; // r7
        class xAnimPlay * clone; // r6
        class xAnimPlay * play; // r2
        class xAnimSingle * clonesingle; // r11
        class xAnimSingle * currsingle; // r3
        class xAnimActiveEffect * curract; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C3E60 -> 0x001C4320
*/
// Range: 0x1C3E60 -> 0x1C4320
void xAnimPlayEval(class xAnimPlay * play /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C3E60 -> 0x1C4320
        unsigned int i; // r29+0xF0
        unsigned int bone; // r19
        class xQuat * quatresult; // r29+0xE0
        class xVec3 * tranresult; // r29+0xD0
        class xQuat * quatblend; // r2
        class xVec3 * tranblend; // r2
        class xAnimSingle * si; // r17
        float blendF; // r21
        float blendR; // r20
        unsigned short * blendO; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C4320 -> 0x001C43D0
*/
// Range: 0x1C4320 -> 0x1C43D0
void xAnimPlayUpdate(class xAnimPlay * play /* r18 */, float timeDelta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C4320 -> 0x1C43D0
        unsigned int i; // r17
        class xAnimSingle * single; // r19
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C43D0 -> 0x001C47D0
*/
// Range: 0x1C43D0 -> 0x1C47D0
void xAnimPlayStartTransition(class xAnimPlay * play /* r21 */, class xAnimTransition * transition /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C43D0 -> 0x1C47D0
        class xAnimSingle * single; // r19
        class xAnimSingle * bl; // r16
        unsigned char transferredState; // r18
        unsigned char tookOwnership; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C47D0 -> 0x001C4974
*/
// Range: 0x1C47D0 -> 0x1C4974
void xAnimPlayChooseTransition(class xAnimPlay * play /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C47D0 -> 0x1C4974
        unsigned int i; // r21
        void * object; // r20
        class xAnimTransition * * found; // r19
        class xAnimTransitionList * curr; // r18
        signed char @4843; // @ 0x00608BB4
        unsigned char * tmpBuffer; // @ 0x00608BB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C4980 -> 0x001C4AC0
*/
// Range: 0x1C4980 -> 0x1C4AC0
void xAnimPlaySetup(class xAnimPlay * play /* r20 */, void * object /* r2 */, class xAnimTable * table /* r19 */, class xModelInstance * modelInst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C4980 -> 0x1C4AC0
        signed int i; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C4AC0 -> 0x001C5918
*/
// Range: 0x1C4AC0 -> 0x1C5918
static void SingleUpdate(class xAnimSingle * single /* r21 */, float timeDelta /* r26 */) {
    /* anonymous block */ {
        // Range: 0x1C4AC0 -> 0x1C5918
        unsigned int foundBlendstop; // r22
        unsigned int firstStep; // r17
        class xAnimTransition * foundTransition; // r20
        class xAnimSingle * bl; // r19
        float tranDelta; // r25
        float blendDelta; // r24
        float singleTime; // r20
        void * object; // r18
        float duration; // r23
        float timeCmp; // r2
        float timeCmp; // r21
        class xAnimTransitionList * curr; // r16
        float recip; // r29+0x1D0
        unsigned char transferredState; // r18
        class xVec3 disp; // r29+0x1B0
        float yaw; // r29+0x1CC
        class xMat3x3 rot; // r29+0x150
        class xVec3 disp; // r29+0x1A0
        float yaw; // r29+0x1C8
        class xMat3x3 rot; // r29+0x120
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5920 -> 0x001C5B7C
*/
// Range: 0x1C5920 -> 0x1C5B7C
void xAnimPlaySetState(class xAnimSingle * single /* r18 */, class xAnimState * state /* r17 */, float startTime /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C5920 -> 0x1C5B7C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5B80 -> 0x001C5D14
*/
// Range: 0x1C5B80 -> 0x1C5D14
void xAnimPhysicsEval(class xAnimPhysicsData * phys /* r2 */, float time /* r29 */, class xVec3 * disp /* r2 */, float * yaw /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C5B80 -> 0x1C5D14
        float interp; // r29
        signed int index; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5D20 -> 0x001C5E80
*/
// Range: 0x1C5D20 -> 0x1C5E80
static void EffectSingleStop(class xAnimSingle * single /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1C5D20 -> 0x1C5E80
        unsigned int i; // r17
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x48
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5E80 -> 0x001C5FB8
*/
// Range: 0x1C5E80 -> 0x1C5FB8
static void EffectSingleLoop(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1C5E80 -> 0x1C5FB8
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r2
        class xAnimEffect * effect; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5FC0 -> 0x001C61F0
*/
// Range: 0x1C5FC0 -> 0x1C61F0
static void EffectSingleRun(class xAnimSingle * single /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C5FC0 -> 0x1C61F0
        class xAnimEffect * effect; // r19
        class xAnimActiveEffect tempActive; // r29+0x78
        float time; // r20
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C61F0 -> 0x001C6320
*/
// Range: 0x1C61F0 -> 0x1C6320
static void EffectSingleDuration(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1C61F0 -> 0x1C6320
        float time; // r20
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6320 -> 0x001C6578
*/
// Range: 0x1C6320 -> 0x1C6578
static void EffectSingleStart(class xAnimSingle * single /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1C6320 -> 0x1C6578
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x58
        float time; // r20
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6580 -> 0x001C65E0
*/
// Range: 0x1C6580 -> 0x1C65E0
class xAnimState * xAnimTableGetState(class xAnimTable * table /* r16 */, char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C6580 -> 0x1C65E0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C65E0 -> 0x001C661C
*/
// Range: 0x1C65E0 -> 0x1C661C
class xAnimState * xAnimTableGetStateID(class xAnimTable * table /* r2 */, unsigned int ID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C65E0 -> 0x1C661C
        class xAnimState * curr; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6620 -> 0x001C6774
*/
// Range: 0x1C6620 -> 0x1C6774
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r19 */, class xAnimFile * file /* r18 */, unsigned int stateID /* r2 */, unsigned int subStateID /* r17 */, unsigned int subStateCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C6620 -> 0x1C6774
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6780 -> 0x001C6828
*/
// Range: 0x1C6780 -> 0x1C6828
void xAnimTableAddFile(class xAnimTable * table /* r18 */, class xAnimFile * file /* r17 */, char * states /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C6780 -> 0x1C6828
        unsigned char * buffer; // r16
        char * stateName; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6830 -> 0x001C6B64
*/
// Range: 0x1C6830 -> 0x1C6B64
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r19 */, char * source /* r18 */, char * dest /* r17 */, unsigned int (* conditional)(class xAnimTransition *, class xAnimSingle *, void *) /* r16 */, unsigned int (* callback)(class xAnimTransition *, class xAnimSingle *, void *) /* r22 */, unsigned int flags /* r23 */, unsigned int userFlags /* r30 */, float srcTime /* r23 */, float destTime /* r22 */, unsigned short priority /* r29+0xBE */, unsigned short queuePriority /* r29+0xC0 */, float fBlendTime /* r21 */, unsigned short * blendOffset /* r29+0xC8 */) {
    /* anonymous block */ {
        // Range: 0x1C6830 -> 0x1C6B64
        class xAnimTransition * tran; // r21
        unsigned char isComplex; // r20
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6B70 -> 0x001C72F4
*/
// Range: 0x1C6B70 -> 0x1C72F4
static void _xAnimTableAddTransition(class xAnimTable * table /* r29+0x11C */, class xAnimTransition * tran /* r20 */, char * source /* r16 */, char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1C6B70 -> 0x1C72F4
        unsigned char * buffer; // r29+0x118
        class xAnimState * * stateList; // r29+0x100
        unsigned int i; // r17
        unsigned int stateCount; // r29+0xF0
        unsigned int allocCount; // r18
        char * stateName; // r29+0xEC
        class xAnimTransitionList * tlist; // r22
        class xAnimTransition * substTransitionList[32]; // r29+0x220
        unsigned int substTransitionCount; // r29+0xD0
        unsigned char hasSubst; // r29+0xC0
        signed int i; // r5
        unsigned char isComplex; // r9
        char * COMPLEX_PATTERNS; // r8
        char * search; // r7
        class xAnimState * state; // r30
        char extra[128]; // r29+0x1A0
        char tempName[128]; // r29+0x120
        char * tempIterator; // r17
        char * extraIterator; // r16
        unsigned char allowMissingState; // r29+0xB0
        signed int i; // r21
        unsigned int extraIteratorLength; // r2
        class xAnimTransition * duplicatedTransition; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7300 -> 0x001C74CC
*/
// Range: 0x1C7300 -> 0x1C74CC
void xAnimTableNewStateMany(class xAnimTable * table /* r22 */, char * name /* r20 */, signed int howMany /* r19 */, unsigned int flags /* r23 */, unsigned int userFlags /* r30 */, float speed /* r21 */, float * boneBlend /* r29+0xDC */, float * timeSnap /* r29+0xD8 */, float fadeRecip /* r20 */, unsigned short * fadeOffset /* r29+0xD4 */, void * callbackData /* r29+0xE0 */, void (* beforeEnter)(class xAnimPlay *, class xAnimState *, void *) /* r29+0xE8 */, void (* stateCallback)(class xAnimState *, class xAnimSingle *, void *) /* r29+0xF0 */, void (* beforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int) /* r29+0xF8 */) {
    /* anonymous block */ {
        // Range: 0x1C7300 -> 0x1C74CC
        unsigned int state_name_len; // r2
        unsigned int alignedLength; // r2
        signed int i; // r18
        char * duplicate; // r17
        char * digit; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C74D0 -> 0x001C7730
*/
// Range: 0x1C74D0 -> 0x1C7730
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r20 */, char * name /* r19 */, unsigned int flags /* r18 */, unsigned int userFlags /* r17 */, float speed /* r21 */, float * boneBlend /* r22 */, float * timeSnap /* r23 */, float fadeRecip /* r20 */, unsigned short * fadeOffset /* r16 */, void * callbackData /* r30 */, void (* beforeEnter)(class xAnimPlay *, class xAnimState *, void *) /* r29+0xB0 */, void (* stateCallback)(class xAnimState *, class xAnimSingle *, void *) /* r29+0xB8 */, void (* beforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int) /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x1C74D0 -> 0x1C7730
        class xAnimState * state; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7730 -> 0x001C7784
*/
// Range: 0x1C7730 -> 0x1C7784
void xAnimDefaultBeforeEnter(class xAnimState * state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C7730 -> 0x1C7784
        unsigned int entry; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7790 -> 0x001C77E4
*/
// Range: 0x1C7790 -> 0x1C77E4
class xAnimTable * xAnimTableNew(char * name /* r17 */, unsigned int userFlags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C7790 -> 0x1C77E4
        class xAnimTable * table; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C77F0 -> 0x001C78CC
*/
// Range: 0x1C77F0 -> 0x1C78CC
class xAnimEffect * xAnimStateNewEffect(class xAnimState * state /* r16 */, unsigned short flags /* r19 */, unsigned short probability /* r18 */, float startTime /* r21 */, float endTime /* r20 */, unsigned int (* callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *) /* r17 */, unsigned int userDataSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C77F0 -> 0x1C78CC
        class xAnimEffect * curr; // r5
        class xAnimEffect * * prev; // r4
        class xAnimEffect * effect; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C78D0 -> 0x001C7F20
*/
// Range: 0x1C78D0 -> 0x1C7F20
void xAnimFileEval(class xAnimFile * data /* r19 */, float time /* r29+0x100 */, float * bilinear /* r2 */, unsigned int flags /* r18 */, class xVec3 * tran /* r17 */, class xQuat * quat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C78D0 -> 0x1C7F20
        signed int i; // r20
        unsigned int numBones; // r22
        float bilerp[2]; // r29+0xF8
        unsigned int biindex[2]; // r29+0xF0
        unsigned int biplus[2]; // r29+0xE8
        class xQuat * q0; // r21
        class xVec3 * t0; // r20
        class xQuat * q1; // r23
        class xVec3 * t1; // r30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7F20 -> 0x001C7FDC
*/
// Range: 0x1C7F20 -> 0x1C7FDC
void xAnimFileSetTime(class xAnimFile * data /* r16 */, float duration /* r21 */, float timeOffset /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1C7F20 -> 0x1C7FDC
        float rawDuration; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7FE0 -> 0x001C8044
*/
// Range: 0x1C7FE0 -> 0x1C8044
class xAnimFile * xAnimFileNew(void * rawData /* r29+0x4C */, char * name /* r18 */, unsigned int flags /* r17 */, class xAnimFile * * linkedList /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C7FE0 -> 0x1C8044
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8050 -> 0x001C8338
*/
// Range: 0x1C8050 -> 0x1C8338
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r19 */, char * name /* r23 */, unsigned int hashed_name_id /* r30 */, unsigned int flags /* r18 */, class xAnimFile * * linkedList /* r22 */, unsigned int numX /* r17 */, unsigned int numY /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C8050 -> 0x1C8338
        signed int i; // r5
        class xAnimFile * afile; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8340 -> 0x001C8B68
*/
// Range: 0x1C8340 -> 0x1C8B68
void xAnimCalcPhysicsData(class xAnimFile * afile /* r18 */, class xAnimFile * endPose /* r30 */) {
    /* anonymous block */ {
        // Range: 0x1C8340 -> 0x1C8B68
        signed int numAnims; // r17
        unsigned char axis[3]; // r29+0xEBC
        signed int tranCount; // r16
        unsigned int size; // r2
        class xAnimPhysicsData * physDat; // r2
        class xVec3 * tranTable; // r21
        float * yawTable; // r20
        class xVec3 tranStart[64]; // r29+0xBB0
        class xQuat quatStart[64]; // r29+0x7B0
        class xVec3 tranEnd[64]; // r29+0x4B0
        class xQuat quatEnd[64]; // r29+0xB0
        class xVec3 * tempTable; // r30
        signed int i; // r22
        signed int i; // r11
        signed int i; // r22
        float yawStart; // r21
        float yawEnd; // r20
        float * tempYaw; // r23
        signed int i; // r21
        signed int i; // r3
        float subOff; // r29+0xEC0
        signed int i; // r20
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8B70 -> 0x001C8D28
*/
// Range: 0x1C8B70 -> 0x1C8D28
static void TransitionTimeInit(class xAnimSingle * single /* r16 */, class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C8B70 -> 0x1C8D28
        class xAnimFile * dest; // r2
        class xAnimFile * src; // r2
        class xAnimFile * dest; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8D30 -> 0x001C8DE0
*/
// Range: 0x1C8D30 -> 0x1C8DE0
static unsigned int DefaultOverride(class xAnimState * state /* r2 */, class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C8D30 -> 0x1C8DE0
        class xAnimTransitionList * curr; // r10
        class xAnimTransitionList * prev; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8DE0 -> 0x001C8EAC
*/
// Range: 0x1C8DE0 -> 0x1C8EAC
static void _xAnimTransitionListInsert(class xAnimTransitionList * * list /* r2 */, class xAnimTransitionList * toInsert /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C8DE0 -> 0x1C8EAC
        class xAnimTransitionList * curr; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8EB0 -> 0x001C8F18
*/
// Range: 0x1C8EB0 -> 0x1C8F18
void xAnimTempStateInit(unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C8EB0 -> 0x1C8F18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8F20 -> 0x001C8F9C
*/
// Range: 0x1C8F20 -> 0x1C8F9C
class xAnimTransition * xAnimTempTransitionAlloc(class xAnimTransition * source /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1C8F20 -> 0x1C8F9C
        class xAnimTransition * tran; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8FA0 -> 0x001C9008
*/
// Range: 0x1C8FA0 -> 0x1C9008
void xAnimTempTransitionInit(unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C8FA0 -> 0x1C9008
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9010 -> 0x001C9054
*/
// Range: 0x1C9010 -> 0x1C9054
void xAnimInit() {
    /* anonymous block */ {
        // Range: 0x1C9010 -> 0x1C9054
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9060 -> 0x001C9794
*/
// Range: 0x1C9060 -> 0x1C9794
static unsigned char _xCheckAnimNameInner(char * name /* r22 */, char * pattern /* r21 */, signed int patternSize /* r29+0xDC */, char * extra /* r20 */, signed int * nameOut /* r29+0xD8 */, signed int * extraOut /* r29+0xD4 */) {
    /* anonymous block */ {
        // Range: 0x1C9060 -> 0x1C9794
        char * startExtra; // r23
        char * initialExtra; // r29+0xD0
        signed int patternCurrent; // r16
        signed int nameCurrent; // r19
        signed int check; // r13
        char nextPattern[128]; // r29+0xE0
        signed int nextPatternCount; // r12
        unsigned char first; // r11
        signed int parenCount; // r10
        char * IGNORE_PATTERNS; // r2
        signed int length; // r2
        unsigned char done; // r17
        char * current; // r16
        char * startPattern; // r2
        signed int pc; // r8
        signed int nameOut; // r29+0x16C
        signed int extraOut; // r29+0x168
        char * current; // r18
        char * positiveEnd; // r5
        char * negative; // r29+0xCC
        char * negativeEnd; // r30
        signed int nameOut; // r29+0x164
        signed int extraOut; // r29+0x160
        unsigned char matched; // r29+0xB0
    }
}


