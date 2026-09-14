/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x366500
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x357C50
void xAnimPoolCB(class xMemPool *, void *); // size: 0x0, address: 0x1172D0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
unsigned char * giAnimScratch; // size: 0x4, address: 0x3574A0
class _reent * _impure_ptr; // size: 0x4, address: 0x2FCC00
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x44
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    float PhysBase[4]; // offset 0x18, size 0x10
    float PhysDelta[4]; // offset 0x28, size 0x10
    unsigned short BoneCount; // offset 0x38, size 0x2
    unsigned char NumAnims[2]; // offset 0x3A, size 0x2
    void * * RawData; // offset 0x3C, size 0x4
    void * Physics; // offset 0x40, size 0x4
};
// total size: 0x38
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
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x60
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class _xVec3 Translate[2]; // offset 0x14, size 0x18
    unsigned int pad1; // offset 0x2C, size 0x4
    class _xQuat Quat[2]; // offset 0x30, size 0x20
    float Yaw; // offset 0x50, size 0x4
    class xMemPool * Pool; // offset 0x54, size 0x4
    class xModelInstance * ModelInst; // offset 0x58, size 0x4
    unsigned int pad2; // offset 0x5C, size 0x4
};
// total size: 0x60
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
    class xAnimActiveEffect * ActiveList; // offset 0x20, size 0x4
    class xAnimPlay * Play; // offset 0x24, size 0x4
    float LastTime; // offset 0x28, size 0x4
    class _xVec3 LastTranslation; // offset 0x2C, size 0xC
    float LastYaw; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
    class _xQuat LastQuat; // offset 0x40, size 0x10
    class xAnimTransition * Sync; // offset 0x50, size 0x4
    class xAnimTransition * Tran; // offset 0x54, size 0x4
    class xAnimSingle * Blend; // offset 0x58, size 0x4
    float BlendFactor; // offset 0x5C, size 0x4
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
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0x18
class xAnimTable {
    // Members
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
// total size: 0x30
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    void * Object; // offset 0x14, size 0x4
    unsigned short Flags; // offset 0x18, size 0x2
    unsigned char BoneCount; // offset 0x1A, size 0x1
    unsigned char BoneIndex; // offset 0x1B, size 0x1
    unsigned char * BoneRemap; // offset 0x1C, size 0x4
    class RwMatrixTag * Mat; // offset 0x20, size 0x4
    class _xVec3 Scale; // offset 0x24, size 0xC
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
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class _glue {
    // Members
public:
    class _glue * _next; // offset 0x0, size 0x4
    signed int _niobs; // offset 0x4, size 0x4
    class __sFILE * _iobs; // offset 0x8, size 0x4
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
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x0
class rxReq {};
// total size: 0xF0
class /* @class */ {
    // Members
public:
    unsigned char * _nextf[30]; // offset 0x0, size 0x78
    unsigned int _nmalloc[30]; // offset 0x78, size 0x78
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
class RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x88
class _atexit {
    // Members
public:
    class _atexit * _next; // offset 0x0, size 0x4
    signed int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class __sbuf {
    // Members
public:
    unsigned char * _base; // offset 0x0, size 0x4
    signed int _size; // offset 0x4, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00116F80 -> 0x0011700C
*/
// Range: 0x116F80 -> 0x11700C
void xAnimPoolFree(class xAnimPlay * play /* r18 */) {
    /* anonymous block */ {
        // Range: 0x116F80 -> 0x11700C
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117010 -> 0x00117070
*/
// Range: 0x117010 -> 0x117070
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r2 */, void * object /* r19 */, class xAnimTable * table /* r18 */, class xModelInstance * modelInst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x117010 -> 0x117070
        class xAnimPlay * play; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117070 -> 0x001172CC
*/
// Range: 0x117070 -> 0x1172CC
void xAnimPoolInit(class xMemPool * pool /* r21 */, unsigned int count /* r20 */, unsigned int singles /* r19 */, unsigned int blendFlags /* r18 */, unsigned int effectMax /* r17 */) {
    /* anonymous block */ {
        // Range: 0x117070 -> 0x1172CC
        class xAnimActiveEffect * curract; // r5
        class xAnimSingle * currsingle; // r2
        class xAnimPlay * play; // r2
        void * buffer; // r2
        unsigned int i; // r4
        unsigned int size; // r22
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001172D0 -> 0x001173E8
*/
// Range: 0x1172D0 -> 0x1173E8
void xAnimPoolCB(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1172D0 -> 0x1173E8
        class xAnimActiveEffect * curract; // r6
        class xAnimSingle * currsingle; // r2
        class xAnimSingle * clonesingle; // r8
        class xAnimPlay * play; // r2
        class xAnimPlay * clone; // r3
        signed int i; // r9
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001173F0 -> 0x00117860
*/
// Range: 0x1173F0 -> 0x117860
void xAnimPlayEval(class xAnimPlay * play /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1173F0 -> 0x117860
        unsigned short * blendO; // r18
        float blendR; // r20
        float blendF; // r29+0x100
        class xAnimSingle * si; // r17
        class _xVec3 * tranblend; // r23
        class _xQuat * quatblend; // r22
        class _xVec3 * tranresult; // r29+0xD0
        class _xQuat * quatresult; // r2
        unsigned int bone; // r17
        unsigned int i; // r29+0xC0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117860 -> 0x00117964
*/
// Range: 0x117860 -> 0x117964
void xAnimPlayUpdate(class xAnimPlay * play /* r18 */, float timeDelta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x117860 -> 0x117964
        float tempYaw[2]; // r29+0x98
        class _xQuat tempQuat[2]; // r29+0x70
        class _xVec3 tempTranslate[2]; // r29+0x50
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117970 -> 0x00117C60
*/
// Range: 0x117970 -> 0x117C60
void xAnimPlayStartTransition(class xAnimPlay * play /* r2 */, class xAnimTransition * transition /* r18 */) {
    /* anonymous block */ {
        // Range: 0x117970 -> 0x117C60
        class xAnimSingle * bl; // r17
        class xAnimSingle * single; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117C60 -> 0x00117DEC
*/
// Range: 0x117C60 -> 0x117DEC
void xAnimPlayChooseTransition(class xAnimPlay * play /* r16 */) {
    /* anonymous block */ {
        // Range: 0x117C60 -> 0x117DEC
        unsigned int index; // r3
        class xAnimTransitionList * curr; // r19
        class xAnimTransition * * found; // r2
        void * object; // r18
        unsigned int i; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117DF0 -> 0x00117F10
*/
// Range: 0x117DF0 -> 0x117F10
void xAnimPlaySetup(class xAnimPlay * play /* r18 */, void * object /* r2 */, class xAnimTable * table /* r17 */, class xModelInstance * modelInst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x117DF0 -> 0x117F10
        signed int i; // r7
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00117F10 -> 0x00118B6C
*/
// Range: 0x117F10 -> 0x118B6C
static void SingleUpdate(class xAnimSingle * single /* r18 */, float timeDelta /* r23 */, class _xVec3 * tran /* r17 */, class _xQuat * quat /* r16 */, float * yaw /* r22 */) {
    /* anonymous block */ {
        // Range: 0x117F10 -> 0x118B6C
        float lerp; // r29+0x170
        float recip; // r1
        class xAnimTransitionList * curr; // r2
        float timeCmp; // r25
        float timeCmp; // r29+0x170
        float duration; // r21
        void * object; // r29+0xD0
        float singleTime; // r24
        float blendDelta; // r20
        float tranDelta; // r29+0x170
        class xAnimSingle * bl; // r20
        float partialYaw[2]; // r29+0x168
        float blendYaw[2]; // r29+0x160
        class _xQuat partialQuat[2]; // r29+0x140
        class _xQuat blendQuat[2]; // r29+0x120
        class _xVec3 partialTran[2]; // r29+0x100
        class _xVec3 blendTran[2]; // r29+0xE0
        class xAnimTransition * foundTransition; // r19
        unsigned int firstStep; // r23
        unsigned int foundBlendstop; // r30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00118B70 -> 0x00118CA0
*/
// Range: 0x118B70 -> 0x118CA0
void xAnimPlaySetState(class xAnimSingle * single /* r16 */, class xAnimState * state /* r17 */, float startTime /* r20 */) {
    /* anonymous block */ {
        // Range: 0x118B70 -> 0x118CA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00118CA0 -> 0x00118DC8
*/
// Range: 0x118CA0 -> 0x118DC8
static void LoopUpdate(class xAnimSingle * single /* r19 */, class _xVec3 * tran /* r18 */, class _xQuat * quat /* r17 */, float * yaw /* r16 */) {
    /* anonymous block */ {
        // Range: 0x118CA0 -> 0x118DC8
        float partialYaw[2]; // r29+0xA8
        class _xQuat partialQuat[2]; // r29+0x80
        class _xVec3 partialTran[2]; // r29+0x60
        float duration; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00118DD0 -> 0x00118FDC
*/
// Range: 0x118DD0 -> 0x118FDC
static void CalcLastAndDeltas(class xAnimSingle * single /* r19 */, class _xVec3 * tran /* r18 */, class _xQuat * quat /* r17 */, float * yaw /* r16 */, unsigned int lastOnly /* r20 */) {
    /* anonymous block */ {
        // Range: 0x118DD0 -> 0x118FDC
        class _xQuat lastQ; // r29+0xA0
        class _xQuat tempQ[2]; // r29+0x80
        class _xVec3 tempV[2]; // r29+0x60
        float tempYaw[2]; // r29+0xB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00118FE0 -> 0x00119134
*/
// Range: 0x118FE0 -> 0x119134
static void EffectSingleStop(class xAnimSingle * single /* r18 */) {
    /* anonymous block */ {
        // Range: 0x118FE0 -> 0x119134
        class xAnimActiveEffect tempActive; // r29+0x48
        class xAnimEffect * effect; // r16
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119140 -> 0x00119288
*/
// Range: 0x119140 -> 0x119288
static void EffectSingleLoop(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x119140 -> 0x119288
        class xAnimEffect * effect; // r3
        unsigned int count; // r18
        unsigned int index; // r17
        class xAnimActiveEffect * alist; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119290 -> 0x00119494
*/
// Range: 0x119290 -> 0x119494
static void EffectSingleRun(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x119290 -> 0x119494
        unsigned int flags; // r17
        float time; // r20
        class xAnimActiveEffect tempActive; // r29+0x68
        class xAnimEffect * effect; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001194A0 -> 0x001195E8
*/
// Range: 0x1194A0 -> 0x1195E8
static void EffectSingleDuration(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1194A0 -> 0x1195E8
        unsigned int count; // r18
        unsigned int index; // r17
        class xAnimActiveEffect * alist; // r16
        float time; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001195F0 -> 0x0011983C
*/
// Range: 0x1195F0 -> 0x11983C
static void EffectSingleStart(class xAnimSingle * single /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1195F0 -> 0x11983C
        unsigned int flags; // r4
        float time; // r20
        class xAnimActiveEffect tempActive; // r29+0x48
        class xAnimEffect * effect; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119840 -> 0x001198A0
*/
// Range: 0x119840 -> 0x1198A0
class xAnimState * xAnimTableGetState(class xAnimTable * table /* r16 */, char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x119840 -> 0x1198A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001198A0 -> 0x00119920
*/
// Range: 0x1198A0 -> 0x119920
void xAnimTableRemoveEffectByCB(class xAnimTable * table /* r2 */, unsigned int (* callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1198A0 -> 0x119920
        class xAnimState * curr; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119920 -> 0x0011995C
*/
// Range: 0x119920 -> 0x11995C
class xAnimState * xAnimTableGetStateID(class xAnimTable * table /* r2 */, unsigned int ID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x119920 -> 0x11995C
        class xAnimState * curr; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119960 -> 0x001199F4
*/
// Range: 0x119960 -> 0x1199F4
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r2 */, class xAnimFile * file /* r2 */, unsigned int stateID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x119960 -> 0x1199F4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119A00 -> 0x00119B10
*/
// Range: 0x119A00 -> 0x119B10
void xAnimTableAddFile(class xAnimTable * table /* r18 */, class xAnimFile * file /* r17 */, char * states /* r2 */) {
    /* anonymous block */ {
        // Range: 0x119A00 -> 0x119B10
        char * stateName; // r2
        unsigned char * buffer; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119B10 -> 0x00119D70
*/
// Range: 0x119B10 -> 0x119D70
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r20 */, char * source /* r19 */, char * dest /* r18 */, unsigned int (* conditional)(class xAnimTransition *, class xAnimSingle *, void *) /* r17 */, unsigned int (* callback)(class xAnimTransition *, class xAnimSingle *, void *) /* r16 */, unsigned int flags /* r21 */, unsigned int userFlags /* r22 */, float srcTime /* r22 */, float destTime /* r21 */, unsigned short priority /* r23 */, unsigned short queuePriority /* r29+0xA0 */, float blendRecip /* r20 */, unsigned short * blendOffset /* r29+0xA8 */) {
    /* anonymous block */ {
        // Range: 0x119B10 -> 0x119D70
        class xAnimTransition * tran; // r18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00119D70 -> 0x0011A1C0
*/
// Range: 0x119D70 -> 0x11A1C0
void xAnimTableAddTransition(class xAnimTable * table /* r19 */, class xAnimTransition * tran /* r18 */, char * source /* r2 */) {
    /* anonymous block */ {
        // Range: 0x119D70 -> 0x11A1C0
        class xAnimTransitionList * curr; // r2
        class xAnimTransitionList * tlist; // r2
        char * stateName; // r2
        unsigned int flags; // r30
        unsigned int allocCount; // r21
        unsigned int stateCount; // r20
        unsigned int i; // r5
        class xAnimState * * stateList; // r2
        unsigned char * buffer; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011A1C0 -> 0x0011A3E8
*/
// Range: 0x11A1C0 -> 0x11A3E8
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r21 */, char * name /* r20 */, unsigned int flags /* r19 */, unsigned int userFlags /* r18 */, float speed /* r21 */, float * boneBlend /* r17 */, float * timeSnap /* r23 */, float fadeRecip /* r20 */, unsigned short * fadeOffset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11A1C0 -> 0x11A3E8
        class xAnimState * state; // r22
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011A3F0 -> 0x0011A458
*/
// Range: 0x11A3F0 -> 0x11A458
class xAnimTable * xAnimTableNew(char * name /* r17 */, class xAnimTable * * linkedList /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11A3F0 -> 0x11A458
        class xAnimTable * table; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011A460 -> 0x0011A528
*/
// Range: 0x11A460 -> 0x11A528
class xAnimEffect * xAnimStateNewEffect(class xAnimState * state /* r18 */, unsigned int flags /* r17 */, float startTime /* r21 */, float endTime /* r20 */, unsigned int (* callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *) /* r16 */, unsigned int userDataSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11A460 -> 0x11A528
        class xAnimEffect * effect; // r2
        class xAnimEffect * * prev; // r4
        class xAnimEffect * curr; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011A530 -> 0x0011AF0C
*/
// Range: 0x11A530 -> 0x11AF0C
void xAnimFileEval(class xAnimFile * data /* r20 */, float time /* r29+0x190 */, float * bilinear /* r2 */, unsigned int flags /* r29+0xFC */, class _xVec3 * tran /* r19 */, class _xQuat * quat /* r18 */, float * yaw /* r29+0xF8 */) {
    /* anonymous block */ {
        // Range: 0x11A530 -> 0x11AF0C
        float * fptr; // r3
        class _xVec3 * t1; // r23
        class _xQuat * q1; // r22
        class _xVec3 * t0; // r17
        class _xQuat * q0; // r16
        unsigned int biplus[2]; // r29+0x188
        unsigned int biindex[2]; // r29+0x180
        float tmpf; // r29+0x190
        float bilerp[2]; // r29+0x178
        class _xQuat tempQ; // r29+0x100
        float tmpyaw; // r20
        unsigned int fileflags; // r2
        unsigned int numBones; // r29+0xC0
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011AF10 -> 0x0011B30C
*/
// Range: 0x11AF10 -> 0x11B30C
void xAnimFileSetPoses(class xAnimFile * data /* r18 */, void * startPose /* r17 */, float startTime /* r21 */, void * endPose /* r16 */, float endTime /* r20 */) {
    /* anonymous block */ {
        // Range: 0x11AF10 -> 0x11B30C
        class _xQuat tempQ; // r29+0xE0
        float physEnd[4]; // r29+0xD0
        float physStart[4]; // r29+0xC0
        float poseEnd[4]; // r29+0xB0
        float poseStart[4]; // r29+0xA0
        float rootEnd[4]; // r29+0x90
        float rootStart[4]; // r29+0x80
        void * root; // r19
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011B310 -> 0x0011B3DC
*/
// Range: 0x11B310 -> 0x11B3DC
void xAnimFileSetTime(class xAnimFile * data /* r16 */, float duration /* r21 */, float timeOffset /* r20 */) {
    /* anonymous block */ {
        // Range: 0x11B310 -> 0x11B3DC
        float rawDuration; // r29+0x30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011B3E0 -> 0x0011B3E8
*/
// Range: 0x11B3E0 -> 0x11B3E8
void xAnimFileSetPhysics(class xAnimFile * data /* r2 */, void * rawData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11B3E0 -> 0x11B3E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011B3F0 -> 0x0011B418
*/
// Range: 0x11B3F0 -> 0x11B418
class xAnimFile * xAnimFileNew(void * rawData /* r29+0x1C */, char * name /* r2 */, unsigned int flags /* r2 */, class xAnimFile * * linkedList /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11B3F0 -> 0x11B418
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011B420 -> 0x0011B6CC
*/
// Range: 0x11B420 -> 0x11B6CC
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r21 */, char * name /* r20 */, unsigned int flags /* r19 */, class xAnimFile * * linkedList /* r18 */, unsigned int numX /* r17 */, unsigned int numY /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11B420 -> 0x11B6CC
        class xAnimFile * afile; // r22
        signed int i; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011B6D0 -> 0x0011BA80
*/
// Range: 0x11B6D0 -> 0x11BA80
static void CalcPhys(class xAnimFile * af /* r18 */) {
    /* anonymous block */ {
        // Range: 0x11B6D0 -> 0x11BA80
        class _xQuat tempQ; // r29+0xB0
        float physEnd[4]; // r29+0xA0
        float physStart[4]; // r29+0x90
        float rootZero[4]; // r29+0x80
        float rootEnd[4]; // r29+0x70
        float rootStart[4]; // r29+0x60
        void * root; // r16
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011BA80 -> 0x0011BD30
*/
// Range: 0x11BA80 -> 0x11BD30
static void CalcPhysFromKeys(class xAnimFile * af /* r2 */, float * rootStart /* r2 */, float * rootEnd /* r2 */, float * physStart /* r2 */, float * physEnd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11BA80 -> 0x11BD30
        float * temp; // r3
        float * temp; // r3
        float delta; // r1
        signed int i; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011BD30 -> 0x0011BD58
*/
// Range: 0x11BD30 -> 0x11BD58
class xAnimTransition * xAnimTempTransitionAlloc() {
    /* anonymous block */ {
        // Range: 0x11BD30 -> 0x11BD58
        class xAnimTransition * tran; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011BD60 -> 0x0011BDC4
*/
// Range: 0x11BD60 -> 0x11BDC4
void xAnimTempTransitionInit(unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11BD60 -> 0x11BDC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011BDD0 -> 0x0011BE00
*/
// Range: 0x11BDD0 -> 0x11BE00
void xAnimInit() {
    /* anonymous block */ {
        // Range: 0x11BDD0 -> 0x11BE00
    }
}


