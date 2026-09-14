/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float UBER_RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
static class config flash_config; // size: 0x48, address: 0x6888B0
class lightweight_system * system; // size: 0x4, address: 0x608FBC
// total size: 0xB4
struct /* @anon22 */ {} zNPC::lobber::__vtable; // size: 0xB4, address: 0x602390
// total size: 0x98
struct /* @anon24 */ {} zNPC::back_away::__vtable; // size: 0x98, address: 0x5FDD80
// total size: 0x98
struct /* @anon25 */ {} zNPC::npc_move::__vtable; // size: 0x98, address: 0x5FF120
// total size: 0x7C
struct /* @anon26 */ {} zNPC::move::__vtable; // size: 0x7C, address: 0x0
// total size: 0x7C
struct /* @anon20 */ {} behavior_implementation<zNPC::common>::__vtable; // size: 0x7C, address: 0x5FD5A0
// total size: 0x78
struct /* @anon14 */ {} behavior::__vtable; // size: 0x78, address: 0x0
// total size: 0x7C
struct /* @anon1 */ {} zNPC::busy::__vtable; // size: 0x7C, address: 0x5FE1C0
// total size: 0x98
struct /* @anon0 */ {} zNPC::chase::__vtable; // size: 0x98, address: 0x5FDCE0
// total size: 0x98
struct /* @anon5 */ {} zNPC::chase_base::__vtable; // size: 0x98, address: 0x0
// total size: 0x98
struct /* @anon18 */ {} zNPC::npc_jump::__vtable; // size: 0x98, address: 0x5FE080
// total size: 0x98
struct /* @anon17 */ {} zNPC::scramble::__vtable; // size: 0x98, address: 0x5FE120
// total size: 0x98
struct /* @anon10 */ {} zNPC::home::__vtable; // size: 0x98, address: 0x5FE2E0
// total size: 0x98
struct /* @anon7 */ {} zNPC::stuck::__vtable; // size: 0x98, address: 0x5FDF60
// total size: 0x98
struct /* @anon11 */ {} zNPC::on_edge::__vtable; // size: 0x98, address: 0x5FDEC0
// total size: 0x98
struct /* @anon16 */ {} zNPC::taunt::__vtable; // size: 0x98, address: 0x5FDE20
// total size: 0x7C
struct /* @anon15 */ {} zNPC::projectile::__vtable; // size: 0x7C, address: 0x5FDB20
// total size: 0x7C
struct /* @anon4 */ {} zNPC::take_damage::__vtable; // size: 0x7C, address: 0x5FD8A0
// total size: 0x7C
struct /* @anon3 */ {} zNPC::run_attack::__vtable; // size: 0x7C, address: 0x5FE000
// total size: 0x80
struct /* @anon23 */ {} zNPC::human_lob::__vtable; // size: 0x80, address: 0x602550
// total size: 0x7C
struct /* @anon6 */ {} zNPC::lob_generic<zNPC::move>::__vtable; // size: 0x7C, address: 0x602450
// total size: 0x7C
struct /* @anon9 */ {} zNPC::firing_attack_generic<zNPC::move>::__vtable; // size: 0x7C, address: 0x6024D0
// total size: 0x7C
struct /* @anon13 */ {} zNPC::carry::__vtable; // size: 0x7C, address: 0x5FDAA0
// total size: 0x98
struct /* @anon12 */ {} zNPC::defend::__vtable; // size: 0x98, address: 0x5FE380
// total size: 0x98
struct /* @anon19 */ {} zNPC::patrol_movepoints::__vtable; // size: 0x98, address: 0x5FE240
// total size: 0xB4
struct /* @anon21 */ {} zNPC::human_throwable::__vtable; // size: 0xB4, address: 0x5FD920
// total size: 0x24
struct /* @anon8 */ {} z::lightweight_system<z::bomb, 20>::__vtable; // size: 0x24, address: 0x601940
// total size: 0x24
struct /* @anon2 */ {} z::lightweight_system_base::__vtable; // size: 0x24, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
class xBallPhysicsProperties default_physics_properties; // size: 0x1C, address: 0x5F9870
float speed; // size: 0x4, address: 0x608434
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class config default_config; // size: 0x48, address: 0x6A6A80
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
unsigned int anlob_bomb(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2D1CE0
unsigned int anstart_attack(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2D1D50
unsigned int ancan_shoot_player(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2D1D90
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
// total size: 0x1E5C
class lightweight_system : public lightweight_system_base {
    // Members
public:
    class bomb object[20]; // offset 0x4, size 0x1E50
    class lightweight_system * * system; // offset 0x1E54, size 0x4
    unsigned int current_id; // offset 0x1E58, size 0x4
};
// total size: 0x98
struct /* @anon0 */ {};
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x24
struct /* @anon2 */ {};
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
// total size: 0x48
class flash_bone : public behavior_implementation {
    // Members
public:
    signed int position_bone; // offset 0x10, size 0x4
    signed int aim_bone; // offset 0x14, size 0x4
    union { // inferred
        class xVec3 position; // offset 0x18, size 0xC
        class xModelTag tag; // offset 0x18, size 0x20
    };
    unsigned int glareID; // offset 0x38, size 0x4
    signed int glareIdx; // offset 0x3C, size 0x4
    float glareSize; // offset 0x40, size 0x4
    float offset_size; // offset 0x44, size 0x4
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
// total size: 0xC8
class human_lob : public lob_generic {
    // Members
public:
    float wait; // offset 0x8C, size 0x4
    float blast_radius; // offset 0x90, size 0x4
    signed int bomb_damage; // offset 0x94, size 0x4
    float flash_time; // offset 0x98, size 0x4
    float gravity; // offset 0x9C, size 0x4
    float total_flash_time; // offset 0xA0, size 0x4
    float emit_remaining; // offset 0xA4, size 0x4
    class xVec3 bomb_pos_start; // offset 0xA8, size 0xC
    class xVec3 bomb_pos_end; // offset 0xB4, size 0xC
    float lob_timeout; // offset 0xC0, size 0x4
    float retry_wait_time; // offset 0xC4, size 0x4
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
enum GrabType {
    eGrabTypeMrIStanding = 0,
    eGrabTypeMrIGroundToss = 1,
    eGrabTypeElastigirl = 2,
    eGrabTypeCount = 3,
};
// total size: 0x0
class xFFX {};
// total size: 0x4C
class xBallPhysics {
    // Members
public:
    class xBallPhysicsProperties * properties; // offset 0x0, size 0x4
    class xVec3 velocity; // offset 0x4, size 0xC
    class xVec3 rotation_velocity; // offset 0x10, size 0xC
    class xVec3 ground_normal; // offset 0x1C, size 0xC
    class xVec3 impact_loc; // offset 0x28, size 0xC
    float radius; // offset 0x34, size 0x4
    float splash_y; // offset 0x38, size 0x4
    class xSurface * collision_surface; // offset 0x3C, size 0x4
    unsigned char live; // offset 0x40, size 0x1
    unsigned char splashed; // offset 0x41, size 0x1
    unsigned char collision; // offset 0x42, size 0x1
    unsigned char grounded; // offset 0x43, size 0x1
    unsigned char use_cheaper_collision; // offset 0x48, size 0x1
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x7C
struct /* @anon6 */ {};
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
// total size: 0x7D0
class lobber : public human_throwable {
    // Members
public:
    class patrol_movepoints patrol_movepoints_state; // offset 0x2C0, size 0x44
    class defend defend_state; // offset 0x304, size 0x48
    class carry carry_state; // offset 0x34C, size 0x24
    class human_lob lob_state; // offset 0x370, size 0xC8
    class run_attack run_attack_state; // offset 0x438, size 0x40
    class take_damage take_damage_state; // offset 0x478, size 0x2C
    class projectile projectile_state; // offset 0x4B0, size 0x120
    class taunt taunt_state; // offset 0x5D0, size 0x38
    class on_edge on_edge_state; // offset 0x608, size 0x34
    class stuck stuck_state; // offset 0x63C, size 0x34
    class home home_state; // offset 0x670, size 0x40
    class scramble scramble_state; // offset 0x6B0, size 0x3C
    class npc_jump npc_jump_state; // offset 0x6EC, size 0x40
    class chase chase_state; // offset 0x72C, size 0x3C
    class busy busy_state; // offset 0x768, size 0x28
    class back_away back_away_state; // offset 0x790, size 0x40
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
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x30
class firing_attack_generic : public move {
    // Members
public:
    class group_attack attacker; // offset 0x24, size 0x1
    float facing_cos; // offset 0x28, size 0x4
    unsigned char facing_player; // offset 0x2C, size 0x1
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
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x2C
class take_damage : public behavior_implementation {
    // Members
public:
    unsigned char hasBeenDamaged; // offset 0x10, size 0x1
    class xVec3 contact; // offset 0x14, size 0xC
    class xVec3 direction; // offset 0x20, size 0xC
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
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x0
class xMovePoint {};
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
class zDuplicator {};
// total size: 0x0
class anim_coll_data {};
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x40
class npc_jump : public npc_move {
    // Members
public:
    unsigned char face_dir; // offset 0x34, size 0x1
    float dust_emit_remaining; // offset 0x38, size 0x4
    float dust_time; // offset 0x3C, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x0
class xMarkerAsset {};
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
// total size: 0x98
struct /* @anon7 */ {};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x1
class group_attack {
    // Members
public:
    unsigned char attacking; // offset 0x0, size 0x1
};
// total size: 0x2C0
class human_throwable : public common {};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x3C
class chase : public chase_base {};
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
class xModelAssetInfo {};
// total size: 0x24
struct /* @anon8 */ {};
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
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
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
// total size: 0x0
class xSurface {};
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
// total size: 0x7C
struct /* @anon9 */ {};
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
class lightweight_system_base {};
// total size: 0x98
struct /* @anon10 */ {};
// total size: 0x0
class activity_data {};
// total size: 0x98
struct /* @anon11 */ {};
// total size: 0x98
struct /* @anon12 */ {};
// total size: 0x7C
struct /* @anon13 */ {};
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
struct /* @anon14 */ {};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
class array {
    // Members
public:
    signed int count; // offset 0x0, size 0x4
    class flash_bone * data; // offset 0x4, size 0x4
};
// total size: 0x7C
struct /* @anon15 */ {};
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
struct /* @anon16 */ {};
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
struct /* @anon17 */ {};
// total size: 0x98
struct /* @anon18 */ {};
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x98
struct /* @anon19 */ {};
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
// total size: 0x28
class pointer_asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0x3C
class chase_base : public npc_move {
    // Members
public:
    float detect_radius; // offset 0x34, size 0x4
    float chase_radius; // offset 0x38, size 0x4
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x1C
class xBallPhysicsProperties {
    // Members
public:
    float damp_percent; // offset 0x0, size 0x4
    float damp; // offset 0x4, size 0x4
    float friction; // offset 0x8, size 0x4
    float horizontal_damp; // offset 0xC, size 0x4
    float gravity; // offset 0x10, size 0x4
    float rotation_factor; // offset 0x14, size 0x4
    char * splash_name; // offset 0x18, size 0x4
};
// total size: 0xC
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
};
// total size: 0x7C
struct /* @anon20 */ {};
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
// total size: 0x184
class bomb : public xEnt, public xBallPhysics, public lightweight {
    // Members
public:
    unsigned char thrown; // offset 0x130, size 0x1
    unsigned char alert_on; // offset 0x131, size 0x1
    unsigned char collided_last_frame; // offset 0x132, size 0x1
    float dust_emit_time; // offset 0x134, size 0x4
    float dust_emit_remaining; // offset 0x138, size 0x4
    float alert_time; // offset 0x13C, size 0x4
    float max_timer; // offset 0x140, size 0x4
    float time; // offset 0x144, size 0x4
    float blur_time; // offset 0x148, size 0x4
    float emit_remaining; // offset 0x14C, size 0x4
    class xModelInstance * glow; // offset 0x150, size 0x4
    class xVec3 position; // offset 0x154, size 0xC
    class xVec3 collide_point; // offset 0x160, size 0xC
    class xVec3 collide_normal; // offset 0x16C, size 0xC
    class xModelBlur blur; // offset 0x178, size 0x4
    enum iSndHandle warning_sound; // offset 0x17C, size 0x4
};
// total size: 0xB4
struct /* @anon21 */ {};
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
// total size: 0x34
class stuck : public npc_move {};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x38
class taunt : public npc_move {
    // Members
public:
    unsigned char player_hit; // offset 0x34, size 0x1
};
// total size: 0x40
class home : public npc_move {
    // Members
public:
    unsigned char ran; // offset 0x34, size 0x1
    float inner_radius_2; // offset 0x38, size 0x4
    float outer_radius_2; // offset 0x3C, size 0x4
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
// total size: 0x8C
class lob_generic : public firing_attack_generic {
    // Members
public:
    unsigned char use_tag; // offset 0x30, size 0x1
    char * lob_anim; // offset 0x34, size 0x4
    float inner_radius; // offset 0x38, size 0x4
    float outer_radius; // offset 0x3C, size 0x4
    float last_dt; // offset 0x40, size 0x4
    float delay; // offset 0x44, size 0x4
    float in_front_distance; // offset 0x48, size 0x4
    class xVec3 direction; // offset 0x4C, size 0xC
    class array * flash_bones; // offset 0x58, size 0x4
    class xModelTag gun_tag; // offset 0x5C, size 0x20
    signed int gun; // offset 0x7C, size 0x4
    class xVec3 gun_offset; // offset 0x80, size 0xC
};
// total size: 0xC
class lightweight {
    // Members
public:
    unsigned char used; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
};
// total size: 0x1
class RyzMemData {};
// total size: 0xB4
struct /* @anon22 */ {};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x80
struct /* @anon23 */ {};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0x48
class config {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float size_width_delta_min; // offset 0x8, size 0x4
    float size_width_delta_max; // offset 0xC, size 0x4
    float size_height_delta_min; // offset 0x10, size 0x4
    float size_height_delta_max; // offset 0x14, size 0x4
    float lifetime; // offset 0x18, size 0x4
    float emit_rate; // offset 0x1C, size 0x4
    float alpha_start_fade; // offset 0x20, size 0x4
    float start_offset; // offset 0x24, size 0x4
    float end_offset; // offset 0x28, size 0x4
    unsigned char color_r; // offset 0x2C, size 0x1
    unsigned char color_g; // offset 0x2D, size 0x1
    unsigned char color_b; // offset 0x2E, size 0x1
    float glow_emit_rate; // offset 0x30, size 0x4
    float glow_fade; // offset 0x34, size 0x4
    float glow_lifetime; // offset 0x38, size 0x4
    float glow_width; // offset 0x3C, size 0x4
    float glow_height; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x34
class on_edge : public npc_move {};
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x98
struct /* @anon24 */ {};
// total size: 0x28
class busy : public move {
    // Members
public:
    unsigned char enabled; // offset 0x24, size 0x1
    unsigned char can_be_busy; // offset 0x25, size 0x1
    unsigned char alert; // offset 0x26, size 0x1
    unsigned char play_wait; // offset 0x27, size 0x1
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
// total size: 0x98
struct /* @anon25 */ {};
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
struct /* @anon26 */ {};
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
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
// total size: 0x24
class carry : public behavior_implementation {
    // Members
public:
    unsigned char entered; // offset 0x10, size 0x1
    class xVec3 prevCenter; // offset 0x14, size 0xC
    class xEnt * throwTarget; // offset 0x20, size 0x4
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
// total size: 0x40
class back_away : public npc_move {
    // Members
public:
    unsigned char ran; // offset 0x34, size 0x1
    float too_close_radius; // offset 0x38, size 0x4
    float too_far_radius; // offset 0x3C, size 0x4
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
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0DF0 -> 0x002D0E1C
*/
// Range: 0x2D0DF0 -> 0x2D0E1C
// this: r16
void lobber::setup() {
    /* anonymous block */ {
        // Range: 0x2D0DF0 -> 0x2D0E1C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0E20 -> 0x002D1158
*/
// Range: 0x2D0E20 -> 0x2D1158
// this: r16
lobber::lobber() {
    /* anonymous block */ {
        // Range: 0x2D0E20 -> 0x2D1158
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1160 -> 0x002D1620
*/
// Range: 0x2D1160 -> 0x2D1620
// this: r18
void human_lob::launch() {
    /* anonymous block */ {
        // Range: 0x2D1160 -> 0x2D1620
        class xVec3 target_pos; // r29+0x290
        class xVec3 bomb_pos; // r29+0x280
        class xVec3 bomb_vel; // r29+0x270
        class xBallPhysicsProperties physics_properties; // r29+0x1F0
        class bomb new_bomb; // r29+0x60
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1620 -> 0x002D1A18
*/
// Range: 0x2D1620 -> 0x2D1A18
// this: r16
void human_lob::setup() {
    /* anonymous block */ {
        // Range: 0x2D1620 -> 0x2D1A18
        float default_inner_radius; // r29+0x4C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1A20 -> 0x002D1C28
*/
// Range: 0x2D1A20 -> 0x2D1C28
// this: r16
void human_lob::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D1A20 -> 0x2D1C28
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1C30 -> 0x002D1CDC
*/
// Range: 0x2D1C30 -> 0x2D1CDC
void add_transitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2D1C30 -> 0x2D1CDC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1DF0 -> 0x002D1ED0
*/
// Range: 0x2D1DF0 -> 0x2D1ED0
void add_states(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2D1DF0 -> 0x2D1ED0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1ED0 -> 0x002D1FAC
*/
// Range: 0x2D1ED0 -> 0x2D1FAC
// this: r16
void human_lob::enter_state() {
    /* anonymous block */ {
        // Range: 0x2D1ED0 -> 0x2D1FAC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1FB0 -> 0x002D1FF4
*/
// Range: 0x2D1FB0 -> 0x2D1FF4
// this: r16
void human_lob::reset() {
    /* anonymous block */ {
        // Range: 0x2D1FB0 -> 0x2D1FF4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2000 -> 0x002D200C
*/
// Range: 0x2D2000 -> 0x2D200C
unsigned char grabbable(enum GrabType grabType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D2000 -> 0x2D200C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2010 -> 0x002D20E0
*/
// Range: 0x2D2010 -> 0x2D20E0
// this: r16
unsigned char human_lob::runnable(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2D2010 -> 0x2D20E0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCLobber.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D20E0 -> 0x002D233C
*/
// Range: 0x2D20E0 -> 0x2D233C
class xVec3 get_lob_velocity(class xVec3 & bomb_position /* r2 */, class xVec3 & target_position /* r2 */, class xVec3 & target_velocity /* r2 */, float bomb_speed /* r29+0x30 */, float bomb_gravity /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2D20E0 -> 0x2D233C
        class xVec3 direction; // r29+0x20
        class xVec3 Vp; // r29+0x10
        class xVec3 Pp; // r29
        float a; // r4
        float b; // r3
        float characteristic; // r2
        float time; // r29+0x30
    }
}


