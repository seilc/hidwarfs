/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static float RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
static float UBER_RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
unsigned char DASH_LEVEL; // size: 0x1, address: 0x608E48
static class xVec3 BOUND_OFFSET; // size: 0xC, address: 0x5EA538
static signed int headBones[17]; // size: 0x44, address: 0x5EA550
unsigned char need_setup; // size: 0x1, address: 0x608E50
class config default_config; // size: 0x44, address: 0x67FE40
signed int system_id; // size: 0x4, address: 0x6079B0
static class smoke_config dash_smoke; // size: 0x38, address: 0x5094E0
static float DASH_ACCELERATION; // size: 0x4, address: 0x6079BC
static float DASH_SLOW_ACCELERATION; // size: 0x4, address: 0x6079C0
static float DASH_DECELERATION; // size: 0x4, address: 0x6079C4
float GRAVITY; // size: 0x4, address: 0x6079C8
float LOOK_AHEAD; // size: 0x4, address: 0x6079CC
float time_since_start; // size: 0x4, address: 0x608E54
float SPEED_FAST; // size: 0x4, address: 0x6079D0
float SPEED_NORMAL; // size: 0x4, address: 0x6079D4
float SPEED_SLOW; // size: 0x4, address: 0x6079D8
static float dust_rot_min; // size: 0x4, address: 0x5EA598
static float dust_rot_max; // size: 0x4, address: 0x5EA5A0
static float dust_velocity_back; // size: 0x4, address: 0x5EA5A8
static class xVec3 dust_start_offset; // size: 0xC, address: 0x5EA5B0
static float MIN_START_BACK_DISTANCE; // size: 0x4, address: 0x5EA5C0
static float START_BACK_DISTANCE; // size: 0x4, address: 0x5EA5C8
static class xColor_tag LASER_COLOR; // size: 0x4, address: 0x5EA5D0
class lightweight_system * system; // size: 0x4, address: 0x608DD8
class lightweight_system * system; // size: 0x4, address: 0x608E58
static float WALL_HIT_FRICTION_ADD; // size: 0x4, address: 0x608E5C
static float MIN_SLOW_SPEED; // size: 0x4, address: 0x6079DC
static float HIT_SPEED_SLOW; // size: 0x4, address: 0x6079E0
static class config dust_config; // size: 0x4C, address: 0x67FE90
static class config fire_emit_config; // size: 0x44, address: 0x67FEE0
// total size: 0xE0
struct /* @anon27 */ {} zDash::dash::__vtable; // size: 0xE0, address: 0x5FF2D0
class xVec3 g_Y3; // size: 0xC, address: 0x5E77E0
// total size: 0x7C
struct /* @anon21 */ {} zDash::chase_lasers::__vtable; // size: 0x7C, address: 0x5FF8E0
// total size: 0x7C
struct /* @anon9 */ {} behavior_implementation<zDash::player>::__vtable; // size: 0x7C, address: 0x0
// total size: 0x78
struct /* @anon24 */ {} behavior::__vtable; // size: 0x78, address: 0x0
// total size: 0x7C
struct /* @anon30 */ {} zDash::dust::__vtable; // size: 0x7C, address: 0x5FFAE0
// total size: 0x80
struct /* @anon8 */ {} zDash::airborne::__vtable; // size: 0x80, address: 0x5FF5E0
// total size: 0x80
struct /* @anon11 */ {} zDash::dash_move::__vtable; // size: 0x80, address: 0x0
// total size: 0x80
struct /* @anon0 */ {} zDash::friction_death::__vtable; // size: 0x80, address: 0x5FF760
// total size: 0x7C
struct /* @anon12 */ {} zDash::incredimeter_hud::__vtable; // size: 0x7C, address: 0x5FF660
// total size: 0x7C
struct /* @anon20 */ {} zDash::car_check::__vtable; // size: 0x7C, address: 0x5FF9E0
// total size: 0x7C
struct /* @anon26 */ {} zDash::timer::__vtable; // size: 0x7C, address: 0x5FF860
// total size: 0x80
struct /* @anon29 */ {} zDash::loop::__vtable; // size: 0x80, address: 0x5FF460
// total size: 0x80
struct /* @anon18 */ {} zDash::run::__vtable; // size: 0x80, address: 0x5FFA60
// total size: 0x7C
struct /* @anon17 */ {} zDash::sink::__vtable; // size: 0x7C, address: 0x5FF960
// total size: 0x80
struct /* @anon14 */ {} zDash::wall_hit::__vtable; // size: 0x80, address: 0x5FF7E0
// total size: 0x7C
struct /* @anon28 */ {} zDash::fall::__vtable; // size: 0x7C, address: 0x5FF6E0
// total size: 0x80
struct /* @anon2 */ {} zDash::water::__vtable; // size: 0x80, address: 0x5FF4E0
// total size: 0x80
struct /* @anon6 */ {} zDash::trip::__vtable; // size: 0x80, address: 0x5FF560
// total size: 0x18
struct /* @anon3 */ {} zDash::dash_jump::__vtable; // size: 0x18, address: 0x5FFBE0
// total size: 0x18
struct /* @anon7 */ {} jump::__vtable; // size: 0x18, address: 0x5FFE70
// total size: 0x80
struct /* @anon5 */ {} zDash::jump::__vtable; // size: 0x80, address: 0x5FFB60
// total size: 0x7C
struct /* @anon1 */ {} zDash::friction_effects::__vtable; // size: 0x7C, address: 0x5FFC00
// total size: 0x7C
struct /* @anon19 */ {} zDash::boost::__vtable; // size: 0x7C, address: 0x5FF3E0
// total size: 0x4C
struct /* @anon15 */ {} behavior_manager::__vtable; // size: 0x4C, address: 0x604200
// total size: 0x24
struct /* @anon13 */ {} zDash::camera::__vtable; // size: 0x24, address: 0x6041D0
// total size: 0x24
struct /* @anon16 */ {} xCam::__vtable; // size: 0x24, address: 0x0
// total size: 0xE0
struct /* @anon4 */ {} zDash::player::__vtable; // size: 0xE0, address: 0x5FFC80
class zCheats gCheats; // size: 0x2, address: 0x608FA8
class zGlobals globals; // size: 0x640, address: 0x61C210
class config default_config; // size: 0x44, address: 0x6C53E0
signed int current_triangle; // size: 0x4, address: 0x607CC4
class track * current_track; // size: 0x4, address: 0x609218
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
class xGrid colls_oso_grid; // size: 0x38, address: 0x66BC20
class xGrid colls_grid; // size: 0x38, address: 0x66BBE0
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x653BA0
unsigned int anrecover(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x23CEB0
unsigned int anno_recover_cb(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x23CEE0
unsigned int andeath(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x23CF10
unsigned char should_flash_static(void *, class TextureFlasher *); // size: 0x0, address: 0x23D250
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class config default_config; // size: 0x4C, address: 0x6BA620
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x24
struct /* @anon10 */ {} z::lightweight_system<z::rocket, 20>::__vtable; // size: 0x24, address: 0x5FF3B0
// total size: 0x24
struct /* @anon23 */ {} z::lightweight_system_base::__vtable; // size: 0x24, address: 0x0
// total size: 0x24
struct /* @anon25 */ {} z::lightweight_system<z::laser, 40>::__vtable; // size: 0x24, address: 0x5FD7A0
class xGrid npcs_grid; // size: 0x38, address: 0x66BC60
signed int _rpPTankAtomicDataOffset; // size: 0x4, address: 0x608208
unsigned int anlanded(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x242760
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x66B400
signed int update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x244380
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x1D0B50
void EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x246AB0
// total size: 0x7C
struct /* @anon22 */ {} zDash::proximity::__vtable; // size: 0x7C, address: 0x0
// total size: 0x8C0
class player : public zPlayer {
    // Members
public:
    unsigned char dead; // offset 0x4E0, size 0x1
    unsigned char cheating; // offset 0x4E1, size 0x1
    float DASH_SETTLE_RATE; // offset 0x4E4, size 0x4
    float speed; // offset 0x4E8, size 0x4
    float friction; // offset 0x4EC, size 0x4
    float dpos_diff; // offset 0x4F0, size 0x4
    float last_floor_height; // offset 0x4F4, size 0x4
    float floor_height_v; // offset 0x4F8, size 0x4
    float scale; // offset 0x4FC, size 0x4
    class xVec3 velocity; // offset 0x500, size 0xC
    class xVec3 impulse; // offset 0x50C, size 0xC
    class xVec3 floor_position; // offset 0x518, size 0xC
    class camera cam; // offset 0x530, size 0x370
    class behavior_manager manager; // offset 0x8A0, size 0x14
    enum iSndGroupHandle dash_dead_soundgroup; // offset 0x8B4, size 0x4
    class blur_data * blur; // offset 0x8B8, size 0x4
    enum track_cast track_cast_clamp; // offset 0x8BC, size 0x4
};
// total size: 0x0
class xMovePoint {};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x14
class group_asset : public xDynAsset {
    // Members
public:
    signed int max_attackers; // offset 0x10, size 0x4
};
// total size: 0x14
class sink : public behavior_implementation {
    // Members
public:
    unsigned char sinking; // offset 0x10, size 0x1
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
// total size: 0x80
struct /* @anon0 */ {};
// total size: 0x30
class dust_particle {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    class xVec3 vel; // offset 0x10, size 0xC
    float rot; // offset 0x1C, size 0x4
    float a; // offset 0x20, size 0x4
    float c; // offset 0x24, size 0x4
    float rot_change; // offset 0x28, size 0x4
    float vel_change; // offset 0x2C, size 0x4
};
// total size: 0x10
class behavior_implementation : public behavior {
    // Members
public:
    class player * owner; // offset 0xC, size 0x4
};
// total size: 0x6C
class wall_hit : public dash_move {
    // Members
public:
    unsigned char hit; // offset 0x14, size 0x1
    unsigned char last_collision_trip; // offset 0x15, size 0x1
    float splash_time; // offset 0x18, size 0x4
    signed int dash_splash; // offset 0x1C, size 0x4
    enum iSndGroupHandle splash_soundgroup; // offset 0x20, size 0x4
    enum iSndGroupHandle dash_impact_soundgroup; // offset 0x24, size 0x4
    float speed; // offset 0x28, size 0x4
    float slow; // offset 0x2C, size 0x4
    class xVec3 impact_point; // offset 0x30, size 0xC
    class xVec3 impact_normal; // offset 0x3C, size 0xC
    float dust_emit_time; // offset 0x48, size 0x4
    float time; // offset 0x4C, size 0x4
    float dust_emit_remaining; // offset 0x50, size 0x4
    float damage_wait_time; // offset 0x54, size 0x4
    class xVec3 last_position; // offset 0x58, size 0xC
    class effect * rumble_effect; // offset 0x64, size 0x4
    class water & water_state; // offset 0x68, size 0x4
};
// total size: 0x118
class zSurfaceProps {
    // Members
public:
    class zSurfAssetIN * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    class zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x38
    unsigned int uvfx_flags; // offset 0x40, size 0x4
    class zSurfacePropUVFX uvfx[2]; // offset 0x44, size 0xD0
    class RwTexture * txtr_matFXDualMap; // offset 0x114, size 0x4
};
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
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
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
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
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
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
// total size: 0xC
class behavior {
    // Members
public:
    class xEnt * owner; // offset 0x0, size 0x4
    unsigned int type; // offset 0x8, size 0x4
};
// total size: 0x20
class triangle {
    // Members
public:
    unsigned short a; // offset 0x0, size 0x2
    unsigned short b; // offset 0x2, size 0x2
    unsigned short c; // offset 0x4, size 0x2
    unsigned short flags; // offset 0x6, size 0x2
    float u[3]; // offset 0x8, size 0xC
    float v[3]; // offset 0x14, size 0xC
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
// total size: 0x28
class friction_effects : public behavior_implementation {
    // Members
public:
    unsigned char flash_alpha; // offset 0x10, size 0x1
    float near_death_threshold; // offset 0x14, size 0x4
    float smoke_emit_remaining; // offset 0x18, size 0x4
    float ahead_smoke_emit; // offset 0x1C, size 0x4
    enum iSndGroupHandle dash_too_hot_soundgroup; // offset 0x20, size 0x4
    enum iSndGroupHandle dash_cool_down_soundgroup; // offset 0x24, size 0x4
};
// total size: 0x7C
class dash_jump : public jump {
    // Members
public:
    float old_fall_gravity; // offset 0x70, size 0x4
    float old_fall_gravity_blend_time; // offset 0x74, size 0x4
    float old_height; // offset 0x78, size 0x4
};
// total size: 0xC
class navigation_mesh {
    // Members
public:
    class navigation_mesh * asset; // offset 0x0, size 0x4
    unsigned char registered_objects; // offset 0x4, size 0x1
    class circle * circle_list; // offset 0x8, size 0x4
};
// total size: 0x14
class airborne : public dash_move {};
// total size: 0x5AC
class lightweight_system : public lightweight_system_base {
    // Members
public:
    class rocket object[20]; // offset 0x4, size 0x5A0
    class lightweight_system * * system; // offset 0x5A4, size 0x4
    unsigned int current_id; // offset 0x5A8, size 0x4
};
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x4
class triangle {
    // Members
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
};
// total size: 0x7C
class water : public dash_move {
    // Members
public:
    unsigned char in_water; // offset 0x14, size 0x1
    class xBound bound; // offset 0x18, size 0x4C
    class sink & sink_behavior; // offset 0x64, size 0x4
    float distance; // offset 0x68, size 0x4
    float residual_cool_time; // offset 0x6C, size 0x4
    class xEnt * last_entity; // offset 0x70, size 0x4
    enum iSndGroupHandle water_run_soundgroup; // offset 0x74, size 0x4
    enum iSndHandle water_run_sound; // offset 0x78, size 0x4
};
// total size: 0x28
class mblur_data {
    // Members
public:
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x1B8
class zSurfAssetIN : public zSurfAssetBase {
    // Members
public:
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
    signed int damage_amount; // offset 0x15C, size 0x4
    enum zHitSource damage_type; // offset 0x160, size 0x4
    class zFootstepsData off_surface; // offset 0x164, size 0x10
    class zFootstepsData on_surface; // offset 0x174, size 0x10
    class zHitDecalData hit_decal_data[3]; // offset 0x184, size 0x24
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xD10
class dash : public player {
    // Members
public:
    class boost boost_state; // offset 0x8C0, size 0x68
    float emit_remaining; // offset 0x928, size 0x4
    float rings_emit_remaining; // offset 0x92C, size 0x4
    float lean_water_emit_offset; // offset 0x930, size 0x4
    float footstep_time; // offset 0x934, size 0x4
    float footstep_delay[4]; // offset 0x938, size 0x10
    enum iSndGroupHandle footstep_soundgroup; // offset 0x948, size 0x4
    class friction_effects friction_effects_state; // offset 0x94C, size 0x28
    class run run_state; // offset 0x974, size 0x34
    class jump jump_state; // offset 0x9A8, size 0x90
    class trip trip_state; // offset 0xA38, size 0x2C
    class water water_state; // offset 0xA64, size 0x7C
    class fall fall_state; // offset 0xAE0, size 0x10
    class wall_hit wall_hit_state; // offset 0xAF0, size 0x6C
    class sink sink_state; // offset 0xB5C, size 0x14
    class loop loop_state; // offset 0xB70, size 0x38
    class timer timer_state; // offset 0xBA8, size 0x5C
    class car_check car_check_state; // offset 0xC04, size 0x5C
    class incredimeter_hud incredimeter_state; // offset 0xC60, size 0x10
    class friction_death friction_death_state; // offset 0xC70, size 0x1C
    class airborne airborne_state; // offset 0xC8C, size 0x14
    class dust dust_state; // offset 0xCA0, size 0x2C
    class chase_lasers chase_lasers_state; // offset 0xCCC, size 0x38
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
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x0
class zSlideCam {};
// total size: 0x0
class xFFX {};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x38
class circle {
    // Members
public:
    class circle * base_next; // offset 0x0, size 0x4
    float base_radius; // offset 0x4, size 0x4
    class xVec3 center; // offset 0x8, size 0xC
    class xVec3 velocity; // offset 0x14, size 0xC
    class circle * next; // offset 0x20, size 0x4
    class xEnt * entity; // offset 0x24, size 0x4
    float radius; // offset 0x28, size 0x4
    float radius_2; // offset 0x2C, size 0x4
    signed int sub_mesh_index; // offset 0x30, size 0x4
    unsigned char tri_index; // offset 0x34, size 0x1
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
// total size: 0x7C
struct /* @anon1 */ {};
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
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
// total size: 0x1C
class friction_death : public dash_move {
    // Members
public:
    float speed; // offset 0x14, size 0x4
    float slow; // offset 0x18, size 0x4
};
// total size: 0x80
struct /* @anon2 */ {};
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
// total size: 0xA8
class xCamSupportPath {
    // Members
public:
    class config cfg; // offset 0x0, size 0x10
    class path_node * path; // offset 0x10, size 0x4
    signed int power; // offset 0x14, size 0x4
    signed int max_size; // offset 0x18, size 0x4
    signed int front; // offset 0x1C, size 0x4
    signed int used; // offset 0x20, size 0x4
    float dist; // offset 0x24, size 0x4
    float subdist; // offset 0x28, size 0x4
    float weights[31]; // offset 0x2C, size 0x7C
};
// total size: 0x18
struct /* @anon3 */ {};
// total size: 0x0
class zAssetPickupTable {};
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
// total size: 0x1C
class NURBS : public xBaseAsset {
    // Members
public:
    signed int p; // offset 0x8, size 0x4
    signed int m; // offset 0xC, size 0x4
    signed int n; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    class xVec3 * control; // offset 0x18, size 0x4
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
// total size: 0x34
class run : public dash_move {
    // Members
public:
    unsigned char in_ft01; // offset 0x14, size 0x1
    float animation_very_slow_speed; // offset 0x18, size 0x4
    float animation_boost_speed; // offset 0x1C, size 0x4
    float turn_lean_k; // offset 0x20, size 0x4
    float turn_lean_v; // offset 0x24, size 0x4
    float speed_lean_k; // offset 0x28, size 0x4
    float speed_lean_v; // offset 0x2C, size 0x4
    float slow_adjust_multiplier; // offset 0x30, size 0x4
};
// total size: 0x2C0
class common : public base {
    // Members
public:
    float move_speed_multiply; // offset 0x11C, size 0x4
    unsigned char invincible; // offset 0x120, size 0x1
    float near_target_radius; // offset 0x124, size 0x4
    float mass; // offset 0x128, size 0x4
    float cull_distance; // offset 0x12C, size 0x4
    class group * group_data; // offset 0x130, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned char human : 1; // offset 0x0, size 0x1
        unsigned char cast_shadow : 1; // offset 0x0, size 0x1
        unsigned char complex_shadow : 1; // offset 0x0, size 0x1
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dying : 1; // offset 0x0, size 0x1
        unsigned char not_throw_target : 1; // offset 0x0, size 0x1
        unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
        unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
        unsigned char carried : 1; // offset 0x1, size 0x1
        unsigned char pad2 : 7; // offset 0x1, size 0x1
        unsigned char pad3 : 8; // offset 0x2, size 0x1
        unsigned char old_chkby : 8; // offset 0x3, size 0x1
    } commonFlags; // offset 0x134, size 0x4
    class zDuplicator * duplicator; // offset 0x138, size 0x4
    class navigate * navigation_behavior; // offset 0x13C, size 0x4
    class behavior_manager manager; // offset 0x140, size 0x14
    class Senses senses; // offset 0x154, size 0x84
    class xShadowSimpleCache simpShadow_embedded; // offset 0x1D8, size 0xA4
    float shadow_radius; // offset 0x27C, size 0x4
    class xEntShadow entShadow_embedded; // offset 0x280, size 0x2C
    signed short incredi_power_points; // offset 0x2AC, size 0x2
    signed int grab_bone; // offset 0x2B0, size 0x4
    class xVec3 grab_offset; // offset 0x2B4, size 0xC
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0xE0
struct /* @anon4 */ {};
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
// total size: 0x24
class track : public xBase {
    // Members
public:
    class track * next; // offset 0x10, size 0x4
    class track_asset * asset; // offset 0x14, size 0x4
    signed int last_triangle; // offset 0x18, size 0x4
    class xVec2 last_position; // offset 0x1C, size 0x8
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
// total size: 0x90
class jump : public dash_move {
    // Members
public:
    class dash_jump normal_jump; // offset 0x14, size 0x7C
};
// total size: 0x5C
class SphereCollisionResults {
    // Members
public:
    class xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    signed int collisionFlags; // offset 0x10, size 0x4
    class xVec3 contact; // offset 0x14, size 0xC
    class xVec3 normal; // offset 0x20, size 0xC
    float colliding_sphere_raidus; // offset 0x2C, size 0x4
    unsigned int oid; // offset 0x30, size 0x4
    void * optr; // offset 0x34, size 0x4
    class xModelInstance * mptr; // offset 0x38, size 0x4
    class xJSPHeader * jsp; // offset 0x3C, size 0x4
    class xClumpCollBSPTriangle * bspTriangle; // offset 0x40, size 0x4
    enum xCollideSphereHitType hit_triangle_type; // offset 0x44, size 0x4
    class xPlane tri_plane; // offset 0x48, size 0x10
    signed int sphere_index; // offset 0x58, size 0x4
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
// total size: 0x0
class zCutsceneMgr {};
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x18
class effect : public emitterBase {};
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
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
// total size: 0x14
class dash_move : public behavior_implementation {
    // Members
public:
    float direction_v; // offset 0x10, size 0x4
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
// total size: 0x2C
class trip : public dash_move {
    // Members
public:
    unsigned char tripping; // offset 0x14, size 0x1
    signed int button_count; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    float speed; // offset 0x20, size 0x4
    float slow; // offset 0x24, size 0x4
    float time_ignore_button; // offset 0x28, size 0x4
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
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0xAC
class navigate {
    // Members
public:
    float stuck_timer; // offset 0x0, size 0x4
    unsigned char dpos_apply; // offset 0x4, size 0x1
    unsigned char reported_stuck; // offset 0x5, size 0x1
    unsigned char last_stuck; // offset 0x6, size 0x1
    unsigned char stuck; // offset 0x7, size 0x1
    unsigned char arrived; // offset 0x8, size 0x1
    unsigned char destination_off_mesh; // offset 0x9, size 0x1
    class navigation_mesh * full_mesh; // offset 0xC, size 0x4
    signed int sub_mesh_index; // offset 0x10, size 0x4
    signed int current_triangle; // offset 0x14, size 0x4
    class circle * circle_root; // offset 0x18, size 0x4
    class common * npc; // offset 0x1C, size 0x4
    class circle my_circle; // offset 0x20, size 0x38
    class jump current_jump; // offset 0x58, size 0x44
    float jump_gravity; // offset 0x9C, size 0x4
    float jump_height; // offset 0xA0, size 0x4
    class xVec3 * last_destination; // offset 0xA4, size 0x4
    unsigned char move_away; // offset 0xA8, size 0x1
};
// total size: 0x120
class xCamGroup {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xVec3 vel; // offset 0x40, size 0xC
    float fov; // offset 0x4C, size 0x4
    float fov_default; // offset 0x50, size 0x4
    signed int flags; // offset 0x54, size 0x4
    class xCam * primary; // offset 0x58, size 0x4
    class analog_data analog; // offset 0x5C, size 0x18
    class xCam * owned[32]; // offset 0x74, size 0x80
    signed int size; // offset 0xF4, size 0x4
    signed int primary_index; // offset 0xF8, size 0x4
    signed int child_flags; // offset 0xFC, size 0x4
    signed int child_flags_mask; // offset 0x100, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x104, size 0x10
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float fMin; // offset 0x0, size 0x4
    float fCur; // offset 0x4, size 0x4
    float fMax; // offset 0x8, size 0x4
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
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
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
// total size: 0x68
class boost : public behavior_implementation {
    // Members
public:
    float WARP_INTENSITY; // offset 0x10, size 0x4
    float WARP_DURATION; // offset 0x14, size 0x4
    float WARP_RADIUS; // offset 0x18, size 0x4
    float BOOST_SPEED; // offset 0x1C, size 0x4
    float BOOST_FRICTION_RATE; // offset 0x20, size 0x4
    float BOOST_FRICTION_CONSTANT; // offset 0x24, size 0x4
    float BOOST_LEVEL_TIME; // offset 0x28, size 0x4
    float BOOST_START_SPEED; // offset 0x2C, size 0x4
    float BOOST_WAIT_TIME; // offset 0x30, size 0x4
    float boost_blur; // offset 0x34, size 0x4
    float fire_emit_remaining; // offset 0x38, size 0x4
    unsigned char playing_loop_sound; // offset 0x3C, size 0x1
    enum iSndHandle start_sound; // offset 0x40, size 0x4
    enum iSndHandle loop_sound; // offset 0x44, size 0x4
    enum iSndHandle end_sound; // offset 0x48, size 0x4
    enum iSndGroupHandle boost_start_soundgroup; // offset 0x4C, size 0x4
    enum iSndGroupHandle boost_loop_soundgroup; // offset 0x50, size 0x4
    enum iSndGroupHandle boost_end_soundgroup; // offset 0x54, size 0x4
    class water & water_state; // offset 0x58, size 0x4
    class run & run_state; // offset 0x5C, size 0x4
    float time; // offset 0x60, size 0x4
    float wait_time; // offset 0x64, size 0x4
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
// total size: 0x80
struct /* @anon5 */ {};
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
// total size: 0x20
class TextureFlasher {
    // Members
public:
    class image_widget * m_pImageWidget; // offset 0x0, size 0x4
    unsigned int m_uFlashLayer; // offset 0x4, size 0x4
    float m_timer; // offset 0x8, size 0x4
    float m_onTime; // offset 0xC, size 0x4
    float m_offTime; // offset 0x10, size 0x4
    float m_offDecayTime; // offset 0x14, size 0x4
    void * m_context; // offset 0x18, size 0x4
    unsigned char (* m_callback)(void *, class TextureFlasher *); // offset 0x1C, size 0x4
};
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x80
struct /* @anon6 */ {};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x2C
class dust : public behavior_implementation {
    // Members
public:
    class dust_particle * particle; // offset 0x10, size 0x4
    class water & water_behavior; // offset 0x14, size 0x4
    class RwTexture * texture; // offset 0x18, size 0x4
    class xVec3 last_position; // offset 0x1C, size 0xC
    float emit_remaining; // offset 0x28, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0x24
class zTimedSplashAsset : public xDynAsset {
    // Members
public:
    class xVec3 position; // offset 0x10, size 0xC
    unsigned int motion_type; // offset 0x1C, size 0x4
    unsigned int soundgroup; // offset 0x20, size 0x4
};
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
// total size: 0x30
class spline_path : public xBaseAsset {
    // Members
public:
    unsigned char exclusive; // offset 0x8, size 0x1
    unsigned char used; // offset 0x9, size 0x1
    unsigned char has_hover; // offset 0xA, size 0x1
    unsigned short forwards_count; // offset 0xC, size 0x2
    unsigned short backwards_count; // offset 0xE, size 0x2
    float speed; // offset 0x10, size 0x4
    float hover_time; // offset 0x14, size 0x4
    class xVec3 hover_point; // offset 0x18, size 0xC
    union { // inferred
        struct { // inferred
            unsigned int spline_id; // offset 0x24, size 0x4
            unsigned int * forward_ids; // offset 0x28, size 0x4
            unsigned int * backward_ids; // offset 0x2C, size 0x4
        };
        struct { // inferred
            class NURBS * spline; // offset 0x24, size 0x4
            class spline_path * * forward_paths; // offset 0x28, size 0x4
            class spline_path * * backward_paths; // offset 0x2C, size 0x4
        };
    };
};
// total size: 0xB0
class image_widget : public widget {
    // Members
public:
    class RwRaster * m_pRaster; // offset 0x88, size 0x4
    class LayerInfo * m_pLayers; // offset 0x8C, size 0x4
    unsigned int m_uLayerCount; // offset 0x90, size 0x4
    unsigned int m_uRenderLayerCount; // offset 0x94, size 0x4
    class RwSky2DVertex * m_pVertices; // offset 0x98, size 0x4
    class RwSky2DVertex * m_paVertices; // offset 0x9C, size 0x4
    unsigned short * m_paIndices; // offset 0xA0, size 0x4
    unsigned short m_uVertexCount; // offset 0xA4, size 0x2
    unsigned short m_uIndexCount; // offset 0xA6, size 0x2
    float m_fRecipZ; // offset 0xA8, size 0x4
    unsigned short m_VertexMax; // offset 0xAC, size 0x2
    unsigned short m_IndexMax; // offset 0xAE, size 0x2
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x10
class incredimeter_hud : public behavior_implementation {};
// total size: 0x48
class rocket : public lightweight {
    // Members
public:
    float turn_speed; // offset 0xC, size 0x4
    float time; // offset 0x10, size 0x4
    class xVec3 position; // offset 0x14, size 0xC
    class xVec3 velocity; // offset 0x20, size 0xC
    class xEnt * source; // offset 0x2C, size 0x4
    class xModelInstance * model; // offset 0x30, size 0x4
    class xVec3 * target_pos; // offset 0x34, size 0x4
    float above_target_pos; // offset 0x38, size 0x4
    enum iSndHandle flying_noise; // offset 0x3C, size 0x4
    float emit_remaining; // offset 0x40, size 0x4
    float jet_emit_remaining; // offset 0x44, size 0x4
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
// total size: 0x24
class xOneLinerManager {
    // Members
public:
    class xOneLiner * m_aOneLinerPlayers; // offset 0x0, size 0x4
    signed int m_iNextSound; // offset 0x4, size 0x4
    enum iSndGroupHandle m_currentSoundID; // offset 0x8, size 0x4
    float m_pauseBetweenSounds; // offset 0xC, size 0x4
    float m_lastUpdateTime; // offset 0x10, size 0x4
    float m_lastPlayedTime; // offset 0x14, size 0x4
    float m_queuedSoundTimer; // offset 0x18, size 0x4
    unsigned short m_NumEventTypes; // offset 0x1C, size 0x2
    unsigned short m_NumOLPlayers; // offset 0x1E, size 0x2
    unsigned short m_nextSoundPriority; // offset 0x20, size 0x2
    unsigned short m_priorityFilter; // offset 0x22, size 0x2
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
// total size: 0x510
class car : public common {
    // Members
public:
    float initialSpeed; // offset 0x2C0, size 0x4
    float emit_remaining; // offset 0x2C4, size 0x4
    class CarStop carStopState; // offset 0x2C8, size 0x34
    class BrakeLights carBrakeLightsState; // offset 0x2FC, size 0x38
    class exclusive_spline_path carFollowSplinePathState; // offset 0x340, size 0xB0
    class CarDrive carDriveState; // offset 0x3F0, size 0xC0
    unsigned char prevDriving; // offset 0x4B0, size 0x1
    class xVec3 exhaustPos; // offset 0x4B4, size 0xC
    class xVec3 lastPositionSmoke; // offset 0x4C0, size 0xC
    float intensityFactor; // offset 0x4CC, size 0x4
    float active_radius; // offset 0x4D0, size 0x4
    float pitchModifier; // offset 0x4D4, size 0x4
    float prevSpeed; // offset 0x4D8, size 0x4
    float inner_slow_radius; // offset 0x4DC, size 0x4
    float outer_slow_radius; // offset 0x4E0, size 0x4
    float move_speed; // offset 0x4E4, size 0x4
    enum iSndGroupHandle engineNoiseGroup; // offset 0x4E8, size 0x4
    enum iSndHandle engineNoise; // offset 0x4EC, size 0x4
    enum iSndGroupHandle gearShiftNoiseGroup; // offset 0x4F0, size 0x4
    class xSphere collisionSphere; // offset 0x4F4, size 0x10
    unsigned char has_started; // offset 0x504, size 0x1
};
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x30
class particle {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float size; // offset 0xC, size 0x4
    class xVec3 vel; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    float rot; // offset 0x20, size 0x4
    float rot_delta; // offset 0x24, size 0x4
    class xMat4x3 * mat; // offset 0x28, size 0x4
    class config * cfg; // offset 0x2C, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0xC
class path_node {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
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
// total size: 0x38
class loop : public run {
    // Members
public:
    unsigned char right_loop; // offset 0x34, size 0x1
};
// total size: 0x1C
class zTimedSplash : private xBase {
    // Members
public:
    signed int splash; // offset 0x10, size 0x4
    enum iSndGroupHandle soundgroup; // offset 0x14, size 0x4
    class zTimedSplashAsset * asset; // offset 0x18, size 0x4
};
// total size: 0x18
class group : public xBase {
    // Members
public:
    class group_asset * asset; // offset 0x10, size 0x4
    signed int attacking_count; // offset 0x14, size 0x4
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
// total size: 0x30
class ptank_pool__pos_color_size_rot : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
    float * rot; // offset 0x2C, size 0x4
};
// total size: 0xC
class lightweight {
    // Members
public:
    unsigned char used; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
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
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
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
// total size: 0x18
struct /* @anon7 */ {};
// total size: 0x80
struct /* @anon8 */ {};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
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
// total size: 0x370
class camera : public xCam {
    // Members
public:
    float SPLINE_LOOK_AHEAD; // offset 0xD0, size 0x4
    float TARGET_OFFSET; // offset 0xD4, size 0x4
    float REST_HEIGHT; // offset 0xD8, size 0x4
    float DOWN_HEIGHT; // offset 0xDC, size 0x4
    float UP_HEIGHT; // offset 0xE0, size 0x4
    float REST_DISTANCE; // offset 0xE4, size 0x4
    float DOWN_DISTANCE; // offset 0xE8, size 0x4
    float UP_DISTANCE; // offset 0xEC, size 0x4
    float POSITION_BLEND_K; // offset 0xF0, size 0x4
    float VELOCITY_BLEND_K; // offset 0xF4, size 0x4
    float ORIENTATION_BLEND_K; // offset 0xF8, size 0x4
    float CHEAT_ORIENTATION_BLEND_K; // offset 0xFC, size 0x4
    float FLOOR_HEIGHT; // offset 0x100, size 0x4
    float MOUNT_HEIGHT_BLEND_K; // offset 0x104, size 0x4
    float OFFSET_MULTIPLIER; // offset 0x108, size 0x4
    float OFFSET_BLEND_K; // offset 0x10C, size 0x4
    float PLAYER_POSITION_BLEND_K; // offset 0x110, size 0x4
    float PLAYER_VELOCITY_BLEND_K; // offset 0x114, size 0x4
    float BOOST_BLEND_CATCHUP_BEGIN_TIME; // offset 0x118, size 0x4
    float BOOST_BLEND_CATCHUP_RATE; // offset 0x11C, size 0x4
    float FOV; // offset 0x120, size 0x4
    float MOUNT_ANGLE_ADJUST; // offset 0x124, size 0x4
    float TUNNEL_CAMERA_OFFSET; // offset 0x128, size 0x4
    float TUNNEL_TARGET_OFFSET; // offset 0x12C, size 0x4
    float MAX_TUNNEL_BLEND_DIFF; // offset 0x130, size 0x4
    float TUNNEL_BLEND_SPEED; // offset 0x134, size 0x4
    float INPUT_X_BLEND_K; // offset 0x138, size 0x4
    float INPUT_Y_BLEND_K; // offset 0x13C, size 0x4
    float MIN_INPUT_AFFECT; // offset 0x140, size 0x4
    float MAX_INPUT_ANGLE; // offset 0x144, size 0x4
    float TARGET_TO_CAMERA_BLEND_K; // offset 0x148, size 0x4
    float PATH_COLLIDE_BLEND_K; // offset 0x14C, size 0x4
    unsigned char frozen; // offset 0x150, size 0x1
    unsigned char spline_enable; // offset 0x151, size 0x1
    unsigned char boosting; // offset 0x152, size 0x1
    unsigned char cheating; // offset 0x153, size 0x1
    unsigned char in_tunnel; // offset 0x154, size 0x1
    float boost_time; // offset 0x158, size 0x4
    class player * owner; // offset 0x15C, size 0x4
    float fov_degrees; // offset 0x160, size 0x4
    float tunnel_time; // offset 0x164, size 0x4
    float theta; // offset 0x168, size 0x4
    float theta_v; // offset 0x16C, size 0x4
    class xVec3 spline_direction; // offset 0x170, size 0xC
    class xVec3 target_position; // offset 0x17C, size 0xC
    float target_to_camera_v; // offset 0x188, size 0x4
    class xVec3 target_to_camera; // offset 0x18C, size 0xC
    class xVec3 camera_position; // offset 0x198, size 0xC
    class xVec3 last_camera_position; // offset 0x1A4, size 0xC
    class NURBS * last_spline; // offset 0x1B0, size 0x4
    float last_u; // offset 0x1B4, size 0x4
    class xVec3 position; // offset 0x1B8, size 0xC
    float position_blend_v; // offset 0x1C4, size 0x4
    float mount_height_v; // offset 0x1C8, size 0x4
    float input_x; // offset 0x1CC, size 0x4
    float input_y; // offset 0x1D0, size 0x4
    float input_x_v; // offset 0x1D4, size 0x4
    float input_y_v; // offset 0x1D8, size 0x4
    class xQuat orientation; // offset 0x1E0, size 0x10
    float orientation_blend_v; // offset 0x1F0, size 0x4
    class xVec3 velocity; // offset 0x1F4, size 0xC
    float velocity_blend_v; // offset 0x200, size 0x4
    float distance; // offset 0x204, size 0x4
    float distance_blend_v; // offset 0x208, size 0x4
    float height; // offset 0x20C, size 0x4
    float height_blend_v; // offset 0x210, size 0x4
    float target_height; // offset 0x214, size 0x4
    float target_distance; // offset 0x218, size 0x4
    class xVec3 direction; // offset 0x21C, size 0xC
    class xVec3 last_owner_position; // offset 0x228, size 0xC
    class xVec3 player_position; // offset 0x234, size 0xC
    float player_position_v; // offset 0x240, size 0x4
    class xVec3 player_velocity; // offset 0x244, size 0xC
    float player_velocity_v; // offset 0x250, size 0x4
    float offset; // offset 0x254, size 0x4
    float offset_blend_v; // offset 0x258, size 0x4
    class xVec3 mount_plane_normal; // offset 0x25C, size 0xC
    float mount_height; // offset 0x268, size 0x4
    float path_v; // offset 0x26C, size 0x4
    class xCamSupportLOSBar losbar; // offset 0x270, size 0x50
    class xCamSupportPath path; // offset 0x2C0, size 0xA8
};
// total size: 0x4
class lightweight_system_base {};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x4C
class config {
    // Members
public:
    float min_life; // offset 0x0, size 0x4
    float max_life; // offset 0x4, size 0x4
    float min_size; // offset 0x8, size 0x4
    float max_size; // offset 0xC, size 0x4
    float velocity_min; // offset 0x10, size 0x4
    float velocity_max; // offset 0x14, size 0x4
    float emit_rate; // offset 0x18, size 0x4
    float slow; // offset 0x1C, size 0x4
    float fade_start; // offset 0x20, size 0x4
    float gravity; // offset 0x24, size 0x4
    unsigned char r; // offset 0x28, size 0x1
    unsigned char g; // offset 0x29, size 0x1
    unsigned char b; // offset 0x2A, size 0x1
    float system_emit_time; // offset 0x2C, size 0x4
    float glow; // offset 0x30, size 0x4
    float min_rot; // offset 0x34, size 0x4
    float max_rot; // offset 0x38, size 0x4
    float size_delta; // offset 0x3C, size 0x4
    class xVec3 start_velocity; // offset 0x40, size 0xC
};
// total size: 0x38
class xGrid {
    // Members
public:
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
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
    signed int iter_active; // offset 0x34, size 0x4
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x0
class xOneLiner {};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x7C
struct /* @anon9 */ {};
// total size: 0x0
class anim_coll_data {};
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
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x0
class activity_data {};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x5C
class proximity : public behavior_implementation {
    // Members
public:
    class xBound bound; // offset 0x10, size 0x4C
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x44
class config {
    // Members
public:
    float min_life; // offset 0x0, size 0x4
    float max_life; // offset 0x4, size 0x4
    float min_size; // offset 0x8, size 0x4
    float radius; // offset 0xC, size 0x4
    float max_size; // offset 0x10, size 0x4
    float velocity; // offset 0x14, size 0x4
    float emit_rate; // offset 0x18, size 0x4
    float fade_start; // offset 0x1C, size 0x4
    float gravity; // offset 0x20, size 0x4
    unsigned char r; // offset 0x24, size 0x1
    unsigned char g; // offset 0x25, size 0x1
    unsigned char b; // offset 0x26, size 0x1
    float glow; // offset 0x28, size 0x4
    float min_rot; // offset 0x2C, size 0x4
    float max_rot; // offset 0x30, size 0x4
    float size_delta; // offset 0x34, size 0x4
    class xVec3 start_velocity; // offset 0x38, size 0xC
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x38
class smoke_config {
    // Members
public:
    float floor; // offset 0x0, size 0x4
    float SMOKE_ALPHA_DELTA; // offset 0x4, size 0x4
    float SMOKE_SIZE_DELTA; // offset 0x8, size 0x4
    float SMOKE_START_SIZE; // offset 0xC, size 0x4
    class xVec3 SMOKE_VELOCITY; // offset 0x10, size 0xC
    float SMOKE_EMIT_RATE; // offset 0x1C, size 0x4
    float SMOKE_ROTATION_DELTA_MIN; // offset 0x20, size 0x4
    float SMOKE_ROTATION_DELTA_MAX; // offset 0x24, size 0x4
    float SMOKE_COLOR; // offset 0x28, size 0x4
    float VELOCITY_RANDOM; // offset 0x2C, size 0x4
    float START_ALPHA; // offset 0x30, size 0x4
    unsigned char distance_emit; // offset 0x34, size 0x1
};
// total size: 0x0
class motive_node {};
// total size: 0x24
struct /* @anon10 */ {};
// total size: 0x10
class config {
    // Members
public:
    float min_segment_dist; // offset 0x0, size 0x4
    float smooth_factor; // offset 0x4, size 0x4
    signed int smooth_passes; // offset 0x8, size 0x4
    float subdiv_thresh; // offset 0xC, size 0x4
};
// total size: 0x21CC
class lightweight_system : public lightweight_system_base {
    // Members
public:
    class laser object[40]; // offset 0x4, size 0x21C0
    class lightweight_system * * system; // offset 0x21C4, size 0x4
    unsigned int current_id; // offset 0x21C8, size 0x4
};
// total size: 0x38
class zCombatDamageInfo {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    signed int damage; // offset 0x8, size 0x4
    enum zHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    class xVec3 knockback; // offset 0x14, size 0xC
    class xVec3 hitLocation; // offset 0x20, size 0xC
    class xVec3 direction; // offset 0x2C, size 0xC
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x0
class xModelAssetParam {};
// total size: 0x80
struct /* @anon11 */ {};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x7C
struct /* @anon12 */ {};
// total size: 0x38
class chase_lasers : public behavior_implementation {
    // Members
public:
    unsigned char shots_on; // offset 0x10, size 0x1
    float next_burst_time; // offset 0x14, size 0x4
    float next_shot_time; // offset 0x18, size 0x4
    signed int shots_left; // offset 0x1C, size 0x4
    class xVec3 random_start_offset; // offset 0x20, size 0xC
    class xVec3 random_end_offset; // offset 0x2C, size 0xC
};
// total size: 0xD0
class xCam {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    float fov; // offset 0x40, size 0x4
    signed int flags; // offset 0x44, size 0x4
    unsigned int owner; // offset 0x48, size 0x4
    class xCamGroup * group; // offset 0x4C, size 0x4
    class analog_data analog; // offset 0x50, size 0x18
    float motion_factor; // offset 0x68, size 0x4
    enum xCamCoordType coord_type; // offset 0x6C, size 0x4
    enum xCamOrientType orient_type; // offset 0x70, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xVec3 cart; // offset 0x0, size 0xC
            class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
            class xCamCoordSphere sphere; // offset 0x0, size 0x20
        };
    } coord; // offset 0x80, size 0x20
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xQuat quat; // offset 0x0, size 0x10
            class xCamOrientEuler euler; // offset 0x0, size 0xC
        };
    } orient; // offset 0xA0, size 0x10
    class xCamConfigCommon cfg_common; // offset 0xB0, size 0x8
    signed int group_index; // offset 0xBC, size 0x4
    signed int group_flags; // offset 0xC0, size 0x4
    class xCamBlend * blender; // offset 0xC4, size 0x4
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
// total size: 0x60
class zSurfUVFX {
    // Members
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    class xVec3 trans; // offset 0xC, size 0xC
    class xVec3 trans_spd; // offset 0x18, size 0xC
    class xVec3 scale; // offset 0x24, size 0xC
    class xVec3 scale_spd; // offset 0x30, size 0xC
    class xVec3 min; // offset 0x3C, size 0xC
    class xVec3 max; // offset 0x48, size 0xC
    class xVec3 minmax_spd; // offset 0x54, size 0xC
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
// total size: 0x10
class fall : public behavior_implementation {};
// total size: 0x2
class zCheats {
    // Members
public:
    unsigned char halfDamage : 1; // offset 0x0, size 0x1
    unsigned char incredipower : 1; // offset 0x0, size 0x1
    unsigned char chronos : 1; // offset 0x0, size 0x1
    unsigned char noDashDamage : 1; // offset 0x0, size 0x1
    unsigned char noFriction : 1; // offset 0x0, size 0x1
    unsigned char gazerbeam : 1; // offset 0x0, size 0x1
    unsigned char scaleHead : 1; // offset 0x0, size 0x1
    unsigned char firePlants : 1; // offset 0x0, size 0x1
    unsigned char discoMode : 1; // offset 0x1, size 0x1
    unsigned char flamingFeet : 1; // offset 0x1, size 0x1
    unsigned char blurry : 1; // offset 0x1, size 0x1
    unsigned char ethereal : 1; // offset 0x1, size 0x1
    unsigned char glowingSwimmer : 1; // offset 0x1, size 0x1
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x3C
class xQCControl {
    // Members
public:
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x24
struct /* @anon13 */ {};
// total size: 0x80
struct /* @anon14 */ {};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x4C
struct /* @anon15 */ {};
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
// total size: 0x17C
class text_widget : public widget {
    // Members
public:
    char text[128]; // offset 0x88, size 0x80
    class xtextbox tb; // offset 0x108, size 0x74
};
// total size: 0x10
class navigation_mesh : public xBaseAsset {
    // Members
public:
    signed int num_sub_meshes; // offset 0x8, size 0x4
    class sub_mesh * sub_meshes; // offset 0xC, size 0x4
};
// total size: 0x38
class BrakeLights : public behavior_implementation {
    // Members
public:
    class xVec3 lightOffset[2]; // offset 0x10, size 0x18
    signed int lightCount; // offset 0x28, size 0x4
    float halfWidth; // offset 0x2C, size 0x4
    float halfHeight; // offset 0x30, size 0x4
    unsigned char slowing; // offset 0x34, size 0x1
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
// total size: 0x24
struct /* @anon16 */ {};
// total size: 0x5C
class car_check : public behavior_implementation {
    // Members
public:
    class xBound bound; // offset 0x10, size 0x4C
};
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
// total size: 0x5C
class timer : public behavior_implementation {
    // Members
public:
    unsigned char use_velocipod; // offset 0x10, size 0x1
    unsigned char dead; // offset 0x11, size 0x1
    float outer_radius; // offset 0x14, size 0x4
    float inner_radius; // offset 0x18, size 0x4
    float dash_position; // offset 0x1C, size 0x4
    float following_npc_position; // offset 0x20, size 0x4
    float reached_point; // offset 0x24, size 0x4
    float next_point; // offset 0x28, size 0x4
    float u; // offset 0x2C, size 0x4
    float start_u; // offset 0x30, size 0x4
    float last_time; // offset 0x34, size 0x4
    class NURBS * spline; // offset 0x38, size 0x4
    float time; // offset 0x3C, size 0x4
    signed int shots_left; // offset 0x40, size 0x4
    float shot_time; // offset 0x44, size 0x4
    class DashMeter * dash_meter; // offset 0x48, size 0x4
    enum iSndGroupHandle dash_low_on_time_soundgroup; // offset 0x4C, size 0x4
    class boost & boost_state; // offset 0x50, size 0x4
    enum /* @enum */ {
        FORWARD = 0,
        BACKWARD = 1,
    } direction; // offset 0x54, size 0x4
    enum /* @enum */ {
        FORWARD = 0,
        BACKWARD = 1,
    } checkpoint_direction; // offset 0x58, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
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
enum RENDERTYPE {
    TOPLEFT = 0,
    BOTTOMLEFT = 1,
    BOTTOMRIGHT = 2,
    TOPRIGHT = 3,
    STROBE_EFFECT = 4,
    OFFSET_CENTERPT = 5,
    ROTATE_CCW = 6,
    OFFSET_ROTATE_CCW = 7,
    VARIABLE_TOP = 8,
    VARIABLE_RIGHT = 9,
    COUNTER_CLOCKWISE = 10,
    HALF_CCW = 11,
    RANDOM_V = 12,
    SPECIAL_STROBE = 13,
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
// total size: 0x0
class zTurret {};
// total size: 0xDC
class DashMeter : public hud_element {
    // Members
public:
    class image_widget * m_pImageWidget; // offset 0x18, size 0x4
    class text_widget * m_pCountDownWidget; // offset 0x1C, size 0x4
    class text_widget * m_pSpeedMeterWidget; // offset 0x20, size 0x4
    class text_widget * m_pLevelPercentWidget; // offset 0x24, size 0x4
    class text_widget * m_pMissionTextWidget; // offset 0x28, size 0x4
    class text_widget * m_pCheckPointWidget; // offset 0x2C, size 0x4
    char * m_SpeedMeterText; // offset 0x30, size 0x4
    float m_start_scale; // offset 0x34, size 0x4
    float m_final_scale; // offset 0x38, size 0x4
    float m_delta_scale; // offset 0x3C, size 0x4
    float m_start_alpha; // offset 0x40, size 0x4
    float m_end_alpha; // offset 0x44, size 0x4
    float m_countdown_red_on_time; // offset 0x48, size 0x4
    float m_countdown_red_fade_time; // offset 0x4C, size 0x4
    float m_countdown_red_total_time; // offset 0x50, size 0x4
    class xColor_tag m_countdown_red_color; // offset 0x54, size 0x4
    float m_mission_text_start_time; // offset 0x58, size 0x4
    float m_mission_text_stop_time; // offset 0x5C, size 0x4
    float m_countdown_flash_start_time; // offset 0x60, size 0x4
    float m_countdown_flash_stop_time; // offset 0x64, size 0x4
    float m_countdown_on_time; // offset 0x68, size 0x4
    float m_countdown_fade_time; // offset 0x6C, size 0x4
    float m_countdown_total_time; // offset 0x70, size 0x4
    class xColor_tag m_countdown_color; // offset 0x74, size 0x4
    unsigned char m_flashing_red; // offset 0x78, size 0x1
    unsigned char m_flashing; // offset 0x79, size 0x1
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float fMin; // offset 0x0, size 0x4
        float fCur; // offset 0x4, size 0x4
        float fMax; // offset 0x8, size 0x4
    } m_IconPos[8]; // offset 0x7C, size 0x60
};
// total size: 0x10
class behavior_implementation : public behavior {
    // Members
public:
    class common * owner; // offset 0xC, size 0x4
};
// total size: 0x7C
struct /* @anon17 */ {};
// total size: 0x28
class xParticleBatchSystem {
    // Members
public:
    enum ptank_group_type pool_type; // offset 0x0, size 0x4
    class render_state rs; // offset 0x4, size 0x10
    unsigned int order_group; // offset 0x14, size 0x4
    signed int order_index; // offset 0x18, size 0x4
    signed int stride; // offset 0x1C, size 0x4
    signed int (* update)(unsigned char *, signed int, class ptank_pool &, float, void *); // offset 0x20, size 0x4
    void * context; // offset 0x24, size 0x4
};
// total size: 0xB0
class follow_movepoints : public behavior_implementation {
    // Members
public:
    unsigned char orient; // offset 0x10, size 0x1
    unsigned char orient3d; // offset 0x11, size 0x1
    unsigned char stop; // offset 0x12, size 0x1
    float mass_accel_adjust; // offset 0x14, size 0x4
    float stop_distance_start; // offset 0x18, size 0x4
    float speed_force; // offset 0x1C, size 0x4
    float angle_change; // offset 0x20, size 0x4
    class xMovePoint * movepoint; // offset 0x24, size 0x4
    class xMovePoint * next_movepoint; // offset 0x28, size 0x4
    float speed; // offset 0x2C, size 0x4
    float velocity_blend_k; // offset 0x30, size 0x4
    float orientation_blend_k; // offset 0x34, size 0x4
    float velocity_v; // offset 0x38, size 0x4
    float orientation_v; // offset 0x3C, size 0x4
    float arrive_threshold; // offset 0x40, size 0x4
    float begin_turn_distance; // offset 0x44, size 0x4
    float bank_force; // offset 0x48, size 0x4
    float bank; // offset 0x4C, size 0x4
    float bank_v; // offset 0x50, size 0x4
    float bank_blend_k; // offset 0x54, size 0x4
    float tilt; // offset 0x58, size 0x4
    float time; // offset 0x5C, size 0x4
    float pivot_distance; // offset 0x60, size 0x4
    class xQuat bank_quat; // offset 0x70, size 0x10
    class xVec3 position; // offset 0x80, size 0xC
    class xVec3 velocity; // offset 0x8C, size 0xC
    class xVec3 offset; // offset 0x98, size 0xC
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x18
class hud_element : public xBase {
    // Members
public:
    class hud_element * _next; // offset 0x10, size 0x4
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
// total size: 0xC
class xGridIterator {
    // Members
public:
    class xGridBound * * listhead; // offset 0x0, size 0x4
    class xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
// total size: 0x84
class Senses {
    // Members
public:
    class xVec3 eyePos; // offset 0x0, size 0xC
    class xEnt * targetEnt; // offset 0xC, size 0x4
    class xVec3 targetPos; // offset 0x10, size 0xC
    class xVec3 targetDir; // offset 0x1C, size 0xC
    float targetDist; // offset 0x28, size 0x4
    class xVec2 targetDir2d; // offset 0x2C, size 0x8
    float targetDist2d; // offset 0x34, size 0x4
    class xVec3 aimPos; // offset 0x38, size 0xC
    class xVec3 aimDir; // offset 0x44, size 0xC
    float aimDist; // offset 0x50, size 0x4
    float timeSinceUpdate; // offset 0x54, size 0x4
    float nextLOSCheckTime; // offset 0x58, size 0x4
    unsigned char canSee; // offset 0x5C, size 0x1
    float viewDist; // offset 0x60, size 0x4
    float viewAngle; // offset 0x64, size 0x4
    float cosViewAngle; // offset 0x68, size 0x4
    unsigned char checkLOS; // offset 0x6C, size 0x1
    unsigned char updateVarsAlways; // offset 0x6D, size 0x1
    float checkLOSMinDelay; // offset 0x70, size 0x4
    float checkLOSMaxDelay; // offset 0x74, size 0x4
    float memoryDuration; // offset 0x78, size 0x4
    signed int eyeBone; // offset 0x7C, size 0x4
    float npcAlertResponseRange; // offset 0x80, size 0x4
};
enum eDashMeterLayer {
    BASEBACKGROUND = 0,
    PROGRESS = 1,
    VELOCIPOD = 2,
    BUS = 3,
    STARTFINISH = 4,
    CHECKPOINT_NEXT = 5,
    CHECKPOINT_PREV = 6,
    DASH = 7,
    NUM_LAYERS = 8,
};
// total size: 0x80
struct /* @anon18 */ {};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskNotIdentified = 5,
    TRC_DiskIdentified = 6,
    TRC_DiskTrayOpen = 7,
    TRC_DiskTrayClosed = 8,
    TRC_DiskNoDisk = 9,
    TRC_DiskInvalid = 10,
    TRC_DiskRetry = 11,
    TRC_DiskFatal = 12,
    TRC_Total = 13,
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
// total size: 0x20
class ptank_pool {
    // Members
public:
    class render_state rs; // offset 0x0, size 0x10
    unsigned int order_group; // offset 0x10, size 0x4
    signed int order_index; // offset 0x14, size 0x4
    unsigned int used; // offset 0x18, size 0x4
    class RpAtomic * ptank; // offset 0x1C, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned char human : 1; // offset 0x0, size 0x1
    unsigned char cast_shadow : 1; // offset 0x0, size 0x1
    unsigned char complex_shadow : 1; // offset 0x0, size 0x1
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dying : 1; // offset 0x0, size 0x1
    unsigned char not_throw_target : 1; // offset 0x0, size 0x1
    unsigned char shouldGivePower : 1; // offset 0x0, size 0x1
    unsigned char hurtByPlayer : 1; // offset 0x0, size 0x1
    unsigned char carried : 1; // offset 0x1, size 0x1
    unsigned char pad2 : 7; // offset 0x1, size 0x1
    unsigned char pad3 : 8; // offset 0x2, size 0x1
    unsigned char old_chkby : 8; // offset 0x3, size 0x1
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
enum ptank_group_type {
    PGT_COLOR_MAT = 0,
    PGT_COLOR_MAT_UV2 = 1,
    PGT_POS_COLOR_SIZE = 2,
    PGT_POS_COLOR_SIZE_UV2 = 3,
    PGT_POS_COLOR_SIZE_ROT = 4,
    PGT_POS_COLOR_SIZE_ROT_UV2 = 5,
    MAX_PGT = 6,
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
class move : public behavior_implementation {
    // Members
public:
    float turn_speed; // offset 0x10, size 0x4
    float move_speed; // offset 0x14, size 0x4
    float min_speed; // offset 0x18, size 0x4
    float acceleration; // offset 0x1C, size 0x4
    float speed; // offset 0x20, size 0x4
};
// total size: 0x18
class zSurfMatFX {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
// total size: 0x7C
struct /* @anon19 */ {};
enum _tagPadInit {
    ePadInit_Open1 = 0,
    ePadInit_WaitStable2 = 1,
    ePadInit_EnableAnalog3 = 2,
    ePadInit_EnableAnalog3LetsAllPissOffChris = 3,
    ePadInit_EnableRumble4 = 4,
    ePadInit_EnableRumbleTest5 = 5,
    ePadInit_PressureS6 = 6,
    ePadInit_PressureSTest7 = 7,
    ePadInit_Complete8a = 8,
    ePadInit_Complete8b = 9,
    ePadInit_Finished9 = 10,
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0x150
class Incredimeter : public hud_element {
    // Members
public:
    class image_widget * m_pImageWidget; // offset 0x18, size 0x4
    float m_fDamageVelocity; // offset 0x1C, size 0x4
    float m_fDamageDeclineTimeCap; // offset 0x20, size 0x4
    float m_fDamagePauseTimeRemaining; // offset 0x24, size 0x4
    float m_fDamagePauseTimeTotal; // offset 0x28, size 0x4
    float m_fPowerDownVelocity; // offset 0x2C, size 0x4
    float m_fPowerDownTimeCap; // offset 0x30, size 0x4
    float m_fPowerDownPauseTimeRemaining; // offset 0x34, size 0x4
    float m_fPowerDownPauseTimeTotal; // offset 0x38, size 0x4
    float m_fLineTimeRemaining; // offset 0x3C, size 0x4
    float m_fLineTimeTotal; // offset 0x40, size 0x4
    float m_fTwistTimeRemaining; // offset 0x44, size 0x4
    float m_fTwistTimeTotal; // offset 0x48, size 0x4
    float m_fSparkleTimeRemaining; // offset 0x4C, size 0x4
    float m_fSparkleTimeTotal; // offset 0x50, size 0x4
    float m_fSparkleScale; // offset 0x54, size 0x4
    float m_fSparkleFinalScale; // offset 0x58, size 0x4
    float m_fSparkleRotation; // offset 0x5C, size 0x4
    float m_fSparkleRotInitVel; // offset 0x60, size 0x4
    float m_fSparkleRotVel; // offset 0x64, size 0x4
    float m_fSparkleRotAccel; // offset 0x68, size 0x4
    float m_fGleamTimeRemaining; // offset 0x6C, size 0x4
    float m_fGleamTimeTotal; // offset 0x70, size 0x4
    float m_fGleamScale; // offset 0x74, size 0x4
    float m_fGleamFinalScale; // offset 0x78, size 0x4
    float m_fGleamRotation; // offset 0x7C, size 0x4
    float m_fGleamRotInitVel; // offset 0x80, size 0x4
    float m_fGleamRotVel; // offset 0x84, size 0x4
    float m_fGleamRotAccel; // offset 0x88, size 0x4
    float m_fStrobeHeight; // offset 0x8C, size 0x4
    float m_fStrobeFreq; // offset 0x90, size 0x4
    float m_fSpecialStrobeHeight; // offset 0x94, size 0x4
    float m_fSpecialStrobeFreq; // offset 0x98, size 0x4
    float m_fLastHealth; // offset 0x9C, size 0x4
    float m_fLastPower; // offset 0xA0, size 0x4
    float m_fBingAlphaInitial; // offset 0xA4, size 0x4
    float m_fBingAlphaInitialVel; // offset 0xA8, size 0x4
    float m_fBingAlphaVelocity; // offset 0xAC, size 0x4
    float m_fBingAlphaAccel; // offset 0xB0, size 0x4
    float m_fBingScale; // offset 0xB4, size 0x4
    float m_fBingInitialSpeed; // offset 0xB8, size 0x4
    float m_fBingSpeed; // offset 0xBC, size 0x4
    float m_fBingAccel; // offset 0xC0, size 0x4
    float m_fBingFinalScale; // offset 0xC4, size 0x4
    float m_fLastI; // offset 0xC8, size 0x4
    float m_fTheIPersistTimeTotal; // offset 0xCC, size 0x4
    float m_fTheIPersistTime; // offset 0xD0, size 0x4
    float m_fTheIGleamOffsetY; // offset 0xD4, size 0x4
    float m_fTheIGleamVelocity; // offset 0xD8, size 0x4
    float m_fTheIGleamMaxScale; // offset 0xDC, size 0x4
    float m_fIncredipointTime[6]; // offset 0xE0, size 0x18
    float m_fIpointTimeGrowing; // offset 0xF8, size 0x4
    float m_fIpointTimeShrinking; // offset 0xFC, size 0x4
    float m_fIpointMaxScale; // offset 0x100, size 0x4
    float m_fIpointMinScale; // offset 0x104, size 0x4
    float m_fIpointFinalAlpha; // offset 0x108, size 0x4
    unsigned char m_bTwistOn; // offset 0x10C, size 0x1
    unsigned char m_bBingOn; // offset 0x10D, size 0x1
    unsigned char m_bFullMeterOn; // offset 0x10E, size 0x1
    class TextureFlasher m_DotFlasher; // offset 0x110, size 0x20
    class TextureFlasher m_HealthFlasher; // offset 0x130, size 0x20
};
// total size: 0x38
class effectAsset : public xDynAsset {
    // Members
public:
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
// total size: 0xB0
class follow_spline_path : public move {
    // Members
public:
    unsigned char freeze_; // offset 0x24, size 0x1
    class xVec3 last_spline_end; // offset 0x28, size 0xC
    class xVec3 last_direction; // offset 0x34, size 0xC
    class spline_path * start_path; // offset 0x40, size 0x4
    class spline_path * path; // offset 0x44, size 0x4
    float u; // offset 0x48, size 0x4
    float speed; // offset 0x4C, size 0x4
    float acceleration; // offset 0x50, size 0x4
    float allow_offset_distance; // offset 0x54, size 0x4
    float hover_time; // offset 0x58, size 0x4
    float bank_force; // offset 0x5C, size 0x4
    float speed_force; // offset 0x60, size 0x4
    float position_blend_v; // offset 0x64, size 0x4
    float orient_blend_v; // offset 0x68, size 0x4
    float position_blend_speed; // offset 0x6C, size 0x4
    float orient_blend_speed; // offset 0x70, size 0x4
    float max_offset; // offset 0x74, size 0x4
    float offset_blend_k; // offset 0x78, size 0x4
    float offset_v; // offset 0x7C, size 0x4
    float target_speed; // offset 0x80, size 0x4
    class xVec3 offset; // offset 0x84, size 0xC
    class xQuat current_orient; // offset 0x90, size 0x10
    enum /* @enum */ {
        POSITIVE = 0,
        NEGATIVE = 1,
    } direction; // offset 0xA0, size 0x4
};
// total size: 0x30
class sub_mesh {
    // Members
public:
    unsigned char * portal_lookup; // offset 0x0, size 0x4
    unsigned char * portal; // offset 0x4, size 0x4
    float * edge_shift; // offset 0x8, size 0x4
    class exit * exits; // offset 0xC, size 0x4
    signed int num_exits; // offset 0x10, size 0x4
    class xVec3 * vertices; // offset 0x14, size 0x4
    signed int num_vertices; // offset 0x18, size 0x4
    class triangle * triangles; // offset 0x1C, size 0x4
    signed int num_triangles; // offset 0x20, size 0x4
    unsigned int * objects; // offset 0x24, size 0x4
    signed int num_objects; // offset 0x28, size 0x4
    unsigned char * level_two_route_exits; // offset 0x2C, size 0x4
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
// total size: 0x0
class xModelAssetInfo {};
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
// total size: 0x44
class jump {
    // Members
public:
    unsigned char active; // offset 0x0, size 0x1
    float height; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
    float velocity; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float total_time; // offset 0x18, size 0x4
    float time_up; // offset 0x1C, size 0x4
    class xVec3 target; // offset 0x20, size 0xC
    class xVec3 source; // offset 0x2C, size 0xC
    class xVec3 position; // offset 0x38, size 0xC
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
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x0
class BossMeter {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x130
class zSurfAssetBase : public xBaseAsset {
    // Members
public:
    unsigned char game_damage_type; // offset 0x8, size 0x1
    unsigned char game_sticky; // offset 0x9, size 0x1
    unsigned char game_damage_flags; // offset 0xA, size 0x1
    unsigned char surf_type; // offset 0xB, size 0x1
    unsigned char phys_pad; // offset 0xC, size 0x1
    unsigned char sld_start; // offset 0xD, size 0x1
    unsigned char sld_stop; // offset 0xE, size 0x1
    unsigned char phys_flags; // offset 0xF, size 0x1
    float friction; // offset 0x10, size 0x4
    class zSurfMatFX matfx; // offset 0x14, size 0x18
    class zSurfColorFX colorfx; // offset 0x2C, size 0x8
    unsigned int texture_anim_flags; // offset 0x34, size 0x4
    class zSurfTextureAnim texture_anim[2]; // offset 0x38, size 0x18
    unsigned int uvfx_flags; // offset 0x50, size 0x4
    class zSurfUVFX uvfx[2]; // offset 0x54, size 0xC0
    unsigned char on; // offset 0x114, size 0x1
    unsigned char surf_pad[3]; // offset 0x115, size 0x3
    float oob_delay; // offset 0x118, size 0x4
    float walljump_scale_xz; // offset 0x11C, size 0x4
    float walljump_scale_y; // offset 0x120, size 0x4
    float damage_timer; // offset 0x124, size 0x4
    float damage_bounce; // offset 0x128, size 0x4
    unsigned int impact_sound; // offset 0x12C, size 0x4
};
// total size: 0x7C
struct /* @anon20 */ {};
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
// total size: 0x0
class FamilyMeter {};
enum zHitSource {
    zHS_EVENT = 0,
    zHS_GENERAL = 1,
    zHS_PROJECTILE = 2,
    zHS_EXPLOSION = 3,
    zHS_LASER = 4,
    zHS_ENERGY = 5,
    zHS_FIRE = 6,
    zHS_SURFACE = 7,
    zHS_MELEE_HIGH = 8,
    zHS_MELEE_MID = 9,
    zHS_MELEE_LOW = 10,
    zHS_MELEE_UP = 11,
    zHS_MELEE_BACK = 12,
    zHS_MELEE_DIZZY = 13,
    zHS_THROW = 14,
    zHS_WATER = 15,
    zHS_DEATHPLANE = 16,
    zHS_INCREDI = 17,
    zHS_KNOCKBACK = 18,
    zHS_LASERBEAM = 19,
    zHS_INFINITE_FALL = 20,
    zHS_COUNT = 21,
    zHS_FORCE_INT = -1,
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x7C
struct /* @anon21 */ {};
// total size: 0x14
class behavior_node {
    // Members
public:
    unsigned char prev_ran; // offset 0x0, size 0x1
    signed char priority; // offset 0x1, size 0x1
    class behavior_node * next; // offset 0x4, size 0x4
    class behavior_node * iteration_next; // offset 0x8, size 0x4
    class behavior * data; // offset 0xC, size 0x4
    float delay; // offset 0x10, size 0x4
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
// total size: 0x0
class zGrapplePoint {};
// total size: 0xD8
class laser : public lightweight {
    // Members
public:
    unsigned char have_reached_hit; // offset 0xC, size 0x1
    unsigned char have_returned_hit; // offset 0xD, size 0x1
    unsigned char has_emit_splash; // offset 0xE, size 0x1
    unsigned char has_emit_hit_fx; // offset 0xF, size 0x1
    unsigned char hit_character; // offset 0x10, size 0x1
    float max_length; // offset 0x14, size 0x4
    float current_length; // offset 0x18, size 0x4
    float speed; // offset 0x1C, size 0x4
    float thickness; // offset 0x20, size 0x4
    float total_lifetime; // offset 0x24, size 0x4
    float time_till_ray_check; // offset 0x28, size 0x4
    float shake; // offset 0x2C, size 0x4
    float knockback_speed; // offset 0x30, size 0x4
    signed int damage; // offset 0x34, size 0x4
    signed int glare_id; // offset 0x38, size 0x4
    class xVec3 start; // offset 0x3C, size 0xC
    class xVec3 direction; // offset 0x48, size 0xC
    class xVec3 velocity; // offset 0x54, size 0xC
    class xBase * firing_entity; // offset 0x60, size 0x4
    class xEnt * hit_entity; // offset 0x64, size 0x4
    class xVec3 impact_point; // offset 0x68, size 0xC
    enum iSndHandle flyby_sound; // offset 0x74, size 0x4
    enum iSndHandle impact_sound; // offset 0x78, size 0x4
    class xCollis collision_record; // offset 0x7C, size 0x54
    unsigned int hitmarktextureid; // offset 0xD0, size 0x4
    class xColor_tag color; // offset 0xD4, size 0x4
};
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
class zSurfacePropTexAnim {
    // Members
public:
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned int group; // offset 0xC, size 0x4
    unsigned int group_idx; // offset 0x10, size 0x4
    class xBase * group_ptr; // offset 0x14, size 0x4
    class RwTexture * * txtr_animList; // offset 0x18, size 0x4
};
// total size: 0x4C
class LayerInfo {
    // Members
public:
    enum RENDERTYPE eType; // offset 0x0, size 0x4
    unsigned int uFlags; // offset 0x4, size 0x4
    class RwTexCoords upperLeft; // offset 0x8, size 0x8
    class RwTexCoords lowerRight; // offset 0x10, size 0x8
    float fCurPercent; // offset 0x18, size 0x4
    float fMinPercent; // offset 0x1C, size 0x4
    float fMaxPercent; // offset 0x20, size 0x4
    float fClampTopPercent; // offset 0x24, size 0x4
    float fOffsetX; // offset 0x28, size 0x4
    float fOffsetY; // offset 0x2C, size 0x4
    float fScaleX; // offset 0x30, size 0x4
    float fScaleY; // offset 0x34, size 0x4
    float fAlpha; // offset 0x38, size 0x4
    float fStrobe; // offset 0x3C, size 0x4
    float fStrobeFreq; // offset 0x40, size 0x4
    float fStrobeHeight; // offset 0x44, size 0x4
    signed int nStrobeCount; // offset 0x48, size 0x4
};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x50
class xCamSupportLOSBar {
    // Members
public:
    class config cfg; // offset 0x0, size 0x18
    class xVec3 origin; // offset 0x18, size 0xC
    class xVec3 last_origin; // offset 0x24, size 0xC
    class xVec3 stern_loc; // offset 0x30, size 0xC
    class xVec3 last_stern_loc; // offset 0x3C, size 0xC
    float rail_yoffset; // offset 0x48, size 0x4
    float last_rail_yoffset; // offset 0x4C, size 0x4
};
// total size: 0x44
class config {
    // Members
public:
    float min_life; // offset 0x0, size 0x4
    float max_life; // offset 0x4, size 0x4
    float min_size; // offset 0x8, size 0x4
    float max_size; // offset 0xC, size 0x4
    float velocity; // offset 0x10, size 0x4
    float emit_rate; // offset 0x14, size 0x4
    float gravity; // offset 0x18, size 0x4
    float slow; // offset 0x1C, size 0x4
    float fade_start; // offset 0x20, size 0x4
    float system_emit_time; // offset 0x24, size 0x4
    float glow; // offset 0x28, size 0x4
    float min_rot; // offset 0x2C, size 0x4
    float max_rot; // offset 0x30, size 0x4
    float size_delta; // offset 0x34, size 0x4
    float size_delta2; // offset 0x38, size 0x4
    float start_speed; // offset 0x3C, size 0x4
    class xColor_tag color; // offset 0x40, size 0x4
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    union { // inferred
        class xVec3 cart; // offset 0x0, size 0xC
        class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        class xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
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
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x34
class render_context {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 size; // offset 0xC, size 0xC
    class xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
};
// total size: 0xC
class lightweight {
    // Members
public:
    unsigned char used; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
};
// total size: 0x7C
struct /* @anon22 */ {};
enum iSndGroupHandle {
};
// total size: 0x18
class config {
    // Members
public:
    float rail_ymin; // offset 0x0, size 0x4
    float rail_ymax; // offset 0x4, size 0x4
    float pivot_bar_radius; // offset 0x8, size 0x4
    float compress_bar_radius; // offset 0xC, size 0x4
    float compress_ball_radius; // offset 0x10, size 0x4
    float compress_dist_min; // offset 0x14, size 0x4
};
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
// total size: 0xC
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
enum iSndHandle {
};
// total size: 0x24
class track_asset : public xBaseAsset {
    // Members
public:
    signed int num_vertices; // offset 0x8, size 0x4
    signed int num_triangles; // offset 0xC, size 0x4
    signed int landable_start; // offset 0x10, size 0x4
    signed int leavable_start; // offset 0x14, size 0x4
    class xVec3 * vertex; // offset 0x18, size 0x4
    class triangle * triangle_list; // offset 0x1C, size 0x4
    unsigned short * portal; // offset 0x20, size 0x4
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x10
class render_state {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    unsigned int src_blend; // offset 0x4, size 0x4
    unsigned int dst_blend; // offset 0x8, size 0x4
    signed int flags; // offset 0xC, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0x10
class zFootstepsData {
    // Members
public:
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
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
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
enum track_cast {
    LEFT = 0,
    RIGHT = 1,
    NONE = 2,
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x34
class CarStop : public behavior_implementation {
    // Members
public:
    unsigned char isStopped; // offset 0x10, size 0x1
    float timer; // offset 0x14, size 0x4
    class car * pCar; // offset 0x18, size 0x4
    float oldSpeed; // offset 0x1C, size 0x4
    class RwTexture * streakTexture; // offset 0x20, size 0x4
    float xSize; // offset 0x24, size 0x4
    float ySize; // offset 0x28, size 0x4
    enum iSndGroupHandle brakesNoiseGroup; // offset 0x2C, size 0x4
    enum iSndGroupHandle crashNoiseGroup; // offset 0x30, size 0x4
};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x8
class xCamConfigCommon {
    // Members
public:
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x14
class behavior_manager {
    // Members
public:
    class behavior_node * behavior_list; // offset 0x0, size 0x4
    class behavior_node * removed_list; // offset 0x4, size 0x4
    class behavior * current_behavior; // offset 0x8, size 0x4
    unsigned char manual_update; // offset 0xC, size 0x1
    unsigned char killed; // offset 0xD, size 0x1
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
enum /* @enum */ {
    POSITIVE = 0,
    NEGATIVE = 1,
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0x68
class zSurfacePropUVFX {
    // Members
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    float minmax_timer[2]; // offset 0xC, size 0x8
    class xVec3 trans; // offset 0x14, size 0xC
    class xVec3 trans_spd; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    class xVec3 scale_spd; // offset 0x38, size 0xC
    class xVec3 min; // offset 0x44, size 0xC
    class xVec3 max; // offset 0x50, size 0xC
    class xVec3 minmax_spd; // offset 0x5C, size 0xC
};
// total size: 0x0
class blur_data {};
// total size: 0x0
class rxReq {};
// total size: 0x24
struct /* @anon23 */ {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0x1
class RyzMemData {};
// total size: 0xB0
class exclusive_spline_path : public follow_spline_path {};
// total size: 0xC
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x24
class xRay3 {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
// total size: 0xC
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0xC0
class CarDrive : public follow_movepoints {
    // Members
public:
    unsigned char at_end; // offset 0xB0, size 0x1
};
// total size: 0x78
struct /* @anon24 */ {};
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
// total size: 0x88
class widget {
    // Members
public:
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    class render_context rc; // offset 0x8, size 0x34
    class render_context start_rc; // offset 0x3C, size 0x34
    class asset * a; // offset 0x70, size 0x4
    enum /* @enum */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x74, size 0x4
    class motive_node * _motive_top; // offset 0x7C, size 0x4
    class motive_node * _motive_temp; // offset 0x80, size 0x4
    class motive_node * * _motive_temp_tail; // offset 0x84, size 0x4
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
// total size: 0x24
struct /* @anon25 */ {};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0xC8
class xSweptSphere {
    // Members
public:
    unsigned char detect_initial_penetration; // offset 0x0, size 0x1
    unsigned char init_collide; // offset 0x1, size 0x1
    class xVec3 start; // offset 0x4, size 0xC
    class xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    float dist; // offset 0x20, size 0x4
    class xVec3 dir; // offset 0x24, size 0xC
    class xBox box; // offset 0x30, size 0x18
    class xQCData qcd; // offset 0x48, size 0x20
    float curdist; // offset 0x68, size 0x4
    unsigned int oid; // offset 0x6C, size 0x4
    void * optr; // offset 0x70, size 0x4
    class xModelInstance * mptr; // offset 0x74, size 0x4
    class xVec3 worldContact; // offset 0x78, size 0xC
    signed int hitIt; // offset 0x84, size 0x4
    class xVec3 worldPos; // offset 0x88, size 0xC
    class xVec3 worldNormal; // offset 0x94, size 0xC
    class xVec3 worldTangent; // offset 0xA0, size 0xC
    class xJSPHeader * jsp; // offset 0xAC, size 0x4
    class xClumpCollBSPTriangle * bspTriangle; // offset 0xB0, size 0x4
    enum xCollideSphereHitType type; // offset 0xB4, size 0x4
    class xPlane tri_plane; // offset 0xB8, size 0x10
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x7C
struct /* @anon26 */ {};
enum /* @enum */ {
    FORWARD = 0,
    BACKWARD = 1,
};
// total size: 0xE0
struct /* @anon27 */ {};
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
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
// total size: 0x7C
struct /* @anon28 */ {};
// total size: 0x80
struct /* @anon29 */ {};
// total size: 0x0
class zDuplicator {};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
// total size: 0x7C
struct /* @anon30 */ {};
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
enum zHitTarget {
    zHT_GENERAL = 0,
    zHT_FRONT = 1,
    zHT_BACK = 2,
    zHT_LEFT = 3,
    zHT_RIGHT = 4,
    zHT_ENTITY = 5,
    zHT_ENV = 6,
    zHT_COUNT = 7,
};

/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00239DD0 -> 0x0023A200
*/
// Range: 0x239DD0 -> 0x23A200
class xVec3 calculate_normal(class xVec3 * vertex /* r2 */, class xVec3 * normal /* r2 */, class xVec3 & point /* r2 */) {
    /* anonymous block */ {
        // Range: 0x239DD0 -> 0x23A200
        class xVec3 vb1; // r29+0x170
        class xVec3 vb2; // r29+0x160
        class xVec3 c; // r29+0x150
        float det; // r7
        class xVec2 pre_mult; // r29+0x148
        class xVec2 point_in_triangle; // r29+0x140
        float b0; // r29+0x180
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A200 -> 0x0023A218
*/
// Range: 0x23A200 -> 0x23A218
// this: r2
void dash::StoreCheckPoint() {
    /* anonymous block */ {
        // Range: 0x23A200 -> 0x23A218
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A220 -> 0x0023A328
*/
// Range: 0x23A220 -> 0x23A328
// this: r16
void dash::LoadCheckPoint() {
    /* anonymous block */ {
        // Range: 0x23A220 -> 0x23A328
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A330 -> 0x0023A648
*/
// Range: 0x23A330 -> 0x23A648
// this: r16
void dash::Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23A330 -> 0x23A648
        class xVec3 position; // r29+0x90
        float u; // r29+0xA0
        signed int i; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A650 -> 0x0023A678
*/
// Range: 0x23A650 -> 0x23A678
// this: r16
void dash::Reset() {
    /* anonymous block */ {
        // Range: 0x23A650 -> 0x23A678
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A680 -> 0x0023A6BC
*/
// Range: 0x23A680 -> 0x23A6BC
// this: r16
void dash::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23A680 -> 0x23A6BC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A6C0 -> 0x0023AA9C
*/
// Range: 0x23A6C0 -> 0x23AA9C
// this: r16
dash::dash() {
    /* anonymous block */ {
        // Range: 0x23A6C0 -> 0x23AA9C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023AAB0 -> 0x0023ADF8
*/
// Range: 0x23AAB0 -> 0x23ADF8
// this: r16
void boost::update(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x23AAB0 -> 0x23ADF8
        float u; // r29+0x70
        float speed; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023AE00 -> 0x0023AF7C
*/
// Range: 0x23AE00 -> 0x23AF7C
// this: r2
unsigned char boost::runnable(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x23AE00 -> 0x23AF7C
        float u; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023AF80 -> 0x0023B01C
*/
// Range: 0x23AF80 -> 0x23B01C
// this: r16
void boost::exit_state() {
    /* anonymous block */ {
        // Range: 0x23AF80 -> 0x23B01C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B020 -> 0x0023B028
*/
// Range: 0x23B020 -> 0x23B028
// this: r2
void boost::reset() {
    /* anonymous block */ {
        // Range: 0x23B020 -> 0x23B028
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B030 -> 0x0023B2B8
*/
// Range: 0x23B030 -> 0x23B2B8
// this: r16
void boost::setup() {
    /* anonymous block */ {
        // Range: 0x23B030 -> 0x23B2B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B2C0 -> 0x0023B418
*/
// Range: 0x23B2C0 -> 0x23B418
// this: r16
void boost::enter_state() {
    /* anonymous block */ {
        // Range: 0x23B2C0 -> 0x23B418
        class xSphere * extra_spheres[10]; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B420 -> 0x0023B45C
*/
// Range: 0x23B420 -> 0x23B45C
// this: r16
void loop::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23B420 -> 0x23B45C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B460 -> 0x0023B4AC
*/
// Range: 0x23B460 -> 0x23B4AC
// this: r2
unsigned char loop::runnable() {
    /* anonymous block */ {
        // Range: 0x23B460 -> 0x23B4AC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B4B0 -> 0x0023B4B8
*/
// Range: 0x23B4B0 -> 0x23B4B8
void add_transitions() {
    /* anonymous block */ {
        // Range: 0x23B4B0 -> 0x23B4B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B4C0 -> 0x0023B560
*/
// Range: 0x23B4C0 -> 0x23B560
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23B4C0 -> 0x23B560
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B560 -> 0x0023BB58
*/
// Range: 0x23B560 -> 0x23BB58
// this: r17
void loop::adjust_desired_direction(class xVec3 & desired_direction /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23B560 -> 0x23BB58
        class xVec3 impulse; // r29+0x140
        float theta; // r29+0x150
        class xQuat quat; // r29+0xB0
        class xMat3x3 mat; // r29+0x80
        float u; // r23
        float sin_theta; // r29+0x150
        float sin_u_theta; // r29+0x150
        float sin_1_u_theta; // r29+0x150
        class xQuat quat; // r29+0x70
        class xMat3x3 mat; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BB60 -> 0x0023BB68
*/
// Range: 0x23BB60 -> 0x23BB68
void exit_state() {
    /* anonymous block */ {
        // Range: 0x23BB60 -> 0x23BB68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BB70 -> 0x0023BC18
*/
// Range: 0x23BB70 -> 0x23BC18
// this: r2
void loop::enter_state() {
    /* anonymous block */ {
        // Range: 0x23BB70 -> 0x23BC18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BC20 -> 0x0023BF74
*/
// Range: 0x23BC20 -> 0x23BF74
// this: r17
unsigned char water::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23BC20 -> 0x23BF74
        class xCollis coll; // r29+0x40
        class xSurface * surface; // r2
        class zSurfaceProps * prop; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BF80 -> 0x0023C238
*/
// Range: 0x23BF80 -> 0x23C238
// this: r16
void water::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23BF80 -> 0x23C238
        float x; // r2
        float diff; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C240 -> 0x0023C294
*/
// Range: 0x23C240 -> 0x23C294
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23C240 -> 0x23C294
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C2A0 -> 0x0023C2A8
*/
// Range: 0x23C2A0 -> 0x23C2A8
// this: r2
void water::exit_state() {
    /* anonymous block */ {
        // Range: 0x23C2A0 -> 0x23C2A8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C2B0 -> 0x0023C320
*/
// Range: 0x23C2B0 -> 0x23C320
// this: r16
void water::enter_state() {
    /* anonymous block */ {
        // Range: 0x23C2B0 -> 0x23C320
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C320 -> 0x0023C32C
*/
// Range: 0x23C320 -> 0x23C32C
// this: r2
void water::reset() {
    /* anonymous block */ {
        // Range: 0x23C320 -> 0x23C32C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C330 -> 0x0023C464
*/
// Range: 0x23C330 -> 0x23C464
// this: r16
void water::setup() {
    /* anonymous block */ {
        // Range: 0x23C330 -> 0x23C464
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C470 -> 0x0023C9FC
*/
// Range: 0x23C470 -> 0x23C9FC
// this: r16
void trip::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23C470 -> 0x23C9FC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CA00 -> 0x0023CADC
*/
// Range: 0x23CA00 -> 0x23CADC
// this: r16
unsigned char trip::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23CA00 -> 0x23CADC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CAE0 -> 0x0023CB84
*/
// Range: 0x23CAE0 -> 0x23CB84
// this: r16
void trip::enter_state() {
    /* anonymous block */ {
        // Range: 0x23CAE0 -> 0x23CB84
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CB90 -> 0x0023CC10
*/
// Range: 0x23CB90 -> 0x23CC10
// this: r16
void trip::register_collision(class SphereCollisionResults & scene_collide /* r6 */) {
    /* anonymous block */ {
        // Range: 0x23CB90 -> 0x23CC10
        class xSurface * surface; // r2
        class zSurfAssetIN * asset; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CC10 -> 0x0023CCFC
*/
// Range: 0x23CC10 -> 0x23CCFC
// this: r16
void trip::setup() {
    /* anonymous block */ {
        // Range: 0x23CC10 -> 0x23CCFC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CD00 -> 0x0023CD10
*/
// Range: 0x23CD00 -> 0x23CD10
// this: r2
void trip::reset() {
    /* anonymous block */ {
        // Range: 0x23CD00 -> 0x23CD10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CD10 -> 0x0023CEAC
*/
// Range: 0x23CD10 -> 0x23CEAC
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23CD10 -> 0x23CEAC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CF60 -> 0x0023D080
*/
// Range: 0x23CF60 -> 0x23D080
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23CF60 -> 0x23D080
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D080 -> 0x0023D0F4
*/
// Range: 0x23D080 -> 0x23D0F4
// this: r2
unsigned char airborne::runnable() {
    /* anonymous block */ {
        // Range: 0x23D080 -> 0x23D0F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D100 -> 0x0023D13C
*/
// Range: 0x23D100 -> 0x23D13C
// this: r16
void airborne::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23D100 -> 0x23D13C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D140 -> 0x0023D168
*/
// Range: 0x23D140 -> 0x23D168
// this: r2
void airborne::enter_state() {
    /* anonymous block */ {
        // Range: 0x23D140 -> 0x23D168
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D170 -> 0x0023D1C4
*/
// Range: 0x23D170 -> 0x23D1C4
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23D170 -> 0x23D1C4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D1D0 -> 0x0023D1F0
*/
// Range: 0x23D1D0 -> 0x23D1F0
// this: r2
void incredimeter_hud::update() {
    /* anonymous block */ {
        // Range: 0x23D1D0 -> 0x23D1F0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D1F0 -> 0x0023D248
*/
// Range: 0x23D1F0 -> 0x23D248
// this: r16
void incredimeter_hud::setup() {
    /* anonymous block */ {
        // Range: 0x23D1F0 -> 0x23D248
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D250 -> 0x0023D2DC
*/
// Range: 0x23D250 -> 0x23D2DC
unsigned char should_flash_static(void * context /* r2 */, class TextureFlasher * pFlasher /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23D250 -> 0x23D2DC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D2E0 -> 0x0023D2F8
*/
// Range: 0x23D2E0 -> 0x23D2F8
// this: r2
unsigned char fall::runnable() {
    /* anonymous block */ {
        // Range: 0x23D2E0 -> 0x23D2F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D300 -> 0x0023D3B0
*/
// Range: 0x23D300 -> 0x23D3B0
// this: r16
void fall::update() {
    /* anonymous block */ {
        // Range: 0x23D300 -> 0x23D3B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D3B0 -> 0x0023D400
*/
// Range: 0x23D3B0 -> 0x23D400
// this: r16
void fall::enter_state() {
    /* anonymous block */ {
        // Range: 0x23D3B0 -> 0x23D400
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D400 -> 0x0023D454
*/
// Range: 0x23D400 -> 0x23D454
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23D400 -> 0x23D454
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D460 -> 0x0023D4FC
*/
// Range: 0x23D460 -> 0x23D4FC
unsigned char collision_response(class SphereCollisionResults & scene_collide /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23D460 -> 0x23D4FC
        class zSurfaceProps * prop; // r16
        class xSurface * surface; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D500 -> 0x0023D61C
*/
// Range: 0x23D500 -> 0x23D61C
// this: r16
unsigned char friction_death::runnable() {
    /* anonymous block */ {
        // Range: 0x23D500 -> 0x23D61C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D630 -> 0x0023D93C
*/
// Range: 0x23D630 -> 0x23D93C
// this: r16
void friction_death::update(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x23D630 -> 0x23D93C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D940 -> 0x0023D9A4
*/
// Range: 0x23D940 -> 0x23D9A4
// this: r16
void friction_death::enter_state() {
    /* anonymous block */ {
        // Range: 0x23D940 -> 0x23D9A4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D9B0 -> 0x0023DA04
*/
// Range: 0x23D9B0 -> 0x23DA04
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23D9B0 -> 0x23DA04
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023DA10 -> 0x0023DD3C
*/
// Range: 0x23DA10 -> 0x23DD3C
// this: r16
unsigned char wall_hit::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23DA10 -> 0x23DD3C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023DD40 -> 0x0023E0B0
*/
// Range: 0x23DD40 -> 0x23E0B0
// this: r16
void wall_hit::update(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x23DD40 -> 0x23E0B0
        float y_component; // r29+0x90
        class xVec3 new_velocity; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E0B0 -> 0x0023E218
*/
// Range: 0x23E0B0 -> 0x23E218
// this: r16
void wall_hit::enter_state() {
    /* anonymous block */ {
        // Range: 0x23E0B0 -> 0x23E218
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E220 -> 0x0023E2C0
*/
// Range: 0x23E220 -> 0x23E2C0
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23E220 -> 0x23E2C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E2C0 -> 0x0023E494
*/
// Range: 0x23E2C0 -> 0x23E494
// this: r16
unsigned char wall_hit::damage() {
    /* anonymous block */ {
        // Range: 0x23E2C0 -> 0x23E494
        float current_speed; // r29+0x70
        class xVec3 velocity; // r29+0x60
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E4A0 -> 0x0023E704
*/
// Range: 0x23E4A0 -> 0x23E704
// this: r17
void wall_hit::register_collision(class SphereCollisionResults & scene_collide /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23E4A0 -> 0x23E704
        unsigned char is_sticky; // r4
        class zSurfaceProps * prop; // r2
        float current_speed; // r29+0xC0
        class xVec3 velocity; // r29+0xB0
        class xSurface * surface; // r2
        class zSurfAssetIN * asset; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E710 -> 0x0023E8C4
*/
// Range: 0x23E710 -> 0x23E8C4
// this: r16
void wall_hit::setup() {
    /* anonymous block */ {
        // Range: 0x23E710 -> 0x23E8C4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E8D0 -> 0x0023E900
*/
// Range: 0x23E8D0 -> 0x23E900
// this: r2
void wall_hit::reset() {
    /* anonymous block */ {
        // Range: 0x23E8D0 -> 0x23E900
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E900 -> 0x0023EC18
*/
// Range: 0x23E900 -> 0x23EC18
// this: r17
unsigned char timer::system_event(unsigned int toEvent /* r2 */, float * toParam /* r16 */, class xBase * toParamWidget /* r18 */) {
    /* anonymous block */ {
        // Range: 0x23E900 -> 0x23EC18
        class xVec3 start; // r29+0xD0
        class xVec3 end; // r29+0xC0
        float distance; // r29+0xDC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EC20 -> 0x0023ED20
*/
// Range: 0x23EC20 -> 0x23ED20
// this: r16
void timer::setup() {
    /* anonymous block */ {
        // Range: 0x23EC20 -> 0x23ED20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023ED20 -> 0x0023ED78
*/
// Range: 0x23ED20 -> 0x23ED78
// this: r2
void timer::reset() {
    /* anonymous block */ {
        // Range: 0x23ED20 -> 0x23ED78
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023ED80 -> 0x0023F9B4
*/
// Range: 0x23ED80 -> 0x23F9B4
// this: r18
void timer::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23ED80 -> 0x23F9B4
        unsigned char low_on_time; // r16
        float relative_dash_position; // r3
        float distance; // r29+0x14C
        class xVec3 start; // r29+0x140
        class rocket r; // r29+0x60
        float speed; // r21
        signed int minutes; // r2
        signed int seconds; // r2
        float use_time; // r29+0x150
        signed int hours; // r2
        signed int minutes; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023F9C0 -> 0x002405CC
*/
// Range: 0x23F9C0 -> 0x2405CC
// this: r16
void chase_lasers::update(float dt /* r29+0x2F0 */) {
    /* anonymous block */ {
        // Range: 0x23F9C0 -> 0x2405CC
        class xVec3 start; // r29+0x2E0
        class xVec3 end; // r29+0x2D0
        class xVec3 direction; // r29+0x2C0
        class laser new_laser; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002405D0 -> 0x002405E4
*/
// Range: 0x2405D0 -> 0x2405E4
// this: r2
void chase_lasers::reset() {
    /* anonymous block */ {
        // Range: 0x2405D0 -> 0x2405E4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002405F0 -> 0x00240600
*/
// Range: 0x2405F0 -> 0x240600
// this: r2
void chase_lasers::setup() {
    /* anonymous block */ {
        // Range: 0x2405F0 -> 0x240600
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240600 -> 0x00240608
*/
// Range: 0x240600 -> 0x240608
// this: r2
unsigned char chase_lasers::runnable() {
    /* anonymous block */ {
        // Range: 0x240600 -> 0x240608
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240610 -> 0x00240648
*/
// Range: 0x240610 -> 0x240648
// this: r2
unsigned char chase_lasers::system_event(unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x240610 -> 0x240648
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240650 -> 0x0024068C
*/
// Range: 0x240650 -> 0x24068C
// this: r2
unsigned char sink::runnable() {
    /* anonymous block */ {
        // Range: 0x240650 -> 0x24068C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240690 -> 0x00240698
*/
// Range: 0x240690 -> 0x240698
// this: r2
void sink::reset() {
    /* anonymous block */ {
        // Range: 0x240690 -> 0x240698
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002406A0 -> 0x002407B0
*/
// Range: 0x2406A0 -> 0x2407B0
// this: r17
void sink::update() {
    /* anonymous block */ {
        // Range: 0x2406A0 -> 0x2407B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002407B0 -> 0x002407B8
*/
// Range: 0x2407B0 -> 0x2407B8
// this: r2
void sink::setup() {
    /* anonymous block */ {
        // Range: 0x2407B0 -> 0x2407B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002407C0 -> 0x002407E8
*/
// Range: 0x2407C0 -> 0x2407E8
// this: r2
void sink::enter_state() {
    /* anonymous block */ {
        // Range: 0x2407C0 -> 0x2407E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002407F0 -> 0x00240844
*/
// Range: 0x2407F0 -> 0x240844
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2407F0 -> 0x240844
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240850 -> 0x00240904
*/
// Range: 0x240850 -> 0x240904
// this: r16
void car_check::update() {
    /* anonymous block */ {
        // Range: 0x240850 -> 0x240904
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240910 -> 0x00240C8C
*/
// Range: 0x240910 -> 0x240C8C
// this: r17
unsigned char car_check::operator()(class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x240910 -> 0x240C8C
        class xCollis coll; // r29+0x30
        class common & npc; // r2
        class car & npc_car; // r2
        class xVec3 direction; // r29+0x100
        float toParam[1]; // r29+0x10C
        class xVec3 direction; // r29+0xF0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240C90 -> 0x00240E1C
*/
// Range: 0x240C90 -> 0x240E1C
// this: r16
void run::setup() {
    /* anonymous block */ {
        // Range: 0x240C90 -> 0x240E1C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240E20 -> 0x00241100
*/
// Range: 0x240E20 -> 0x241100
// this: r16
void run::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x240E20 -> 0x241100
        float & turn_lean; // r2
        float & speed_lean; // r2
        float target_lean; // r29+0x3C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00241100 -> 0x00241108
*/
// Range: 0x241100 -> 0x241108
unsigned char runnable() {
    /* anonymous block */ {
        // Range: 0x241100 -> 0x241108
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00241110 -> 0x00241254
*/
// Range: 0x241110 -> 0x241254
// this: r16
void run::enter_state() {
    /* anonymous block */ {
        // Range: 0x241110 -> 0x241254
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00241260 -> 0x002412B4
*/
// Range: 0x241260 -> 0x2412B4
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x241260 -> 0x2412B4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002412C0 -> 0x00241670
*/
// Range: 0x2412C0 -> 0x241670
// this: r2
void dust::add_particles_to_ptank() {
    /* anonymous block */ {
        // Range: 0x2412C0 -> 0x241670
        class ptank_pool__pos_color_size_rot pool; // r29+0x90
        class dust_particle * p; // r20
        class dust_particle * end; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00241670 -> 0x00241E94
*/
// Range: 0x241670 -> 0x241E94
// this: r21
void dust::emit_particles(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x241670 -> 0x241E94
        class xVec3 current_position; // r29+0x1C0
        float remaining; // r20
        class xVec3 position_delta; // r29+0x1B0
        class xVec3 inheret_velocity; // r29+0x1A0
        class xVec3 offset; // r29+0x190
        float intensity; // r30
        class dust_particle * p; // r20
        class dust_particle * end; // r2
        float time_passed; // r29
        float theta; // r31
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00241EA0 -> 0x002421E8
*/
// Range: 0x241EA0 -> 0x2421E8
// this: r2
void dust::update_particles(float dt /* r24 */) {
    /* anonymous block */ {
        // Range: 0x241EA0 -> 0x2421E8
        float owner_x; // r23
        float owner_z; // r22
        class dust_particle * p; // r21
        class dust_particle * end; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002421F0 -> 0x00242234
*/
// Range: 0x2421F0 -> 0x242234
// this: r16
void dust::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2421F0 -> 0x242234
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242240 -> 0x00242248
*/
// Range: 0x242240 -> 0x242248
void enter_state() {
    /* anonymous block */ {
        // Range: 0x242240 -> 0x242248
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242250 -> 0x002422A0
*/
// Range: 0x242250 -> 0x2422A0
// this: r2
unsigned char dust::runnable() {
    /* anonymous block */ {
        // Range: 0x242250 -> 0x2422A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002422A0 -> 0x00242328
*/
// Range: 0x2422A0 -> 0x242328
// this: r16
void dust::setup() {
    /* anonymous block */ {
        // Range: 0x2422A0 -> 0x242328
        class dust_particle * p; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242330 -> 0x00242368
*/
// Range: 0x242330 -> 0x242368
// this: r2
unsigned char jump::system_event(unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x242330 -> 0x242368
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242370 -> 0x0024238C
*/
// Range: 0x242370 -> 0x24238C
// this: r2
void jump::reset() {
    /* anonymous block */ {
        // Range: 0x242370 -> 0x24238C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242390 -> 0x002424A0
*/
// Range: 0x242390 -> 0x2424A0
// this: r16
void jump::setup() {
    /* anonymous block */ {
        // Range: 0x242390 -> 0x2424A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002424A0 -> 0x002424DC
*/
// Range: 0x2424A0 -> 0x2424DC
// this: r16
void jump::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2424A0 -> 0x2424DC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002424E0 -> 0x0024256C
*/
// Range: 0x2424E0 -> 0x24256C
// this: r16
void jump::enter_state() {
    /* anonymous block */ {
        // Range: 0x2424E0 -> 0x24256C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242570 -> 0x0024265C
*/
// Range: 0x242570 -> 0x24265C
// this: r16
unsigned char jump::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x242570 -> 0x24265C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242660 -> 0x00242760
*/
// Range: 0x242660 -> 0x242760
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x242660 -> 0x242760
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002427B0 -> 0x00242898
*/
// Range: 0x2427B0 -> 0x242898
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2427B0 -> 0x242898
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002428A0 -> 0x00242950
*/
// Range: 0x2428A0 -> 0x242950
// this: r16
void dash_jump::Update(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2428A0 -> 0x242950
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242950 -> 0x00243344
*/
// Range: 0x242950 -> 0x243344
// this: r16
void dash_move::calculate_velocity(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x242950 -> 0x243344
        float controller_magnitude; // r29+0x15C
        class xVec3 desired_direction; // r29+0x150
        class xVec3 velocity; // r29+0x140
        float speed; // r21
        float impulse; // r29+0x160
        float gravity_component; // r20
        class xVec3 new_desired_direction; // r29+0x130
        class xVec3 angle_change; // r29+0x120
        class xVec3 forward; // r29+0x110
        class xVec3 & normal; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00243350 -> 0x002437E4
*/
// Range: 0x243350 -> 0x2437E4
// this: r17
void dash_move::adjust_desired_direction(class xVec3 & desired_direction /* r16 */) {
    /* anonymous block */ {
        // Range: 0x243350 -> 0x2437E4
        class xVec3 impulse; // r29+0x100
        float theta; // r29+0x110
        float u; // r23
        float sin_theta; // r29+0x110
        float sin_u_theta; // r29+0x110
        float sin_1_u_theta; // r29+0x110
        class xQuat quat; // r29+0x70
        class xMat3x3 mat; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002437F0 -> 0x00243BAC
*/
// Range: 0x2437F0 -> 0x243BAC
// this: r17
class xVec3 dash_move::get_desired_direction(float & controller_magnitude /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2437F0 -> 0x243BAC
        float x; // r21
        float y; // r20
        float angle; // r29+0xA0
        class xQuat rot; // r29+0x80
        class xMat3x3 rot_mat; // r29+0x50
        class xVec3 desired_direction; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00243BB0 -> 0x00243F24
*/
// Range: 0x243BB0 -> 0x243F24
// this: r16
void dash_move::set_rotation_delta(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x243BB0 -> 0x243F24
        class xVec3 desired_direction; // r29+0x70
        float diff_angle; // r23
        class xQuat new_orientation; // r29+0x40
        class xQuat temp; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00243F30 -> 0x00243F38
*/
// Range: 0x243F30 -> 0x243F38
void reset() {
    /* anonymous block */ {
        // Range: 0x243F30 -> 0x243F38
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00243F40 -> 0x00244024
*/
// Range: 0x243F40 -> 0x244024
// this: r16
void dash_move::setup() {
    /* anonymous block */ {
        // Range: 0x243F40 -> 0x244024
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00244030 -> 0x00244290
*/
// Range: 0x244030 -> 0x244290
// this: r16
void friction_effects::update(float dt /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x244030 -> 0x244290
        float friction_2; // r29+0x70
        class xColor_tag color; // r29+0x6C
        class xColor_tag color; // r29+0x68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00244290 -> 0x002442C0
*/
// Range: 0x244290 -> 0x2442C0
// this: r2
unsigned char friction_effects::runnable() {
    /* anonymous block */ {
        // Range: 0x244290 -> 0x2442C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002442C0 -> 0x002442C8
*/
// Range: 0x2442C0 -> 0x2442C8
// this: r2
void friction_effects::reset() {
    /* anonymous block */ {
        // Range: 0x2442C0 -> 0x2442C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002442D0 -> 0x00244374
*/
// Range: 0x2442D0 -> 0x244374
// this: r16
void friction_effects::setup() {
    /* anonymous block */ {
        // Range: 0x2442D0 -> 0x244374
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00244380 -> 0x002448C4
*/
// Range: 0x244380 -> 0x2448C4
signed int update(unsigned char * mem /* r20 */, signed int count /* r2 */, class ptank_pool & pool_ /* r2 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x244380 -> 0x2448C4
        class ptank_pool__pos_color_size_rot & pool; // r19
        class particle * p; // r18
        class particle * end; // r17
        class xVec3 oldpos; // r29+0xE0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002448D0 -> 0x002451AC
*/
// Range: 0x2448D0 -> 0x2451AC
void emit(float & emit_remaining /* r20 */, float dt /* r22 */, class xMat4x3 * mat /* r23 */, class config * cfg /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2448D0 -> 0x2451AC
        class xVec3 position; // r29+0x130
        class xVec3 normal; // r29+0x120
        float time_passed; // r29+0x140
        signed int emit; // r18
        class particle * p; // r29+0x13C
        signed int count; // r2
        class particle * end; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002451B0 -> 0x00245298
*/
// Range: 0x2451B0 -> 0x245298
void setup() {
    /* anonymous block */ {
        // Range: 0x2451B0 -> 0x245298
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002452A0 -> 0x002452B8
*/
// Range: 0x2452A0 -> 0x2452B8
// this: r2
void player::add_transitions(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2452A0 -> 0x2452B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002452C0 -> 0x002452D8
*/
// Range: 0x2452C0 -> 0x2452D8
// this: r2
void player::add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2452C0 -> 0x2452D8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002452E0 -> 0x002453B8
*/
// Range: 0x2452E0 -> 0x2453B8
// this: r21
void player::HandleEvent(class xBase * from /* r20 */, unsigned int thisEvent /* r19 */, float * toParam /* r18 */, class xBase * toParamWidget /* r17 */, unsigned int toParamWidgetID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2452E0 -> 0x2453B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002453C0 -> 0x002454A0
*/
// Range: 0x2453C0 -> 0x2454A0
// this: r16
void player::BoundUpdate() {
    /* anonymous block */ {
        // Range: 0x2453C0 -> 0x2454A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002454A0 -> 0x002456F4
*/
// Range: 0x2454A0 -> 0x2456F4
// this: r16
void player::assign_floor_normal() {
    /* anonymous block */ {
        // Range: 0x2454A0 -> 0x2456F4
        class xVec3 old_floor_normal; // r29+0xB0
        class xVec3 up; // r29+0xA0
        class zSurfaceProps * prop; // r2
        class xColor_tag color[3]; // r29+0x90
        class xVec3 normal[3]; // r29+0x50
        float uv[6]; // r29+0x30
        class xVec3 * vertex; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00245700 -> 0x00245CE4
*/
// Range: 0x245700 -> 0x245CE4
// this: r18
void player::Move(class xScene * s /* r17 */, float dt /* r21 */, class xEntFrame * frame /* r16 */) {
    /* anonymous block */ {
        // Range: 0x245700 -> 0x245CE4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00245CF0 -> 0x00245D90
*/
// Range: 0x245CF0 -> 0x245D90
// this: r9
unsigned char player::Damage(class zCombatDamageInfo & damageInfo /* r2 */) {
    /* anonymous block */ {
        // Range: 0x245CF0 -> 0x245D90
        class zCombatDamageInfo newInfo; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00245D90 -> 0x00245DBC
*/
// Range: 0x245D90 -> 0x245DBC
// this: r16
void player::EndUpdate(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x245D90 -> 0x245DBC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00245DC0 -> 0x00246068
*/
// Range: 0x245DC0 -> 0x246068
// this: r16
void player::Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x245DC0 -> 0x246068
        float friction_2; // r29+0x30
        class xModelInstance * m; // r5
        unsigned char in_tunnel; // @ 0x00608E4C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246070 -> 0x002462B4
*/
// Range: 0x246070 -> 0x2462B4
// this: r17
void player::find_floor_position(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x246070 -> 0x2462B4
        class xRay3 ray; // r29+0xA0
        class xCollis collision_record; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002462C0 -> 0x002462D0
*/
// Range: 0x2462C0 -> 0x2462D0
unsigned char CanTakeDamage() {
    /* anonymous block */ {
        // Range: 0x2462C0 -> 0x2462D0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002462D0 -> 0x00246304
*/
// Range: 0x2462D0 -> 0x246304
// this: r16
void player::Render() {
    /* anonymous block */ {
        // Range: 0x2462D0 -> 0x246304
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246310 -> 0x00246404
*/
// Range: 0x246310 -> 0x246404
// this: r2
unsigned char player::FindShortestCollision(class xSweptSphere & sws /* r18 */, unsigned int & collisionFlags /* r17 */, signed int penby /* r2 */) {
    /* anonymous block */ {
        // Range: 0x246310 -> 0x246404
        unsigned char hit; // r16
        float last_hit_dist; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246410 -> 0x0024647C
*/
// Range: 0x246410 -> 0x24647C
// this: r17
void player::FindStaticCollisions(class xSphere & sphere /* r16 */) {
    /* anonymous block */ {
        // Range: 0x246410 -> 0x24647C
        class xSphere test_sphere; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246480 -> 0x002464AC
*/
// Range: 0x246480 -> 0x2464AC
// this: r16
void player::Exit() {
    /* anonymous block */ {
        // Range: 0x246480 -> 0x2464AC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002464B0 -> 0x002464B8
*/
// Range: 0x2464B0 -> 0x2464B8
// this: r2
unsigned char player::IsDead() {
    /* anonymous block */ {
        // Range: 0x2464B0 -> 0x2464B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002464C0 -> 0x00246634
*/
// Range: 0x2464C0 -> 0x246634
// this: r16
void player::refresh_blur() {
    /* anonymous block */ {
        // Range: 0x2464C0 -> 0x246634
        float lifetime; // r21
        float alpha; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246640 -> 0x00246780
*/
// Range: 0x246640 -> 0x246780
// this: r16
void player::Reset() {
    /* anonymous block */ {
        // Range: 0x246640 -> 0x246780
        class xModelInstance * m; // r2
        class xModelInstance * m; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246780 -> 0x0024678C
*/
// Range: 0x246780 -> 0x24678C
// this: r2
void player::SetCamera() {
    /* anonymous block */ {
        // Range: 0x246780 -> 0x24678C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246790 -> 0x002468E0
*/
// Range: 0x246790 -> 0x2468E0
// this: r16
void player::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x246790 -> 0x2468E0
        enum iSndGroupHandle handle; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002468E0 -> 0x0024692C
*/
// Range: 0x2468E0 -> 0x24692C
// this: r2
void player::GiveIncrediPower(signed short amount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2468E0 -> 0x24692C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246930 -> 0x002469B4
*/
// Range: 0x246930 -> 0x2469B4
// this: r17
void player::GiveHealth(signed int hitpoints /* r16 */) {
    /* anonymous block */ {
        // Range: 0x246930 -> 0x2469B4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002469C0 -> 0x00246A7C
*/
// Range: 0x2469C0 -> 0x246A7C
// this: r16
unsigned char player::CollisionResponse(class xVec3 & current_dir /* r19 */, class SphereCollisionResults & scene_collide /* r18 */, class xVec3 & response_dpos /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2469C0 -> 0x246A7C
        unsigned char collision_is_on; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246A80 -> 0x00246A98
*/
// Range: 0x246A80 -> 0x246A98
// this: r2
void player::RegisterCollision(class SphereCollisionResults & scene_collide /* r2 */) {
    /* anonymous block */ {
        // Range: 0x246A80 -> 0x246A98
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246AA0 -> 0x00246AAC
*/
// Range: 0x246AA0 -> 0x246AAC
signed int * GetHeadBones() {
    /* anonymous block */ {
        // Range: 0x246AA0 -> 0x246AAC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246AB0 -> 0x00246B28
*/
// Range: 0x246AB0 -> 0x246B28
void EventCB(class xBase * to /* r16 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x246AB0 -> 0x246B28
        class zTimedSplash & timed_splash; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zDashPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00246B30 -> 0x00246C08
*/
// Range: 0x246B30 -> 0x246C08
void Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x246B30 -> 0x246C08
    }
}


