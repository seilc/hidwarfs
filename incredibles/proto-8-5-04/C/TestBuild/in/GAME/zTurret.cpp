/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
static class zTurret * callbackTurret; // size: 0x4, address: 0x0
static class zTurretCamera turretCamera; // size: 0xD0, address: 0x67F230
static void (* baseFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x4, address: 0x608DC0
static void (* gunFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x4, address: 0x608DC4
static class xVec3 oldPlayerPos; // size: 0xC, address: 0x67F300
static unsigned char (* oldInnerTexFlashCB)(void *, class TextureFlasher *); // size: 0x4, address: 0x608DC8
static void * oldInnerCallbackData; // size: 0x4, address: 0x608DCC
static unsigned char (* oldOuterTexFlashCB)(void *, class TextureFlasher *); // size: 0x4, address: 0x608DD0
static void * oldOuterCallbackData; // size: 0x4, address: 0x608DD4
class lightweight_system * system; // size: 0x4, address: 0x608DD8
class xAnimState * shootingStateAnims[3]; // size: 0xC, address: 0x67F310
unsigned int AnimGunIdleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x207D30
unsigned int AnimGunShoot2Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x207D60
unsigned int AnimGunShoot1Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x207DA0
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x1C7730
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
unsigned char lowHealth(void *, class TextureFlasher *); // size: 0x0, address: 0x2099C0
unsigned char overheated(void *, class TextureFlasher *); // size: 0x0, address: 0x209A70
void zTurretEnt_GunEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x209690
void zTurretEnt_BaseEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x209760
class zGlobals globals; // size: 0x640, address: 0x61C210
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
unsigned int FB_YRES; // size: 0x4, address: 0x6076C0
unsigned int FB_XRES; // size: 0x4, address: 0x6076BC
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x1D0B50
// total size: 0x24
struct /* @anon3 */ {} z::lightweight_system<z::laser, 40>::__vtable; // size: 0x24, address: 0x5FD7A0
// total size: 0x24
struct /* @anon2 */ {} z::lightweight_system_base::__vtable; // size: 0x24, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
void zTurret_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x209610
// total size: 0x24
struct /* @anon0 */ {} zTurretCamera::__vtable; // size: 0x24, address: 0x5FD770
// total size: 0x24
struct /* @anon1 */ {} xCam::__vtable; // size: 0x24, address: 0x0
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
// total size: 0x3C
class zTurret : public xBase {
    // Members
public:
    class zTurretAsset * asset; // offset 0x10, size 0x4
    class xEnt * baseEnt; // offset 0x14, size 0x4
    class xEnt * gunEnt; // offset 0x18, size 0x4
    float initYaw; // offset 0x1C, size 0x4
    float yaw; // offset 0x20, size 0x4
    float initPitch; // offset 0x24, size 0x4
    float pitch; // offset 0x28, size 0x4
    float animTime; // offset 0x2C, size 0x4
    float heatFraction; // offset 0x30, size 0x4
    signed short currentHitPoints; // offset 0x34, size 0x2
    unsigned char nextGunId; // offset 0x36, size 0x1
    unsigned char shootingState; // offset 0x37, size 0x1
    class pointer_asset * finalPointer; // offset 0x38, size 0x4
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
// total size: 0x18
class hud_element : public xBase {
    // Members
public:
    class hud_element * _next; // offset 0x10, size 0x4
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xC
class lightweight {
    // Members
public:
    unsigned char used; // offset 0x0, size 0x1
    unsigned int id; // offset 0x4, size 0x4
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
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
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
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
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
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
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
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
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x54
class zFragGroup {
    // Members
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
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
// total size: 0x0
class activity_data {};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x8
class zAttackTableSection {
    // Members
public:
    unsigned int section; // offset 0x0, size 0x4
    unsigned short start; // offset 0x4, size 0x2
    unsigned short count; // offset 0x6, size 0x2
};
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
class /* @class */ {
    // Members
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x0
class zSlideCam {};
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
// total size: 0x54
class xCamConfigFollow {
    // Members
public:
    class zone_data zone_rest; // offset 0x0, size 0x18
    class zone_data zone_above; // offset 0x18, size 0x18
    class zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
class zCheckPoint {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
    unsigned char * jsp_active; // offset 0x14, size 0x4
    enum xSndEffect currentEffect; // offset 0x18, size 0x4
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
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x0
class xCurveAsset {};
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
// total size: 0x0
class effect {};
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
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
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
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x4
class zFragShrapnel {
    // Members
public:
    class zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
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
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
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
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x1C
class FootLockInfo {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    signed int bone; // offset 0xC, size 0x4
    class xVec3 lockPos; // offset 0x10, size 0xC
};
// total size: 0xD0
class zTurretCamera : public xCam {};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class effectBone {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 * pos; // offset 0x4, size 0x4
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
// total size: 0x20
class zFragShrapnelAsset : public zFragAsset {
    // Members
public:
    unsigned int shrapnelID; // offset 0x18, size 0x4
    class zShrapnelAsset * shrapAsset; // offset 0x1C, size 0x4
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
// total size: 0x0
class zGrapplePoint {};
// total size: 0x70
class zFragLightningAsset : public zFragAsset {
    // Members
public:
    class zFragLocation start; // offset 0x18, size 0x28
    class zFragLocation end; // offset 0x40, size 0x28
    unsigned int startParentID; // offset 0x68, size 0x4
    unsigned int endParentID; // offset 0x6C, size 0x4
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
// total size: 0x0
class BossMeter {};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
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
// total size: 0x4
class lightweight_system_base {};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class StepFX {
    // Members
public:
    class zSurfAssetIN * currentSurface; // offset 0x0, size 0x4
    class zSurfAssetIN * lastSurface; // offset 0x4, size 0x4
    float lastSurfaceTime; // offset 0x8, size 0x4
    class zFootstepDetect footsteps[2]; // offset 0xC, size 0x20
    class zDecalEmitterList * decals; // offset 0x2C, size 0x4
};
// total size: 0x21CC
class lightweight_system : public lightweight_system_base {
    // Members
public:
    class laser object[40]; // offset 0x4, size 0x21C0
    class lightweight_system * * system; // offset 0x21C4, size 0x4
    unsigned int current_id; // offset 0x21C8, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0x48
class zFragExplosionAsset : public zFragAsset {
    // Members
public:
    unsigned int type; // offset 0x18, size 0x4
    class zFragLocation loc; // offset 0x1C, size 0x28
    unsigned int flags; // offset 0x44, size 0x4
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
// total size: 0x0
class FamilyMeter {};
// total size: 0x18
class zFragParticle {
    // Members
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
    unsigned char no_last_position; // offset 0x4, size 0x1
    float emit_remaining; // offset 0x8, size 0x4
    class xVec3 last_position; // offset 0xC, size 0xC
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x14
class hitBoneInfo {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 boneOffset; // offset 0x4, size 0xC
    signed short atomic; // offset 0x10, size 0x2
};
// total size: 0x0
class zDecalEmitterList {};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
// total size: 0x0
class xModelAssetParam {};
// total size: 0x2
class /* @class */ {
    // Members
public:
    signed short incrediPower; // offset 0x0, size 0x2
};
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
class zone_data {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    class xVec3 face; // offset 0xC, size 0xC
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
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x84
class zTurretAsset : public xDynAsset {
    // Members
public:
    unsigned int baseObject; // offset 0x10, size 0x4
    unsigned int gunObject; // offset 0x14, size 0x4
    float yawRange; // offset 0x18, size 0x4
    float yawSpeed; // offset 0x1C, size 0x4
    float pitchRange; // offset 0x20, size 0x4
    float pitchSpeed; // offset 0x24, size 0x4
    float recoveryTime; // offset 0x28, size 0x4
    float overheatFraction; // offset 0x2C, size 0x4
    float coolingSpeed; // offset 0x30, size 0x4
    float overheatTime; // offset 0x34, size 0x4
    signed short hitPoints; // offset 0x38, size 0x2
    unsigned short damage; // offset 0x3A, size 0x2
    class xVec3 cameraOffset; // offset 0x3C, size 0xC
    unsigned int finalPointer; // offset 0x48, size 0x4
    class xColor_tag laserColor; // offset 0x4C, size 0x4
    class xVec3 offsets[2]; // offset 0x50, size 0x18
    float laserLength; // offset 0x68, size 0x4
    float laserThickness; // offset 0x6C, size 0x4
    float laserSpeed; // offset 0x70, size 0x4
    union { // inferred
        unsigned int laserSoundGroupId; // offset 0x74, size 0x4
        enum iSndGroupHandle laserSoundGroup; // offset 0x74, size 0x4
    };
    union { // inferred
        unsigned int targetTextureId; // offset 0x78, size 0x4
        class RwRaster * targetTextureRaster; // offset 0x78, size 0x4
    };
    float targetTextureSizeX; // offset 0x7C, size 0x4
    float targetTextureSizeY; // offset 0x80, size 0x4
};
// total size: 0x0
class zCutsceneMgr {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0x0
class zKaboomMinigame {};
// total size: 0x18
class zFragDistortion {
    // Members
public:
    class zFragDistortionAsset * fasset; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    signed int type; // offset 0x10, size 0x4
    float repeat_time; // offset 0x14, size 0x4
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
// total size: 0x44
class zFragSoundAsset : public zFragAsset {
    // Members
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x28
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x0
class xFFX {};
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
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class zAnimCacheEntry {};
// total size: 0x0
class xSurface {};
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
// total size: 0x10
class zFragBone {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x10
class zFootstepDetect {
    // Members
public:
    class xVec3 last_emit_position; // offset 0x0, size 0xC
    unsigned char was_lifted; // offset 0xC, size 0x1
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
class zFragFire {
    // Members
public:
    class zFragFireAsset * fasset; // offset 0x0, size 0x4
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0x24
struct /* @anon0 */ {};
// total size: 0x0
class anim_coll_data {};
// total size: 0x10
class zFootstepsData {
    // Members
public:
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
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
// total size: 0x0
class zInteraction {};
enum HitType {
    eHitType_None = -1,
    eHitType_BackGround = 0,
    eHitType_FrontGround = 1,
    eHitType_BackAir = 2,
    eHitType_FrontAir = 3,
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
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x28
class mblur_data {
    // Members
public:
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
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
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x24
struct /* @anon1 */ {};
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
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x28
class zFragLocation {
    // Members
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
    float rand_radius; // offset 0x24, size 0x4
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
// total size: 0xC
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
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
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x184
class xParEmitterCustomSettings {
    // Members
public:
    char dummy[388]; // offset 0x0, size 0x184
};
// total size: 0x0
class xOneLiner {};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
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
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x24
struct /* @anon2 */ {};
// total size: 0x0
class motive_node {};
// total size: 0x8
class Point {
    // Members
public:
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x24
struct /* @anon3 */ {};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x8
class zFragSound {
    // Members
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    enum iSndHandle soundID; // offset 0x4, size 0x4
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
enum iSndGroupHandle {
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
enum iSndHandle {
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207B20 -> 0x00207D28
*/
// Range: 0x207B20 -> 0x207D28
class xAnimTable * create_anim_table() {
    /* anonymous block */ {
        // Range: 0x207B20 -> 0x207D28
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207D30 -> 0x00207D60
*/
// Range: 0x207D30 -> 0x207D60
static unsigned int AnimGunIdleCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x207D30 -> 0x207D60
        class zTurret * turret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207D60 -> 0x00207DA0
*/
// Range: 0x207D60 -> 0x207DA0
static unsigned int AnimGunShoot2Check(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x207D60 -> 0x207DA0
        class zTurret * turret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207DA0 -> 0x00207DE0
*/
// Range: 0x207DA0 -> 0x207DE0
static unsigned int AnimGunShoot1Check(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x207DA0 -> 0x207DE0
        class zTurret * turret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00207DE0 -> 0x002080D8
*/
// Range: 0x207DE0 -> 0x2080D8
void zTurret_Dismount(class zTurret * turret /* r17 */) {
    /* anonymous block */ {
        // Range: 0x207DE0 -> 0x2080D8
        class zCommonPlayer * player; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002080E0 -> 0x00208468
*/
// Range: 0x2080E0 -> 0x208468
void zTurret_Mount(class zTurret * turret /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2080E0 -> 0x208468
        class zCommonPlayer * player; // r2
        class xVec3 euler; // r29+0x20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208470 -> 0x00208860
*/
// Range: 0x208470 -> 0x208860
void zTurret_RenderTarget(class zTurret * turret /* r17 */) {
    /* anonymous block */ {
        // Range: 0x208470 -> 0x208860
        class RwSky2DVertex vertex[4]; // r29+0x60
        float z; // r29+0x170
        float cooz; // r7
        float shiftX; // r6
        float shiftY; // r5
        float centerX; // r4
        float centerY; // r29+0x170
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208860 -> 0x00208B5C
*/
// Range: 0x208860 -> 0x208B5C
signed int zTurret_Update(class zTurret * turret /* r16 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x208860 -> 0x208B5C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208B60 -> 0x00208FC4
*/
// Range: 0x208B60 -> 0x208FC4
void zTurret_UpdateFiring(class zTurret * turret /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x208B60 -> 0x208FC4
        unsigned char isShooting; // r17
        class xVec3 direction; // r29+0x140
        class xVec3 start; // r29+0x130
        class laser new_laser; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00208FD0 -> 0x002093E8
*/
// Range: 0x208FD0 -> 0x2093E8
void zTurret_UpdatePosOrient(class zTurret * turret /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x208FD0 -> 0x2093E8
        class xVec2 inputDefl; // r29+0x58
        float cYaw; // r29+0x60
        float cPitch; // r29+0x60
        class xVec3 euler; // r29+0x48
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002093F0 -> 0x00209610
*/
// Range: 0x2093F0 -> 0x209610
static void getPadDefl(class _tagPadAnalog * stick /* r2 */, class xVec2 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2093F0 -> 0x209610
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209610 -> 0x00209688
*/
// Range: 0x209610 -> 0x209688
void zTurret_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x209610 -> 0x209688
        class zTurret * turret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209690 -> 0x0020975C
*/
// Range: 0x209690 -> 0x20975C
void zTurretEnt_GunEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x209690 -> 0x20975C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209760 -> 0x0020982C
*/
// Range: 0x209760 -> 0x20982C
void zTurretEnt_BaseEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x209760 -> 0x20982C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209830 -> 0x0020997C
*/
// Range: 0x209830 -> 0x20997C
void zTurret_Init(class zTurret * turret /* r17 */, class zTurretAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x209830 -> 0x20997C
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209980 -> 0x00209988
*/
// Range: 0x209980 -> 0x209988
void zTurret_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x209980 -> 0x209988
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209990 -> 0x002099C0
*/
// Range: 0x209990 -> 0x2099C0
void zTurret_SceneEnter() {
    /* anonymous block */ {
        // Range: 0x209990 -> 0x2099C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002099C0 -> 0x00209A68
*/
// Range: 0x2099C0 -> 0x209A68
static unsigned char lowHealth(void * context /* r2 */, class TextureFlasher * pFlasher /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2099C0 -> 0x209A68
        class zTurret * turret; // r2
        float healthFraction; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209A70 -> 0x00209ABC
*/
// Range: 0x209A70 -> 0x209ABC
static unsigned char overheated(void * context /* r2 */, class TextureFlasher * pFlasher /* r2 */) {
    /* anonymous block */ {
        // Range: 0x209A70 -> 0x209ABC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTurret.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00209AC0 -> 0x00209AC8
*/
// Range: 0x209AC0 -> 0x209AC8
// this: r2
void zTurretCamera::update() {
    /* anonymous block */ {
        // Range: 0x209AC0 -> 0x209AC8
    }
}


