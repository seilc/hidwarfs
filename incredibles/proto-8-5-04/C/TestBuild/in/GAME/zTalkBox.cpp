/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
static class shared_type shared; // size: 0x8698, address: 0x671CA0
unsigned int zero; // size: 0x4, address: 0x608CA4
unsigned int zero; // size: 0x4, address: 0x0
static class tag_type new_tags[12]; // size: 0xF0, address: 0x508900
static unsigned int new_tags_size; // size: 0x4, address: 0x607850
static float music_fade; // size: 0x4, address: 0x608CA8
static float music_fade_delay; // size: 0x4, address: 0x607854
class zGlobals globals; // size: 0x640, address: 0x61C210
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
// total size: 0x14
struct /* @anon2 */ {} @unnamed@zTalkBox_cpp@::stop_state_type::__vtable; // size: 0x14, address: 0x5FD200
// total size: 0x14
struct /* @anon3 */ {} @unnamed@zTalkBox_cpp@::state_type::__vtable; // size: 0x14, address: 0x0
// total size: 0x14
struct /* @anon0 */ {} @unnamed@zTalkBox_cpp@::wait_state_type::__vtable; // size: 0x14, address: 0x5FD220
// total size: 0x14
struct /* @anon4 */ {} @unnamed@zTalkBox_cpp@::next_state_type::__vtable; // size: 0x14, address: 0x5FD240
// total size: 0x14
struct /* @anon1 */ {} @unnamed@zTalkBox_cpp@::start_state_type::__vtable; // size: 0x14, address: 0x5FD260
void cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x1E97F0
void parse_tag_wait(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // size: 0x0, address: 0x1EAA70
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0xD8
class xEnt : public xBase {
    // Members
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char _isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(class xEnt *); // offset 0x24, size 0x4
    class xModelInstance * model; // offset 0x28, size 0x4
    class xModelInstance * collModel; // offset 0x2C, size 0x4
    class xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x18
    class xBound bound; // offset 0x68, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB4, size 0x4
    class xFFX * ffx; // offset 0xB8, size 0x4
    class xEnt * driver; // offset 0xBC, size 0x4
    class xEnt * driven; // offset 0xC0, size 0x4
    signed int driveMode; // offset 0xC4, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    class xEntShadow * entShadow; // offset 0xCC, size 0x4
    class anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x8
class TriggerPadsContext {
    // Members
public:
    unsigned int triggerPadTalkBoxID; // offset 0x0, size 0x4
    unsigned char triggerPads; // offset 0x4, size 0x1
};
// total size: 0x640
class zGlobals : public xGlobals {
    // Members
public:
    unsigned int playerTag; // offset 0x560, size 0x4
    unsigned char playerLoaded; // offset 0x564, size 0x1
    unsigned char invertJoystick; // offset 0x565, size 0x1
    unsigned char invertCameraX; // offset 0x566, size 0x1
    unsigned char invertCameraY; // offset 0x567, size 0x1
    float timeMultiplier; // offset 0x568, size 0x4
    class zPlayerGlobals player; // offset 0x56C, size 0x8C
    class zAssetPickupTable * pickupTable; // offset 0x5F8, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x5FC, size 0x4
    char startDebugMode[32]; // offset 0x600, size 0x20
    unsigned int noMovies; // offset 0x620, size 0x4
    unsigned int boundUpdateTime; // offset 0x624, size 0x4
    unsigned char draw_player_after_fx; // offset 0x628, size 0x1
    unsigned char bAllowMasterCheats; // offset 0x629, size 0x1
    enum zGlobalDemoType demoType; // offset 0x62C, size 0x4
    class zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x630, size 0x4
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
// total size: 0xDC
class ztextbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dirty : 1; // offset 0x0, size 0x1
        unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x74
    char * segments[16]; // offset 0x8C, size 0x40
    unsigned int segments_size; // offset 0xCC, size 0x4
    class ztextbox * next; // offset 0xD0, size 0x4
    class ztextbox * prev; // offset 0xD4, size 0x4
    class RwRaster * bgtex; // offset 0xD8, size 0x4
};
// total size: 0x0
class xCamGroup {};
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
class ztalkbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char visible : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class ztextbox * dialog_box; // offset 0x18, size 0x4
    class ztextbox * prompt_box; // offset 0x1C, size 0x4
    class ztextbox * quit_box; // offset 0x20, size 0x4
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        char * skip; // offset 0x0, size 0x4
        char * noskip; // offset 0x4, size 0x4
        char * quit; // offset 0x8, size 0x4
        char * noquit; // offset 0xC, size 0x4
        char * yesno; // offset 0x10, size 0x4
    } prompt; // offset 0x24, size 0x14
    unsigned int triggerPads; // offset 0x38, size 0x4
    class base * npc; // offset 0x3C, size 0x4
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
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x0
class zCutsceneMgr {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
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
// total size: 0x0
class xCamScreen {};
// total size: 0x11C
class base : public xEnt, public xFactoryInst {
    // Members
public:
    signed short bound_bone; // offset 0xE4, size 0x2
    unsigned short sound_id_offset; // offset 0xE6, size 0x2
    unsigned short global_parameters_size; // offset 0xE8, size 0x2
    unsigned short local_parameters_size; // offset 0xEA, size 0x2
    unsigned int type; // offset 0xEC, size 0x4
    class xModelAssetParam * global_parameters; // offset 0xF0, size 0x4
    class xModelAssetParam * local_parameters; // offset 0xF4, size 0x4
    union { // inferred
        class xMovePoint * movepoint; // offset 0xF8, size 0x4
        unsigned int movepoint_asset_id; // offset 0xF8, size 0x4
    };
    class xEntNPCAssetIN * npc_asset; // offset 0xFC, size 0x4
    class xModelAssetInfo * model_asset; // offset 0x100, size 0x4
    float shadow_strength; // offset 0x104, size 0x4
    float shadow_cache_fudge_factor; // offset 0x108, size 0x4
    class xVec3 bound_offset; // offset 0x110, size 0xC
};
// total size: 0xC
class next_state_type : public state_type {
    // Members
public:
    signed int prev_wait_jot; // offset 0x8, size 0x4
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
    SCE_DEMO_ENDREASON_NETCONFIG_REQUEST = 6,
    SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE = 7,
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
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0x4
class callback {};
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
// total size: 0x38
class jot {
    // Members
public:
    class substr s; // offset 0x0, size 0x8
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
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
// total size: 0x28
class pointer_asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float right; // offset 0x4, size 0x4
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x1C
class sound_context {
    // Members
public:
    enum iSndGroupHandle soundgroup; // offset 0x0, size 0x4
    enum /* @enum */ {
        ACTION_SET = 0,
        ACTION_PUSH = 1,
        ACTION_POP = 2,
    } action : 16; // offset 0x4, size 0x4
    enum /* @enum */ {
        TYPE_INVALID = 0,
        TYPE_VOLUME = 1,
        TYPE_TARGET = 2,
        TYPE_ORIGIN = 3,
    } type : 16; // offset 0x4, size 0x4
    union { // inferred
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            float left; // offset 0x0, size 0x4
            float right; // offset 0x4, size 0x4
        } volume; // offset 0x8, size 0x8
        unsigned int target; // offset 0x8, size 0x4
        class xVec3 origin; // offset 0x8, size 0xC
    };
    unsigned int speaker; // offset 0x14, size 0x4
    unsigned char anim; // offset 0x18, size 0x1
    unsigned char pad[3]; // offset 0x19, size 0x3
};
enum iSndGroupHandle {
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x28
class mblur_data {
    // Members
public:
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0x8
class tag_entry_list {
    // Members
public:
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x18
class xEntNPCAsset {
    // Members
public:
    signed int npcFlags; // offset 0x0, size 0x4
    signed int npcModel; // offset 0x4, size 0x4
    signed int npcProps; // offset 0x8, size 0x4
    unsigned int movepoint; // offset 0xC, size 0x4
    unsigned int taskWidgetPrime; // offset 0x10, size 0x4
    unsigned int taskWidgetSecond; // offset 0x14, size 0x4
};
// total size: 0x70
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
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x48
class asset_type : public xDynAsset {
    // Members
public:
    unsigned int dialog_box; // offset 0x10, size 0x4
    unsigned int prompt_box; // offset 0x14, size 0x4
    unsigned int quit_box; // offset 0x18, size 0x4
    unsigned char trap : 8; // offset 0x1C, size 0x1
    unsigned char pause : 8; // offset 0x1D, size 0x1
    unsigned char allow_quit : 8; // offset 0x1E, size 0x1
    unsigned char trigger_pads : 8; // offset 0x1F, size 0x1
    unsigned char page : 8; // offset 0x20, size 0x1
    unsigned char show : 8; // offset 0x21, size 0x1
    unsigned char hide : 8; // offset 0x22, size 0x1
    unsigned char audio_effect : 8; // offset 0x23, size 0x1
    unsigned int teleport; // offset 0x24, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            unsigned char time : 8; // offset 0x0, size 0x1
            unsigned char prompt : 8; // offset 0x1, size 0x1
            unsigned char sound : 8; // offset 0x2, size 0x1
            unsigned char event : 8; // offset 0x3, size 0x1
        } type; // offset 0x0, size 0x4
        float delay; // offset 0x4, size 0x4
        signed int which_event; // offset 0x8, size 0x4
    } auto_wait; // offset 0x28, size 0xC
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        unsigned int skip; // offset 0x0, size 0x4
        unsigned int noskip; // offset 0x4, size 0x4
        unsigned int quit; // offset 0x8, size 0x4
        unsigned int noquit; // offset 0xC, size 0x4
        unsigned int yesno; // offset 0x10, size 0x4
    } prompt; // offset 0x34, size 0x14
};
// total size: 0x70
class jump {
    // Members
public:
    class zPlayer * player; // offset 0x4, size 0x4
    class xVec3 direction; // offset 0x8, size 0xC
    class xVec3 gravity_velocity; // offset 0x14, size 0xC
    float time; // offset 0x20, size 0x4
    float y; // offset 0x24, size 0x4
    float last_y; // offset 0x28, size 0x4
    float velocity; // offset 0x2C, size 0x4
    float fall_gravity; // offset 0x30, size 0x4
    float fall_gravity_blend_time; // offset 0x34, size 0x4
    float fall_gravity_final; // offset 0x38, size 0x4
    float accelerate_up_time; // offset 0x3C, size 0x4
    float slow_time; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
    float time_to_apex; // offset 0x48, size 0x4
    float fall_start_time; // offset 0x4C, size 0x4
    float minimum_time; // offset 0x50, size 0x4
    float blurLife; // offset 0x54, size 0x4
    float blurAlpha; // offset 0x58, size 0x4
    float blurFadeInTime; // offset 0x5C, size 0x4
    float blurFadeOutTime; // offset 0x60, size 0x4
    unsigned int kButtonJump; // offset 0x64, size 0x4
    unsigned char need_button; // offset 0x68, size 0x1
    unsigned char stop_button; // offset 0x69, size 0x1
    unsigned char camera_track; // offset 0x6A, size 0x1
    char * name; // offset 0x6C, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
enum iSndHandle {
};
// total size: 0x5C
class xEnvAsset : public xBaseAsset {
    // Members
public:
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
    class xVec3 minBounds; // offset 0x44, size 0xC
    class xVec3 maxBounds; // offset 0x50, size 0xC
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
class state_type {
    // Members
public:
    enum state_enum type; // offset 0x0, size 0x4
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
// total size: 0x14
struct /* @anon0 */ {};
// total size: 0x10
class wait_context {
    // Members
public:
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char time : 1; // offset 0x0, size 0x1
        unsigned char prompt : 1; // offset 0x0, size 0x1
        unsigned char sound : 1; // offset 0x0, size 0x1
        unsigned char event : 1; // offset 0x0, size 0x1
        unsigned short pad : 12; // offset 0x0, size 0x2
    } type; // offset 0x0, size 0x2
    unsigned char need; // offset 0x2, size 0x1
    float delay; // offset 0x4, size 0x4
    unsigned int event_mask; // offset 0x8, size 0x4
    enum query_enum query; // offset 0xC, size 0x4
};
// total size: 0xC
class wait_state_type : public state_type {
    // Members
public:
    unsigned char answer_yes; // offset 0x8, size 0x1
};
// total size: 0x0
class xModelAssetInfo {};
// total size: 0xA4
class xShadowSimpleCache {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    class xEnt * castOnEnt; // offset 0x28, size 0x4
    class xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        class RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    class xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
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
// total size: 0xF0
class xEntFrame {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dvel; // offset 0xBC, size 0xC
    class xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    class xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x138
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    class _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    class analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0x5FC
class xEntCollis {
    // Members
public:
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
    class xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x560
class xGlobals {
    // Members
public:
    class xCamGroup * cam; // offset 0x0, size 0x4
    class xCamScreen * screen; // offset 0x4, size 0x4
    class xVec4 frustplane[12]; // offset 0x10, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0xD0, size 0x4
            class _tagxPad * pad1; // offset 0xD4, size 0x4
            class _tagxPad * pad2; // offset 0xD8, size 0x4
            class _tagxPad * pad3; // offset 0xDC, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0xD0, size 0x10
    };
    signed int profile; // offset 0xE0, size 0x4
    char profFunc[6][128]; // offset 0xE4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x3E4, size 0x4
    signed int sceneFirst; // offset 0x3E8, size 0x4
    char sceneStart[32]; // offset 0x3EC, size 0x20
    class RpWorld * currWorld; // offset 0x40C, size 0x4
    class iFogParams fog; // offset 0x410, size 0x1C
    class iFogParams fogA; // offset 0x42C, size 0x1C
    class iFogParams fogB; // offset 0x448, size 0x1C
    signed long fog_t0; // offset 0x468, size 0x4
    signed long fog_t1; // offset 0x470, size 0x4
    signed int option_vibration; // offset 0x478, size 0x4
    signed int option_subtitles; // offset 0x47C, size 0x4
    unsigned int slowdown; // offset 0x480, size 0x4
    float update_dt; // offset 0x484, size 0x4
    signed short ForceCinematic; // offset 0x488, size 0x2
    signed int useHIPHOP; // offset 0x48C, size 0x4
    unsigned char NoMusic; // offset 0x490, size 0x1
    unsigned char NoCutscenes; // offset 0x491, size 0x1
    unsigned char NoPadCheck; // offset 0x492, size 0x1
    char currentActivePad; // offset 0x493, size 0x1
    unsigned char firstStartPressed; // offset 0x494, size 0x1
    unsigned char fromLauncher; // offset 0x495, size 0x1
    unsigned char FlashWIP; // offset 0x496, size 0x1
    unsigned char inLoadingScreen; // offset 0x497, size 0x1
    unsigned char LoadingScene; // offset 0x498, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x499, size 0x1
    unsigned char ForceMono; // offset 0x49A, size 0x1
    unsigned int minVSyncCnt; // offset 0x49C, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x4A0, size 0x1
    unsigned char autoSaveFeature; // offset 0x4A1, size 0x1
    signed int asyncLoadingScreen; // offset 0x4A4, size 0x4
    signed int asyncLoadingFlags; // offset 0x4A8, size 0x4
    char fromLauncherUser[32]; // offset 0x4AC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x4CC, size 0x4
    class zScene * sceneCur; // offset 0x4D0, size 0x4
    class zScene * scenePreload; // offset 0x4D4, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x4D8, size 0x4
    char watermark[127]; // offset 0x4DC, size 0x7F
    unsigned char watermarkAlpha; // offset 0x55B, size 0x1
    float watermarkSize; // offset 0x55C, size 0x4
};
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x74
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    class basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    class callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
    char * * texts; // offset 0x5C, size 0x4
    unsigned int * text_sizes; // offset 0x60, size 0x4
    unsigned int texts_size; // offset 0x64, size 0x4
    class substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x4E0
class zPlayer : public zEnt {
    // Members
public:
    class xVec3 trigLastFramePos; // offset 0xE0, size 0xC
    class xOneLinerManager * pOneLinerSys; // offset 0xEC, size 0x4
    class Incredimeter * pIncredimeter; // offset 0xF0, size 0x4
    class BossMeter * pBossMeter; // offset 0xF4, size 0x4
    class FamilyMeter * pFamilyMeter; // offset 0xF8, size 0x4
    class xScene * sc; // offset 0xFC, size 0x4
    class xLightKit * lightKit; // offset 0x100, size 0x4
    class xMat4x3 lastmat; // offset 0x110, size 0x40
    signed int brain_id; // offset 0x150, size 0x4
    class xVec3 lastDeltaPos; // offset 0x154, size 0xC
    float update_dt; // offset 0x160, size 0x4
    float last_update_dt; // offset 0x164, size 0x4
    class xVec3 update_motion; // offset 0x168, size 0xC
    class xVec3 previous_position; // offset 0x174, size 0xC
    class jump * currentJump; // offset 0x180, size 0x4
    class xVec3 predictRotate; // offset 0x184, size 0xC
    class xVec3 predictTranslate; // offset 0x190, size 0xC
    float predictAngV; // offset 0x19C, size 0x4
    class xVec3 predictCurrDir; // offset 0x1A0, size 0xC
    float predictCurrVel; // offset 0x1AC, size 0x4
    class zSlideCam * slideCam; // offset 0x1B0, size 0x4
    class xJSPHeader * floor_jsp; // offset 0x1B4, size 0x4
    class xClumpCollBSPTriangle * floor_bspTriangle; // offset 0x1B8, size 0x4
    class xVec3 floorNorm; // offset 0x1BC, size 0xC
    signed int slope; // offset 0x1C8, size 0x4
    float floor_collision_timer; // offset 0x1CC, size 0x4
    float floor_distance; // offset 0x1D0, size 0x4
    class xEnt * floor_entity; // offset 0x1D4, size 0x4
    unsigned int floor_oid; // offset 0x1D8, size 0x4
    class xSurface * floor_surface; // offset 0x1DC, size 0x4
    class xVec3 floor_pos; // offset 0x1E0, size 0xC
    class xVec3 floor_normal; // offset 0x1EC, size 0xC
    class xSphere extraSpheres[5]; // offset 0x1F8, size 0x50
    signed int numExtraSpheres; // offset 0x248, size 0x4
    unsigned int collisionFlags; // offset 0x24C, size 0x4
    unsigned char currentIsNearLedge; // offset 0x250, size 0x1
    unsigned char currentIsNearLedgeValid; // offset 0x251, size 0x1
    float depenetration_velocity; // offset 0x254, size 0x4
    float fallingTime; // offset 0x258, size 0x4
    float idleAnimationTimer; // offset 0x25C, size 0x4
    class xEntShadow entShadow_embedded; // offset 0x260, size 0x2C
    class xShadowSimpleCache simpShadow_embedded; // offset 0x28C, size 0xA4
    unsigned int loaded_assetid; // offset 0x330, size 0x4
    class xEntDrive drv; // offset 0x340, size 0xC0
    float floorDist[4]; // offset 0x400, size 0x10
    float floorTimer[4]; // offset 0x410, size 0x10
    class xVec3 floorSupp[4]; // offset 0x420, size 0x30
    unsigned short parametersSize; // offset 0x450, size 0x2
    class xModelAssetParam * parameters; // offset 0x454, size 0x4
    class xEnt * reticleTarget; // offset 0x458, size 0x4
    class RpAtomic * reticleModel; // offset 0x45C, size 0x4
    float reticleRot; // offset 0x460, size 0x4
    float reticleAlpha; // offset 0x464, size 0x4
    class xMat4x3 reticleMat; // offset 0x470, size 0x40
    float deathTimer; // offset 0x4B0, size 0x4
    unsigned char deathStartedAnim; // offset 0x4B4, size 0x1
    float idleSoundTimer; // offset 0x4B8, size 0x4
    unsigned int oldSlidePen; // offset 0x4BC, size 0x4
    signed int zPlayerFlags; // offset 0x4C0, size 0x4
    float collision_underneath_height; // offset 0x4C4, size 0x4
    float collision_underneath_time; // offset 0x4C8, size 0x4
    class mblur_data * mblur; // offset 0x4CC, size 0x4
    unsigned int * hitSoundsMap; // offset 0x4D0, size 0x4
    unsigned int lorezModelID; // offset 0x4D4, size 0x4
    class xModelInstance * lorezModel; // offset 0x4D8, size 0x4
    class xModelInstance * hirezModel; // offset 0x4DC, size 0x4
};
// total size: 0x54
class xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    class xVec3 norm; // offset 0x18, size 0xC
    class xVec3 tohit; // offset 0x24, size 0xC
    class xVec3 depen; // offset 0x30, size 0xC
    class xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        class tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x0
class xMovePoint {};
// total size: 0x10
class xJSPNodeTreeBranch {
    // Members
public:
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
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
// total size: 0x14
class tag_entry {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned int args_size; // offset 0x10, size 0x4
};
// total size: 0x0
class zSlideCam {};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x0
class xFFX {};
// total size: 0x214
class xIniFile {
    // Members
public:
    signed int NumValues; // offset 0x0, size 0x4
    signed int NumSections; // offset 0x4, size 0x4
    class xIniValue * Values; // offset 0x8, size 0x4
    class xIniSection * Sections; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    char name[256]; // offset 0x14, size 0x100
    char pathname[256]; // offset 0x114, size 0x100
};
// total size: 0x1C
class /* @class */ {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
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
// total size: 0x0
class zGrapplePoint {};
// total size: 0x2C
class xJSPHeader {
    // Members
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    class RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    class xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    class xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x0
class xSurface {};
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
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
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
// total size: 0x4E8
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x68, size 0x4
    signed int num_base; // offset 0x6C, size 0x4
    class xBase * * base; // offset 0x70, size 0x4
    unsigned int num_update_base; // offset 0x74, size 0x4
    class xBase * * update_base; // offset 0x78, size 0x4
    signed int baseCount[140]; // offset 0x7C, size 0x230
    class xBase * baseList[140]; // offset 0x2AC, size 0x230
    class _zEnv * zen; // offset 0x4DC, size 0x4
    class zSceneParameters * parameters; // offset 0x4E0, size 0x4
    unsigned char enableDrawing; // offset 0x4E4, size 0x1
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned short dummy : 4; // offset 0x0, size 0x2
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
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x4
class color_type {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x2C
class xEntShadow {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    signed int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    signed int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    signed int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    signed int flg_shadowUnused : 29; // offset 0x28, size 0x4
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
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x20
class jot_line {
    // Members
public:
    class basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned int first; // offset 0x14, size 0x4
    unsigned int last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x34
class PS2DemoGlobals {
    // Members
public:
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    float inactive_timer; // offset 0x18, size 0x4
    float gameplay_timer; // offset 0x1C, size 0x4
    char subdir[16]; // offset 0x20, size 0x10
    unsigned short quit; // offset 0x30, size 0x2
    unsigned short vmode; // offset 0x32, size 0x2
};
// total size: 0x0
class xOneLinerManager {};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x0
class xGrid {};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x44
class zSceneParameters : public xDynAsset {
    // Members
public:
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    class xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    class xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    unsigned int pad[4]; // offset 0x34, size 0x10
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x8
class start_state_type : public state_type {};
enum state_enum {
    STATE_INVALID = -1,
    BEGIN_STATE = 0,
    STATE_START = 1,
    STATE_NEXT = 2,
    STATE_WAIT = 3,
    STATE_STOP = 4,
    END_STATE = 5,
    MAX_STATE = 5,
};
// total size: 0x8C
class zPlayerGlobals {
    // Members
public:
    class zGlobalSettings g; // offset 0x0, size 0x18
    signed int Teeter; // offset 0x18, size 0x4
    float SlipFadeTimer; // offset 0x1C, size 0x4
    signed int Slide; // offset 0x20, size 0x4
    float SlideTimer; // offset 0x24, size 0x4
    signed int Stepping; // offset 0x28, size 0x4
    signed int JumpState; // offset 0x2C, size 0x4
    signed int LastJumpState; // offset 0x30, size 0x4
    float JumpTimer; // offset 0x34, size 0x4
    unsigned int LastProjectile; // offset 0x38, size 0x4
    float ControlOffTimer; // offset 0x3C, size 0x4
    float ControlOnTime; // offset 0x40, size 0x4
    float ForceSlipperyTimer; // offset 0x44, size 0x4
    float ForceSlipperyFriction; // offset 0x48, size 0x4
    float ShockRadius; // offset 0x4C, size 0x4
    float ShockRadiusOld; // offset 0x50, size 0x4
    unsigned int ControlOff; // offset 0x54, size 0x4
    unsigned int ControlOnEvent; // offset 0x58, size 0x4
    class zCheckPoint checkpoint; // offset 0x5C, size 0x1C
    class xVec3 turnToFace; // offset 0x78, size 0xC
    class zGrapplePoint * Grapple; // offset 0x84, size 0x4
    unsigned char bCheatMode; // offset 0x88, size 0x1
    unsigned char bHasBeenHit; // offset 0x89, size 0x1
};
// total size: 0x8504
class layout {
    // Members
public:
    class xtextbox tb; // offset 0x0, size 0x74
    class jot _jots[512]; // offset 0x74, size 0x7000
    unsigned int _jots_size; // offset 0x7074, size 0x4
    class jot_line _lines[128]; // offset 0x7078, size 0x1000
    unsigned int _lines_size; // offset 0x8078, size 0x4
    unsigned char context_buffer[1024]; // offset 0x807C, size 0x400
    unsigned int context_buffer_size; // offset 0x847C, size 0x4
    unsigned short dynamics[64]; // offset 0x8480, size 0x80
    unsigned int dynamics_size; // offset 0x8500, size 0x4
};
// total size: 0x14
struct /* @anon1 */ {};
// total size: 0x20
class xQCData {
    // Members
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
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
// total size: 0x68
class xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_trigs; // offset 0x6, size 0x2
    unsigned short num_stats; // offset 0x8, size 0x2
    unsigned short num_dyns; // offset 0xA, size 0x2
    unsigned short num_npcs; // offset 0xC, size 0x2
    unsigned short num_act_ents; // offset 0xE, size 0x2
    float gravity; // offset 0x10, size 0x4
    float drag; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    unsigned short num_ents_allocd; // offset 0x1C, size 0x2
    unsigned short num_trigs_allocd; // offset 0x1E, size 0x2
    unsigned short num_stats_allocd; // offset 0x20, size 0x2
    unsigned short num_dyns_allocd; // offset 0x22, size 0x2
    unsigned short num_npcs_allocd; // offset 0x24, size 0x2
    class xEnt * * trigs; // offset 0x28, size 0x4
    class xEnt * * stats; // offset 0x2C, size 0x4
    class xEnt * * dyns; // offset 0x30, size 0x4
    class xEnt * * npcs; // offset 0x34, size 0x4
    class xEnt * * act_ents; // offset 0x38, size 0x4
    class xEnv * env; // offset 0x3C, size 0x4
    class xMemPool mempool; // offset 0x40, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x5C, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x60, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x64, size 0x4
};
// total size: 0x50
class xEntAsset : public xBaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    class xVec3 ang; // offset 0x10, size 0xC
    class xVec3 pos; // offset 0x1C, size 0xC
    class xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
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
// total size: 0x1
class RyzMemData {};
// total size: 0x0
class xModelAssetParam {};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
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
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
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
// total size: 0x14
class teleport_context {
    // Members
public:
    unsigned char use_loc; // offset 0x0, size 0x1
    unsigned char use_yaw; // offset 0x1, size 0x1
    class xVec3 loc; // offset 0x4, size 0xC
    float yaw; // offset 0x10, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x168
class xJSPNodeLight {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    signed int lightCount; // offset 0x4, size 0x4
    class RpTie dummyTie; // offset 0x8, size 0x18
    class RpWorldSector dummySector; // offset 0x20, size 0x88
    class xJSPMiniLightTie dummyLightTie[16]; // offset 0xA8, size 0xC0
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
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
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
// total size: 0x0
class activity_data {};
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
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
// total size: 0x84
class asset_type : public xDynAsset {
    // Members
public:
    unsigned int text; // offset 0x10, size 0x4
    class basic_rect bounds; // offset 0x14, size 0x10
    unsigned int font; // offset 0x24, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float width; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
    } size; // offset 0x28, size 0x8
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } space; // offset 0x30, size 0x8
    class color_type color; // offset 0x38, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float right; // offset 0x8, size 0x4
        float bottom; // offset 0xC, size 0x4
    } inset; // offset 0x3C, size 0x10
    enum /* @enum */ {
        XJ_LEFT = 0,
        XJ_CENTER = 1,
        XJ_RIGHT = 2,
    } xjustify; // offset 0x4C, size 0x4
    enum /* @enum */ {
        YJ_TOP = 0,
        YJ_CENTER = 1,
        YJ_BOTTOM = 2,
    } yjustify; // offset 0x50, size 0x4
    enum /* @enum */ {
        EX_UP = 0,
        EX_CENTER = 1,
        EX_DOWN = 2,
        MAX_EX = 3,
    } expand; // offset 0x54, size 0x4
    float max_height; // offset 0x58, size 0x4
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        unsigned int type; // offset 0x0, size 0x4
        class color_type color; // offset 0x4, size 0x4
        unsigned int texture; // offset 0x8, size 0x4
        float borderU; // offset 0xC, size 0x4
        float borderV; // offset 0x10, size 0x4
        float borderWidth; // offset 0x14, size 0x4
        float borderHeight; // offset 0x18, size 0x4
    } backdrop; // offset 0x5C, size 0x1C
    class color_type shadowColor; // offset 0x78, size 0x4
    float shadowOffsetX; // offset 0x7C, size 0x4
    float shadowOffsetY; // offset 0x80, size 0x4
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char visible : 1; // offset 0x0, size 0x1
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x14
struct /* @anon2 */ {};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class trigger_pair {
    // Members
public:
    class ztalkbox * origin; // offset 0x0, size 0x4
    unsigned int event; // offset 0x4, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x4
class signal_context {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned char time : 8; // offset 0x0, size 0x1
        unsigned char prompt : 8; // offset 0x1, size 0x1
        unsigned char sound : 8; // offset 0x2, size 0x1
        unsigned char event : 8; // offset 0x3, size 0x1
    } type; // offset 0x0, size 0x4
    float delay; // offset 0x4, size 0x4
    signed int which_event; // offset 0x8, size 0x4
};
// total size: 0x1C
class zCheckPoint {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
    unsigned char * jsp_active; // offset 0x14, size 0x4
    enum xSndEffect currentEffect; // offset 0x18, size 0x4
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x110
class fixed_queue {
    // Members
public:
    unsigned int _first; // offset 0x0, size 0x4
    unsigned int _last; // offset 0x4, size 0x4
    class trigger_pair _buffer[33]; // offset 0x8, size 0x108
};
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x1C
class iFogParams {
    // Members
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned char time : 8; // offset 0x0, size 0x1
    unsigned char prompt : 8; // offset 0x1, size 0x1
    unsigned char sound : 8; // offset 0x2, size 0x1
    unsigned char event : 8; // offset 0x3, size 0x1
};
// total size: 0x0
class Incredimeter {};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    class basic_rect clip; // offset 0x20, size 0x10
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8698
class shared_type {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    unsigned int permit; // offset 0x4, size 0x4
    class ztalkbox * active; // offset 0x8, size 0x4
    class state_type * state; // offset 0xC, size 0x4
    class state_type * states[5]; // offset 0x10, size 0x14
    class layout lt; // offset 0x24, size 0x8504
    signed int begin_jot; // offset 0x8528, size 0x4
    signed int end_jot; // offset 0x852C, size 0x4
    signed int page_end_jot; // offset 0x8530, size 0x4
    class wait_context wait; // offset 0x8534, size 0x10
    class wait_context auto_wait; // offset 0x8544, size 0x10
    unsigned int wait_event_mask; // offset 0x8554, size 0x4
    class sound_queue sounds; // offset 0x8558, size 0x1C
    unsigned char allow_quit; // offset 0x8574, size 0x1
    unsigned char quitting; // offset 0x8575, size 0x1
    unsigned char delay_events; // offset 0x8576, size 0x1
    class callback * cb; // offset 0x8578, size 0x4
    class fixed_queue triggered; // offset 0x857C, size 0x110
    float volume; // offset 0x868C, size 0x4
    class base * speak_npc; // offset 0x8690, size 0x4
    unsigned int speak_player; // offset 0x8694, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x0
class BossMeter {};
enum query_enum {
    Q_SKIP = 0,
    Q_YESNO = 1,
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
// total size: 0x14
struct /* @anon3 */ {};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x50
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    signed int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    class xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    class xBox * jsp_bound; // offset 0x1C, size 0x4
    signed int * jsp_visibilityCount; // offset 0x20, size 0x4
    signed int jspMatOrderCount; // offset 0x24, size 0x4
    class iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    class RpLight * light[2]; // offset 0x2C, size 0x8
    class RwFrame * light_frame[2]; // offset 0x34, size 0x8
    signed int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
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
// total size: 0x14
struct /* @anon4 */ {};
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum trigger_pads_enum {
    TP_NEVER = 0,
    TP_TRAPPED = 1,
    TP_ACTIVE = 2,
    TP_FORCED_ACTIVE = 3,
};
// total size: 0x0
class FamilyMeter {};
// total size: 0x2C
class xUpdateCullMgr {
    // Members
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char time : 1; // offset 0x0, size 0x1
    unsigned char prompt : 1; // offset 0x0, size 0x1
    unsigned char sound : 1; // offset 0x0, size 0x1
    unsigned char event : 1; // offset 0x0, size 0x1
    unsigned short pad : 12; // offset 0x0, size 0x2
};
// total size: 0x18
class xGridBound {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    class xGrid * grid; // offset 0xC, size 0x4
    class xGridBound * * head; // offset 0x10, size 0x4
    class xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x14
class /* @class */ {
    // Members
public:
    char * skip; // offset 0x0, size 0x4
    char * noskip; // offset 0x4, size 0x4
    char * quit; // offset 0x8, size 0x4
    char * noquit; // offset 0xC, size 0x4
    char * yesno; // offset 0x10, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x4C
class xBound {
    // Members
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
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
// total size: 0x18
class zGlobalSettings {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    unsigned int TakeDamage; // offset 0x4, size 0x4
    unsigned int Initial_Specials; // offset 0x8, size 0x4
    float DamageInvincibility; // offset 0xC, size 0x4
    float Gravity; // offset 0x10, size 0x4
    unsigned char AttractModeDuringGameplay; // offset 0x14, size 0x1
};
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
enum /* @enum */ {
    ACTION_SET = 0,
    ACTION_PUSH = 1,
    ACTION_POP = 2,
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x24
class config_data {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float color_red; // offset 0x8, size 0x4
    float color_green; // offset 0xC, size 0x4
    float color_blue; // offset 0x10, size 0x4
    float color_alpha; // offset 0x14, size 0x4
    float card_dist; // offset 0x18, size 0x4
    float zbias; // offset 0x1C, size 0x4
    signed int max_card_renders; // offset 0x20, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x1C
class sound_queue {
    // Members
public:
    enum iSndHandle _playing[5]; // offset 0x0, size 0x14
    signed int head; // offset 0x14, size 0x4
    signed int tail; // offset 0x18, size 0x4
};
// total size: 0x8
class stop_state_type : public state_type {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x14
class /* @class */ {
    // Members
public:
    unsigned int skip; // offset 0x0, size 0x4
    unsigned int noskip; // offset 0x4, size 0x4
    unsigned int quit; // offset 0x8, size 0x4
    unsigned int noquit; // offset 0xC, size 0x4
    unsigned int yesno; // offset 0x10, size 0x4
};
// total size: 0xC0
class xEntDrive {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * old_driver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 driven_pos_in_old_driver; // offset 0x28, size 0xC
    class xVec3 driven_pos_in_driver; // offset 0x34, size 0xC
    class xVec3 last_driven_pos; // offset 0x40, size 0xC
    float yaw_in_driver; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x60, size 0x60
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
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
enum /* @enum */ {
    TYPE_INVALID = 0,
    TYPE_VOLUME = 1,
    TYPE_TARGET = 2,
    TYPE_ORIGIN = 3,
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8160 -> 0x001E816C
*/
// Range: 0x1E8160 -> 0x1E816C
class ztalkbox * get_active() {
    /* anonymous block */ {
        // Range: 0x1E8160 -> 0x1E816C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8170 -> 0x001E81E4
*/
// Range: 0x1E8170 -> 0x1E81E4
void reset_all() {
    /* anonymous block */ {
        // Range: 0x1E8170 -> 0x1E81E4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E81F0 -> 0x001E82B0
*/
// Range: 0x1E81F0 -> 0x1E82B0
void render_all() {
    /* anonymous block */ {
        // Range: 0x1E81F0 -> 0x1E82B0
        class ztextbox & d; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E82B0 -> 0x001E88D4
*/
// Range: 0x1E82B0 -> 0x1E88D4
void update_all(class xScene & s /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1E82B0 -> 0x1E88D4
        enum state_enum newtype; // r2
        enum trigger_pads_enum tp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E88E0 -> 0x001E88E8
*/
// Range: 0x1E88E0 -> 0x1E88E8
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E88E0 -> 0x1E88E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E88F0 -> 0x001E8A5C
*/
// Range: 0x1E88F0 -> 0x1E8A5C
void init() {
    /* anonymous block */ {
        // Range: 0x1E88F0 -> 0x1E8A5C
        signed char @7172; // @ 0x00608CC8
        class stop_state_type stop_state; // @ 0x00608CD0
        signed char @7169; // @ 0x00608CC4
        class wait_state_type wait_state; // @ 0x0067A3D0
        signed char @7166; // @ 0x00608CC0
        class next_state_type next_state; // @ 0x0067A3C0
        signed char @7163; // @ 0x00608CB0
        class start_state_type start_state; // @ 0x00608CB8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8A60 -> 0x001E8A90
*/
// Range: 0x1E8A60 -> 0x1E8A90
void load_settings(class xIniFile & ini /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E8A60 -> 0x1E8A90
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8A90 -> 0x001E8B50
*/
// Range: 0x1E8A90 -> 0x1E8B50
// this: r17
void ztalkbox::MasterLoveSlave(class xBase * slave /* r2 */, signed int starting /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E8A90 -> 0x1E8B50
        class xGroup * grp; // r20
        unsigned int cnt; // r2
        unsigned int i; // r19
        class xBase * grpitem; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8B50 -> 0x001E8E80
*/
// Range: 0x1E8B50 -> 0x1E8E80
// this: r2
void ztalkbox::stop_talk() {
    /* anonymous block */ {
        // Range: 0x1E8B50 -> 0x1E8E80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8E80 -> 0x001E94F8
*/
// Range: 0x1E8E80 -> 0x1E94F8
// this: r20
void ztalkbox::start_talk(char * s /* r21 */, class callback * cb /* r19 */, class base * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E8E80 -> 0x1E94F8
        class ztextbox & d; // r16
        unsigned char registered; // @ 0x00608CAC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E9500 -> 0x001E97EC
*/
// Range: 0x1E9500 -> 0x1E97EC
// this: r17
void ztalkbox::load(class asset_type & a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1E9500 -> 0x1E97EC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E97F0 -> 0x001EA424
*/
// Range: 0x1E97F0 -> 0x1EA424
static void cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */, float * argf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1E97F0 -> 0x1EA424
        class ztalkbox & e; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA430 -> 0x001EA500
*/
// Range: 0x1EA430 -> 0x1EA500
static void stop_wait(class ztalkbox & e /* r2 */, float * args /* r2 */, unsigned int args_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA430 -> 0x1EA500
        unsigned int mask; // r11
        unsigned int i; // r10
        unsigned int v; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA500 -> 0x001EA664
*/
// Range: 0x1EA500 -> 0x1EA664
static void update_prompts() {
    /* anonymous block */ {
        // Range: 0x1EA500 -> 0x1EA664
        class ztalkbox & active; // r16
        char * message; // r2
        char * queries[2]; // r29+0x28
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA670 -> 0x001EA6EC
*/
// Range: 0x1EA670 -> 0x1EA6EC
static void parseTagResetHide(class jot & j /* r16 */, class split_tag & splitTag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA670 -> 0x1EA6EC
        unsigned int * id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA6F0 -> 0x001EA82C
*/
// Range: 0x1EA6F0 -> 0x1EA82C
static void parseTagTriggerPads(class jot & j /* r20 */, class split_tag & splitTag /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1EA6F0 -> 0x1EA82C
        char * c; // r18
        unsigned char forceActiveTag; // r17
        char * forceActiveKeyword; // r17
        class TriggerPadsContext * context; // r2
        unsigned int talkBoxTriggerPadsID; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA830 -> 0x001EA890
*/
// Range: 0x1EA830 -> 0x1EA890
static unsigned char triggerTagResetHide(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA830 -> 0x1EA890
        class ztalkbox * talkBoxToResetHide; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA890 -> 0x001EA8C0
*/
// Range: 0x1EA890 -> 0x1EA8C0
static unsigned char triggerTagTriggerPads(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA890 -> 0x1EA8C0
        class ztalkbox * talkBoxTriggerPads; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA8C0 -> 0x001EA93C
*/
// Range: 0x1EA8C0 -> 0x1EA93C
static void parseTagShow(class jot & j /* r16 */, class split_tag & splitTag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA8C0 -> 0x1EA93C
        unsigned int * id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA940 -> 0x001EA9E4
*/
// Range: 0x1EA940 -> 0x1EA9E4
static unsigned char triggerTagShow(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA940 -> 0x1EA9E4
        class ztalkbox * talkBoxToShow; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA9F0 -> 0x001EAA6C
*/
// Range: 0x1EA9F0 -> 0x1EAA6C
static unsigned char trigger_wait(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EA9F0 -> 0x1EAA6C
        class wait_context & c; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAA70 -> 0x001EAB50
*/
// Range: 0x1EAA70 -> 0x1EAB50
static void parse_tag_wait(class jot & j /* r2 */, class xtextbox & ctb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAA70 -> 0x1EAB50
        class wait_context & c; // r16
        class tag_entry_list el; // r29+0x28
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAB50 -> 0x001EAB90
*/
// Range: 0x1EAB50 -> 0x1EAB90
static unsigned char trigger_trap(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAB50 -> 0x1EAB90
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAB90 -> 0x001EABD0
*/
// Range: 0x1EAB90 -> 0x1EABD0
static void reset_tag_trap(class jot & j /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAB90 -> 0x1EABD0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EABD0 -> 0x001EAC28
*/
// Range: 0x1EABD0 -> 0x1EAC28
static void parse_tag_trap(class jot & j /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EABD0 -> 0x1EAC28
        unsigned char & c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAC30 -> 0x001EAD0C
*/
// Range: 0x1EAC30 -> 0x1EAD0C
static unsigned char trigger_teleport(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAC30 -> 0x1EAD0C
        class teleport_context & c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAD10 -> 0x001EAE74
*/
// Range: 0x1EAD10 -> 0x1EAE74
static void parse_tag_teleport(class jot & j /* r18 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAD10 -> 0x1EAE74
        class teleport_context & c; // r2
        unsigned int id; // r2
        class xDynAsset * a; // r17
        class pointer_asset & ta; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAE80 -> 0x001EAE98
*/
// Range: 0x1EAE80 -> 0x1EAE98
static unsigned char trigger_allow_quit(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAE80 -> 0x1EAE98
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAEA0 -> 0x001EAEE0
*/
// Range: 0x1EAEA0 -> 0x1EAEE0
static void reset_tag_allow_quit(class jot & j /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAEA0 -> 0x1EAEE0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAEE0 -> 0x001EAF38
*/
// Range: 0x1EAEE0 -> 0x1EAF38
static void parse_tag_allow_quit(class jot & j /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAEE0 -> 0x1EAF38
        unsigned char & c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAF40 -> 0x001EAF48
*/
// Range: 0x1EAF40 -> 0x1EAF48
static unsigned char trigger_pause() {
    /* anonymous block */ {
        // Range: 0x1EAF40 -> 0x1EAF48
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAF50 -> 0x001EAF58
*/
// Range: 0x1EAF50 -> 0x1EAF58
static void reset_tag_pause() {
    /* anonymous block */ {
        // Range: 0x1EAF50 -> 0x1EAF58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAF60 -> 0x001EAF68
*/
// Range: 0x1EAF60 -> 0x1EAF68
static void parse_tag_pause() {
    /* anonymous block */ {
        // Range: 0x1EAF60 -> 0x1EAF68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAF70 -> 0x001EB438
*/
// Range: 0x1EAF70 -> 0x1EB438
static unsigned char trigger_sound(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EAF70 -> 0x1EB438
        class sound_context & c; // r18
        float fVolume; // r29+0x5C
        class ztalkbox & talk; // r2
        class base * npc; // r17
        class xEnt * player; // r16
        class xBase * obj; // r2
        float params[4]; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB440 -> 0x001EB49C
*/
// Range: 0x1EB440 -> 0x1EB49C
static void reset_tag_sound(class jot & j /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EB440 -> 0x1EB49C
        class sound_context & c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB4A0 -> 0x001EB9BC
*/
// Range: 0x1EB4A0 -> 0x1EB9BC
static void parse_tag_sound(class jot & j /* r2 */, class xtextbox & ctb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EB4A0 -> 0x1EB9BC
        class sound_context & c; // r17
        class tag_entry * e; // r2
        class tag_entry_list el; // r29+0xC0
        class substr & action; // r16
        class substr & action; // r16
        signed int anim; // r29+0xCC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB9C0 -> 0x001EBB54
*/
// Range: 0x1EB9C0 -> 0x1EBB54
static unsigned char trigger_signal(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EB9C0 -> 0x1EBB54
        class signal_context & c; // r2
        unsigned int i; // r21
        unsigned int signals[20]; // @ 0x005E83A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBB70 -> 0x001EBD18
*/
// Range: 0x1EBB70 -> 0x1EBD18
static void parse_tag_signal(class jot & j /* r2 */, class xtextbox & ctb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EBB70 -> 0x1EBD18
        class signal_context & c; // r2
        class tag_entry * e; // r2
        class tag_entry_list el; // r29+0x88
        signed int v[20]; // r29+0x20
        unsigned int r; // r2
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBD20 -> 0x001EBD68
*/
// Range: 0x1EBD20 -> 0x1EBD68
static unsigned char trigger_auto_wait(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EBD20 -> 0x1EBD68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBD70 -> 0x001EBE00
*/
// Range: 0x1EBD70 -> 0x1EBE00
static void reset_tag_auto_wait(class jot & j /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EBD70 -> 0x1EBE00
        class wait_context & c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBE00 -> 0x001EBF14
*/
// Range: 0x1EBE00 -> 0x1EBF14
static void parse_tag_auto_wait(class jot & j /* r2 */, class xtextbox & ctb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EBE00 -> 0x1EBF14
        class wait_context & c; // r16
        class tag_entry_list el; // r29+0x28
        class tag_entry & e; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBF20 -> 0x001EC26C
*/
// Range: 0x1EBF20 -> 0x1EC26C
static void load_wait_context(class wait_context & c /* r17 */, class tag_entry_list & el /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EBF20 -> 0x1EC26C
        class tag_entry * e; // r2
        class tag_entry * prompt; // r2
        unsigned int r; // r2
        unsigned int i; // r7
        signed int v[32]; // @ 0x0067A340
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC270 -> 0x001EC374
*/
// Range: 0x1EC270 -> 0x1EC374
static void reset_auto_wait() {
    /* anonymous block */ {
        // Range: 0x1EC270 -> 0x1EC374
        class asset_type & a; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC380 -> 0x001EC430
*/
// Range: 0x1EC380 -> 0x1EC430
static unsigned char read_bool(class substr & s /* r16 */, unsigned char def /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1EC380 -> 0x1EC430
        unsigned int i; // r18
        unsigned int i; // r18
        class substr positive[6]; // @ 0x005E8340
        class substr negative[6]; // @ 0x005E8370
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC430 -> 0x001ECE34
*/
// Range: 0x1EC430 -> 0x1ECE34
static void trigger_pads(unsigned int pressed /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1EC430 -> 0x1ECE34
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE40 -> 0x001ECE48
*/
// Range: 0x1ECE40 -> 0x1ECE48
static void start() {
    /* anonymous block */ {
        // Range: 0x1ECE40 -> 0x1ECE48
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE50 -> 0x001ECE58
*/
// Range: 0x1ECE50 -> 0x1ECE58
static void stop() {
    /* anonymous block */ {
        // Range: 0x1ECE50 -> 0x1ECE58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE60 -> 0x001ECE68
*/
// Range: 0x1ECE60 -> 0x1ECE68
static enum state_enum update() {
    /* anonymous block */ {
        // Range: 0x1ECE60 -> 0x1ECE68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE70 -> 0x001ECE78
*/
// Range: 0x1ECE70 -> 0x1ECE78
// this: r2
static void wait_state_type::start() {
    /* anonymous block */ {
        // Range: 0x1ECE70 -> 0x1ECE78
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECE80 -> 0x001ECFA4
*/
// Range: 0x1ECE80 -> 0x1ECFA4
// this: r2
static void wait_state_type::stop() {
    /* anonymous block */ {
        // Range: 0x1ECE80 -> 0x1ECFA4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ECFB0 -> 0x001ED2B0
*/
// Range: 0x1ECFB0 -> 0x1ED2B0
// this: r2
static enum state_enum wait_state_type::update(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x1ECFB0 -> 0x1ED2B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED2B0 -> 0x001ED5E0
*/
// Range: 0x1ED2B0 -> 0x1ED5E0
static void start() {
    /* anonymous block */ {
        // Range: 0x1ED2B0 -> 0x1ED5E0
        class xtextbox & tb; // r2
        signed int size; // r29+0x4C
        signed int jots_size; // r2
        class jot * prev; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED5E0 -> 0x001ED5E8
*/
// Range: 0x1ED5E0 -> 0x1ED5E8
static void stop() {
    /* anonymous block */ {
        // Range: 0x1ED5E0 -> 0x1ED5E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED5F0 -> 0x001ED614
*/
// Range: 0x1ED5F0 -> 0x1ED614
static enum state_enum update() {
    /* anonymous block */ {
        // Range: 0x1ED5F0 -> 0x1ED614
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED620 -> 0x001ED66C
*/
// Range: 0x1ED620 -> 0x1ED66C
static void start() {
    /* anonymous block */ {
        // Range: 0x1ED620 -> 0x1ED66C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED670 -> 0x001ED678
*/
// Range: 0x1ED670 -> 0x1ED678
static void stop() {
    /* anonymous block */ {
        // Range: 0x1ED670 -> 0x1ED678
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTalkBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ED680 -> 0x001ED688
*/
// Range: 0x1ED680 -> 0x1ED688
static enum state_enum update() {
    /* anonymous block */ {
        // Range: 0x1ED680 -> 0x1ED688
    }
}


