/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zScene.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015B084 -> 0x80165180
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
char __FUNCTION__$localstatic1$Bead__17zCameraCurveAssetCFi[5]; // size: 0x5, address: 0x80C01328
char __FUNCTION__$localstatic1$Validate__17zCameraCurveAssetCFv[9]; // size: 0x9, address: 0x80C01330
char __FUNCTION__$localstatic1$Validate__15xCamBinaryAssetCFv[9]; // size: 0x9, address: 0x80C0133C
char __FUNCTION__$localstatic1$GetWallNormal__9zNPCWallsFi[14]; // size: 0xE, address: 0x80C01348
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
char __FUNCTION__$localstatic1$render_immediate_pass__12xLightVolumeF10xColor_tagbb[22]; // size: 0x16, address: 0x80C01358
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
unsigned char DRAW_SAFE_AREA; // size: 0x1, address: 0x80C083C0
static int bytesNeeded; // size: 0x4, address: 0x80C083C4
static int availOnDisk; // size: 0x4, address: 0x80C083C8
static int neededFiles; // size: 0x4, address: 0x80C083CC
static unsigned int enableScreenAdj; // size: 0x4, address: 0x80C083D0
static float offsetx; // size: 0x4, address: 0x80C083D4
static float offsety; // size: 0x4, address: 0x80C083D8
static float oldOffsetx; // size: 0x4, address: 0x80C083DC
static float oldOffsety; // size: 0x4, address: 0x80C083E0
static float menuOldOffsetx; // size: 0x4, address: 0x80C083E4
static float menuOldOffsety; // size: 0x4, address: 0x80C083E8
int g_idx_reloadTweaks; // size: 0x4, address: 0x80C01370
static int sMemDepthSceneStart; // size: 0x4, address: 0x80C01374
static int sMemDepthJustHIPStart; // size: 0x4, address: 0x80C01378
static unsigned char sLoadingPackFile; // size: 0x1, address: 0x80C083EC
// Range: 0x8015B084 -> 0x8015B08C
unsigned char zSceneIsLoadingPackFile() {
    // References
    // -> static unsigned char sLoadingPackFile;
}

// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x1C
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x28
struct xSurface : public xBase {
    // Members
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        struct xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x4
struct /* @class$1125zScene_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum eLightType {
    eLightType_Ambient = 0,
    eLightType_Spotlight = 1,
    eLightType_Directional = 2,
    eLightType_Point = 3,
};
// total size: 0x10
struct _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xLightAsset : public xDynAsset {
    // Members
    enum eLightType lightType; // offset 0x10, size 0x4
    unsigned int lightEffectID; // offset 0x14, size 0x4
    float lightEffectSpeed; // offset 0x18, size 0x4
    unsigned int lightFlags; // offset 0x1C, size 0x4
    struct _xFColor lightColor; // offset 0x20, size 0x10
    struct xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
    unsigned int lightCardID; // offset 0x44, size 0x4
    float lightCardScale; // offset 0x48, size 0x4
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x18
struct RpLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
    struct RwLLLink WorldSectorInLight; // offset 0xC, size 0x8
    struct RpWorldSector * sect; // offset 0x14, size 0x4
};
// total size: 0x54
struct iLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RpLight * hw; // offset 0x4, size 0x4
    struct RpLightTie lightTie; // offset 0x8, size 0x18
    struct xSphere sph; // offset 0x20, size 0x10
    float radius_sq; // offset 0x30, size 0x4
    struct _xFColor color; // offset 0x34, size 0x10
    struct xVec3 dir; // offset 0x44, size 0xC
    float coneangle; // offset 0x50, size 0x4
};
// total size: 0x14
class xLightEffectBase : public xBase {
    // Members
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x14
struct xLightEffectFlickerData {
    // Members
    struct _xFColor initialColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
};
// total size: 0x18
struct xLightEffectStrobeData {
    // Members
    struct _xFColor maxColor; // offset 0x0, size 0x10
    float time; // offset 0x10, size 0x4
    unsigned char stage; // offset 0x14, size 0x1
};
// total size: 0x258
struct xLight : public xBase {
    // Members
    unsigned int flags; // offset 0x10, size 0x4
    struct xLightAsset * tasset; // offset 0x14, size 0x4
    struct iLight light; // offset 0x18, size 0x54
    struct xBase * attachedTo; // offset 0x6C, size 0x4
    struct xVec3 attachedOffset; // offset 0x70, size 0xC
    struct xModelInstance * lightCard; // offset 0x7C, size 0x4
    float lightCardScale; // offset 0x80, size 0x4
    struct _xFColor startColor; // offset 0x84, size 0x10
    struct _xFColor endColor; // offset 0x94, size 0x10
    float transTimeLeft; // offset 0xA4, size 0x4
    float totalTransTime; // offset 0xA8, size 0x4
    class xLightEffectBase * lightEffect; // offset 0xAC, size 0x4
    unsigned char lightEffectRunning; // offset 0xB0, size 0x1
    float lightEffectSpeed; // offset 0xB4, size 0x4
    union { // inferred
        struct xLightEffectFlickerData flickerData; // offset 0xB8, size 0x14
        struct xLightEffectStrobeData strobeData; // offset 0xB8, size 0x18
    };
    char effectName[64]; // offset 0xD0, size 0x40
    char attachedToName[64]; // offset 0x110, size 0x40
    unsigned char drawDebugSpherePos; // offset 0x150, size 0x1
    unsigned char drawDebugSphereRange; // offset 0x151, size 0x1
    char fileName[256]; // offset 0x152, size 0x100
    unsigned int lineNumber; // offset 0x254, size 0x4
};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
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
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$1125zScene_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x38
struct xGrid {
    // Members
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    struct xGridBound * * cells; // offset 0x2C, size 0x4
    struct xGridBound * other; // offset 0x30, size 0x4
    int iter_active; // offset 0x34, size 0x4
};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x10
struct xFFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(struct xEnt *, struct xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    struct xFFX * next; // offset 0xC, size 0x4
};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$1264zScene_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1264zScene_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x70
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x1C
    struct xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x6A8
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x70, size 0x4
    int num_base; // offset 0x74, size 0x4
    struct xBase * * base; // offset 0x78, size 0x4
    unsigned int num_update_base; // offset 0x7C, size 0x4
    struct xBase * * update_base; // offset 0x80, size 0x4
    int baseCount[195]; // offset 0x84, size 0x30C
    struct xBase * baseList[195]; // offset 0x390, size 0x30C
    struct _zEnv * zen; // offset 0x69C, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A0, size 0x4
    unsigned char enableDrawing; // offset 0x6A4, size 0x1
};
// total size: 0x1C
struct zSceneObjectInstanceDesc {
    // Members
    char * name; // offset 0x0, size 0x4
    int baseType; // offset 0x4, size 0x4
    unsigned int assetType; // offset 0x8, size 0x4
    unsigned int sizeRuntime; // offset 0xC, size 0x4
    unsigned int (* func)(struct zScene *, struct zSceneObjectInstanceDesc *, unsigned int); // offset 0x10, size 0x4
    void (* objectInitFunc)(void *, void *); // offset 0x14, size 0x4
    unsigned int (* querySubObjects)(void *); // offset 0x18, size 0x4
};
static struct zSceneObjectInstanceDesc sInitTable[32]; // size: 0x380, address: 0x8043B1A8
// total size: 0x14
struct dynamic_type_data {
    // Members
    const char * name; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned char is_ent; // offset 0xC, size 0x1
    void (* load)(struct xBase &, struct xDynAsset &, unsigned long); // offset 0x10, size 0x4
};
static struct dynamic_type_data dynamic_types[92]; // size: 0x730, address: 0x803DC498
// Range: 0x8015B08C -> 0x8015B110
static unsigned int count_dynamic_types(const char * name /* r0 */) {
    // Local variables
    unsigned int type; // r0
    int dyn_size; // r0
    unsigned int total; // r28
    int i; // r27
    unsigned int asset_size; // r1+0x8
    const struct xDynAsset * a; // r0
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80C0137C
// Range: 0x8015B110 -> 0x8015B1F0
static void add_dynamic_types(struct zScene & s /* r29 */) {
    // Local variables
    unsigned long i; // r30
    int count; // r0

    // References
    // -> static char __FUNCTION__[18];
    // -> static struct dynamic_type_data dynamic_types[92];
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80C01390
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// Range: 0x8015B1F0 -> 0x8015B440
static unsigned int init_dynamic_type(struct zScene & s /* r22 */, unsigned int index /* r23 */, const struct dynamic_type_data & d /* r24 */) {
    // Local variables
    int count; // r3
    unsigned int type; // r0
    int dyn_size; // r0
    int i; // r27
    int cnt; // r26
    unsigned int asset_size; // r1+0x8
    struct xDynAsset * a; // r25
    struct xBase * b; // r21

    // References
    // -> static char __FUNCTION__[18];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8015B440 -> 0x8015B4B4
static unsigned int init_dynamic_types(struct zScene & s /* r29 */, unsigned int index /* r4 */) {
    // Local variables
    unsigned long i; // r30

    // References
    // -> static struct dynamic_type_data dynamic_types[92];
}

struct _zEnv * gCurEnv; // size: 0x4, address: 0x80C083F0
static char __FUNCTION__[26]; // size: 0x1A, address: 0x8043B528
// Range: 0x8015B4B4 -> 0x8015B6D8
static unsigned int zSceneInitFunc_DefaultEnt(struct zScene * s /* r26 */, struct zSceneObjectInstanceDesc * desc /* r27 */, unsigned int base_idx /* r28 */) {
    // Local variables
    unsigned char * block; // r31
    int count; // r30
    unsigned int assetSize; // r1+0x8
    unsigned int offset; // r29
    struct xBase * b; // r24
    int i; // r23
    void * asset; // r22

    // References
    // -> static char __FUNCTION__[26];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80C013A4
// Range: 0x8015B6D8 -> 0x8015B928
static unsigned int zSceneInitFunc_Default(struct zScene * s /* r26 */, struct zSceneObjectInstanceDesc * desc /* r27 */, unsigned int base_idx /* r28 */) {
    // Local variables
    unsigned char * block; // r31
    int count; // r30
    unsigned int assetSize; // r1+0x8
    unsigned int offset; // r29
    struct xBase * b; // r26
    int i; // r25
    void * asset; // r24

    // References
    // -> static char __FUNCTION__[23];
    // -> unsigned int gActiveHeap;
}

// total size: 0x28
struct xMovePointAsset : public xBaseAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
// total size: 0x0
struct xSpline3 {};
// total size: 0x34
struct xMovePoint : public xBase {
    // Members
    struct xMovePointAsset * asset; // offset 0x10, size 0x4
    struct xVec3 * pos; // offset 0x14, size 0x4
    struct xMovePoint * * nodes; // offset 0x18, size 0x4
    struct xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    unsigned int start_point_of_id; // offset 0x28, size 0x4
    float delay; // offset 0x2C, size 0x4
    struct xSpline3 * spl; // offset 0x30, size 0x4
};
// total size: 0x38
struct zMovePoint : public xMovePoint {
    // Members
    int dbdraw_inprog; // offset 0x34, size 0x4
};
// Range: 0x8015B928 -> 0x8015BA00
static unsigned int zSceneInitFunc_MovePoint(struct zScene * s /* r28 */, struct zSceneObjectInstanceDesc * desc /* r27 */, unsigned int base_idx /* r26 */) {
    // Local variables
    int count; // r30
    unsigned int assetSize; // r1+0x8
    struct zMovePoint * movpBlock; // r0
    int idx; // r29
    struct xBase * b; // r28
    struct xBaseAsset * basset; // r27
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80C013BC
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x18
struct xCamCoordCylinder {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x20
struct xCamCoordSphere {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    struct xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x10
struct xCamOrient {
    // Members
    union { // inferred
        struct xQuat quat; // offset 0x0, size 0x10
        struct xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x30
struct xCamSpatialInfo {
    // Members
    struct xCamCoord coord; // offset 0x0, size 0x20
    struct xCamOrient orient; // offset 0x20, size 0x10
};
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0x0
struct xCamTransitionAsset {};
// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x60
struct triData : public tri_data {
    // Members
    struct xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    const struct xCollis * coll; // offset 0x1C, size 0x4
    struct xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0xC0
struct xEntDrive {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float outroTime; // offset 0x4, size 0x4
    float outroTimer; // offset 0x8, size 0x4
    float influenceOfOldDriver; // offset 0xC, size 0x4
    float introTime; // offset 0x10, size 0x4
    float introTimer; // offset 0x14, size 0x4
    float influenceOfDriver; // offset 0x18, size 0x4
    struct xEnt * oldDriver; // offset 0x1C, size 0x4
    struct xEnt * driver; // offset 0x20, size 0x4
    struct xEnt * driven; // offset 0x24, size 0x4
    struct xVec3 drivenPosInOldDriver; // offset 0x28, size 0xC
    struct xVec3 drivenPosInDriver; // offset 0x34, size 0xC
    struct xVec3 lastDrivenPos; // offset 0x40, size 0xC
    float yawInDriver; // offset 0x4C, size 0x4
    struct xVec3 dLoc; // offset 0x50, size 0xC
    struct triData tri; // offset 0x60, size 0x60
};
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0x10
class xPlane {
    // Members
public:
    struct xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x50
struct JumpTriggerExtra {
    // Members
    class xPlane faces[4]; // offset 0x0, size 0x40
    int jumpFaces[4]; // offset 0x40, size 0x10
};
// total size: 0xC
struct /* @class$2625zScene_cpp */ {
    // Members
    unsigned int curveID; // offset 0x0, size 0x4
    unsigned int cameraAID; // offset 0x4, size 0x4
    unsigned int cameraBID; // offset 0x8, size 0x4
};
// total size: 0x40
struct xTriggerAsset {
    // Members
    struct xVec3 p[4]; // offset 0x0, size 0x30
    union { // inferred
        struct xVec3 direction; // offset 0x30, size 0xC
        struct xVec3 safeAreaCenter; // offset 0x30, size 0xC
        // total size: 0xC
        struct /* @class$2625zScene_cpp */ {
            // Members
            unsigned int curveID; // offset 0x0, size 0x4
            unsigned int cameraAID; // offset 0x4, size 0x4
            unsigned int cameraBID; // offset 0x8, size 0x4
        } camTransition; // offset 0x30, size 0xC
    };
    unsigned short flags; // offset 0x3C, size 0x2
    unsigned short safeAreaRadius; // offset 0x3E, size 0x2
};
// total size: 0x1C0
struct zEntTrigger : public zEnt {
    // Members
    struct xBox triggerBox; // offset 0xDC, size 0x18
    unsigned int entered; // offset 0xF4, size 0x4
    union { // inferred
        struct xEntDrive drive; // offset 0x100, size 0xC0
        struct JumpTriggerExtra jumpTriggerExtra; // offset 0x100, size 0x50
        class xCamTransition * camTransition; // offset 0x100, size 0x4
    };
};
// total size: 0xC
struct xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
};
// total size: 0x24
class xCamTransition : public xBase {
    // Members
public:
    const struct xCamTransitionAsset * mAsset; // offset 0x10, size 0x4
    struct zEntTrigger * mTransitionVolume; // offset 0x14, size 0x4
    int mType; // offset 0x18, size 0x4
private:
    unsigned char mActive; // offset 0x1C, size 0x1
    class xCamBias * mCamBlendBias; // offset 0x20, size 0x4
};
// total size: 0x14
class xCamTimeBias : public xCamBias {
    // Members
    float bias; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float blendTime; // offset 0x10, size 0x4
};
// total size: 0x8
class xCamBias {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    unsigned char mIsBiDirectional; // offset 0x4, size 0x1
};
// total size: 0x0
class zCam2Player {};
// total size: 0x170
struct xCamBlend : public xCam {
    // Members
    struct xCam * src; // offset 0x140, size 0x4
    struct xCam * dst; // offset 0x144, size 0x4
    class xCamBias * bias; // offset 0x148, size 0x4
    class xCamTimeBias timeBias; // offset 0x14C, size 0x14
    class xCamTransition * transition; // offset 0x160, size 0x4
};
// total size: 0x10
struct /* @class$2019zScene_cpp */ {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xColor_tag color[3]; // offset 0x4, size 0xC
};
// total size: 0x18
struct zone_data {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    struct xVec3 face; // offset 0xC, size 0xC
};
// total size: 0x54
struct xCamConfigFollow {
    // Members
    struct zone_data zone_rest; // offset 0x0, size 0x18
    struct zone_data zone_above; // offset 0x18, size 0x18
    struct zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x18
struct xCamCoordPolar {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    float theta; // offset 0xC, size 0x4
    float phi; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
};
// total size: 0x0
class zCamSplineCommonMix {};
// total size: 0x140
struct xCam {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    float fov; // offset 0x80, size 0x4
    int flags; // offset 0x84, size 0x4
    unsigned int owner; // offset 0x88, size 0x4
    struct xCamGroup * group; // offset 0x8C, size 0x4
    struct analog_data analog; // offset 0x90, size 0x18
    enum xCamCoordType coord_type; // offset 0xA8, size 0x4
    enum xCamOrientType orient_type; // offset 0xAC, size 0x4
    struct xCamSpatialInfo spatial; // offset 0xB0, size 0x30
    struct xCamSpatialInfo coll_spatial; // offset 0xE0, size 0x30
    struct xCamConfigCommon cfg_common; // offset 0x110, size 0x8
    void * __vptr$; // offset 0x118, size 0x4
private:
    int group_flags; // offset 0x11C, size 0x4
    struct xCamBlend * blender; // offset 0x120, size 0x4
public:
    // total size: 0x10
    struct /* @class$2019zScene_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
};
// total size: 0xE0
struct xCamGroup {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 coll_mat; // offset 0x40, size 0x40
    struct xVec3 coll_atXZ; // offset 0x80, size 0xC
    float cameraPlayerAudioBias; // offset 0x8C, size 0x4
    struct xVec3 vel; // offset 0x90, size 0xC
    float fov; // offset 0x9C, size 0x4
    float fov_default; // offset 0xA0, size 0x4
    int flags; // offset 0xA4, size 0x4
    struct xCam * primary; // offset 0xA8, size 0x4
    struct analog_data analog; // offset 0xAC, size 0x18
private:
    int child_flags; // offset 0xC4, size 0x4
    int child_flags_mask; // offset 0xC8, size 0x4
    struct xCamBlend * blend_cam[4]; // offset 0xCC, size 0x10
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
struct RwV2d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
struct RwPlane {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x14
struct RwFrustumPlane {
    // Members
    struct RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x184
struct RwCamera {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    struct RwCamera * (* beginUpdate)(struct RwCamera *); // offset 0x18, size 0x4
    struct RwCamera * (* endUpdate)(struct RwCamera *); // offset 0x1C, size 0x4
    struct RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    struct RwRaster * frameBuffer; // offset 0x60, size 0x4
    struct RwRaster * zBuffer; // offset 0x64, size 0x4
    struct RwV2d viewWindow; // offset 0x68, size 0x8
    struct RwV2d recipViewWindow; // offset 0x70, size 0x8
    struct RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    struct RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    struct RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    struct RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x8
struct xCamScreen {
    // Members
    struct RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct PlaybackStruct {};
// total size: 0xC
struct PlaybackBuffers {
    // Members
    struct PlaybackStruct * PlaybackBuf; // offset 0x0, size 0x4
    struct PlaybackStruct * PlaybackCur; // offset 0x4, size 0x4
    struct PlaybackStruct * PlaybackEnd; // offset 0x8, size 0x4
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x804
struct Command {
    // Members
    char command[2048]; // offset 0x0, size 0x800
    void * userData; // offset 0x800, size 0x4
};
enum eError {
    eReadyForBin = 1,
    eSuccess = 0,
    eGenericError = -1,
    eUnableToInitialize = -2,
    eInvalidCmd = -3,
    eNotConnected = -4,
    eUnableToConnect = -5,
    eUnableToFindAsset = -6,
    eAssetSizeMismatch = -7,
    eInsufficientArgs = -8,
    eUnableToDeInitialize = -9,
    eUnableToDisconnect = -10,
    eUnableToGetCurrentScene = -11,
    eUnableToFindAssetType = -12,
    eUnableToSendCommand = -13,
    eUnableToSendAssetData = -14,
    eUnableToReceiveStatus = -15,
    eConnectionLost = -16,
    eNoActiveDebugLink = -17,
};
// total size: 0x18
struct CommandHandlerMap {
    // Members
    char command[12]; // offset 0x0, size 0xC
    enum eError (xDebugLink::* handler)(void *, void *, char * *, int, void *); // offset 0xC, size 0x4
};
// total size: 0x83D8
class xDebugLink {
    // Static members
    static char mBuffer[2048]; // size: 0x800

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct Command mCmdBuffer[16]; // offset 0x4, size 0x8040
    int mNumCmd; // offset 0x8044, size 0x4
    struct CommandHandlerMap mCommandHandlerMap[16]; // offset 0x8048, size 0x180
    unsigned char mConnected; // offset 0x81C8, size 0x1
    unsigned int mAssetToUpdate; // offset 0x81CC, size 0x4
    unsigned int mAssetDataReceivedSize; // offset 0x81D0, size 0x4
    unsigned char mProcessingCmds; // offset 0x81D4, size 0x1
    char mConnectedComputer[256]; // offset 0x81D5, size 0x100
    char mDevkitName[256]; // offset 0x82D5, size 0x100
};
// total size: 0x6C0
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    unsigned int PlaybackMode; // offset 0x480, size 0x4
    struct PlaybackBuffers PlaybackFrames[4]; // offset 0x484, size 0x30
    char PlaybackFile[128]; // offset 0x4B4, size 0x80
    unsigned int PlaybackStartFrame; // offset 0x534, size 0x4
    unsigned int PlaybackEndFrame; // offset 0x538, size 0x4
    unsigned int PlaybackResolution; // offset 0x53C, size 0x4
    int MemTrackingLvl; // offset 0x540, size 0x4
    char MemTrackLogFileName[128]; // offset 0x544, size 0x80
    signed short ForceCutscene; // offset 0x5C4, size 0x2
    int useHIPHOP; // offset 0x5C8, size 0x4
    unsigned char NoMusic; // offset 0x5CC, size 0x1
    unsigned char NoCutscenes; // offset 0x5CD, size 0x1
    unsigned char NoPadCheck; // offset 0x5CE, size 0x1
    unsigned char firstStartPressed; // offset 0x5CF, size 0x1
    unsigned char fromLauncher; // offset 0x5D0, size 0x1
    unsigned char skipAssertWithController; // offset 0x5D1, size 0x1
    unsigned char enableHelperAI; // offset 0x5D2, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x5D3, size 0x1
    unsigned char enableDebugControls; // offset 0x5D4, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x5D5, size 0x1
    unsigned char PlaybackFlashDemo; // offset 0x5D6, size 0x1
    unsigned char FlashWIP; // offset 0x5D7, size 0x1
    unsigned char inLoadingScreen; // offset 0x5D8, size 0x1
    unsigned char LoadingScene; // offset 0x5D9, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x5DA, size 0x1
    unsigned char ForceMono; // offset 0x5DB, size 0x1
    unsigned char UnlimitedNukes; // offset 0x5DC, size 0x1
    unsigned int minVSyncCnt; // offset 0x5E0, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x5E4, size 0x1
    unsigned char autoSaveFeature; // offset 0x5E5, size 0x1
    unsigned char skipAsserts; // offset 0x5E6, size 0x1
    unsigned char beforeFirstFrame; // offset 0x5E7, size 0x1
    int asyncLoadingScreen; // offset 0x5E8, size 0x4
    int asyncLoadingFlags; // offset 0x5EC, size 0x4
    char fromLauncherUser[32]; // offset 0x5F0, size 0x20
    class zPlayerContainer players; // offset 0x610, size 0x14
    struct zScene * sceneCur; // offset 0x624, size 0x4
    struct zScene * scenePreload; // offset 0x628, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x62C, size 0x4
    char watermark[127]; // offset 0x630, size 0x7F
    unsigned char watermarkAlpha; // offset 0x6AF, size 0x1
    float watermarkSize; // offset 0x6B0, size 0x4
    class xDebugLink * debugLink; // offset 0x6B4, size 0x4
    unsigned char enableRealTimeUpdate; // offset 0x6B8, size 0x1
    unsigned char showMenuOnBoot; // offset 0x6B9, size 0x1
    unsigned char enableHUD; // offset 0x6BA, size 0x1
    unsigned char skipAnimViewer; // offset 0x6BB, size 0x1
};
struct xGlobals * xglobals; // size: 0x4, address: 0x80C00BE8
// Range: 0x8015BA00 -> 0x8015BBD0
static unsigned int zSceneInitFunc_Player(struct zScene * s /* r27 */, struct zSceneObjectInstanceDesc * desc /* r24 */, unsigned int base_idx /* r28 */) {
    // Local variables
    int count; // r30
    struct zEnt * entBlock; // r0
    int idx; // r29
    struct xBase * b; // r24
    struct xEntAsset * asset; // r0

    // References
    // -> static char __FUNCTION__[22];
    // -> struct xGlobals * xglobals;
    // -> unsigned int gActiveHeap;
}

// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
enum _tagTransType {
    eTransType_None = 0,
    eTransType_Interp1 = 1,
    eTransType_Interp2 = 2,
    eTransType_Interp3 = 3,
    eTransType_Interp4 = 4,
    eTransType_Linear = 5,
    eTransType_Interp1Rev = 6,
    eTransType_Interp2Rev = 7,
    eTransType_Interp3Rev = 8,
    eTransType_Interp4Rev = 9,
    eTransType_Total = 10,
};
// total size: 0x18
struct xCamFollowAsset {
    // Members
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x10
struct _tagxCamShoulderAsset {
    // Members
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
};
// total size: 0x4
struct _tagp2CamStaticAsset {
    // Members
    unsigned int unused; // offset 0x0, size 0x4
};
// total size: 0xC
struct _tagxCamPathAsset {
    // Members
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
};
// total size: 0x4
struct _tagp2CamStaticFollowAsset {
    // Members
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x88
struct xCamAsset : public xBaseAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    struct xVec3 up; // offset 0x20, size 0xC
    struct xVec3 right; // offset 0x2C, size 0xC
    struct xVec3 view_offset; // offset 0x38, size 0xC
    signed short offset_start_frames; // offset 0x44, size 0x2
    signed short offset_end_frames; // offset 0x46, size 0x2
    float fov; // offset 0x48, size 0x4
    float trans_time; // offset 0x4C, size 0x4
    enum _tagTransType trans_type; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    float fade_up; // offset 0x58, size 0x4
    float fade_down; // offset 0x5C, size 0x4
    union { // inferred
        struct xCamFollowAsset cam_follow; // offset 0x60, size 0x18
        struct _tagxCamShoulderAsset cam_shoulder; // offset 0x60, size 0x10
        struct _tagp2CamStaticAsset cam_static; // offset 0x60, size 0x4
        struct _tagxCamPathAsset cam_path; // offset 0x60, size 0xC
        struct _tagp2CamStaticFollowAsset cam_staticFollow; // offset 0x60, size 0x4
    };
    unsigned int valid_flags; // offset 0x78, size 0x4
    unsigned int markerid[2]; // offset 0x7C, size 0x8
    unsigned char cam_type; // offset 0x84, size 0x1
    unsigned char pad[3]; // offset 0x85, size 0x3
};
// total size: 0x14
struct zCamMarker : public xBase {
    // Members
    struct xCamAsset * asset; // offset 0x10, size 0x4
};
// Range: 0x8015BBD0 -> 0x8015BCA0
static unsigned int zSceneInitFunc_Camera(struct zScene * s /* r30 */, struct zSceneObjectInstanceDesc * desc /* r27 */, unsigned int base_idx /* r26 */) {
    // Local variables
    int count; // r29
    struct zCamMarker * camBlock; // r3
    int idx; // r28
    struct xBase * b; // r0
    struct xCamAsset * assetCam; // r27

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8015BCA0 -> 0x8015BD3C
static unsigned int zSceneInitFunc_Surface(struct zScene * s /* r27 */, struct zSceneObjectInstanceDesc * desc /* r29 */, unsigned int base_idx /* r28 */) {
    // Local variables
    int count; // r31
    int idx; // r30
    struct xBase * b; // r29
}

// Range: 0x8015BD3C -> 0x8015BDDC
static unsigned int zSceneInitFunc_Volume(struct zScene * s /* r27 */, struct zSceneObjectInstanceDesc * desc /* r29 */, unsigned int base_idx /* r28 */) {
    // Local variables
    int count; // r31
    int idx; // r30
    struct xBase * b; // r29
}

// Range: 0x8015BDDC -> 0x8015BDE4
static unsigned int zSceneInitFunc_LobMaster(unsigned int base_idx /* r5 */) {}

// total size: 0x0
struct st_ZDISPATCH_DATA {};
// Range: 0x8015BDE4 -> 0x8015BEB4
static unsigned int zSceneInitFunc_Dispatcher(struct zScene * s /* r27 */, struct zSceneObjectInstanceDesc * desc /* r26 */, unsigned int base_idx /* r25 */) {
    // Local variables
    int count; // r30
    struct st_ZDISPATCH_DATA * dpat_pool; // r29
    int idx; // r28
    struct xBase * b; // r27
    struct xEntAsset * asset; // r26
}

static char __FUNCTION__[10]; // size: 0xA, address: 0x80C013D4
// total size: 0x1C
struct zGlobalSettings {
    // Members
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    float DamageInvincibility; // offset 0x8, size 0x4
    float Gravity; // offset 0xC, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x10, size 0x1
    unsigned int AccelScripts; // offset 0x14, size 0x4
    float CameraFOV; // offset 0x18, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xC
struct zCheckPoint {
    // Members
    unsigned int initCamID; // offset 0x0, size 0x4
    unsigned char * jsp_active; // offset 0x4, size 0x4
    enum xSndEffect currentEffect; // offset 0x8, size 0x4
};
// total size: 0x0
struct zAssetPickupTable {};
// total size: 0xCC
struct xCutsceneMgrAsset : public xBaseAsset {
    // Members
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    unsigned int uSubtitlesID; // offset 0x14, size 0x4
    float startTime[15]; // offset 0x18, size 0x3C
    float endTime[15]; // offset 0x54, size 0x3C
    unsigned int emitID[15]; // offset 0x90, size 0x3C
};
// total size: 0x80
struct xCutsceneAudioTrack {
    // Members
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x1030
struct xCutsceneInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    struct xCutsceneAudioTrack AudioTracks[32]; // offset 0x30, size 0x1000
};
// total size: 0x10
struct xCutsceneData {
    // Members
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
// total size: 0x8
struct xCutsceneBreak {
    // Members
    float Time; // offset 0x0, size 0x4
    int Index; // offset 0x4, size 0x4
};
// total size: 0x10
struct xCutsceneTime {
    // Members
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
// total size: 0x3C
struct DVDFileInfo {
    // Members
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// total size: 0xF0
struct tag_iFile {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    int fd; // offset 0x84, size 0x4
    struct DVDFileInfo file; // offset 0x88, size 0x3C
    void (* cb)(struct tag_xFile *); // offset 0xC4, size 0x4
    int akey; // offset 0xC8, size 0x4
    int buffer[8]; // offset 0xCC, size 0x20
    int real_pos; // offset 0xEC, size 0x4
};
// total size: 0x114
struct tag_xFile {
    // Members
    char relname[32]; // offset 0x0, size 0x20
    struct tag_iFile ps; // offset 0x20, size 0xF0
    void * user_data; // offset 0x110, size 0x4
};
// total size: 0xC
struct XCSNNosey {
    // Members
    void * __vptr$; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    int flg_nosey; // offset 0x8, size 0x4
};
// total size: 0x4
struct xCutsceneModelHack {
    // Members
    struct xModelPipe * pipe; // offset 0x0, size 0x4
};
// total size: 0x1A8
struct xCutscene {
    // Members
    struct xCutsceneInfo * Info; // offset 0x0, size 0x4
    struct xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    struct xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    struct xCutsceneTime * Play; // offset 0x14, size 0x4
    struct xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    struct tag_xFile File; // offset 0x54, size 0x114
    int AsyncID; // offset 0x168, size 0x4
    void * MemBuf; // offset 0x16C, size 0x4
    void * MemCurr; // offset 0x170, size 0x4
    unsigned int SndStarted; // offset 0x174, size 0x4
    unsigned int SndNumChannel; // offset 0x178, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x17C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x184, size 0x8
    enum xSndHandle SndHandle[2]; // offset 0x18C, size 0x8
    unsigned int SubTitlesID; // offset 0x194, size 0x4
    struct XCSNNosey * cb_nosey; // offset 0x198, size 0x4
    struct xCutsceneModelHack * ModelHack; // offset 0x19C, size 0x4
    unsigned char started; // offset 0x1A0, size 0x1
    unsigned char useDefaultTrack; // offset 0x1A1, size 0x1
    unsigned int useDefaultTrackID; // offset 0x1A4, size 0x4
};
// total size: 0x20
struct xCutsceneMgr : public xBase {
    // Members
    struct xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    struct xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
};
// total size: 0x24
struct zCutsceneMgr : public xCutsceneMgr {
    // Members
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x0
class zEconomics {};
// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
enum ezMiniGameTypes {
    MG_GAMETYPE_UNKNOWN = 0,
    MG_GAMETYPE_TYPE1 = 1,
    MG_GAMETYPE_DEFENDTHEBASE = 2,
    MG_GAMETYPE_RATONBALL = 3,
    MG_GAMETYPE_PUFFEROIDS = 4,
    MG_GAMETYPE_GRAPESTOMPER = 5,
    MG_GAMETYPE_CONGALINE = 6,
    MG_GAMETYPE_AVOIDTHESTUFF = 7,
    MG_GAMETYPE_COUNT = 8,
};
// total size: 0x14
struct zMiniGameAsset : public xDynAsset {
    // Members
    unsigned int dispatcherID; // offset 0x10, size 0x4
};
enum eMiniGameState {
    GAMESTATE_GAME_START = 0,
    GAMESTATE_STAGE_START = 1,
    GAMESTATE_GAME_PLAY = 2,
    GAMESTATE_STAGE_END = 3,
    GAMESTATE_GAME_END = 4,
};
// total size: 0x2C
class zMiniGameBase : public xBase {
    // Static members
    static class zMiniGameBase * currentMiniGame; // size: 0x4

    // Members
protected:
    enum ezMiniGameTypes gameType; // offset 0x10, size 0x4
    struct zMiniGameAsset * asset; // offset 0x14, size 0x4
    int playerCount; // offset 0x18, size 0x4
    unsigned char gameDone; // offset 0x1C, size 0x1
    struct xBase * dispatcher; // offset 0x20, size 0x4
    enum eMiniGameState gameState; // offset 0x24, size 0x4
public:
    void * __vptr$; // offset 0x28, size 0x4
};
// total size: 0xC
class zMiniGameManager : public zLightweightSystemBase {
    // Members
    class zMiniGameBase * currentGame; // offset 0x4, size 0x4
    int userSetPlayerCount; // offset 0x8, size 0x4
};
// total size: 0x798
struct zGlobals : public xGlobals {
    // Members
    struct zGlobalSettings settings; // offset 0x6C0, size 0x1C
    struct zCheckPoint checkPoint; // offset 0x6DC, size 0xC
    unsigned int playerTag[9]; // offset 0x6E8, size 0x24
    unsigned char playerLoaded; // offset 0x70C, size 0x1
    unsigned char invertJoystick; // offset 0x70D, size 0x1
    float timeMultiplier; // offset 0x710, size 0x4
    float timeMultiplierTarget; // offset 0x714, size 0x4
    float XPMultiplier; // offset 0x718, size 0x4
    struct zAssetPickupTable * pickupTable; // offset 0x71C, size 0x4
    struct zCutsceneMgr * cmgr; // offset 0x720, size 0x4
    char startDebugMode[32]; // offset 0x724, size 0x20
    unsigned int noMovies; // offset 0x744, size 0x4
    unsigned int boundUpdateTime; // offset 0x748, size 0x4
    unsigned char draw_player_after_fx; // offset 0x74C, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x74D, size 0x1
    unsigned char enableFriendlyFly; // offset 0x74E, size 0x1
    unsigned char stopCurrentConversation; // offset 0x74F, size 0x1
    enum zGlobalDemoType demoType; // offset 0x750, size 0x4
    struct zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x754, size 0x4
    struct xVec3 cameraPlayersMidpoint; // offset 0x758, size 0xC
    struct xVec3 cameraLookAt; // offset 0x764, size 0xC
    int cameraAIFocus; // offset 0x770, size 0x4
    enum eBrainType firstPlayerBrainID; // offset 0x774, size 0x4
    class zEconomics * economics; // offset 0x778, size 0x4
    class zMiniGameManager * mgManager; // offset 0x77C, size 0x4
    unsigned char fmvJustFinished; // offset 0x780, size 0x1
    unsigned int initialRemyPowerUp[5]; // offset 0x784, size 0x14
};
struct zGlobals globals; // size: 0x798, address: 0x80B9EF78
// Range: 0x8015BEB4 -> 0x8015BF6C
void zSceneSet(struct xBase * b /* r30 */, int idx /* r31 */) {
    // References
    // -> struct zGlobals globals;
    // -> static char __FUNCTION__[10];
}

static unsigned int sPipeSceneAssetID; // size: 0x4, address: 0x80C083F4
int xModelLookupCount; // size: 0x4, address: 0x80C0748C
// Range: 0x8015BF6C -> 0x8015BFB0
static void PipeCountStuffCB(struct RpAtomic * data /* r0 */, struct xModelPipe & pipe /* r31 */) {
    // References
    // -> int xModelLookupCount;
    // -> static unsigned int sPipeSceneAssetID;
}

// total size: 0xC
struct xModelPipeLookup {
    // Members
    struct RpAtomic * model; // offset 0x0, size 0x4
    struct xModelPipe Pipe; // offset 0x4, size 0x8
};
struct xModelPipeLookup * xModelLookupList; // size: 0x4, address: 0x80C07490
// Range: 0x8015BFB0 -> 0x8015C000
static void PipeAddStuffCB(struct RpAtomic * data /* r0 */, struct xModelPipe & pipe /* r0 */) {
    // References
    // -> int xModelLookupCount;
    // -> struct xModelPipeLookup * xModelLookupList;
}

static unsigned int modelToCheck; // size: 0x4, address: 0x80C083F8
static signed char init; // size: 0x1, address: 0x80C083FC
static char __FUNCTION__[22]; // size: 0x16, address: 0x80C013E0
// total size: 0x10
struct xModelPipeTable {
    // Members
    unsigned int ModelHashID; // offset 0x0, size 0x4
    unsigned int SubObjectBits; // offset 0x4, size 0x4
    struct xModelPipe Pipe; // offset 0x8, size 0x8
};
struct xModelPipeTable * xModelPipeData[]; // size: 0x0, address: 0x80A840D4
int xModelPipeCount[]; // size: 0x0, address: 0x80A84094
int xModelPipeNumTables; // size: 0x4, address: 0x80C07488
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
struct xModelPipe modelDefaultPipe; // size: 0x8, address: 0x80BFD424
// total size: 0x28
struct PKRAssetType {
    // Members
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    int (* assetLoaded)(void *, unsigned int, void *, int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, int *, int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x20
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
    const char * assetname; // offset 0x18, size 0x4
    const char * filename; // offset 0x1C, size 0x4
};
// Range: 0x8015C000 -> 0x8015C2F0
static void PipeForAllSceneModels(void (* pipeCB)(struct RpAtomic *, struct xModelPipe &, unsigned int) /* r31 */) {
    // Local variables
    int i; // r25
    int j; // r24
    int k; // r23
    int numModels; // r0
    struct RpAtomic * model; // r22
    struct PKRAssetTOCInfo ainfo; // r1+0x8
    unsigned int numSubObjects; // r23
    unsigned int remainSubObjBits; // r21
    unsigned int currSubObjBits; // r20
    struct RpAtomic * tempmodel; // r3

    // References
    // -> struct xModelPipe modelDefaultPipe;
    // -> int xModelPipeNumTables;
    // -> static char __FUNCTION__[22];
    // -> static signed char init;
    // -> static unsigned int modelToCheck;
    // -> int xModelPipeCount[];
    // -> struct xModelPipeTable * xModelPipeData[];
    // -> static unsigned int sPipeSceneAssetID;
}

unsigned int gTransitionSceneID; // size: 0x4, address: 0x80C08400
// Range: 0x8015C2F0 -> 0x8015C3B0
static unsigned int BaseTypeNeedsUpdate(unsigned char baseType /* r0 */) {}

unsigned char gInSceneResetOrInit; // size: 0x1, address: 0x80C08404
static unsigned int num_ribbons; // size: 0x4, address: 0x80C08408
static signed char init; // size: 0x1, address: 0x80C0840C
static char __FUNCTION__[11]; // size: 0xB, address: 0x80C013F8
int gOccludeCount; // size: 0x4, address: 0x80C086C0
int xModelInstStaticAlloc; // size: 0x4, address: 0x80C07494
// total size: 0x0
struct iAnimFile {};
// total size: 0x0
struct xPlatformAsset {};
// total size: 0x28
struct xEntMotionERData {
    // Members
    struct xVec3 ret_pos; // offset 0x0, size 0xC
    struct xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
// total size: 0x18
struct xEntMotionOrbitData {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
// total size: 0xC
struct xEntMotionSplineData {
    // Members
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0xC
struct xEntMotionMPData {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x38
struct xEntMotionMechData {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    unsigned char scale_axis; // offset 0x4, size 0x1
    float sld_dist; // offset 0x8, size 0x4
    float sld_tm; // offset 0xC, size 0x4
    float sld_acc_tm; // offset 0x10, size 0x4
    float sld_dec_tm; // offset 0x14, size 0x4
    float rot_dist; // offset 0x18, size 0x4
    float rot_tm; // offset 0x1C, size 0x4
    float rot_acc_tm; // offset 0x20, size 0x4
    float rot_dec_tm; // offset 0x24, size 0x4
    float ret_delay; // offset 0x28, size 0x4
    float post_ret_delay; // offset 0x2C, size 0x4
    float scale_amount; // offset 0x30, size 0x4
    float scale_duration; // offset 0x34, size 0x4
};
// total size: 0x14
struct xEntMotionPenData {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
// total size: 0x3C
struct xEntMotionAsset {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short ent_motion_flags; // offset 0x2, size 0x2
    union { // inferred
        struct xEntMotionERData er; // offset 0x4, size 0x28
        struct xEntMotionOrbitData orb; // offset 0x4, size 0x18
        struct xEntMotionSplineData spl; // offset 0x4, size 0xC
        struct xEntMotionMPData mp; // offset 0x4, size 0xC
        struct xEntMotionMechData mech; // offset 0x4, size 0x38
        struct xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
// total size: 0x44
struct xEntERData {
    // Members
    struct xVec3 a; // offset 0x0, size 0xC
    struct xVec3 b; // offset 0xC, size 0xC
    struct xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    int state; // offset 0x40, size 0x4
};
// total size: 0x28
struct xEntOrbitData {
    // Members
    struct xVec3 orig; // offset 0x0, size 0xC
    struct xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
// total size: 0xC
struct xEntSpeedData {
    // Members
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x1C
class xNurbs : public xBaseAsset {
    // Members
    int degree; // offset 0x8, size 0x4
    int knotMaxIndex; // offset 0xC, size 0x4
    int controlMaxIndex; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    struct xVec3 * control; // offset 0x18, size 0x4
};
// total size: 0x30
struct xEntSplineData {
    // Members
    struct xEntSpeedData speed_data; // offset 0x0, size 0xC
    class xNurbs * spline; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    unsigned char arrived; // offset 0x14, size 0x1
    float position_blend_v; // offset 0x18, size 0x4
    float orient_blend_v; // offset 0x1C, size 0x4
    struct xQuat current_orient; // offset 0x20, size 0x10
};
// total size: 0x44
struct xEntMPData {
    // Members
    struct xEntSpeedData speed_data; // offset 0x0, size 0xC
    float curdist; // offset 0xC, size 0x4
    struct xMovePoint * dest; // offset 0x10, size 0x4
    struct xMovePoint * src; // offset 0x14, size 0x4
    struct xSpline3 * spl; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    unsigned int padalign; // offset 0x20, size 0x4
    struct xQuat aquat; // offset 0x24, size 0x10
    struct xQuat bquat; // offset 0x34, size 0x10
};
// total size: 0xD0
struct xEntMechData {
    // Members
    struct xBound original_bound; // offset 0x0, size 0x4C
    struct xVec3 original_position; // offset 0x4C, size 0xC
    struct xVec3 destination_position; // offset 0x58, size 0xC
    struct xVec3 direction; // offset 0x64, size 0xC
    float original_rotation; // offset 0x70, size 0x4
    float destination_rotation; // offset 0x74, size 0x4
    float sliding_speed; // offset 0x78, size 0x4
    float rotation_speed; // offset 0x7C, size 0x4
    int state; // offset 0x80, size 0x4
    float sliding_forth_decel_time; // offset 0x84, size 0x4
    float rotation_forth_decel_time; // offset 0x88, size 0x4
    float sliding_back_decel_time; // offset 0x8C, size 0x4
    float rotating_back_decel_time; // offset 0x90, size 0x4
    float scale_speed; // offset 0x94, size 0x4
    float current_scale; // offset 0x98, size 0x4
    float * entity_rotation_angle; // offset 0x9C, size 0x4
    struct xMat3x3 delta_rotation; // offset 0xA0, size 0x30
};
// total size: 0x50
struct xEntPenData {
    // Members
    struct xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    struct xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x100
struct xEntMotion {
    // Members
    struct xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        struct xEntERData er; // offset 0x20, size 0x44
        struct xEntOrbitData orb; // offset 0x20, size 0x28
        struct xEntSplineData spl; // offset 0x20, size 0x30
        struct xEntMPData mp; // offset 0x20, size 0x44
        struct xEntMechData mech; // offset 0x20, size 0xD0
        struct xEntPenData pen; // offset 0x20, size 0x50
    };
    struct xEnt * owner; // offset 0xF0, size 0x4
    struct xEnt * target; // offset 0xF4, size 0x4
};
// total size: 0x200
struct zPlatFMRunTime {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[17]; // offset 0x4, size 0x44
    float ttms[17]; // offset 0x48, size 0x44
    float atms[17]; // offset 0x8C, size 0x44
    float dtms[17]; // offset 0xD0, size 0x44
    float vms[17]; // offset 0x114, size 0x44
    float dss[17]; // offset 0x158, size 0x44
    float total_change[17]; // offset 0x19C, size 0x44
    struct xQuat startQuat; // offset 0x1E0, size 0x10
    struct xQuat destQuat; // offset 0x1F0, size 0x10
};
// total size: 0x310
struct zPlatform : public zEnt, public zEntAnimData {
    // Members
    struct xPlatformAsset * plat_asset; // offset 0xE8, size 0x4
    struct xEntMotion motion; // offset 0xF0, size 0x100
    unsigned short state; // offset 0x1F0, size 0x2
    unsigned short plat_flags; // offset 0x1F2, size 0x2
    float tmr; // offset 0x1F4, size 0x4
    int ctr; // offset 0x1F8, size 0x4
    struct xMovePoint * src; // offset 0x1FC, size 0x4
    struct xModelInstance * am; // offset 0x200, size 0x4
    struct xModelInstance * bm; // offset 0x204, size 0x4
    int moving; // offset 0x208, size 0x4
    struct xEntDrive drv; // offset 0x210, size 0xC0
    struct zPlatFMRunTime * fmrt; // offset 0x2D0, size 0x4
    struct zDestructible * destructible; // offset 0x2D4, size 0x4
    float elapsedTime; // offset 0x2D8, size 0x4
    struct xEntOpacity opacity; // offset 0x2DC, size 0x10
    enum iSndGroupHandle soundGroupTeeterCreak; // offset 0x2EC, size 0x4
    enum iSndGroupHandle soundGroupTeeterEnd; // offset 0x2F0, size 0x4
    enum xSndHandle soundTeeterCreak; // offset 0x2F4, size 0x4
    enum xSndHandle soundTeeterEnd; // offset 0x2F8, size 0x4
    enum xSndHandle sndID; // offset 0x2FC, size 0x4
    unsigned char hasStoppedRotating; // offset 0x300, size 0x1
    unsigned char hasReachedEnd; // offset 0x301, size 0x1
};
// Range: 0x8015C3B0 -> 0x8015D818
void zSceneInit(unsigned int theSceneID /* r1+0x8 */, int reloadInProgress /* r27 */) {
    // Local variables
    char scenename[8]; // r1+0x14
    long long t; // r25
    float pdone; // f30
    struct zScene * s; // r31
    int i; // r25
    char * pSceneId; // r0
    long long time; // r25
    int numDynAsset; // r0
    unsigned int asset_size; // r1+0x10
    struct xDynAsset * asset; // r0
    unsigned long expected_asset_size; // r25
    unsigned int idleWrite; // r28
    unsigned int j; // r27
    struct iAnimFile * raw; // r25
    unsigned int j; // r27
    struct iAnimFile * raw; // r25
    int i; // r25
    void * data; // r0
    int typeCount; // r0
    int j; // r24
    int total_npcs; // r27
    int total_new_npcs; // r24
    int total_old_npcs; // r25
    int base_idx; // r1+0xC
    int curidx; // r0
    int maxPolys; // r4
    int lkitCount; // r0
    void * lkitData; // r24
    struct zPlatform * pobj; // r24
    int navMeshCount; // r0
    class xNavigationMeshAsset * navMesh; // r0

    // References
    // -> static char __FUNCTION__[11];
    // -> struct xGlobals * xglobals;
    // -> unsigned char gInSceneResetOrInit;
    // -> unsigned char DRAW_SAFE_AREA;
    // -> static unsigned int num_ribbons;
    // -> static signed char init;
    // -> int xModelInstStaticAlloc;
    // -> unsigned int gActiveHeap;
    // -> static struct zSceneObjectInstanceDesc sInitTable[32];
    // -> int xModelLookupCount;
    // -> struct xModelPipeLookup * xModelLookupList;
    // -> int xModelPipeNumTables;
    // -> struct xModelPipeTable * xModelPipeData[];
    // -> int xModelPipeCount[];
    // -> struct zGlobals globals;
    // -> static int sMemDepthJustHIPStart;
    // -> static int sMemDepthSceneStart;
    // -> int gOccludeCount;
    // -> unsigned int gTransitionSceneID;
}

// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
struct xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x80A92EE0
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// Range: 0x8015D818 -> 0x8015D828
static void IncrementTweakReloadIndex() {
    // References
    // -> int g_idx_reloadTweaks;
}

// Range: 0x8015D828 -> 0x8015D9B4
void zScene_SetMinVSync() {
    // References
    // -> struct zGlobals globals;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C01404
// total size: 0x8
struct /* @class$2989zScene_cpp */ {
    // Members
    float player; // offset 0x0, size 0x4
    float other; // offset 0x4, size 0x4
};
// total size: 0x1C
struct /* @class$2990zScene_cpp */ {
    // Members
    unsigned int texture; // offset 0x0, size 0x4
    float thickness; // offset 0x4, size 0x4
    float fade_dist; // offset 0x8, size 0x4
    float max_dist; // offset 0xC, size 0x4
    float taper; // offset 0x10, size 0x4
    unsigned char volume; // offset 0x14, size 0x1
    unsigned char blend_mode; // offset 0x15, size 0x1
    unsigned char pad1; // offset 0x16, size 0x1
    unsigned char pad2; // offset 0x17, size 0x1
    struct xColor_tag color; // offset 0x18, size 0x4
};
// total size: 0x10
struct /* @class$2991zScene_cpp */ {
    // Members
    unsigned int texture; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
    unsigned char orient; // offset 0xC, size 0x1
    unsigned char response_curve; // offset 0xD, size 0x1
    unsigned char blend_mode; // offset 0xE, size 0x1
    unsigned char glow; // offset 0xF, size 0x1
};
// total size: 0x1
struct color_anim_none_data {};
// total size: 0x14
struct color_anim_pulse_data {
    // Members
    float frequency; // offset 0x0, size 0x4
    float intensity_min; // offset 0x4, size 0x4
    float intensity_max; // offset 0x8, size 0x4
    float glow_min; // offset 0xC, size 0x4
    float glow_max; // offset 0x10, size 0x4
};
// total size: 0x4
struct color_anim_flicker_data {
    // Members
    float dummy; // offset 0x0, size 0x4
};
union /* @class$2992zScene_cpp */ {
    struct color_anim_none_data none; // offset 0x0, size 0x1
    struct color_anim_pulse_data pulse; // offset 0x0, size 0x14
    struct color_anim_flicker_data flicker; // offset 0x0, size 0x4
};
// total size: 0xA0
struct zLaserBeamAsset : public xDynAsset {
    // Members
    unsigned int flags; // offset 0x10, size 0x4
    unsigned int attach_to; // offset 0x14, size 0x4
    unsigned int target; // offset 0x18, size 0x4
    unsigned int origin_emitter; // offset 0x1C, size 0x4
    unsigned int strike_emitter; // offset 0x20, size 0x4
    struct xVec3 origin; // offset 0x24, size 0xC
    struct xVec3 target_offset; // offset 0x30, size 0xC
    float speed; // offset 0x3C, size 0x4
    float segment_dist; // offset 0x40, size 0x4
    float knockback; // offset 0x44, size 0x4
    unsigned char movement; // offset 0x48, size 0x1
    unsigned char attach_bone; // offset 0x49, size 0x1
    unsigned char target_bone; // offset 0x4A, size 0x1
    unsigned char color_anim_type; // offset 0x4B, size 0x1
    unsigned char fade_in_type; // offset 0x4C, size 0x1
    unsigned char fade_out_type; // offset 0x4D, size 0x1
    unsigned char pad1; // offset 0x4E, size 0x1
    unsigned char pad2; // offset 0x4F, size 0x1
    float fade_in_time; // offset 0x50, size 0x4
    float fade_out_time; // offset 0x54, size 0x4
    // total size: 0x8
    struct /* @class$2989zScene_cpp */ {
        // Members
        float player; // offset 0x0, size 0x4
        float other; // offset 0x4, size 0x4
    } damage; // offset 0x58, size 0x8
    // total size: 0x1C
    struct /* @class$2990zScene_cpp */ {
        // Members
        unsigned int texture; // offset 0x0, size 0x4
        float thickness; // offset 0x4, size 0x4
        float fade_dist; // offset 0x8, size 0x4
        float max_dist; // offset 0xC, size 0x4
        float taper; // offset 0x10, size 0x4
        unsigned char volume; // offset 0x14, size 0x1
        unsigned char blend_mode; // offset 0x15, size 0x1
        unsigned char pad1; // offset 0x16, size 0x1
        unsigned char pad2; // offset 0x17, size 0x1
        struct xColor_tag color; // offset 0x18, size 0x4
    } beam; // offset 0x60, size 0x1C
    // total size: 0x10
    struct /* @class$2991zScene_cpp */ {
        // Members
        unsigned int texture; // offset 0x0, size 0x4
        float life_time; // offset 0x4, size 0x4
        float scale; // offset 0x8, size 0x4
        unsigned char orient; // offset 0xC, size 0x1
        unsigned char response_curve; // offset 0xD, size 0x1
        unsigned char blend_mode; // offset 0xE, size 0x1
        unsigned char glow; // offset 0xF, size 0x1
    } ribbon; // offset 0x7C, size 0x10
    union /* @class$2992zScene_cpp */ {
        struct color_anim_none_data none; // offset 0x0, size 0x1
        struct color_anim_pulse_data pulse; // offset 0x0, size 0x14
        struct color_anim_flicker_data flicker; // offset 0x0, size 0x4
    } color_anim; // offset 0x8C, size 0x14
};
// total size: 0x4
struct /* @class$2993zScene_cpp */ {
    // Members
    unsigned char active; // offset 0x0, size 0x1
    unsigned char use_tag; // offset 0x1, size 0x1
    unsigned char rotate_attach_to; // offset 0x2, size 0x1
    unsigned char motionless; // offset 0x3, size 0x1
};
enum path_type_enum {
    PT_DIRECT = 0,
    PT_MOVEPOINT = 1,
    PT_ENTITY = 2,
};
// total size: 0x40
struct /* @class$2995zScene_cpp */ {
    // Members
    enum path_type_enum type; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    struct xVec3 heading; // offset 0x10, size 0xC
    float segment_dist; // offset 0x1C, size 0x4
    float target_dist; // offset 0x20, size 0x4
    union { // inferred
        struct { // inferred
            struct xMovePoint * initial_mp; // offset 0x24, size 0x4
            struct xMovePoint * start_mp; // offset 0x28, size 0x4
            struct xMovePoint * end_mp; // offset 0x2C, size 0x4
            struct xSpline3 * spline; // offset 0x30, size 0x4
            float dist; // offset 0x34, size 0x4
            float max_dist; // offset 0x38, size 0x4
            float imax_dist; // offset 0x3C, size 0x4
        };
        struct { // inferred
            struct xEnt * ent; // offset 0x24, size 0x4
            struct xVec3 target_loc; // offset 0x28, size 0xC
            struct xVec3 offset; // offset 0x34, size 0xC
        };
    };
};
enum fade_state_enum {
    FADE_NONE = 0,
    FADE_IN = 1,
    FADE_OUT = 2,
};
// total size: 0x8
struct /* @class$3001zScene_cpp */ {
    // Members
    float age; // offset 0x0, size 0x4
    float rate; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$3002zScene_cpp */ {
    // Members
    float intensity; // offset 0x0, size 0x4
    float glow; // offset 0x4, size 0x4
    float intensity_vel; // offset 0x8, size 0x4
    float glow_vel; // offset 0xC, size 0x4
};
union /* @class$3000zScene_cpp */ {
    // total size: 0x8
    struct /* @class$3001zScene_cpp */ {
        // Members
        float age; // offset 0x0, size 0x4
        float rate; // offset 0x4, size 0x4
    } in; // offset 0x0, size 0x8
    // total size: 0x10
    struct /* @class$3002zScene_cpp */ {
        // Members
        float intensity; // offset 0x0, size 0x4
        float glow; // offset 0x4, size 0x4
        float intensity_vel; // offset 0x8, size 0x4
        float glow_vel; // offset 0xC, size 0x4
    } out; // offset 0x0, size 0x10
};
// total size: 0x4
struct /* @class$3004zScene_cpp */ {
    // Members
    float phase; // offset 0x0, size 0x4
};
// total size: 0x1
struct /* @class$3005zScene_cpp */ {};
union /* @class$3003zScene_cpp */ {
    // total size: 0x4
    struct /* @class$3004zScene_cpp */ {
        // Members
        float phase; // offset 0x0, size 0x4
    } pulse; // offset 0x0, size 0x4
    // total size: 0x1
    struct /* @class$3005zScene_cpp */ {} flicker; // offset 0x0, size 0x1
};
// total size: 0x3C
struct motion_data {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xVec3 start; // offset 0x4, size 0xC
    struct xVec3 end; // offset 0x10, size 0xC
    struct xVec3 dir; // offset 0x1C, size 0xC
    struct xVec3 heading; // offset 0x28, size 0xC
    float dist; // offset 0x34, size 0x4
    float end_dist; // offset 0x38, size 0x4
};
// total size: 0x10
class xDecalSimple {
    // Members
protected:
    int count; // offset 0x0, size 0x4
    unsigned char renderDecal; // offset 0x4, size 0x1
    unsigned char renderOnJSP; // offset 0x5, size 0x1
    unsigned char forceRenderOnBoth; // offset 0x6, size 0x1
    struct RwRaster * raster; // offset 0x8, size 0x4
    int numFrameSkipCount; // offset 0xC, size 0x4
};
// total size: 0x0
struct debug_info {};
// total size: 0x338
struct zLaserBeam : public xBase {
    // Static members
    static struct zLaserBeam * additional_lasers; // size: 0x4

    // Members
    struct zLaserBeamAsset * asset; // offset 0x10, size 0x4
    // total size: 0x4
    struct /* @class$2993zScene_cpp */ {
        // Members
        unsigned char active; // offset 0x0, size 0x1
        unsigned char use_tag; // offset 0x1, size 0x1
        unsigned char rotate_attach_to; // offset 0x2, size 0x1
        unsigned char motionless; // offset 0x3, size 0x1
    } flag; // offset 0x14, size 0x4
    int aim_bone; // offset 0x18, size 0x4
private:
    // total size: 0x40
    struct /* @class$2995zScene_cpp */ {
        // Members
        enum path_type_enum type; // offset 0x0, size 0x4
        struct xVec3 loc; // offset 0x4, size 0xC
        struct xVec3 heading; // offset 0x10, size 0xC
        float segment_dist; // offset 0x1C, size 0x4
        float target_dist; // offset 0x20, size 0x4
        union { // inferred
            struct { // inferred
                struct xMovePoint * initial_mp; // offset 0x24, size 0x4
                struct xMovePoint * start_mp; // offset 0x28, size 0x4
                struct xMovePoint * end_mp; // offset 0x2C, size 0x4
                struct xSpline3 * spline; // offset 0x30, size 0x4
                float dist; // offset 0x34, size 0x4
                float max_dist; // offset 0x38, size 0x4
                float imax_dist; // offset 0x3C, size 0x4
            };
            struct { // inferred
                struct xEnt * ent; // offset 0x24, size 0x4
                struct xVec3 target_loc; // offset 0x28, size 0xC
                struct xVec3 offset; // offset 0x34, size 0xC
            };
        };
    } path; // offset 0x1C, size 0x40
    struct xEnt * attach_ent; // offset 0x5C, size 0x4
    struct xVec3 attach_loc; // offset 0x60, size 0xC
    int attach_bone; // offset 0x6C, size 0x4
    union { // inferred
        struct xVec3 origin; // offset 0x70, size 0xC
        struct xModelTag origin_tag; // offset 0x70, size 0x20
    };
    struct xVec3 target_offset; // offset 0x90, size 0xC
    int origin_emitter_begin; // offset 0x9C, size 0x4
    int origin_emitter_size; // offset 0xA0, size 0x4
    int strike_emitter_begin; // offset 0xA4, size 0x4
    int strike_emitter_size; // offset 0xA8, size 0x4
    struct config_type ribbon_cfg; // offset 0xAC, size 0x20
    struct xFXRibbon * ribbon; // offset 0xCC, size 0x4
    struct RwRaster * beam_raster; // offset 0xD0, size 0x4
    int ribbon_flags; // offset 0xD4, size 0x4
    int prev_ribbon_flags; // offset 0xD8, size 0x4
    unsigned char passed_segment; // offset 0xDC, size 0x1
    struct xColor_tag beam_color; // offset 0xDD, size 0x4
    enum fade_state_enum fade_state; // offset 0xE4, size 0x4
    union /* @class$3000zScene_cpp */ {
        // total size: 0x8
        struct /* @class$3001zScene_cpp */ {
            // Members
            float age; // offset 0x0, size 0x4
            float rate; // offset 0x4, size 0x4
        } in; // offset 0x0, size 0x8
        // total size: 0x10
        struct /* @class$3002zScene_cpp */ {
            // Members
            float intensity; // offset 0x0, size 0x4
            float glow; // offset 0x4, size 0x4
            float intensity_vel; // offset 0x8, size 0x4
            float glow_vel; // offset 0xC, size 0x4
        } out; // offset 0x0, size 0x10
    } fade; // offset 0xE8, size 0x10
    union /* @class$3003zScene_cpp */ {
        // total size: 0x4
        struct /* @class$3004zScene_cpp */ {
            // Members
            float phase; // offset 0x0, size 0x4
        } pulse; // offset 0x0, size 0x4
        // total size: 0x1
        struct /* @class$3005zScene_cpp */ {} flicker; // offset 0x0, size 0x1
    } color_anim; // offset 0xF8, size 0x4
    struct motion_data all_motion[1]; // offset 0xFC, size 0x3C
    struct motion_data motion[8]; // offset 0x138, size 0x1E0
    unsigned long subdiv; // offset 0x318, size 0x4
    float isubdiv; // offset 0x31C, size 0x4
    struct zLaserBeam * next; // offset 0x320, size 0x4
    class xDecalSimple simpleShadowDecal; // offset 0x324, size 0x10
public:
    struct debug_info * debug; // offset 0x334, size 0x4
};
struct zLaserBeam * additional_lasers; // size: 0x4, address: 0x80C081A8
unsigned int SCENE_ID_MNU_START; // size: 0x4, address: 0x80C08218
// total size: 0xA08
class zTimeHandlerMgr : public zQueue {};
class zTimeHandlerMgr timehandler_mgr; // size: 0xA08, address: 0x80BB5B68
// Range: 0x8015D9B4 -> 0x8015DE5C
void zSceneExit(int beginReload /* r29 */) {
    // Local variables
    long long t; // r30
    int i; // r30
    struct zScene * s; // r30
    struct RpWorld * world; // r28
    char nextScene[8]; // r1+0x10
    char curScene[8]; // r1+0x8

    // References
    // -> static int sMemDepthJustHIPStart;
    // -> static int sMemDepthSceneStart;
    // -> struct zGlobals globals;
    // -> class zTimeHandlerMgr timehandler_mgr;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> int gOccludeCount;
    // -> static char __FUNCTION__[11];
    // -> struct zLaserBeam * additional_lasers;
    // -> struct xGlobals * xglobals;
}

// total size: 0x28
struct zTimeHandlerStruct {
    // Members
    float elapsed; // offset 0x0, size 0x4
    float period; // offset 0x4, size 0x4
    void (* cb)(float, struct zTimeHandlerStruct *); // offset 0x8, size 0x4
    struct xVec3 pos; // offset 0xC, size 0xC
    struct xVec3 normal; // offset 0x18, size 0xC
    float num_particles; // offset 0x24, size 0x4
};
// total size: 0xA08
class zQueue {
    // Members
protected:
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    struct zTimeHandlerStruct data[64]; // offset 0x8, size 0xA00
};
static char __FUNCTION__[13]; // size: 0xD, address: 0x80C01410
unsigned int gLevelChanged; // size: 0x4, address: 0x80C07E20
struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x80C0B564
// total size: 0xC
struct xMarkerAsset {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
};
// Range: 0x8015DE5C -> 0x8015E3CC
void zSceneSwitch(struct _zPortal * p /* r31 */, int forceSameScene /* r29 */, unsigned char sameScene /* r27 */, int playerNum /* r28 */) {
    // Local variables
    long long t; // r26
    struct xPortalAsset * passet; // r0
    unsigned int nextSceneID; // r4
    unsigned int PlayerMarkerStartID; // r29
    unsigned int PlayerMarkerStartCamID; // r0
    float PlayerStartAngle; // f31
    unsigned char teleportPlayer; // r0
    struct pointer_asset * pointer; // r0
    struct xMarkerAsset * marker; // r26
    struct xEnt & player; // r0
    struct xVec3 & loc; // r26
    struct pointer_asset * pointer; // r0
    struct xEntFrame * frame; // r29
    unsigned int size; // r1+0x8
    struct xMarkerAsset * m; // r26
    struct xEntFrame * frame; // r26

    // References
    // -> struct xGlobals * xglobals;
    // -> struct xVec3 m_UnitAxisY;
    // -> static char __FUNCTION__[13];
    // -> struct zGlobals globals;
    // -> unsigned int gLevelChanged;
}

// total size: 0x28
struct pointer_asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
int dumpBuffer; // size: 0x4, address: 0x80C08410
int logTally; // size: 0x4, address: 0x80C08414
int logEachItem; // size: 0x4, address: 0x80C08418
int logSwitches; // size: 0x4, address: 0x80C0841C
static int cnt_saver[195]; // size: 0x30C, address: 0x8043B544
enum en_ZBASETYPE {
    eBaseTypeUnknown = 0,
    eBaseTypeTrigger = 1,
    eBaseTypeVillain = 2,
    eBaseTypePlayer = 3,
    eBaseTypePickup = 4,
    eBaseTypeEnv = 5,
    eBaseTypePlatform = 6,
    eBaseTypeCamera = 7,
    eBaseTypeDoor = 8,
    eBaseTypeSavePoint = 9,
    eBaseTypeItem = 10,
    eBaseTypeStatic = 11,
    eBaseTypeDynamic = 12,
    eBaseTypeMovePoint = 13,
    eBaseTypeTimer = 14,
    eBaseTypeBubble = 15,
    eBaseTypePortal = 16,
    eBaseTypeGroup = 17,
    eBaseTypePendulum = 18,
    eBaseTypeSFX = 19,
    eBaseTypeFFX = 20,
    eBaseTypeVFX = 21,
    eBaseTypeCounter = 22,
    eBaseTypeHangable = 23,
    eBaseTypeButton = 24,
    eBaseTypeProj = 25,
    eBaseTypeSurface = 26,
    eBaseTypeDestructObj = 27,
    eBaseTypeHUD_image = 28,
    eBaseTypeVolume = 29,
    eBaseTypeDispatcher = 30,
    eBaseTypeCond = 31,
    eBaseTypeUI = 32,
    eBaseTypeUIFont = 33,
    eBaseTypeProjectileType = 34,
    eBaseTypeLobMaster = 35,
    eBaseTypeFog = 36,
    eBaseTypeLight = 37,
    eBaseTypeParticleEmitter = 38,
    eBaseTypeParticleSystem = 39,
    eBaseTypeCutsceneMgr = 40,
    eBaseTypeEGenerator = 41,
    eBaseTypeScript = 42,
    eBaseTypeNPC = 43,
    eBaseTypeHud = 44,
    eBaseTypeNPCProps = 45,
    eBaseTypeParticleEmitterProps = 46,
    eBaseTypeBoulder = 47,
    eBaseTypeCruiseBubble = 48,
    eBaseTypeTeleportBox = 49,
    eBaseTypeBusStop = 50,
    eBaseTypeTextBox = 51,
    eBaseTypeTalkBox = 52,
    eBaseTypeTaskBox = 53,
    eBaseTypeBoulderGenerator = 54,
    eBaseTypeNPCSettings = 55,
    eBaseTypeDiscoFloor = 56,
    eBaseTypeTaxi = 57,
    eBaseTypeHUD_model = 58,
    eBaseTypeHUD_font_meter = 59,
    eBaseTypeHUD_unit_meter = 60,
    eBaseTypeBungeeHook = 61,
    eBaseTypeCameraFly = 62,
    eBaseTypeTrackPhysics = 63,
    eBaseTypeZipLine = 64,
    eBaseTypeArena = 65,
    eBaseTypeDuplicator = 66,
    eBaseTypeLaserBeam = 67,
    eBaseTypeTurret = 68,
    eBaseTypeCameraTweak = 69,
    eBaseTypeSlideProps = 70,
    eBaseTypeHUD_text = 71,
    eBaseTypeReference = 72,
    eBaseTypeSpline = 73,
    eBaseTypeSoundGroup = 74,
    eBaseTypeSoundFX = 75,
    eBaseTypeKaboom_UNUSED = 76,
    eBaseTypeDestructibleAsset = 77,
    eBaseTypeFlameEmitter = 78,
    eBaseTypeGrapple = 79,
    eBaseTypeUIText = 80,
    eBaseTypeUIImage = 81,
    eBaseTypeUIModel = 82,
    eBaseTypeUIMotion = 83,
    eBaseTypeSceneSettingsAsset = 84,
    eBaseTypeTrainCar = 85,
    eBaseTypeTrainPathJunction = 86,
    eBaseTypeUIBox = 87,
    eBaseTypeNPCFormation = 88,
    eBaseTypeProjBomb = 89,
    eBaseTypeUIUserString = 90,
    eBaseTypeRumbleEffect = 91,
    eBaseTypeRumbleSphericalEmitter = 92,
    eBaseTypeRumbleBoxEmitter = 93,
    eBaseTypeUIImageWindow = 94,
    eBaseTypeSplinePath = 95,
    eBaseTypeOfficeMinigame = 96,
    eBaseTypeUIList = 97,
    eBaseTypeHangableObj = 98,
    eBaseTypeCar = 99,
    eBaseTypeWheel = 100,
    eBaseTypeLightning = 101,
    eBaseTypeLensFlareSource = 102,
    eBaseTypeLensFlareElement = 103,
    eBaseTypeStaticCameraAsset = 104,
    eBaseTypeSmokeEmitter = 105,
    eBaseTypeVentType = 106,
    eBaseTypeVent = 107,
    eBaseTypeWaterhose = 108,
    eBaseTypeRaceTimer = 109,
    eBaseTypeScreenFade = 110,
    eBaseTypeBulletMarkAsset = 111,
    eBaseTypeBulletTimeAsset = 112,
    eBaseTypeRingControl = 113,
    eBaseTypeRing = 114,
    eBaseTypeDashCameraSpline = 115,
    eBaseTypeWaterBody = 116,
    eBaseTypeProgressScript = 117,
    eBaseTypeTurn_UNUSED = 118,
    eBaseTypeLaunch = 119,
    eBaseTypeSpotlight = 120,
    eBaseTypeInPickup = 121,
    eBaseTypeNPCGroup = 122,
    eBaseTypeUIController = 123,
    eBaseTypeParticleGenerator = 124,
    eBaseTypeJSPExtraData = 125,
    eBaseTypeLift = 126,
    eBaseTypeUberLaser = 127,
    eBaseTypeNPCAdditionalObj = 128,
    eBaseTypeCameraRBandAsset = 129,
    eBaseTypeFlamethrower = 130,
    eBaseTypeRubbleGenerator = 131,
    eBaseTypeIcon = 132,
    eBaseTypeOmnidroidal = 133,
    eBaseTypeFunctionGenerator = 134,
    eBaseTypeGrass = 135,
    eBaseTypeNPCShield = 136,
    eBaseTypeCamPreset = 137,
    eBaseTypeSparkEmitter = 138,
    eBaseTypeTimedSplash = 139,
    eBaseTypeRubbleChunk = 140,
    eBaseTypeCameraCurve = 141,
    eBaseTypeLightEffectFlicker = 142,
    eBaseTypeLightEffectStrobe = 143,
    eBaseTypeCamTransitionTime = 144,
    eBaseTypeCamTransitionPath = 145,
    eBaseTypeNPCCustomAV = 146,
    eBaseTypeTextureHeader = 147,
    eBaseTypeIceBridge = 148,
    eBaseTypeNPCCoverPoint = 149,
    eBaseTypeSwitchLever = 150,
    eBaseTypeSwitchObject = 151,
    eBaseTypeCamBinaryPOI = 152,
    eBaseTypeScreenWarp = 153,
    eBaseTypeNavigationMesh = 154,
    eBaseTypeConversation = 155,
    eBaseTypeFreezableObject = 156,
    eBaseTypeFrozenProjectile = 157,
    eBaseTypeInterestPointer = 158,
    eBaseTypeCheckpoint = 159,
    eBaseTypeTightrope = 160,
    eBaseTypePoleSwing = 161,
    eBaseTypeSpringboard = 162,
    eBaseTypeCarryableObject = 163,
    eBaseTypeClimbableRope = 164,
    eBaseTypeCollidable = 165,
    eBaseTypeHeistLookoutPoint = 166,
    eBaseTypeHeistMovementPath = 167,
    eBaseTypeHeistGangMemberInterface = 168,
    eBaseTypePushableObject = 169,
    eBaseTypeHeistNPCDetectorInterface = 170,
    eBaseTypeDistractionPoint = 171,
    eBaseTypeMiniGameType1 = 172,
    eBaseTypeMiniGameDefendTheBase = 173,
    eBaseTypeHeistNPCDetectorViewBlocker = 174,
    eBaseTypeTask = 175,
    eBaseTypeMission = 176,
    eBaseTypePlayerLocationPlatform = 177,
    eBaseTypeMiniGameRatOnBall = 178,
    eBaseTypeMiniGamePufferoids = 179,
    eBaseTypeMiniGameGrapeStomper = 180,
    eBaseTypeMiniGameCongaLine = 181,
    eBaseTypeNPCManager = 182,
    eBaseTypeNPCEntity = 183,
    eBaseTypeHUDCompassSystem = 184,
    eBaseTypeHUDCompassObject = 185,
    eBaseTypeAnalogInputDeflection = 186,
    eBaseTypeAnalogInputDirection = 187,
    eBaseTypeAnalogInputTwiddler = 188,
    eBaseTypeCMGPourWidget = 189,
    eBaseTypeButtonMasherWidget = 190,
    eBaseTypeNPCWalls = 191,
    eBaseTypeRaftTrack = 192,
    eBaseTypeNPCGate = 193,
    eBaseTypePourStream = 194,
    eBaseTypeCount = 195,
};
static enum en_ZBASETYPE typ_lastBase; // size: 0x4, address: 0x80C08420
static int indyTallyLast; // size: 0x4, address: 0x80C08424
int DBG_Persist::LogFinalStats(const xSerial*, unsigned int, int)::skipEmpties; // size: 0x4, address: 0x80C08428
signed char DBG_Persist::LogFinalStats(const xSerial*, unsigned int, int)::localstatic4 guard; // size: 0x1, address: 0x80C0842C
int needToAddTweaks; // size: 0x4, address: 0x80C01420
static char __FUNCTION__[11]; // size: 0xB, address: 0x80C01424
// total size: 0x0
struct st_SERIAL_CLIENTINFO {};
// total size: 0x1C
struct xSerial {
    // Members
private:
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    struct st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// Range: 0x8015E3CC -> 0x8015EB9C
void zSceneSave(struct zScene * ent /* r26 */) {
    // Local variables
    long long t; // r25
    struct xSerial xser; // r1+0x8
    struct xSerial * s; // r29
    int i; // r25
    unsigned int serialSceneID; // r28
    int i; // r27
    struct xBase * b; // r26

    // References
    // -> static char __FUNCTION__[11];
    // -> struct xGlobals * xglobals;
    // -> struct zGlobals globals;
    // -> int logTally;
    // -> static float offsety;
    // -> static float offsetx;
    // -> int dumpBuffer;
}

// Range: 0x8015EB9C -> 0x8015ED04
void LogFinalStats(const struct xSerial * xser /* r30 */, unsigned int serialSceneID /* r4 */, int wasSaving /* r31 */) {
    // Local variables
    char nam_scn[16]; // r1+0x8
    int i; // r27

    // References
    // -> int logTally;
    // -> int DBG_Persist::LogFinalStats(const xSerial*, unsigned int, int)::skipEmpties;
    // -> static int cnt_saver[195];
    // -> signed char DBG_Persist::LogFinalStats(const xSerial*, unsigned int, int)::localstatic4 guard;
    // -> int dumpBuffer;
}

// Range: 0x8015ED04 -> 0x8015EDA8
void LogEachItem(const struct xSerial * xser /* r28 */, unsigned int aid_item /* r29 */) {
    // Local variables
    int diff; // r30

    // References
    // -> static int indyTallyLast;
    // -> struct xGlobals * xglobals;
    // -> int logEachItem;
}

// Range: 0x8015EDA8 -> 0x8015EDC8
void IncTypeCount(const struct xSerial * xser /* r0 */, int bt /* r0 */) {}

// Range: 0x8015EDC8 -> 0x8015EE00
void IncTypeCount(const struct xSerial * xser /* r0 */, enum en_ZBASETYPE bt /* r0 */) {
    // References
    // -> static int cnt_saver[195];
}

// Range: 0x8015EE00 -> 0x8015EEA8
void LogChkTypeSwitch(const struct xSerial * xser /* r27 */, enum en_ZBASETYPE bt /* r28 */) {
    // References
    // -> static enum en_ZBASETYPE typ_lastBase;
    // -> static int cnt_saver[195];
    // -> int logSwitches;
}

enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
// total size: 0x5C
struct SphereCollisionResults {
    // Members
    struct xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    int collisionFlags; // offset 0x10, size 0x4
    struct xVec3 contact; // offset 0x14, size 0xC
    struct xVec3 normal; // offset 0x20, size 0xC
    float collidingSphereRadius; // offset 0x2C, size 0x4
    unsigned int oid; // offset 0x30, size 0x4
    void * optr; // offset 0x34, size 0x4
    struct xModelInstance * mptr; // offset 0x38, size 0x4
    struct xJSPHeader * jsp; // offset 0x3C, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0x40, size 0x4
    enum xCollideSphereHitType hitTriangleType; // offset 0x44, size 0x4
    class xPlane triPlane; // offset 0x48, size 0x10
    int sphereIndex; // offset 0x58, size 0x4
};
// total size: 0xC
class zPlayerAction {
    // Members
protected:
    class zPlayerActionManager * manager; // offset 0x0, size 0x4
    struct zPlayer * player; // offset 0x4, size 0x4
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// total size: 0xC
class zPlayerActionManager {
    // Members
protected:
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
};
// total size: 0x24
struct PlayerStats {
    // Members
    int enemiesDefeated; // offset 0x0, size 0x4
    int meleeDamage; // offset 0x4, size 0x4
    int airMeleeDamage; // offset 0x8, size 0x4
    int rangeDamage; // offset 0xC, size 0x4
    int dodgeDamage; // offset 0x10, size 0x4
    int finishingMoves; // offset 0x14, size 0x4
    int damageTaken; // offset 0x18, size 0x4
    int biggestCombo; // offset 0x1C, size 0x4
    int timesDefeated; // offset 0x20, size 0x4
};
enum eBrainType {
    eBrainType_Unknown = 0,
    eBrainType_NPC_Thief = 1,
    eBrainType_NPC_Chef = 2,
    eBrainType_NPC_Alarmer = 3,
    eBrainType_NPC_Waiter = 4,
    eBrainType_CMG_StirringPlayer = 5,
    eBrainType_CMG_StirringRemy = 6,
    eBrainType_CMG_LeftArm = 7,
    eBrainType_CMG_RightArm = 8,
    eBrainType_CMG_PourNSwirl = 9,
    eBrainType_NPC_SpringBoard = 10,
    eBrainType_NPC_ContextSensitive = 11,
    eBrainType_NPC_AnimViewer = 12,
    eBrainType_NPC_SwarmOwl = 13,
    eBrainType_NPC_Simpleton = 14,
    eBrainType_NPC_InstaKill = 15,
    eBrainType_Player_Remy = 16,
    eBrainType_Player_HumanVehicle = 17,
    eBrainType_Player_Ratball = 18,
    eBrainType_Player_MG1 = 19,
    eBrainType_Player_MG2_RatOnball = 20,
    eBrainType_Player_MG3_Pufferoids = 21,
    eBrainType_Player_MG4_GrapeStomper = 22,
    eBrainType_Player_MG5_CongaLine = 23,
    eBrainType_Player_MG6_AvoidTheStuff = 24,
};
// total size: 0x24
struct config_data {
    // Members
    int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float color_red; // offset 0x8, size 0x4
    float color_green; // offset 0xC, size 0x4
    float color_blue; // offset 0x10, size 0x4
    float color_alpha; // offset 0x14, size 0x4
    float card_dist; // offset 0x18, size 0x4
    float zbias; // offset 0x1C, size 0x4
    int max_card_renders; // offset 0x20, size 0x4
};
// total size: 0x0
struct activity_data {};
// total size: 0x10
struct xFRect {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Static members
    static int activities_used; // size: 0x4
    static struct activity_data * activities[6]; // size: 0x18
    static struct activity_data * activity_buffer; // size: 0x4

    // Members
    struct activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x28
struct mblur_data {
    // Members
    struct config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0x8
class zPadAnalogControl {
    // Static members
    static int ANALOG_MAX; // size: 0x4
    static int ANALOG_MIN; // size: 0x4

    // Members
    class zPad * owner; // offset 0x0, size 0x4
    int analogIndex; // offset 0x4, size 0x4
};
// total size: 0x2
struct _tagPadAnalog {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_Enabled = 1,
    ePad_Total = 2,
};
// total size: 0x4
struct _tagiPad {
    // Members
    int port; // offset 0x0, size 0x4
};
// total size: 0x138
struct _tagxPad {
    // Members
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    struct _tagPadAnalog analog1; // offset 0x38, size 0x2
    struct _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    struct _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    struct analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x24
class zPad {
    // Static members
    static int MAX_PADS; // size: 0x4
    static int MAX_PORTS; // size: 0x4

    // Members
    unsigned char used; // offset 0x0, size 0x1
    unsigned char enable; // offset 0x1, size 0x1
    unsigned char triggered; // offset 0x2, size 0x1
    unsigned int key1; // offset 0x4, size 0x4
    unsigned int key2; // offset 0x8, size 0x4
    unsigned int key3; // offset 0xC, size 0x4
    int padPort; // offset 0x10, size 0x4
    class zPadAnalogControl analog1; // offset 0x14, size 0x8
    class zPadAnalogControl analog2; // offset 0x1C, size 0x8
};
// total size: 0x10
struct zPlayerCheckPoint {
    // Members
    struct xVec3 position; // offset 0x0, size 0xC
    float rotation; // offset 0xC, size 0x4
};
// total size: 0x8
struct AnalogStick {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x1
struct Buttons {
    // Members
    unsigned char jump : 1; // offset 0x0, size 0x1
    unsigned char actionMove : 1; // offset 0x0, size 0x1
    unsigned char contextMove : 1; // offset 0x0, size 0x1
    unsigned char otherMove : 1; // offset 0x0, size 0x1
};
// total size: 0x1C
class zPlayerInput {
    // Members
public:
    struct AnalogStick stick1; // offset 0x0, size 0x8
    struct AnalogStick stick2; // offset 0x8, size 0x8
    struct Buttons on; // offset 0x10, size 0x1
    struct Buttons pressed; // offset 0x11, size 0x1
    struct Buttons released; // offset 0x12, size 0x1
private:
    class zPad * mPad; // offset 0x14, size 0x4
    float mActionTimer; // offset 0x18, size 0x4
};
// total size: 0x10
struct /* @class$3151zScene_cpp */ {
    // Members
    float spring_len; // offset 0x0, size 0x4
    float spring_const; // offset 0x4, size 0x4
    float damp_const; // offset 0x8, size 0x4
    float vertical_offset; // offset 0xC, size 0x4
};
// total size: 0x180
struct zSlideCam : public xCam {
    // Members
    const struct xMat4x3 * target; // offset 0x140, size 0x4
    // total size: 0x10
    struct /* @class$3151zScene_cpp */ {
        // Members
        float spring_len; // offset 0x0, size 0x4
        float spring_const; // offset 0x4, size 0x4
        float damp_const; // offset 0x8, size 0x4
        float vertical_offset; // offset 0xC, size 0x4
    } cfg; // offset 0x144, size 0x10
    struct xVec3 curr_tgt_pos; // offset 0x154, size 0xC
    struct xVec3 prev_tgt_pos; // offset 0x160, size 0xC
    struct xVec3 cam_pos; // offset 0x16C, size 0xC
};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
};
// total size: 0x890
struct /* @class$2402zScene_cpp */ {
    // Static members
    static int POS_COUNT_MAX; // size: 0x4

    // Members
    unsigned char debugging; // offset 0x0, size 0x1
    struct xVec3 positions[180]; // offset 0x4, size 0x870
    struct xVec3 startPos; // offset 0x874, size 0xC
    struct xVec3 endPos; // offset 0x880, size 0xC
    int posCount; // offset 0x88C, size 0x4
};
enum ReticleOrder {
    ROR_First = 0,
    ROR_Last = 1,
    ROR_None = 2,
};
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_OOB = 4,
    CONTROL_OWNER_INTERACTION = 8,
    CONTROL_OWNER_TALK_BOX = 16,
    CONTROL_OWNER_BLAST_DOORS = 32,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_REWARDANIM = 4096,
};
enum ezNPCAttackerType {
    ezNPCAT_Melee = 0,
    ezNPCAT_Range = 1,
    ezNPCAT_All = 2,
    ezNPCAT_Total = 3,
};
// total size: 0x13A0
struct zPlayer : public zEnt {
    // Static members
    static int MAX_EXTRA_SPHERES; // size: 0x4
    static unsigned int BUTTON_DEFINITIONS[12]; // size: 0x30
    static char * BUTTON_NAMES[12]; // size: 0x30
    static unsigned int BUTTON_COUNT; // size: 0x4

    // Members
    class zPlayerActionManager actionManager; // offset 0xDC, size 0xC
    int index; // offset 0xE8, size 0x4
    void * __vptr$; // offset 0xEC, size 0x4
    struct xVec3 trigLastFramePos; // offset 0xF0, size 0xC
    struct xScene * sc; // offset 0xFC, size 0x4
    struct xMat4x3 lastmat; // offset 0x100, size 0x40
    struct PlayerStats playStats; // offset 0x140, size 0x24
    enum eBrainType brain_id; // offset 0x164, size 0x4
    struct xVec3 floor_pos; // offset 0x168, size 0xC
    struct xVec3 floor_normal; // offset 0x174, size 0xC
    struct xSphere extraSpheres[5]; // offset 0x180, size 0x50
    int numExtraSpheres; // offset 0x1D0, size 0x4
    int zPlayerFlags; // offset 0x1D4, size 0x4
    float collision_underneath_height; // offset 0x1D8, size 0x4
    float collision_underneath_time; // offset 0x1DC, size 0x4
    struct mblur_data * mblur; // offset 0x1E0, size 0x4
protected:
    class zPad * pad; // offset 0x1E4, size 0x4
    float slipFadeTimer; // offset 0x1E8, size 0x4
    int slide; // offset 0x1EC, size 0x4
    float slideTimer; // offset 0x1F0, size 0x4
    float controlOffTimer; // offset 0x1F4, size 0x4
    float controlOnTime; // offset 0x1F8, size 0x4
    unsigned int controlOff; // offset 0x1FC, size 0x4
    unsigned int controlOnEvent; // offset 0x200, size 0x4
    struct zPlayerCheckPoint checkPoint; // offset 0x204, size 0x10
    unsigned char cheatMode; // offset 0x214, size 0x1
    class zPlayerInput playerInput; // offset 0x218, size 0x1C
    struct xVec3 lastDeltaPos; // offset 0x234, size 0xC
    float update_dt; // offset 0x240, size 0x4
    float last_update_dt; // offset 0x244, size 0x4
    struct xVec3 update_motion; // offset 0x248, size 0xC
    struct xVec3 previous_position; // offset 0x254, size 0xC
    struct xVec3 predictRotate; // offset 0x260, size 0xC
    struct xVec3 predictTranslate; // offset 0x26C, size 0xC
    float predictAngV; // offset 0x278, size 0x4
    struct xVec3 predictCurrDir; // offset 0x27C, size 0xC
    float predictCurrVel; // offset 0x288, size 0x4
    struct zSlideCam * slideCam; // offset 0x28C, size 0x4
    struct xJSPHeader * floor_jsp; // offset 0x290, size 0x4
    struct xClumpCollBSPTriangle * floor_bspTriangle; // offset 0x294, size 0x4
    struct xVec3 floorNorm; // offset 0x298, size 0xC
    int slope; // offset 0x2A4, size 0x4
    float floor_collision_timer; // offset 0x2A8, size 0x4
    float floor_distance; // offset 0x2AC, size 0x4
    struct xEnt * floor_entity; // offset 0x2B0, size 0x4
    unsigned int floor_oid; // offset 0x2B4, size 0x4
    struct xSurface * floor_surface; // offset 0x2B8, size 0x4
    unsigned int collisionFlags; // offset 0x2BC, size 0x4
    unsigned char currentIsNearLedge; // offset 0x2C0, size 0x1
    unsigned char currentIsNearLedgeValid; // offset 0x2C1, size 0x1
    float fallingTime; // offset 0x2C4, size 0x4
    float idleAnimationTimer; // offset 0x2C8, size 0x4
    unsigned int lorezModelID; // offset 0x2CC, size 0x4
    struct xModelInstance * lorezModel; // offset 0x2D0, size 0x4
    struct xModelInstance * hirezModel; // offset 0x2D4, size 0x4
    struct zNPCAttackerData npcAttacker[3]; // offset 0x2D8, size 0x618
    class zNPCCommon * roundRobinMelee; // offset 0x8F0, size 0x4
    float roundRobinTimeOut; // offset 0x8F4, size 0x4
    float enemyKilledComboTimer; // offset 0x8F8, size 0x4
    int enemyKilledCombo; // offset 0x8FC, size 0x4
private:
    float depenetration_velocity; // offset 0x900, size 0x4
    struct xEntShadow entShadow_embedded; // offset 0x904, size 0x2C
    struct xShadowSimpleCache simpShadow_embedded; // offset 0x930, size 0xA4
    unsigned int loaded_assetid; // offset 0x9D4, size 0x4
    struct xEntDrive drv; // offset 0x9E0, size 0xC0
    unsigned short parametersSize; // offset 0xAA0, size 0x2
    struct xModelAssetParam * parameters; // offset 0xAA4, size 0x4
    struct xEnt * reticleTarget; // offset 0xAA8, size 0x4
    struct RpAtomic * reticleModel; // offset 0xAAC, size 0x4
    float reticleRot; // offset 0xAB0, size 0x4
    float reticleAlpha; // offset 0xAB4, size 0x4
    struct xMat4x3 reticleMat; // offset 0xAC0, size 0x40
    float idleSoundTimer; // offset 0xB00, size 0x4
    unsigned int oldSlidePen; // offset 0xB04, size 0x4
    // total size: 0x890
    struct /* @class$2402zScene_cpp */ {
        // Static members
        static int POS_COUNT_MAX; // size: 0x4

        // Members
        unsigned char debugging; // offset 0x0, size 0x1
        struct xVec3 positions[180]; // offset 0x4, size 0x870
        struct xVec3 startPos; // offset 0x874, size 0xC
        struct xVec3 endPos; // offset 0x880, size 0xC
        int posCount; // offset 0x88C, size 0x4
    } physicsDebug; // offset 0xB08, size 0x890
public:
    unsigned int * hitSoundsMap; // offset 0x1398, size 0x4
};
// Range: 0x8015EEA8 -> 0x8015EEE8
void Reset() {
    // References
    // -> static int indyTallyLast;
    // -> static enum en_ZBASETYPE typ_lastBase;
    // -> static int cnt_saver[195];
}

// Range: 0x8015EEE8 -> 0x8015F02C
void AddTweaks() {
    // Local variables
    const char * prefix; // r31
    char _buffer[128]; // r1+0x188
    char _buffer[128]; // r1+0x108
    char _buffer[128]; // r1+0x88
    char _buffer[128]; // r1+0x8

    // References
    // -> int logSwitches;
    // -> int logEachItem;
    // -> int logTally;
    // -> int dumpBuffer;
    // -> int needToAddTweaks;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C01430
// Range: 0x8015F02C -> 0x8015F7F0
void zSceneLoad(struct zScene * ent /* r27 */) {
    // Local variables
    long long t; // r28
    struct xSerial xser; // r1+0xC
    struct xSerial * s; // r30
    int sceneExist; // r1+0x8
    int i; // r28
    unsigned int serialSceneID; // r29
    unsigned short i; // r28
    struct xBase * b; // r27

    // References
    // -> static char __FUNCTION__[11];
    // -> struct xGlobals * xglobals;
    // -> struct zGlobals globals;
    // -> int logTally;
    // -> static float offsety;
    // -> static float oldOffsety;
    // -> static float offsetx;
    // -> static float oldOffsetx;
    // -> int dumpBuffer;
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C0143C
// Range: 0x8015F7F0 -> 0x8015F878
void zSceneBlastDoorReset() {
    // Local variables
    struct xBase * loseScript; // r31

    // References
    // -> static char __FUNCTION__[21];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80C01454
// Range: 0x8015F878 -> 0x8015FD40
void zSceneReset() {
    // Local variables
    long long t; // r29
    struct zScene * s; // r30
    int i; // r29
    int i; // r28
    struct _zEnv * env; // r0

    // References
    // -> struct zGlobals globals;
    // -> unsigned char gInSceneResetOrInit;
    // -> static char __FUNCTION__[12];
    // -> struct xGlobals * xglobals;
    // -> int gOccludeCount;
    // -> struct zLaserBeam * additional_lasers;
}

// total size: 0x18
class hud_element : public xBase {
    // Members
    class hud_element * _next; // offset 0x10, size 0x4
public:
    void * __vptr$; // offset 0x14, size 0x4
};
// total size: 0xC
class hud_system {
    // Members
    class hud_element * elements; // offset 0x0, size 0x4
    signed char hide_count; // offset 0x4, size 0x1
    unsigned char last_paused; // offset 0x5, size 0x1
public:
    void * __vptr$; // offset 0x8, size 0x4
};
// Range: 0x8015FD40 -> 0x8015FE0C
void zSceneStoreCheckPoint(unsigned int initialCameraID /* r28 */) {
    // Local variables
    struct zPlayerCheckPoint checkPoints[4]; // r1+0x8
    int i; // r29

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8015FE0C -> 0x8015FE30
void zSceneStoreCheckPoint(struct zPlayerCheckPoint * checkPoints /* r0 */, unsigned int initialCameraID /* r0 */) {}

// Range: 0x8015FE30 -> 0x8015FE74
static void ActivateCB(struct xBase * base /* r0 */) {}

// total size: 0x78
struct zNPCAssetIN2 : public xDynAsset {
    // Members
    struct xEntAsset ent_asset; // offset 0x10, size 0x50
    unsigned int navigation_mesh_id; // offset 0x60, size 0x4
    unsigned int npcFlags; // offset 0x64, size 0x4
    unsigned int respawnCounterID; // offset 0x68, size 0x4
    unsigned int settingsHashID; // offset 0x6C, size 0x4
    unsigned int interestPointerGroupID; // offset 0x70, size 0x4
    unsigned int lightKitID; // offset 0x74, size 0x4
};
// total size: 0x0
struct xModelAssetInfo {};
// total size: 0x4
struct instance_flags {
    // Members
    unsigned char living : 1; // offset 0x0, size 0x1
    unsigned char activated : 1; // offset 0x0, size 0x1
    unsigned char visibilityCull : 1; // offset 0x0, size 0x1
    unsigned int pad : 29; // offset 0x0, size 0x4
};
// total size: 0x28
struct zStoredSpawn {
    // Members
    int valid; // offset 0x0, size 0x4
    struct xBase * from; // offset 0x4, size 0x4
    struct xBase * to; // offset 0x8, size 0x4
    unsigned int toEvent; // offset 0xC, size 0x4
    float toParam[4]; // offset 0x10, size 0x10
    struct xBase * toParamWidget; // offset 0x20, size 0x4
    unsigned int toParamWidgetID; // offset 0x24, size 0x4
};
// total size: 0x98
class zNPCInstance : public xBase {
    // Members
protected:
    class zNPCBaseIN2 * npc_data; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    struct zNPCAssetIN2 * npc_asset; // offset 0x18, size 0x4
    int npc_asset_size; // offset 0x1C, size 0x4
    const struct xModelAssetInfo * model_asset; // offset 0x20, size 0x4
    struct xVec3 last_pos; // offset 0x24, size 0xC
    struct xVec3 last_orientation; // offset 0x30, size 0xC
    unsigned char canAttack; // offset 0x3C, size 0x1
    unsigned char canDetect; // offset 0x3D, size 0x1
    unsigned char canChase; // offset 0x3E, size 0x1
    unsigned char hasNuke; // offset 0x3F, size 0x1
    unsigned char ignoreAllDamage; // offset 0x40, size 0x1
    unsigned char inSpawnState; // offset 0x41, size 0x1
    unsigned char noMoreSpawning; // offset 0x42, size 0x1
    struct xVec3 moveRadiusCenter; // offset 0x44, size 0xC
    unsigned char hasManualMoveRadiusCenter; // offset 0x50, size 0x1
    struct xVec3 manualMoveRadiusCenter; // offset 0x54, size 0xC
    float moveRadius2; // offset 0x60, size 0x4
    float moveInnerRadius2; // offset 0x64, size 0x4
    struct instance_flags flags; // offset 0x68, size 0x4
public:
    void * __vptr$; // offset 0x6C, size 0x4
    struct zStoredSpawn storedSpawn; // offset 0x70, size 0x28
};
// total size: 0x8
struct zAnimFxSoundGroup {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
};
// total size: 0xE4
class zNPCBaseIN2 : public xEnt {
    // Members
protected:
    class zNPCInstance * inst; // offset 0xD8, size 0x4
public:
    void * __vptr$; // offset 0xDC, size 0x4
    unsigned char npc_selection; // offset 0xE0, size 0x1
};
// total size: 0x18
struct testNode {
    // Members
    unsigned char (* testFunction)(struct xEnt *, class behavior *, class behavior *); // offset 0x0, size 0x4
    class behavior * changeToBehavior; // offset 0x4, size 0x4
    struct testNode * next; // offset 0x8, size 0x4
    char * description; // offset 0xC, size 0x4
    float waitTime; // offset 0x10, size 0x4
    float remainingTime; // offset 0x14, size 0x4
};
// total size: 0x30
struct zTransientNodeData {
    // Members
    void * contextDataPtr[4]; // offset 0x0, size 0x10
    float contextDataF32[4]; // offset 0x10, size 0x10
    int contextDataS32[4]; // offset 0x20, size 0x10
};
enum GrabType {
    eGrabTypeRemyStanding = 0,
    eGrabTypeElastigirl = 1,
    eGrabTypeCount = 2,
};
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_EXPLOSION = 2,
    zHS_MELEE_HIGH = 3,
    zHS_MELEE_MID = 4,
    zHS_MELEE_LOW = 5,
    zHS_MELEE_BACK = 6,
    zHS_MELEE_DIZZY = 7,
    zHS_MELEE_MRI = 8,
    zHS_MELEE_FRO = 9,
    zHS_MELEE_NPC = 10,
    zHS_THROW = 11,
    zHS_PROJECTILE = 12,
    zHS_NUKE_MRI = 13,
    zHS_NUKE_FRO = 14,
    zHS_INCREDISLAM_LEVEL1 = 15,
    zHS_INCREDISLAM_LEVEL2 = 16,
    zHS_INCREDISLAM_LEVEL3 = 17,
    zHS_ICE_GLIDE_LEVEL1 = 18,
    zHS_ICE_GLIDE_LEVEL2 = 19,
    zHS_ICE_GLIDE_LEVEL3 = 20,
    zHS_DODGE_ROLL_LEVEL1 = 21,
    zHS_DODGE_ROLL_LEVEL2 = 22,
    zHS_DODGE_ROLL_LEVEL3 = 23,
    zHS_GOO = 24,
    zHS_FIRE = 25,
    zHS_LASERBEAM = 26,
    zHS_LEDGE_UP = 27,
    zHS_MELEE_UP = 28,
    zHS_LASER = 29,
    zHS_ENERGY = 30,
    zHS_SURFACE = 31,
    zHS_WATER = 32,
    zHS_DEATHPLANE = 33,
    zHS_KNOCKBACK = 34,
    zHS_INFINITE_FALL = 35,
    zHS_INCREDISLAM_FALL_LEVEL1 = 36,
    zHS_INCREDISLAM_FALL_LEVEL2 = 37,
    zHS_INCREDISLAM_FALL_LEVEL3 = 38,
    zHS_PUNCH_MRI_1_LEVEL1 = 39,
    zHS_PUNCH_MRI_1_LEVEL2 = 40,
    zHS_PUNCH_MRI_1_LEVEL3 = 41,
    zHS_PUNCH_MRI_2_LEVEL1 = 42,
    zHS_PUNCH_MRI_2_LEVEL2 = 43,
    zHS_PUNCH_MRI_2_LEVEL3 = 44,
    zHS_PUNCH_MRI_3_LEVEL1 = 45,
    zHS_PUNCH_MRI_3_LEVEL2 = 46,
    zHS_PUNCH_MRI_3_LEVEL3 = 47,
    zHS_PUNCH_MRI_4_LEVEL1 = 48,
    zHS_PUNCH_MRI_4_LEVEL2 = 49,
    zHS_PUNCH_MRI_4_LEVEL3 = 50,
    zHS_PUNCH_FRO_1_LEVEL1 = 51,
    zHS_PUNCH_FRO_1_LEVEL2 = 52,
    zHS_PUNCH_FRO_1_LEVEL3 = 53,
    zHS_PUNCH_FRO_2_LEVEL1 = 54,
    zHS_PUNCH_FRO_2_LEVEL2 = 55,
    zHS_PUNCH_FRO_2_LEVEL3 = 56,
    zHS_PUNCH_FRO_3_LEVEL1 = 57,
    zHS_PUNCH_FRO_3_LEVEL2 = 58,
    zHS_PUNCH_FRO_3_LEVEL3 = 59,
    zHS_PUNCH_FRO_4_LEVEL1 = 60,
    zHS_PUNCH_FRO_4_LEVEL2 = 61,
    zHS_PUNCH_FRO_4_LEVEL3 = 62,
    zHS_ENEMY_DAMAGE = 63,
    zHS_ENEMY_FLYBACK = 64,
    zHS_COUNT = 65,
    zHS_FORCE_INT = -1,
};
enum zHitTarget {
    zHT_GENERAL = 0,
    zHT_FRONT = 1,
    zHT_BACK = 2,
    zHT_LEFT = 3,
    zHT_RIGHT = 4,
    zHT_ENTITY = 5,
    zHT_ENV = 6,
    zHT_CRITICAL = 7,
    zHT_COUNT = 8,
};
// total size: 0x38
struct zCombatDamageInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    struct xBase * from; // offset 0x4, size 0x4
    int damage; // offset 0x8, size 0x4
    enum zHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    struct xVec3 knockback; // offset 0x14, size 0xC
    struct xVec3 hitLocation; // offset 0x20, size 0xC
    struct xVec3 direction; // offset 0x2C, size 0xC
};
// total size: 0x2C
class behavior {
    // Members
protected:
    struct xEnt * owner; // offset 0x0, size 0x4
public:
    void * __vptr$; // offset 0x4, size 0x4
protected:
    struct testNode testList; // offset 0x8, size 0x18
    struct zTransientNodeData * transientData; // offset 0x20, size 0x4
public:
    unsigned int type; // offset 0x24, size 0x4
    unsigned int behaviorFlags; // offset 0x28, size 0x4
};
// total size: 0x30
class zBehaviorImplementation : public behavior {
    // Members
protected:
    class zNPCCommon * owner; // offset 0x2C, size 0x4
};
// total size: 0x44
class move : public zBehaviorImplementation {
    // Members
protected:
    float turn_speed; // offset 0x30, size 0x4
    float move_speed; // offset 0x34, size 0x4
    float min_speed; // offset 0x38, size 0x4
    float acceleration; // offset 0x3C, size 0x4
    float speed; // offset 0x40, size 0x4
};
// total size: 0x54
class zNPCMove : public move {
    // Members
    struct xVec3 last_destination; // offset 0x44, size 0xC
    float cos_min_move_angle; // offset 0x50, size 0x4
};
// total size: 0x5C
class zNPCCommonMoveToTransient : public zNPCMove {
    // Members
protected:
    int movingState; // offset 0x54, size 0x4
    float closeEnoughToTargetDist; // offset 0x58, size 0x4
};
// total size: 0x34
class npc_nuke : public zBehaviorImplementation {
    // Members
public:
    float nukeTimer; // offset 0x30, size 0x4
};
// total size: 0x34
class zNPCCommonNukeTransient : public npc_nuke {};
// total size: 0x30
class zNPCCommonAnimTest : public zBehaviorImplementation {};
// total size: 0x34
class zNPCCommonPlayTaunt : public zBehaviorImplementation {
    // Members
public:
    float playTimer; // offset 0x30, size 0x4
};
// total size: 0x3C
struct zNPCCustomAVAsset : public xDynAsset {
    // Static members
    static int VERSION; // size: 0x4

    // Members
    unsigned int animID; // offset 0x10, size 0x4
    float animDelay; // offset 0x14, size 0x4
    unsigned int soundGroupID; // offset 0x18, size 0x4
    float soundDelay; // offset 0x1C, size 0x4
    unsigned char waitOnSound; // offset 0x20, size 0x1
    float loopTime; // offset 0x24, size 0x4
    unsigned int faceTargetID; // offset 0x28, size 0x4
    float animBlendTime; // offset 0x2C, size 0x4
    float speedMin; // offset 0x30, size 0x4
    float speedMax; // offset 0x34, size 0x4
    unsigned char randomStartTime; // offset 0x38, size 0x1
};
enum eCustomAVState {
    eCUSTOMAVSTATE_Waiting = 0,
    eCUSTOMAVSTATE_Playing = 1,
    eCUSTOMAVSTATE_Looping = 2,
    eCUSTOMAVSTATE_Finished = 3,
};
// total size: 0x34
class zNPCCustomAV : public xBase {
    // Members
protected:
    struct zNPCCustomAVAsset * asset; // offset 0x10, size 0x4
    struct xMovePointAsset * movepointAsset; // offset 0x14, size 0x4
    float animDelay; // offset 0x18, size 0x4
    float soundDelay; // offset 0x1C, size 0x4
    float animLoopTime; // offset 0x20, size 0x4
    enum eCustomAVState animState; // offset 0x24, size 0x4
    enum eCustomAVState soundState; // offset 0x28, size 0x4
    enum iSndGroupHandle soundGroupHandle; // offset 0x2C, size 0x4
    enum xSndHandle soundHandle; // offset 0x30, size 0x4
};
// total size: 0x5C
class zNPCCommonPlayCustomTransient : public zNPCMove {
    // Members
public:
    class zNPCCustomAV * customAV; // offset 0x54, size 0x4
    int exitOntoNavmesh; // offset 0x58, size 0x4
};
// total size: 0x2C
struct zNPCInterestPointerAsset : public xDynAsset {
    // Members
    struct xVec3 location; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
    unsigned int interestType; // offset 0x28, size 0x4
};
// total size: 0x18
class zNPCInterestPointer : public xBase {
    // Members
public:
    struct zNPCInterestPointerAsset * interestPointerAsset; // offset 0x10, size 0x4
protected:
    int seized; // offset 0x14, size 0x4
};
// total size: 0x6C
class zNPCCommonInterestingIdle : public zNPCMove {
    // Members
protected:
    unsigned char firstUpdate; // offset 0x54, size 0x1
    unsigned char arrivedAtInterestPointer; // offset 0x55, size 0x1
    unsigned int idleAnimID; // offset 0x58, size 0x4
    unsigned int movementAnimID; // offset 0x5C, size 0x4
    float timeInIdle; // offset 0x60, size 0x4
    float timeElapsedInIdle; // offset 0x64, size 0x4
    class zNPCInterestPointer * interestPointer; // offset 0x68, size 0x4
};
// total size: 0x4
struct /* @class$2958zScene_cpp */ {
    // Members
    unsigned char human : 1; // offset 0x0, size 0x1
    unsigned char cast_shadow : 1; // offset 0x0, size 0x1
    unsigned char complex_shadow : 1; // offset 0x0, size 0x1
    unsigned char dying : 1; // offset 0x0, size 0x1
    unsigned char not_throw_target : 1; // offset 0x0, size 0x1
    unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
    unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
    unsigned char carried : 1; // offset 0x0, size 0x1
    unsigned char invincible : 1; // offset 0x1, size 0x1
    unsigned char firstUpdate : 1; // offset 0x1, size 0x1
    unsigned char noDamageSmoke : 1; // offset 0x1, size 0x1
    unsigned char pad2 : 5; // offset 0x1, size 0x1
    unsigned char pad3 : 8; // offset 0x2, size 0x1
    unsigned char old_chkby : 8; // offset 0x3, size 0x1
};
// total size: 0x20
struct zDebugStoredEvents {
    // Members
    long long storedTime; // offset 0x0, size 0x8
    struct xBase * from; // offset 0x8, size 0x4
    struct xBase * to; // offset 0xC, size 0x4
    unsigned int to_event; // offset 0x10, size 0x4
    float * to_param; // offset 0x14, size 0x4
    struct xBase * to_param_widget; // offset 0x18, size 0x4
};
// total size: 0x108
struct zDebugStoredAnimChanges {
    // Members
    long long storedTime; // offset 0x0, size 0x8
    char animName[256]; // offset 0x8, size 0x100
};
// total size: 0x0
class zNPCNavigate {};
// total size: 0x14
struct behavior_node {
    // Members
    int priority; // offset 0x0, size 0x4
    class behavior * data; // offset 0x4, size 0x4
    struct behavior_node * next; // offset 0x8, size 0x4
    struct behavior_node * previous; // offset 0xC, size 0x4
    float delay; // offset 0x10, size 0x4
};
// total size: 0x34
struct zTransientNode {
    // Members
    class behavior * transient; // offset 0x0, size 0x4
    struct zTransientNodeData contextData; // offset 0x4, size 0x30
};
// total size: 0x84
class zBehaviorManager {
    // Members
protected:
    struct behavior_node behaviorList; // offset 0x0, size 0x14
    struct behavior_node * behaviorEndOfList; // offset 0x14, size 0x4
    class behavior * behaviorCurrentNonTransient; // offset 0x18, size 0x4
    class behavior * behaviorDefault; // offset 0x1C, size 0x4
    class behavior * behaviorDamage; // offset 0x20, size 0x4
    class behavior * behaviorProjectile; // offset 0x24, size 0x4
    class behavior * behaviorCarry; // offset 0x28, size 0x4
    class behavior * behaviorThrow; // offset 0x2C, size 0x4
    class behavior * behaviorFrozen; // offset 0x30, size 0x4
    class behavior * behaviorThaw; // offset 0x34, size 0x4
    class behavior * behaviorNuke; // offset 0x38, size 0x4
    class behavior * behaviorFrozenCarry; // offset 0x3C, size 0x4
    class behavior * behaviorFrozenThrow; // offset 0x40, size 0x4
    class behavior * behaviorDeath; // offset 0x44, size 0x4
    class behavior * behaviorBlock; // offset 0x48, size 0x4
    class behavior * behaviorBlockHit; // offset 0x4C, size 0x4
    class behavior * behaviorEscapeNoEnter; // offset 0x50, size 0x4
    class behavior * behaviorWaitNoEnter; // offset 0x54, size 0x4
    class behavior * behaviorJump; // offset 0x58, size 0x4
    class behavior * behaviorCover; // offset 0x5C, size 0x4
    class behavior * behaviorShield; // offset 0x60, size 0x4
    class behavior * behaviorRangeAttack; // offset 0x64, size 0x4
    class behavior * behaviorFrozenDamage; // offset 0x68, size 0x4
    struct zTransientNode * transientBehavior; // offset 0x6C, size 0x4
    int transientTotal; // offset 0x70, size 0x4
    int transientMax; // offset 0x74, size 0x4
    float inStateTimer; // offset 0x78, size 0x4
    unsigned int enteredBehavior; // offset 0x7C, size 0x4
public:
    void * __vptr$; // offset 0x80, size 0x4
};
// total size: 0x0
struct zNPCBlurInstance {};
// total size: 0x4
struct /* @class$2470zScene_cpp */ {
    // Members
    float u; // offset 0x0, size 0x4
};
// total size: 0x10
struct /* @class$2471zScene_cpp */ {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    unsigned char forward; // offset 0xC, size 0x1
};
union MountData {
    // total size: 0x4
    struct /* @class$2470zScene_cpp */ {
        // Members
        float u; // offset 0x0, size 0x4
    } tightrope; // offset 0x0, size 0x4
    // total size: 0x10
    struct /* @class$2471zScene_cpp */ {
        // Members
        struct xVec3 pos; // offset 0x0, size 0xC
        unsigned char forward; // offset 0xC, size 0x1
    } poleSwing; // offset 0x0, size 0x10
};
enum zContextObjectType {
    ezContextObjectType_Tightrope = 0,
    ezContextObjectType_PoleSwing = 1,
    ezContextObjectType_ClimbableRope = 2,
    ezContextObjectType_Count = 3,
};
// total size: 0x14
class zContextObject : public xBase {
    // Members
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x1
class bit_array {
    // Members
    unsigned char bytes[1]; // offset 0x0, size 0x1
};
// total size: 0x1C
class zContextObjectManager {
    // Members
protected:
    union MountData mountData; // offset 0x0, size 0x10
    class zContextObject * currentObject; // offset 0x10, size 0x4
    unsigned char mounted; // offset 0x14, size 0x1
    unsigned char attemptContextMove; // offset 0x15, size 0x1
    class bit_array transition; // offset 0x16, size 0x1
    unsigned int animStateID; // offset 0x18, size 0x4
};
enum LedgeState {
    LedgeState_None = 0,
    LedgeState_JumpInterp = 1,
    LedgeState_Grab = 2,
    LedgeState_Count = 3,
    LedgeState_ForceSize = 2147483647,
};
// total size: 0x4
struct /* @class$2472zScene_cpp */ {
    // Members
    unsigned char hasGrabbedLedge : 1; // offset 0x0, size 0x1
    unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
    unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
    unsigned int pad : 27; // offset 0x0, size 0x4
};
// total size: 0x3C
struct LedgeGrabParams {
    // Members
    enum LedgeState state; // offset 0x0, size 0x4
    // total size: 0x4
    struct /* @class$2472zScene_cpp */ {
        // Members
        unsigned char hasGrabbedLedge : 1; // offset 0x0, size 0x1
        unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
        unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
        unsigned int pad : 27; // offset 0x0, size 0x4
    } flags; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    struct xVec3 playerToLedge; // offset 0xC, size 0xC
    struct xVec3 player_bound_pos; // offset 0x18, size 0xC
    struct xVec3 grab_position; // offset 0x24, size 0xC
    struct xVec3 flipUpTrans; // offset 0x30, size 0xC
};
// total size: 0x8
struct /* @class$2469zScene_cpp */ {
    // Members
    float time; // offset 0x0, size 0x4
    signed short damageValue; // offset 0x4, size 0x2
};
// total size: 0x7C
class zPlayerOneLinerData {
    // Static members
    static int DAMAGE_RECORD_MAX; // size: 0x4

    // Members
protected:
    int currentDamageIndex; // offset 0x0, size 0x4
    int killCount; // offset 0x4, size 0x4
    // total size: 0x8
    struct /* @class$2469zScene_cpp */ {
        // Members
        float time; // offset 0x0, size 0x4
        signed short damageValue; // offset 0x4, size 0x2
    } damageRecord[14]; // offset 0x8, size 0x70
    struct zPlayer * player; // offset 0x78, size 0x4
};
// total size: 0x1C
struct FootLockInfo {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
    int bone; // offset 0xC, size 0x4
    struct xVec3 lockPos; // offset 0x10, size 0xC
};
// total size: 0x18
struct zSurfMatFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
// total size: 0x8
struct zSurfColorFX {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0xC
struct zSurfTextureAnim {
    // Members
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x60
struct zSurfUVFX {
    // Members
    int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    struct xVec3 trans; // offset 0xC, size 0xC
    struct xVec3 trans_spd; // offset 0x18, size 0xC
    struct xVec3 scale; // offset 0x24, size 0xC
    struct xVec3 scale_spd; // offset 0x30, size 0xC
    struct xVec3 min; // offset 0x3C, size 0xC
    struct xVec3 max; // offset 0x48, size 0xC
    struct xVec3 minmax_spd; // offset 0x54, size 0xC
};
// total size: 0x130
struct zSurfAssetBase : public xBaseAsset {
    // Members
    unsigned char game_damage_type; // offset 0x8, size 0x1
    unsigned char game_sticky; // offset 0x9, size 0x1
    unsigned char game_damage_flags; // offset 0xA, size 0x1
    unsigned char surf_type; // offset 0xB, size 0x1
    unsigned char phys_pad; // offset 0xC, size 0x1
    unsigned char sld_start; // offset 0xD, size 0x1
    unsigned char sld_stop; // offset 0xE, size 0x1
    unsigned char phys_flags; // offset 0xF, size 0x1
    float friction; // offset 0x10, size 0x4
    struct zSurfMatFX matfx; // offset 0x14, size 0x18
    struct zSurfColorFX colorfx; // offset 0x2C, size 0x8
    unsigned int texture_anim_flags; // offset 0x34, size 0x4
    struct zSurfTextureAnim texture_anim[2]; // offset 0x38, size 0x18
    unsigned int uvfx_flags; // offset 0x50, size 0x4
    struct zSurfUVFX uvfx[2]; // offset 0x54, size 0xC0
    unsigned char on; // offset 0x114, size 0x1
    unsigned char surf_pad[3]; // offset 0x115, size 0x3
    float oob_delay; // offset 0x118, size 0x4
    float walljump_scale_xz; // offset 0x11C, size 0x4
    float walljump_scale_y; // offset 0x120, size 0x4
    float damage_timer; // offset 0x124, size 0x4
    float damage_bounce; // offset 0x128, size 0x4
    unsigned int impact_sound; // offset 0x12C, size 0x4
};
// total size: 0x10
struct zFootstepsData {
    // Members
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
};
// total size: 0xC
struct zHitDecalData {
    // Members
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0x1B8
struct zSurfAssetIN : public zSurfAssetBase {
    // Members
    unsigned char dash_impact_type; // offset 0x130, size 0x1
    float dash_impact_throw_back; // offset 0x134, size 0x4
    float dash_spray_magnitude; // offset 0x138, size 0x4
    float dash_cool_rate; // offset 0x13C, size 0x4
    float dash_cool_amount; // offset 0x140, size 0x4
    float dash_pass; // offset 0x144, size 0x4
    float dash_ramp_max_distance; // offset 0x148, size 0x4
    float dash_ramp_min_distance; // offset 0x14C, size 0x4
    float dash_ramp_key_speed; // offset 0x150, size 0x4
    float dash_ramp_height; // offset 0x154, size 0x4
    unsigned int dash_ramp_target_movepoint_id; // offset 0x158, size 0x4
    int damage_amount; // offset 0x15C, size 0x4
    enum zHitSource damage_type; // offset 0x160, size 0x4
    struct zFootstepsData off_surface; // offset 0x164, size 0x10
    struct zFootstepsData on_surface; // offset 0x174, size 0x10
    struct zHitDecalData hit_decal_data[3]; // offset 0x184, size 0x24
    float off_surface_time; // offset 0x1A8, size 0x4
    unsigned char swimmable_surface; // offset 0x1AC, size 0x1
    unsigned char dash_fall; // offset 0x1AD, size 0x1
    unsigned char need_button_press; // offset 0x1AE, size 0x1
    unsigned char dash_attach; // offset 0x1AF, size 0x1
    unsigned char footstep_decals; // offset 0x1B0, size 0x1
    unsigned char pad1; // offset 0x1B1, size 0x1
    unsigned char pad2; // offset 0x1B2, size 0x1
    unsigned char pad3; // offset 0x1B3, size 0x1
    unsigned char pad4; // offset 0x1B4, size 0x1
    unsigned char driving_surface_type; // offset 0x1B5, size 0x1
};
// total size: 0x10
struct zFootstepDetect {
    // Members
    struct xVec3 last_emit_position; // offset 0x0, size 0xC
    unsigned char was_lifted; // offset 0xC, size 0x1
};
// total size: 0x0
class zDecalEmitterList {};
// total size: 0x14
struct xPECircle {
    // Members
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    struct xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x4
struct xPESphere {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x8
struct xPERect {
    // Members
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x1C
struct xPELine {
    // Members
    struct xVec3 pos1; // offset 0x0, size 0xC
    struct xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x4
struct xPEVolume {
    // Members
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
struct xPEOffsetPoint {
    // Members
    struct xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0xC
struct xPEVCyl {
    // Members
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
struct xPEEntBone {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    struct xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0xC
struct xPEEntBound {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x54
struct xParEmitterAsset : public xBaseAsset {
    // Members
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        struct xPECircle e_circle; // offset 0x10, size 0x14
        struct xPESphere e_sphere; // offset 0x10, size 0x4
        struct xPERect e_rect; // offset 0x10, size 0x8
        struct xPELine e_line; // offset 0x10, size 0x1C
        struct xPEVolume e_volume; // offset 0x10, size 0x4
        struct xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        struct xPEVCyl e_vcyl; // offset 0x10, size 0xC
        struct xPEEntBone e_entbone; // offset 0x10, size 0x18
        struct xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    struct xVec3 pos; // offset 0x30, size 0xC
    struct xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0x70
struct xPar {
    // Members
    struct xPar * m_next; // offset 0x0, size 0x4
    struct xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    struct xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    struct xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    struct xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
    unsigned int m_sortID; // offset 0x60, size 0x4
    float m_dist2Camera; // offset 0x64, size 0x4
    unsigned int pad[2]; // offset 0x68, size 0x8
};
// total size: 0x8
struct xParCmdAsset {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
// total size: 0x24
struct xParCmdTex : public xParCmdAsset {
    // Members
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
// total size: 0x24
struct xParGroup {
    // Members
    struct xPar * m_root; // offset 0x0, size 0x4
    struct xPar * m_dead; // offset 0x4, size 0x4
    int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    struct xParGroup * m_next; // offset 0x14, size 0x4
    struct xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, struct xParGroup *); // offset 0x1C, size 0x4
    struct xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
// total size: 0x14
struct xParInterp {
    // Members
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x138
struct xParEmitterPropsAsset : public xBaseAsset {
    // Members
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        struct xParInterp rate; // offset 0xC, size 0x14
        struct xParInterp value[1]; // offset 0xC, size 0x14
    };
    struct xParInterp life; // offset 0x20, size 0x14
    struct xParInterp size_birth; // offset 0x34, size 0x14
    struct xParInterp size_death; // offset 0x48, size 0x14
    struct xParInterp color_birth[4]; // offset 0x5C, size 0x50
    struct xParInterp color_death[4]; // offset 0xAC, size 0x50
    struct xParInterp vel_scale; // offset 0xFC, size 0x14
    struct xParInterp vel_angle; // offset 0x110, size 0x14
    struct xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
// total size: 0x20
struct xModelTag {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x24
struct xParSysAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned int parentParSysID; // offset 0xC, size 0x4
    unsigned int textureID; // offset 0x10, size 0x4
    unsigned char pad; // offset 0x14, size 0x1
    unsigned char priority; // offset 0x15, size 0x1
    unsigned short maxPar; // offset 0x16, size 0x2
    unsigned char renderFunc; // offset 0x18, size 0x1
    unsigned char renderSrcBlendMode; // offset 0x19, size 0x1
    unsigned char renderDstBlendMode; // offset 0x1A, size 0x1
    unsigned char cmdCount; // offset 0x1B, size 0x1
    unsigned int cmdSize; // offset 0x1C, size 0x4
    unsigned int parFlags; // offset 0x20, size 0x4
};
// total size: 0x8
struct xParCmd {
    // Members
    unsigned int flag; // offset 0x0, size 0x4
    struct xParCmdAsset * tasset; // offset 0x4, size 0x4
};
// total size: 0x14
struct xParCmdMove : public xParCmdAsset {
    // Members
    struct xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x14
struct xParCmdMoveRandom : public xParCmdAsset {
    // Members
    struct xVec3 dim; // offset 0x8, size 0xC
};
// total size: 0x14
struct xParCmdMoveRandomPar : public xParCmdAsset {
    // Members
    struct xVec3 dim; // offset 0x8, size 0xC
};
// total size: 0x18
struct xParCmdScale3rdPolyReg : public xParCmdAsset {
    // Members
    float constant; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float a2; // offset 0x10, size 0x4
    float a3; // offset 0x14, size 0x4
};
// total size: 0x18
struct xParCmdAlpha3rdPolyReg : public xParCmdAsset {
    // Members
    float constant; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float a2; // offset 0x10, size 0x4
    float a3; // offset 0x14, size 0x4
};
// total size: 0xC
struct xParCmdClipVolumes : public xParCmdAsset {
    // Members
    int unused; // offset 0x8, size 0x4
};
// total size: 0xC
struct xParCmdSmokeAlpha : public xParCmdAsset {
    // Members
    int type; // offset 0x8, size 0x4
};
// total size: 0x10
struct xParCmdDamagePlayer : public xParCmdAsset {
    // Members
    int damage; // offset 0x8, size 0x4
    int granular; // offset 0xC, size 0x4
};
// total size: 0xC
struct xParCmdScale : public xParCmdAsset {
    // Members
    int type; // offset 0x8, size 0x4
};
// total size: 0xC
struct xParCmdAnimalMagentism : public xParCmdAsset {
    // Members
    float magnetism; // offset 0x8, size 0x4
};
// total size: 0x20
struct xParCmdRotPar : public xParCmdAsset {
    // Members
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0xC
struct xParCmdApplyWind : public xParCmdAsset {
    // Members
    float strength; // offset 0x8, size 0x4
};
// total size: 0x10
struct xParCmdPlayerCollision : public xParCmdAsset {
    // Members
    float min; // offset 0x8, size 0x4
    float max; // offset 0xC, size 0x4
};
// total size: 0x14
struct xParCmdRandomVelocityPar : public xParCmdAsset {
    // Members
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
};
// total size: 0x14
struct xParCmdAccelerate : public xParCmdAsset {
    // Members
    struct xVec3 acc; // offset 0x8, size 0xC
};
// total size: 0x8
struct xParCmdVelocityApply : public xParCmdAsset {};
// total size: 0x2C
struct xParCmdJet : public xParCmdAsset {
    // Members
    struct xVec3 center; // offset 0x8, size 0xC
    struct xVec3 acc; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float radiusSqr; // offset 0x28, size 0x4
};
// total size: 0xC
struct xParCmdKillOld : public xParCmdAsset {
    // Members
    float ageMax; // offset 0x8, size 0x4
};
// total size: 0x10
struct xParCmdKillSlow : public xParCmdAsset {
    // Members
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
// total size: 0x10
struct xParCmdKillDistance : public xParCmdAsset {
    // Members
    float dSqr; // offset 0x8, size 0x4
    unsigned int kill_greater_than; // offset 0xC, size 0x4
};
// total size: 0xC
struct xParCmdAge : public xParCmdAsset {
    // Members
    float age_rate; // offset 0x8, size 0x4
};
// total size: 0x10
struct xParCmdFollow : public xParCmdAsset {
    // Members
    float gravity; // offset 0x8, size 0x4
    float epsilon; // offset 0xC, size 0x4
};
// total size: 0x2C
struct xParCmdOrbitLine : public xParCmdAsset {
    // Members
    struct xVec3 p; // offset 0x8, size 0xC
    struct xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
// total size: 0x20
struct xParCmdOrbitPoint : public xParCmdAsset {
    // Members
    struct xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
// total size: 0x14
struct xParCmdApplyCamMat : public xParCmdAsset {
    // Members
    struct xVec3 apply; // offset 0x8, size 0xC
};
// total size: 0x20
struct xParCmdRotateAround : public xParCmdAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
// total size: 0x18
struct xParCmdTexAnim : public xParCmdAsset {
    // Members
    unsigned char anim_mode; // offset 0x8, size 0x1
    unsigned char anim_wrap_mode; // offset 0x9, size 0x1
    unsigned char pad_anim; // offset 0xA, size 0x1
    unsigned char throttle_spd_less_than; // offset 0xB, size 0x1
    float throttle_spd_sqr; // offset 0xC, size 0x4
    float throttle_time; // offset 0x10, size 0x4
    float throttle_time_elapsed; // offset 0x14, size 0x4
};
// total size: 0x1C
struct xParCmdCustom : public xParCmdAsset {
    // Members
    unsigned int user_id; // offset 0x8, size 0x4
    float user_val[4]; // offset 0xC, size 0x10
};
// total size: 0x10
struct xParCmdCollideFall : public xParCmdAsset {
    // Members
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
// total size: 0x14
struct xParCmdCollideFallSticky : public xParCmdCollideFall {
    // Members
    float sticky; // offset 0x10, size 0x4
};
// total size: 0xC
struct xParCmdDampenData : public xParCmdAsset {
    // Members
    float dampSpeed; // offset 0x8, size 0x4
};
// total size: 0x18
struct xParCmdAlphaInOutData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
};
// total size: 0x18
struct xParCmdSizeInOutData : public xParCmdAsset {
    // Members
    float custSize[4]; // offset 0x8, size 0x10
};
// total size: 0x30
struct xParCmdShaperData : public xParCmdAsset {
    // Members
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
union xParCmdAny {
    struct xParCmdMove Move; // offset 0x0, size 0x14
    struct xParCmdMoveRandom MoveRandom; // offset 0x0, size 0x14
    struct xParCmdMoveRandomPar MoveRandomPar; // offset 0x0, size 0x14
    struct xParCmdScale3rdPolyReg Scale3rdPolyReg; // offset 0x0, size 0x18
    struct xParCmdAlpha3rdPolyReg Alpha3rdPolyReg; // offset 0x0, size 0x18
    struct xParCmdClipVolumes ClipVolumes; // offset 0x0, size 0xC
    struct xParCmdSmokeAlpha SmokeAlpha; // offset 0x0, size 0xC
    struct xParCmdDamagePlayer DamagePlayer; // offset 0x0, size 0x10
    struct xParCmdScale Scale; // offset 0x0, size 0xC
    struct xParCmdAnimalMagentism AnimalMagentism; // offset 0x0, size 0xC
    struct xParCmdRotPar RotPar; // offset 0x0, size 0x20
    struct xParCmdApplyWind ApplyWind; // offset 0x0, size 0xC
    struct xParCmdPlayerCollision PlayerCollision; // offset 0x0, size 0x10
    struct xParCmdRandomVelocityPar RandomVelocityPar; // offset 0x0, size 0x14
    struct xParCmdAccelerate Accelerate; // offset 0x0, size 0x14
    struct xParCmdVelocityApply VelocityApply; // offset 0x0, size 0x8
    struct xParCmdJet Jet; // offset 0x0, size 0x2C
    struct xParCmdKillOld KillOld; // offset 0x0, size 0xC
    struct xParCmdKillSlow KillSlow; // offset 0x0, size 0x10
    struct xParCmdKillDistance KillDistance; // offset 0x0, size 0x10
    struct xParCmdAge Age; // offset 0x0, size 0xC
    struct xParCmdFollow Follow; // offset 0x0, size 0x10
    struct xParCmdOrbitLine OrbitLine; // offset 0x0, size 0x2C
    struct xParCmdOrbitPoint OrbitPoint; // offset 0x0, size 0x20
    struct xParCmdApplyCamMat ApplyCamMat; // offset 0x0, size 0x14
    struct xParCmdRotateAround RotateAround; // offset 0x0, size 0x20
    struct xParCmdTex Tex; // offset 0x0, size 0x24
    struct xParCmdTexAnim TexAnim; // offset 0x0, size 0x18
    struct xParCmdCustom Custom; // offset 0x0, size 0x1C
    struct xParCmdCollideFall CollideFall; // offset 0x0, size 0x10
    struct xParCmdCollideFallSticky CollideFallSticky; // offset 0x0, size 0x14
    struct xParCmdDampenData DampenData; // offset 0x0, size 0xC
    struct xParCmdAlphaInOutData AlphaInOutData; // offset 0x0, size 0x18
    struct xParCmdSizeInOutData SizeInOutData; // offset 0x0, size 0x18
    struct xParCmdShaperData ShaperData; // offset 0x0, size 0x30
};
// total size: 0x30
struct xParSys : public xBase {
    // Members
    struct xParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    struct xParCmd * cmd; // offset 0x18, size 0x4
    struct xParSys * parent; // offset 0x1C, size 0x4
    struct xParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
    struct RwTexture * txtr_particle; // offset 0x28, size 0x4
    union xParCmdAny * cmd_buffer; // offset 0x2C, size 0x4
};
// total size: 0x94
struct xParEmitter : public xBase {
    // Members
    struct xParEmitterAsset * tasset; // offset 0x10, size 0x4
    struct xParGroup * group; // offset 0x14, size 0x4
    struct xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned int sortID; // offset 0x1C, size 0x4
    unsigned char rate_mode; // offset 0x20, size 0x1
    struct xVec3 last_emit_position; // offset 0x24, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x30, size 0xC
    float rate; // offset 0x3C, size 0x4
    float rate_time; // offset 0x40, size 0x4
    float rate_fraction; // offset 0x44, size 0x4
    float rate_fraction_cull; // offset 0x48, size 0x4
    unsigned char emit_flags; // offset 0x4C, size 0x1
    unsigned char tweak_flags; // offset 0x4D, size 0x1
    unsigned char emit_pad[2]; // offset 0x4E, size 0x2
    unsigned char rot[3]; // offset 0x50, size 0x3
    struct xModelTag tag; // offset 0x54, size 0x20
    float oocull_distance_sqr; // offset 0x74, size 0x4
    float distance_to_cull_sqr; // offset 0x78, size 0x4
    void * attachTo; // offset 0x7C, size 0x4
    struct xParSys * parSys; // offset 0x80, size 0x4
    struct xBase * emit_volume; // offset 0x84, size 0x4
    struct xVec3 last_attach_loc; // offset 0x88, size 0xC
};
// total size: 0x94
struct zParEmitter : public xParEmitter {};
// total size: 0x0
struct zDecalEmitterWithID {};
// total size: 0x48
class StepFX {
    // Members
    struct zSurfAssetIN * currentSurface; // offset 0x0, size 0x4
    struct zSurfAssetIN * lastSurface; // offset 0x4, size 0x4
    float lastSurfaceTime; // offset 0x8, size 0x4
    struct zFootstepDetect footsteps[2]; // offset 0xC, size 0x20
    class zDecalEmitterList * decals; // offset 0x2C, size 0x4
    float dust_emit_time_L; // offset 0x30, size 0x4
    float dust_time_L; // offset 0x34, size 0x4
    float dust_emit_remaining_L; // offset 0x38, size 0x4
    float dust_emit_time_R; // offset 0x3C, size 0x4
    float dust_time_R; // offset 0x40, size 0x4
    float dust_emit_remaining_R; // offset 0x44, size 0x4
};
enum HitType {
    eHitType_None = -1,
    eHitType_BackGround = 0,
    eHitType_FrontGround = 1,
    eHitType_BackAir = 2,
    eHitType_FrontAir = 3,
    eHitType_BackPlayerHit = 4,
    eHitType_FrontPlayerHit = 5,
    eHitType_InfiniteFall = 6,
    eHitType_FallInGoo = 7,
};
// total size: 0x8
struct Point {
    // Members
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
};
// total size: 0x28
struct MoveSupressParams {
    // Members
    struct Point points[3]; // offset 0x0, size 0x18
    unsigned char pointsInitialized[3]; // offset 0x18, size 0x3
    unsigned char verified_init; // offset 0x1B, size 0x1
    unsigned int num_segments; // offset 0x1C, size 0x4
    float cur_time; // offset 0x20, size 0x4
    float cur_supression; // offset 0x24, size 0x4
};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
};
// total size: 0x34
struct zSpringboardAsset : public xDynAsset {
    // Members
    struct xVec3 location; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
    unsigned int modelID; // offset 0x28, size 0x4
    float adjustment; // offset 0x2C, size 0x4
    unsigned char top; // offset 0x30, size 0x1
    unsigned char type; // offset 0x31, size 0x1
    unsigned char size; // offset 0x32, size 0x1
};
enum State {
    Idle = 0,
    Compressing = 1,
    Compressed = 2,
    Launching = 3,
};
// total size: 0xEC
class zSpringboard : public xEnt {
    // Members
protected:
    struct zSpringboardAsset * asset; // offset 0xD8, size 0x4
    enum State state; // offset 0xDC, size 0x4
    float angle; // offset 0xE0, size 0x4
    float cosAngle; // offset 0xE4, size 0x4
    float sinAngle; // offset 0xE8, size 0x4
};
// total size: 0x0
class zNPCBase {};
// total size: 0x2
struct /* @class$2474zScene_cpp */ {
    // Members
    signed short incrediPower; // offset 0x0, size 0x2
};
// total size: 0x30
struct OOBExtent {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float nearFarDist; // offset 0x4, size 0x4
    float sideDist; // offset 0x8, size 0x4
    struct xVec3 position; // offset 0xC, size 0xC
    struct xVec3 depen; // offset 0x18, size 0xC
    float magDepen; // offset 0x24, size 0x4
    float leftXMargin; // offset 0x28, size 0x4
    float rightXMargin; // offset 0x2C, size 0x4
};
// total size: 0xCC
struct xSweptSphere {
    // Members
    unsigned char detect_initial_penetration; // offset 0x0, size 0x1
    unsigned char init_collide; // offset 0x1, size 0x1
    struct xVec3 start; // offset 0x4, size 0xC
    struct xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    unsigned short xEntFilterFlags; // offset 0x20, size 0x2
    float dist; // offset 0x24, size 0x4
    struct xVec3 dir; // offset 0x28, size 0xC
    struct xBox box; // offset 0x34, size 0x18
    struct xQCData qcd; // offset 0x4C, size 0x20
    float curdist; // offset 0x6C, size 0x4
    unsigned int oid; // offset 0x70, size 0x4
    void * optr; // offset 0x74, size 0x4
    struct xModelInstance * mptr; // offset 0x78, size 0x4
    struct xVec3 worldContact; // offset 0x7C, size 0xC
    int hitIt; // offset 0x88, size 0x4
    struct xVec3 worldPos; // offset 0x8C, size 0xC
    struct xVec3 worldNormal; // offset 0x98, size 0xC
    struct xVec3 worldTangent; // offset 0xA4, size 0xC
    struct xJSPHeader * jsp; // offset 0xB0, size 0x4
    struct xClumpCollBSPTriangle * bspTriangle; // offset 0xB4, size 0x4
    enum xCollideSphereHitType type; // offset 0xB8, size 0x4
    class xPlane tri_plane; // offset 0xBC, size 0x10
};
// total size: 0x1
class zPlayerConstrainer {
    // Static members
    static unsigned int sDrawnFrame; // size: 0x4
    static unsigned char sCameraDisable; // size: 0x1
    static unsigned char sPlayerDisable; // size: 0x1
    static unsigned char sDebugRender; // size: 0x1
    static unsigned char sEnabled; // size: 0x1
    static float sFarWall; // size: 0x4
    static float sNearWall; // size: 0x4
    static float sDefaultFarWall; // size: 0x4
    static float sDefaultNearWall; // size: 0x4
};
// total size: 0x0
struct zReactiveAnimationData {};
// total size: 0x0
struct zReactiveGenre {};
// total size: 0x3C
struct zSimpleMgr {
    // Members
    struct xSphere worldBound; // offset 0x0, size 0x10
    float noRenderDist; // offset 0x10, size 0x4
    float lodDist0; // offset 0x14, size 0x4
    float fadeDist; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    struct xModelBucket * * lodBucket[2]; // offset 0x20, size 0x8
    struct RpAtomic * lodAtomic[2]; // offset 0x28, size 0x8
    struct RwMatrixTag * mat; // offset 0x30, size 0x4
    struct xModelInstance * model; // offset 0x34, size 0x4
    struct zEntSimpleObj * ent; // offset 0x38, size 0x4
};
// total size: 0xC
struct zEntAnimData {
    // Members
    union { // inferred
        struct { // inferred
            struct zReactiveAnimationData * reactiveAnimationData; // offset 0x0, size 0x4
            struct zReactiveGenre * reactGenre; // offset 0x4, size 0x4
            struct zSimpleMgr * smgrExtra; // offset 0x8, size 0x4
        };
        struct { // inferred
            void * anim; // offset 0x0, size 0x4
            float animTime; // offset 0x4, size 0x4
        };
    };
};
// total size: 0xC
struct xSimpleObjAsset {
    // Members
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0x8
struct xDestructibleAssetAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0x34
struct xDestructibleAssetState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int shrapnelID; // offset 0x8, size 0x4
    unsigned int shrapnelhitID; // offset 0xC, size 0x4
    unsigned int soundgroupidleID; // offset 0x10, size 0x4
    unsigned int soundgroupfxID; // offset 0x14, size 0x4
    unsigned int soundgrouphitID; // offset 0x18, size 0x4
    unsigned int soundgroupfxIDswitch; // offset 0x1C, size 0x4
    unsigned int soundgrouphitIDswitch; // offset 0x20, size 0x4
    unsigned int rumbleIDhit; // offset 0x24, size 0x4
    unsigned int rumbleIDswitch; // offset 0x28, size 0x4
    unsigned int fx_flags; // offset 0x2C, size 0x4
    struct xDestructibleAssetAttachedAnimList * animlist; // offset 0x30, size 0x4
};
// total size: 0x40
struct xDestructibleAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nstates; // offset 0x4, size 0x4
    unsigned int hit_points; // offset 0x8, size 0x4
    unsigned int hit_filter; // offset 0xC, size 0x4
    unsigned int hit_filter_excluded; // offset 0x10, size 0x4
    unsigned int healthPoints; // offset 0x14, size 0x4
    unsigned int expPoints; // offset 0x18, size 0x4
    float healthChance; // offset 0x1C, size 0x4
    float expChance; // offset 0x20, size 0x4
    unsigned int launch_flag; // offset 0x24, size 0x4
    unsigned int behaviour; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    unsigned int soundgroupidleID; // offset 0x30, size 0x4
    float respawn; // offset 0x34, size 0x4
    unsigned char target_priority; // offset 0x38, size 0x1
    struct xDestructibleAssetState * states; // offset 0x3C, size 0x4
};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragExplosion = 8,
    eFragDistortion = 9,
    eFragFire = 10,
    eFragLight = 11,
    eFragSmoke = 12,
    eFragGoo = 13,
    eFragCount = 14,
    eFragForceSize = 2147483647,
};
// total size: 0x54
struct zFragGroup {
    // Members
    struct zFrag * list[21]; // offset 0x0, size 0x54
};
// total size: 0x18
struct zFragAsset {
    // Members
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
// total size: 0x20
struct zFragShrapnelAsset : public zFragAsset {
    // Members
    unsigned int shrapnelID; // offset 0x18, size 0x4
    struct zShrapnelAsset * shrapAsset; // offset 0x1C, size 0x4
};
// total size: 0x4
struct zFragShrapnel {
    // Members
    struct zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
};
enum zFragLocType {
    eFragLocBone = 0,
    eFragLocBoneUpdated = 1,
    eFragLocBoneLocal = 2,
    eFragLocBoneLocalUpdated = 3,
    eFragLocTag = 4,
    eFragLocTagUpdated = 5,
    eFragLocCount = 6,
    eFragLocForceSize = 2147483647,
};
// total size: 0x10
struct zFragBone {
    // Members
    int index; // offset 0x0, size 0x4
    struct xVec3 offset; // offset 0x4, size 0xC
};
union zFragLocInfo {
    struct zFragBone bone; // offset 0x0, size 0x10
    struct xModelTag tag; // offset 0x0, size 0x20
};
// total size: 0x28
struct zFragLocation {
    // Members
    enum zFragLocType type; // offset 0x0, size 0x4
    union zFragLocInfo info; // offset 0x4, size 0x20
    float rand_radius; // offset 0x24, size 0x4
};
// total size: 0x184
struct xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // Members
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    struct xVec3 pos; // offset 0x140, size 0xC
    struct xVec3 last_emit_position; // offset 0x14C, size 0xC
    struct xVec3 vel; // offset 0x158, size 0xC
    struct xVec3 last_emit_velocity; // offset 0x164, size 0xC
    float vel_angle_variation; // offset 0x170, size 0x4
    unsigned char rot[3]; // offset 0x174, size 0x3
    unsigned char padding; // offset 0x177, size 0x1
    float radius; // offset 0x178, size 0x4
    float emit_interval_current; // offset 0x17C, size 0x4
    struct xBase * emit_volume; // offset 0x180, size 0x4
};
// total size: 0x1F4
struct zFragParticleAsset : public zFragAsset {
    // Members
    struct zFragLocation source; // offset 0x18, size 0x28
    struct zFragLocation vel; // offset 0x40, size 0x28
    struct xParEmitterCustomSettings emit; // offset 0x68, size 0x184
    unsigned int parEmitterID; // offset 0x1EC, size 0x4
    struct zParEmitter * parEmitter; // offset 0x1F0, size 0x4
};
// total size: 0x18
struct zFragParticle {
    // Members
    struct zFragParticleAsset * fasset; // offset 0x0, size 0x4
    unsigned char no_last_position; // offset 0x4, size 0x1
    float emit_remaining; // offset 0x8, size 0x4
    struct xVec3 last_position; // offset 0xC, size 0xC
};
// total size: 0x20
struct zFragLightInfo {
    // Members
    struct _xFColor lightColor; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float fadeUpTime; // offset 0x14, size 0x4
    float fadeDownTime; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x158
struct zFragProjectileAsset : public zFragAsset {
    // Members
    unsigned int modelInfoID; // offset 0x18, size 0x4
    struct RpAtomic * modelFile; // offset 0x1C, size 0x4
    struct zFragLocation launch; // offset 0x20, size 0x28
    struct zFragLocation vel; // offset 0x48, size 0x28
    struct zFragLocation velPlusMinus; // offset 0x70, size 0x28
    struct zFragLocation rot; // offset 0x98, size 0x28
    struct zFragLocation rotPlusMinus; // offset 0xC0, size 0x28
    struct zFragLocation initRot; // offset 0xE8, size 0x28
    float bounce; // offset 0x110, size 0x4
    int maxBounces; // offset 0x114, size 0x4
    unsigned int flags; // offset 0x118, size 0x4
    unsigned int childID; // offset 0x11C, size 0x4
    struct zShrapnelAsset * child; // offset 0x120, size 0x4
    float minScale; // offset 0x124, size 0x4
    float maxScale; // offset 0x128, size 0x4
    unsigned int _scaleCurveID; // offset 0x12C, size 0x4
    void * _scaleCurve; // offset 0x130, size 0x4
    float gravity; // offset 0x134, size 0x4
    struct zFragLightInfo lightInfo; // offset 0x138, size 0x20
};
// total size: 0x24
struct xParabola {
    // Members
    struct xVec3 initPos; // offset 0x0, size 0xC
    struct xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x68
struct zFragProjectile {
    // Members
    struct zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * model; // offset 0x4, size 0x4
    struct xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float alpha; // offset 0x40, size 0x4
    float bounceC1; // offset 0x44, size 0x4
    float bounceC2; // offset 0x48, size 0x4
    struct xVec3 N; // offset 0x4C, size 0xC
    struct xVec3 axis; // offset 0x58, size 0xC
    struct xLight * light; // offset 0x64, size 0x4
};
// total size: 0x70
struct zFragLightningAsset : public zFragAsset {
    // Members
    struct zFragLocation start; // offset 0x18, size 0x28
    struct zFragLocation end; // offset 0x40, size 0x28
    unsigned int startParentID; // offset 0x68, size 0x4
    unsigned int endParentID; // offset 0x6C, size 0x4
};
// total size: 0x54
struct /* @class$2529zScene_cpp */ {
    // Members
    struct xVec3 endPoint[2]; // offset 0x0, size 0x18
    struct xVec3 endPointB; // offset 0x18, size 0xC
    struct xVec3 direction; // offset 0x24, size 0xC
    float length; // offset 0x30, size 0x4
    float scale; // offset 0x34, size 0x4
    float width; // offset 0x38, size 0x4
    float endParam[2]; // offset 0x3C, size 0x8
    float endVel[2]; // offset 0x44, size 0x8
    float paramSpan[2]; // offset 0x4C, size 0x8
};
// total size: 0x5C
struct zLightningAsset : public xDynAsset {
    // Members
    struct xVec3 start; // offset 0x10, size 0xC
    struct xVec3 end; // offset 0x1C, size 0xC
    struct xColor_tag color; // offset 0x28, size 0x4
    float thickness; // offset 0x2C, size 0x4
    float branchSpeed; // offset 0x30, size 0x4
    unsigned int mainTexture; // offset 0x34, size 0x4
    unsigned int branchTexture; // offset 0x38, size 0x4
    int damage; // offset 0x3C, size 0x4
    float knockBackSpeed; // offset 0x40, size 0x4
    unsigned int sound; // offset 0x44, size 0x4
    unsigned int soundHit1; // offset 0x48, size 0x4
    unsigned int soundHit2; // offset 0x4C, size 0x4
    unsigned int followStart; // offset 0x50, size 0x4
    unsigned int followEnd; // offset 0x54, size 0x4
    unsigned int collisionEnabled; // offset 0x58, size 0x4
};
// total size: 0x18
class zLightningWidget : private xBase {
    // Members
public:
    struct zLightning * l; // offset 0x10, size 0x4
private:
    struct zLightningAsset * asset; // offset 0x14, size 0x4
};
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0x110
struct zLightning {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    // total size: 0x54
    struct /* @class$2529zScene_cpp */ {
        // Members
        struct xVec3 endPoint[2]; // offset 0x0, size 0x18
        struct xVec3 endPointB; // offset 0x18, size 0xC
        struct xVec3 direction; // offset 0x24, size 0xC
        float length; // offset 0x30, size 0x4
        float scale; // offset 0x34, size 0x4
        float width; // offset 0x38, size 0x4
        float endParam[2]; // offset 0x3C, size 0x8
        float endVel[2]; // offset 0x44, size 0x8
        float paramSpan[2]; // offset 0x4C, size 0x8
    } func; // offset 0x8, size 0x54
    class zLightningWidget * widget; // offset 0x5C, size 0x4
    unsigned int numStrips; // offset 0x60, size 0x4
    float alphaRamp; // offset 0x64, size 0x4
    struct xColor_tag color; // offset 0x68, size 0x4
    float time_left; // offset 0x6C, size 0x4
    float time_total; // offset 0x70, size 0x4
    struct zLightning * nextBranch; // offset 0x74, size 0x4
    struct zLightning * prevBranch; // offset 0x78, size 0x4
    float parentSegment; // offset 0x7C, size 0x4
    float lastParentSegment; // offset 0x80, size 0x4
    float segmentsPerMeter; // offset 0x84, size 0x4
    float branchSpeed; // offset 0x88, size 0x4
    int damage; // offset 0x8C, size 0x4
    float knockBackSpeed; // offset 0x90, size 0x4
    struct RwRaster * mainTexture; // offset 0x94, size 0x4
    struct RwRaster * branchTexture; // offset 0x98, size 0x4
    float sparkTimer; // offset 0x9C, size 0x4
    struct xVec3 collisionPoint; // offset 0xA0, size 0xC
    float genTime; // offset 0xAC, size 0x4
    unsigned char randomizeBranchEndPoint; // offset 0xB0, size 0x1
    unsigned char collisionEnabled; // offset 0xB1, size 0x1
    enum xSndHandle sndHandle; // offset 0xB4, size 0x4
    struct xEnt * followStart; // offset 0xB8, size 0x4
    struct xVec3 followStartOffset; // offset 0xBC, size 0xC
    struct xEnt * followEnd; // offset 0xC8, size 0x4
    struct xVec3 followEndOffset; // offset 0xCC, size 0xC
    void (* renderCB)(struct zLightning *, struct RxObjSpace3DVertex *, struct RxObjSpace3DVertex *, unsigned int); // offset 0xD8, size 0x4
    void * context; // offset 0xDC, size 0x4
    float weightParam[12]; // offset 0xE0, size 0x30
};
// total size: 0x10
struct zFragLightning {
    // Members
    struct zFragLightningAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * startParent; // offset 0x4, size 0x4
    struct xModelInstance * endParent; // offset 0x8, size 0x4
    struct zLightning * lightning; // offset 0xC, size 0x4
};
// total size: 0x44
struct zFragSoundAsset : public zFragAsset {
    // Members
    unsigned int assetID; // offset 0x18, size 0x4
    struct zFragLocation source; // offset 0x1C, size 0x28
};
// total size: 0x8
struct zFragSound {
    // Members
    struct zFragSoundAsset * fasset; // offset 0x0, size 0x4
    enum xSndHandle soundID; // offset 0x4, size 0x4
};
// total size: 0x54
struct zFragShockwaveAsset : public zFragAsset {
    // Members
    unsigned int modelInfoID; // offset 0x18, size 0x4
    float birthRadius; // offset 0x1C, size 0x4
    float deathRadius; // offset 0x20, size 0x4
    float birthVelocity; // offset 0x24, size 0x4
    float deathVelocity; // offset 0x28, size 0x4
    float birthSpin; // offset 0x2C, size 0x4
    float deathSpin; // offset 0x30, size 0x4
    float birthColor[4]; // offset 0x34, size 0x10
    float deathColor[4]; // offset 0x44, size 0x10
};
// total size: 0x38
struct zFragShockwave {
    // Members
    struct zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
};
// total size: 0x48
struct zFragExplosionAsset : public zFragAsset {
    // Members
    unsigned int type; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
};
// total size: 0x20
struct presence_volume {
    // Members
    float knockback; // offset 0x0, size 0x4
    struct xVec3 center; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float damage_player; // offset 0x14, size 0x4
    float damage_npc; // offset 0x18, size 0x4
    float damage_other; // offset 0x1C, size 0x4
};
// total size: 0x30
struct trail_emitter {
    // Members
    int type; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    float emitted; // offset 0x10, size 0x4
    int glare_id; // offset 0x14, size 0x4
    float streak_delay; // offset 0x18, size 0x4
    float streaks_emitted; // offset 0x1C, size 0x4
    float spark_delay; // offset 0x20, size 0x4
    float sparks_emitted; // offset 0x24, size 0x4
    struct presence_volume * presence; // offset 0x28, size 0x4
    enum xSndHandle tracking_sound; // offset 0x2C, size 0x4
};
// total size: 0x40
struct zFragExplosion {
    // Members
    struct zFragExplosionAsset * fasset; // offset 0x0, size 0x4
    struct trail_emitter trail; // offset 0x4, size 0x30
    struct xVec3 initPos; // offset 0x34, size 0xC
};
// total size: 0x5C
struct zFragDistortionAsset : public zFragAsset {
    // Members
    unsigned int type; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
    float radius; // offset 0x48, size 0x4
    float duration; // offset 0x4C, size 0x4
    float intensity; // offset 0x50, size 0x4
    float freq; // offset 0x54, size 0x4
    float repeat_delay; // offset 0x58, size 0x4
};
// total size: 0x18
struct zFragDistortion {
    // Members
    struct zFragDistortionAsset * fasset; // offset 0x0, size 0x4
    struct xVec3 loc; // offset 0x4, size 0xC
    int type; // offset 0x10, size 0x4
    float repeat_time; // offset 0x14, size 0x4
};
// total size: 0x60
struct property_set {
    // Members
    float damage; // offset 0x0, size 0x4
    float knockback; // offset 0x4, size 0x4
    float heat_magnify; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    struct xEnt * driver; // offset 0x10, size 0x4
    struct xBound damageBound; // offset 0x14, size 0x4C
};
// total size: 0xB4
struct zFragFireAsset : public zFragAsset {
    // Members
    struct zFragLocation loc; // offset 0x18, size 0x28
    unsigned int flags; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
    float scale; // offset 0x48, size 0x4
    float fuel; // offset 0x4C, size 0x4
    float heat; // offset 0x50, size 0x4
    struct property_set props; // offset 0x54, size 0x60
};
// total size: 0x4
struct zFragFire {
    // Members
    struct zFragFireAsset * fasset; // offset 0x0, size 0x4
};
// total size: 0x60
struct zFragLightAsset : public zFragAsset {
    // Members
    struct zFragLocation loc; // offset 0x18, size 0x28
    struct zFragLightInfo lightInfo; // offset 0x40, size 0x20
};
// total size: 0xC
struct zFragLight {
    // Members
    struct zFragLightAsset * fasset; // offset 0x0, size 0x4
    struct xLight * light; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x0
struct asset_type {};
// total size: 0x0
struct debug_info {};
// total size: 0xC
struct /* @class$1066zScene_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1067zScene_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1068zScene_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$1069zScene_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$1070zScene_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$1071zScene_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$1072zScene_cpp */ {
    // Members
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x28
struct tweak_info {
    // Members
    struct substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    const struct tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        struct /* @class$1066zScene_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1067zScene_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1068zScene_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$1069zScene_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$1070zScene_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$1071zScene_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$1072zScene_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x50
struct zSmokeSphereVolume {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    float size_min; // offset 0x10, size 0x4
    float size_max; // offset 0x14, size 0x4
    float life_min; // offset 0x18, size 0x4
    float life_max; // offset 0x1C, size 0x4
    float vel_min; // offset 0x20, size 0x4
    float vel_max; // offset 0x24, size 0x4
    float growth; // offset 0x28, size 0x4
    struct xVec3 vel_dir; // offset 0x2C, size 0xC
    float vel_dir_vary; // offset 0x38, size 0x4
    float wind; // offset 0x3C, size 0x4
    struct xColor_tag color_birth; // offset 0x40, size 0x4
    struct xColor_tag color_death; // offset 0x44, size 0x4
    int texture_columns; // offset 0x48, size 0x4
    int texture_rows; // offset 0x4C, size 0x4
};
// total size: 0xA0
class zSmokeEmitter : private xBase {
    // Members
public:
    int system_id; // offset 0x10, size 0x4
private:
    struct asset_type * asset; // offset 0x14, size 0x4
    struct xMat4x3 emit_mat; // offset 0x20, size 0x40
    float emitted; // offset 0x60, size 0x4
    int flags; // offset 0x64, size 0x4
    struct xVec3 vel_dir; // offset 0x68, size 0xC
    int max_frame; // offset 0x74, size 0x4
    float du; // offset 0x78, size 0x4
    float dv; // offset 0x7C, size 0x4
    float age_rate_min; // offset 0x80, size 0x4
    float age_rate_range; // offset 0x84, size 0x4
    float dr; // offset 0x88, size 0x4
    float dg; // offset 0x8C, size 0x4
    float db; // offset 0x90, size 0x4
    float da; // offset 0x94, size 0x4
    struct debug_info * debug; // offset 0x98, size 0x4
};
// total size: 0x50
struct zFragSmokeAsset : public zFragAsset {
    // Members
    unsigned int parEmitterID; // offset 0x18, size 0x4
    struct zFragLocation loc; // offset 0x1C, size 0x28
    float rate; // offset 0x44, size 0x4
    float radius; // offset 0x48, size 0x4
    class zSmokeEmitter * parEmitter; // offset 0x4C, size 0x4
};
// total size: 0x58
struct zFragSmoke {
    // Members
    struct zFragSmokeAsset * fasset; // offset 0x0, size 0x4
    struct zSmokeSphereVolume volume; // offset 0x4, size 0x50
    float emit_remaining; // offset 0x54, size 0x4
};
// total size: 0x88
struct zFragGooAsset : public zFragAsset {
    // Members
    unsigned int dropModelInfoID; // offset 0x18, size 0x4
    struct RpAtomic * dropModelFile; // offset 0x1C, size 0x4
    unsigned int splatModelInfoID; // offset 0x20, size 0x4
    struct RpAtomic * splatModelFile; // offset 0x24, size 0x4
    unsigned int splatSndID; // offset 0x28, size 0x4
    struct zShrapnelAsset * splatSnd; // offset 0x2C, size 0x4
    struct zFragLocation loc; // offset 0x30, size 0x28
    struct zFragLocation vel; // offset 0x58, size 0x28
    float minScale; // offset 0x80, size 0x4
    float maxScale; // offset 0x84, size 0x4
};
// total size: 0x4
struct node {
    // Members
    float t; // offset 0x0, size 0x4
};
// total size: 0x8
struct inode : public node {
    // Members
    float value[1]; // offset 0x4, size 0x4
};
// total size: 0x0
struct debug_data {};
// total size: 0x14
struct xResponseCurve {
    // Members
private:
    unsigned int _values; // offset 0x0, size 0x4
    const struct inode * curve; // offset 0x4, size 0x4
    unsigned int _nodes; // offset 0x8, size 0x4
    unsigned int active_node; // offset 0xC, size 0x4
    struct debug_data * debug; // offset 0x10, size 0x4
};
// total size: 0x5C
struct emit_context {
    // Members
    unsigned int owner; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    int priority; // offset 0x8, size 0x4
    int max_owned; // offset 0xC, size 0x4
    int hard_max_owned; // offset 0x10, size 0x4
    float life; // offset 0x14, size 0x4
    float pause_time; // offset 0x18, size 0x4
    float accel_aging; // offset 0x1C, size 0x4
    float max_dist; // offset 0x20, size 0x4
    float lod_dist; // offset 0x24, size 0x4
    struct xVec2 size; // offset 0x28, size 0x8
    int blend_mode; // offset 0x30, size 0x4
    struct RwTexture * texture; // offset 0x34, size 0x4
    struct xVec2 uv[2]; // offset 0x38, size 0x10
    const struct xResponseCurve * curve; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    void (* emitAtomicCB)(struct RpAtomic *, struct xMat4x3 *, struct xEnt *, void *); // offset 0x50, size 0x4
    void (* destAtomicCB)(struct RpAtomic *, void *); // offset 0x54, size 0x4
    void (* emitVertListCB)(struct xVec3 *, unsigned short *, int, struct xMat4x3 *, struct xEnt *, void *); // offset 0x58, size 0x4
};
// total size: 0x2C
struct xEntDriveSimple {
    // Members
    struct xMat4x3 * drivenMat; // offset 0x0, size 0x4
    struct xEnt * driver; // offset 0x4, size 0x4
    struct xVec3 drivenPosInDriver; // offset 0x8, size 0xC
    struct xVec3 lastDrivenPos; // offset 0x14, size 0xC
    struct xVec3 dpos; // offset 0x20, size 0xC
};
enum zGooStates {
    ezGooState_Fly = 0,
    ezGooState_Stick = 1,
    ezGooState_Fade = 2,
    ezGooState_StickChr = 3,
};
// total size: 0xD0
struct zFragGoo {
    // Members
    struct zFragGooAsset * fasset; // offset 0x0, size 0x4
    struct xModelInstance * dropModel; // offset 0x4, size 0x4
    struct xModelInstance * splatModel; // offset 0x8, size 0x4
    struct emit_context decalContext; // offset 0xC, size 0x5C
    unsigned int refVertIndex; // offset 0x68, size 0x4
    struct xVec3 currentPosition; // offset 0x6C, size 0xC
    struct xEntDriveSimple drivenData; // offset 0x78, size 0x2C
    struct xVec3 velocity; // offset 0xA4, size 0xC
    float t; // offset 0xB0, size 0x4
    float decal_t; // offset 0xB4, size 0x4
    float scale; // offset 0xB8, size 0x4
    struct xVec3 N; // offset 0xBC, size 0xC
    unsigned char slide; // offset 0xC8, size 0x1
    enum zGooStates state; // offset 0xCC, size 0x4
};
union zFragInfo {
    struct zFragGroup group; // offset 0x0, size 0x54
    struct zFragShrapnel shrapnel; // offset 0x0, size 0x4
    struct zFragParticle particle; // offset 0x0, size 0x18
    struct zFragProjectile projectile; // offset 0x0, size 0x68
    struct zFragLightning lightning; // offset 0x0, size 0x10
    struct zFragSound sound; // offset 0x0, size 0x8
    struct zFragShockwave shockwave; // offset 0x0, size 0x38
    struct zFragExplosion explosion; // offset 0x0, size 0x40
    struct zFragDistortion distortion; // offset 0x0, size 0x18
    struct zFragFire fire; // offset 0x0, size 0x4
    struct zFragLight light; // offset 0x0, size 0xC
    struct zFragSmoke smoke; // offset 0x0, size 0x58
    struct zFragGoo goo; // offset 0x0, size 0xD0
};
// total size: 0xF8
struct zFrag {
    // Members
    enum zFragType type; // offset 0x0, size 0x4
    union zFragInfo info; // offset 0x4, size 0xD0
    float delay; // offset 0xD4, size 0x4
    float alivetime; // offset 0xD8, size 0x4
    float lifetime; // offset 0xDC, size 0x4
    void (* update)(struct zFrag *, float); // offset 0xE0, size 0x4
    void (* destroy)(struct zFrag *); // offset 0xE4, size 0x4
    struct xModelInstance * parent[2]; // offset 0xE8, size 0x8
    struct zFrag * prev; // offset 0xF0, size 0x4
    struct zFrag * next; // offset 0xF4, size 0x4
};
// total size: 0xC
struct zShrapnelAsset {
    // Members
    int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(struct zShrapnelAsset *, struct xModelInstance *, struct xVec3 *, struct xVec3 *, void (*)(struct zFrag *, struct zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x38
struct effectAsset : public xDynAsset {
    // Members
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int id; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char type; // offset 0x1D, size 0x1
    unsigned char rumbleInPause; // offset 0x1E, size 0x1
    unsigned char pad; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    float shakeMagnitude; // offset 0x28, size 0x4
    float shakeCycleMax; // offset 0x2C, size 0x4
    float shakeRotationalMagnitude; // offset 0x30, size 0x4
    unsigned char shakeY; // offset 0x34, size 0x1
};
// total size: 0x18
struct emitterBase : public xBase {
    // Members
    struct effectAsset * pEffectAsset; // offset 0x10, size 0x4
    void * __vptr$; // offset 0x14, size 0x4
};
// total size: 0x28
struct sphericalEmitterAsset : public xDynAsset {
    // Members
    unsigned int effectID; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    struct xVec3 position; // offset 0x18, size 0xC
    unsigned char onlyRumbleOnY; // offset 0x24, size 0x1
    unsigned char fallOff; // offset 0x25, size 0x1
    unsigned char onlyOnFloor; // offset 0x26, size 0x1
};
// total size: 0x20
struct sphericalEmitter : public emitterBase {
    // Members
    struct sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0x8
struct zDestructibleStateAttachedAnimList {
    // Members
    unsigned int nanimations; // offset 0x0, size 0x4
    void * animData; // offset 0x4, size 0x4
};
// total size: 0x10
struct zDestructibleStateFXParams {
    // Members
    float timer; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    struct zParEmitter * emitter; // offset 0x8, size 0x4
    unsigned int (* fn)(float); // offset 0xC, size 0x4
};
// total size: 0x8
struct zDestructibleStateFXList {
    // Members
    unsigned int nfx; // offset 0x0, size 0x4
    struct zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x44
struct zDestructibleState {
    // Members
    struct xModelInstance * model; // offset 0x0, size 0x4
    struct zShrapnelAsset * shrapnel; // offset 0x4, size 0x4
    struct zShrapnelAsset * shrapnelhit; // offset 0x8, size 0x4
    unsigned int percent; // offset 0xC, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x10, size 0x4
    enum iSndGroupHandle sg_handle_hit; // offset 0x14, size 0x4
    enum iSndGroupHandle sg_handle_hit_switch; // offset 0x18, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x1C, size 0x4
    enum xSndHandle sh_handle_hit; // offset 0x20, size 0x4
    enum xSndHandle sh_handle_hit_switch; // offset 0x24, size 0x4
    unsigned int sg_fx_id; // offset 0x28, size 0x4
    unsigned int sg_fx_id_switch; // offset 0x2C, size 0x4
    struct sphericalEmitter * rumbleHit; // offset 0x30, size 0x4
    struct sphericalEmitter * rumbleSwitch; // offset 0x34, size 0x4
    struct zDestructibleStateAttachedAnimList * animList; // offset 0x38, size 0x4
    struct zDestructibleStateFXList fxList; // offset 0x3C, size 0x8
};
// total size: 0x7C
struct zDestructible {
    // Members
    struct xDestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int cur_hit_pts; // offset 0x8, size 0x4
    unsigned int curstateidx; // offset 0xC, size 0x4
    unsigned int nstates; // offset 0x10, size 0x4
    unsigned int hit_pts; // offset 0x14, size 0x4
    unsigned int hit_filter; // offset 0x18, size 0x4
    unsigned int hit_filter_excluded; // offset 0x1C, size 0x4
    unsigned int healthPoints; // offset 0x20, size 0x4
    unsigned int expPoints; // offset 0x24, size 0x4
    float healthChance; // offset 0x28, size 0x4
    float expChance; // offset 0x2C, size 0x4
    unsigned int launch_flag; // offset 0x30, size 0x4
    unsigned int behaviour; // offset 0x34, size 0x4
    unsigned int base_modelID; // offset 0x38, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x3C, size 0x4
    enum xSndHandle sh_handle_idle; // offset 0x40, size 0x4
    struct xModelInstance * base_model; // offset 0x44, size 0x4
    struct xModelInstance * base_collision; // offset 0x48, size 0x4
    struct zDestructibleState * dstates; // offset 0x4C, size 0x4
    float hit_to_destroy_timer; // offset 0x50, size 0x4
    float timer; // offset 0x54, size 0x4
    float respawn_time; // offset 0x58, size 0x4
    void (* destroy_notify)(struct zDestructible *, void *); // offset 0x5C, size 0x4
    void * notify_context; // offset 0x60, size 0x4
    struct xEnt * root_ent; // offset 0x64, size 0x4
    unsigned int flags; // offset 0x68, size 0x4
    int owner; // offset 0x6C, size 0x4
    unsigned char has_animation; // offset 0x70, size 0x1
    unsigned char active; // offset 0x71, size 0x1
    struct xModelInstance * * baseChildrenList; // offset 0x74, size 0x4
    int baseChildrenCount; // offset 0x78, size 0x4
};
// total size: 0x10
struct xEntOpacity {
    // Members
    float startAlpha; // offset 0x0, size 0x4
    float endAlpha; // offset 0x4, size 0x4
    float deltaOpacity; // offset 0x8, size 0x4
    unsigned int oldPipeFlags; // offset 0xC, size 0x4
};
// total size: 0x108
struct zEntSimpleObj : public zEnt, public zEntAnimData {
    // Members
    struct xSimpleObjAsset * sasset; // offset 0xE8, size 0x4
    unsigned int sflags; // offset 0xEC, size 0x4
    struct zDestructible * destructible; // offset 0xF0, size 0x4
    struct zSimpleMgr * smgr; // offset 0xF4, size 0x4
    struct xEntOpacity opacity; // offset 0xF8, size 0x10
};
// total size: 0x70
struct zCarryableObjectAsset : public xDynAsset {
    // Members
    struct xEntAsset entAsset; // offset 0x10, size 0x50
    struct xSimpleObjAsset simpleObjAsset; // offset 0x60, size 0xC
    unsigned int propertyAsset; // offset 0x6C, size 0x4
};
// total size: 0x0
struct zCarryableProperty {};
// total size: 0x118
class zCarryableObject : public zEntSimpleObj {
    // Members
protected:
    struct zCarryableObjectAsset & carryAsset; // offset 0x108, size 0x4
    const struct zCarryableProperty * property; // offset 0x10C, size 0x4
    float time; // offset 0x110, size 0x4
    struct xEnt * carriedBy; // offset 0x114, size 0x4
};
// total size: 0xD0
struct zPlayerCarryInfo {
    // Members
    class zCarryableObject * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    unsigned int animCode; // offset 0x8, size 0x4
    struct xVec3 targetVelocity; // offset 0xC, size 0xC
    unsigned int lerpedIn; // offset 0x18, size 0x4
    struct xMat4x3 spin; // offset 0x20, size 0x40
    struct xQuat startQuat; // offset 0x60, size 0x10
    struct xQuat endQuat; // offset 0x70, size 0x10
    struct xVec3 objScale; // offset 0x80, size 0xC
    struct xVec3 physicsTranslation; // offset 0x8C, size 0xC
    float radius; // offset 0x98, size 0x4
    unsigned char orientToPlayer; // offset 0x9C, size 0x1
    unsigned char destroyed; // offset 0x9D, size 0x1
    float targetRot; // offset 0xA0, size 0x4
    float startRot; // offset 0xA4, size 0x4
    unsigned int grabTarget; // offset 0xA8, size 0x4
    struct xVec3 grabOffset; // offset 0xAC, size 0xC
    float grabLerpLast; // offset 0xB8, size 0x4
    unsigned int grabYclear; // offset 0xBC, size 0x4
    float grab_emit_remaining; // offset 0xC0, size 0x4
    float grab_dust_time; // offset 0xC4, size 0x4
};
enum xJawSpeaker {
    exJawSpeaker_Remy = 0,
    exJawSpeaker_Count = 1,
};
// total size: 0x20
struct AttackFX {
    // Members
    unsigned int anim; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float end; // offset 0x8, size 0x4
    unsigned short flags; // offset 0xC, size 0x2
    unsigned char upgrade; // offset 0xE, size 0x1
    unsigned char bone; // offset 0xF, size 0x1
    float dt; // offset 0x10, size 0x4
    struct xMat4x3 * mat; // offset 0x14, size 0x4
    unsigned int num; // offset 0x18, size 0x4
    void * data; // offset 0x1C, size 0x4
};
enum zCommonPlayerUpgradeType {
    ezCommonPlayerUpgradeType_Melee = 0,
    ezCommonPlayerUpgradeType_AirMelee = 1,
    ezCommonPlayerUpgradeType_Distance = 2,
    ezCommonPlayerUpgradeType_Health = 3,
    ezCommonPlayerUpgradeType_NukeCnt = 4,
    ezCommonPlayerUpgradeType_Count = 5,
};
enum zCommonPlayerUpgradeLevel {
    ezCommonPlayerUpgradeLevel_Normal = 0,
    ezCommonPlayerUpgradeLevel_Level1 = 1,
    ezCommonPlayerUpgradeLevel_Level2 = 2,
    ezCommonPlayerUpgradeLevel_Count = 3,
};
// total size: 0x10
struct hitBoneInfo {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct xVec3 boneOffset; // offset 0x4, size 0xC
};
// total size: 0xC
struct zAnimCacheEntry {
    // Members
    struct xVec3 * data; // offset 0x0, size 0x4
    struct xAnimFile * animFile; // offset 0x4, size 0x4
    unsigned short bone; // offset 0x8, size 0x2
};
// total size: 0x8
struct effectBone {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct zAnimCacheEntry * positionCache; // offset 0x4, size 0x4
};
// total size: 0x8
struct RumbleEffectParams {
    // Members
    float startTime; // offset 0x0, size 0x4
    unsigned int emitterID; // offset 0x4, size 0x4
};
// total size: 0xC
struct ShrapnelEffectParams {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    struct zShrapnelAsset * asset; // offset 0x4, size 0x4
    float startTime; // offset 0x8, size 0x4
};
// total size: 0x18
struct BlurEffectParams {
    // Members
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float life; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float fadeInTime; // offset 0x10, size 0x4
    float fadeOutTime; // offset 0x14, size 0x4
};
// total size: 0x8
struct FlashEffectParams {
    // Members
    signed short alpha; // offset 0x0, size 0x2
    float time; // offset 0x4, size 0x4
};
// total size: 0xB4
class zCombatAttack {
    // Members
public:
    unsigned int state; // offset 0x0, size 0x4
    float attackStart; // offset 0x4, size 0x4
    float attackEnd; // offset 0x8, size 0x4
    float attackRadius; // offset 0xC, size 0x4
    struct hitBoneInfo hitBones[4]; // offset 0x10, size 0x40
    signed short damage; // offset 0x50, size 0x2
    unsigned short source; // offset 0x52, size 0x2
    float velocityUp; // offset 0x54, size 0x4
    float velocityAway; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned short effect; // offset 0x60, size 0x2
    unsigned short hitEffect; // offset 0x62, size 0x2
    float effectStart; // offset 0x64, size 0x4
    float effectEnd; // offset 0x68, size 0x4
    struct effectBone effectBones[2]; // offset 0x6C, size 0x10
    struct RumbleEffectParams rumbleEffect; // offset 0x7C, size 0x8
    struct ShrapnelEffectParams shrapnelEffect; // offset 0x84, size 0xC
    struct BlurEffectParams blurEffect; // offset 0x90, size 0x18
    struct FlashEffectParams flashEffect; // offset 0xA8, size 0x8
    void (* hitCB)(struct xEnt *, class zCombatAttack *, struct xEnt *, struct xVec3 *, struct xVec3 *); // offset 0xB0, size 0x4
};
// total size: 0xC
struct xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x80
struct xNearFloorPoly {
    // Members
    struct xBox box; // offset 0x0, size 0x18
    struct xVec3 center; // offset 0x18, size 0xC
    struct xVec3 facingVec; // offset 0x24, size 0xC
    float facingDot; // offset 0x30, size 0x4
    float floorDot; // offset 0x34, size 0x4
    struct xVec3 vert[3]; // offset 0x38, size 0x24
    float neardist; // offset 0x5C, size 0x4
    struct xVec3 nearpt; // offset 0x60, size 0xC
    int nearvert; // offset 0x6C, size 0x4
    int nearedge; // offset 0x70, size 0x4
    unsigned int oid; // offset 0x74, size 0x4
    void * optr; // offset 0x78, size 0x4
    struct xModelInstance * mptr; // offset 0x7C, size 0x4
};
// total size: 0x1840
struct zCommonPlayer : public zPlayer {
    // Static members
    static int MAX_STATES; // size: 0x4
    static unsigned int NUKE_CAPACITY_START; // size: 0x4

    // Members
    class zContextObjectManager contextManager; // offset 0x13A0, size 0x1C
    unsigned char has_picked_up_incredimeter; // offset 0x13BC, size 0x1
    unsigned char has_picked_up_health; // offset 0x13BD, size 0x1
    unsigned char has_grabbed_zipline; // offset 0x13BE, size 0x1
    struct xLight * light; // offset 0x13C0, size 0x4
    unsigned char lightOn; // offset 0x13C4, size 0x1
    float stickFlickMinTimer; // offset 0x13C8, size 0x4
    float stickFlickMaxTimer; // offset 0x13CC, size 0x4
    float stickFlickAngle; // offset 0x13D0, size 0x4
    float stickFlickUnit[2]; // offset 0x13D4, size 0x8
    struct LedgeGrabParams ledge; // offset 0x13DC, size 0x3C
protected:
    class zPlayerOneLinerData oneLinerData; // offset 0x1418, size 0x7C
    float collisionMasterRadius; // offset 0x1494, size 0x4
public:
    int surfaceDamage; // offset 0x1498, size 0x4
    enum zHitSource surfaceSource; // offset 0x149C, size 0x4
    struct xVec3 surfaceKnockback; // offset 0x14A0, size 0xC
protected:
    float surfAccelWalk; // offset 0x14AC, size 0x4
    float surfAccelRun; // offset 0x14B0, size 0x4
    float surfDecelIdle; // offset 0x14B4, size 0x4
    float surfDecelSkid; // offset 0x14B8, size 0x4
    float surfSlickRatio; // offset 0x14BC, size 0x4
    float surfSlickTimer; // offset 0x14C0, size 0x4
    float surfPeakRatio; // offset 0x14C4, size 0x4
    float surfMaxSpeed; // offset 0x14C8, size 0x4
    float surfSlipTimer; // offset 0x14CC, size 0x4
    float dust_emit_time; // offset 0x14D0, size 0x4
    float dust_time; // offset 0x14D4, size 0x4
    float dust_emit_remaining; // offset 0x14D8, size 0x4
    float smoke_emit_increment; // offset 0x14DC, size 0x4
    float max_smoke_emit_time; // offset 0x14E0, size 0x4
    float smoke_emit_timer; // offset 0x14E4, size 0x4
    float smoke_emit_remaining; // offset 0x14E8, size 0x4
    float smoke_offset; // offset 0x14EC, size 0x4
    struct FootLockInfo leftFoot; // offset 0x14F0, size 0x1C
    struct FootLockInfo rightFoot; // offset 0x150C, size 0x1C
public:
    class StepFX stepfx; // offset 0x1528, size 0x48
private:
    float hangTimer; // offset 0x1570, size 0x4
    float last_dt; // offset 0x1574, size 0x4
public:
    enum HitType currentHitType; // offset 0x1578, size 0x4
    struct xVec3 damageVec; // offset 0x157C, size 0xC
    float hitTimer; // offset 0x1588, size 0x4
    int hitJuggleCount; // offset 0x158C, size 0x4
private:
    struct MoveSupressParams move_supress; // offset 0x1590, size 0x28
public:
    class zInteraction * currAction; // offset 0x15B8, size 0x4
    float walkToActionTimer; // offset 0x15BC, size 0x4
    float autoMoveSpeed; // offset 0x15C0, size 0x4
    enum AutoMoveMode autoMoveMode; // offset 0x15C4, size 0x4
    float autoMoveDist; // offset 0x15C8, size 0x4
    struct pointer_asset * autoMovePointer; // offset 0x15CC, size 0x4
    struct xBase * autoMoveSender; // offset 0x15D0, size 0x4
    float extraIdleTimer; // offset 0x15D4, size 0x4
    class zSpringboard * springboard; // offset 0x15D8, size 0x4
    class zNPCBase * interactingNPC; // offset 0x15DC, size 0x4
    float walkLerp; // offset 0x15E0, size 0x4
    int finishingMove; // offset 0x15E4, size 0x4
    class zNPCCommon * lastHitNPC; // offset 0x15E8, size 0x4
protected:
    unsigned int powerUpTbl[5]; // offset 0x15EC, size 0x14
private:
    unsigned int expPoints; // offset 0x1600, size 0x4
    unsigned int expPointsToUpgrade; // offset 0x1604, size 0x4
    unsigned int nukes; // offset 0x1608, size 0x4
    unsigned char speed; // offset 0x160C, size 0x1
public:
    unsigned int upgradeLevel; // offset 0x1610, size 0x4
    unsigned int uCommonPlayerFlags; // offset 0x1614, size 0x4
private:
    struct xMat4x3 playerAbsMat; // offset 0x1620, size 0x40
    struct xVec3 lastFloorNorm; // offset 0x1660, size 0xC
    float maxVelmag; // offset 0x166C, size 0x4
    float leanLerp; // offset 0x1670, size 0x4
    float moveSpeedNormal[6]; // offset 0x1674, size 0x18
    float moveSpeedJump[6]; // offset 0x168C, size 0x18
    float normalTurnFactor; // offset 0x16A4, size 0x4
    float attackTurnFactor; // offset 0x16A8, size 0x4
    float airTurnFactor; // offset 0x16AC, size 0x4
    float stoppedTurnSpeedUp; // offset 0x16B0, size 0x4
    float animWalk[3]; // offset 0x16B4, size 0xC
    float animRun[3]; // offset 0x16C0, size 0xC
    struct xAnimState * lastState; // offset 0x16CC, size 0x4
    struct xAnimState * stateStack[16]; // offset 0x16D0, size 0x40
    // total size: 0x2
    struct /* @class$2474zScene_cpp */ {
        // Members
        signed short incrediPower; // offset 0x0, size 0x2
    } checkpoint; // offset 0x1710, size 0x2
    unsigned char shouldTurnToFace; // offset 0x1712, size 0x1
    unsigned char allowTurnToFaceAbort; // offset 0x1713, size 0x1
    float turnToFaceAngle; // offset 0x1714, size 0x4
    float turnToFaceSpeed; // offset 0x1718, size 0x4
    float lastMag; // offset 0x171C, size 0x4
    float lastAngle; // offset 0x1720, size 0x4
    float moveAcceleration; // offset 0x1724, size 0x4
    float moveDeceleration; // offset 0x1728, size 0x4
    float runTimer; // offset 0x172C, size 0x4
    float minimumRunTime; // offset 0x1730, size 0x4
    float turnInPlaceTimer; // offset 0x1734, size 0x4
    float stickMagnitude; // offset 0x1738, size 0x4
    float stickAngle; // offset 0x173C, size 0x4
    float facingAngle; // offset 0x1740, size 0x4
    unsigned char facingAngleValid; // offset 0x1744, size 0x1
    unsigned char useThrowTarget; // offset 0x1745, size 0x1
    struct xVec3 throwTarget; // offset 0x1748, size 0xC
    float skidStopDeceleration; // offset 0x1754, size 0x4
    float skidStopDecelTime; // offset 0x1758, size 0x4
    float skidStopLerpTime; // offset 0x175C, size 0x4
    class zPlayerConstrainer constrainer; // offset 0x1760, size 0x1
    unsigned char pushedPlayerLastFrame; // offset 0x1761, size 0x1
    struct xVec3 pushedPlayerEnemyPos; // offset 0x1764, size 0xC
public:
    struct zPlayerCarryInfo carry; // offset 0x1770, size 0xD0
};
// total size: 0x14
struct zInteractionAsset : public xDynAsset {
    // Members
    unsigned char initiallyActive; // offset 0x10, size 0x1
    unsigned char initiallyAvailable; // offset 0x11, size 0x1
};
enum zInteractionType {
    eInteractionTypeSwitchLever = 0,
    eInteractionTypeLaunch = 1,
    eInteractionTypeLookoutPoint = 2,
    eInteractionTypeDistractionPoint = 3,
    eInteractionTypeCount = 4,
};
// total size: 0x28
class zInteraction : public xBase {
    // Members
protected:
    struct zCommonPlayer * interactingPlayer; // offset 0x10, size 0x4
    struct zInteractionAsset * asset; // offset 0x14, size 0x4
    enum zInteractionType type; // offset 0x18, size 0x4
    struct xEnt * object; // offset 0x1C, size 0x4
    unsigned char activated; // offset 0x20, size 0x1
    unsigned char available; // offset 0x21, size 0x1
public:
    void * __vptr$; // offset 0x24, size 0x4
};
// total size: 0x18
struct zTriggerInteractionAsset : public zInteractionAsset {
    // Members
    unsigned int triggerID; // offset 0x14, size 0x4
};
// total size: 0x30
class zTriggerInteraction : public zInteraction {
    // Members
protected:
    float logoAlpha; // offset 0x28, size 0x4
    struct zEntTrigger * trigger; // offset 0x2C, size 0x4
};
enum zSwitchLeverState {
    eSwitchLeverOff = 0,
    eSwitchLeverOn = 1,
    eSwitchLeverSwitchingOff = 2,
    eSwitchLeverSwitchingOn = 3,
    eSwitchLeverCount = 4,
};
// total size: 0x4C
struct zSwitchLeverAsset : public zTriggerInteractionAsset {
    // Members
    struct xVec3 location; // offset 0x18, size 0xC
    float yaw; // offset 0x24, size 0x4
    unsigned int modelID; // offset 0x28, size 0x4
    unsigned int offIdleAnimID; // offset 0x2C, size 0x4
    unsigned int onIdleAnimID; // offset 0x30, size 0x4
    unsigned int switchOffAnimID; // offset 0x34, size 0x4
    unsigned int switchOnAnimID; // offset 0x38, size 0x4
    unsigned int lightID; // offset 0x3C, size 0x4
    unsigned int sparkOffID; // offset 0x40, size 0x4
    unsigned int sparkOnID; // offset 0x44, size 0x4
    unsigned char initiallyOn; // offset 0x48, size 0x1
};
// total size: 0x74
class zSwitchLever : public zTriggerInteraction {
    // Members
protected:
    struct pointer_asset playerLocation; // offset 0x30, size 0x28
    struct xLight * light; // offset 0x58, size 0x4
    enum zSwitchLeverState state; // offset 0x5C, size 0x4
    float animPercent; // offset 0x60, size 0x4
    struct xEnt * lockedEntity; // offset 0x64, size 0x4
    struct xBase * sparksOff; // offset 0x68, size 0x4
    struct xBase * sparksOn; // offset 0x6C, size 0x4
    float collisionTempOffTimer; // offset 0x70, size 0x4
};
// total size: 0x14
class zNPCPerceptionTarget {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct xEnt * targetEnt; // offset 0x4, size 0x4
    float priority; // offset 0x8, size 0x4
    float distSq; // offset 0xC, size 0x4
    float damagedByTimer; // offset 0x10, size 0x4
};
// total size: 0x70
class zNPCPerception {
    // Static members
    static int completeUpdateCount; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zNPCCommon * owner; // offset 0x4, size 0x4
    class zNPCPerceptionTarget target[4]; // offset 0x8, size 0x50
    int totalTargets; // offset 0x58, size 0x4
    struct xEnt * widgetTargetEnt; // offset 0x5C, size 0x4
    struct xEnt * smashMeWidgetTargetEnt; // offset 0x60, size 0x4
    float completeUpdateTimeSince; // offset 0x64, size 0x4
    float completeUpdateTimeLeft; // offset 0x68, size 0x4
    unsigned char widgetAttackForever; // offset 0x6C, size 0x1
};
// total size: 0x14
struct group_asset : public xDynAsset {
    // Static members
    static int VERSION; // size: 0x4

    // Members
    int max_attackers; // offset 0x10, size 0x4
};
// total size: 0x18
class group : public xBase {
    // Members
protected:
    const struct group_asset * asset; // offset 0x10, size 0x4
    int attacking_count; // offset 0x14, size 0x4
};
enum ezBlockDir {
    ezBlockDir_None = 0,
    ezBlockDir_Front = 1,
    ezBlockDir_Around = 2,
};
// total size: 0x0
struct xModelAssetParam {};
// total size: 0x14
struct xHierarchyNode {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
};
// total size: 0x8
struct xHierarchTweakInfo {
    // Members
    const char * * boneNames; // offset 0x0, size 0x4
    unsigned char lastCount; // offset 0x4, size 0x1
    signed char hilight; // offset 0x5, size 0x1
    signed char boneCount; // offset 0x6, size 0x1
    unsigned char rootSelected; // offset 0x7, size 0x1
};
// total size: 0x20
struct xHierarchyBound {
    // Members
    struct xSphere master; // offset 0x0, size 0x10
    struct xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
    struct xHierarchTweakInfo tweakInfo; // offset 0x18, size 0x8
};
// total size: 0x20
struct sphereInfo {
    // Members
    struct xSphere sphere; // offset 0x0, size 0x10
    struct xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x8
struct block_data {
    // Members
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0x1C
class tier_queue_allocator {
    // Members
    struct block_data * blocks; // offset 0x0, size 0x4
    unsigned long _unit_size; // offset 0x4, size 0x4
    unsigned long _block_size; // offset 0x8, size 0x4
    unsigned long _block_size_shift; // offset 0xC, size 0x4
    unsigned long _max_blocks; // offset 0x10, size 0x4
    unsigned long _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
// total size: 0x2C
struct joint_data {
    // Members
    int flags; // offset 0x0, size 0x4
    unsigned int born; // offset 0x4, size 0x4
    struct xVec3 loc; // offset 0x8, size 0xC
    struct xVec3 norm; // offset 0x14, size 0xC
    float orient; // offset 0x20, size 0x4
    float scale; // offset 0x24, size 0x4
    float alpha; // offset 0x28, size 0x4
};
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// total size: 0x30
class tier_queue {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
};
// total size: 0x48
struct activity_data {
    // Members
    struct xFXRibbon * owner; // offset 0x0, size 0x4
    struct activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x30
    int curve_index; // offset 0x38, size 0x4
    float ilife; // offset 0x3C, size 0x4
    unsigned int mtime; // offset 0x40, size 0x4
    unsigned int mlife; // offset 0x44, size 0x4
};
// total size: 0xC
struct curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x20
struct config_type {
    // Members
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    int flags; // offset 0x10, size 0x4
    const struct curve_node * curve; // offset 0x14, size 0x4
    int curve_size; // offset 0x18, size 0x4
    struct RwRaster * raster; // offset 0x1C, size 0x4
};
// total size: 0x0
struct debug_info {};
// total size: 0x14
struct xFXRibbon {
    // Static members
    static unsigned char need_sort; // size: 0x1
    static int activities_used; // size: 0x4
    static struct activity_data * activities[32]; // size: 0x80
    static class tier_queue_allocator joint_alloc; // size: 0x1C

    // Members
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
private:
    struct activity_data * act; // offset 0x8, size 0x4
    const struct config_type * cfg; // offset 0xC, size 0x4
    struct debug_info * debug; // offset 0x10, size 0x4
};
// total size: 0x38
class PunchEffect {
    // Members
    struct xFXRibbon * up[2]; // offset 0x0, size 0x8
    struct xFXRibbon * right[2]; // offset 0x8, size 0x8
    float lastTime; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float distance[2]; // offset 0x18, size 0x8
    struct xVec3 averageWidth[2]; // offset 0x20, size 0x18
};
// total size: 0x180
struct zCombat {
    // Static members
    static int MAX_HIT_OBJECTS; // size: 0x4

    // Members
    struct xHierarchyBound bounds; // offset 0x0, size 0x20
    unsigned int lastBoundUpdateTime; // offset 0x20, size 0x4
    signed short currentHitPoints; // offset 0x24, size 0x2
    signed short maximumHitPoints; // offset 0x26, size 0x2
    unsigned short stateTableSize; // offset 0x28, size 0x2
    const class zCombatAttack * stateTable; // offset 0x2C, size 0x4
    const struct xAnimState * animationState; // offset 0x30, size 0x4
    const class zCombatAttack * runningAttack; // offset 0x34, size 0x4
    float runningAttackTimer; // offset 0x38, size 0x4
    struct xEnt * lastNPCDamaged; // offset 0x3C, size 0x4
    unsigned char disableMovement; // offset 0x40, size 0x1
    unsigned char runningEffect; // offset 0x41, size 0x1
    unsigned char runningBlur; // offset 0x42, size 0x1
    unsigned char hitting; // offset 0x43, size 0x1
    unsigned char hitEnv; // offset 0x44, size 0x1
    unsigned char hitObject; // offset 0x45, size 0x1
    unsigned char forceReset; // offset 0x46, size 0x1
    unsigned char hitObjectCount; // offset 0x47, size 0x1
    struct xEnt * hitObjects[24]; // offset 0x48, size 0x60
    signed short currentDamage; // offset 0xA8, size 0x2
    signed short lastHitDamage; // offset 0xAA, size 0x2
    enum zHitSource lastHitSource; // offset 0xAC, size 0x4
    enum zHitTarget lastHitTarget; // offset 0xB0, size 0x4
    struct sphereInfo location[4]; // offset 0xB4, size 0x80
    int (* envCollisionCB)(struct xEnt *, struct xSweptSphere *, struct xEnv *); // offset 0x134, size 0x4
    class PunchEffect punchEffect; // offset 0x138, size 0x38
    unsigned int effectParam; // offset 0x170, size 0x4
private:
    struct xEnt * DEBUG_ent; // offset 0x174, size 0x4
    const char * * DEBUG_bones; // offset 0x178, size 0x4
    int DEBUG_boneCount; // offset 0x17C, size 0x4
};
enum ezHitReaction {
    zHR_None = 0,
    zHR_Smash = 1,
    zHR_Damage = 2,
    zHR_FlyBack = 3,
    zHR_FlyBackFar = 4,
    zHR_FlyUp = 5,
    zHR_FlyIceGlide = 6,
    zHR_InstaThaw = 7,
    zHR_Total = 8,
};
enum ezHitReactionState {
    zHRS_Normal = 0,
    zHRS_Frozen = 1,
    zHRS_Total = 2,
};
enum zThrowableSize {
    ezThrowableSize_Small = 0,
    ezThrowableSize_Medium = 1,
    ezThrowableSize_Large = 2,
    ezThrowableSize_Count = 3,
};
enum ezNPCRumbleType {
    ezNPCRT_Tiny = 0,
    ezNPCRT_Small = 1,
    ezNPCRT_Medium = 2,
    ezNPCRT_Large = 3,
    ezNPCRT_Time = 4,
    ezNPCRT_Total = 5,
};
// total size: 0xC
struct Exit {
    // Members
    int exitTriangleIndex; // offset 0x0, size 0x4
    int destTriangleIndex; // offset 0x4, size 0x4
    int neighborMeshIndex; // offset 0x8, size 0x4
};
// total size: 0x4
struct Triangle {
    // Members
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
};
// total size: 0x34
class xNavigationMeshAssetSubMesh {
    // Members
public:
    unsigned char * portalLookup; // offset 0x0, size 0x4
    unsigned char * portal; // offset 0x4, size 0x4
    float * edgeShift; // offset 0x8, size 0x4
    struct Exit * exits; // offset 0xC, size 0x4
    int numExits; // offset 0x10, size 0x4
    struct xVec3 * vertices; // offset 0x14, size 0x4
    int numVertices; // offset 0x18, size 0x4
    struct Triangle * triangles; // offset 0x1C, size 0x4
    int numTriangles; // offset 0x20, size 0x4
    unsigned int * objects; // offset 0x24, size 0x4
    int numObjects; // offset 0x28, size 0x4
    unsigned char * levelTwoRouteExits; // offset 0x2C, size 0x4
    unsigned int runtimeFlags; // offset 0x30, size 0x4
};
// total size: 0x30
class zMeshCircle {
    // Members
public:
    class zMeshCircle * masterListNext; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float radius2; // offset 0x8, size 0x4
    struct xEnt * ownerEntity; // offset 0xC, size 0x4
    struct xVec3 center; // offset 0x10, size 0xC
    struct xVec2 center2; // offset 0x1C, size 0x8
    class xNavigationMeshAsset * mesh; // offset 0x24, size 0x4
    unsigned int npcActiveFlags; // offset 0x28, size 0x4
    class zMeshCircle * nextNearbyCircle; // offset 0x2C, size 0x4
};
// total size: 0x14
class xNavigationMeshAsset : public xBaseAsset {
    // Members
public:
    int numSubMeshes; // offset 0x8, size 0x4
    class xNavigationMeshAssetSubMesh * subMeshes; // offset 0xC, size 0x4
    class zMeshCircle * circleList; // offset 0x10, size 0x4
};
// total size: 0x18
class zMeshPosition {
    // Members
    class xNavigationMeshAsset * mesh; // offset 0x0, size 0x4
    int currentSubMesh; // offset 0x4, size 0x4
    int currentTriangle; // offset 0x8, size 0x4
    struct xVec3 currentPosition; // offset 0xC, size 0xC
};
// total size: 0x0
struct zNPCCombatInitData {};
enum ezNPCOneLinerType {
    ezOLT_Noticing = 0,
    ezOLT_Attacking = 1,
    ezOLT_Retreating = 2,
    ezOLT_TakingDamage = 3,
    ezOLT_PickedUp = 4,
    ezOLT_Frozen = 5,
    ezOLT_Defeated = 6,
    ezOLT_Blocking = 7,
    ezOLT_External = 8,
    ezOLT_Total = 9,
};
enum en_npctyp {
    NPC_TYPE_UNKNOWN = 0,
    NPC_TYPE_THIEF = 1,
    NPC_TYPE_CHEF = 2,
    NPC_TYPE_COUNT = 3,
    NPC_TYPE_FORCE_INT = 2147483647,
};
// total size: 0xDB0
class zNPCCommon : public zNPCBaseIN2 {
    // Static members
    static enum ezHitReaction hitReactionTable[3][2][65]; // size: 0x618

    // Members
public:
    struct xVec3 bound_offset; // offset 0xE4, size 0xC
    float move_speed_multiply; // offset 0xF0, size 0x4
    struct xEntDrive npcDrive; // offset 0x100, size 0xC0
    class zNPCCommonMoveToTransient * moveToTransient; // offset 0x1C0, size 0x4
    class zNPCCommonNukeTransient * nukeTransient; // offset 0x1C4, size 0x4
    class zNPCCommonAnimTest * animTestState; // offset 0x1C8, size 0x4
    class zNPCCommonPlayTaunt * playTauntState; // offset 0x1CC, size 0x4
    class zNPCCommonPlayCustomTransient * playCustomTransient; // offset 0x1D0, size 0x4
    class zNPCCommonInterestingIdle * interestingIdleState; // offset 0x1D4, size 0x4
    // total size: 0x4
    struct /* @class$2958zScene_cpp */ {
        // Members
        unsigned char human : 1; // offset 0x0, size 0x1
        unsigned char cast_shadow : 1; // offset 0x0, size 0x1
        unsigned char complex_shadow : 1; // offset 0x0, size 0x1
        unsigned char dying : 1; // offset 0x0, size 0x1
        unsigned char not_throw_target : 1; // offset 0x0, size 0x1
        unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
        unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
        unsigned char carried : 1; // offset 0x0, size 0x1
        unsigned char invincible : 1; // offset 0x1, size 0x1
        unsigned char firstUpdate : 1; // offset 0x1, size 0x1
        unsigned char noDamageSmoke : 1; // offset 0x1, size 0x1
        unsigned char pad2 : 5; // offset 0x1, size 0x1
        unsigned char pad3 : 8; // offset 0x2, size 0x1
        unsigned char old_chkby : 8; // offset 0x3, size 0x1
    } commonFlags; // offset 0x1D8, size 0x4
    struct zDebugStoredEvents storedEvents[8]; // offset 0x1E0, size 0x100
    struct zDebugStoredAnimChanges storedAnimChanges[8]; // offset 0x2E0, size 0x840
    class zNPCNavigate * navigation_behavior; // offset 0xB20, size 0x4
    class zBehaviorManager manager; // offset 0xB24, size 0x84
    float freezeValue; // offset 0xBA8, size 0x4
    float freezeMultiplier; // offset 0xBAC, size 0x4
    float freezeColorValue; // offset 0xBB0, size 0x4
    unsigned char skipThaw; // offset 0xBB4, size 0x1
    unsigned char inJumpVolume; // offset 0xBB5, size 0x1
    unsigned char inSlowEnemyCollisionVolume; // offset 0xBB6, size 0x1
    unsigned char canBlock; // offset 0xBB7, size 0x1
    unsigned char canDodge; // offset 0xBB8, size 0x1
    unsigned char canJump; // offset 0xBB9, size 0x1
    unsigned char canTakeDamage; // offset 0xBBA, size 0x1
    unsigned char delayedFinishedSpawningEvent; // offset 0xBBB, size 0x1
    float nukeShockScaleRatio; // offset 0xBBC, size 0x4
    float nukeRotation; // offset 0xBC0, size 0x4
    float stunRotation; // offset 0xBC4, size 0x4
    float stunAxisRotation; // offset 0xBC8, size 0x4
    float nukeShockRotation; // offset 0xBCC, size 0x4
    struct xEnt * killedBy; // offset 0xBD0, size 0x4
    float shieldCurrent; // offset 0xBD4, size 0x4
    float lastAnimTime; // offset 0xBD8, size 0x4
    enum xSndHandle hackE3LoopingSoundHandle; // offset 0xBDC, size 0x4
    struct zNPCBlurInstance * blurInstance; // offset 0xBE0, size 0x4
    class zSwitchLever * lever; // offset 0xBE4, size 0x4
    int leverAction; // offset 0xBE8, size 0x4
    class zNPCPerception perception; // offset 0xBEC, size 0x70
    float shadow_radius; // offset 0xC5C, size 0x4
    signed short incredi_power_points; // offset 0xC60, size 0x2
    int grab_bone; // offset 0xC64, size 0x4
    struct xVec3 grab_offset; // offset 0xC68, size 0xC
    struct xVec3 surroundedMoveTo; // offset 0xC74, size 0xC
    unsigned char surroundedValid; // offset 0xC80, size 0x1
    struct xVec3 shakeModelDisp; // offset 0xC84, size 0xC
    float tweak_scale; // offset 0xC90, size 0x4
    struct xVec3 tweak_offset; // offset 0xC94, size 0xC
    const char * debug_name; // offset 0xCA0, size 0x4
    unsigned char tweak_use_bounding_box; // offset 0xCA4, size 0x1
    unsigned char debug_output; // offset 0xCA5, size 0x1
protected:
    unsigned char off_during_cinematic; // offset 0xCA6, size 0x1
    float NPCFXdt; // offset 0xCA8, size 0x4
    float near_target_radius; // offset 0xCAC, size 0x4
    float mass; // offset 0xCB0, size 0x4
    float cull_distance; // offset 0xCB4, size 0x4
    class group * group_data; // offset 0xCB8, size 0x4
    struct zCombatDamageInfo currentCombatInfo; // offset 0xCBC, size 0x38
    enum ezBlockDir blockDirection; // offset 0xCF4, size 0x4
    signed short bound_bone; // offset 0xCF8, size 0x2
    unsigned short sound_id_offset; // offset 0xCFA, size 0x2
    unsigned short globalParametersSize; // offset 0xCFC, size 0x2
    struct xModelAssetParam * globalParameters; // offset 0xD00, size 0x4
    unsigned short overrideParametersSize; // offset 0xD04, size 0x2
    struct xModelAssetParam * overrideParameters; // offset 0xD08, size 0x4
    float shadow_strength; // offset 0xD0C, size 0x4
    float attackingPlayerTimer; // offset 0xD10, size 0x4
    struct xEnt * attackingPlayerEnt; // offset 0xD14, size 0x4
    struct xGroup * interestPointerGroup; // offset 0xD18, size 0x4
    struct xModelInstance * nukeIcon; // offset 0xD1C, size 0x4
    struct xModelInstance * nukeRings[6]; // offset 0xD20, size 0x18
    struct xModelInstance * stunIcon; // offset 0xD38, size 0x4
    struct xModelInstance * shieldGenerator; // offset 0xD3C, size 0x4
    float destroyShieldGeneratorTimer; // offset 0xD40, size 0x4
    float destroyShieldSparkTimer; // offset 0xD44, size 0x4
    struct xBound oldBound; // offset 0xD48, size 0x4C
    struct xEnt * aboutToBeHitBy; // offset 0xD94, size 0x4
    struct xEnt * lastHitBy; // offset 0xD98, size 0x4
    unsigned char hitByThrowable; // offset 0xD9C, size 0x1
public:
    float originalScale; // offset 0xDA0, size 0x4
    unsigned char ourDeathHasBeenRegistered; // offset 0xDA4, size 0x1
protected:
    float prevAlpha; // offset 0xDA8, size 0x4
};
// Range: 0x8015FE74 -> 0x8015FEB8
static void DeactivateCB(struct xBase * base /* r0 */) {}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80C01460
enum eGameMode {
    eGameMode_Boot = 0,
    eGameMode_Intro = 1,
    eGameMode_Title = 2,
    eGameMode_Start = 3,
    eGameMode_Load = 4,
    eGameMode_Options = 5,
    eGameMode_Save = 6,
    eGameMode_Pause = 7,
    eGameMode_WorldMap = 8,
    eGameMode_MonsterGallery = 9,
    eGameMode_ConceptArtGallery = 10,
    eGameMode_Game = 11,
    eGameMode_Count = 12,
};
enum eGameMode gGameMode; // size: 0x4, address: 0x80C08160
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
struct xColor_tag g_BLACK; // size: 0x4, address: 0x80C0A278
struct xColor_tag g_CLEAR; // size: 0x4, address: 0x80C0A28C
union FloatAndVoid {
    float f; // offset 0x0, size 0x4
    void * v; // offset 0x0, size 0x4
};
// total size: 0x24
struct zLODTable {
    // Members
    struct xModelBucket * * baseBucket; // offset 0x0, size 0x4
    float noRenderDist; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    struct xModelBucket * * lodBucket[3]; // offset 0xC, size 0xC
    float lodDist[3]; // offset 0x18, size 0xC
};
// Range: 0x8015FEB8 -> 0x80160D40
void zSceneSetup() {
    // Local variables
    long long t; // r16
    struct zScene * s; // r31
    unsigned int dontcaresize; // r1+0x10
    int CutsceneTocCount; // r0
    int i; // r18
    int i; // r17
    struct xBase * b; // r18
    int i; // r16
    int i; // r17
    int max_drivensort_iters; // r21
    unsigned int driven_swapped; // r22
    unsigned int i; // r7
    unsigned int j; // r8
    struct xEnt * bdriven; // r9
    struct xBase * btmp; // r0
    struct zEntSimpleObj * * entList; // r16
    unsigned int entCount; // r17
    struct xEnt * * entList; // r30
    int entCount; // r29
    int i; // r5
    int j; // r21
    unsigned int k; // r23
    unsigned int numPrimeMovers; // r28
    unsigned int numDriven; // r24
    int driverCount; // r16
    struct xEnt * ent; // r21
    unsigned int id; // r17
    unsigned int numGroups; // r27
    struct xGroup * grp; // r25
    unsigned int gcnt; // r0
    struct xBase * gbase; // r0
    struct xEnt * gent; // r0
    struct xGroup * driveGroupList; // r26
    unsigned int currMover; // r20
    struct xGroupAsset * grpAssetList; // r5
    struct xBase * * grpBaseList; // r19
    unsigned int i; // r6
    int i; // r18
    struct xEnt * ent; // r0
    struct xGroupAsset * gasset; // r17
    struct xEnt * other; // r16
    struct xGroup * * tempGrpList; // r16
    struct xGroup * * tempGrpCurr; // r17
    struct xGroup * grp; // r0
    unsigned int i; // r0
    union FloatAndVoid defaultDist; // r1+0xC
    union FloatAndVoid lodDist; // r1+0x8
    struct zLODTable * lod; // r21

    // References
    // -> struct zGlobals globals;
    // -> int xModelInstStaticAlloc;
    // -> struct xColor_tag g_CLEAR;
    // -> struct xColor_tag g_BLACK;
    // -> void * RwEngineInstance;
    // -> static char __FUNCTION__[12];
    // -> static unsigned int enableScreenAdj;
    // -> enum eGameMode gGameMode;
    // -> struct xGlobals * xglobals;
    // -> struct _zEnv * gCurEnv;
}

// Range: 0x80160D40 -> 0x80160DE4
void zSceneSetObjectLightKit(struct xLightKit * objLightKit /* r28 */) {
    // Local variables
    int f; // r30
    struct zScene * zsc; // r29

    // References
    // -> struct zGlobals globals;
}

static char __FUNCTION__[21]; // size: 0x15, address: 0x80C0146C
// Range: 0x80160DE4 -> 0x80160F48
void zSceneResetLightKits() {
    // Local variables
    int i; // r28
    struct xEnvAsset * easset; // r28
    struct xLightKit * objLightKit; // r0
    int lkitCount; // r0
    struct xLightKit * lkit; // r27
    struct xGroup * group; // r26
    unsigned int j; // r25
    unsigned int nitam; // r0
    struct xBase * itamz; // r0

    // References
    // -> static char __FUNCTION__[21];
    // -> struct zGlobals globals;
}

// Range: 0x80160F48 -> 0x80161000
int zSceneSetup_serialTraverseCB(unsigned int clientID /* r31 */, struct xSerial * xser /* r4 */) {
    // Local variables
    char uiName[16]; // r1+0xC
    int val; // r1+0x8
    struct xBase * UIptr; // r0
}

float gSceneUpdateTime; // size: 0x4, address: 0x80C08430
static struct xVec3 sOldPosPlayer; // size: 0xC, address: 0x80C08434
static struct xVec3 sOldPosCamera; // size: 0xC, address: 0x80C08440
static unsigned int sSuddenMove; // size: 0x4, address: 0x80C0844C
static unsigned int sUITimers[10]; // size: 0x28, address: 0x80B9FC40
static unsigned int init; // size: 0x4, address: 0x80C08450
static signed char init; // size: 0x1, address: 0x80C08454
static char __FUNCTION__[13]; // size: 0xD, address: 0x80C01484
struct _tagxPad mPad[4]; // size: 0x4E0, address: 0x80A84818
// total size: 0x118
struct xStats {
    // Members
    long long cpu; // offset 0x0, size 0x8
    long long render; // offset 0x8, size 0x8
    long long world_render; // offset 0x10, size 0x8
    long long model_render; // offset 0x18, size 0x8
    long long ent_update; // offset 0x20, size 0x8
    long long shadow; // offset 0x28, size 0x8
    long long shadow_track; // offset 0x30, size 0x8
    long long shadow_texrender; // offset 0x38, size 0x8
    long long shadow_collideworld; // offset 0x40, size 0x8
    long long shadow_renderworld; // offset 0x48, size 0x8
    long long shadow_receivesetup; // offset 0x50, size 0x8
    long long shadow_frustumtest; // offset 0x58, size 0x8
    long long shadow_receive; // offset 0x60, size 0x8
    long long collision; // offset 0x68, size 0x8
    long long anim; // offset 0x70, size 0x8
    long long particle; // offset 0x78, size 0x8
    long long sound; // offset 0x80, size 0x8
    long long font; // offset 0x88, size 0x8
    long long villainUpdate; // offset 0x90, size 0x8
    long long villainCollide; // offset 0x98, size 0x8
    long long villainDBG; // offset 0xA0, size 0x8
    long long villainInput; // offset 0xA8, size 0x8
    long long villainAnim; // offset 0xB0, size 0x8
    long long zprjUpdate; // offset 0xB8, size 0x8
    long long zprjCollide; // offset 0xC0, size 0x8
    long long zprjEffects; // offset 0xC8, size 0x8
    long long zprjSolver; // offset 0xD0, size 0x8
    long long player_update; // offset 0xD8, size 0x8
    long long particleRender; // offset 0xE0, size 0x8
    long long renderUI; // offset 0xE8, size 0x8
    long long scene_update; // offset 0xF0, size 0x8
    long long scene_render; // offset 0xF8, size 0x8
    long long x1; // offset 0x100, size 0x8
    long long x2; // offset 0x108, size 0x8
    long long x3; // offset 0x110, size 0x8
};
struct xStats gPendingStats; // size: 0x118, address: 0x8045A328
// Range: 0x80161000 -> 0x80161B28
void zSceneUpdate(float elapsedSec /* f29 */) {
    // Local variables
    long long tsu; // r0
    int i; // r23
    int isPaused; // r0
    float apadx; // f0
    float apady; // f0
    int i; // r27
    struct zScene * pScene; // r26
    struct xBase * * ppBaseObjs; // r27
    struct xBase * bob; // r25
    struct xEnt * ent; // r0
    int timer; // r22
    char str[32]; // r1+0x8
    int timer; // r0

    // References
    // -> struct xStats gPendingStats;
    // -> unsigned int SCENE_ID_MNU_START;
    // -> class zTimeHandlerMgr timehandler_mgr;
    // -> static unsigned int sSuddenMove;
    // -> static unsigned int sUITimers[10];
    // -> static unsigned int init;
    // -> static signed char init;
    // -> static char __FUNCTION__[13];
    // -> struct zGlobals globals;
    // -> static struct xVec3 sOldPosCamera;
    // -> struct xGlobals * xglobals;
    // -> static struct xVec3 sOldPosPlayer;
    // -> static float offsety;
    // -> static float offsetx;
    // -> static float oldOffsety;
    // -> static float oldOffsetx;
    // -> struct _tagxPad mPad[4];
    // -> static unsigned int enableScreenAdj;
    // -> float gSceneUpdateTime;
}

enum iSndGroupHandle {
};
unsigned int zbuffer_debug_lines; // size: 0x4, address: 0x80C01494
static void (* zSceneSpecialRender_curFunc[2])(); // size: 0x8, address: 0x80C01498
static int zSceneSpecialRender_numFuncs; // size: 0x4, address: 0x80C08458
// Range: 0x80161B28 -> 0x80161B94
static void zSceneSpecialRenderGo() {
    // Local variables
    int i; // r30

    // References
    // -> static int zSceneSpecialRender_numFuncs;
    // -> static void (* zSceneSpecialRender_curFunc[2])();
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80C014A0
int gGCwaterDisable; // size: 0x4, address: 0x80C08B88
float sTimeElapsed; // size: 0x4, address: 0x80C07E04
// Range: 0x80161B94 -> 0x801622F8
void zSceneRenderPreFX() {
    // Local variables
    struct zScene * s; // r30
    struct xScene * sc; // r0
    unsigned int shadowHackCase; // r29
    struct xEnt * * entptr; // r28
    struct xEnt * * entlast; // r27
    struct xEnt * ent; // r26
    int i; // r26
    struct xLightKit * objLightKit; // r0
    int i; // r26

    // References
    // -> struct zGlobals globals;
    // -> struct xGlobals * xglobals;
    // -> unsigned int zbuffer_debug_lines;
    // -> static char __FUNCTION__[18];
    // -> float sTimeElapsed;
    // -> int gGCwaterDisable;
}

// Range: 0x801622F8 -> 0x801623CC
static void zSceneRenderPlayerAgain() {
    // Local variables
    int i; // r31
    int i; // r31

    // References
    // -> struct zGlobals globals;
    // -> struct xGlobals * xglobals;
}

struct xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x80C0A2B4
unsigned int FB_XRES; // size: 0x4, address: 0x80C00BDC
unsigned int FB_YRES; // size: 0x4, address: 0x80C00BE0
// Range: 0x801623CC -> 0x801626F0
static void zSceneRenderPostFX() {
    // Local variables
    int i; // r31
    float left; // f31
    float right; // f30
    float top; // f29
    float bottom; // f28
    enum eGameMode mode; // r0

    // References
    // -> static int neededFiles;
    // -> static int availOnDisk;
    // -> static int bytesNeeded;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> struct xColor_tag g_PIMP_GOLD;
    // -> unsigned char DRAW_SAFE_AREA;
    // -> struct xGlobals * xglobals;
    // -> enum eGameMode gGameMode;
    // -> struct zGlobals globals;
}

enum xScreenDump {
    exSD_NONE = 0,
    exSD_NATIVE = 1,
    exSD_MASSIVE = 2,
    exSD_MASSIVE_RESET = 3,
};
enum xScreenDump gScreenDump; // size: 0x4, address: 0x80C06FB4
// Range: 0x801626F0 -> 0x801628C8
void zSceneRender() {
    // Local variables
    long long tsr; // r0
    int i; // r29
    int i; // r29

    // References
    // -> struct xGlobals * xglobals;
    // -> struct xStats gPendingStats;
    // -> struct zGlobals globals;
    // -> enum xScreenDump gScreenDump;
    // -> static float offsety;
    // -> static float offsetx;
}

// total size: 0x8
struct IDBasePair {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    struct xBase * base; // offset 0x4, size 0x4
};
static struct IDBasePair * scobj_idbps; // size: 0x4, address: 0x80C0845C
static int scobj_size; // size: 0x4, address: 0x80C014B4
static int nidbps; // size: 0x4, address: 0x80C014B8
static char __FUNCTION__[23]; // size: 0x17, address: 0x80C014BC
// Range: 0x801628C8 -> 0x801629C0
static void zSceneObjHashtableInit(int nobj /* r31 */) {
    // References
    // -> static int nidbps;
    // -> static int scobj_size;
    // -> static struct IDBasePair * scobj_idbps;
    // -> static char __FUNCTION__[23];
    // -> unsigned int gActiveHeap;
}

static char __FUNCTION__[23]; // size: 0x17, address: 0x80C014D4
// Range: 0x801629C0 -> 0x80162A98
static void zSceneObjHashtableExit() {
    // References
    // -> static int nidbps;
    // -> static int scobj_size;
    // -> static struct IDBasePair * scobj_idbps;
    // -> static char __FUNCTION__[23];
}

// Range: 0x80162A98 -> 0x80162AA0
static int zSceneObjHashtableUsage() {
    // References
    // -> static int nidbps;
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80C014EC
// Range: 0x80162AA0 -> 0x80162B8C
void zSceneObjHashtableAdd(unsigned int id /* r30 */, struct xBase * base /* r31 */) {
    // Local variables
    int k; // r5
    int chkd; // r0
    struct IDBasePair * idbp; // r6

    // References
    // -> static int nidbps;
    // -> static struct IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> static char __FUNCTION__[22];
}

// Range: 0x80162B8C -> 0x80162BF0
static struct xBase * zSceneObjHashtableGet(unsigned int id /* r0 */) {
    // Local variables
    int k; // r6
    int chkd; // r0
    struct IDBasePair * idbp; // r7

    // References
    // -> static struct IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}

// Range: 0x80162BF0 -> 0x80162C10
struct xBase * zSceneFindObject(unsigned int gameID /* r0 */) {}

// Range: 0x80162C10 -> 0x80162C6C
char * zSceneGetName(unsigned int gameID /* r31 */) {
    // Local variables
    struct xBase * b; // r0
    const char * n; // r0
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80C01504
// Range: 0x80162C6C -> 0x80162D08
char * zSceneGetName(struct xBase * b /* r31 */) {
    // Local variables
    const char * n; // r0

    // References
    // -> static char __FUNCTION__[14];
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80C01514
// Range: 0x80162D08 -> 0x80162E30
void zSceneForAllBase(struct xBase * (* func)(struct xBase *, struct zScene *, void *) /* r30 */, void * data /* r31 */) {
    // Local variables
    struct zScene * s; // r28
    unsigned short i; // r27

    // References
    // -> static char __FUNCTION__[17];
    // -> struct zGlobals globals;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80C01528
// Range: 0x80162E30 -> 0x80162F68
void zSceneForAllBase(struct xBase * (* func)(struct xBase *, struct zScene *, void *) /* r29 */, int baseType /* r30 */, void * data /* r31 */) {
    // Local variables
    struct zScene * s; // r27
    unsigned short i; // r26

    // References
    // -> static char __FUNCTION__[17];
    // -> struct zGlobals globals;
}

// Range: 0x80162F68 -> 0x80162F98
static struct xBase * zSceneExitSoundIteratorCB(struct xBase * b /* r31 */) {}

// Range: 0x80162F98 -> 0x80162F9C
void zSceneMemLvlChkCB() {}

// Range: 0x80162F9C -> 0x80163048
unsigned int zSceneLeavingLevel() {
    // Local variables
    char current[4]; // r1+0xC
    char dest[4]; // r1+0x8

    // References
    // -> struct zGlobals globals;
}

// Range: 0x80163048 -> 0x801630D8
char * zSceneGetLevelName(unsigned int sceneID /* r31 */) {
    // Local variables
    int world; // r1+0xC
    int task; // r1+0x8
    char name[32]; // r1+0x10
    const char * text; // r0
}

// Range: 0x801630D8 -> 0x80163154
char * zSceneGetAreaName(unsigned int sceneID /* r0 */) {
    // Local variables
    int world; // r1+0xC
    int task; // r1+0x8
    char name[32]; // r1+0x10
    const char * text; // r0
}

// Range: 0x80163154 -> 0x801631A4
unsigned int zSceneGetLevelIndex() {
    // Local variables
    int world; // r1+0xC
    int task; // r1+0x8

    // References
    // -> struct zGlobals globals;
}

// total size: 0xC
struct /* @class$1263zScene_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$1263zScene_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// Range: 0x801631A4 -> 0x801631C4
unsigned int zSceneCalcProgress() {}

// Range: 0x801631C4 -> 0x801631E4
void zScene_UpdateFlyToInterface(float dt /* f0 */) {}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80C0153C
// Range: 0x801631E4 -> 0x80163340
void zSceneEnableVisited(struct zScene * s /* r31 */) {
    // Local variables
    unsigned int uiNameID; // r0
    char uiName[64]; // r1+0x8
    const char * sceneName; // r30
    int i; // r6

    // References
    // -> static char __FUNCTION__[20];
}

// Range: 0x80163340 -> 0x80163348
void zSceneEnableScreenAdj(unsigned int enable /* r0 */) {
    // References
    // -> static unsigned int enableScreenAdj;
}

// Range: 0x80163348 -> 0x8016335C
void zSceneSetOldScreenAdj() {
    // References
    // -> static float offsety;
    // -> static float oldOffsety;
    // -> static float offsetx;
    // -> static float oldOffsetx;
}

// Range: 0x8016335C -> 0x80163370
void zScene_ScreenAdjustMode_SetMenuOffset() {
    // References
    // -> static float offsety;
    // -> static float menuOldOffsety;
    // -> static float offsetx;
    // -> static float menuOldOffsetx;
}

// Range: 0x80163370 -> 0x8016339C
unsigned char zScene_ScreenAdjustMode_WasAdjusted() {
    // References
    // -> static float offsety;
    // -> static float menuOldOffsety;
    // -> static float offsetx;
    // -> static float menuOldOffsetx;
}

// Range: 0x8016339C -> 0x801633B0
void zScene_ScreenAdjustMode_GetMenuOffset() {
    // References
    // -> static float menuOldOffsety;
    // -> static float offsety;
    // -> static float menuOldOffsetx;
    // -> static float offsetx;
}

// Range: 0x801633B0 -> 0x801633D0
void zSceneResetScreenAdj() {}

// Range: 0x801633D0 -> 0x801633D8
unsigned int zScene_ScreenAdjustMode() {
    // References
    // -> static unsigned int enableScreenAdj;
}

static char __FUNCTION__[19]; // size: 0x13, address: 0x80C01550
// Range: 0x801633D8 -> 0x8016361C
unsigned char zSceneLoadPackFile(unsigned int id /* r30 */, int options /* r28 */, unsigned char noLocalized /* r29 */, const char * filename /* r31 */) {
    // Local variables
    int versionNumber; // r0
    int versionNumber; // r3
    char buffer[256]; // r1+0x8
    char * token; // r29

    // References
    // -> static unsigned char sLoadingPackFile;
    // -> static char __FUNCTION__[19];
}

// Range: 0x8016361C -> 0x80163700
unsigned char zSceneUpdateAsset(struct xBase & sceneObject /* r3 */, void * asset /* r4 */, unsigned int assetSize /* r5 */) {
    // Local variables
    int i; // r8

    // References
    // -> static struct dynamic_type_data dynamic_types[92];
    // -> static struct zSceneObjectInstanceDesc sInitTable[32];
}

const char * * all_texture_labels; // size: 0x4, address: 0x80C08460
unsigned int * all_texture_ids; // size: 0x4, address: 0x80C08464
unsigned int all_texture_count; // size: 0x4, address: 0x80C08468
const char * * all_entity_labels; // size: 0x4, address: 0x80C0846C
unsigned int * all_entity_ids; // size: 0x4, address: 0x80C08470
unsigned int all_entity_count; // size: 0x4, address: 0x80C08474
const char * * all_models_labels; // size: 0x4, address: 0x80C08478
unsigned int * all_models_ids; // size: 0x4, address: 0x80C0847C
struct RpAtomic * * all_models_pointers; // size: 0x4, address: 0x80C08480
int all_models_count; // size: 0x4, address: 0x80C08484
// Range: 0x80163700 -> 0x80163728
static int icompare_strings(void * e1 /* r3 */, void * e2 /* r4 */) {}

// total size: 0xC
struct TexKAndL {
    // Members
    struct RwTexture * tex; // offset 0x0, size 0x4
    float k; // offset 0x4, size 0x4
    unsigned int L; // offset 0x8, size 0x4
};
struct TexKAndL * texKAndL; // size: 0x4, address: 0x80C08488
// total size: 0x28
struct tweak_callback {
    // Members
    void (* on_change)(struct tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(struct tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(struct tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(struct tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(struct tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(struct tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(struct tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(struct tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(struct tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(struct tweak_info &, void *); // offset 0x24, size 0x4
};
// Range: 0x80163728 -> 0x80163A64
static void add_texture_tweaks() {
    // Local variables
    char * label_buffer; // r29
    char * tweak_buffer; // r28
    char * * labels; // r27
    unsigned int * ids; // r26
    int size; // r25
    int i; // r24
    struct PKRAssetTOCInfo info; // r1+0x10
    const char * name; // r23
    struct RwTexture * texture; // r22
    char tweak_name[128]; // r1+0x30
    int i; // r22
    char * s; // r27
    char * end; // r0

    // References
    // -> unsigned int all_texture_count;
    // -> unsigned int gActiveHeap;
    // -> struct TexKAndL * texKAndL;
    // -> unsigned int * all_texture_ids;
    // -> const char * * all_texture_labels;
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x80163A64 -> 0x80163E34
static void add_entity_tweaks() {
    // Local variables
    struct zSceneObjectInstanceDesc * it; // r20
    const struct dynamic_type_data * it; // r20
    const struct dynamic_type_data * end; // r0
    char * label_buffer; // r26
    const char * * labels; // r25
    unsigned int * ids; // r24
    int index; // r23
    struct zSceneObjectInstanceDesc * it; // r28
    int i; // r22
    int end; // r0
    struct PKRAssetTOCInfo info; // r1+0x30
    const char * name; // r6
    int i; // r22
    int end; // r0
    unsigned char is_ent; // r19
    const struct xDynAsset * a; // r0
    const struct dynamic_type_data * it; // r21
    const struct dynamic_type_data * myend; // r0
    struct PKRAssetTOCInfo info; // r1+0x10
    const char * name; // r6
    int i; // r19
    char * s; // r24

    // References
    // -> unsigned int all_entity_count;
    // -> static struct dynamic_type_data dynamic_types[92];
    // -> static struct zSceneObjectInstanceDesc sInitTable[32];
    // -> unsigned int * all_entity_ids;
    // -> const char * * all_entity_labels;
}

// Range: 0x80163E34 -> 0x80163E48
static void convert_model_to_visibility(const struct tweak_info & info /* r0 */, void * value /* r0 */) {}

// Range: 0x80163E48 -> 0x80163E6C
static void convert_visibility_to_model(const struct tweak_info & info /* r0 */, void * value /* r0 */) {
    // Local variables
    unsigned int flags; // r4
}

// Range: 0x80163E6C -> 0x80163EAC
static void disable_all_models() {
    // Local variables
    int i; // r5
    struct RpAtomic * model; // r3
    unsigned int flags; // r0

    // References
    // -> int all_models_count;
    // -> struct RpAtomic * * all_models_pointers;
}

// Range: 0x80163EAC -> 0x80163EEC
static void enable_all_models() {
    // Local variables
    int i; // r5
    struct RpAtomic * model; // r3
    unsigned int flags; // r0

    // References
    // -> int all_models_count;
    // -> struct RpAtomic * * all_models_pointers;
}

// Range: 0x80163EEC -> 0x80163F2C
static void toggle_all_models() {
    // Local variables
    int i; // r5
    struct RpAtomic * model; // r3
    unsigned int flags; // r0

    // References
    // -> int all_models_count;
    // -> struct RpAtomic * * all_models_pointers;
}

static struct tweak_callback cb; // size: 0x28, address: 0x8043C41C
static signed char init; // size: 0x1, address: 0x80C0848C
static unsigned char dummy; // size: 0x1, address: 0x80C0848D
static signed char init; // size: 0x1, address: 0x80C0848E
static struct tweak_callback cb_disable_all; // size: 0x28, address: 0x803DCBC8
static struct tweak_callback cb_enable_all; // size: 0x28, address: 0x803DCBF0
static struct tweak_callback cb_toggle_all; // size: 0x28, address: 0x803DCC18
// total size: 0xC
struct ModelTweakInit {
    // Members
    const char * label; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    struct RpAtomic * pointer; // offset 0x8, size 0x4
};
// Range: 0x80163F2C -> 0x80164498
static void prepare_model_list() {
    // Local variables
    int modelCount; // r0
    struct ModelTweakInit * tweaks; // r28
    unsigned int runningCount; // r27
    int i; // r26
    struct PKRAssetTOCInfo info; // r1+0x8
    char buffer[128]; // r1+0x50
    unsigned int i; // r4

    // References
    // -> int all_models_count;
    // -> struct RpAtomic * * all_models_pointers;
    // -> unsigned int * all_models_ids;
    // -> const char * * all_models_labels;
    // -> static struct tweak_callback cb_toggle_all;
    // -> static struct tweak_callback cb_enable_all;
    // -> static struct tweak_callback cb_disable_all;
    // -> static struct tweak_callback cb;
    // -> static unsigned char dummy;
    // -> static signed char init;
    // -> static signed char init;
    // -> struct xGlobals * xglobals;
}

// Range: 0x80164498 -> 0x8016449C
static void model_poly_count_helper() {}

static char * * asset_map_labels[195]; // size: 0x30C, address: 0x80B9FC68
static unsigned int * asset_map_ids[195]; // size: 0x30C, address: 0x80B9FF74
static unsigned int asset_map_size[195]; // size: 0x30C, address: 0x80BA0280
static const char * none_label; // size: 0x4, address: 0x80C08490
static signed char init; // size: 0x1, address: 0x80C08494
static const char * * empty_labels; // size: 0x4, address: 0x80C08498
static signed char init; // size: 0x1, address: 0x80C0849C
static const unsigned int * empty_ids; // size: 0x4, address: 0x80C084A0
static signed char init; // size: 0x1, address: 0x80C084A4
static unsigned int none_id; // size: 0x4, address: 0x80C0C418
// Range: 0x8016449C -> 0x8016492C
static void create_widget_maps() {
    // Local variables
    int i; // r20
    int end; // r0
    int size; // r0
    int type; // r9
    int label_size; // r21
    char * label; // r22
    char * * labels; // r23
    struct zSceneObjectInstanceDesc * it; // r26
    struct PKRAssetTOCInfo info; // r1+0x28
    const struct dynamic_type_data * it; // r20
    const struct dynamic_type_data * c_dtd_end; // r0
    const struct xDynAsset * a; // r0
    const struct dynamic_type_data * it; // r20
    const struct dynamic_type_data * myend; // r0
    struct PKRAssetTOCInfo info; // r1+0x8
    unsigned int & msize; // r0
    unsigned int * ids; // r0

    // References
    // -> static unsigned int * asset_map_ids[195];
    // -> static char * * asset_map_labels[195];
    // -> static unsigned int asset_map_size[195];
    // -> static struct dynamic_type_data dynamic_types[92];
    // -> static struct zSceneObjectInstanceDesc sInitTable[32];
    // -> static const unsigned int * empty_ids;
    // -> static const char * * empty_labels;
    // -> static signed char init;
    // -> static unsigned int none_id;
    // -> static signed char init;
    // -> static const char * none_label;
    // -> static signed char init;
}

// total size: 0x8
struct raster_pair {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
};
static struct raster_pair * raster_map; // size: 0x4, address: 0x80C084A8
static int raster_map_size; // size: 0x4, address: 0x80C084AC
// Range: 0x8016492C -> 0x80164A0C
static void create_raster_map() {
    // Local variables
    const char * * texture_labels; // r1+0xC
    const unsigned int * texture_ids; // r1+0x8
    int i; // r29
    unsigned int id; // r4

    // References
    // -> static struct raster_pair * raster_map;
    // -> static int raster_map_size;
}

static struct asset_type_tweak_map * asset_type_maps; // size: 0x4, address: 0x80C084B0
static int asset_type_maps_size; // size: 0x4, address: 0x80C084B4
// total size: 0xC
struct temp_asset_info {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int dyn_type; // offset 0x4, size 0x4
    unsigned int id; // offset 0x8, size 0x4
};
// Range: 0x80164A0C -> 0x80164A34
static int compare_temp_asset_info(void * e1 /* r0 */, void * e2 /* r0 */) {
    // Local variables
    const struct temp_asset_info & t1; // r0
    const struct temp_asset_info & t2; // r0
}

static char __FUNCTION__[22]; // size: 0x16, address: 0x80C01564
// Range: 0x80164A34 -> 0x80164ED8
static void create_asset_type_map() {
    // Local variables
    unsigned int * static_types; // r28
    int static_types_size; // r0
    int total_assets; // r29
    int i; // r21
    struct temp_asset_info * assinfo_buffer; // r27
    struct temp_asset_info * assinfo; // r21
    int i; // r25
    int type_assets; // r0
    int j; // r26
    struct xDynAsset * dynass; // r0
    struct PKRAssetTOCInfo ainfo; // r1+0x8
    unsigned int last_type; // r6
    unsigned int last_dyn_type; // r7
    int i; // r0
    int type_index; // r26
    int i; // r25
    int i; // r25
    struct asset_type_tweak_map & atype; // r26
    int temp_index; // r24
    int j; // r23
    char * label; // r20
    int label_size; // r3
    int j; // r20
    const char * label; // r21

    // References
    // -> static int asset_type_maps_size;
    // -> static struct asset_type_tweak_map * asset_type_maps;
    // -> static char __FUNCTION__[22];
}

// Range: 0x80164ED8 -> 0x80164F0C
static void add_scene_tweaks() {}

// Range: 0x80164F0C -> 0x80164F24
unsigned int zSceneGetTextureTweakMap(const char * * & labels /* r0 */, const unsigned int * & ids /* r0 */) {
    // References
    // -> unsigned int all_texture_count;
    // -> unsigned int * all_texture_ids;
    // -> const char * * all_texture_labels;
}

// Range: 0x80164F24 -> 0x80164F3C
unsigned int zSceneGetModelTweakMap(const char * * & labels /* r0 */, const unsigned int * & ids /* r0 */) {
    // References
    // -> int all_models_count;
    // -> unsigned int * all_models_ids;
    // -> const char * * all_models_labels;
}

// Range: 0x80164F3C -> 0x80164F54
unsigned int zSceneGetEntityTweakMap(const char * * & labels /* r0 */, const unsigned int * & ids /* r0 */) {
    // References
    // -> unsigned int all_entity_count;
    // -> unsigned int * all_entity_ids;
    // -> const char * * all_entity_labels;
}

static char __FUNCTION__[24]; // size: 0x18, address: 0x80C0157C
// Range: 0x80164F54 -> 0x80165018
unsigned int zSceneGetWidgetTweakMap(const char * * & labels /* r29 */, const unsigned int * & ids /* r30 */, int type /* r31 */) {
    // References
    // -> static unsigned int asset_map_size[195];
    // -> static unsigned int * asset_map_ids[195];
    // -> static char * * asset_map_labels[195];
    // -> static char __FUNCTION__[24];
}

static const char * empty_label; // size: 0x4, address: 0x80C084BC
static signed char init; // size: 0x1, address: 0x80C084C0
static unsigned int empty_id; // size: 0x4, address: 0x80C0C41C
// total size: 0x14
struct asset_type_tweak_map {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int dyn_type; // offset 0x4, size 0x4
    union { // inferred
        int temp_index; // offset 0x8, size 0x4
        char * * labels; // offset 0x8, size 0x4
    };
    unsigned int * ids; // offset 0xC, size 0x4
    int size; // offset 0x10, size 0x4
};
// Range: 0x80165018 -> 0x801650DC
unsigned int zSceneGetAssetTweakMap(const char * * & labels /* r29 */, const unsigned int * & ids /* r30 */, unsigned int asset_type /* r0 */, unsigned int dyn_type /* r0 */) {
    // Local variables
    struct asset_type_tweak_map key; // r1+0xC
    struct asset_type_tweak_map * end; // r31
    struct asset_type_tweak_map * found; // r0

    // References
    // -> static unsigned int empty_id;
    // -> static const char * empty_label;
    // -> static signed char init;
    // -> static int asset_type_maps_size;
    // -> static struct asset_type_tweak_map * asset_type_maps;
}

// Range: 0x801650DC -> 0x80165144
unsigned int zSceneGetTextureIDFromRaster(struct RwRaster * raster /* r1+0x8 */) {
    // Local variables
    struct raster_pair * raster_map_end; // r31
    struct raster_pair * found; // r0

    // References
    // -> static int raster_map_size;
    // -> static struct raster_pair * raster_map;
}

static unsigned int gLastSceneID; // size: 0x4, address: 0x80C084C8
// Range: 0x80165144 -> 0x8016514C
void zSceneSetLastSceneID(unsigned int value /* r0 */) {
    // References
    // -> static unsigned int gLastSceneID;
}

// total size: 0x1
struct compare_asset_type_tweak_map {};
// Range: 0x8016514C -> 0x80165174
static int compare_asset_type_tweak_map::operator()(const struct asset_type_tweak_map & t1 /* r0 */, const struct asset_type_tweak_map & t2 /* r0 */) {}

// total size: 0x1
struct compare_raster {};
// Range: 0x80165174 -> 0x80165180
static int compare_raster::operator()(struct RwRaster * raster /* r0 */, const struct raster_pair & b /* r0 */) {}


