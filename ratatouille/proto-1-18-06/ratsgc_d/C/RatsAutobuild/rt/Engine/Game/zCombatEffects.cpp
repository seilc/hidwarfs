/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCombatEffects.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CDC30 -> 0x802D1454
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
// total size: 0x8
struct decal_data {
    // Members
    float size; // offset 0x0, size 0x4
    unsigned char emitter; // offset 0x4, size 0x1
    unsigned char first; // offset 0x5, size 0x1
    unsigned char last; // offset 0x6, size 0x1
    unsigned char pad; // offset 0x7, size 0x1
};
// total size: 0x4
struct proj_decal_data {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
};
// total size: 0x4
struct par_data {
    // Members
    unsigned char emitter; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
};
// total size: 0x10
struct hit_effect_data {
    // Members
    struct decal_data decal_splash; // offset 0x0, size 0x8
    struct proj_decal_data decal_mark; // offset 0x8, size 0x4
    struct par_data par_splash; // offset 0xC, size 0x4
};
static struct hit_effect_data hit_effects[3][10]; // size: 0x1E0, address: 0x80528690
// total size: 0xC
struct curve_node {
    // Members
    float time; // offset 0x0, size 0x4
    struct xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
static struct curve_node splash_curve[3]; // size: 0x24, address: 0x804D2BE0
enum texture_mode {
    TM_DEFAULT = 0,
    TM_RANDOM = 1,
    TM_CYCLE = 2,
    MAX_TM = 3,
    FORCE_INT_TM = -1,
};
// total size: 0x18
struct /* @class$1768zCombatEffects_cpp */ {
    // Members
    struct xVec2 uv[2]; // offset 0x0, size 0x10
    unsigned char rows; // offset 0x10, size 0x1
    unsigned char cols; // offset 0x11, size 0x1
    enum texture_mode mode; // offset 0x14, size 0x4
};
// total size: 0x28
struct config {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    unsigned int blend_src; // offset 0x8, size 0x4
    unsigned int blend_dst; // offset 0xC, size 0x4
    // total size: 0x18
    struct /* @class$1768zCombatEffects_cpp */ {
        // Members
        struct xVec2 uv[2]; // offset 0x0, size 0x10
        unsigned char rows; // offset 0x10, size 0x1
        unsigned char cols; // offset 0x11, size 0x1
        enum texture_mode mode; // offset 0x14, size 0x4
    } texture; // offset 0x10, size 0x18
};
static struct config decal_config[1]; // size: 0x28, address: 0x80528870
// total size: 0x80
struct decal_emitter_data {
    // Members
    const char * debug_name; // offset 0x0, size 0x4
    int max_size; // offset 0x4, size 0x4
    const char * texture; // offset 0x8, size 0x4
    const struct curve_node * curve; // offset 0xC, size 0x4
    unsigned long curve_size; // offset 0x10, size 0x4
    struct xDecalEmitter emitter; // offset 0x14, size 0x6C
};
static struct decal_emitter_data decal_emitters[1]; // size: 0x80, address: 0x80528898
static float rock_alpha; // size: 0x4, address: 0x80D66940
static float rock_size; // size: 0x4, address: 0x80D66944
static float rock_velocity; // size: 0x4, address: 0x80D66948
static float rock_random_velocity; // size: 0x4, address: 0x80D6694C
static float rock_lifetime; // size: 0x4, address: 0x80D66950
static float rock_emit_rate; // size: 0x4, address: 0x80D66954
static float rock_min_y_vel; // size: 0x4, address: 0x80D66958
static float rock_gravity; // size: 0x4, address: 0x80D6695C
static float rock_color; // size: 0x4, address: 0x80D66960
static float rock_bounce_factor; // size: 0x4, address: 0x80D66964
static float rock_system_emit_time; // size: 0x4, address: 0x80D66968
enum ptank_group_type {
    PGT_COLOR_MAT = 0,
    PGT_COLOR_MAT_UV2 = 1,
    PGT_POS_COLOR_SIZE = 2,
    PGT_POS_COLOR_SIZE_UV2 = 3,
    PGT_POS_COLOR_SIZE_ROT = 4,
    PGT_POS_COLOR_SIZE_ROT_UV2 = 5,
    MAX_PGT = 6,
};
// total size: 0x10
struct render_state {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    unsigned int src_blend; // offset 0x4, size 0x4
    unsigned int dst_blend; // offset 0x8, size 0x4
    int flags; // offset 0xC, size 0x4
};
// total size: 0x28
struct xParticleBatchSystem {
    // Members
    enum ptank_group_type pool_type; // offset 0x0, size 0x4
    struct render_state rs; // offset 0x4, size 0x10
    unsigned int order_group; // offset 0x14, size 0x4
    int order_index; // offset 0x18, size 0x4
    int stride; // offset 0x1C, size 0x4
    int (* update)(unsigned char *, int, struct ptank_pool &, float, void *); // offset 0x20, size 0x4
    void * context; // offset 0x24, size 0x4
};
// total size: 0x88
class SparkParticleSystem : public ParticleSystem {
    // Functions
    void setup();

    void reset(const struct xVec3 & loc, const struct xVec3 & dir);

    void add_tweaks(const char * prefix);

    void emit(float dt);

    // Members
public:
    struct config cfg; // offset 0x24, size 0x30
private:
    int system_id; // offset 0x54, size 0x4
    float emit_remaining; // offset 0x58, size 0x4
    struct RwTexture * texture; // offset 0x5C, size 0x4
    struct xParticleBatchSystem batch_system; // offset 0x60, size 0x28
};
// Range: 0x802CDC30 -> 0x802CDCFC
// this: r31
void SparkParticleSystem::setup() {}

// total size: 0x30
struct config {
    // Members
    float spark_min_life; // offset 0x0, size 0x4
    float spark_max_life; // offset 0x4, size 0x4
    float spark_min_size; // offset 0x8, size 0x4
    float spark_max_size; // offset 0xC, size 0x4
    float spark_velocity; // offset 0x10, size 0x4
    float spark_emit_rate; // offset 0x14, size 0x4
    float spark_gravity; // offset 0x18, size 0x4
    float spark_slow; // offset 0x1C, size 0x4
    float spark_fade_start; // offset 0x20, size 0x4
    unsigned char spark_r; // offset 0x24, size 0x1
    unsigned char spark_g; // offset 0x25, size 0x1
    unsigned char spark_b; // offset 0x26, size 0x1
    float spark_system_emit_time; // offset 0x28, size 0x4
    float spark_glow; // offset 0x2C, size 0x4
};
// Range: 0x802CDCFC -> 0x802CDD48
// this: r31
void SparkParticleSystem::reset(const struct xVec3 & loc /* r1+0x8 */, const struct xVec3 & dir /* r1+0xC */) {}

// total size: 0x24
class ParticleSystem {
    // Members
    int system_id; // offset 0x0, size 0x4
protected:
    struct xVec3 loc; // offset 0x4, size 0xC
    struct xVec3 dir; // offset 0x10, size 0xC
public:
    float time; // offset 0x1C, size 0x4
    void * __vptr$; // offset 0x20, size 0x4
};
// Range: 0x802CDD48 -> 0x802CDFF8
// this: r30
void SparkParticleSystem::add_tweaks(const char * prefix /* r31 */) {}

// total size: 0x30
struct SparkParticle {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    struct xVec3 vel; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    struct config * cfg; // offset 0x20, size 0x4
    int pads[3]; // offset 0x24, size 0xC
};
// Range: 0x802CDFF8 -> 0x802CE2B4
// this: r31
void SparkParticleSystem::emit(float dt /* f27 */) {
    // Local variables
    float time_passed; // f31
    int emit; // r30
    struct SparkParticle * p; // r1+0x8
    int count; // r29
    struct SparkParticle * end; // r28
    float dir_dot; // f29
    float vel_length; // f30
}

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
// total size: 0x0
class zCam2Player {};
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
// total size: 0x20
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
    unsigned short Allocated; // offset 0x1C, size 0x2
    unsigned short Pad0; // offset 0x1E, size 0x2
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
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
struct /* @class$1150zCombatEffects_cpp */ {
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
    struct /* @class$1150zCombatEffects_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
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
// total size: 0xC
struct /* @class$1288zCombatEffects_cpp */ {
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
        struct /* @class$1288zCombatEffects_cpp */ {
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
union /* @class$819zCombatEffects_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$819zCombatEffects_cpp */ {
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
// total size: 0x74
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
    struct xMemPool mempool; // offset 0x48, size 0x20
    struct xBase * (* resolvID)(unsigned int); // offset 0x68, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x6C, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x70, size 0x4
};
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
struct /* @class$832zCombatEffects_cpp */ {
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
    struct /* @class$832zCombatEffects_cpp */ {
        // Members
        int flags; // offset 0x0, size 0x4
        struct xColor_tag color[3]; // offset 0x4, size 0xC
    } debug; // offset 0x124, size 0x10
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
struct xGlobals * xglobals; // size: 0x4, address: 0x80D63020
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// Range: 0x802CE2B4 -> 0x802CE54C
int SparkParticleSystem::update(unsigned char * mem /* r28 */, int count /* r1+0x8 */, struct ptank_pool & pool_ /* r1+0xC */, float dt /* f30 */) {
    // Local variables
    struct ptank_pool__pos_color_size & pool; // r30
    struct SparkParticle * p; // r31
    struct SparkParticle * end; // r29
    float vel_length; // f31
    struct RwSphere worldsph; // r1+0x10
    float alpha; // f27

    // References
    // -> struct xGlobals * xglobals;
}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x20
struct ptank_pool {
    // Members
    struct render_state rs; // offset 0x0, size 0x10
    unsigned int order_group; // offset 0x10, size 0x4
    int order_index; // offset 0x14, size 0x4
    unsigned long used; // offset 0x18, size 0x4
    struct RpAtomic * ptank; // offset 0x1C, size 0x4
};
// total size: 0x38
struct ptank_pool__pos_color_size : public ptank_pool {
    // Members
    struct xVec3 * pos; // offset 0x20, size 0x4
    struct xColor_tag * color; // offset 0x24, size 0x4
    struct xVec2 * size; // offset 0x28, size 0x4
    int stride_pos; // offset 0x2C, size 0x4
    int stride_color; // offset 0x30, size 0x4
    int stride_size; // offset 0x34, size 0x4
};
// total size: 0x8
struct RpPTankLockStruct {
    // Members
    unsigned char * data; // offset 0x0, size 0x4
    int stride; // offset 0x4, size 0x4
};
static float bits_min_life; // size: 0x4, address: 0x80D6696C
static float bits_max_life; // size: 0x4, address: 0x80D66970
static float bits_min_size; // size: 0x4, address: 0x80D66974
static float bits_max_size; // size: 0x4, address: 0x80D66978
static float bits_rot_max; // size: 0x4, address: 0x80D6697C
static float bits_rot_min; // size: 0x4, address: 0x80D66980
static float bits_rot_slow; // size: 0x4, address: 0x80D66984
static float bits_velocity; // size: 0x4, address: 0x80D66988
static float bits_emit_rate; // size: 0x4, address: 0x80D6698C
static float bits_gravity; // size: 0x4, address: 0x80D66990
static unsigned char bits_r; // size: 0x1, address: 0x80D66994
static unsigned char bits_g; // size: 0x1, address: 0x80D66995
static unsigned char bits_b; // size: 0x1, address: 0x80D66996
static float bits_system_emit_time; // size: 0x4, address: 0x80D66998
static float bits_bounce_factor; // size: 0x4, address: 0x80D6B628
static class ParticleSystem * par_emitters[3]; // size: 0xC, address: 0x80D6B62C
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
static struct xResponseCurve proj_curve; // size: 0x14, address: 0x80D6B638
static char * emitter_labels[1]; // size: 0x4, address: 0x80D6699C
// Range: 0x802CE54C -> 0x802CE684
static void add_decal_tweaks(const char * prefix /* r30 */, struct decal_data & decal /* r31 */) {
    // Local variables
    char _buffer[128]; // r1+0x188
    char _buffer[128]; // r1+0x108
    char _buffer[128]; // r1+0x88
    char _buffer[128]; // r1+0x8

    // References
    // -> static char * emitter_labels[1];
}

static char * labels[10]; // size: 0x28, address: 0x80528918
// Range: 0x802CE684 -> 0x802CE738
static void add_effect_tweaks() {
    // Local variables
    char prefix[128]; // r1+0x8
    int i; // r31
    char * tail; // r30
    struct hit_effect_data & effect; // r29

    // References
    // -> static struct hit_effect_data hit_effects[3][10];
    // -> static char * labels[10];
}

// total size: 0x18
struct animix {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
    float scale_x; // offset 0x10, size 0x4
    float scale_y; // offset 0x14, size 0x4
};
// total size: 0x1C
struct curve_node {
    // Members
    float t; // offset 0x0, size 0x4
    struct animix ani; // offset 0x4, size 0x18
};
static struct curve_node proj_decal_curve[3]; // size: 0x54, address: 0x804D2C04
// Range: 0x802CE738 -> 0x802CE7EC
static void init_decal_emitters() {
    // Local variables
    int i; // r30
    struct decal_emitter_data & ded; // r31

    // References
    // -> static struct curve_node proj_decal_curve[3];
    // -> static struct xResponseCurve proj_curve;
    // -> static struct config decal_config[1];
    // -> static struct decal_emitter_data decal_emitters[1];
}

// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// Range: 0x802CE840 -> 0x802CE940
static void emit_decal(const struct decal_data & decal /* r31 */, const struct xVec3 & loc /* r1+0x10 */, const struct xVec3 & dir /* r26 */) {
    // Local variables
    struct xDecalEmitter & emitter; // r30
    int first; // r29
    int last; // r28
    int which; // r27
    struct xMat4x3 mat; // r1+0x20
    struct xVec3 decalsize; // r1+0x14

    // References
    // -> static struct decal_emitter_data decal_emitters[1];
}

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
// total size: 0x1C
struct /* @class$1769zCombatEffects_cpp */ {
    // Members
    struct RwTexture * asset; // offset 0x0, size 0x4
    unsigned long units; // offset 0x4, size 0x4
    struct xVec2 size; // offset 0x8, size 0x8
    struct xVec2 isize; // offset 0x10, size 0x8
    int prev; // offset 0x18, size 0x4
};
// total size: 0x50
struct unit_data {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char curve_index; // offset 0x1, size 0x1
    unsigned char u; // offset 0x2, size 0x1
    unsigned char v; // offset 0x3, size 0x1
    float frac; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float cull_size; // offset 0xC, size 0x4
    struct xMat4x3 mat; // offset 0x10, size 0x40
};
// total size: 0x0
class iterator {};
// total size: 0x14
class static_queue {
    // Members
public:
    unsigned long _first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long _max_size; // offset 0x8, size 0x4
    unsigned long _max_size_mask; // offset 0xC, size 0x4
    struct unit_data * _buffer; // offset 0x10, size 0x4
};
// total size: 0x30
struct /* @class$1771zCombatEffects_cpp */ {
    // Members
    unsigned char active; // offset 0x0, size 0x1
    unsigned char bind_to_player; // offset 0x1, size 0x1
    float time; // offset 0x4, size 0x4
    struct xVec3 center; // offset 0x8, size 0xC
    float size; // offset 0x14, size 0x4
    float scale; // offset 0x18, size 0x4
    float radius; // offset 0x1C, size 0x4
    float freq; // offset 0x20, size 0x4
    float duration; // offset 0x24, size 0x4
    float rate; // offset 0x28, size 0x4
    int emitted; // offset 0x2C, size 0x4
};
// total size: 0x23C
struct debug_info {
    // Members
    const char * name; // offset 0x0, size 0x4
    char prefix[128]; // offset 0x4, size 0x80
    struct curve_node curve[32]; // offset 0x84, size 0x180
    unsigned int texture; // offset 0x204, size 0x4
    unsigned int rendered; // offset 0x208, size 0x4
    // total size: 0x30
    struct /* @class$1771zCombatEffects_cpp */ {
        // Members
        unsigned char active; // offset 0x0, size 0x1
        unsigned char bind_to_player; // offset 0x1, size 0x1
        float time; // offset 0x4, size 0x4
        struct xVec3 center; // offset 0x8, size 0xC
        float size; // offset 0x14, size 0x4
        float scale; // offset 0x18, size 0x4
        float radius; // offset 0x1C, size 0x4
        float freq; // offset 0x20, size 0x4
        float duration; // offset 0x24, size 0x4
        float rate; // offset 0x28, size 0x4
        int emitted; // offset 0x2C, size 0x4
    } spiral; // offset 0x20C, size 0x30
};
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
// total size: 0xC
struct /* @class$768zCombatEffects_cpp */ {
    // Members
    int value_def; // offset 0x0, size 0x4
    int value_min; // offset 0x4, size 0x4
    int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$769zCombatEffects_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @class$770zCombatEffects_cpp */ {
    // Members
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
// total size: 0x1
struct /* @class$771zCombatEffects_cpp */ {
    // Members
    unsigned char value_def; // offset 0x0, size 0x1
};
// total size: 0x10
struct /* @class$772zCombatEffects_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    const char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x8
struct /* @class$773zCombatEffects_cpp */ {
    // Members
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @class$774zCombatEffects_cpp */ {
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
        struct /* @class$768zCombatEffects_cpp */ {
            // Members
            int value_def; // offset 0x0, size 0x4
            int value_min; // offset 0x4, size 0x4
            int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$769zCombatEffects_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        struct /* @class$770zCombatEffects_cpp */ {
            // Members
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        struct /* @class$771zCombatEffects_cpp */ {
            // Members
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        struct /* @class$772zCombatEffects_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            const char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        struct /* @class$773zCombatEffects_cpp */ {
            // Members
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        struct /* @class$774zCombatEffects_cpp */ {
            // Members
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x6C
struct xDecalEmitter {
    // Members
    struct config cfg; // offset 0x0, size 0x28
    // total size: 0x1C
    struct /* @class$1769zCombatEffects_cpp */ {
        // Members
        struct RwTexture * asset; // offset 0x0, size 0x4
        unsigned long units; // offset 0x4, size 0x4
        struct xVec2 size; // offset 0x8, size 0x8
        struct xVec2 isize; // offset 0x10, size 0x8
        int prev; // offset 0x18, size 0x4
    } texture; // offset 0x28, size 0x1C
    class static_queue units; // offset 0x44, size 0x14
    const struct curve_node * curve; // offset 0x58, size 0x4
    unsigned long curve_size; // offset 0x5C, size 0x4
    unsigned long curve_index; // offset 0x60, size 0x4
    float ilife; // offset 0x64, size 0x4
    struct debug_info * debug; // offset 0x68, size 0x4
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
// Range: 0x802CE940 -> 0x802CEA24
static void emit_surface_decal(const struct xVec3 & loc /* r1+0x10 */, const struct xVec3 & dir /* r30 */, const struct zHitDecalData & data /* r31 */) {
    // Local variables
    struct xMat4x3 mat; // r1+0x20
    struct emit_context ec; // r1+0x60

    // References
    // -> static struct xResponseCurve proj_curve;
}

static signed char init; // size: 0x1, address: 0x80D6B64C
static class SparkParticleSystem sparkSystem; // size: 0x88, address: 0x80D2D1C0
static signed char init; // size: 0x1, address: 0x80D6B64D
// total size: 0x5C
class RockParticleSystem : public ParticleSystem {
    // Functions
    static void setup();

    static void reset(const struct xVec3 & loc, const struct xVec3 & dir);

    static void emit(float dt);

    // Members
    int system_id; // offset 0x24, size 0x4
    float emit_remaining; // offset 0x28, size 0x4
    float bounce_y; // offset 0x2C, size 0x4
    struct RwTexture * texture; // offset 0x30, size 0x4
    struct xParticleBatchSystem batch_system; // offset 0x34, size 0x28
};
static class RockParticleSystem rockSystem; // size: 0x5C, address: 0x80D2D248
static signed char init; // size: 0x1, address: 0x80D6B64E
// total size: 0x5C
class BitsParticleSystem : public ParticleSystem {
    // Functions
    static void setup();

    static void reset(const struct xVec3 & loc, const struct xVec3 & dir);

    static void emit(float dt);

    // Members
    int system_id; // offset 0x24, size 0x4
    float emit_remaining; // offset 0x28, size 0x4
    float bounce_y; // offset 0x2C, size 0x4
    struct RwTexture * texture; // offset 0x30, size 0x4
    struct xParticleBatchSystem batch_system; // offset 0x34, size 0x28
};
static class BitsParticleSystem bitsSystem; // size: 0x5C, address: 0x80D2D2A4
// Range: 0x802CEA24 -> 0x802CEB58
static void init_par_emitters() {
    // Local variables
    int i; // r31
    class ParticleSystem & ed; // r30
    char temp[100]; // r1+0x8

    // References
    // -> static class ParticleSystem * par_emitters[3];
    // -> static class RockParticleSystem rockSystem;
    // -> static class SparkParticleSystem sparkSystem;
    // -> static class BitsParticleSystem bitsSystem;
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x802CEC1C -> 0x802CEC44
void init_emitters() {}

// total size: 0x1C
struct zSurfacePropTexAnim {
    // Members
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned int group; // offset 0xC, size 0x4
    unsigned int group_idx; // offset 0x10, size 0x4
    struct xBase * group_ptr; // offset 0x14, size 0x4
    struct RwTexture * * txtr_animList; // offset 0x18, size 0x4
};
// total size: 0x68
struct zSurfacePropUVFX {
    // Members
    int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    float minmax_timer[2]; // offset 0xC, size 0x8
    struct xVec3 trans; // offset 0x14, size 0xC
    struct xVec3 trans_spd; // offset 0x20, size 0xC
    struct xVec3 scale; // offset 0x2C, size 0xC
    struct xVec3 scale_spd; // offset 0x38, size 0xC
    struct xVec3 min; // offset 0x44, size 0xC
    struct xVec3 max; // offset 0x50, size 0xC
    struct xVec3 minmax_spd; // offset 0x5C, size 0xC
};
// total size: 0x118
struct zSurfaceProps {
    // Members
    struct zSurfAssetIN * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    struct zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x38
    unsigned int uvfx_flags; // offset 0x40, size 0x4
    struct zSurfacePropUVFX uvfx[2]; // offset 0x44, size 0xD0
    struct RwTexture * txtr_matFXDualMap; // offset 0x114, size 0x4
};
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
// Range: 0x802CEC44 -> 0x802CEEF8
void hit_effect(const class zCombatAttack * runningAttack /* r31 */, struct xSurface * surface /* r21 */, const struct xVec3 * hit_loc /* r22 */, const struct xVec3 * hit_norm /* r23 */, const struct xEnt * target /* r25 */, unsigned char connect /* r1+0x8 */) {
    // Local variables
    unsigned char no_hit_effect; // r20
    const struct zSurfaceProps * sp; // r30
    unsigned int hitSurfaceType; // r27
    unsigned int surfaceType; // r28
    const class zNPCCommon * npc; // r1+0x1C
    struct hit_effect_data & hit_effect; // r29
    const struct zHitDecalData & decalData; // r26
    struct xColor_tag start; // r1+0x15
    struct xColor_tag end; // r1+0x11
    struct xColor_tag start; // r1+0xD
    struct xColor_tag end; // r1+0x9

    // References
    // -> static class ParticleSystem * par_emitters[3];
    // -> static struct hit_effect_data hit_effects[3][10];
}

// Range: 0x802CEEF8 -> 0x802CEF98
void update_hit_effects(float dt /* f31 */) {
    // Local variables
    int i; // r31

    // References
    // -> static class ParticleSystem * par_emitters[3];
}

// total size: 0x8
struct substr {
    // Members
    const char * text; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x802CEF98 -> 0x802CEFB4
static void start_spiral_ribbon(struct spiral_data & data /* r5 */) {}

// Range: 0x802CEFB4 -> 0x802CF1C8
static void spiral_ribbon_emit(struct xFXRibbon & ribbon /* r1+0x8 */, struct spiral_config & cfg /* r31 */, struct spiral_data & data /* r30 */, const struct xVec3 & center /* r1+0xC */, float frac /* f31 */) {
    // Local variables
    float ang; // f30
    float rfrac; // f27
    float radius; // f26
    struct xVec3 tan; // r1+0x28
    struct xVec3 loc; // r1+0x1C
    float alpha; // f25
    float scale; // f24
    float so; // f23
    float co; // f29
    struct xVec3 otan; // r1+0x10
}

// Range: 0x802CF1C8 -> 0x802CF384
static void update_spiral_ribbon(struct xFXRibbon & ribbon /* r1+0x8 */, struct spiral_config & cfg /* r30 */, struct spiral_data & data /* r31 */, const struct xVec3 & center /* r1+0xC */, float dt /* f29 */) {
    // Local variables
    float oldtime; // f28
    int emit; // r29
    struct xVec3 loc; // r1+0x10
    float iduration; // f30
    float frac; // f31
    float newfrac; // f27
    float inc; // f26
    int i; // r28
}

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
// total size: 0x0
struct debug_info {};
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
    static class tier_queue_allocator joint_alloc; // size: 0x20

    // Members
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
private:
    struct activity_data * act; // offset 0x8, size 0x4
    const struct config_type * cfg; // offset 0xC, size 0x4
    struct debug_info * debug; // offset 0x10, size 0x4
};
static struct xFXRibbon slam_drop_ribbon; // size: 0x14, address: 0x80D6B650
// total size: 0x38
struct spiral_config {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
    struct xVec3 offset; // offset 0xC, size 0xC
    float freq; // offset 0x18, size 0x4
    float radius_inner; // offset 0x1C, size 0x4
    float radius_outer; // offset 0x20, size 0x4
    float orient; // offset 0x24, size 0x4
    float ang_offset; // offset 0x28, size 0x4
    float fade; // offset 0x2C, size 0x4
    float taper; // offset 0x30, size 0x4
    float rate; // offset 0x34, size 0x4
};
static struct spiral_config slam_drop_cfg; // size: 0x38, address: 0x80528940
// total size: 0xC
struct spiral_data {
    // Members
    unsigned int ribbon_flags; // offset 0x0, size 0x4
    float emit_frac; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
};
static struct spiral_data slam_drop_data; // size: 0xC, address: 0x80D6B664
// Range: 0x802CF384 -> 0x802CF388
void init_slam_drop_ribbon() {}

// Range: 0x802CF388 -> 0x802CF3B8
void start_slam_drop_ribbon() {
    // References
    // -> static struct spiral_data slam_drop_data;
    // -> static struct spiral_config slam_drop_cfg;
    // -> static struct xFXRibbon slam_drop_ribbon;
}

// Range: 0x802CF3B8 -> 0x802CF3F8
void update_slam_drop_ribbon(const struct xVec3 & center /* r1+0x8 */, float dt /* r1+0xC */) {
    // References
    // -> static struct spiral_data slam_drop_data;
    // -> static struct spiral_config slam_drop_cfg;
    // -> static struct xFXRibbon slam_drop_ribbon;
}

static struct xFXRibbon slam_land_ribbon[3]; // size: 0x3C, address: 0x80D2D300
static struct spiral_config slam_land_cfg[3]; // size: 0xA8, address: 0x80528978
static struct spiral_data slam_land_data[3]; // size: 0x24, address: 0x80D2D33C
// Range: 0x802CF3F8 -> 0x802CF44C
void init_slam_land_ribbon() {
    // Local variables
    char name[64]; // r1+0x8
    int i; // r31
}

// Range: 0x802CF44C -> 0x802CF4B8
void start_slam_land_ribbon() {
    // Local variables
    int i; // r31

    // References
    // -> static struct spiral_data slam_land_data[3];
    // -> static struct spiral_config slam_land_cfg[3];
    // -> static struct xFXRibbon slam_land_ribbon[3];
}

// Range: 0x802CF4B8 -> 0x802CF534
void update_slam_land_ribbon(const struct xVec3 & center /* r1+0x8 */, float dt /* r1+0xC */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct spiral_data slam_land_data[3];
    // -> static struct spiral_config slam_land_cfg[3];
    // -> static struct xFXRibbon slam_land_ribbon[3];
}

static struct curve_node punch_streak_ribbon_curve[3]; // size: 0x24, address: 0x80528A20
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
static struct config_type cfg; // size: 0x20, address: 0x80D2D360
struct xVec3 m_Null; // size: 0xC, address: 0x80D6D920
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
// total size: 0x0
struct zCutsceneMgr {};
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
struct zGlobals globals; // size: 0x798, address: 0x80D00728
// total size: 0x8
class iterator {
    // Members
    unsigned long it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
// Range: 0x802CF534 -> 0x802CF768
static void fix_punch_streak_ribbon(struct xFXRibbon * effect /* r31 */, const struct xVec3 * volatile diff /* r1+0x8 */) {
    // Local variables
    class iterator it; // r1+0x4C
    struct xVec3 dir; // r1+0x54

    // References
    // -> struct zGlobals globals;
    // -> struct xVec3 m_Null;
}

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
// total size: 0x30
class tier_queue {
    // Members
    unsigned long first; // offset 0x0, size 0x4
    unsigned long _size; // offset 0x4, size 0x4
    unsigned long wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
};
// total size: 0x8
struct block_data {
    // Members
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
// total size: 0x20
class tier_queue_allocator {
    // Members
    struct block_data * blocks; // offset 0x0, size 0x4
    unsigned long _unit_size; // offset 0x4, size 0x4
    unsigned long _block_size; // offset 0x8, size 0x4
    unsigned long _block_size_shift; // offset 0xC, size 0x4
    unsigned long _max_blocks; // offset 0x10, size 0x4
    unsigned long _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
    unsigned int size; // offset 0x1C, size 0x4
};
static float streakHeadScale; // size: 0x4, address: 0x80D669A0
static float segmentLayDist; // size: 0x4, address: 0x80D669A4
static int averagePrevNormals; // size: 0x4, address: 0x80D669A8
static struct xFXRibbon debugStreakRibbon; // size: 0x14, address: 0x80D6B670
// total size: 0x38
class PunchEffect {
    // Functions
    void Start(const class zCombatAttack * runningAttack);

    void Continue();

    void Stop();

    void updateRibbon(unsigned int index, const struct xVec3 * cacheElement, const struct xEntFrame * frame, unsigned int addCount);

    void Update(const class zCombatAttack * runningAttack, struct xEnt * attacker, float dt);

    void RenderEffects();

    // Members
    struct xFXRibbon * up[2]; // offset 0x0, size 0x8
    struct xFXRibbon * right[2]; // offset 0x8, size 0x8
    float lastTime; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float distance[2]; // offset 0x18, size 0x8
    struct xVec3 averageWidth[2]; // offset 0x20, size 0x18
};
// Range: 0x802CF768 -> 0x802CF7FC
void PunchEffect::SetPunchEffectColor(struct xColor_tag & color /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static struct xFXRibbon debugStreakRibbon;
    // -> static struct curve_node punch_streak_ribbon_curve[3];
}

// Range: 0x802CF7FC -> 0x802CF8D0
static void default_ribbon(struct xFXRibbon * effect /* r1+0x8 */) {
    // References
    // -> static struct config_type cfg;
    // -> static struct curve_node punch_streak_ribbon_curve[3];
}

static struct config_type debug_ribbon_cfg; // size: 0x20, address: 0x80D2D380
// Range: 0x802CF8D0 -> 0x802CF9B4
void PunchEffect::Init() {
    // References
    // -> static int averagePrevNormals;
    // -> static float segmentLayDist;
    // -> static float streakHeadScale;
    // -> static struct xFXRibbon debugStreakRibbon;
    // -> static struct config_type debug_ribbon_cfg;
}

// Range: 0x802CF9B4 -> 0x802CFA60
// this: r31
void PunchEffect::Start(const class zCombatAttack * runningAttack /* r29 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static struct xFXRibbon debugStreakRibbon;
}

// Range: 0x802CFA60 -> 0x802CFA74
// this: r3
void PunchEffect::Continue() {}

// Range: 0x802CFA74 -> 0x802CFA80
// this: r3
void PunchEffect::Stop() {}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D669AC
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// Range: 0x802CFA80 -> 0x802CFFCC
// this: r31
void PunchEffect::updateRibbon(unsigned int index /* r30 */, const struct xVec3 * cacheElement /* r26 */, const struct xEntFrame * frame /* r28 */, unsigned int addCount /* r24 */) {
    // Local variables
    struct xVec3 prevElement; // r1+0xA0
    struct xQuat oldOrient; // r1+0x90
    struct xQuat newOrient; // r1+0x80
    unsigned int i; // r27
    struct xVec3 center; // r1+0x74
    float percent; // f31
    struct xVec3 pos; // r1+0x68
    struct xQuat orient; // r1+0x58
    struct xMat3x3 orientMat; // r1+0xB0
    struct xVec3 dir; // r1+0x4C
    struct xVec3 * prevWidth; // r25
    struct xVec3 widthDir; // r1+0x40
    struct xVec3 negWidthDir; // r1+0x34
    struct xVec3 norm; // r1+0x28
    int count; // r29

    // References
    // -> struct xVec3 m_Null;
    // -> static char __FUNCTION__[13];
    // -> static int averagePrevNormals;
    // -> static float segmentLayDist;
    // -> struct zGlobals globals;
}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D669B9
// Range: 0x802CFFCC -> 0x802D0160
// this: r31
void PunchEffect::Update(const class zCombatAttack * runningAttack /* r28 */, struct xEnt * attacker /* r29 */, float dt /* r1+0x8 */) {
    // Local variables
    unsigned int cachePos; // r26
    unsigned int addCount; // r27
    unsigned int i; // r30
    struct xVec3 diff; // r1+0xC

    // References
    // -> static char __FUNCTION__[7];
}

// Range: 0x802D0160 -> 0x802D0164
void PunchEffect::RenderModels() {}

// Range: 0x802D0164 -> 0x802D0210
// this: r30
void PunchEffect::RenderEffects() {
    // Local variables
    unsigned int effectCount; // r29
    struct xFXRibbon * ribbons[2]; // r1+0x8
    unsigned int i; // r31
}

static // total size: 0x1C
struct {} @unnamed@zCombatEffects_cpp@::RockParticleSystem::__vtable; // size: 0x1C, address: 0x80528A44
// Range: 0x802D0210 -> 0x802D0220
static char * RockParticleSystem::tweak_name() {}

// Range: 0x802D0220 -> 0x802D02E0
// this: r31
static void RockParticleSystem::setup() {}

// total size: 0x30
struct RockParticle {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    struct xVec3 vel; // offset 0x10, size 0xC
    float rot; // offset 0x1C, size 0x4
    float a; // offset 0x20, size 0x4
    float c; // offset 0x24, size 0x4
    float life; // offset 0x28, size 0x4
    float pad; // offset 0x2C, size 0x4
};
// Range: 0x802D02E0 -> 0x802D0508
static int RockParticleSystem::update(unsigned char * mem /* r27 */, int count /* r1+0x8 */, struct ptank_pool & pool_ /* r1+0xC */, float dt /* f30 */, void * context /* r1+0x10 */) {
    // Local variables
    class RockParticleSystem * system; // r28
    struct ptank_pool__pos_color_size_rot & pool; // r30
    struct RockParticle * p; // r31
    struct RockParticle * end; // r29
    float bounce_y; // f31
    struct RwSphere worldsph; // r1+0x14

    // References
    // -> struct xGlobals * xglobals;
    // -> static float rock_bounce_factor;
    // -> static float rock_gravity;
}

// total size: 0x40
struct ptank_pool__pos_color_size_rot : public ptank_pool {
    // Members
    struct xVec3 * pos; // offset 0x20, size 0x4
    struct xColor_tag * color; // offset 0x24, size 0x4
    struct xVec2 * size; // offset 0x28, size 0x4
    float * rot; // offset 0x2C, size 0x4
    int stride_pos; // offset 0x30, size 0x4
    int stride_color; // offset 0x34, size 0x4
    int stride_size; // offset 0x38, size 0x4
    int stride_rot; // offset 0x3C, size 0x4
};
// Range: 0x802D0508 -> 0x802D05C0
// this: r31
static void RockParticleSystem::reset(const struct xVec3 & loc /* r1+0x8 */, const struct xVec3 & dir /* r1+0xC */) {
    // References
    // -> struct xGlobals * xglobals;
    // -> static float rock_system_emit_time;
}

// total size: 0xDC
struct zEnt : public xEnt {
    // Members
    struct xAnimTable * atbl; // offset 0xD8, size 0x4
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
    eBrainType_Player_Remy = 15,
    eBrainType_Player_HumanVehicle = 16,
    eBrainType_Player_Ratball = 17,
    eBrainType_Player_MG1 = 18,
    eBrainType_Player_MG2_RatOnball = 19,
    eBrainType_Player_MG3_Pufferoids = 20,
    eBrainType_Player_MG4_GrapeStomper = 21,
    eBrainType_Player_MG5_CongaLine = 22,
    eBrainType_Player_MG6_AvoidTheStuff = 23,
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
// total size: 0x4
struct Buttons {
    // Members
    unsigned char jump; // offset 0x0, size 0x1
    unsigned char actionMove; // offset 0x1, size 0x1
    unsigned char contextMove; // offset 0x2, size 0x1
    unsigned char otherMove; // offset 0x3, size 0x1
};
// total size: 0x24
class zPlayerInput {
    // Members
public:
    struct AnalogStick stick1; // offset 0x0, size 0x8
    struct AnalogStick stick2; // offset 0x8, size 0x8
    struct Buttons on; // offset 0x10, size 0x4
    struct Buttons pressed; // offset 0x14, size 0x4
    struct Buttons released; // offset 0x18, size 0x4
private:
    class zPad * mPad; // offset 0x1C, size 0x4
    float mActionTimer; // offset 0x20, size 0x4
};
// total size: 0x0
struct zSlideCam {};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
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
// total size: 0x0
class zNPCCommonMoveToTransient {};
// total size: 0x0
class zNPCCommonNukeTransient {};
// total size: 0x0
class zNPCCommonAnimTest {};
// total size: 0x0
class zNPCCommonPlayTaunt {};
// total size: 0x0
class zNPCCommonPlayCustomTransient {};
// total size: 0x0
class zNPCCommonInterestingIdle {};
// total size: 0x4
struct /* @class$2276zCombatEffects_cpp */ {
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
// total size: 0x0
struct zEntTrigger {};
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
// total size: 0x0
class zSwitchLever {};
// total size: 0x94
class zNPCPerceptionTarget {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    struct xEnt * targetEnt; // offset 0x4, size 0x4
    float priority; // offset 0x8, size 0x4
    float distSq; // offset 0xC, size 0x4
    float damagedByTimer; // offset 0x10, size 0x4
    char description[128]; // offset 0x14, size 0x80
};
// total size: 0x4
struct /* @class$2207zCombatEffects_cpp */ {
    // Members
    float u; // offset 0x0, size 0x4
};
// total size: 0x10
struct /* @class$2208zCombatEffects_cpp */ {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    unsigned char forward; // offset 0xC, size 0x1
};
union MountData {
    // total size: 0x4
    struct /* @class$2207zCombatEffects_cpp */ {
        // Members
        float u; // offset 0x0, size 0x4
    } tightrope; // offset 0x0, size 0x4
    // total size: 0x10
    struct /* @class$2208zCombatEffects_cpp */ {
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
struct /* @class$2209zCombatEffects_cpp */ {
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
    struct /* @class$2209zCombatEffects_cpp */ {
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
struct /* @class$2206zCombatEffects_cpp */ {
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
    struct /* @class$2206zCombatEffects_cpp */ {
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
// total size: 0x0
class zInteraction {};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
};
// total size: 0x28
struct pointer_asset : public xDynAsset {
    // Members
    struct xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0x0
class zSpringboard {};
// total size: 0x0
class zNPCBase {};
// total size: 0x2
struct /* @class$2211zCombatEffects_cpp */ {
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
// total size: 0x0
struct xSerial {};
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
    struct /* @class$2211zCombatEffects_cpp */ {
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
// total size: 0x270
class zNPCPerception {
    // Static members
    static int completeUpdateCount; // size: 0x4

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    class zNPCCommon * owner; // offset 0x4, size 0x4
    class zNPCPerceptionTarget target[4]; // offset 0x8, size 0x250
    int totalTargets; // offset 0x258, size 0x4
    struct xEnt * widgetTargetEnt; // offset 0x25C, size 0x4
    struct xEnt * smashMeWidgetTargetEnt; // offset 0x260, size 0x4
    float completeUpdateTimeSince; // offset 0x264, size 0x4
    float completeUpdateTimeLeft; // offset 0x268, size 0x4
    unsigned char widgetAttackForever; // offset 0x26C, size 0x1
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
// total size: 0x0
class xNavigationMeshAsset {};
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
// total size: 0xFB0
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
    struct /* @class$2276zCombatEffects_cpp */ {
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
    class zNPCPerception perception; // offset 0xBEC, size 0x270
    float shadow_radius; // offset 0xE5C, size 0x4
    signed short incredi_power_points; // offset 0xE60, size 0x2
    int grab_bone; // offset 0xE64, size 0x4
    struct xVec3 grab_offset; // offset 0xE68, size 0xC
    struct xVec3 surroundedMoveTo; // offset 0xE74, size 0xC
    unsigned char surroundedValid; // offset 0xE80, size 0x1
    struct xVec3 shakeModelDisp; // offset 0xE84, size 0xC
    float tweak_scale; // offset 0xE90, size 0x4
    struct xVec3 tweak_offset; // offset 0xE94, size 0xC
    const char * debug_name; // offset 0xEA0, size 0x4
    unsigned char tweak_use_bounding_box; // offset 0xEA4, size 0x1
    unsigned char debug_output; // offset 0xEA5, size 0x1
protected:
    unsigned char off_during_cinematic; // offset 0xEA6, size 0x1
    float NPCFXdt; // offset 0xEA8, size 0x4
    float near_target_radius; // offset 0xEAC, size 0x4
    float mass; // offset 0xEB0, size 0x4
    float cull_distance; // offset 0xEB4, size 0x4
    class group * group_data; // offset 0xEB8, size 0x4
    struct zCombatDamageInfo currentCombatInfo; // offset 0xEBC, size 0x38
    enum ezBlockDir blockDirection; // offset 0xEF4, size 0x4
    signed short bound_bone; // offset 0xEF8, size 0x2
    unsigned short sound_id_offset; // offset 0xEFA, size 0x2
    unsigned short globalParametersSize; // offset 0xEFC, size 0x2
    struct xModelAssetParam * globalParameters; // offset 0xF00, size 0x4
    unsigned short overrideParametersSize; // offset 0xF04, size 0x2
    struct xModelAssetParam * overrideParameters; // offset 0xF08, size 0x4
    float shadow_strength; // offset 0xF0C, size 0x4
    float attackingPlayerTimer; // offset 0xF10, size 0x4
    struct xEnt * attackingPlayerEnt; // offset 0xF14, size 0x4
    struct xGroup * interestPointerGroup; // offset 0xF18, size 0x4
    struct xModelInstance * nukeIcon; // offset 0xF1C, size 0x4
    struct xModelInstance * nukeRings[6]; // offset 0xF20, size 0x18
    struct xModelInstance * stunIcon; // offset 0xF38, size 0x4
    struct xModelInstance * shieldGenerator; // offset 0xF3C, size 0x4
    float destroyShieldGeneratorTimer; // offset 0xF40, size 0x4
    float destroyShieldSparkTimer; // offset 0xF44, size 0x4
    struct xBound oldBound; // offset 0xF48, size 0x4C
    struct xEnt * aboutToBeHitBy; // offset 0xF94, size 0x4
    struct xEnt * lastHitBy; // offset 0xF98, size 0x4
    unsigned char hitByThrowable; // offset 0xF9C, size 0x1
public:
    float originalScale; // offset 0xFA0, size 0x4
    unsigned char ourDeathHasBeenRegistered; // offset 0xFA4, size 0x1
protected:
    float prevAlpha; // offset 0xFA8, size 0x4
};
// total size: 0x208
struct zNPCAttackerData {
    // Members
    class zNPCCommon * npcAttacker[128]; // offset 0x0, size 0x200
    int npcAttackerTotal; // offset 0x200, size 0x4
    int npcAttackerTotalLastFrame; // offset 0x204, size 0x4
};
// total size: 0x890
struct /* @class$2064zCombatEffects_cpp */ {
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
// total size: 0x6AC
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x74, size 0x4
    int num_base; // offset 0x78, size 0x4
    struct xBase * * base; // offset 0x7C, size 0x4
    unsigned int num_update_base; // offset 0x80, size 0x4
    struct xBase * * update_base; // offset 0x84, size 0x4
    int baseCount[195]; // offset 0x88, size 0x30C
    struct xBase * baseList[195]; // offset 0x394, size 0x30C
    struct _zEnv * zen; // offset 0x6A0, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A4, size 0x4
    unsigned char enableDrawing; // offset 0x6A8, size 0x1
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
    class zPlayerInput playerInput; // offset 0x218, size 0x24
    struct xVec3 lastDeltaPos; // offset 0x23C, size 0xC
    float update_dt; // offset 0x248, size 0x4
    float last_update_dt; // offset 0x24C, size 0x4
    struct xVec3 update_motion; // offset 0x250, size 0xC
    struct xVec3 previous_position; // offset 0x25C, size 0xC
    struct xVec3 predictRotate; // offset 0x268, size 0xC
    struct xVec3 predictTranslate; // offset 0x274, size 0xC
    float predictAngV; // offset 0x280, size 0x4
    struct xVec3 predictCurrDir; // offset 0x284, size 0xC
    float predictCurrVel; // offset 0x290, size 0x4
    struct zSlideCam * slideCam; // offset 0x294, size 0x4
    struct xJSPHeader * floor_jsp; // offset 0x298, size 0x4
    struct xClumpCollBSPTriangle * floor_bspTriangle; // offset 0x29C, size 0x4
    struct xVec3 floorNorm; // offset 0x2A0, size 0xC
    int slope; // offset 0x2AC, size 0x4
    float floor_collision_timer; // offset 0x2B0, size 0x4
    float floor_distance; // offset 0x2B4, size 0x4
    struct xEnt * floor_entity; // offset 0x2B8, size 0x4
    unsigned int floor_oid; // offset 0x2BC, size 0x4
    struct xSurface * floor_surface; // offset 0x2C0, size 0x4
    unsigned int collisionFlags; // offset 0x2C4, size 0x4
    unsigned char currentIsNearLedge; // offset 0x2C8, size 0x1
    unsigned char currentIsNearLedgeValid; // offset 0x2C9, size 0x1
    float fallingTime; // offset 0x2CC, size 0x4
    float idleAnimationTimer; // offset 0x2D0, size 0x4
    unsigned int lorezModelID; // offset 0x2D4, size 0x4
    struct xModelInstance * lorezModel; // offset 0x2D8, size 0x4
    struct xModelInstance * hirezModel; // offset 0x2DC, size 0x4
    struct zNPCAttackerData npcAttacker[3]; // offset 0x2E0, size 0x618
    class zNPCCommon * roundRobinMelee; // offset 0x8F8, size 0x4
    float roundRobinTimeOut; // offset 0x8FC, size 0x4
    float enemyKilledComboTimer; // offset 0x900, size 0x4
    int enemyKilledCombo; // offset 0x904, size 0x4
private:
    float depenetration_velocity; // offset 0x908, size 0x4
    struct xEntShadow entShadow_embedded; // offset 0x90C, size 0x2C
    struct xShadowSimpleCache simpShadow_embedded; // offset 0x938, size 0xA4
    unsigned int loaded_assetid; // offset 0x9DC, size 0x4
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
    struct /* @class$2064zCombatEffects_cpp */ {
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
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// Range: 0x802D05C0 -> 0x802D07F8
static void RockParticleSystem::add_tweaks(const char * prefix /* r31 */) {
    // References
    // -> static float rock_system_emit_time;
    // -> static float rock_color;
    // -> static float rock_emit_rate;
    // -> static float rock_lifetime;
    // -> static float rock_random_velocity;
    // -> static float rock_min_y_vel;
    // -> static float rock_gravity;
    // -> static float rock_velocity;
    // -> static float rock_size;
    // -> static float rock_bounce_factor;
    // -> static float rock_alpha;
}

// Range: 0x802D07F8 -> 0x802D0A68
// this: r31
static void RockParticleSystem::emit(float dt /* r1+0x8 */) {
    // Local variables
    float time_passed; // f31
    int emit; // r30
    struct RockParticle * p; // r1+0xC
    int count; // r29
    struct RockParticle * end; // r28

    // References
    // -> static float rock_emit_rate;
    // -> static float rock_gravity;
    // -> static float rock_lifetime;
    // -> static float rock_min_y_vel;
    // -> static float rock_velocity;
    // -> static float rock_random_velocity;
    // -> static float rock_size;
    // -> static float rock_color;
    // -> static float rock_alpha;
}

// total size: 0x1C
struct {} zCombatEffects::ParticleSystem::__vtable; // size: 0x1C, address: 0x80528A60
static // total size: 0x1C
struct {} @unnamed@zCombatEffects_cpp@::BitsParticleSystem::__vtable; // size: 0x1C, address: 0x80528A7C
// Range: 0x802D0A68 -> 0x802D0A78
static char * BitsParticleSystem::tweak_name() {}

// Range: 0x802D0A78 -> 0x802D0B38
// this: r31
static void BitsParticleSystem::setup() {}

// total size: 0x30
struct BitParticle {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    struct xVec3 vel; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    float rot; // offset 0x20, size 0x4
    float rot_change; // offset 0x24, size 0x4
    float u; // offset 0x28, size 0x4
    float v; // offset 0x2C, size 0x4
};
// Range: 0x802D0B38 -> 0x802D0D84
static int BitsParticleSystem::update(unsigned char * mem /* r27 */, int count /* r1+0x8 */, struct ptank_pool & pool_ /* r1+0xC */, float dt /* f30 */, void * context /* r1+0x10 */) {
    // Local variables
    class BitsParticleSystem * system; // r28
    struct ptank_pool__pos_color_size_rot_uv2 & pool; // r30
    struct BitParticle * p; // r31
    struct BitParticle * end; // r29
    float bounce_y; // f31
    struct RwSphere worldsph; // r1+0x14

    // References
    // -> static unsigned char bits_r;
    // -> static unsigned char bits_g;
    // -> static unsigned char bits_b;
    // -> struct xGlobals * xglobals;
    // -> static float bits_bounce_factor;
    // -> static float bits_gravity;
}

// total size: 0x48
struct ptank_pool__pos_color_size_rot_uv2 : public ptank_pool {
    // Members
    struct xVec3 * pos; // offset 0x20, size 0x4
    struct xColor_tag * color; // offset 0x24, size 0x4
    struct xVec2 * size; // offset 0x28, size 0x4
    struct xVec2 * uv; // offset 0x2C, size 0x4
    float * rot; // offset 0x30, size 0x4
    int stride_pos; // offset 0x34, size 0x4
    int stride_color; // offset 0x38, size 0x4
    int stride_size; // offset 0x3C, size 0x4
    int stride_rot; // offset 0x40, size 0x4
    int stride_uv; // offset 0x44, size 0x4
};
// Range: 0x802D0D84 -> 0x802D0E3C
// this: r31
static void BitsParticleSystem::reset(const struct xVec3 & loc /* r1+0x8 */, const struct xVec3 & dir /* r1+0xC */) {
    // References
    // -> struct xGlobals * xglobals;
    // -> static float bits_system_emit_time;
}

// Range: 0x802D0E3C -> 0x802D1140
static void BitsParticleSystem::add_tweaks(const char * prefix /* r31 */) {
    // References
    // -> static float bits_system_emit_time;
    // -> static float bits_emit_rate;
    // -> static float bits_bounce_factor;
    // -> static unsigned char bits_b;
    // -> static unsigned char bits_g;
    // -> static unsigned char bits_r;
    // -> static float bits_velocity;
    // -> static float bits_min_size;
    // -> static float bits_max_size;
    // -> static float bits_rot_slow;
    // -> static float bits_rot_min;
    // -> static float bits_rot_max;
    // -> static float bits_gravity;
    // -> static float bits_max_life;
    // -> static float bits_min_life;
}

// Range: 0x802D1140 -> 0x802D1454
// this: r31
static void BitsParticleSystem::emit(float dt /* r1+0x8 */) {
    // Local variables
    float time_passed; // f31
    int emit; // r30
    struct BitParticle * p; // r1+0xC
    int count; // r29
    struct BitParticle * end; // r28
    float dir_dot; // f30

    // References
    // -> static float bits_emit_rate;
    // -> static float bits_gravity;
    // -> static float bits_velocity;
    // -> static float bits_min_size;
    // -> static float bits_max_size;
    // -> static float bits_min_life;
    // -> static float bits_max_life;
    // -> static float bits_rot_min;
    // -> static float bits_rot_max;
}

// total size: 0x1C
struct {} zCombatEffects::SparkParticleSystem::__vtable; // size: 0x1C, address: 0x80528A98

