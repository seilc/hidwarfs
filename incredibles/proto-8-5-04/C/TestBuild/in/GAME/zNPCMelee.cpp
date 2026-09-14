/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float UBER_RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
float sProjBoundShift; // size: 0x4, address: 0x607944
static class curve_node ribbon_curve[2]; // size: 0x18, address: 0x5E9410
static float START_TURN_EPSILON; // size: 0x4, address: 0x5E9428
static float STOP_TURN_EPSILON; // size: 0x4, address: 0x0
static class config dust_config; // size: 0x4C, address: 0x67F430
static unsigned char sProjDrawCenter; // size: 0x1, address: 0x0
static unsigned char sProjDrawBounds; // size: 0x1, address: 0x0
static unsigned char sProjDrawVel; // size: 0x1, address: 0x0
static unsigned char sProjDrawRotation; // size: 0x1, address: 0x0
static float sProjBlendTime; // size: 0x4, address: 0x607948
static float sProjBlendSpeed; // size: 0x4, address: 0x608E20
static float sProjBounceBouncy; // size: 0x4, address: 0x60794C
static float sProjBounceTransBouncy; // size: 0x4, address: 0x607950
static float sProjFrictionBouncy; // size: 0x4, address: 0x607954
static float sProjVelMultiplierBouncy; // size: 0x4, address: 0x607958
static float sProjAirResist; // size: 0x4, address: 0x60795C
static float sProjBounce; // size: 0x4, address: 0x607960
static float sProjBounceTrans; // size: 0x4, address: 0x607964
static float sProjFriction; // size: 0x4, address: 0x607968
static float sProjLimbGrav; // size: 0x4, address: 0x60796C
static float sProjMaxAngAccel; // size: 0x4, address: 0x607970
static float sProjMaxAngVel; // size: 0x4, address: 0x607974
static float sProjLerpSpeed; // size: 0x4, address: 0x607978
static float sProjMinVel2; // size: 0x4, address: 0x60797C
static float sProjMinVelY; // size: 0x4, address: 0x607980
static float sProjCollideTimer; // size: 0x4, address: 0x0
static float sProjNPCGravity; // size: 0x4, address: 0x607984
static float sProjNPCHeight; // size: 0x4, address: 0x607988
static float sProjNPCRadius; // size: 0x4, address: 0x60798C
static float sProjThrowVelAngle; // size: 0x4, address: 0x607990
static float sProjDropVelMag; // size: 0x4, address: 0x607994
static float sProjDropVelAngle; // size: 0x4, address: 0x607998
static float sProjBoundResetSpeed; // size: 0x4, address: 0x60799C
static float sProjNPCFallThru; // size: 0x4, address: 0x6079A0
signed int staticFlags; // size: 0x4, address: 0x608E24
class xVec3 rootOffset[2][2]; // size: 0x30, address: 0x67F480
class xQuat rootQuat[2][2]; // size: 0x40, address: 0x67F4B0
// total size: 0xB4
struct /* @anon21 */ {} zNPC::human_throwable::__vtable; // size: 0xB4, address: 0x5FD920
// total size: 0x98
struct /* @anon20 */ {} zNPC::slow_approach::__vtable; // size: 0x98, address: 0x5FDBA0
// total size: 0x98
struct /* @anon23 */ {} zNPC::npc_move::__vtable; // size: 0x98, address: 0x5FF120
// total size: 0x7C
struct /* @anon25 */ {} zNPC::move::__vtable; // size: 0x7C, address: 0x0
// total size: 0x7C
struct /* @anon19 */ {} behavior_implementation<zNPC::common>::__vtable; // size: 0x7C, address: 0x5FD5A0
// total size: 0x78
struct /* @anon13 */ {} behavior::__vtable; // size: 0x78, address: 0x0
// total size: 0x98
struct /* @anon0 */ {} zNPC::chase::__vtable; // size: 0x98, address: 0x5FDCE0
// total size: 0x98
struct /* @anon5 */ {} zNPC::chase_base::__vtable; // size: 0x98, address: 0x0
// total size: 0x98
struct /* @anon15 */ {} zNPC::taunt::__vtable; // size: 0x98, address: 0x5FDE20
// total size: 0x98
struct /* @anon10 */ {} zNPC::on_edge::__vtable; // size: 0x98, address: 0x5FDEC0
// total size: 0x98
struct /* @anon8 */ {} zNPC::stuck::__vtable; // size: 0x98, address: 0x5FDF60
// total size: 0x98
struct /* @anon17 */ {} zNPC::npc_jump::__vtable; // size: 0x98, address: 0x5FE080
// total size: 0x7C
struct /* @anon14 */ {} zNPC::projectile::__vtable; // size: 0x7C, address: 0x5FDB20
// total size: 0x7C
struct /* @anon4 */ {} zNPC::take_damage::__vtable; // size: 0x7C, address: 0x5FD8A0
// total size: 0x7C
struct /* @anon3 */ {} zNPC::run_attack::__vtable; // size: 0x7C, address: 0x5FE000
// total size: 0x7C
struct /* @anon12 */ {} zNPC::carry::__vtable; // size: 0x7C, address: 0x5FDAA0
// total size: 0x98
struct /* @anon11 */ {} zNPC::defend::__vtable; // size: 0x98, address: 0x5FE380
// total size: 0x98
struct /* @anon16 */ {} zNPC::scramble::__vtable; // size: 0x98, address: 0x5FE120
// total size: 0x7C
struct /* @anon1 */ {} zNPC::busy::__vtable; // size: 0x7C, address: 0x5FE1C0
// total size: 0x98
struct /* @anon18 */ {} zNPC::patrol_movepoints::__vtable; // size: 0x98, address: 0x5FE240
// total size: 0x98
struct /* @anon9 */ {} zNPC::home::__vtable; // size: 0x98, address: 0x5FE2E0
// total size: 0xB4
struct /* @anon6 */ {} zNPC::melee::__vtable; // size: 0xB4, address: 0x5FD9E0
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x1D0B50
unsigned int is_throw_beginning(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x216040
unsigned int is_player_stopped(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x215FB0
unsigned int is_player_walking(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x215FD0
unsigned int throw_fierce_done(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2159E0
unsigned int is_throw_ending(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x215FF0
unsigned int throw_done(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x215CD0
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
unsigned char gCheatExtraShrapnel; // size: 0x1, address: 0x608FB0
unsigned char gCheatBouncyHenchmen; // size: 0x1, address: 0x608FAC
class zGlobals globals; // size: 0x640, address: 0x61C210
unsigned int anstarted(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x0
unsigned int anplayer_attackable_above(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B0B0
unsigned int anset_dance(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B010
unsigned int anplayer_hit(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B030
unsigned int anwait_cb(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B0E0
unsigned int anis_player_attackable(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B130
unsigned int andone_dance(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B100
void anrandom_chooser(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x21B300
unsigned int anland_cb(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B870
unsigned int annot_in_jump(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B8C0
unsigned int anpast_jump_apex(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21B900
class config default_config; // size: 0x4C, address: 0x6BA620
unsigned int anland_cb(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21BDB0
unsigned int annot_in_jump(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21BDE0
unsigned int anpast_jump_apex(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21BE20
unsigned int anset_anim_speed(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21CA00
unsigned int anis_player_detected(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21CA80
float SECS_PER_VBLANK; // size: 0x4, address: 0x608724
unsigned int anset_anim_speed(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21DB20
unsigned int anhas_arrived(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21DBA0
unsigned int anmove_to_defend(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x21DD40
// total size: 0x98
struct /* @anon2 */ {} zNPC::anim_chase::__vtable; // size: 0x98, address: 0x0
// total size: 0x98
struct /* @anon24 */ {} zNPC::double_chase::__vtable; // size: 0x98, address: 0x5FDC40
// total size: 0x98
struct /* @anon22 */ {} zNPC::back_away::__vtable; // size: 0x98, address: 0x5FDD80
// total size: 0x98
struct /* @anon7 */ {} zNPC::bot_jump::__vtable; // size: 0x98, address: 0x0
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
enum DeathType {
    eDeathType_Fade = 0,
    eDeathType_Explode = 1,
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
// total size: 0x0
class zAnimCacheEntry {};
// total size: 0x1C
class zAttackTableTransition {
    // Members
public:
    unsigned int sourceState; // offset 0x0, size 0x4
    unsigned int destinationState; // offset 0x4, size 0x4
    float sourceTime; // offset 0x8, size 0x4
    float throughTime; // offset 0xC, size 0x4
    float destinationTime; // offset 0x10, size 0x4
    float blendTime; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
};
// total size: 0x10
class xFXRibbon {
    // Members
public:
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
    class activity_data * act; // offset 0x8, size 0x4
    class config_type * cfg; // offset 0xC, size 0x4
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
// total size: 0x98
struct /* @anon0 */ {};
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
// total size: 0x7C
struct /* @anon1 */ {};
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
// total size: 0x48
class activity_data {
    // Members
public:
    class xFXRibbon * owner; // offset 0x0, size 0x4
    class activity_data * * position; // offset 0x4, size 0x4
    class tier_queue joints; // offset 0x8, size 0x30
    signed int curve_index; // offset 0x38, size 0x4
    float ilife; // offset 0x3C, size 0x4
    unsigned int mtime; // offset 0x40, size 0x4
    unsigned int mlife; // offset 0x44, size 0x4
};
// total size: 0x120
class projectile : public move {
    // Members
public:
    signed int flags; // offset 0x24, size 0x4
    signed int damageToDo; // offset 0x28, size 0x4
    float default_bound_offset; // offset 0x2C, size 0x4
    class xVec3 initial_velocity; // offset 0x30, size 0xC
    float bilinear[2]; // offset 0x3C, size 0x8
    class xVec3 vel; // offset 0x44, size 0xC
    class xVec3 centerPos; // offset 0x50, size 0xC
    class xVec3 centerVel; // offset 0x5C, size 0xC
    class xVec3 rotVec; // offset 0x68, size 0xC
    float angVel; // offset 0x74, size 0x4
    float koTimer; // offset 0x78, size 0x4
    float koTime; // offset 0x7C, size 0x4
    class xVec3 blendFromPos; // offset 0x80, size 0xC
    class xVec3 blendToPos; // offset 0x8C, size 0xC
    class xQuat blendFromOri; // offset 0xA0, size 0x10
    class xQuat blendToOri; // offset 0xB0, size 0x10
    float blendFactor; // offset 0xC0, size 0x4
    class zShrapnelAsset * deathFrag; // offset 0xC4, size 0x4
    class zShrapnelAsset * hitFrag; // offset 0xC8, size 0x4
    class xFXRibbon * ribbon; // offset 0xCC, size 0x4
    unsigned int waistBone; // offset 0xD0, size 0x4
    enum DeathType deathType; // offset 0xD4, size 0x4
    class xMat4x3 rootToDraw; // offset 0xE0, size 0x40
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
// total size: 0x4
class triangle {
    // Members
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
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
// total size: 0x28
class busy : public move {
    // Members
public:
    unsigned char enabled; // offset 0x24, size 0x1
    unsigned char can_be_busy; // offset 0x25, size 0x1
    unsigned char alert; // offset 0x26, size 0x1
    unsigned char play_wait; // offset 0x27, size 0x1
};
// total size: 0x34
class on_edge : public npc_move {};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x40
class npc_jump : public npc_move {
    // Members
public:
    unsigned char face_dir; // offset 0x34, size 0x1
    float dust_emit_remaining; // offset 0x38, size 0x4
    float dust_time; // offset 0x3C, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x0
class zKaboomMinigame {};
// total size: 0x1DC
class zCombat {
    // Members
public:
    class xHierarchyBound bounds; // offset 0x0, size 0x18
    unsigned int lastBoundUpdateTime; // offset 0x18, size 0x4
    signed short currentHitPoints; // offset 0x1C, size 0x2
    signed short maximumHitPoints; // offset 0x1E, size 0x2
    unsigned short stateTableSize; // offset 0x20, size 0x2
    class zAttackTableState * stateTable; // offset 0x24, size 0x4
    class xAnimState * animationState; // offset 0x28, size 0x4
    class zAttackTableState * runningAttack; // offset 0x2C, size 0x4
    float runningAttackTimer; // offset 0x30, size 0x4
    class zAttackStateRunTimeData runningAttackData; // offset 0x34, size 0x60
    class xEnt * lastNPCDamaged; // offset 0x94, size 0x4
    unsigned char disableMovement; // offset 0x98, size 0x1
    unsigned char runningEffect; // offset 0x99, size 0x1
    unsigned char runningBlur; // offset 0x9A, size 0x1
    unsigned char hitting; // offset 0x9B, size 0x1
    unsigned char hitEnv; // offset 0x9C, size 0x1
    unsigned char hitObjectCount; // offset 0x9D, size 0x1
    class xEnt * hitObjects[24]; // offset 0xA0, size 0x60
    signed short currentDamage; // offset 0x100, size 0x2
    signed short lastHitDamage; // offset 0x102, size 0x2
    enum zHitSource lastHitSource; // offset 0x104, size 0x4
    enum zHitTarget lastHitTarget; // offset 0x108, size 0x4
    class sphereInfo location[4]; // offset 0x10C, size 0x80
    signed int (* envCollisionCB)(class xEnt *, class xSweptSphere *, class xEnv *); // offset 0x18C, size 0x4
    class PunchEffect punchEffect; // offset 0x190, size 0x38
    unsigned int effectParam; // offset 0x1C8, size 0x4
    enum MoveState moveState; // offset 0x1CC, size 0x4
    class xVec3 moveStateVelocity; // offset 0x1D0, size 0xC
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
// total size: 0x98
struct /* @anon2 */ {};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x30
class ProcEffectData {
    // Members
public:
    class xVec3 oldPos; // offset 0x0, size 0xC
    class xVec3 oldVel; // offset 0xC, size 0xC
    class xVec3 currPos; // offset 0x18, size 0xC
    class xVec3 currVel; // offset 0x24, size 0xC
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
// total size: 0x18
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
class navigation_mesh {
    // Members
public:
    class navigation_mesh * asset; // offset 0x0, size 0x4
    unsigned char registered_objects; // offset 0x4, size 0x1
    class circle * circle_list; // offset 0x8, size 0x4
};
// total size: 0x48
class defend : public npc_move {
    // Members
public:
    unsigned char move_to_set; // offset 0x34, size 0x1
    unsigned char wait_count; // offset 0x35, size 0x1
    class xVec3 position; // offset 0x38, size 0xC
    float detect_radius; // offset 0x44, size 0x4
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
// total size: 0x7C
struct /* @anon3 */ {};
// total size: 0x7C
struct /* @anon4 */ {};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x98
struct /* @anon5 */ {};
// total size: 0x40
class run_attack : public move {
    // Members
public:
    unsigned char has_attacked; // offset 0x24, size 0x1
    unsigned char entered; // offset 0x25, size 0x1
    unsigned char dancing; // offset 0x26, size 0x1
    unsigned char player_above; // offset 0x27, size 0x1
    unsigned char player_attackable; // offset 0x28, size 0x1
    float current_wait_time; // offset 0x2C, size 0x4
    float wait_time; // offset 0x30, size 0x4
    float attack_radius; // offset 0x34, size 0x4
    float above_attack_radius; // offset 0x38, size 0x4
    float start_attack_delay; // offset 0x3C, size 0x4
};
// total size: 0x28
class mblur_data {
    // Members
public:
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
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
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
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
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
// total size: 0x114
class zAttackTableState {
    // Members
public:
    unsigned int state; // offset 0x0, size 0x4
    float moveDistanceZ; // offset 0x4, size 0x4
    float moveDistanceY; // offset 0x8, size 0x4
    float moveTime; // offset 0xC, size 0x4
    float attackStart; // offset 0x10, size 0x4
    float attackEnd; // offset 0x14, size 0x4
    float attackRadius; // offset 0x18, size 0x4
    class hitBoneInfo hitBone[4]; // offset 0x1C, size 0x50
    signed short damage; // offset 0x6C, size 0x2
    unsigned short source; // offset 0x6E, size 0x2
    unsigned short effect; // offset 0x70, size 0x2
    unsigned short hitEffect; // offset 0x72, size 0x2
    float effectStart; // offset 0x74, size 0x4
    float effectEnd; // offset 0x78, size 0x4
    class effectBone effectBoneOutside[2]; // offset 0x7C, size 0x10
    class effectBone effectBoneInside[2]; // offset 0x8C, size 0x10
    class zAnimCacheEntry * bonePositions[2]; // offset 0x9C, size 0x8
    float rumbleStartTime; // offset 0xA4, size 0x4
    unsigned int rumbleEmitterID; // offset 0xA8, size 0x4
    unsigned int shrapID; // offset 0xAC, size 0x4
    class zShrapnelAsset * shrapAsset; // offset 0xB0, size 0x4
    float shrapStartTime; // offset 0xB4, size 0x4
    float velocityUp; // offset 0xB8, size 0x4
    float velocityAway; // offset 0xBC, size 0x4
    unsigned int flags; // offset 0xC0, size 0x4
    float holdTime; // offset 0xC4, size 0x4
    float jumpBreakTime; // offset 0xC8, size 0x4
    float crouchBreakTime; // offset 0xCC, size 0x4
    float turnLockStart; // offset 0xD0, size 0x4
    float turnLockStop; // offset 0xD4, size 0x4
    float climaxTime; // offset 0xD8, size 0x4
    class xVec3 climaxOffset; // offset 0xDC, size 0xC
    float drainRate; // offset 0xE8, size 0x4
    float blurStart; // offset 0xEC, size 0x4
    float blurEnd; // offset 0xF0, size 0x4
    float blurLife; // offset 0xF4, size 0x4
    float blurAlpha; // offset 0xF8, size 0x4
    float blurFadeInTime; // offset 0xFC, size 0x4
    float blurFadeOutTime; // offset 0x100, size 0x4
    signed short flashAlpha; // offset 0x104, size 0x2
    float flashTime; // offset 0x108, size 0x4
    float comboBonus; // offset 0x10C, size 0x4
    signed short comboType; // offset 0x110, size 0x2
    signed short powerBonus; // offset 0x112, size 0x2
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0xD0
class zPlayerCarryInfo {
    // Members
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xEnt * throwTarget; // offset 0x8, size 0x4
    class xVec3 targetVelocity; // offset 0xC, size 0xC
    unsigned int lerpedIn; // offset 0x18, size 0x4
    class xMat4x3 spin; // offset 0x20, size 0x40
    class xQuat startQuat; // offset 0x60, size 0x10
    class xQuat endQuat; // offset 0x70, size 0x10
    unsigned char orientToPlayer; // offset 0x80, size 0x1
    class xVec3 physicsTranslation; // offset 0x84, size 0xC
    class xVec3 * currentTarget; // offset 0x90, size 0x4
    class xVec3 targetLastPosition; // offset 0x94, size 0xC
    unsigned char dontTarget; // offset 0xA0, size 0x1
    unsigned char lobAtMe; // offset 0xA1, size 0x1
    float targetRot; // offset 0xA4, size 0x4
    float startRot; // offset 0xA8, size 0x4
    unsigned int grabTarget; // offset 0xAC, size 0x4
    class xVec3 grabOffset; // offset 0xB0, size 0xC
    float grabLerpMin; // offset 0xBC, size 0x4
    float grabLerpMax; // offset 0xC0, size 0x4
    float grabLerpLast; // offset 0xC4, size 0x4
    unsigned int grabYclear; // offset 0xC8, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
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
// total size: 0x40
class zHangableAsset : public xDynAsset {
    // Members
public:
    unsigned int object; // offset 0x10, size 0x4
    class xVec3 pivot; // offset 0x14, size 0xC
    class xVec3 handle; // offset 0x20, size 0xC
    float onGravity; // offset 0x2C, size 0x4
    float offGravity; // offset 0x30, size 0x4
    float maxAngVel; // offset 0x34, size 0x4
    float minArcDegrees; // offset 0x38, size 0x4
    unsigned int hangFlags; // offset 0x3C, size 0x4
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
// total size: 0x14
class group_asset : public xDynAsset {
    // Members
public:
    signed int max_attackers; // offset 0x10, size 0x4
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
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x0
class zSlideCam {};
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
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x38
class bot_jump : public npc_move {
    // Members
public:
    class zShrapnelAsset * land_shrapnel; // offset 0x34, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0x3C
class slow_approach : public npc_move {
    // Members
public:
    float approach_radius; // offset 0x34, size 0x4
    float too_close_radius; // offset 0x38, size 0x4
};
enum GrabType {
    eGrabTypeMrIStanding = 0,
    eGrabTypeMrIGroundToss = 1,
    eGrabTypeElastigirl = 2,
    eGrabTypeCount = 3,
};
// total size: 0x70
class /* @class */ {
    // Members
public:
    unsigned char isActive; // offset 0x0, size 0x1
    class xModelInstance * modelInstance; // offset 0x4, size 0x4
    class zShrapnelAsset * shrapnelAsset; // offset 0x8, size 0x4
    signed int bone; // offset 0xC, size 0x4
    class xVec3 end; // offset 0x10, size 0xC
    class xVec3 start; // offset 0x1C, size 0xC
    class xMat4x3 mat; // offset 0x30, size 0x40
};
// total size: 0x0
class xFFX {};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x24
class carry : public behavior_implementation {
    // Members
public:
    unsigned char entered; // offset 0x10, size 0x1
    class xVec3 prevCenter; // offset 0x14, size 0xC
    class xEnt * throwTarget; // offset 0x20, size 0x4
};
// total size: 0x40
class home : public npc_move {
    // Members
public:
    unsigned char ran; // offset 0x34, size 0x1
    float inner_radius_2; // offset 0x38, size 0x4
    float outer_radius_2; // offset 0x3C, size 0x4
};
// total size: 0x14
class xHierarchyNode {
    // Members
public:
    class xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
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
// total size: 0x10
class zFootstepDetect {
    // Members
public:
    class xVec3 last_emit_position; // offset 0x0, size 0xC
    unsigned char was_lifted; // offset 0xC, size 0x1
};
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
// total size: 0x0
class xModelAssetParam {};
// total size: 0x90
class zHangableObject {
    // Members
public:
    class zHangable * hangable; // offset 0x0, size 0x4
    class xEnt * object; // offset 0x4, size 0x4
    float radius; // offset 0x8, size 0x4
    class xVec3 vel; // offset 0xC, size 0xC
    class xVec3 accel; // offset 0x18, size 0xC
    class xVec3 handle; // offset 0x24, size 0xC
    class xMat3x3 centerMat; // offset 0x30, size 0x30
    class xVec3 rotAxis; // offset 0x60, size 0xC
    class xVec3 lastDisp; // offset 0x6C, size 0xC
    class xVec3 objVel; // offset 0x78, size 0xC
};
// total size: 0x0
class zFrag {};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x1C
class tier_queue_allocator {
    // Members
public:
    class block_data * blocks; // offset 0x0, size 0x4
    unsigned int _unit_size; // offset 0x4, size 0x4
    unsigned int _block_size; // offset 0x8, size 0x4
    unsigned int _block_size_shift; // offset 0xC, size 0x4
    unsigned int _max_blocks; // offset 0x10, size 0x4
    unsigned int _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
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
// total size: 0x20
class config_type {
    // Members
public:
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
    signed int flags; // offset 0x10, size 0x4
    class curve_node * curve; // offset 0x14, size 0x4
    signed int curve_size; // offset 0x18, size 0x4
    class RwRaster * raster; // offset 0x1C, size 0x4
};
// total size: 0x18
class zFragAsset {
    // Members
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
// total size: 0x10
class behavior_implementation : public behavior {
    // Members
public:
    class common * owner; // offset 0xC, size 0x4
};
// total size: 0xB4
struct /* @anon6 */ {};
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x10
class zQuat {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x34
class npc_move : public move {
    // Members
public:
    class xVec3 last_destination; // offset 0x24, size 0xC
    float cos_min_move_angle; // offset 0x30, size 0x4
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
enum iSndGroupHandle {
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
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x60
class zAttackStateRunTimeData {
    // Members
public:
    class ProcEffectData bonePosVel[2]; // offset 0x0, size 0x60
};
// total size: 0x40
class back_away : public npc_move {
    // Members
public:
    unsigned char ran; // offset 0x34, size 0x1
    float too_close_radius; // offset 0x38, size 0x4
    float too_far_radius; // offset 0x3C, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum iSndHandle {
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
// total size: 0x700
class melee : public human_throwable {
    // Members
public:
    class home home_state; // offset 0x2C0, size 0x40
    class patrol_movepoints patrol_state; // offset 0x300, size 0x44
    class busy busy_state; // offset 0x344, size 0x28
    class scramble scramble_state; // offset 0x36C, size 0x3C
    class defend defend_state; // offset 0x3A8, size 0x48
    class carry carry_state; // offset 0x3F0, size 0x24
    class run_attack run_attack_state; // offset 0x414, size 0x40
    class take_damage take_damage_state; // offset 0x454, size 0x2C
    class projectile projectile_state; // offset 0x480, size 0x120
    class npc_jump npc_jump_state; // offset 0x5A0, size 0x40
    class stuck stuck_state; // offset 0x5E0, size 0x34
    class on_edge on_edge_state; // offset 0x614, size 0x34
    class taunt taunt_state; // offset 0x648, size 0x38
    class chase chase_state; // offset 0x680, size 0x3C
    class slow_approach slow_approach_state; // offset 0x6BC, size 0x3C
    class Weapon * weapon; // offset 0x6F8, size 0x4
};
// total size: 0xA10
class zCommonPlayer : public zPlayer {
    // Members
public:
    unsigned char has_picked_up_incredimeter; // offset 0x4E0, size 0x1
    unsigned char has_picked_up_health; // offset 0x4E1, size 0x1
    unsigned char has_grabbed_zipline; // offset 0x4E2, size 0x1
    class zTurret * turret; // offset 0x4E4, size 0x4
    class zKaboomMinigame * kaboomMinigame; // offset 0x4E8, size 0x4
    float upSpeed; // offset 0x4EC, size 0x4
    float upDist; // offset 0x4F0, size 0x4
    class xVec3 targUp; // offset 0x4F4, size 0xC
    class xVec3 currUp; // offset 0x500, size 0xC
    class xVec3 lastAxis; // offset 0x50C, size 0xC
    class xMat4x3 rootMat; // offset 0x520, size 0x40
    float stickFlickMinTimer; // offset 0x560, size 0x4
    float stickFlickMaxTimer; // offset 0x564, size 0x4
    float stickFlickAngle; // offset 0x568, size 0x4
    float stickFlickUnit[2]; // offset 0x56C, size 0x8
    float collisionMasterRadius; // offset 0x574, size 0x4
    class jump normal_jump; // offset 0x578, size 0x70
    class jump slide_jump; // offset 0x5E8, size 0x70
    class jump swing_jump; // offset 0x658, size 0x70
    float surfAccelWalk; // offset 0x6C8, size 0x4
    float surfAccelRun; // offset 0x6CC, size 0x4
    float surfDecelIdle; // offset 0x6D0, size 0x4
    float surfDecelSkid; // offset 0x6D4, size 0x4
    float surfSlickRatio; // offset 0x6D8, size 0x4
    float surfSlickTimer; // offset 0x6DC, size 0x4
    float surfPeakRatio; // offset 0x6E0, size 0x4
    float surfMaxSpeed; // offset 0x6E4, size 0x4
    float surfSlipTimer; // offset 0x6E8, size 0x4
    class effect * * damageRumbles; // offset 0x6EC, size 0x4
    class effect * * attackRumbles; // offset 0x6F0, size 0x4
    float dust_emit_time; // offset 0x6F4, size 0x4
    float dust_time; // offset 0x6F8, size 0x4
    float dust_emit_remaining; // offset 0x6FC, size 0x4
    float smoke_emit_increment; // offset 0x700, size 0x4
    float max_smoke_emit_time; // offset 0x704, size 0x4
    float smoke_emit_timer; // offset 0x708, size 0x4
    float smoke_emit_remaining; // offset 0x70C, size 0x4
    float smoke_offset; // offset 0x710, size 0x4
    class FootLockInfo leftFoot; // offset 0x714, size 0x1C
    class FootLockInfo rightFoot; // offset 0x730, size 0x1C
    class StepFX stepfx; // offset 0x74C, size 0x30
    class zAttackTableEntry * comboEntries; // offset 0x77C, size 0x4
    enum zAttackTableInput comboWorkingInput; // offset 0x780, size 0x4
    class zAttackTableEntry * comboWaitAnimation; // offset 0x784, size 0x4
    class zAttackTableTransition * comboTransitions; // offset 0x788, size 0x4
    class zAttackTableTransition * comboWaitTransition; // offset 0x78C, size 0x4
    class xAnimState * comboCurrentState; // offset 0x790, size 0x4
    float powerToTake; // offset 0x794, size 0x4
    signed short incrediPower; // offset 0x798, size 0x2
    unsigned short comboSectionStart; // offset 0x79A, size 0x2
    unsigned short comboSectionCount; // offset 0x79C, size 0x2
    unsigned short attackTableStateCount; // offset 0x79E, size 0x2
    class zAttackTableState * attackTableStates; // offset 0x7A0, size 0x4
    class zAttackTableSection * comboSections[8]; // offset 0x7A4, size 0x20
    signed int comboCount; // offset 0x7C4, size 0x4
    float hangTimer; // offset 0x7C8, size 0x4
    float last_dt; // offset 0x7CC, size 0x4
    float comboRunDelayTimer; // offset 0x7D0, size 0x4
    float jumpAttackDelayTimer; // offset 0x7D4, size 0x4
    enum HitType currentHitType; // offset 0x7D8, size 0x4
    class xVec3 damageVec; // offset 0x7DC, size 0xC
    float hitTimer; // offset 0x7E8, size 0x4
    signed int hitJuggleCount; // offset 0x7EC, size 0x4
    class MoveSupressParams move_supress; // offset 0x7F0, size 0x28
    class zInteraction * currAction; // offset 0x818, size 0x4
    float autoMoveSpeed; // offset 0x81C, size 0x4
    enum AutoMoveMode autoMoveMode; // offset 0x820, size 0x4
    float autoMoveDist; // offset 0x824, size 0x4
    class pointer_asset * autoMovePointer; // offset 0x828, size 0x4
    class xBase * autoMoveSender; // offset 0x82C, size 0x4
    float lockTurnTimer; // offset 0x830, size 0x4
    class xEnt * attackAimTarget; // offset 0x834, size 0x4
    float extraAttackVel; // offset 0x838, size 0x4
    float extraIdleTimer; // offset 0x83C, size 0x4
    float walkLerp; // offset 0x840, size 0x4
    signed short defaultMaxHitpoints; // offset 0x844, size 0x2
    unsigned char speed; // offset 0x846, size 0x1
    class xAnimState * triggeredAnims[4]; // offset 0x848, size 0x10
    unsigned char triggeredAnimIndex; // offset 0x858, size 0x1
    class xBase * triggeredAnimSender; // offset 0x85C, size 0x4
    unsigned int uCommonPlayerFlags; // offset 0x860, size 0x4
    class xMat4x3 playerAbsMat; // offset 0x870, size 0x40
    class xVec3 lastFloorNorm; // offset 0x8B0, size 0xC
    float maxVelmag; // offset 0x8BC, size 0x4
    float leanLerp; // offset 0x8C0, size 0x4
    float moveSpeedNormal[6]; // offset 0x8C4, size 0x18
    float moveSpeedJump[6]; // offset 0x8DC, size 0x18
    float moveSpeedCrouch[6]; // offset 0x8F4, size 0x18
    float moveSpeedCrouchJump[6]; // offset 0x90C, size 0x18
    float moveSpeedSwim[6]; // offset 0x924, size 0x18
    float moveSpeedSlideStop[6]; // offset 0x93C, size 0x18
    float moveSpeedSneak[6]; // offset 0x954, size 0x18
    float normalTurnFactor; // offset 0x96C, size 0x4
    float attackTurnFactor; // offset 0x970, size 0x4
    float crouchTurnFactor; // offset 0x974, size 0x4
    float swimTurnFactor; // offset 0x978, size 0x4
    float airTurnFactor; // offset 0x97C, size 0x4
    float stoppedTurnSpeedUp; // offset 0x980, size 0x4
    float animWalk[3]; // offset 0x984, size 0xC
    float animRun[3]; // offset 0x990, size 0xC
    float animCrouch[3]; // offset 0x99C, size 0xC
    float animSwim[3]; // offset 0x9A8, size 0xC
    unsigned int landHint; // offset 0x9B4, size 0x4
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        signed short incrediPower; // offset 0x0, size 0x2
    } checkpoint; // offset 0x9B8, size 0x2
    unsigned char shouldTurnToFace; // offset 0x9BA, size 0x1
    unsigned char allowTurnToFaceAbort; // offset 0x9BB, size 0x1
    float turnToFaceAngle; // offset 0x9BC, size 0x4
    float turnToFaceSpeed; // offset 0x9C0, size 0x4
    float lastMag; // offset 0x9C4, size 0x4
    float lastAngle; // offset 0x9C8, size 0x4
    float moveAcceleration; // offset 0x9CC, size 0x4
    float moveDeceleration; // offset 0x9D0, size 0x4
    float runTimer; // offset 0x9D4, size 0x4
    float minimumRunTime; // offset 0x9D8, size 0x4
    float turnInPlaceTimer; // offset 0x9DC, size 0x4
    float stickMagnitude; // offset 0x9E0, size 0x4
    float stickAngle; // offset 0x9E4, size 0x4
    float facingAngle; // offset 0x9E8, size 0x4
    unsigned char facingAngleValid; // offset 0x9EC, size 0x1
    unsigned char useThrowTarget; // offset 0x9ED, size 0x1
    class xVec3 throwTarget; // offset 0x9F0, size 0xC
    float skidStopDeceleration; // offset 0x9FC, size 0x4
    float skidStopDecelTime; // offset 0xA00, size 0x4
    float skidStopLerpTime; // offset 0xA04, size 0x4
};
// total size: 0x2C
class take_damage : public behavior_implementation {
    // Members
public:
    unsigned char hasBeenDamaged; // offset 0x10, size 0x1
    class xVec3 contact; // offset 0x14, size 0xC
    class xVec3 direction; // offset 0x20, size 0xC
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class zInteraction {};
// total size: 0x38
class taunt : public npc_move {
    // Members
public:
    unsigned char player_hit; // offset 0x34, size 0x1
};
// total size: 0x0
class zAssetPickupTable {};
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
// total size: 0x0
class effect {};
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x30
class xMovePoint : public xBase {
    // Members
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
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
enum HitType {
    eHitType_None = -1,
    eHitType_BackGround = 0,
    eHitType_FrontGround = 1,
    eHitType_BackAir = 2,
    eHitType_FrontAir = 3,
};
// total size: 0x3C
class scramble : public npc_move {
    // Members
public:
    unsigned char enabled; // offset 0x34, size 0x1
    unsigned char been_done; // offset 0x35, size 0x1
    unsigned char performed_action; // offset 0x36, size 0x1
    unsigned char play_anim; // offset 0x37, size 0x1
    class pointer_asset * pointer; // offset 0x38, size 0x4
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
// total size: 0xC
class behavior {
    // Members
public:
    class xEnt * owner; // offset 0x0, size 0x4
    unsigned int type; // offset 0x8, size 0x4
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
// total size: 0x0
class zCutsceneMgr {};
// total size: 0x3C
class chase_base : public npc_move {
    // Members
public:
    float detect_radius; // offset 0x34, size 0x4
    float chase_radius; // offset 0x38, size 0x4
};
// total size: 0x98
struct /* @anon7 */ {};
// total size: 0x0
class zDuplicator {};
// total size: 0x0
class anim_coll_data {};
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
// total size: 0x18
class group : public xBase {
    // Members
public:
    class group_asset * asset; // offset 0x10, size 0x4
    signed int attacking_count; // offset 0x14, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x0
class xSurface {};
// total size: 0x0
class xOneLinerManager {};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x18
class xHierarchyBound {
    // Members
public:
    class xSphere master; // offset 0x0, size 0x10
    class xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
};
// total size: 0x44
class double_chase : public chase {
    // Members
public:
    float detect_radius2; // offset 0x3C, size 0x4
    float chase_radius2; // offset 0x40, size 0x4
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x20
class sphereInfo {
    // Members
public:
    class xSphere sphere; // offset 0x0, size 0x10
    class xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x44
class patrol_movepoints : public npc_move {
    // Members
public:
    unsigned char alert; // offset 0x34, size 0x1
    unsigned char can_patrol; // offset 0x35, size 0x1
    unsigned char stop_on_detect; // offset 0x36, size 0x1
    float delay; // offset 0x38, size 0x4
    class xMarkerAsset * marker; // offset 0x3C, size 0x4
    class xMovePoint * movepoint; // offset 0x40, size 0x4
};
// total size: 0xC
class xMarkerAsset {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
enum ZipLineState {
    ZIPLINE_NONE = 0,
    ZIPLINE_INITIAL = 1,
    ZIPLINE_GRABBING = 2,
    ZIPLINE_MOVING = 3,
    ZIPLINE_EXITING = 4,
    ZIPLINE_INIT_DEATH = 5,
    ZIPLINE_DEATH = 6,
};
// total size: 0x98
struct /* @anon8 */ {};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x1090
class zMrIncrediblePlayer : public zCommonPlayer {
    // Members
public:
    signed int lastSlickness; // offset 0xA10, size 0x4
    float minVelmag; // offset 0xA14, size 0x4
    float surfDamping; // offset 0xA18, size 0x4
    signed int surfSlickness; // offset 0xA1C, size 0x4
    float surfFriction; // offset 0xA20, size 0x4
    unsigned int surfSticky; // offset 0xA24, size 0x4
    enum iSndGroupHandle hGroupSwimSplash; // offset 0xA28, size 0x4
    enum iSndGroupHandle hGroupSwimSplashBig; // offset 0xA2C, size 0x4
    enum iSndGroupHandle hGroupSwimExit; // offset 0xA30, size 0x4
    enum iSndGroupHandle hGroupSwimAround; // offset 0xA34, size 0x4
    enum iSndGroupHandle hGroupSwimIdle; // offset 0xA38, size 0x4
    enum iSndHandle hSwimAround; // offset 0xA3C, size 0x4
    enum iSndHandle hSwimIdle; // offset 0xA40, size 0x4
    enum iSndGroupHandle pickupSmall; // offset 0xA44, size 0x4
    enum iSndGroupHandle throwSmall; // offset 0xA48, size 0x4
    enum iSndGroupHandle pickupMed; // offset 0xA4C, size 0x4
    enum iSndGroupHandle throwMed; // offset 0xA50, size 0x4
    enum iSndGroupHandle pickupLarge; // offset 0xA54, size 0x4
    enum iSndGroupHandle throwLarge; // offset 0xA58, size 0x4
    class LedgeGrabParams ledge; // offset 0xA5C, size 0x3C
    class xEnt * ledge_grab_entity; // offset 0xA98, size 0x4
    unsigned int crouchMove; // offset 0xA9C, size 0x4
    float crouchDRot; // offset 0xAA0, size 0x4
    class jump crouch_jump; // offset 0xAA4, size 0x70
    float lerpVel; // offset 0xB14, size 0x4
    float ledge_dirt_wait_time; // offset 0xB18, size 0x4
    float ledge_dirt_wait; // offset 0xB1C, size 0x4
    float ledge_dirt_time; // offset 0xB20, size 0x4
    float ledge_dirt_drop_time; // offset 0xB24, size 0x4
    float ledge_dirt_emit_remaining1; // offset 0xB28, size 0x4
    float ledge_dirt_emit_remaining2; // offset 0xB2C, size 0x4
    float ledge_dirt_offset; // offset 0xB30, size 0x4
    unsigned int * atomics_order; // offset 0xB34, size 0x4
    unsigned int atomics_count; // offset 0xB38, size 0x4
    float grab_emit_remaining; // offset 0xB3C, size 0x4
    float grab_dust_time; // offset 0xB40, size 0x4
    float total_grab_dust_time; // offset 0xB44, size 0x4
    float zipline_emit_remaining; // offset 0xB48, size 0x4
    unsigned char swimming; // offset 0xB4C, size 0x1
    unsigned char cameraInSwimMode; // offset 0xB4D, size 0x1
    unsigned char has_grabbed_ledge; // offset 0xB4E, size 0x1
    float swimLevel; // offset 0xB50, size 0x4
    signed int swimWalkEnterSplashType; // offset 0xB54, size 0x4
    signed int swimFallEnterSplashType; // offset 0xB58, size 0x4
    signed int swimSplashType; // offset 0xB5C, size 0x4
    float delayBeforeWalkingDiveSplash; // offset 0xB60, size 0x4
    class jump swim_jump; // offset 0xB64, size 0x70
    enum SwimExitState swimExitState; // offset 0xBD4, size 0x4
    unsigned char swimExitFeedback; // offset 0xBD8, size 0x1
    class xVec3 swimExitFeedbackDisp; // offset 0xBDC, size 0xC
    class xVec3 swimExitGrabPos; // offset 0xBE8, size 0xC
    float swimExitStartAdjust; // offset 0xBF4, size 0x4
    float swimExitLastAdjust; // offset 0xBF8, size 0x4
    float swimExitTime; // offset 0xBFC, size 0x4
    class xVec3 bone_adjust; // offset 0xC00, size 0xC
    unsigned char crouchRolling; // offset 0xC0C, size 0x1
    unsigned char crouchRunning; // offset 0xC0D, size 0x1
    unsigned char dodgeBlurring; // offset 0xC0E, size 0x1
    float crouchRollVelocity; // offset 0xC10, size 0x4
    float crouchRunVelocity; // offset 0xC14, size 0x4
    class zPlayerCarryInfo carry; // offset 0xC20, size 0xD0
    class xEnt * grabFound; // offset 0xCF0, size 0x4
    class xEnt * tossObject; // offset 0xCF4, size 0x4
    unsigned char grabFailed; // offset 0xCF8, size 0x1
    unsigned char grabUnconscious; // offset 0xCF9, size 0x1
    unsigned char grabHolding; // offset 0xCFA, size 0x1
    signed int grabMrIBone; // offset 0xCFC, size 0x4
    class xVec3 grabMrIOffset; // offset 0xD00, size 0xC
    class xVec3 grabTransPerSec; // offset 0xD0C, size 0xC
    float grabRotPerSec; // offset 0xD18, size 0x4
    signed int grabNPCBone; // offset 0xD1C, size 0x4
    class xVec3 grabNPCOffset; // offset 0xD20, size 0xC
    class zShrapnelAsset * grabBadGuyShrap; // offset 0xD2C, size 0x4
    enum ZipLineState zipLineState; // offset 0xD30, size 0x4
    class zZipLine * zipLine; // offset 0xD34, size 0x4
    float zipLineAnimationOffset; // offset 0xD38, size 0x4
    class zZipLineCam * zipLineCam; // offset 0xD3C, size 0x4
    class xVec3 prev_at; // offset 0xD40, size 0xC
    class xVec3 prev_bi_normal; // offset 0xD4C, size 0xC
    float x_lean; // offset 0xD58, size 0x4
    float y_lean; // offset 0xD5C, size 0x4
    float last_sign; // offset 0xD60, size 0x4
    class zip_data zip; // offset 0xD64, size 0x6C
    class zHangableObject * lastHang; // offset 0xDD0, size 0x4
    float lastHangTimer; // offset 0xDD4, size 0x4
    class zHangableObject * hangObj; // offset 0xDD8, size 0x4
    class xMat3x3 hangObjMat; // offset 0xDE0, size 0x30
    float hangBlendSpeed; // offset 0xE10, size 0x4
    float hangBlendPercent; // offset 0xE14, size 0x4
    class xVec3 hangInitPos; // offset 0xE18, size 0xC
    float hangInitYaw; // offset 0xE24, size 0x4
    float hangChangeYaw; // offset 0xE28, size 0x4
    class zCamSwing swingCam; // offset 0xE30, size 0x180
    signed int groundThrowDamage; // offset 0xFB0, size 0x4
    signed int lightThrowDamage; // offset 0xFB4, size 0x4
    signed int fierceThrowDamage; // offset 0xFB8, size 0x4
    float swimRingsEmitted; // offset 0xFBC, size 0x4
    float swimPlumesEmitted1; // offset 0xFC0, size 0x4
    float swimPlumesEmitted2; // offset 0xFC4, size 0x4
    float splashTimerLeft; // offset 0xFC8, size 0x4
    float splashBonePosLeftZ0; // offset 0xFCC, size 0x4
    float splashBonePosLeftZ1; // offset 0xFD0, size 0x4
    float splashBonePosLeftZ2; // offset 0xFD4, size 0x4
    float splashTimerRight; // offset 0xFD8, size 0x4
    float splashBonePosRightZ0; // offset 0xFDC, size 0x4
    float splashBonePosRightZ1; // offset 0xFE0, size 0x4
    float splashBonePosRightZ2; // offset 0xFE4, size 0x4
    float outOfWaterTimer; // offset 0xFE8, size 0x4
    float outOfWaterStartTime; // offset 0xFEC, size 0x4
    float outOfWaterPlumesEmitted1; // offset 0xFF0, size 0x4
    float outOfWaterPlumesEmitted2; // offset 0xFF4, size 0x4
    float outOfWaterPlumesEmitted3; // offset 0xFF8, size 0x4
    float outOfWaterPlumesEmitted4; // offset 0xFFC, size 0x4
    float outOfWaterPlumesEmitted5; // offset 0x1000, size 0x4
    float outOfWaterPlumesEmitted6; // offset 0x1004, size 0x4
    class SwimEmitter swimEmitter; // offset 0x1008, size 0x40
    class SwimEmitter outOfWaterEmitter; // offset 0x1048, size 0x40
    signed int left_hand_bone_index; // offset 0x1088, size 0x4
    class xEnt * npc_to_grab; // offset 0x108C, size 0x4
};
// total size: 0x2C0
class human_throwable : public common {};
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x18
class zHangable : public xBase {
    // Members
public:
    class zHangableAsset * hangableAsset; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0x0
class zDecalEmitterList {};
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
// total size: 0x3C
class chase : public chase_base {};
// total size: 0x28
class xMovePointAsset : public xBaseAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
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
enum SwimExitState {
    SES_NONE = 0,
    SES_WANT_REACH = 1,
    SES_REACHING = 2,
    SES_PULLING = 3,
    SES_PULL_DONE = 4,
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
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x0
class xModelAssetInfo {};
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x10
class navigation_mesh : public xBaseAsset {
    // Members
public:
    signed int num_sub_meshes; // offset 0x8, size 0x4
    class sub_mesh * sub_meshes; // offset 0xC, size 0x4
};
// total size: 0x40
class anim_chase : public chase {
    // Members
public:
    unsigned char go; // offset 0x3C, size 0x1
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
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x8
class effectBone {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 * pos; // offset 0x4, size 0x4
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
// total size: 0x1C
class zAttackTableEntry {
    // Members
public:
    unsigned int animationStateID; // offset 0x0, size 0x4
    class xAnimState * animationState; // offset 0x4, size 0x4
    unsigned short animationStart; // offset 0x8, size 0x2
    unsigned short animationCount; // offset 0xA, size 0x2
    unsigned short start; // offset 0xC, size 0x2
    unsigned short count; // offset 0xE, size 0x2
    unsigned short onFlags; // offset 0x10, size 0x2
    unsigned short offFlags; // offset 0x12, size 0x2
    unsigned char input; // offset 0x14, size 0x1
    unsigned char power; // offset 0x15, size 0x1
    unsigned char pad0; // offset 0x16, size 0x1
    unsigned char pad1; // offset 0x17, size 0x1
    float startTime; // offset 0x18, size 0x4
};
// total size: 0x0
class activity_data {};
// total size: 0x98
struct /* @anon9 */ {};
// total size: 0x98
struct /* @anon10 */ {};
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
// total size: 0x98
struct /* @anon11 */ {};
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
// total size: 0x7C
struct /* @anon12 */ {};
// total size: 0x28
class MoveSupressParams {
    // Members
public:
    class Point points[3]; // offset 0x0, size 0x18
    unsigned char pointsInitialized[3]; // offset 0x18, size 0x3
    unsigned char verified_init; // offset 0x1B, size 0x1
    unsigned int num_segments; // offset 0x1C, size 0x4
    float cur_time; // offset 0x20, size 0x4
    float cur_supression; // offset 0x24, size 0x4
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
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
// total size: 0x78
struct /* @anon13 */ {};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
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
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
enum ZipLineSwitchType {
    SWITCH_LEFT = 0,
    SWITCH_RIGHT = 1,
    SWITCH_NONE = 2,
};
// total size: 0x7C
struct /* @anon14 */ {};
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
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
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
// total size: 0x8
class Point {
    // Members
public:
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class block_data {
    // Members
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
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
// total size: 0x98
struct /* @anon15 */ {};
// total size: 0x0
class zTurret {};
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
// total size: 0x98
struct /* @anon16 */ {};
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x98
struct /* @anon17 */ {};
// total size: 0x8
class zAttackTableSection {
    // Members
public:
    unsigned int section; // offset 0x0, size 0x4
    unsigned short start; // offset 0x4, size 0x2
    unsigned short count; // offset 0x6, size 0x2
};
// total size: 0x0
class zZipLine {};
// total size: 0x14
class hitBoneInfo {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 boneOffset; // offset 0x4, size 0xC
    signed short atomic; // offset 0x10, size 0x2
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
// total size: 0x98
struct /* @anon18 */ {};
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
// total size: 0x34
class stuck : public npc_move {};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
// total size: 0x0
class zZipLineCam {};
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x0
class Incredimeter {};
// total size: 0xC
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
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
// total size: 0x0
class friendly {};
// total size: 0x7C
struct /* @anon19 */ {};
// total size: 0x40
class SwimEmitter {
    // Members
public:
    float emit_time; // offset 0x0, size 0x4
    float emit_end; // offset 0x4, size 0x4
    float emitted; // offset 0x8, size 0x4
    float rate; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
    float vel_min; // offset 0x14, size 0x4
    float vel_delta; // offset 0x18, size 0x4
    float vel_angle; // offset 0x1C, size 0x4
    float size_min; // offset 0x20, size 0x4
    float size_delta; // offset 0x24, size 0x4
    float size_scale; // offset 0x28, size 0x4
    float age_rate_min; // offset 0x2C, size 0x4
    float age_rate_delta; // offset 0x30, size 0x4
    float y_accel; // offset 0x34, size 0x4
    class xColor_tag color; // offset 0x38, size 0x4
    float age_rate; // offset 0x3C, size 0x4
};
// total size: 0x0
class BossMeter {};
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
    eFragCount = 11,
    eFragForceSize = 2147483647,
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
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum LedgeState {
    LedgeState_None = 0,
    LedgeState_JumpInterp = 1,
    LedgeState_Grab = 2,
    LedgeState_Idle = 3,
    LedgeState_Left = 4,
    LedgeState_Right = 5,
    LedgeState_NPCGrab = 6,
    LedgeState_Count = 7,
    LedgeState_ForceSize = 2147483647,
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
// total size: 0x38
class PunchEffect {
    // Members
public:
    class xFXRibbon * up[2]; // offset 0x0, size 0x8
    class xFXRibbon * right[2]; // offset 0x8, size 0x8
    float lastTime; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float distance[2]; // offset 0x18, size 0x8
    class xVec3 averageWidth[2]; // offset 0x20, size 0x18
};
// total size: 0x98
struct /* @anon20 */ {};
// total size: 0x10
class zCamSwingPrefs {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitchCorrect; // offset 0x8, size 0x4
    float targetHeight; // offset 0xC, size 0x4
};
// total size: 0x0
class xSpline3 {};
// total size: 0x10
class zFootstepsData {
    // Members
public:
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
};
// total size: 0xB4
struct /* @anon21 */ {};
// total size: 0x0
class FamilyMeter {};
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
// total size: 0x6C
class zip_data {
    // Members
public:
    unsigned char is_hit; // offset 0x0, size 0x1
    unsigned char env_damage; // offset 0x1, size 0x1
    unsigned char dismount_when_hit; // offset 0x2, size 0x1
    class NURBS * spline; // offset 0x4, size 0x4
    class xEnt * entity; // offset 0x8, size 0x4
    class friendly * buddy; // offset 0xC, size 0x4
    enum /* @enum */ {
        FORWARD = 0,
        BACKWARD = 1,
    } direction; // offset 0x10, size 0x4
    class xVec3 position; // offset 0x14, size 0xC
    class xVec3 forward; // offset 0x20, size 0xC
    class xVec3 switch_offset; // offset 0x2C, size 0xC
    enum ZipLineSwitchType switch_type; // offset 0x38, size 0x4
    enum ZipLineSwitchType switching; // offset 0x3C, size 0x4
    float offset; // offset 0x40, size 0x4
    signed int swing_side; // offset 0x44, size 0x4
    float swing_begin; // offset 0x48, size 0x4
    float swing_time; // offset 0x4C, size 0x4
    float swing; // offset 0x50, size 0x4
    float u; // offset 0x54, size 0x4
    float lean; // offset 0x58, size 0x4
    float lean_center; // offset 0x5C, size 0x4
    float vel; // offset 0x60, size 0x4
    float accel; // offset 0x64, size 0x4
    float timer; // offset 0x68, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x130
class Weapon : public behavior_implementation {
    // Members
public:
    unsigned char isEnabled; // offset 0x10, size 0x1
    unsigned char isExclusive; // offset 0x11, size 0x1
    unsigned char isWeaponAttached; // offset 0x12, size 0x1
    unsigned char hasUpdated; // offset 0x13, size 0x1
    signed int numWeapon; // offset 0x14, size 0x4
    float emit_remaining; // offset 0x18, size 0x4
    float emit_remaining_glow; // offset 0x1C, size 0x4
    float offset; // offset 0x20, size 0x4
    class xAnimFile * animCurrent; // offset 0x24, size 0x4
    class xAnimTable * table; // offset 0x28, size 0x4
    unsigned char hasBeenSeen; // offset 0x2C, size 0x1
    unsigned char glow_r; // offset 0x2D, size 0x1
    unsigned char glow_g; // offset 0x2E, size 0x1
    unsigned char glow_b; // offset 0x2F, size 0x1
    class projectile * projectile_state; // offset 0x30, size 0x4
    // total size: 0x70
    class /* @class */ {
        // Members
    public:
        unsigned char isActive; // offset 0x0, size 0x1
        class xModelInstance * modelInstance; // offset 0x4, size 0x4
        class zShrapnelAsset * shrapnelAsset; // offset 0x8, size 0x4
        signed int bone; // offset 0xC, size 0x4
        class xVec3 end; // offset 0x10, size 0xC
        class xVec3 start; // offset 0x1C, size 0xC
        class xMat4x3 mat; // offset 0x30, size 0x40
    } weaponInstance[2]; // offset 0x40, size 0xE0
    unsigned char electricity_enabled; // offset 0x120, size 0x1
    float time; // offset 0x124, size 0x4
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
// total size: 0x30
class tier_queue {
    // Members
public:
    unsigned int first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[32]; // offset 0x10, size 0x20
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
// total size: 0x0
class xGrid {};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x1
class RyzMemData {};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x0
class rxReq {};
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
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x1C
class FootLockInfo {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    signed int bone; // offset 0xC, size 0x4
    class xVec3 lockPos; // offset 0x10, size 0xC
};
// total size: 0x0
class zGrapplePoint {};
enum MoveState {
    MS_NONE = 0,
    MS_HOLD = 1,
    MS_SETVEL = 2,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum /* @enum */ {
    FORWARD = 0,
    BACKWARD = 1,
};
// total size: 0x98
struct /* @anon22 */ {};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
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
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x180
class zCamSwing : public xCam {
    // Members
public:
    signed int camSwingFlags; // offset 0xD0, size 0x4
    float prefFactor; // offset 0xD4, size 0x4
    float yawSpeed; // offset 0xD8, size 0x4
    float unlockedLag; // offset 0xDC, size 0x4
    class zCamSwingPrefs pref[3]; // offset 0xE0, size 0x30
    float distOffset; // offset 0x110, size 0x4
    float distSpeed; // offset 0x114, size 0x4
    float heightOffset; // offset 0x118, size 0x4
    float heightSpeed; // offset 0x11C, size 0x4
    float lockFactorSpeed; // offset 0x120, size 0x4
    float unlockFactorSpeed; // offset 0x124, size 0x4
    class xCamSupportLOSBar losbar; // offset 0x128, size 0x50
};
// total size: 0x98
struct /* @anon23 */ {};
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
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
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
// total size: 0x98
struct /* @anon24 */ {};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    signed short incrediPower; // offset 0x0, size 0x2
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
// total size: 0x3C
class LedgeGrabParams {
    // Members
public:
    enum LedgeState state; // offset 0x0, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
        unsigned char allowedToMove : 1; // offset 0x0, size 0x1
        unsigned char tryingLeft : 1; // offset 0x0, size 0x1
        unsigned char tryingRight : 1; // offset 0x0, size 0x1
        unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
        unsigned int pad : 27; // offset 0x0, size 0x4
    } flags; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    class xVec3 playerToLedge; // offset 0xC, size 0xC
    class xVec3 player_bound_pos; // offset 0x18, size 0xC
    class xVec3 grab_position; // offset 0x24, size 0xC
    class xVec3 flipUpTrans; // offset 0x30, size 0xC
};
// total size: 0x30
class StepFX {
    // Members
public:
    class zSurfAssetIN * currentSurface; // offset 0x0, size 0x4
    class zSurfAssetIN * lastSurface; // offset 0x4, size 0x4
    float lastSurfaceTime; // offset 0x8, size 0x4
    class zFootstepDetect footsteps[2]; // offset 0xC, size 0x20
    class zDecalEmitterList * decals; // offset 0x2C, size 0x4
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x7C
struct /* @anon25 */ {};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned char inLedgeAnim : 1; // offset 0x0, size 0x1
    unsigned char allowedToMove : 1; // offset 0x0, size 0x1
    unsigned char tryingLeft : 1; // offset 0x0, size 0x1
    unsigned char tryingRight : 1; // offset 0x0, size 0x1
    unsigned char foundValidLedge : 1; // offset 0x0, size 0x1
    unsigned int pad : 27; // offset 0x0, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
enum zAttackTableInput {
    zATI_NONE = 0,
    zATI_TAP1 = 1,
    zATI_TAP2 = 2,
    zATI_TAP3 = 3,
    zATI_TAP4 = 4,
    zATI_REL1 = 5,
    zATI_REL2 = 6,
    zATI_REL3 = 7,
    zATI_REL4 = 8,
    zATI_NOPOWER = 9,
    zATI_ADEF = 10,
    zATI_COUNT = 11,
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214740 -> 0x0021474C
*/
// Range: 0x214740 -> 0x21474C
unsigned int get_throw_anim_code() {
    /* anonymous block */ {
        // Range: 0x214740 -> 0x21474C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214750 -> 0x00214810
*/
// Range: 0x214750 -> 0x214810
// this: r16
void human_throwable::scene_setup() {
    /* anonymous block */ {
        // Range: 0x214750 -> 0x214810
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214810 -> 0x0021484C
*/
// Range: 0x214810 -> 0x21484C
// this: r16
void melee::setup() {
    /* anonymous block */ {
        // Range: 0x214810 -> 0x21484C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214850 -> 0x00214934
*/
// Range: 0x214850 -> 0x214934
// this: r2
unsigned char melee::system_event(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int to_event /* r2 */, float * to_param /* r2 */, class xBase * to_param_widget /* r2 */, unsigned int to_param_widget_id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x214850 -> 0x214934
        class zCombatDamageInfo * info; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214940 -> 0x002149A4
*/
// Range: 0x214940 -> 0x2149A4
// this: r2
void melee::update_npc(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x214940 -> 0x2149A4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002149B0 -> 0x00214C98
*/
// Range: 0x2149B0 -> 0x214C98
// this: r16
melee::melee() {
    /* anonymous block */ {
        // Range: 0x2149B0 -> 0x214C98
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214CA0 -> 0x00214FC0
*/
// Range: 0x214CA0 -> 0x214FC0
// this: r17
unsigned char carry::system_event(unsigned int toEvent /* r2 */, class xBase * toParamWidget /* r16 */) {
    /* anonymous block */ {
        // Range: 0x214CA0 -> 0x214FC0
        unsigned char use_bullet_time; // r29+0xBF
        unsigned char use_bullet_cam; // r29+0xBE
        class zMrIncrediblePlayer * player; // r2
        class xVec3 hitVel; // r29+0xB0
        class common * npc; // r2
        class carry * bhvr; // r2
        float atVel; // r21
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214FC0 -> 0x002153E4
*/
// Range: 0x214FC0 -> 0x2153E4
// this: r17
void carry::update() {
    /* anonymous block */ {
        // Range: 0x214FC0 -> 0x2153E4
        class zCombat * combat; // r2
        class zAttackTableState * attack; // r2
        class xVec3 currCenter; // r29+0x160
        signed int bone; // r2
        class xSweptSphere sws; // r29+0x70
        signed int rc; // r2
        class xVec3 hitVel; // r29+0x150
        signed int powerMult; // r2
        class xVec3 currCenter; // r29+0x140
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002153F0 -> 0x0021540C
*/
// Range: 0x2153F0 -> 0x21540C
// this: r2
void carry::exit_state() {
    /* anonymous block */ {
        // Range: 0x2153F0 -> 0x21540C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215420 -> 0x00215520
*/
// Range: 0x215420 -> 0x215520
// this: r16
void carry::enter_state() {
    /* anonymous block */ {
        // Range: 0x215420 -> 0x215520
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215520 -> 0x00215550
*/
// Range: 0x215520 -> 0x215550
// this: r2
unsigned char carry::runnable() {
    /* anonymous block */ {
        // Range: 0x215520 -> 0x215550
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215550 -> 0x002157F4
*/
// Range: 0x215550 -> 0x2157F4
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x215550 -> 0x2157F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215800 -> 0x002159E0
*/
// Range: 0x215800 -> 0x2159E0
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x215800 -> 0x2159E0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002159E0 -> 0x00215CCC
*/
// Range: 0x2159E0 -> 0x215CCC
unsigned int throw_fierce_done(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2159E0 -> 0x215CCC
        class zMrIncrediblePlayer * player; // r2
        class common * npc; // r20
        class projectile * proj; // r19
        class carry * bhvr; // r18
        float angle; // r20
        class xVec3 hitVel; // r29+0xD0
        float throwVelMag; // r29+0xE0
        float atVel; // r20
        class zAttackTableState * attack; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215CD0 -> 0x00215FAC
*/
// Range: 0x215CD0 -> 0x215FAC
unsigned int throw_done(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x215CD0 -> 0x215FAC
        class zMrIncrediblePlayer * player; // r2
        class common * npc; // r20
        class projectile * proj; // r21
        class carry * bhvr; // r19
        float angle; // r20
        class xVec3 hitVel; // r29+0xD0
        float throwVelMag; // r29+0xE0
        float atVel; // r20
        signed int powerMult; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215FB0 -> 0x00215FC8
*/
// Range: 0x215FB0 -> 0x215FC8
unsigned int is_player_stopped() {
    /* anonymous block */ {
        // Range: 0x215FB0 -> 0x215FC8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215FD0 -> 0x00215FE4
*/
// Range: 0x215FD0 -> 0x215FE4
unsigned int is_player_walking() {
    /* anonymous block */ {
        // Range: 0x215FD0 -> 0x215FE4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00215FF0 -> 0x0021603C
*/
// Range: 0x215FF0 -> 0x21603C
unsigned int is_throw_ending() {
    /* anonymous block */ {
        // Range: 0x215FF0 -> 0x21603C
        class zCommonPlayer * player; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216040 -> 0x0021608C
*/
// Range: 0x216040 -> 0x21608C
unsigned int is_throw_beginning() {
    /* anonymous block */ {
        // Range: 0x216040 -> 0x21608C
        class zCommonPlayer * player; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00216090 -> 0x002165B4
*/
// Range: 0x216090 -> 0x2165B4
// this: r29+0xEC
void projectile::setup() {
    /* anonymous block */ {
        // Range: 0x216090 -> 0x2165B4
        char * shrapnelName; // r29+0x8A8
        unsigned char explode; // r29+0x8AF
        class xAnimState * astate; // r2
        signed int i; // r29+0xD0
        signed int j; // r20
        float lerps[2]; // r29+0x898
        class xVec3 tranArray[64]; // r29+0x560
        class xQuat quatArray[64]; // r29+0x160
        char * pointer_name; // r29+0x8A4
        unsigned int pointer_id; // r2
        class pointer_asset * pointer; // r16
        class xMat3x3 mat; // r29+0x130
        float speed; // r29+0x8A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002165C0 -> 0x00217D5C
*/
// Range: 0x2165C0 -> 0x217D5C
// this: r17
void projectile::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2165C0 -> 0x217D5C
        class xSweptSphere sws; // r29+0x1B0
        float diff; // r4
        float percent; // r21
        class xModelInstance * it; // r6
        class xQuat ori; // r29+0x1A0
        class xMat4x3 boneInWorld; // r29+0x160
        float timeLeft; // r27
        signed int numIter; // r16
        signed int rc; // r2
        class xVec3 pos[2]; // r29+0x140
        unsigned int previousFlags; // r29+0xCC
        unsigned char npcInvisibleCollisionHack; // r2
        float normComp; // r26
        float transferComp; // r25
        signed int isNPC; // r23
        class xBase * basePtr; // r18
        class xVec3 hitVel; // r29+0x2A0
        signed int damage; // r2
        signed int powerMult; // r2
        float newParComp; // r1
        float speedAwaySquared; // r29+0x2B0
        class xMat3x3 rot; // r29+0x110
        float len; // r29+0x2B0
        class xVec3 cross; // r29+0x290
        float ang; // r21
        float maxAngVel; // r29+0x2B0
        float minAngVel; // r29+0x2B0
        float maxAng; // r29+0x2B0
        float lerpDiff; // r1
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217D60 -> 0x00217DCC
*/
// Range: 0x217D60 -> 0x217DCC
// this: r2
unsigned char projectile::grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x217D60 -> 0x217DCC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217DD0 -> 0x00217F04
*/
// Range: 0x217DD0 -> 0x217F04
// this: r16
unsigned char projectile::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x217DD0 -> 0x217F04
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00217F10 -> 0x002184F0
*/
// Range: 0x217F10 -> 0x2184F0
// this: r18
void projectile::set_state_landing(class xVec3 & world_contact_pos /* r17 */) {
    /* anonymous block */ {
        // Range: 0x217F10 -> 0x2184F0
        signed int submesh; // r29+0x7C
        signed int triangle; // r29+0x78
        class navigation_mesh * mesh; // r2
        unsigned char flipYaw; // r16
        float atY; // r29+0x80
        float rightY; // r29+0x80
        class xMat3x3 newMat; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002184F0 -> 0x00218778
*/
// Range: 0x2184F0 -> 0x218778
// this: r18
unsigned char projectile::system_event(unsigned int toEvent /* r2 */, float * toParam /* r17 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2184F0 -> 0x218778
        class pointer_asset * pointer; // r16
        class xMat3x3 mat; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218780 -> 0x00218BB0
*/
// Range: 0x218780 -> 0x218BB0
// this: r18
unsigned char projectile::damage(class zCombatDamageInfo & damageInfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x218780 -> 0x218BB0
        class zCombat * combat; // r16
        class carry * bhvr; // r2
        float speedAwaySquared; // r29+0x40
        class config_type cfg; // @ 0x0067F410
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218BB0 -> 0x00218CF4
*/
// Range: 0x218BB0 -> 0x218CF4
// this: r2
void projectile::setHurtAndRewardFlags(class zCombatDamageInfo & damageInfo /* r2 */) {
    /* anonymous block */ {
        // Range: 0x218BB0 -> 0x218CF4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218D00 -> 0x00218D08
*/
// Range: 0x218D00 -> 0x218D08
void add_transitions() {
    /* anonymous block */ {
        // Range: 0x218D00 -> 0x218D08
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218D10 -> 0x00218F30
*/
// Range: 0x218D10 -> 0x218F30
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x218D10 -> 0x218F30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00218F30 -> 0x00219058
*/
// Range: 0x218F30 -> 0x219058
// this: r2
void projectile::reset() {
    /* anonymous block */ {
        // Range: 0x218F30 -> 0x219058
        class xModelInstance * it; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219060 -> 0x002190B0
*/
// Range: 0x219060 -> 0x2190B0
// this: r2
void projectile::exit_state() {
    /* anonymous block */ {
        // Range: 0x219060 -> 0x2190B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002190B0 -> 0x002191F4
*/
// Range: 0x2190B0 -> 0x2191F4
// this: r16
void projectile::enter_state() {
    /* anonymous block */ {
        // Range: 0x2190B0 -> 0x2191F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219200 -> 0x002193E4
*/
// Range: 0x219200 -> 0x2193E4
// this: r17
void projectile::ray_check_from_player() {
    /* anonymous block */ {
        // Range: 0x219200 -> 0x2193E4
        class xRay3 ray; // r29+0x90
        class xCollis rayCollis; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002193F0 -> 0x00219840
*/
// Range: 0x2193F0 -> 0x219840
// this: r19
void projectile::reset_position(signed int b1 /* r18 */, signed int b2 /* r17 */, unsigned char checkRay /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2193F0 -> 0x219840
        class xMat3x3 ori; // r29+0x50
        class xVec3 offset; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219840 -> 0x00219A28
*/
// Range: 0x219840 -> 0x219A28
// this: r2
void projectile::reset_position(unsigned char checkRay /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219840 -> 0x219A28
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219A30 -> 0x00219A3C
*/
// Range: 0x219A30 -> 0x219A3C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219A30 -> 0x219A3C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219A40 -> 0x00219C78
*/
// Range: 0x219A40 -> 0x219C78
// this: r17
unsigned char slow_approach::runnable(float dt /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x219A40 -> 0x219C78
        class xVec3 player_velocity; // r29+0x90
        float use_away_speed; // r21
        float use_approach_radius; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219C80 -> 0x00219CE0
*/
// Range: 0x219C80 -> 0x219CE0
// this: r16
void slow_approach::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x219C80 -> 0x219CE0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219CE0 -> 0x00219D58
*/
// Range: 0x219CE0 -> 0x219D58
// this: r16
void slow_approach::setup() {
    /* anonymous block */ {
        // Range: 0x219CE0 -> 0x219D58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219D60 -> 0x00219D88
*/
// Range: 0x219D60 -> 0x219D88
// this: r2
void slow_approach::enter_state() {
    /* anonymous block */ {
        // Range: 0x219D60 -> 0x219D88
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219D90 -> 0x00219DE4
*/
// Range: 0x219D90 -> 0x219DE4
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219D90 -> 0x219DE4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219DF0 -> 0x00219F18
*/
// Range: 0x219DF0 -> 0x219F18
// this: r16
unsigned char double_chase::runnable() {
    /* anonymous block */ {
        // Range: 0x219DF0 -> 0x219F18
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219F20 -> 0x00219FB4
*/
// Range: 0x219F20 -> 0x219FB4
// this: r16
void double_chase::setup() {
    /* anonymous block */ {
        // Range: 0x219F20 -> 0x219FB4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219FC0 -> 0x00219FCC
*/
// Range: 0x219FC0 -> 0x219FCC
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x219FC0 -> 0x219FCC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00219FD0 -> 0x0021A030
*/
// Range: 0x219FD0 -> 0x21A030
// this: r16
void chase::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x219FD0 -> 0x21A030
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A030 -> 0x0021A058
*/
// Range: 0x21A030 -> 0x21A058
// this: r2
void chase::enter_state() {
    /* anonymous block */ {
        // Range: 0x21A030 -> 0x21A058
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A060 -> 0x0021A0B4
*/
// Range: 0x21A060 -> 0x21A0B4
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A060 -> 0x21A0B4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A0C0 -> 0x0021A16C
*/
// Range: 0x21A0C0 -> 0x21A16C
// this: r16
unsigned char chase_base::runnable() {
    /* anonymous block */ {
        // Range: 0x21A0C0 -> 0x21A16C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A170 -> 0x0021A1CC
*/
// Range: 0x21A170 -> 0x21A1CC
// this: r16
void chase_base::setup() {
    /* anonymous block */ {
        // Range: 0x21A170 -> 0x21A1CC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A1D0 -> 0x0021A224
*/
// Range: 0x21A1D0 -> 0x21A224
// this: r16
void back_away::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21A1D0 -> 0x21A224
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A230 -> 0x0021A23C
*/
// Range: 0x21A230 -> 0x21A23C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A230 -> 0x21A23C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A240 -> 0x0021A320
*/
// Range: 0x21A240 -> 0x21A320
// this: r16
unsigned char back_away::runnable() {
    /* anonymous block */ {
        // Range: 0x21A240 -> 0x21A320
        float use_too_close_radius; // r21
        float use_too_far_radius; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A320 -> 0x0021A348
*/
// Range: 0x21A320 -> 0x21A348
// this: r2
void back_away::enter_state() {
    /* anonymous block */ {
        // Range: 0x21A320 -> 0x21A348
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A350 -> 0x0021A3E4
*/
// Range: 0x21A350 -> 0x21A3E4
// this: r16
void back_away::setup() {
    /* anonymous block */ {
        // Range: 0x21A350 -> 0x21A3E4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A3F0 -> 0x0021A3F8
*/
// Range: 0x21A3F0 -> 0x21A3F8
// this: r2
void back_away::reset() {
    /* anonymous block */ {
        // Range: 0x21A3F0 -> 0x21A3F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A400 -> 0x0021A454
*/
// Range: 0x21A400 -> 0x21A454
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A400 -> 0x21A454
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A460 -> 0x0021A46C
*/
// Range: 0x21A460 -> 0x21A46C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A460 -> 0x21A46C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A470 -> 0x0021A4EC
*/
// Range: 0x21A470 -> 0x21A4EC
// this: r16
unsigned char taunt::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21A470 -> 0x21A4EC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A4F0 -> 0x0021A518
*/
// Range: 0x21A4F0 -> 0x21A518
// this: r2
void taunt::enter_state() {
    /* anonymous block */ {
        // Range: 0x21A4F0 -> 0x21A518
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A520 -> 0x0021A528
*/
// Range: 0x21A520 -> 0x21A528
// this: r2
void taunt::exit_state() {
    /* anonymous block */ {
        // Range: 0x21A520 -> 0x21A528
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A530 -> 0x0021A584
*/
// Range: 0x21A530 -> 0x21A584
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A530 -> 0x21A584
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A590 -> 0x0021A5B4
*/
// Range: 0x21A590 -> 0x21A5B4
// this: r2
unsigned char taunt::system_event(unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A590 -> 0x21A5B4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A5C0 -> 0x0021A5C8
*/
// Range: 0x21A5C0 -> 0x21A5C8
// this: r2
void taunt::reset() {
    /* anonymous block */ {
        // Range: 0x21A5C0 -> 0x21A5C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A5D0 -> 0x0021A5D8
*/
// Range: 0x21A5D0 -> 0x21A5D8
// this: r2
void taunt::setup() {
    /* anonymous block */ {
        // Range: 0x21A5D0 -> 0x21A5D8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A5E0 -> 0x0021A624
*/
// Range: 0x21A5E0 -> 0x21A624
// this: r16
void on_edge::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21A5E0 -> 0x21A624
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A630 -> 0x0021A63C
*/
// Range: 0x21A630 -> 0x21A63C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A630 -> 0x21A63C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A640 -> 0x0021A648
*/
// Range: 0x21A640 -> 0x21A648
// this: r2
unsigned char on_edge::runnable() {
    /* anonymous block */ {
        // Range: 0x21A640 -> 0x21A648
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A650 -> 0x0021A678
*/
// Range: 0x21A650 -> 0x21A678
// this: r2
void on_edge::enter_state() {
    /* anonymous block */ {
        // Range: 0x21A650 -> 0x21A678
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A680 -> 0x0021A6D4
*/
// Range: 0x21A680 -> 0x21A6D4
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A680 -> 0x21A6D4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A6E0 -> 0x0021A724
*/
// Range: 0x21A6E0 -> 0x21A724
// this: r16
void stuck::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21A6E0 -> 0x21A724
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A730 -> 0x0021A73C
*/
// Range: 0x21A730 -> 0x21A73C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A730 -> 0x21A73C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A740 -> 0x0021A77C
*/
// Range: 0x21A740 -> 0x21A77C
// this: r2
unsigned char stuck::runnable() {
    /* anonymous block */ {
        // Range: 0x21A740 -> 0x21A77C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A780 -> 0x0021A824
*/
// Range: 0x21A780 -> 0x21A824
// this: r16
void stuck::enter_state() {
    /* anonymous block */ {
        // Range: 0x21A780 -> 0x21A824
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A830 -> 0x0021A884
*/
// Range: 0x21A830 -> 0x21A884
void add_states(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A830 -> 0x21A884
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A890 -> 0x0021A89C
*/
// Range: 0x21A890 -> 0x21A89C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21A890 -> 0x21A89C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021A8A0 -> 0x0021AAE4
*/
// Range: 0x21A8A0 -> 0x21AAE4
// this: r16
unsigned char run_attack::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21A8A0 -> 0x21AAE4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AAF0 -> 0x0021AAF8
*/
// Range: 0x21AAF0 -> 0x21AAF8
// this: r2
void run_attack::reset() {
    /* anonymous block */ {
        // Range: 0x21AAF0 -> 0x21AAF8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AB00 -> 0x0021ABA0
*/
// Range: 0x21AB00 -> 0x21ABA0
// this: r16
void run_attack::setup() {
    /* anonymous block */ {
        // Range: 0x21AB00 -> 0x21ABA0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021ABA0 -> 0x0021AC38
*/
// Range: 0x21ABA0 -> 0x21AC38
// this: r2
void run_attack::update(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x21ABA0 -> 0x21AC38
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AC40 -> 0x0021AC6C
*/
// Range: 0x21AC40 -> 0x21AC6C
// this: r2
void run_attack::exit_state() {
    /* anonymous block */ {
        // Range: 0x21AC40 -> 0x21AC6C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021AC70 -> 0x0021ACE4
*/
// Range: 0x21AC70 -> 0x21ACE4
// this: r16
void run_attack::enter_state() {
    /* anonymous block */ {
        // Range: 0x21AC70 -> 0x21ACE4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021ACF0 -> 0x0021B00C
*/
// Range: 0x21ACF0 -> 0x21B00C
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21ACF0 -> 0x21B00C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B190 -> 0x0021B300
*/
// Range: 0x21B190 -> 0x21B300
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B190 -> 0x21B300
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B320 -> 0x0021B674
*/
// Range: 0x21B320 -> 0x21B674
void random_chooser(class xAnimState * state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B320 -> 0x21B674
        float total; // r20
        unsigned int i; // r6
        float value; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B680 -> 0x0021B68C
*/
// Range: 0x21B680 -> 0x21B68C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21B680 -> 0x21B68C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B690 -> 0x0021B700
*/
// Range: 0x21B690 -> 0x21B700
// this: r16
void bot_jump::setup() {
    /* anonymous block */ {
        // Range: 0x21B690 -> 0x21B700
        char * name; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B700 -> 0x0021B728
*/
// Range: 0x21B700 -> 0x21B728
// this: r2
void bot_jump::enter_state() {
    /* anonymous block */ {
        // Range: 0x21B700 -> 0x21B728
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B730 -> 0x0021B744
*/
// Range: 0x21B730 -> 0x21B744
// this: r2
void bot_jump::update(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x21B730 -> 0x21B744
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B750 -> 0x0021B7B0
*/
// Range: 0x21B750 -> 0x21B7B0
// this: r16
unsigned char bot_jump::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21B750 -> 0x21B7B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B7B0 -> 0x0021B868
*/
// Range: 0x21B7B0 -> 0x21B868
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B7B0 -> 0x21B868
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021B950 -> 0x0021BA30
*/
// Range: 0x21B950 -> 0x21BA30
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21B950 -> 0x21BA30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BA30 -> 0x0021BA3C
*/
// Range: 0x21BA30 -> 0x21BA3C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21BA30 -> 0x21BA3C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BA40 -> 0x0021BA68
*/
// Range: 0x21BA40 -> 0x21BA68
// this: r2
void npc_jump::enter_state() {
    /* anonymous block */ {
        // Range: 0x21BA40 -> 0x21BA68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BA70 -> 0x0021BB00
*/
// Range: 0x21BA70 -> 0x21BB00
// this: r16
void npc_jump::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21BA70 -> 0x21BB00
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BB00 -> 0x0021BB60
*/
// Range: 0x21BB00 -> 0x21BB60
// this: r16
unsigned char npc_jump::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21BB00 -> 0x21BB60
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BB60 -> 0x0021BCB0
*/
// Range: 0x21BB60 -> 0x21BCB0
// this: r16
void npc_jump::setup() {
    /* anonymous block */ {
        // Range: 0x21BB60 -> 0x21BCB0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BCB0 -> 0x0021BDA4
*/
// Range: 0x21BCB0 -> 0x21BDA4
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21BCB0 -> 0x21BDA4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BE70 -> 0x0021BF90
*/
// Range: 0x21BE70 -> 0x21BF90
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21BE70 -> 0x21BF90
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BF90 -> 0x0021BF9C
*/
// Range: 0x21BF90 -> 0x21BF9C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21BF90 -> 0x21BF9C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021BFA0 -> 0x0021C088
*/
// Range: 0x21BFA0 -> 0x21C088
// this: r16
unsigned char scramble::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21BFA0 -> 0x21C088
        char state[30]; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C090 -> 0x0021C09C
*/
// Range: 0x21C090 -> 0x21C09C
// this: r2
void scramble::reset() {
    /* anonymous block */ {
        // Range: 0x21C090 -> 0x21C09C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C0A0 -> 0x0021C148
*/
// Range: 0x21C0A0 -> 0x21C148
// this: r16
void scramble::setup() {
    /* anonymous block */ {
        // Range: 0x21C0A0 -> 0x21C148
        char * pointer_name; // r29+0x2C
        unsigned int pointer_id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C150 -> 0x0021C37C
*/
// Range: 0x21C150 -> 0x21C37C
// this: r16
void scramble::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21C150 -> 0x21C37C
        char state[30]; // r29+0x30
        class xVec3 direction; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C380 -> 0x0021C3E4
*/
// Range: 0x21C380 -> 0x21C3E4
// this: r16
void scramble::exit_state() {
    /* anonymous block */ {
        // Range: 0x21C380 -> 0x21C3E4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C3F0 -> 0x0021C45C
*/
// Range: 0x21C3F0 -> 0x21C45C
// this: r16
void scramble::enter_state() {
    /* anonymous block */ {
        // Range: 0x21C3F0 -> 0x21C45C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C460 -> 0x0021C544
*/
// Range: 0x21C460 -> 0x21C544
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21C460 -> 0x21C544
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C550 -> 0x0021C574
*/
// Range: 0x21C550 -> 0x21C574
// this: r2
unsigned char busy::system_event(unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21C550 -> 0x21C574
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C580 -> 0x0021C58C
*/
// Range: 0x21C580 -> 0x21C58C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21C580 -> 0x21C58C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C590 -> 0x0021C688
*/
// Range: 0x21C590 -> 0x21C688
// this: r16
unsigned char busy::runnable(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21C590 -> 0x21C688
        char state[30]; // r29+0x30
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C690 -> 0x0021C6A0
*/
// Range: 0x21C690 -> 0x21C6A0
// this: r2
void busy::reset() {
    /* anonymous block */ {
        // Range: 0x21C690 -> 0x21C6A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C6A0 -> 0x0021C700
*/
// Range: 0x21C6A0 -> 0x21C700
// this: r16
void busy::setup() {
    /* anonymous block */ {
        // Range: 0x21C6A0 -> 0x21C700
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C700 -> 0x0021C81C
*/
// Range: 0x21C700 -> 0x21C81C
// this: r16
void busy::enter_state() {
    /* anonymous block */ {
        // Range: 0x21C700 -> 0x21C81C
        char state[30]; // r29+0x40
        char state[30]; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C820 -> 0x0021C934
*/
// Range: 0x21C820 -> 0x21C934
// this: r16
void busy::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21C820 -> 0x21C934
        char state[30]; // r29+0x30
        class xVec3 direction_to_player; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C940 -> 0x0021C990
*/
// Range: 0x21C940 -> 0x21C990
// this: r2
void busy::exit_state() {
    /* anonymous block */ {
        // Range: 0x21C940 -> 0x21C990
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021C990 -> 0x0021C9F4
*/
// Range: 0x21C990 -> 0x21C9F4
void add_transitions(class xAnimTable * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21C990 -> 0x21C9F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CAD0 -> 0x0021CB78
*/
// Range: 0x21CAD0 -> 0x21CB78
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21CAD0 -> 0x21CB78
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CB80 -> 0x0021CB8C
*/
// Range: 0x21CB80 -> 0x21CB8C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21CB80 -> 0x21CB8C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CB90 -> 0x0021CC20
*/
// Range: 0x21CB90 -> 0x21CC20
// this: r16
unsigned char patrol_movepoints::runnable() {
    /* anonymous block */ {
        // Range: 0x21CB90 -> 0x21CC20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CC20 -> 0x0021CC74
*/
// Range: 0x21CC20 -> 0x21CC74
// this: r16
void patrol_movepoints::setup() {
    /* anonymous block */ {
        // Range: 0x21CC20 -> 0x21CC74
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CC80 -> 0x0021CCBC
*/
// Range: 0x21CC80 -> 0x21CCBC
// this: r16
void patrol_movepoints::reset() {
    /* anonymous block */ {
        // Range: 0x21CC80 -> 0x21CCBC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CCC0 -> 0x0021CD10
*/
// Range: 0x21CCC0 -> 0x21CD10
// this: r16
void patrol_movepoints::enter_state() {
    /* anonymous block */ {
        // Range: 0x21CCC0 -> 0x21CD10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CD10 -> 0x0021CFB4
*/
// Range: 0x21CD10 -> 0x21CFB4
// this: r16
void patrol_movepoints::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21CD10 -> 0x21CFB4
        class xVec3 direction; // r29+0x50
        signed int next_movepoint; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021CFC0 -> 0x0021D050
*/
// Range: 0x21CFC0 -> 0x21D050
// this: r16
void patrol_movepoints::exit_state() {
    /* anonymous block */ {
        // Range: 0x21CFC0 -> 0x21D050
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D050 -> 0x0021D0F4
*/
// Range: 0x21D050 -> 0x21D0F4
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21D050 -> 0x21D0F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D100 -> 0x0021D248
*/
// Range: 0x21D100 -> 0x21D248
// this: r21
unsigned char patrol_movepoints::system_event(class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r17 */, class xBase * toParamWidget /* r16 */, unsigned int toParamWidgetID /* r22 */) {
    /* anonymous block */ {
        // Range: 0x21D100 -> 0x21D248
        signed int anim_index; // r2
        char state[30]; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D250 -> 0x0021D444
*/
// Range: 0x21D250 -> 0x21D444
// this: r16
unsigned char home::runnable() {
    /* anonymous block */ {
        // Range: 0x21D250 -> 0x21D444
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D450 -> 0x0021D4E8
*/
// Range: 0x21D450 -> 0x21D4E8
// this: r16
void home::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21D450 -> 0x21D4E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D4F0 -> 0x0021D518
*/
// Range: 0x21D4F0 -> 0x21D518
// this: r2
void home::enter_state() {
    /* anonymous block */ {
        // Range: 0x21D4F0 -> 0x21D518
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D520 -> 0x0021D528
*/
// Range: 0x21D520 -> 0x21D528
// this: r2
void home::reset() {
    /* anonymous block */ {
        // Range: 0x21D520 -> 0x21D528
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D530 -> 0x0021D5B0
*/
// Range: 0x21D530 -> 0x21D5B0
// this: r16
void home::setup() {
    /* anonymous block */ {
        // Range: 0x21D530 -> 0x21D5B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D5B0 -> 0x0021D650
*/
// Range: 0x21D5B0 -> 0x21D650
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21D5B0 -> 0x21D650
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D650 -> 0x0021D65C
*/
// Range: 0x21D650 -> 0x21D65C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x21D650 -> 0x21D65C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D660 -> 0x0021D668
*/
// Range: 0x21D660 -> 0x21D668
unsigned char runnable() {
    /* anonymous block */ {
        // Range: 0x21D660 -> 0x21D668
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D670 -> 0x0021D880
*/
// Range: 0x21D670 -> 0x21D880
// this: r17
void defend::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x21D670 -> 0x21D880
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021D880 -> 0x0021D9F8
*/
// Range: 0x21D880 -> 0x21D9F8
// this: r16
void defend::enter_state() {
    /* anonymous block */ {
        // Range: 0x21D880 -> 0x21D9F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DA00 -> 0x0021DA60
*/
// Range: 0x21DA00 -> 0x21DA60
// this: r16
void defend::setup() {
    /* anonymous block */ {
        // Range: 0x21DA00 -> 0x21DA60
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DA60 -> 0x0021DB1C
*/
// Range: 0x21DA60 -> 0x21DB1C
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21DA60 -> 0x21DB1C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCMelee.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0021DE50 -> 0x0021DEF0
*/
// Range: 0x21DE50 -> 0x21DEF0
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x21DE50 -> 0x21DEF0
    }
}


