/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCommonPlayerContextActions.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026452C -> 0x80269268
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
// total size: 0xC
class zPlayerContextAction : public zCommonPlayerAction {
    // Functions
    unsigned int MountedCheck();
};
// Range: 0x8026452C -> 0x80264558
// this: r0
unsigned int zPlayerContextAction::MountedCheck() {}

// total size: 0x4
struct /* @class$2222zCommonPlayerContextActions_cpp */ {
    // Members
    float u; // offset 0x0, size 0x4
};
// total size: 0x10
struct /* @class$2223zCommonPlayerContextActions_cpp */ {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    unsigned char forward; // offset 0xC, size 0x1
};
union MountData {
    // total size: 0x4
    struct /* @class$2222zCommonPlayerContextActions_cpp */ {
        // Members
        float u; // offset 0x0, size 0x4
    } tightrope; // offset 0x0, size 0x4
    // total size: 0x10
    struct /* @class$2223zCommonPlayerContextActions_cpp */ {
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
// total size: 0xC
class zCommonPlayerAction : public zPlayerAction {};
static float TURN_ANIM_TIME; // size: 0x4, address: 0x80C053E8
static float WALK_SPEED; // size: 0x4, address: 0x80C053EC
static float LEAN_BALANCING_FORCE; // size: 0x4, address: 0x80C053F0
static float LEAN_GRAVITY_FORCE; // size: 0x4, address: 0x80C053F4
static float LEAN_FALL_ANGLE; // size: 0x4, address: 0x80C053F8
static float LEAN_DIFF_ACCEL; // size: 0x4, address: 0x80C053FC
static float TURN_AROUND_ANGLE; // size: 0x4, address: 0x80C05400
static float TURN_AROUND_MAGNITUDE; // size: 0x4, address: 0x80C05404
static float ORIENTATION_LOOK_AHEAD_SPEED; // size: 0x4, address: 0x80C05408
static float SPEED_INPUT_THETA; // size: 0x4, address: 0x80C0540C
static float START_BLEND_TIME; // size: 0x4, address: 0x80C05410
static float INAIR_LEAN_RATE; // size: 0x4, address: 0x80C05414
static unsigned char CONST_LEAN_GRAVITY; // size: 0x1, address: 0x80C09318
static float CONST_LEAN_GRAVITY_FORCE; // size: 0x4, address: 0x80C05418
static float LEAN_GRAVITY_FORCE_MAX; // size: 0x4, address: 0x80C0541C
static float LEAN_GRAVITY_FORCE_MIN; // size: 0x4, address: 0x80C05420
// total size: 0x10
struct rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
};
static struct rest_config tightropeRest; // size: 0x10, address: 0x80C05424
static unsigned char debugDraw; // size: 0x1, address: 0x80C09319
static unsigned char debugDrawLandState; // size: 0x1, address: 0x80C05434
static unsigned char debugDrawBalanceMeter; // size: 0x1, address: 0x80C05435
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
struct tweak_callback cb_tweak_convert_degrees; // size: 0x28, address: 0x803A9AF0
// total size: 0x2C
class zPlayerTightrope : public zPlayerContextAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    unsigned int FallLeftCheck();

    unsigned int FallRightCheck();

    unsigned int FallCB();

    unsigned int CaughtCheck();

    unsigned int CaughtCB();

    unsigned int TurnAroundCheck();

    unsigned int TurnAroundCB();

    unsigned int DismountCheck();

    unsigned int IdleCheck();

    unsigned int WalkCheck();

    unsigned int IdleMountCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int WalkMountCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int MountedCB();

    void Begin();

    void ForceCameraOrientation();

    void End();

    void UpdateLean(float magnitude, float cosDiff, float dt);

    void UpdatePos(const class zContextObjectTightrope * tightrope, float dt);

    void TightropeMove(float dt, struct xEntFrame * frame, const class zContextObjectTightrope * tightrope);

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    void Timestep(float dt);

    // Members
protected:
    float u; // offset 0xC, size 0x4
    float leanAngle; // offset 0x10, size 0x4
    float leanSpeed; // offset 0x14, size 0x4
    float angleDiff; // offset 0x18, size 0x4
    float speed; // offset 0x1C, size 0x4
    float camBlendTimer; // offset 0x20, size 0x4
    float magnitude; // offset 0x24, size 0x4
    unsigned char forward; // offset 0x28, size 0x1
    unsigned char hitEnd; // offset 0x29, size 0x1
};
// Range: 0x80264558 -> 0x802649D0
void zPlayerTightrope::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static float LEAN_GRAVITY_FORCE_MIN;
    // -> static float LEAN_GRAVITY_FORCE_MAX;
    // -> static float CONST_LEAN_GRAVITY_FORCE;
    // -> static unsigned char CONST_LEAN_GRAVITY;
    // -> static float INAIR_LEAN_RATE;
    // -> static float START_BLEND_TIME;
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> static struct rest_config tightropeRest;
    // -> static float TURN_ANIM_TIME;
    // -> static unsigned char debugDrawBalanceMeter;
    // -> static unsigned char debugDrawLandState;
    // -> static unsigned char debugDraw;
    // -> static float LEAN_GRAVITY_FORCE;
    // -> static float LEAN_BALANCING_FORCE;
    // -> static float ORIENTATION_LOOK_AHEAD_SPEED;
    // -> static float LEAN_DIFF_ACCEL;
    // -> static float LEAN_FALL_ANGLE;
    // -> static float TURN_AROUND_ANGLE;
    // -> static float TURN_AROUND_MAGNITUDE;
    // -> static float WALK_SPEED;
}

// Range: 0x802649D0 -> 0x80264E8C
// this: r30
void zPlayerTightrope::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80264E8C -> 0x802652C4
void zPlayerTightrope::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x802652C4 -> 0x802653A8
// this: r30
void zPlayerTightrope::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x802653A8 -> 0x802653F4
void zPlayerTightrope::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x802653F4 -> 0x80265424
// this: r0
unsigned int zPlayerTightrope::StartCheck() {}

// total size: 0x1C
class xNurbs : public xBaseAsset {
    // Members
    int degree; // offset 0x8, size 0x4
    int knotMaxIndex; // offset 0xC, size 0x4
    int controlMaxIndex; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    struct xVec3 * control; // offset 0x18, size 0x4
};
// total size: 0x1C
struct zContextObjectTightropeAsset : public xDynAsset {
    // Members
    unsigned int curveID; // offset 0x10, size 0x4
    unsigned int objectID; // offset 0x14, size 0x4
    unsigned char fallBelow; // offset 0x18, size 0x1
    unsigned char flags; // offset 0x19, size 0x1
};
// total size: 0x38
class zContextObjectTightrope : public zContextObject {
    // Members
protected:
    struct xBox bound; // offset 0x14, size 0x18
    const class xNurbs * curve; // offset 0x2C, size 0x4
    struct xEnt * object; // offset 0x30, size 0x4
    struct zContextObjectTightropeAsset * asset; // offset 0x34, size 0x4
};
// Range: 0x80265424 -> 0x80265440
// this: r0
unsigned int zPlayerTightrope::FallLeftCheck() {
    // References
    // -> static float LEAN_FALL_ANGLE;
}

// Range: 0x80265440 -> 0x80265458
// this: r0
unsigned int zPlayerTightrope::FallRightCheck() {
    // References
    // -> static float LEAN_FALL_ANGLE;
}

// Range: 0x80265458 -> 0x80265488
// this: r3
unsigned int zPlayerTightrope::FallCB() {}

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
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
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
struct /* @class$1088zCommonPlayerContextActions_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
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
    struct /* @class$1088zCommonPlayerContextActions_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
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
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
union /* @class$1236zCommonPlayerContextActions_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$1236zCommonPlayerContextActions_cpp */ {
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
// total size: 0xC
struct /* @class$1235zCommonPlayerContextActions_cpp */ {
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
        struct /* @class$1235zCommonPlayerContextActions_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
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
// total size: 0x0
struct xGrid {};
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
// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x0
struct xFFX {};
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
// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x0
struct zSlideCam {};
// total size: 0x0
class zNPCCommon {};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
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
// total size: 0x8
struct xModelAssetParam {
    // Members
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
};
// total size: 0x890
struct /* @class$1946zCommonPlayerContextActions_cpp */ {
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
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
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
// total size: 0x10
struct hitBoneInfo {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    struct xVec3 boneOffset; // offset 0x4, size 0xC
};
// total size: 0x0
struct zAnimCacheEntry {};
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
// total size: 0x0
struct zShrapnelAsset {};
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
// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @class$1029zCommonPlayerContextActions_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1030zCommonPlayerContextActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$1031zCommonPlayerContextActions_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$1032zCommonPlayerContextActions_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$1033zCommonPlayerContextActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$1034zCommonPlayerContextActions_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$1035zCommonPlayerContextActions_cpp */ {
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
        struct /* @class$1029zCommonPlayerContextActions_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1030zCommonPlayerContextActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$1031zCommonPlayerContextActions_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$1032zCommonPlayerContextActions_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$1033zCommonPlayerContextActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$1034zCommonPlayerContextActions_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$1035zCommonPlayerContextActions_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
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
// total size: 0xC
struct xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
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
// total size: 0x0
struct xSerial {};
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
    struct /* @class$1946zCommonPlayerContextActions_cpp */ {
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
// Range: 0x80265488 -> 0x802654B4
// this: r3
unsigned int zPlayerTightrope::CaughtCheck() {}

// Range: 0x802654B4 -> 0x802654C8
// this: r0
unsigned int zPlayerTightrope::CaughtCB() {}

// Range: 0x802654C8 -> 0x80265504
// this: r0
unsigned int zPlayerTightrope::TurnAroundCheck() {
    // References
    // -> static float TURN_AROUND_MAGNITUDE;
    // -> static float TURN_AROUND_ANGLE;
}

// Range: 0x80265504 -> 0x8026551C
// this: r0
unsigned int zPlayerTightrope::TurnAroundCB() {}

// Range: 0x8026551C -> 0x80265524
// this: r3
unsigned int zPlayerTightrope::DismountCheck() {}

// Range: 0x80265524 -> 0x8026553C
// this: r0
unsigned int zPlayerTightrope::IdleCheck() {}

// Range: 0x8026553C -> 0x80265554
// this: r0
unsigned int zPlayerTightrope::WalkCheck() {}

// Range: 0x80265554 -> 0x802655A0
// this: r0
unsigned int zPlayerTightrope::IdleMountCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x802655A0 -> 0x802655EC
// this: r0
unsigned int zPlayerTightrope::WalkMountCheck(struct xAnimTransition * tran /* r0 */, struct xAnimSingle * anim /* r0 */) {}

// Range: 0x802655EC -> 0x80265634
// this: r31
unsigned int zPlayerTightrope::MountedCB() {}

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
// Range: 0x80265634 -> 0x8026572C
// this: r30
void zPlayerTightrope::Begin() {
    // Local variables
    const class zContextObjectTightrope * tightrope; // r31
    struct xVec3 splineDir; // r1+0x14

    // References
    // -> static float START_BLEND_TIME;
    // -> static struct rest_config tightropeRest;
}

// Range: 0x8026572C -> 0x80265778
// this: r0
void zPlayerTightrope::ForceCameraOrientation() {
    // Local variables
    struct xVec3 targetPos; // r1+0x8
}

// Range: 0x80265778 -> 0x80265814
// this: r30
void zPlayerTightrope::End() {
    // Local variables
    struct rest_config defaultConfig; // r1+0x8
}

// total size: 0x30
struct target_traits {
    // Members
    struct xVec3 loc; // offset 0x0, size 0xC
    struct xVec3 vel; // offset 0xC, size 0xC
    struct xVec3 motion; // offset 0x18, size 0xC
    struct xVec3 extra_motion; // offset 0x24, size 0xC
};
// total size: 0x14
struct /* @class$2602zCommonPlayerContextActions_cpp */ {
    // Members
    float phi; // offset 0x0, size 0x4
    float vel_theta; // offset 0x4, size 0x4
    float vel_phi; // offset 0x8, size 0x4
    float dphi; // offset 0xC, size 0x4
    float pitch_offset; // offset 0x10, size 0x4
};
// total size: 0x30
struct /* @class$2603zCommonPlayerContextActions_cpp */ {
    // Members
    float input_theta; // offset 0x0, size 0x4
    float input_pitch_offset; // offset 0x4, size 0x4
    float restore_dist; // offset 0x8, size 0x4
    float restore_phi; // offset 0xC, size 0x4
    float target_xz; // offset 0x10, size 0x4
    float target_y; // offset 0x14, size 0x4
    float pitch; // offset 0x18, size 0x4
    float mount; // offset 0x1C, size 0x4
    float look_xz; // offset 0x20, size 0x4
    float collide_dist; // offset 0x24, size 0x4
    float pitch_rest; // offset 0x28, size 0x4
    float pitch_clamp; // offset 0x2C, size 0x4
};
// total size: 0xC
struct /* @class$2604zCommonPlayerContextActions_cpp */ {
    // Members
    float dtheta; // offset 0x0, size 0x4
    float dphi; // offset 0x4, size 0x4
    float ddist; // offset 0x8, size 0x4
};
// total size: 0x6C
struct /* @class$2605zCommonPlayerContextActions_cpp */ {
    // Members
    float dist; // offset 0x0, size 0x4
    float dist_goal; // offset 0x4, size 0x4
    float dist_vel; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
    float pitch_offset_goal; // offset 0x10, size 0x4
    float pitch_offset_vel; // offset 0x14, size 0x4
    float pitch_offset_speed; // offset 0x18, size 0x4
    struct rest_config start; // offset 0x1C, size 0x10
    struct rest_config end; // offset 0x2C, size 0x10
    struct rest_config vel; // offset 0x3C, size 0x10
    struct rest_config cur; // offset 0x4C, size 0x10
    struct rest_config goal; // offset 0x5C, size 0x10
};
// total size: 0xC
struct /* @class$2606zCommonPlayerContextActions_cpp */ {
    // Members
    float delay_start; // offset 0x0, size 0x4
    float precollide_theta; // offset 0x4, size 0x4
    float theta_vel; // offset 0x8, size 0x4
};
// total size: 0x18
struct /* @class$2607zCommonPlayerContextActions_cpp */ {
    // Members
    const struct xEnt * ent; // offset 0x0, size 0x4
    struct xVec3 center; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float margin_angle; // offset 0x14, size 0x4
};
// total size: 0x18
struct /* @class$2609zCommonPlayerContextActions_cpp */ {
    // Members
    int which; // offset 0x0, size 0x4
    float phi; // offset 0x4, size 0x4
    float dist; // offset 0x8, size 0x4
    float theta; // offset 0xC, size 0x4
    float pitch_offset; // offset 0x10, size 0x4
    float yaw_offset; // offset 0x14, size 0x4
};
// total size: 0x24
struct basis_traits : public xCamCoordPolar {
    // Members
    struct xVec3 loc; // offset 0x18, size 0xC
};
// total size: 0x10
struct config {
    // Members
    float min_segment_dist; // offset 0x0, size 0x4
    float smooth_factor; // offset 0x4, size 0x4
    int smooth_passes; // offset 0x8, size 0x4
    float subdiv_thresh; // offset 0xC, size 0x4
};
// total size: 0x0
struct debug_context {};
// total size: 0xC
struct path_node {
    // Members
    struct xVec3 loc; // offset 0x0, size 0xC
};
// total size: 0xB0
class xCamSupportPath {
    // Members
public:
    struct config cfg; // offset 0x0, size 0x10
    int debug_flags; // offset 0x10, size 0x4
private:
    struct debug_context * debug; // offset 0x14, size 0x4
    struct path_node * path; // offset 0x18, size 0x4
    int power; // offset 0x1C, size 0x4
    int max_size; // offset 0x20, size 0x4
    int front; // offset 0x24, size 0x4
    int used; // offset 0x28, size 0x4
    float dist; // offset 0x2C, size 0x4
    float subdist; // offset 0x30, size 0x4
    float weights[31]; // offset 0x34, size 0x7C
};
// total size: 0x18
struct config {
    // Members
    float rail_ymin; // offset 0x0, size 0x4
    float rail_ymax; // offset 0x4, size 0x4
    float pivot_bar_radius; // offset 0x8, size 0x4
    float compress_bar_radius; // offset 0xC, size 0x4
    float compress_ball_radius; // offset 0x10, size 0x4
    float compress_dist_min; // offset 0x14, size 0x4
};
// total size: 0x38
class xCamSupportLOSBar {
    // Static members
    static struct config cfg; // size: 0x18

    // Members
public:
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 last_origin; // offset 0xC, size 0xC
    struct xVec3 stern_loc; // offset 0x18, size 0xC
    struct xVec3 last_stern_loc; // offset 0x24, size 0xC
    float rail_yoffset; // offset 0x30, size 0x4
    float last_rail_yoffset; // offset 0x34, size 0x4
};
// total size: 0x8
struct /* @class$2610zCommonPlayerContextActions_cpp */ {
    // Members
    float rest_dist; // offset 0x0, size 0x4
    float collide_dist; // offset 0x4, size 0x4
};
// total size: 0x0
struct debug_info {};
// total size: 0x4E0
struct zCamPlayer : public xCam {
    // Members
private:
    struct target_traits target_goal; // offset 0x140, size 0x30
    struct target_traits target; // offset 0x170, size 0x30
    // total size: 0x14
    struct /* @class$2602zCommonPlayerContextActions_cpp */ {
        // Members
        float phi; // offset 0x0, size 0x4
        float vel_theta; // offset 0x4, size 0x4
        float vel_phi; // offset 0x8, size 0x4
        float dphi; // offset 0xC, size 0x4
        float pitch_offset; // offset 0x10, size 0x4
    } input; // offset 0x1A0, size 0x14
    // total size: 0x30
    struct /* @class$2603zCommonPlayerContextActions_cpp */ {
        // Members
        float input_theta; // offset 0x0, size 0x4
        float input_pitch_offset; // offset 0x4, size 0x4
        float restore_dist; // offset 0x8, size 0x4
        float restore_phi; // offset 0xC, size 0x4
        float target_xz; // offset 0x10, size 0x4
        float target_y; // offset 0x14, size 0x4
        float pitch; // offset 0x18, size 0x4
        float mount; // offset 0x1C, size 0x4
        float look_xz; // offset 0x20, size 0x4
        float collide_dist; // offset 0x24, size 0x4
        float pitch_rest; // offset 0x28, size 0x4
        float pitch_clamp; // offset 0x2C, size 0x4
    } blend_vel; // offset 0x1B4, size 0x30
    // total size: 0xC
    struct /* @class$2604zCommonPlayerContextActions_cpp */ {
        // Members
        float dtheta; // offset 0x0, size 0x4
        float dphi; // offset 0x4, size 0x4
        float ddist; // offset 0x8, size 0x4
    } vel_drift; // offset 0x1E4, size 0xC
    // total size: 0x6C
    struct /* @class$2605zCommonPlayerContextActions_cpp */ {
        // Members
        float dist; // offset 0x0, size 0x4
        float dist_goal; // offset 0x4, size 0x4
        float dist_vel; // offset 0x8, size 0x4
        float pitch_offset; // offset 0xC, size 0x4
        float pitch_offset_goal; // offset 0x10, size 0x4
        float pitch_offset_vel; // offset 0x14, size 0x4
        float pitch_offset_speed; // offset 0x18, size 0x4
        struct rest_config start; // offset 0x1C, size 0x10
        struct rest_config end; // offset 0x2C, size 0x10
        struct rest_config vel; // offset 0x3C, size 0x10
        struct rest_config cur; // offset 0x4C, size 0x10
        struct rest_config goal; // offset 0x5C, size 0x10
    } zone; // offset 0x1F0, size 0x6C
    // total size: 0xC
    struct /* @class$2606zCommonPlayerContextActions_cpp */ {
        // Members
        float delay_start; // offset 0x0, size 0x4
        float precollide_theta; // offset 0x4, size 0x4
        float theta_vel; // offset 0x8, size 0x4
    } aggression; // offset 0x25C, size 0xC
    // total size: 0x18
    struct /* @class$2607zCommonPlayerContextActions_cpp */ {
        // Members
        const struct xEnt * ent; // offset 0x0, size 0x4
        struct xVec3 center; // offset 0x4, size 0xC
        float radius; // offset 0x10, size 0x4
        float margin_angle; // offset 0x14, size 0x4
    } secondary; // offset 0x268, size 0x18
    // total size: 0x18
    struct /* @class$2609zCommonPlayerContextActions_cpp */ {
        // Members
        int which; // offset 0x0, size 0x4
        float phi; // offset 0x4, size 0x4
        float dist; // offset 0x8, size 0x4
        float theta; // offset 0xC, size 0x4
        float pitch_offset; // offset 0x10, size 0x4
        float yaw_offset; // offset 0x14, size 0x4
    } start_zone; // offset 0x280, size 0x18
    struct basis_traits basis; // offset 0x298, size 0x24
    struct basis_traits last_basis; // offset 0x2BC, size 0x24
    struct basis_traits result; // offset 0x2E0, size 0x24
    struct basis_traits last_result; // offset 0x304, size 0x24
    float pitch_rest; // offset 0x328, size 0x4
    float pitch_clamp; // offset 0x32C, size 0x4
    float result_pitch; // offset 0x330, size 0x4
    struct xVec3 look_loc; // offset 0x334, size 0xC
    struct xVec3 losbar_loc; // offset 0x340, size 0xC
    struct xVec3 last_losbar_loc; // offset 0x34C, size 0xC
    float losbar_rail_yoffset; // offset 0x358, size 0x4
    float last_losbar_rail_yoffset; // offset 0x35C, size 0x4
    float dist_extend; // offset 0x360, size 0x4
    float dist_extend_vel; // offset 0x364, size 0x4
    float speed_input_theta; // offset 0x368, size 0x4
    float rest_dist; // offset 0x36C, size 0x4
    float rest_dist_vel; // offset 0x370, size 0x4
    float rest_phi; // offset 0x374, size 0x4
    float rest_phi_vel; // offset 0x378, size 0x4
    float drest_phi; // offset 0x37C, size 0x4
    float look_pitch; // offset 0x380, size 0x4
    class xCamSupportPath path; // offset 0x384, size 0xB0
    class xCamSupportLOSBar losbar; // offset 0x434, size 0x38
    float floor_height; // offset 0x46C, size 0x4
    float mount_height; // offset 0x470, size 0x4
    float mount_offset; // offset 0x474, size 0x4
    float last_mount_offset; // offset 0x478, size 0x4
    unsigned char grounded; // offset 0x47C, size 0x1
    unsigned char was_colliding; // offset 0x47D, size 0x1
    unsigned char first_frame; // offset 0x47E, size 0x1
    struct xMat4x3 snap_mat; // offset 0x480, size 0x40
    float pivot_height; // offset 0x4C0, size 0x4
    float pitch_offset; // offset 0x4C4, size 0x4
    float look_xz; // offset 0x4C8, size 0x4
    float defaultFOV; // offset 0x4CC, size 0x4
    // total size: 0x8
    struct /* @class$2610zCommonPlayerContextActions_cpp */ {
        // Members
        float rest_dist; // offset 0x0, size 0x4
        float collide_dist; // offset 0x4, size 0x4
    } blend_speed; // offset 0x4D0, size 0x8
public:
    struct debug_info * debug; // offset 0x4D8, size 0x4
};
// Range: 0x80265814 -> 0x802659BC
// this: r31
void zPlayerTightrope::UpdateLean(float magnitude /* f0 */, float cosDiff /* f0 */, float dt /* f31 */) {
    // Local variables
    float leanDeltaSpeed; // f0
    float gravityAdj; // f1
    float sin; // f0

    // References
    // -> static float LEAN_FALL_ANGLE;
    // -> static float LEAN_GRAVITY_FORCE_MIN;
    // -> static float LEAN_GRAVITY_FORCE_MAX;
    // -> static float LEAN_GRAVITY_FORCE;
    // -> static float CONST_LEAN_GRAVITY_FORCE;
    // -> static unsigned char CONST_LEAN_GRAVITY;
    // -> static float LEAN_BALANCING_FORCE;
    // -> static float LEAN_DIFF_ACCEL;
}

// Range: 0x802659BC -> 0x80265A70
// this: r30
void zPlayerTightrope::UpdatePos(const class zContextObjectTightrope * tightrope /* r31 */, float dt /* f1 */) {
    // Local variables
    struct xVec3 newPos; // r1+0x8

    // References
    // -> static float WALK_SPEED;
}

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
struct xColor_tag g_CYAN; // size: 0x4, address: 0x80C0A26C
struct xColor_tag g_YELLOW; // size: 0x4, address: 0x80C0A274
struct xColor_tag g_RED; // size: 0x4, address: 0x80C0A258
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
// total size: 0x0
class xDebugLink {};
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
// Range: 0x80265A70 -> 0x80265FE8
// this: r29
void zPlayerTightrope::TightropeMove(float dt /* f29 */, struct xEntFrame * frame /* r30 */, const class zContextObjectTightrope * tightrope /* r31 */) {
    // Local variables
    float x; // f30
    float z; // f31
    float stickAngle; // f31
    float orientationLookAheadU; // r1+0x1C
    float lookAheadDist; // f30
    struct xVec3 lookAheadSplineDir; // r1+0x80
    float lookAheadSplineAngle; // f1
    float cosDiff; // f28
    struct xVec3 splineDir; // r1+0x74
    struct xAnimSingle * single; // r5
    struct xMat3x3 test; // r1+0xD0
    struct xVec3 drawPos; // r1+0x68
    struct xVec3 drawDir; // r1+0x5C
    struct xVec3 leanDir; // r1+0x50
    struct xAnimSingle * playerSingle; // r28
    char text[32]; // r1+0xAC
    struct xVec3 pos; // r1+0x44
    char text[32]; // r1+0x8C
    float leanAngleAbs; // f2
    struct xVec3 pos; // r1+0x38

    // References
    // -> static float LEAN_FALL_ANGLE;
    // -> static unsigned char debugDrawBalanceMeter;
    // -> struct xGlobals * xglobals;
    // -> static unsigned char debugDrawLandState;
    // -> struct xColor_tag g_RED;
    // -> struct xColor_tag g_YELLOW;
    // -> struct xColor_tag g_CYAN;
    // -> static unsigned char debugDraw;
    // -> static float TURN_ANIM_TIME;
    // -> static float WALK_SPEED;
    // -> static float ORIENTATION_LOOK_AHEAD_SPEED;
}

// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// Range: 0x80265FE8 -> 0x80266118
// this: r28
void zPlayerTightrope::Move(struct xScene * s /* r29 */, float dt /* f31 */, struct xEntFrame * frame /* r30 */) {
    // Local variables
    const class zContextObjectTightrope * tightrope; // r31
    unsigned char prevChkby; // r30

    // References
    // -> static float SPEED_INPUT_THETA;
    // -> static float START_BLEND_TIME;
}

// Range: 0x80266118 -> 0x80266260
// this: r30
void zPlayerTightrope::Timestep(float dt /* f31 */) {
    // Local variables
    struct xAnimSingle * playerSingle; // r31

    // References
    // -> static float INAIR_LEAN_RATE;
    // -> struct xGlobals * xglobals;
}

static float DISMOUNT_VEL_Y; // size: 0x4, address: 0x80C05438
static float DISMOUNT_VEL_XZ; // size: 0x4, address: 0x80C0543C
static float FLING_TIME; // size: 0x4, address: 0x80C05440
static float FLING_FUDGE_TIME; // size: 0x4, address: 0x80C05444
static float REVERSE_STICK_MAG_MIN; // size: 0x4, address: 0x80C05448
static float REVERSE_STICK_ANGLE; // size: 0x4, address: 0x80C0544C
static unsigned int ALLOW_FULL_JUMP_CONTROL; // size: 0x4, address: 0x80C0931C
// total size: 0x18
class zPlayerPoleSwing : public zPlayerContextAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartCheck();

    unsigned int FlingDefCheck();

    unsigned int FlingTranCheck();

    unsigned int ReverseDefCheck();

    unsigned int ReverseTranCheck();

    unsigned int ReverseCB();

    unsigned int FlingCB(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int GrabbedCB();

    unsigned char StickBackwards();

    void Begin();

    void End();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    void Update(float dt);

    // Members
protected:
    float angle; // offset 0xC, size 0x4
    unsigned char pressed; // offset 0x10, size 0x1
    unsigned char rotate; // offset 0x11, size 0x1
    float animTime; // offset 0x14, size 0x4
};
// Range: 0x80266260 -> 0x802663E4
void zPlayerPoleSwing::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static unsigned int ALLOW_FULL_JUMP_CONTROL;
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> static float REVERSE_STICK_ANGLE;
    // -> static float REVERSE_STICK_MAG_MIN;
    // -> static float FLING_TIME;
    // -> static float FLING_FUDGE_TIME;
    // -> static float DISMOUNT_VEL_Y;
    // -> static float DISMOUNT_VEL_XZ;
}

// Range: 0x802663E4 -> 0x80266524
// this: r30
void zPlayerPoleSwing::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80266524 -> 0x80266570
void zPlayerPoleSwing::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */) {}

// Range: 0x80266570 -> 0x80266798
void zPlayerPoleSwing::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80266798 -> 0x8026685C
// this: r30
void zPlayerPoleSwing::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x8026685C -> 0x8026688C
// this: r0
unsigned int zPlayerPoleSwing::StartCheck() {}

// Range: 0x8026688C -> 0x80266894
// this: r3
unsigned int zPlayerPoleSwing::FlingDefCheck() {}

// Range: 0x80266894 -> 0x802668D4
// this: r0
unsigned int zPlayerPoleSwing::FlingTranCheck() {
    // References
    // -> static float FLING_FUDGE_TIME;
}

// Range: 0x802668D4 -> 0x802668F8
// this: r0
unsigned int zPlayerPoleSwing::ReverseDefCheck() {}

// Range: 0x802668F8 -> 0x80266958
// this: r0
unsigned int zPlayerPoleSwing::ReverseTranCheck() {
    // References
    // -> static float FLING_FUDGE_TIME;
}

// Range: 0x80266958 -> 0x80266968
// this: r0
unsigned int zPlayerPoleSwing::ReverseCB() {}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80C05450
// Range: 0x80266968 -> 0x80266A8C
// this: r29
unsigned int zPlayerPoleSwing::FlingCB(struct xAnimTransition * tran /* r30 */, struct xAnimSingle * anim /* r31 */) {
    // References
    // -> static float FLING_TIME;
    // -> static float DISMOUNT_VEL_Y;
    // -> static float DISMOUNT_VEL_XZ;
    // -> static char __FUNCTION__[8];
}

// Range: 0x80266A8C -> 0x80266AD4
// this: r31
unsigned int zPlayerPoleSwing::GrabbedCB() {}

// Range: 0x80266AD4 -> 0x80266BBC
// this: r30
unsigned char zPlayerPoleSwing::StickBackwards() {
    // Local variables
    float x; // f31
    float z; // f30
    float magnitude; // f1
    float stickAngle; // f1

    // References
    // -> static float REVERSE_STICK_ANGLE;
    // -> static float REVERSE_STICK_MAG_MIN;
}

// Range: 0x80266BBC -> 0x80266C04
// this: r31
void zPlayerPoleSwing::Begin() {}

// Range: 0x80266C04 -> 0x80266C3C
// this: r31
void zPlayerPoleSwing::End() {}

// Range: 0x80266C3C -> 0x80266D90
// this: r28
void zPlayerPoleSwing::Move(struct xScene * s /* r29 */, float dt /* f31 */, struct xEntFrame * frame /* r30 */) {
    // Local variables
    unsigned int animFlags; // r0
    const class zContextObjectPoleSwing * poleSwing; // r27
    unsigned char prevChkby; // r31

    // References
    // -> static unsigned int ALLOW_FULL_JUMP_CONTROL;
}

// total size: 0x18
struct zContextObjectPoleSwingAsset : public xDynAsset {
    // Members
    unsigned int poleID; // offset 0x10, size 0x4
    float length; // offset 0x14, size 0x4
};
// total size: 0x20
class zContextObjectPoleSwing : public zContextObject {
    // Members
protected:
    struct xEnt * pole; // offset 0x14, size 0x4
    float length; // offset 0x18, size 0x4
    struct zContextObjectPoleSwingAsset * asset; // offset 0x1C, size 0x4
};
// Range: 0x80266D90 -> 0x80266DB0
// this: r0
void zPlayerPoleSwing::Update(float dt /* f0 */) {}

static float INTERP_SPEED; // size: 0x4, address: 0x80C05458
static float ROTATION_SPEED; // size: 0x4, address: 0x80C0545C
// Range: 0x80266DB0 -> 0x80266E6C
static unsigned char TurnToFace(struct xEntFrame * frame /* r31 */, const struct xVec3 & dir /* r0 */, float dt /* f31 */) {
    // Local variables
    float targetAngle; // f0
    float angleDiff; // f2
    float deltaRot; // f1

    // References
    // -> static float ROTATION_SPEED;
}

// total size: 0xC
class zPlayerSpringboard : public zCommonPlayerAction {
    // Functions
    void InterpolateToBoard(class zSpringboard * springboard, float dt);
};
// Range: 0x80266E6C -> 0x80266EF8
void zPlayerSpringboard::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> struct tweak_callback cb_tweak_convert_degrees;
    // -> static float ROTATION_SPEED;
    // -> static float INTERP_SPEED;
}

// Range: 0x80266EF8 -> 0x80267010
// this: r30
void zPlayerSpringboard::InterpolateToBoard(class zSpringboard * springboard /* r31 */, float dt /* f31 */) {
    // Local variables
    struct xVec3 diff; // r1+0x8
    float length; // f1

    // References
    // -> static float INTERP_SPEED;
}

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
static float VEL_FAILED; // size: 0x4, address: 0x80C05460
static float TIME_COMPRESS_SUCCEEDED; // size: 0x4, address: 0x80C05464
static float TIME_LAUNCH_SUCCEEDED; // size: 0x4, address: 0x80C05468
static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH; // size: 0x4, address: 0x80C0546C
enum /* @enum$2495zCommonPlayerContextActions_cpp */ {
    NO_INPUT = 0,
    SUCCESS = 1,
    FAILURE = 2,
};
// total size: 0x10
class zPlayerTrampoline : public zPlayerSpringboard {
    // Functions
    void AddTweaks();

    void SpringboardBeforeEnter(struct xAnimPlay * play, struct xAnimState * state);

    void AddStates(struct xAnimTable * table);

    unsigned int SuccessCheck();

    unsigned int StartCheck();

    unsigned int LaunchEarlyCheck(struct xAnimSingle * anim);

    unsigned int LaunchEarlyCB();

    unsigned int FailureCB();

    void Begin();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    // Members
protected:
    enum /* @enum$2495zCommonPlayerContextActions_cpp */ {
        NO_INPUT = 0,
        SUCCESS = 1,
        FAILURE = 2,
    } state; // offset 0xC, size 0x4
};
// Range: 0x80267010 -> 0x802670CC
// this: r0
void zPlayerTrampoline::AddTweaks() {
    // Local variables
    const char * prefix; // r31

    // References
    // -> static float TIME_LAUNCH_SUCCEEDED;
    // -> static float TIME_COMPRESS_SUCCEEDED;
    // -> static float VEL_FAILED;
}

// Range: 0x802670CC -> 0x80267120
// this: r0
void zPlayerTrampoline::SpringboardBeforeEnter(struct xAnimPlay * play /* r30 */, struct xAnimState * state /* r31 */) {}

// Range: 0x80267120 -> 0x80267228
// this: r30
void zPlayerTrampoline::AddStates(struct xAnimTable * table /* r31 */) {
    // References
    // -> static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH;
}

// Range: 0x80267228 -> 0x80267274
void zPlayerTrampoline::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x80267274 -> 0x80267374
void zPlayerTrampoline::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80267374 -> 0x80267388
// this: r0
unsigned int zPlayerTrampoline::SuccessCheck() {}

// Range: 0x80267388 -> 0x802673F0
// this: r30
unsigned int zPlayerTrampoline::StartCheck() {}

// Range: 0x802673F0 -> 0x80267488
// this: r30
unsigned int zPlayerTrampoline::LaunchEarlyCheck(struct xAnimSingle * anim /* r31 */) {
    // References
    // -> static float TIME_COMPRESS_SUCCEEDED;
}

// Range: 0x80267488 -> 0x802674B4
// this: r0
unsigned int zPlayerTrampoline::LaunchEarlyCB() {}

// Range: 0x802674B4 -> 0x80267530
// this: r31
unsigned int zPlayerTrampoline::FailureCB() {
    // References
    // -> static float VEL_FAILED;
}

// Range: 0x80267530 -> 0x802675B4
void zPlayerTrampoline::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x802675B4 -> 0x802675F0
// this: r31
void zPlayerTrampoline::Begin() {}

// Range: 0x802675F0 -> 0x80267708
// this: r27
void zPlayerTrampoline::Move(struct xScene * s /* r28 */, float dt /* f31 */, struct xEntFrame * frame /* r29 */) {
    // Local variables
    struct xAnimSingle * single; // r31
    unsigned int animFlags; // r30

    // References
    // -> static float TIME_LAUNCH_SUCCEEDED;
    // -> static unsigned int PLAYERANIM_SPRINGBOARD_LAUNCH;
}

// total size: 0x10
class zPlayerBoardLaunch : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddStandardTransitionsFrom(struct xAnimTable * table, const char * fromStates);

    void AddTransitionsFrom(struct xAnimTable * table, const char * fromStates, unsigned short priority, float blend, unsigned int flags, unsigned int userFlags);

    void AddActionTransitions(struct xAnimTable * table);

    unsigned int StartBounceCheck();

    unsigned int StartApexCheck(struct xAnimTransition * tran, struct xAnimSingle * anim);

    unsigned int ApexCheck(struct xAnimTransition * tran);

    void Begin();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    // Members
protected:
    unsigned char faceVel; // offset 0xC, size 0x1
};
// Range: 0x80267708 -> 0x80267800
// this: r30
void zPlayerBoardLaunch::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x80267800 -> 0x8026783C
// this: r0
void zPlayerBoardLaunch::AddStandardTransitionsFrom(struct xAnimTable * table /* r0 */, const char * fromStates /* r0 */) {}

// Range: 0x8026783C -> 0x8026792C
// this: r26
void zPlayerBoardLaunch::AddTransitionsFrom(struct xAnimTable * table /* r27 */, const char * fromStates /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {}

// Range: 0x8026792C -> 0x80267A38
// this: r30
void zPlayerBoardLaunch::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80267A38 -> 0x80267AEC
void zPlayerBoardLaunch::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80267AEC -> 0x80267BA4
// this: r29
unsigned int zPlayerBoardLaunch::StartBounceCheck() {}

// total size: 0x1
class zINPC {};
// total size: 0x74
struct zNPCAssetRATS : public xDynAsset {
    // Members
    struct xEntAsset ent_asset; // offset 0x10, size 0x50
    unsigned int lightKitID; // offset 0x60, size 0x4
    unsigned int npcWalls; // offset 0x64, size 0x4
    unsigned int npcPerception; // offset 0x68, size 0x4
    float updateDistance; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
};
// total size: 0x14
struct xModelAssetInfo {
    // Members
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
enum eCompType {
    eCompType_Unknown = -1,
    eCompType_Logic_Alarmer = 0,
    eCompType_Logic_Thief = 1,
    eCompType_Logic_SwarmMember = 2,
    eCompType_Logic_Waiter = 3,
    eCompType_Logic_StirringPlayer = 4,
    eCompType_Logic_StirringRemy = 5,
    eCompType_Logic_LeftArm = 6,
    eCompType_Logic_RightArm = 7,
    eCompType_Logic_PourNSwirl = 8,
    eCompType_Logic_SpringBoard = 9,
    eCompType_Logic_ContextSensitive = 10,
    eCompType_Logic_AnimViewer = 11,
    eCompType_Logic_SwarmBug = 12,
    eCompType_Logic_SwarmOwl = 13,
    eCompType_Logic_Simpleton = 14,
    eCompType_Logic_InstaKill = 15,
    eCompType_NPCEntity_Default = 16,
    eCompType_Steering_Basic = 17,
    eCompType_Steering_Flocking = 18,
    eCompType_Steering_FlockingBrain = 19,
    eCompType_Steering_Generic = 20,
    eCompType_Perception = 21,
    eCompType_Sound_Basic = 22,
    eCompType_Combat_Default = 23,
    eCompCount = 24,
};
enum eCompInterfaceType {
    eCompInterfaceType_Unknown = -1,
    eCompInterfaceType_First = 0,
    eCompInterfaceType_Logic = 0,
    eCompInterfaceType_NPCEntity = 1,
    eCompInterfaceType_Steering = 2,
    eCompInterfaceType_Perception = 3,
    eCompInterfaceType_Sound = 4,
    eCompInterfaceType_Combat = 5,
    eCompInterfaceTypeCount = 6,
};
// total size: 0x1
class zCompParameters {};
// total size: 0x8
class zIComponent {
    // Members
public:
    class zNPCBase * owner; // offset 0x0, size 0x4
    void * __vptr$; // offset 0x4, size 0x4
};
// total size: 0x8
class zICompLogic : public zIComponent {};
// total size: 0x30
class zICompNPCEntityParams : public zCompParameters {
    // Members
public:
    float shadowRadiusPar; // offset 0x0, size 0x4
    float shadowRadiusRatio; // offset 0x4, size 0x4
    float modelScale; // offset 0x8, size 0x4
    float boundScale; // offset 0xC, size 0x4
    int boundBone; // offset 0x10, size 0x4
    float boundRadius; // offset 0x14, size 0x4
    float shadowStrength; // offset 0x18, size 0x4
    struct xVec3 boundOffset; // offset 0x1C, size 0xC
    unsigned char hasCollision : 1; // offset 0x28, size 0x1
    unsigned char noAttackDuringCinematic : 1; // offset 0x28, size 0x1
    unsigned char castShadow : 1; // offset 0x28, size 0x1
    unsigned char complexShadow : 1; // offset 0x28, size 0x1
    unsigned char useBoundingBox : 1; // offset 0x28, size 0x1
    unsigned char useShadowRadiusRatio : 1; // offset 0x28, size 0x1
    void * __vptr$; // offset 0x2C, size 0x4
};
// total size: 0x4
class xSpringy {
    // Members
protected:
    float mResponse; // offset 0x0, size 0x4
};
// total size: 0x18
class xSpringyF32 : public xSpringy {
    // Members
protected:
    float mVelocitySaveMax; // offset 0x4, size 0x4
    float mVelocityMax; // offset 0x8, size 0x4
    float mVelocity; // offset 0xC, size 0x4
    float mGoal; // offset 0x10, size 0x4
    float mCurrent; // offset 0x14, size 0x4
};
// total size: 0x18
class xSpringyAngle : public xSpringyF32 {};
// total size: 0x124
class zICompNPCEntity : public zIComponent, public xEnt {
    // Members
    struct xEntDrive * npcDrive; // offset 0xE0, size 0x4
    float shadowRadius; // offset 0xE4, size 0x4
    enum eNPCType type; // offset 0xE8, size 0x4
    const class zICompNPCEntityParams * parameters; // offset 0xEC, size 0x4
    class xSpringyAngle turnSpring; // offset 0xF0, size 0x18
    struct xVec3 acc; // offset 0x108, size 0xC
    struct xVec3 oldAcc; // offset 0x114, size 0xC
    unsigned char old_chkby; // offset 0x120, size 0x1
    unsigned char accUpdated; // offset 0x121, size 0x1
};
// total size: 0x0
class zICompSteering {};
// total size: 0x0
class zICompPerception {};
// total size: 0x0
class zICompSound {};
// total size: 0x0
class zICompCombat {};
// total size: 0x68
class zNPCBase : public xBase {
    // Members
protected:
    struct xVec3 lastPos; // offset 0x10, size 0xC
    struct xVec3 lastOrientation; // offset 0x1C, size 0xC
    float updateCullDistance; // offset 0x28, size 0x4
    enum eNPCType type; // offset 0x2C, size 0x4
    struct zNPCAssetRATS * npcAsset; // offset 0x30, size 0x4
    unsigned int npcAssetSize; // offset 0x34, size 0x4
    const struct xModelAssetInfo * modelAsset; // offset 0x38, size 0x4
    class zNPCBase * children; // offset 0x3C, size 0x4
    class zNPCBase * parent; // offset 0x40, size 0x4
    int numChildren; // offset 0x44, size 0x4
    unsigned char activated : 1; // offset 0x48, size 0x1
    unsigned char alive : 1; // offset 0x48, size 0x1
    unsigned char inUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char crossingUpdateDistance : 1; // offset 0x48, size 0x1
    unsigned char taggedForSpawn : 1; // offset 0x48, size 0x1
    unsigned char taggedForKill : 1; // offset 0x48, size 0x1
    unsigned int pad : 26; // offset 0x48, size 0x4
public:
    void * __vptr$; // offset 0x4C, size 0x4
protected:
    class zICompLogic * npcLogicComp; // offset 0x50, size 0x4
    class zICompNPCEntity * npcEntityComp; // offset 0x54, size 0x4
    class zICompSteering * npcSteeringComp; // offset 0x58, size 0x4
    class zICompPerception * npcPerceptionComp; // offset 0x5C, size 0x4
    class zICompSound * npcSoundComp; // offset 0x60, size 0x4
    class zICompCombat * npcCombatComp; // offset 0x64, size 0x4
};
enum eNPCType {
    eNPCType_None = -1,
    eNPCType_Unknown = -1,
    eNPCType_First = 0,
    eNPCType_SwarmMember = 0,
    eNPCType_Swarm_Owl = 1,
    eNPCType_Swarm_Bug = 2,
    eNPCType_Thief = 3,
    eNPCType_Simpleton = 4,
    eNPCType_Alarmer = 5,
    eNPCType_Waiter = 6,
    eNPCType_CMG_StirringPlayer = 7,
    eNPCType_CMG_StirringRemy = 8,
    eNPCType_CMG_LeftArm = 9,
    eNPCType_CMG_RightArm = 10,
    eNPCType_CMG_PourNSwirl = 11,
    eNPCType_SpringBoard = 12,
    eNPCType_ContextSensitive = 13,
    eNPCType_AnimViewer = 14,
    eNPCType_InstaKill = 15,
    eNPCTypeCount = 16,
    eNPCTypeForceInt = 2147483647,
};
static char __FUNCTION__[15]; // size: 0xF, address: 0x80C05470
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
// Range: 0x80267BA4 -> 0x80267CD0
// this: r30
unsigned int zPlayerBoardLaunch::StartApexCheck(struct xAnimTransition * tran /* r31 */, struct xAnimSingle * anim /* r0 */) {
    // Local variables
    struct xVec3 launchVel; // r1+0x8
    class zICompLogic * npcLogic; // r0

    // References
    // -> struct zGlobals globals;
    // -> static char __FUNCTION__[15];
}

// Range: 0x80267CD0 -> 0x80267D24
// this: r0
unsigned int zPlayerBoardLaunch::ApexCheck(struct xAnimTransition * tran /* r0 */) {
    // References
    // -> struct zGlobals globals;
}

enum eStateTranstitionType {
    eStateTransType_Switch = 0,
    eStateTransType_Push = 1,
    eStateTransType_Pop = 2,
    eStateTransType_SwitchLast = 3,
    eStateTransType_PushOnLast = 4,
    eStateTestTypeForceInt = 2147483647,
};
// total size: 0x18
struct zCompStateTest {
    // Members
    class zCompState * toState; // offset 0x0, size 0x4
    unsigned char (* testFunction)(class zNPCBase *, class zCompState *, class zCompState *); // offset 0x4, size 0x4
    float period; // offset 0x8, size 0x4
    enum eStateTranstitionType transtitionType; // offset 0xC, size 0x4
    struct zCompStateTest * next; // offset 0x10, size 0x4
    float remainingTime; // offset 0x14, size 0x4
};
// total size: 0x14
class zCompState {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    class zCompStateMachine * stateMachine; // offset 0x4, size 0x4
    class zCompState * prevState; // offset 0x8, size 0x4
    struct zCompStateTest * tests; // offset 0xC, size 0x4
public:
    void * __vptr$; // offset 0x10, size 0x4
};
// total size: 0x8
struct zCompStateMachineTable {
    // Members
    int stateEnum; // offset 0x0, size 0x4
    class zCompState * (* const newStateFunction)(int &); // offset 0x4, size 0x4
};
// total size: 0xC
struct zCompStateTransEvent {
    // Members
    enum eStateTranstitionType transtitionType; // offset 0x0, size 0x4
    class zCompState * fromState; // offset 0x4, size 0x4
    class zCompState * toState; // offset 0x8, size 0x4
};
// total size: 0x14
class zCompStateTransEventFIFO {
    // Members
    struct zCompStateTransEvent * eventsPool; // offset 0x0, size 0x4
    int poolSize; // offset 0x4, size 0x4
    int poolUsed; // offset 0x8, size 0x4
    int front; // offset 0xC, size 0x4
    int end; // offset 0x10, size 0x4
};
// total size: 0x34
class zCompStateMachine : public zICompLogic {
    // Members
    struct zCompStateMachineTable * stateTable; // offset 0x8, size 0x4
    int numberOfStates; // offset 0xC, size 0x4
    class zCompState * * states; // offset 0x10, size 0x4
    class zCompState * globalState; // offset 0x14, size 0x4
    class zCompState * currentState; // offset 0x18, size 0x4
    class zCompStateTransEventFIFO eventsBuffer; // offset 0x1C, size 0x14
    class zCompState * defaultState; // offset 0x30, size 0x4
};
// total size: 0x4C
class zCompLogicSpringBoard : public zCompStateMachine {
    // Members
    struct xVec3 acc; // offset 0x34, size 0xC
    struct xVec3 oldAcc; // offset 0x40, size 0xC
};
// Range: 0x80267D24 -> 0x80267EC0
// this: r30
void zPlayerBoardLaunch::Begin() {
    // Local variables
    class zICompLogic * npcLogic; // r0
    class zCompLogicSpringBoard * springBoardLogic; // r31
}

// Range: 0x80267EC0 -> 0x80267F70
// this: r29
void zPlayerBoardLaunch::Move(struct xScene * s /* r30 */, float dt /* f31 */, struct xEntFrame * frame /* r31 */) {}

// total size: 0x14
class zPlayerChargeboard : public zPlayerSpringboard {
    // Functions
    void SpringboardBeforeEnter(struct xAnimPlay * play, struct xAnimState * state);

    void AddStates(struct xAnimTable * table);

    unsigned int StartCheck();

    unsigned int LaunchCheck();

    unsigned int LaunchCB();

    void Begin();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);

    void End();

    // Members
protected:
    float scale; // offset 0xC, size 0x4
    class zSpringboard * springboard; // offset 0x10, size 0x4
};
// Range: 0x80267F70 -> 0x80267FC0
// this: r3
void zPlayerChargeboard::SpringboardBeforeEnter(struct xAnimPlay * play /* r30 */, struct xAnimState * state /* r31 */) {}

// Range: 0x80267FC0 -> 0x802680D0
// this: r30
void zPlayerChargeboard::AddStates(struct xAnimTable * table /* r31 */) {}

// Range: 0x802680D0 -> 0x8026811C
void zPlayerChargeboard::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x8026811C -> 0x802681D4
void zPlayerChargeboard::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x802681D4 -> 0x80268270
// this: r30
unsigned int zPlayerChargeboard::StartCheck() {
    // Local variables
    class zSpringboard * groundBoard; // r0
}

// Range: 0x80268270 -> 0x802682A4
// this: r3
unsigned int zPlayerChargeboard::LaunchCheck() {}

// Range: 0x802682A4 -> 0x80268310
// this: r31
unsigned int zPlayerChargeboard::LaunchCB() {}

enum State {
    Idle = 0,
    Compressing = 1,
    Compressed = 2,
    Launching = 3,
};
// Range: 0x80268310 -> 0x80268358
void zPlayerChargeboard::AddActionTransitions(struct xAnimTable * table /* r4 */) {}

// Range: 0x80268358 -> 0x80268384
// this: r3
void zPlayerChargeboard::Begin() {}

// Range: 0x80268384 -> 0x80268400
// this: r29
void zPlayerChargeboard::Move(struct xScene * s /* r30 */, float dt /* f31 */, struct xEntFrame * frame /* r31 */) {}

// Range: 0x80268400 -> 0x80268488
// this: r30
void zPlayerChargeboard::End() {
    // Local variables
    float length; // f0

    // References
    // -> static float VEL_FAILED;
}

static unsigned int PLAYERANIM_LAUNCH_FLYING; // size: 0x4, address: 0x80C05480
// total size: 0xC
class zPlayerInteraction : public zCommonPlayerAction {};
// total size: 0xC
class zPlayerActionLaunch : public zPlayerInteraction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void AddActionTransitions(struct xAnimTable * table);

    void End();

    void LaunchBeforeEnter(struct xAnimState * state);

    unsigned int StartCheck();

    unsigned int GrabCB();

    unsigned int FlingCheck();

    unsigned int QuitCheck();

    unsigned int LiftCB();

    unsigned int ApexCheck();

    unsigned int LandCheck();

    unsigned int LandCB();

    void Move(struct xScene * s, float dt, struct xEntFrame * frame);
};
// Range: 0x80268488 -> 0x8026848C
void zPlayerActionLaunch::AddTweaks() {}

// Range: 0x8026848C -> 0x802686F8
// this: r30
void zPlayerActionLaunch::AddStates(struct xAnimTable * table /* r31 */) {
    // References
    // -> static unsigned int PLAYERANIM_LAUNCH_FLYING;
}

// Range: 0x802686F8 -> 0x80268744
void zPlayerActionLaunch::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x80268744 -> 0x80268960
void zPlayerActionLaunch::AddInternalTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80268960 -> 0x80268A1C
// this: r30
void zPlayerActionLaunch::AddActionTransitions(struct xAnimTable * table /* r31 */) {}

// Range: 0x80268A1C -> 0x80268A8C
// this: r30
void zPlayerActionLaunch::End() {
    // Local variables
    class zLaunch * launch; // r31
}

// total size: 0x24
struct xParabola {
    // Members
    struct xVec3 initPos; // offset 0x0, size 0xC
    struct xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x14
struct LeavesState {
    // Members
    unsigned char have_bone_pos; // offset 0x0, size 0x1
    struct xVec3 last_bone_pos; // offset 0x4, size 0xC
    float num_leaves; // offset 0x10, size 0x4
};
// total size: 0xE0
class zLaunch : public zInteraction {
    // Members
protected:
    float jumpYaw; // offset 0x28, size 0x4
    struct xVec3 * target; // offset 0x2C, size 0x4
    float initYaw; // offset 0x30, size 0x4
    float deltaYaw; // offset 0x34, size 0x4
    struct xVec3 initPos; // offset 0x38, size 0xC
    float currAlpha; // offset 0x44, size 0x4
    struct xParabola path; // offset 0x48, size 0x24
    float param; // offset 0x6C, size 0x4
    enum zLaunchState launchState; // offset 0x70, size 0x4
public:
    struct xMat4x3 playerMat; // offset 0x80, size 0x40
    struct LeavesState leaves; // offset 0xC0, size 0x14
};
enum zLaunchState {
    eLaunchStateReleased = 0,
    eLaunchStateIntro = 1,
    eLaunchStateWindupGrab = 2,
    eLaunchStateWindupReelIn = 3,
    eLaunchStateWindupFlingWait = 4,
    eLaunchStateFlingBegin = 5,
    eLaunchStateFlungLift = 6,
    eLaunchStateFlungFall = 7,
    eLaunchStateFlungLand = 8,
    eLaunchStateCount = 9,
    eLaunchStateForceSize = 2147483647,
};
static char __FUNCTION__[18]; // size: 0x12, address: 0x80C05484
// Range: 0x80268A8C -> 0x80268C74
// this: r30
void zPlayerActionLaunch::LaunchBeforeEnter(struct xAnimState * state /* r31 */) {
    // Local variables
    class zLaunch * launch; // r3
    unsigned int animCode; // r30
    unsigned int i; // r5

    // References
    // -> static char __FUNCTION__[18];
}

// total size: 0x28
struct zLaunchAsset : public zInteractionAsset {
    // Members
    unsigned int launchType; // offset 0x14, size 0x4
    unsigned int launchObject; // offset 0x18, size 0x4
    unsigned int targetAsset; // offset 0x1C, size 0x4
    float gravity; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
};
// Range: 0x80268C74 -> 0x80268D00
// this: r31
unsigned int zPlayerActionLaunch::StartCheck() {
    // Local variables
    class zLaunch * launch; // r3
}

// total size: 0x14
struct zInteractionAsset : public xDynAsset {
    // Members
    unsigned char initiallyActive; // offset 0x10, size 0x1
    unsigned char initiallyAvailable; // offset 0x11, size 0x1
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
enum zInteractionType {
    eInteractionTypeSwitchLever = 0,
    eInteractionTypeLaunch = 1,
    eInteractionTypeLookoutPoint = 2,
    eInteractionTypeDistractionPoint = 3,
    eInteractionTypeCount = 4,
};
static char __FUNCTION__[7]; // size: 0x7, address: 0x80C05498
// Range: 0x80268D00 -> 0x80268D9C
// this: r31
unsigned int zPlayerActionLaunch::GrabCB() {
    // Local variables
    class zLaunch * launch; // r3

    // References
    // -> static char __FUNCTION__[7];
}

// Range: 0x80268D9C -> 0x80268DE0
// this: r0
unsigned int zPlayerActionLaunch::FlingCheck() {
    // Local variables
    class zLaunch * launch; // r3
}

// Range: 0x80268DE0 -> 0x80268E2C
// this: r0
unsigned int zPlayerActionLaunch::QuitCheck() {
    // Local variables
    class zLaunch * launch; // r3
}

// Range: 0x80268E2C -> 0x80268E58
// this: r0
unsigned int zPlayerActionLaunch::LiftCB() {
    // Local variables
    class zLaunch * launch; // r3
}

// Range: 0x80268E58 -> 0x80268E9C
// this: r0
unsigned int zPlayerActionLaunch::ApexCheck() {
    // Local variables
    class zLaunch * launch; // r3
}

// Range: 0x80268E9C -> 0x80268EE0
// this: r0
unsigned int zPlayerActionLaunch::LandCheck() {
    // Local variables
    class zLaunch * launch; // r3
}

// Range: 0x80268EE0 -> 0x80268F08
// this: r0
unsigned int zPlayerActionLaunch::LandCB() {}

enum LedgeState {
    LedgeState_None = 0,
    LedgeState_JumpInterp = 1,
    LedgeState_Grab = 2,
    LedgeState_Count = 3,
    LedgeState_ForceSize = 2147483647,
};
// total size: 0x4
struct /* @class$2224zCommonPlayerContextActions_cpp */ {
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
    struct /* @class$2224zCommonPlayerContextActions_cpp */ {
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
struct /* @class$2221zCommonPlayerContextActions_cpp */ {
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
    struct /* @class$2221zCommonPlayerContextActions_cpp */ {
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
enum iSndGroupHandle {
};
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
// total size: 0x0
struct xParGroup {};
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
// total size: 0x0
struct xParSys {};
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
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x28
struct pointer_asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0x2
struct /* @class$2226zCommonPlayerContextActions_cpp */ {
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
// total size: 0x0
class xCamTransition {};
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
// total size: 0xC
struct xCamOrientEuler {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
// total size: 0x8
struct xCamConfigCommon {
    // Members
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0xC
struct xCamTransitionParams : public xCamConfigCommon {
    // Members
    class xCamTransition * mTransitionObject; // offset 0x8, size 0x4
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
// total size: 0x20
struct xCamCoord {
    // Members
    union { // inferred
        struct xVec3 cart; // offset 0x0, size 0xC
        struct xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        struct xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
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
// total size: 0x10
struct /* @class$1484zCommonPlayerContextActions_cpp */ {
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
    struct /* @class$1484zCommonPlayerContextActions_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
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
class zCarryableObject {};
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
    struct /* @class$2226zCommonPlayerContextActions_cpp */ {
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
// Range: 0x80268F08 -> 0x80268FE8
// this: r28
void zPlayerActionLaunch::Move(struct xScene * s /* r29 */, float dt /* f31 */, struct xEntFrame * frame /* r30 */) {
    // Local variables
    class zLaunch * launch; // r31
    struct xVec3 dpos; // r1+0x8

    // References
    // -> static unsigned int PLAYERANIM_LAUNCH_FLYING;
}

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
// total size: 0x10
class zPlayerActionUseLookoutPoint : public zCommonPlayerAction {
    // Functions
    void AddStates(struct xAnimTable * table);

    void Render();

    unsigned int StartCheck();

    unsigned int QuitCheck();

    void Move(float dt);

    // Members
protected:
    float inStateTimer; // offset 0xC, size 0x4
};
// Range: 0x80268FE8 -> 0x80269040
// this: r0
void zPlayerActionUseLookoutPoint::AddStates(struct xAnimTable * table /* r0 */) {}

// Range: 0x80269040 -> 0x8026908C
void zPlayerActionUseLookoutPoint::AddTransitionsFrom(struct xAnimTable * table /* r4 */, const char * fromStates /* r5 */, unsigned short priority /* r6 */, float blend /* f0 */, unsigned int flags /* r8 */, unsigned int userFlags /* r9 */) {}

// Range: 0x8026908C -> 0x802690D8
void zPlayerActionUseLookoutPoint::AddActionTransitions(struct xAnimTable * table /* r4 */) {}

// total size: 0x0
struct zEntTrigger {};
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
// total size: 0x30
struct zHeistLookoutPointAsset : public zTriggerInteractionAsset {
    // Members
    unsigned int lookAtId; // offset 0x18, size 0x4
    float transitionTime; // offset 0x1C, size 0x4
    float fov; // offset 0x20, size 0x4
    float angleMaxX; // offset 0x24, size 0x4
    float angleMaxY; // offset 0x28, size 0x4
    unsigned int eventRecieverId; // offset 0x2C, size 0x4
};
// total size: 0x0
class zHeistNPCInterfaceManager {};
// total size: 0x0
class zHeistInteractionObjectManager {};
// total size: 0xC
class zHeistManager {
    // Static members
    static class zHeistManager * heistManager; // size: 0x4

    // Members
protected:
    class zHeistNPCInterfaceManager * heistNPCInterfaceManager; // offset 0x0, size 0x4
    class zHeistInteractionObjectManager * heistInteractionObjectManager; // offset 0x4, size 0x4
    float inputTimer; // offset 0x8, size 0x4
};
// total size: 0xF0
class zHeistLookoutPoint : public zTriggerInteraction {
    // Static members
    static class zHeistManager * heistManager; // size: 0x4

    // Members
protected:
    struct xEnt * lookAtEnt; // offset 0x30, size 0x4
    struct xCamAsset camAsset; // offset 0x34, size 0x88
    struct xCam * prevCamera; // offset 0xBC, size 0x4
    struct xCamTransitionParams prevCameraTransitionParams; // offset 0xC0, size 0xC
    struct xBase * eventReciever; // offset 0xCC, size 0x4
    float fov; // offset 0xD0, size 0x4
    float curYAngle; // offset 0xD4, size 0x4
    float curXAngle; // offset 0xD8, size 0x4
    float angleMaxX; // offset 0xDC, size 0x4
    float angleMaxY; // offset 0xE0, size 0x4
    float timeInInteraction; // offset 0xE4, size 0x4
    unsigned int xInputState; // offset 0xE8, size 0x4
    unsigned int yInputState; // offset 0xEC, size 0x4
};
// Range: 0x802690D8 -> 0x80269100
// this: r0
void zPlayerActionUseLookoutPoint::Render() {
    // Local variables
    class zHeistLookoutPoint * lookoutPoint; // r3
}

// Range: 0x80269100 -> 0x80269180
// this: r31
unsigned int zPlayerActionUseLookoutPoint::StartCheck() {
    // Local variables
    class zHeistLookoutPoint * lookoutPoint; // r3
}

// Range: 0x80269180 -> 0x802691AC
// this: r0
unsigned int zPlayerActionUseLookoutPoint::QuitCheck() {
    // Local variables
    class zHeistLookoutPoint * lookoutPoint; // r0
}

// Range: 0x802691AC -> 0x80269268
// this: r30
void zPlayerActionUseLookoutPoint::Move(float dt /* f31 */) {
    // Local variables
    class zHeistLookoutPoint * lookoutPoint; // r31
    class zPad * currPad; // r30
}

// total size: 0x54
struct {} zPlayerActionUseLookoutPoint::__vtable; // size: 0x54, address: 0x804433B8
// total size: 0xC
class zPlayerActionManager {
    // Members
protected:
    class zPlayerAction * * actionList; // offset 0x0, size 0x4
    class zPlayerAction * currentAction; // offset 0x4, size 0x4
    unsigned int listSize; // offset 0x8, size 0x4
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
// total size: 0x54
struct {} zPlayerActionLaunch::__vtable; // size: 0x54, address: 0x8044340C
// total size: 0x58
struct {} zPlayerChargeboard::__vtable; // size: 0x58, address: 0x80443460
// total size: 0x54
struct {} zPlayerBoardLaunch::__vtable; // size: 0x54, address: 0x804434B8
// total size: 0x54
struct {} zPlayerTrampoline::__vtable; // size: 0x54, address: 0x8044350C
// total size: 0x54
struct {} zPlayerSpringboard::__vtable; // size: 0x54, address: 0x80443560
// total size: 0x54
struct {} zPlayerPoleSwing::__vtable; // size: 0x54, address: 0x804435B4
// total size: 0x54
struct {} zPlayerTightrope::__vtable; // size: 0x54, address: 0x80443608

