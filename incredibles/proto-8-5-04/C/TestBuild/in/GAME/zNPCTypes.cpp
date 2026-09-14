/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float UBER_RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
// total size: 0x7C
struct /* @anon7 */ {} zNPC::bone_container<zNPC::flame_bone>::__vtable; // size: 0x7C, address: 0x5FD480
// total size: 0x7C
struct /* @anon22 */ {} behavior_implementation<zNPC::common>::__vtable; // size: 0x7C, address: 0x5FD5A0
// total size: 0x78
struct /* @anon19 */ {} behavior::__vtable; // size: 0x78, address: 0x0
// total size: 0xA0
struct /* @anon20 */ {} zNPC::stream<zNPC::flame_bone>::__vtable; // size: 0xA0, address: 0x5FD500
// total size: 0xA0
struct /* @anon29 */ {} zNPC::run_stream::__vtable; // size: 0xA0, address: 0x606910
// total size: 0x98
struct /* @anon18 */ {} zNPC::npc_move::__vtable; // size: 0x98, address: 0x5FF120
// total size: 0x7C
struct /* @anon6 */ {} zNPC::move::__vtable; // size: 0x7C, address: 0x0
// total size: 0x98
struct /* @anon26 */ {} zNPC::home::__vtable; // size: 0x98, address: 0x5FE2E0
// total size: 0x98
struct /* @anon14 */ {} zNPC::chase::__vtable; // size: 0x98, address: 0x5FDCE0
// total size: 0x98
struct /* @anon17 */ {} zNPC::chase_base::__vtable; // size: 0x98, address: 0x0
// total size: 0x98
struct /* @anon21 */ {} zNPC::stuck::__vtable; // size: 0x98, address: 0x5FDF60
// total size: 0x98
struct /* @anon27 */ {} zNPC::on_edge::__vtable; // size: 0x98, address: 0x5FDEC0
// total size: 0x98
struct /* @anon1 */ {} zNPC::taunt::__vtable; // size: 0x98, address: 0x5FDE20
// total size: 0x98
struct /* @anon0 */ {} zNPC::npc_jump::__vtable; // size: 0x98, address: 0x5FE080
// total size: 0x7C
struct /* @anon28 */ {} zNPC::projectile::__vtable; // size: 0x7C, address: 0x5FDB20
// total size: 0x7C
struct /* @anon9 */ {} zNPC::take_damage::__vtable; // size: 0x7C, address: 0x5FD8A0
// total size: 0x7C
struct /* @anon24 */ {} zNPC::carry::__vtable; // size: 0x7C, address: 0x5FDAA0
// total size: 0x98
struct /* @anon25 */ {} zNPC::defend::__vtable; // size: 0x98, address: 0x5FE380
// total size: 0x98
struct /* @anon2 */ {} zNPC::scramble::__vtable; // size: 0x98, address: 0x5FE120
// total size: 0x7C
struct /* @anon13 */ {} zNPC::busy::__vtable; // size: 0x7C, address: 0x5FE1C0
// total size: 0x98
struct /* @anon5 */ {} zNPC::patrol_movepoints::__vtable; // size: 0x98, address: 0x5FE240
// total size: 0xB4
struct /* @anon4 */ {} zNPC::streamer<zNPC::flame_bone>::__vtable; // size: 0xB4, address: 0x5FD620
// total size: 0xB4
struct /* @anon8 */ {} zNPC::human_throwable::__vtable; // size: 0xB4, address: 0x5FD920
// total size: 0x7C
struct /* @anon3 */ {} zNPC::bone_container<zNPC::water_bone>::__vtable; // size: 0x7C, address: 0x5FD2A0
// total size: 0xA0
struct /* @anon10 */ {} zNPC::stream<zNPC::water_bone>::__vtable; // size: 0xA0, address: 0x5FD320
// total size: 0xB4
struct /* @anon16 */ {} zNPC::streamer<zNPC::water_bone>::__vtable; // size: 0xB4, address: 0x5FD3C0
void * __ct(class flame_bone *); // size: 0x0, address: 0x1FACD0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
class zFlameThrowerCfg FTCfgDefault; // size: 0x80, address: 0x5F9940
// total size: 0x7C
struct /* @anon12 */ {} zNPC::flame_bone::__vtable; // size: 0x7C, address: 0x600EB0
// total size: 0x7C
struct /* @anon23 */ {} zNPC::firing_bone::__vtable; // size: 0x7C, address: 0x0
// total size: 0x7C
struct /* @anon15 */ {} zNPC::bone_behavior::__vtable; // size: 0x7C, address: 0x0
void * __ct(class water_bone *); // size: 0x0, address: 0x1FAE90
// total size: 0x7C
struct /* @anon11 */ {} zNPC::water_bone::__vtable; // size: 0x7C, address: 0x603180
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
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x40
class Particle {
    // Members
public:
    union { // inferred
        struct { // inferred
            class xVec3 pos; // offset 0x0, size 0xC
            class xVec3 vel; // offset 0xC, size 0xC
            class xColor_tag col; // offset 0x18, size 0x4
            float life; // offset 0x1C, size 0x4
            float lifeAtStart; // offset 0x20, size 0x4
            signed int gen; // offset 0x24, size 0x4
            float w; // offset 0x28, size 0x4
            float h; // offset 0x2C, size 0x4
            unsigned char isActive; // offset 0x30, size 0x1
        };
        unsigned char pad[64]; // offset 0x0, size 0x40
    };
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
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x97B0
class zFlameThrower {
    // Members
public:
    enum iSndGroupHandle sndGroupHandle; // offset 0x0, size 0x4
    enum iSndHandle sndHandle; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
    class zFlameThrower * prev; // offset 0xC, size 0x4
    class zFlameThrower * next; // offset 0x10, size 0x4
    class zFlameThrowerCfg & cfg; // offset 0x14, size 0x4
    class FTParticle * particles; // offset 0x18, size 0x4
    unsigned char particleMem[38415]; // offset 0x1C, size 0x960F
    signed int counter; // offset 0x962C, size 0x4
    float texScroll; // offset 0x9630, size 0x4
    signed int nextParticle; // offset 0x9634, size 0x4
    unsigned char isFirstUpdate; // offset 0x9638, size 0x1
    class xVec3 emitterPos; // offset 0x963C, size 0xC
    class xVec3 emitterDir; // offset 0x9648, size 0xC
    class xColor_tag color; // offset 0x9654, size 0x4
    float pitch; // offset 0x9658, size 0x4
    float friction; // offset 0x965C, size 0x4
    float gravity; // offset 0x9660, size 0x4
    class xVec3 velLast; // offset 0x9664, size 0xC
    class xVec3 posLast; // offset 0x9670, size 0xC
    class xMat4x3 matLast; // offset 0x9680, size 0x40
    float totalTime; // offset 0x96C0, size 0x4
    float emitTimeA; // offset 0x96C4, size 0x4
    float emitTimeB; // offset 0x96C8, size 0x4
    signed int enabled; // offset 0x96CC, size 0x4
    unsigned char doRender; // offset 0x96D0, size 0x1
    class xMat4x3 emitterMat; // offset 0x96E0, size 0x40
    class xMat4x3 emitterMatB; // offset 0x9720, size 0x40
    unsigned int count; // offset 0x9760, size 0x4
    class xVec3 springResultPos; // offset 0x9764, size 0xC
    class xQuat springResultQuat; // offset 0x9770, size 0x10
    class xQuat quatLast; // offset 0x9780, size 0x10
    float springVpos; // offset 0x9790, size 0x4
    float springVquat; // offset 0x9794, size 0x4
    float springCurrPos; // offset 0x9798, size 0x4
    float cullFade; // offset 0x979C, size 0x4
    unsigned char matLast_set; // offset 0x97A0, size 0x1
    unsigned char doShutDown; // offset 0x97A1, size 0x1
    unsigned char isShutDown; // offset 0x97A2, size 0x1
    unsigned char doMgrUpdate; // offset 0x97A3, size 0x1
    unsigned char doMgrRender; // offset 0x97A4, size 0x1
    unsigned char isCulled; // offset 0x97A5, size 0x1
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
// total size: 0x98
struct /* @anon0 */ {};
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x114
class zLightning {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    // total size: 0x54
    class /* @class */ {
        // Members
    public:
        class xVec3 endPoint[2]; // offset 0x0, size 0x18
        class xVec3 endPointB; // offset 0x18, size 0xC
        class xVec3 direction; // offset 0x24, size 0xC
        float length; // offset 0x30, size 0x4
        float scale; // offset 0x34, size 0x4
        float width; // offset 0x38, size 0x4
        float endParam[2]; // offset 0x3C, size 0x8
        float endVel[2]; // offset 0x44, size 0x8
        float paramSpan[2]; // offset 0x4C, size 0x8
    } func; // offset 0x8, size 0x54
    unsigned int numStrips; // offset 0x5C, size 0x4
    float alphaRamp; // offset 0x60, size 0x4
    class xColor_tag color; // offset 0x64, size 0x4
    float time_left; // offset 0x68, size 0x4
    float time_total; // offset 0x6C, size 0x4
    class zLightning * nextBranch; // offset 0x70, size 0x4
    class zLightning * prevBranch; // offset 0x74, size 0x4
    float parentSegment; // offset 0x78, size 0x4
    float lastParentSegment; // offset 0x7C, size 0x4
    float segmentsPerMeter; // offset 0x80, size 0x4
    float branchSpeed; // offset 0x84, size 0x4
    signed int damage; // offset 0x88, size 0x4
    float knockBackSpeed; // offset 0x8C, size 0x4
    class RwRaster * mainTexture; // offset 0x90, size 0x4
    class RwRaster * branchTexture; // offset 0x94, size 0x4
    class zLightningParticle * particle; // offset 0x98, size 0x4
    signed int nextParticle; // offset 0x9C, size 0x4
    float sparkTimer; // offset 0xA0, size 0x4
    class xVec3 collisionPoint; // offset 0xA4, size 0xC
    float genTime; // offset 0xB0, size 0x4
    unsigned char randomizeBranchEndPoint; // offset 0xB4, size 0x1
    unsigned char collisionEnabled; // offset 0xB5, size 0x1
    enum iSndHandle sndHandle; // offset 0xB8, size 0x4
    class xEnt * followStart; // offset 0xBC, size 0x4
    class xVec3 followStartOffset; // offset 0xC0, size 0xC
    class xEnt * followEnd; // offset 0xCC, size 0x4
    class xVec3 followEndOffset; // offset 0xD0, size 0xC
    void (* renderCB)(class zLightning *, class RxObjSpace3DVertex *, class RxObjSpace3DVertex *, unsigned int); // offset 0xDC, size 0x4
    void * context; // offset 0xE0, size 0x4
    float weightParam[12]; // offset 0xE4, size 0x30
};
// total size: 0x1C
class RyzMemGrow {
    // Members
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
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
// total size: 0x1F4
class zFragParticleAsset : public zFragAsset {
    // Members
public:
    class zFragLocation source; // offset 0x18, size 0x28
    class zFragLocation vel; // offset 0x40, size 0x28
    class xParEmitterCustomSettings emit; // offset 0x68, size 0x184
    unsigned int dummy0; // offset 0x1EC, size 0x4
    void * dummy1; // offset 0x1F0, size 0x4
};
// total size: 0x98
struct /* @anon1 */ {};
// total size: 0x10
class zFragBone {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
// total size: 0x98
struct /* @anon2 */ {};
enum FTParType {
    TYPE_A = 0,
    TYPE_B = 1,
};
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
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
// total size: 0x7C
struct /* @anon3 */ {};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
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
// total size: 0x18
class zFragDistortion {
    // Members
public:
    class zFragDistortionAsset * fasset; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    signed int type; // offset 0x10, size 0x4
    float repeat_time; // offset 0x14, size 0x4
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
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0xB4
struct /* @anon4 */ {};
// total size: 0x10
class navigation_mesh : public xBaseAsset {
    // Members
public:
    signed int num_sub_meshes; // offset 0x8, size 0x4
    class sub_mesh * sub_meshes; // offset 0xC, size 0x4
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
// total size: 0x54
class zFragShockwaveAsset : public zFragAsset {
    // Members
public:
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
// total size: 0x98
struct /* @anon5 */ {};
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
class stream : public run_stream {
    // Members
public:
    class bone_container bones; // offset 0x58, size 0x18
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum iSndGroupHandle {
};
// total size: 0x5C
class zFragDistortionAsset : public zFragAsset {
    // Members
public:
    unsigned int type; // offset 0x18, size 0x4
    class zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
    float radius; // offset 0x48, size 0x4
    float duration; // offset 0x4C, size 0x4
    float intensity; // offset 0x50, size 0x4
    float freq; // offset 0x54, size 0x4
    float repeat_delay; // offset 0x58, size 0x4
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
class tweak_info {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    class tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            signed int value_def; // offset 0x0, size 0x4
            signed int value_min; // offset 0x4, size 0x4
            signed int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        // total size: 0x1
        class /* @class */ {
            // Members
        public:
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
// total size: 0x7C
struct /* @anon6 */ {};
// total size: 0x10
class xFXRibbon {
    // Members
public:
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
    class activity_data * act; // offset 0x8, size 0x4
    class config_type * cfg; // offset 0xC, size 0x4
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
enum iSndHandle {
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x80
class zFlameThrowerCfg {
    // Members
public:
    float SPRING_SPEED_POS; // offset 0x0, size 0x4
    float SPRING_SPEED_QUAT; // offset 0x4, size 0x4
    float PARTICLE_A_ANIMRATE; // offset 0x8, size 0x4
    float PARTICLE_A_EMITRATE; // offset 0xC, size 0x4
    float PARTICLE_A_SPEED; // offset 0x10, size 0x4
    float PARTICLE_A_LIFE; // offset 0x14, size 0x4
    float PARTICLE_A_START; // offset 0x18, size 0x4
    float PARTICLE_A_FRICTION; // offset 0x1C, size 0x4
    float PARTICLE_A_GRAVITY; // offset 0x20, size 0x4
    float PARTICLE_A_STARTSIZE; // offset 0x24, size 0x4
    float PARTICLE_A_SIZEINC; // offset 0x28, size 0x4
    float PARTICLE_A_UPVEL; // offset 0x2C, size 0x4
    float PARTICLE_A_EXPRANGE; // offset 0x30, size 0x4
    float PARTICLE_A_EXPSHIFT; // offset 0x34, size 0x4
    float PARTICLE_A_FADETIME; // offset 0x38, size 0x4
    float PARTICLE_A_ALPHA; // offset 0x3C, size 0x4
    float PARTICLE_A_EXTEND; // offset 0x40, size 0x4
    signed int PARTICLE_B_PROB; // offset 0x44, size 0x4
    float PARTICLE_B_ANIMRATE; // offset 0x48, size 0x4
    float PARTICLE_B_EMITRATE; // offset 0x4C, size 0x4
    float PARTICLE_B_SPEED; // offset 0x50, size 0x4
    float PARTICLE_B_LIFE; // offset 0x54, size 0x4
    float PARTICLE_B_LIFE_RANGE; // offset 0x58, size 0x4
    float PARTICLE_B_FRICTION; // offset 0x5C, size 0x4
    float PARTICLE_B_GRAVITY; // offset 0x60, size 0x4
    float PARTICLE_B_STARTSIZE; // offset 0x64, size 0x4
    float PARTICLE_B_UPVEL; // offset 0x68, size 0x4
    float PARTICLE_B_UPVEL_RANGE; // offset 0x6C, size 0x4
    float PARTICLE_B_EXPRANGE; // offset 0x70, size 0x4
    float PARTICLE_B_EXPSHIFT; // offset 0x74, size 0x4
    float PARTICLE_B_FADETIME; // offset 0x78, size 0x4
    float PARTICLE_B_ALPHA; // offset 0x7C, size 0x4
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
// total size: 0x60
class FTParticle {
    // Members
public:
    union { // inferred
        struct { // inferred
            class xVec3 pos; // offset 0x0, size 0xC
            class xVec3 vel; // offset 0xC, size 0xC
            class xColor_tag col; // offset 0x18, size 0x4
            float life; // offset 0x1C, size 0x4
            float lifeAtStart; // offset 0x20, size 0x4
            enum FTParType type; // offset 0x24, size 0x4
            signed int gen; // offset 0x28, size 0x4
            float w; // offset 0x2C, size 0x4
            float h; // offset 0x30, size 0x4
            float startSize; // offset 0x34, size 0x4
            float extendedStartSize; // offset 0x38, size 0x4
            unsigned char isActive; // offset 0x3C, size 0x1
            unsigned char isExpSizeIncrease; // offset 0x3D, size 0x1
            unsigned char isExtendedTime; // offset 0x3E, size 0x1
            unsigned int animFrame; // offset 0x40, size 0x4
            float animTime; // offset 0x44, size 0x4
            float gravity; // offset 0x48, size 0x4
            float freeze_time; // offset 0x4C, size 0x4
        };
        unsigned char pad[96]; // offset 0x0, size 0x60
    };
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
// total size: 0x3C
class chase_base : public npc_move {
    // Members
public:
    float detect_radius; // offset 0x34, size 0x4
    float chase_radius; // offset 0x38, size 0x4
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x64
class zFragProjectile {
    // Members
public:
    class zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * model; // offset 0x4, size 0x4
    class xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    signed int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float alpha; // offset 0x40, size 0x4
    float bounceC1; // offset 0x44, size 0x4
    float bounceC2; // offset 0x48, size 0x4
    class xVec3 N; // offset 0x4C, size 0xC
    class xVec3 axis; // offset 0x58, size 0xC
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x58
class flame_bone : public firing_bone {
    // Members
public:
    unsigned char invert; // offset 0x4C, size 0x1
    class zFlameThrower * flamethrower; // offset 0x50, size 0x4
    class zFlameThrowerCfg * cfg; // offset 0x54, size 0x4
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
// total size: 0x110
class zFragProjectileAsset : public zFragAsset {
    // Members
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    class RpAtomic * modelFile; // offset 0x1C, size 0x4
    class zFragLocation launch; // offset 0x20, size 0x28
    class zFragLocation vel; // offset 0x48, size 0x28
    class zFragLocation velPlusMinus; // offset 0x70, size 0x28
    class zFragLocation rot; // offset 0x98, size 0x28
    class zFragLocation rotPlusMinus; // offset 0xC0, size 0x28
    float bounce; // offset 0xE8, size 0x4
    signed int maxBounces; // offset 0xEC, size 0x4
    unsigned int flags; // offset 0xF0, size 0x4
    unsigned int childID; // offset 0xF4, size 0x4
    class zShrapnelAsset * child; // offset 0xF8, size 0x4
    float minScale; // offset 0xFC, size 0x4
    float maxScale; // offset 0x100, size 0x4
    unsigned int scaleCurveID; // offset 0x104, size 0x4
    class xCurveAsset * scaleCurve; // offset 0x108, size 0x4
    float gravity; // offset 0x10C, size 0x4
};
// total size: 0x14
class zNPCTypeInfo {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    void (* scene_init)(); // offset 0x4, size 0x4
    void (* scene_enter)(); // offset 0x8, size 0x4
    void (* setup)(); // offset 0xC, size 0x4
    void (* reset)(); // offset 0x10, size 0x4
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
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x20
class zFragLocInfo {
    // Members
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x30
class zLightningParticle {
    // Members
public:
    union { // inferred
        struct { // inferred
            class xVec3 pos; // offset 0x0, size 0xC
            class xVec3 vel; // offset 0xC, size 0xC
            class xColor_tag col; // offset 0x18, size 0x4
            float life; // offset 0x1C, size 0x4
            float w; // offset 0x20, size 0x4
            float h; // offset 0x24, size 0x4
            unsigned char isActive; // offset 0x28, size 0x1
        };
        unsigned char pad[48]; // offset 0x0, size 0x30
    };
};
// total size: 0x20
class presence_volume {
    // Members
public:
    float knockback; // offset 0x0, size 0x4
    class xVec3 center; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float damage_player; // offset 0x14, size 0x4
    float damage_npc; // offset 0x18, size 0x4
    float damage_other; // offset 0x1C, size 0x4
};
// total size: 0x7C
struct /* @anon7 */ {};
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
// total size: 0x0
class xModelAssetParam {};
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
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char value_def; // offset 0x0, size 0x1
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
// total size: 0xB4
struct /* @anon8 */ {};
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
// total size: 0x0
class xMarkerAsset {};
// total size: 0x8C
class zFrag {
    // Members
public:
    enum zFragType type; // offset 0x0, size 0x4
    class zFragInfo info; // offset 0x4, size 0x64
    float delay; // offset 0x68, size 0x4
    float alivetime; // offset 0x6C, size 0x4
    float lifetime; // offset 0x70, size 0x4
    void (* update)(class zFrag *, float); // offset 0x74, size 0x4
    void (* destroy)(class zFrag *); // offset 0x78, size 0x4
    class xModelInstance * parent[2]; // offset 0x7C, size 0x8
    class zFrag * prev; // offset 0x84, size 0x4
    class zFrag * next; // offset 0x88, size 0x4
};
// total size: 0x4
class zFragFire {
    // Members
public:
    class zFragFireAsset * fasset; // offset 0x0, size 0x4
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0x50
class water_bone : public firing_bone {
    // Members
public:
    class zWaterhose * waterhose; // offset 0x4C, size 0x4
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
// total size: 0x34
class stuck : public npc_move {};
// total size: 0x0
class xMovePoint {};
// total size: 0x38
class taunt : public npc_move {
    // Members
public:
    unsigned char player_hit; // offset 0x34, size 0x1
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
// total size: 0x40
class home : public npc_move {
    // Members
public:
    unsigned char ran; // offset 0x34, size 0x1
    float inner_radius_2; // offset 0x38, size 0x4
    float outer_radius_2; // offset 0x3C, size 0x4
};
// total size: 0x5C
class zFragFireAsset : public zFragAsset {
    // Members
public:
    class zFragLocation loc; // offset 0x18, size 0x28
    unsigned int flags; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
    float scale; // offset 0x48, size 0x4
    float fuel; // offset 0x4C, size 0x4
    float heat; // offset 0x50, size 0x4
    float damage; // offset 0x54, size 0x4
    float knockback; // offset 0x58, size 0x4
};
// total size: 0x4C
class firing_bone : public bone_behavior {
    // Members
public:
    signed int position_bone; // offset 0x14, size 0x4
    signed int aim_bone; // offset 0x18, size 0x4
    signed int atomic_num; // offset 0x1C, size 0x4
    union { // inferred
        class xModelTag tag; // offset 0x20, size 0x20
        class xVec3 bone_offset; // offset 0x20, size 0xC
    };
    class xVec3 fire_direction; // offset 0x40, size 0xC
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x82F0
class zWaterhose {
    // Members
public:
    enum iSndGroupHandle sndGroupHandle; // offset 0x0, size 0x4
    enum iSndHandle sndHandle; // offset 0x4, size 0x4
    class zWaterhose * prev; // offset 0x8, size 0x4
    class zWaterhose * next; // offset 0xC, size 0x4
    class Particle * particles; // offset 0x10, size 0x4
    unsigned char particleMem[32015]; // offset 0x14, size 0x7D0F
    class Layer layer[1]; // offset 0x7D24, size 0x1E8
    class CrossCardMesh crossCardMesh; // offset 0x7F0C, size 0x2D4
    signed int nextLayer; // offset 0x81E0, size 0x4
    signed int counter; // offset 0x81E4, size 0x4
    float texScroll; // offset 0x81E8, size 0x4
    signed int nextParticle; // offset 0x81EC, size 0x4
    class _tagxPad * pad; // offset 0x81F0, size 0x4
    unsigned char isFirstPass; // offset 0x81F4, size 0x1
    float angleLast; // offset 0x81F8, size 0x4
    class xVec3 emitterPos; // offset 0x81FC, size 0xC
    class xVec3 emitterDir; // offset 0x8208, size 0xC
    class xColor_tag color; // offset 0x8214, size 0x4
    float pitch; // offset 0x8218, size 0x4
    float friction; // offset 0x821C, size 0x4
    float gravity; // offset 0x8220, size 0x4
    float emitTime; // offset 0x8224, size 0x4
    signed int enabled; // offset 0x8228, size 0x4
    unsigned char doRender; // offset 0x822C, size 0x1
    class tweak_callback waterhoseStartCB; // offset 0x8230, size 0x28
    class xMat4x3 emitterMat; // offset 0x8260, size 0x40
    class xMat4x3 emitterMatB; // offset 0x82A0, size 0x40
    float emitterAngle; // offset 0x82E0, size 0x4
    unsigned int count; // offset 0x82E4, size 0x4
    float cullFade; // offset 0x82E8, size 0x4
    unsigned char isShutDown; // offset 0x82EC, size 0x1
    unsigned char doMgrUpdate; // offset 0x82ED, size 0x1
    unsigned char doMgrRender; // offset 0x82EE, size 0x1
    unsigned char isCulled; // offset 0x82EF, size 0x1
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x7C
struct /* @anon9 */ {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x28
class zFragLocation {
    // Members
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
    float rand_radius; // offset 0x24, size 0x4
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
// total size: 0x0
class xSurface {};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
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
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0xC
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0x14
class group_asset : public xDynAsset {
    // Members
public:
    signed int max_attackers; // offset 0x10, size 0x4
};
// total size: 0xA0
struct /* @anon10 */ {};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
class xFFX {};
// total size: 0x64
class zFragInfo {
    // Members
public:
    union { // inferred
        class zFragGroup group; // offset 0x0, size 0x54
        class zFragShrapnel shrapnel; // offset 0x0, size 0x4
        class zFragParticle particle; // offset 0x0, size 0x18
        class zFragProjectile projectile; // offset 0x0, size 0x64
        class zFragLightning lightning; // offset 0x0, size 0x10
        class zFragSound sound; // offset 0x0, size 0x8
        class zFragShockwave shockwave; // offset 0x0, size 0x38
        class zFragExplosion explosion; // offset 0x0, size 0x40
        class zFragDistortion distortion; // offset 0x0, size 0x18
        class zFragFire fire; // offset 0x0, size 0x4
    };
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x34
class on_edge : public npc_move {};
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
// total size: 0x6F0
class streamer : public human_throwable {
    // Members
public:
    class patrol_movepoints patrol_movepoints_state; // offset 0x2C0, size 0x44
    class busy busy_state; // offset 0x304, size 0x28
    class scramble scramble_state; // offset 0x32C, size 0x3C
    class defend defend_state; // offset 0x368, size 0x48
    class carry carry_state; // offset 0x3B0, size 0x24
    class take_damage take_damage_state; // offset 0x3D4, size 0x2C
    class projectile projectile_state; // offset 0x400, size 0x120
    class npc_jump npc_jump_state; // offset 0x520, size 0x40
    class taunt taunt_state; // offset 0x560, size 0x38
    class on_edge on_edge_state; // offset 0x598, size 0x34
    class stuck stuck_state; // offset 0x5CC, size 0x34
    class chase chase_state; // offset 0x600, size 0x3C
    class home home_state; // offset 0x63C, size 0x40
    class stream run_stream_state; // offset 0x67C, size 0x70
};
// total size: 0x48
class zFragExplosionAsset : public zFragAsset {
    // Members
public:
    unsigned int type; // offset 0x18, size 0x4
    class zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
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
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x7C
struct /* @anon11 */ {};
// total size: 0x48
class defend : public npc_move {
    // Members
public:
    unsigned char move_to_set; // offset 0x34, size 0x1
    unsigned char wait_count; // offset 0x35, size 0x1
    class xVec3 position; // offset 0x38, size 0xC
    float detect_radius; // offset 0x44, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x24
class RxObjSpace3DVertex {
    // Members
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
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
// total size: 0x7C
struct /* @anon12 */ {};
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x6F0
class streamer : public human_throwable {
    // Members
public:
    class patrol_movepoints patrol_movepoints_state; // offset 0x2C0, size 0x44
    class busy busy_state; // offset 0x304, size 0x28
    class scramble scramble_state; // offset 0x32C, size 0x3C
    class defend defend_state; // offset 0x368, size 0x48
    class carry carry_state; // offset 0x3B0, size 0x24
    class take_damage take_damage_state; // offset 0x3D4, size 0x2C
    class projectile projectile_state; // offset 0x400, size 0x120
    class npc_jump npc_jump_state; // offset 0x520, size 0x40
    class taunt taunt_state; // offset 0x560, size 0x38
    class on_edge on_edge_state; // offset 0x598, size 0x34
    class stuck stuck_state; // offset 0x5CC, size 0x34
    class chase chase_state; // offset 0x600, size 0x3C
    class home home_state; // offset 0x63C, size 0x40
    class stream run_stream_state; // offset 0x67C, size 0x70
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
// total size: 0x10
class behavior_implementation : public behavior {
    // Members
public:
    class common * owner; // offset 0xC, size 0x4
};
// total size: 0x0
class xModelAssetInfo {};
// total size: 0x10
class zFragLightning {
    // Members
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
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
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x184
class xParEmitterCustomSettings {
    // Members
public:
    char dummy[388]; // offset 0x0, size 0x184
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
    eFragCount = 11,
    eFragForceSize = 2147483647,
};
// total size: 0x70
class zFragLightningAsset : public zFragAsset {
    // Members
public:
    class zFragLocation start; // offset 0x18, size 0x28
    class zFragLocation end; // offset 0x40, size 0x28
    unsigned int startParentID; // offset 0x68, size 0x4
    unsigned int endParentID; // offset 0x6C, size 0x4
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
class behavior {
    // Members
public:
    class xEnt * owner; // offset 0x0, size 0x4
    unsigned int type; // offset 0x8, size 0x4
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
class stream : public run_stream {
    // Members
public:
    class bone_container bones; // offset 0x58, size 0x18
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x24
class carry : public behavior_implementation {
    // Members
public:
    unsigned char entered; // offset 0x10, size 0x1
    class xVec3 prevCenter; // offset 0x14, size 0xC
    class xEnt * throwTarget; // offset 0x20, size 0x4
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
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0x0
class zDuplicator {};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x18
class group : public xBase {
    // Members
public:
    class group_asset * asset; // offset 0x10, size 0x4
    signed int attacking_count; // offset 0x14, size 0x4
};
enum DeathType {
    eDeathType_Fade = 0,
    eDeathType_Explode = 1,
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
// total size: 0x4
class triangle {
    // Members
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
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
// total size: 0x7C
struct /* @anon13 */ {};
// total size: 0x98
struct /* @anon14 */ {};
// total size: 0x18
class bone_container : public behavior_implementation {
    // Members
public:
    class water_bone * array; // offset 0x10, size 0x4
    signed int size_; // offset 0x14, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x1
class group_attack {
    // Members
public:
    unsigned char attacking; // offset 0x0, size 0x1
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
// total size: 0x7C
struct /* @anon15 */ {};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
// total size: 0x8
class zFragSound {
    // Members
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    enum iSndHandle soundID; // offset 0x4, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xB4
struct /* @anon16 */ {};
// total size: 0x98
struct /* @anon17 */ {};
// total size: 0x98
struct /* @anon18 */ {};
// total size: 0x44
class zFragSoundAsset : public zFragAsset {
    // Members
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x28
};
// total size: 0xC
class navigation_mesh {
    // Members
public:
    class navigation_mesh * asset; // offset 0x0, size 0x4
    unsigned char registered_objects; // offset 0x4, size 0x1
    class circle * circle_list; // offset 0x8, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
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
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
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
// total size: 0x78
struct /* @anon19 */ {};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x18
class bone_container : public behavior_implementation {
    // Members
public:
    class flame_bone * array; // offset 0x10, size 0x4
    signed int size_; // offset 0x14, size 0x4
};
// total size: 0x54
class /* @class */ {
    // Members
public:
    class xVec3 endPoint[2]; // offset 0x0, size 0x18
    class xVec3 endPointB; // offset 0x18, size 0xC
    class xVec3 direction; // offset 0x24, size 0xC
    float length; // offset 0x30, size 0x4
    float scale; // offset 0x34, size 0x4
    float width; // offset 0x38, size 0x4
    float endParam[2]; // offset 0x3C, size 0x8
    float endVel[2]; // offset 0x44, size 0x8
    float paramSpan[2]; // offset 0x4C, size 0x8
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
// total size: 0x0
class xGrid {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x1E8
class Layer {
    // Members
public:
    class xVec3 pos[20]; // offset 0x0, size 0xF0
    class xVec3 vel[20]; // offset 0xF0, size 0xF0
    unsigned char isActive; // offset 0x1E0, size 0x1
    unsigned char isEnd; // offset 0x1E1, size 0x1
    float life; // offset 0x1E4, size 0x4
};
// total size: 0x28
class tweak_callback {
    // Members
public:
    void (* on_change)(class tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(class tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(class tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(class tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(class tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(class tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(class tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(class tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(class tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(class tweak_info &, void *); // offset 0x24, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x0
class xCurveAsset {};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x58
class run_stream : public npc_move {
    // Members
public:
    float current_attack_time; // offset 0x34, size 0x4
    float attack_time; // offset 0x38, size 0x4
    float flame_radius; // offset 0x3C, size 0x4
    float default_move_speed; // offset 0x40, size 0x4
    float move_attack_speed; // offset 0x44, size 0x4
    float attack_radius; // offset 0x48, size 0x4
    float cos_to_player; // offset 0x4C, size 0x4
    class group_attack attacker; // offset 0x50, size 0x1
    enum iSndHandle hChargeAttack; // offset 0x54, size 0x4
};
// total size: 0x38
class zFragShockwave {
    // Members
public:
    class zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
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
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
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
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x54
class zFragGroup {
    // Members
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
// total size: 0x40
class npc_jump : public npc_move {
    // Members
public:
    unsigned char face_dir; // offset 0x34, size 0x1
    float dust_emit_remaining; // offset 0x38, size 0x4
    float dust_time; // offset 0x3C, size 0x4
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
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x24
class xParabola {
    // Members
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0xA0
struct /* @anon20 */ {};
// total size: 0x20
class zFragShrapnelAsset : public zFragAsset {
    // Members
public:
    unsigned int shrapnelID; // offset 0x18, size 0x4
    class zShrapnelAsset * shrapAsset; // offset 0x1C, size 0x4
};
// total size: 0x98
struct /* @anon21 */ {};
// total size: 0x2D4
class CrossCardMesh {
    // Members
public:
    class xVec3 line[7][8]; // offset 0x0, size 0x2A0
    float segmentAngle[10]; // offset 0x2A0, size 0x28
    float segmentLength; // offset 0x2C8, size 0x4
    float segmentLengthDelta; // offset 0x2CC, size 0x4
    float targetSegmentLength; // offset 0x2D0, size 0x4
};
// total size: 0x2C0
class human_throwable : public common {};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x7C
struct /* @anon22 */ {};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x30
class trail_emitter {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    float emitted; // offset 0x10, size 0x4
    signed int glare_id; // offset 0x14, size 0x4
    float streak_delay; // offset 0x18, size 0x4
    float streaks_emitted; // offset 0x1C, size 0x4
    float spark_delay; // offset 0x20, size 0x4
    float sparks_emitted; // offset 0x24, size 0x4
    class presence_volume * presence; // offset 0x28, size 0x4
    enum iSndHandle tracking_sound; // offset 0x2C, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x4
class zFragShrapnel {
    // Members
public:
    class zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
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
// total size: 0x3C
class chase : public chase_base {};
// total size: 0x7C
struct /* @anon23 */ {};
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
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x1
class RyzMemData {};
// total size: 0x14
class bone_behavior : public behavior_implementation {
    // Members
public:
    signed int index; // offset 0x10, size 0x4
};
// total size: 0x34
class npc_move : public move {
    // Members
public:
    class xVec3 last_destination; // offset 0x24, size 0xC
    float cos_min_move_angle; // offset 0x30, size 0x4
};
// total size: 0x7C
struct /* @anon24 */ {};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0x40
class zFragExplosion {
    // Members
public:
    class zFragExplosionAsset * fasset; // offset 0x0, size 0x4
    class trail_emitter trail; // offset 0x4, size 0x30
    class xVec3 initPos; // offset 0x34, size 0xC
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
// total size: 0x98
struct /* @anon25 */ {};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x98
struct /* @anon26 */ {};
// total size: 0x98
struct /* @anon27 */ {};
// total size: 0x7C
struct /* @anon28 */ {};
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0xA0
struct /* @anon29 */ {};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x18
class zFragParticle {
    // Members
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
    unsigned char no_last_position; // offset 0x4, size 0x1
    float emit_remaining; // offset 0x8, size 0x4
    class xVec3 last_position; // offset 0xC, size 0xC
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
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA620 -> 0x001FA62C
*/
// Range: 0x1FA620 -> 0x1FA62C
class zNPCTypeInfo * zNPCTypesGetInfo() {
    /* anonymous block */ {
        // Range: 0x1FA620 -> 0x1FA62C
        class zNPCTypeInfo info[27]; // @ 0x005E8C10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA630 -> 0x001FA65C
*/
// Range: 0x1FA630 -> 0x1FA65C
static void lobber_setup() {
    /* anonymous block */ {
        // Range: 0x1FA630 -> 0x1FA65C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA660 -> 0x001FA684
*/
// Range: 0x1FA660 -> 0x1FA684
static void shielded_setup() {
    /* anonymous block */ {
        // Range: 0x1FA660 -> 0x1FA684
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA690 -> 0x001FA6B4
*/
// Range: 0x1FA690 -> 0x1FA6B4
static void human_setup() {
    /* anonymous block */ {
        // Range: 0x1FA690 -> 0x1FA6B4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA6C0 -> 0x001FA70C
*/
// Range: 0x1FA6C0 -> 0x1FA70C
void zNPCTypes_RegisterTypes(class xFactory * fac /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1FA6C0 -> 0x1FA70C
        class XGOFTypeInfo typelist[34]; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA710 -> 0x001FA718
*/
// Range: 0x1FA710 -> 0x1FA718
void zNPCTypes_ShutdownTypes() {
    /* anonymous block */ {
        // Range: 0x1FA710 -> 0x1FA718
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FA720 -> 0x001FA728
*/
// Range: 0x1FA720 -> 0x1FA728
void zNPCTypes_StartupTypes() {
    /* anonymous block */ {
        // Range: 0x1FA720 -> 0x1FA728
    }
}


