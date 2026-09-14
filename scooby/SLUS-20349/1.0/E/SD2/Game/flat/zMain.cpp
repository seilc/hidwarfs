/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _zHipDepend sHipDependTable[1]; // size: 0x8, address: 0x0
class zGlobals globals; // size: 0x3330, address: 0x362FD0
signed int gBuildNumber; // size: 0x4, address: 0x0
unsigned int gEE2BuildNumber; // size: 0x4, address: 0x0
static signed int sShowMenuOnBoot; // size: 0x4, address: 0x357498
static class st_SERIAL_PERCID_SIZE g_xser_sizeinfo[2]; // size: 0x10, address: 0x28A1D0
class _tagxPad * gDebugPad; // size: 0x4, address: 0x357C30
void zMainMemLvlChkCB(); // size: 0x0, address: 0x116440
// total size: 0xE8
class _xEnt : public xBase {
    // Members
public:
    class p2EntAsset * asset; // offset 0x10, size 0x4
    unsigned char flags; // offset 0x14, size 0x1
    unsigned char subType; // offset 0x15, size 0x1
    unsigned char pflags; // offset 0x16, size 0x1
    unsigned char moreFlags; // offset 0x17, size 0x1
    unsigned char pad0[3]; // offset 0x18, size 0x3
    unsigned char num_ffx; // offset 0x1B, size 0x1
    unsigned short idx; // offset 0x1C, size 0x2
    unsigned short num_updates; // offset 0x1E, size 0x2
    float material_alpha; // offset 0x20, size 0x4
    float fade_tmr; // offset 0x24, size 0x4
    unsigned char collType; // offset 0x28, size 0x1
    unsigned char collLev; // offset 0x29, size 0x1
    unsigned char chkby; // offset 0x2A, size 0x1
    unsigned char penby; // offset 0x2B, size 0x1
    class xModelInstance * model; // offset 0x2C, size 0x4
    void (* update)(class _xEnt *, class _xScene *, float); // offset 0x30, size 0x4
    void (* bupdate)(class _xEnt *, class _xVec3 *); // offset 0x34, size 0x4
    void (* move)(class _xEnt *, class _xScene *, float, class _xEntFrame *); // offset 0x38, size 0x4
    void (* render)(class _xEnt *); // offset 0x3C, size 0x4
    class _xEntFrame * frame; // offset 0x40, size 0x4
    class _xEntCollis * collis; // offset 0x44, size 0x4
    class _xBound bound; // offset 0x48, size 0x38
    float updateTimer; // offset 0x80, size 0x4
    float updateAcc; // offset 0x84, size 0x4
    void (* updateTimerFunc)(class _xEnt *); // offset 0x88, size 0x4
    void (* transl)(class _xEnt *, class _xVec3 *); // offset 0x8C, size 0x4
    class iShadowCache ishadow; // offset 0x90, size 0x48
    class xSurface * surf; // offset 0xD8, size 0x4
    class xFFX * ffx; // offset 0xDC, size 0x4
    class _xEnt * driver; // offset 0xE0, size 0x4
    class _xEntShadow * ent_shadow; // offset 0xE4, size 0x4
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
    unsigned short renderFrame; // offset 0x94, size 0x2
    unsigned short pad; // offset 0x96, size 0x2
    class RwFrustumPlane frustumPlanes[6]; // offset 0x98, size 0x78
    class RwBBox frustumBoundBox; // offset 0x110, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x128, size 0x60
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class zPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class zPortalAsset : public p2BaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
class _xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
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
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
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
// total size: 0xEC
class _zEnt : public _xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xE8, size 0x4
};
// total size: 0x40
class _xMat4x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x660
class zPlayerGlobals {
    // Members
public:
    class _zEnt ent; // offset 0x0, size 0xEC
    unsigned int Visible; // offset 0xEC, size 0x4
    unsigned int Health; // offset 0xF0, size 0x4
    signed int Speed; // offset 0xF4, size 0x4
    signed int Sneak; // offset 0xF8, size 0x4
    signed int Teeter; // offset 0xFC, size 0x4
    signed int CanSlip; // offset 0x100, size 0x4
    float SlipFadeTimer; // offset 0x104, size 0x4
    signed int Slide; // offset 0x108, size 0x4
    float SlideTimer; // offset 0x10C, size 0x4
    signed int Stepping; // offset 0x110, size 0x4
    signed int JumpState; // offset 0x114, size 0x4
    signed int LastJumpState; // offset 0x118, size 0x4
    float JumpTimer; // offset 0x11C, size 0x4
    float LookAroundTimer; // offset 0x120, size 0x4
    unsigned int LookAroundRand; // offset 0x124, size 0x4
    unsigned int LastProjectile; // offset 0x128, size 0x4
    float DecelRun; // offset 0x12C, size 0x4
    float DecelRunSpeed; // offset 0x130, size 0x4
    float HotsauceTimer; // offset 0x134, size 0x4
    float LeanLerp; // offset 0x138, size 0x4
    unsigned int HeadbuttHit; // offset 0x13C, size 0x4
    float ScareTimer; // offset 0x140, size 0x4
    class xBase * ScareSource; // offset 0x144, size 0x4
    unsigned int ScareShaggy; // offset 0x148, size 0x4
    float CowerTimer; // offset 0x14C, size 0x4
    float DamageTimer; // offset 0x150, size 0x4
    float ControlOffTimer; // offset 0x154, size 0x4
    float HelmetTimer; // offset 0x158, size 0x4
    unsigned int WorldDisguise; // offset 0x15C, size 0x4
    unsigned int Bounced; // offset 0x160, size 0x4
    float FallDeathTimer; // offset 0x164, size 0x4
    float HeadbuttVel; // offset 0x168, size 0x4
    float HeadbuttTimer; // offset 0x16C, size 0x4
    unsigned int SpecialReceived; // offset 0x170, size 0x4
    class _xEnt * MountChimney; // offset 0x174, size 0x4
    float MountChimOldY; // offset 0x178, size 0x4
    float ShockRadius; // offset 0x17C, size 0x4
    float ShockRadiusOld; // offset 0x180, size 0x4
    float Face_ScareTimer; // offset 0x184, size 0x4
    unsigned int Face_ScareRandom; // offset 0x188, size 0x4
    unsigned int Face_Event; // offset 0x18C, size 0x4
    float Face_EventTimer; // offset 0x190, size 0x4
    float Face_PantTimer; // offset 0x194, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x198, size 0x4
    unsigned int IdleRand; // offset 0x19C, size 0x4
    float IdleMinorTimer; // offset 0x1A0, size 0x4
    float IdleMajorTimer; // offset 0x1A4, size 0x4
    float IdleSitTimer; // offset 0x1A8, size 0x4
    signed int Transparent; // offset 0x1AC, size 0x4
    class _zEnt * FireTarget; // offset 0x1B0, size 0x4
    class _zEnt * DamageSource; // offset 0x1B4, size 0x4
    unsigned int ControlOn; // offset 0x1B8, size 0x4
    unsigned int ControlOnEvent; // offset 0x1BC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1C0, size 0x4
    float AutoMoveDist; // offset 0x1C4, size 0x4
    class _xVec3 AutoMoveTarget; // offset 0x1C8, size 0xC
    class xBase * AutoMoveObject; // offset 0x1D4, size 0x4
    class _zEnt * Diggable; // offset 0x1D8, size 0x4
    float DigTimer; // offset 0x1DC, size 0x4
    class zShaggy1Globals Shaggy1; // offset 0x1E0, size 0xE8
    class _zEnt * Shaggy8Call; // offset 0x2C8, size 0x4
    float Shaggy8CallTimer; // offset 0x2CC, size 0x4
    class _zEntHangable * HangFound; // offset 0x2D0, size 0x4
    class _zEntHangable * HangEnt; // offset 0x2D4, size 0x4
    class _zEntHangable * HangEntLast; // offset 0x2D8, size 0x4
    class _xVec3 HangPivot; // offset 0x2DC, size 0xC
    class _xVec3 HangVel; // offset 0x2E8, size 0xC
    float HangLength; // offset 0x2F4, size 0x4
    class _xVec3 HangStartPos; // offset 0x2F8, size 0xC
    float HangStartLerp; // offset 0x304, size 0x4
    class iModelTag HangPawTag[4]; // offset 0x308, size 0x80
    float HangPawOffset; // offset 0x388, size 0x4
    float HangElapsed; // offset 0x38C, size 0x4
    float Jump_CurrGravity; // offset 0x390, size 0x4
    float Jump_HoldTimer; // offset 0x394, size 0x4
    float Jump_ChangeTimer; // offset 0x398, size 0x4
    signed int Jump_CanDouble; // offset 0x39C, size 0x4
    signed int Jump_CanFloat; // offset 0x3A0, size 0x4
    signed int Jump_SpringboardStart; // offset 0x3A4, size 0x4
    class _zPlatform * Jump_Springboard; // offset 0x3A8, size 0x4
    signed int cheat_mode; // offset 0x3AC, size 0x4
    unsigned int Inv_Clue; // offset 0x3B0, size 0x4
    unsigned int Inv_Key; // offset 0x3B4, size 0x4
    unsigned int Inv_Chances; // offset 0x3B8, size 0x4
    unsigned int Inv_ScoobySnacks; // offset 0x3BC, size 0x4
    unsigned int Inv_Specials; // offset 0x3C0, size 0x4
    unsigned int Inv_Mtokens[1]; // offset 0x3C4, size 0x4
    signed int Inv_Ammo[2]; // offset 0x3C8, size 0x8
    signed int Inv_AmmoMax[2]; // offset 0x3D0, size 0x8
    class iModelTag BubbleTag; // offset 0x3D8, size 0x20
    class _xEntDrive drv; // offset 0x3F8, size 0x50
    class xSurface * floor_surf; // offset 0x448, size 0x4
    class _xVec3 floor_norm; // offset 0x44C, size 0xC
    signed int slope; // offset 0x458, size 0x4
    class _xCollis earc_coll; // offset 0x45C, size 0x44
    class _xSphere head_sph; // offset 0x4A0, size 0x10
    class iModelTag center_tag; // offset 0x4B0, size 0x20
    class iModelTag head_tag; // offset 0x4D0, size 0x20
    unsigned int TongueFlags[2]; // offset 0x4F0, size 0x8
    class _xVec3 RootUp; // offset 0x4F8, size 0xC
    class _xVec3 RootUpTarget; // offset 0x504, size 0xC
    class zPlayerStatic s; // offset 0x510, size 0x13C
    class zCheckPoint cp; // offset 0x64C, size 0x14
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class _xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
// total size: 0x8
class _tagxCamPath {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
class _xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x4
class _tagp2CamStaticAsset {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0xB0
class _tagxCam : public xBase {
    // Members
public:
    unsigned int valid_flags; // offset 0x10, size 0x4
    enum _tagCamType cam_type; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
    class _xMat4x3 mat; // offset 0x20, size 0x40
    class _xQuat rot; // offset 0x60, size 0x10
    float fov; // offset 0x70, size 0x4
    float trans_time; // offset 0x74, size 0x4
    enum _tagTransType trans_type; // offset 0x78, size 0x4
    class _xVec3 view_offset; // offset 0x7C, size 0xC
    class _tagCamInfo u; // offset 0x88, size 0x18
    class xCamAsset * asset; // offset 0xA0, size 0x4
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
class _xEntShadow {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 vec; // offset 0xC, size 0xC
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0x44
class zCutsceneZbufferHack {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class zCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x94
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpCollSector * colSectorRoot; // offset 0x80, size 0x4
    class RpMeshHeader * mesh; // offset 0x84, size 0x4
    class RxPipeline * pipeline; // offset 0x88, size 0x4
    unsigned short matListWindowBase; // offset 0x8C, size 0x2
    unsigned short numVertices; // offset 0x8E, size 0x2
    unsigned short numPolygons; // offset 0x90, size 0x2
    unsigned short pad; // offset 0x92, size 0x2
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x10
class xCutsceneData {
    // Members
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
// total size: 0x8
class _zHipDepend {
    // Members
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned int dependID; // offset 0x4, size 0x4
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
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class rxReq {};
// total size: 0x10
class _xRot {
    // Members
public:
    class _xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x4C
class xFontBox {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    unsigned int font; // offset 0x14, size 0x4
    class iColor_tag color; // offset 0x18, size 0x4
    class iColor_tag saved_color; // offset 0x1C, size 0x4
    float draw_width; // offset 0x20, size 0x4
    float draw_height; // offset 0x24, size 0x4
    float x_spacing; // offset 0x28, size 0x4
    float y_spacing; // offset 0x2C, size 0x4
    float depth; // offset 0x30, size 0x4
    float inset_left; // offset 0x34, size 0x4
    float inset_right; // offset 0x38, size 0x4
    float inset_top; // offset 0x3C, size 0x4
    float inset_bottom; // offset 0x40, size 0x4
    char * text; // offset 0x44, size 0x4
    class iColor_tag backdrop_color; // offset 0x48, size 0x4
};
// total size: 0x1DC
class zScene : public _xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x6C, size 0x4
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class _zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int baseCount[43]; // offset 0x7C, size 0xAC
    class xBase * baseList[43]; // offset 0x128, size 0xAC
    unsigned int num_bubbles; // offset 0x1D4, size 0x4
    class _zEnt * * bubbles; // offset 0x1D8, size 0x4
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
// total size: 0x48
class iShadowCache {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 right; // offset 0xC, size 0xC
    class _xVec3 corner[4]; // offset 0x18, size 0x30
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
    class RwSurfaceProperties surfaceProps; // offset 0x68, size 0xC
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x74, size 0x4
    class RxPipeline * pipeline; // offset 0x78, size 0x4
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
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0xB0
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    class sceCdlFILE file; // offset 0x88, size 0x24
    void (* cb)(signed int); // offset 0xAC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _tagCamInfo {
    // Members
public:
    union { // inferred
        class _tagxCamFollow f; // offset 0x0, size 0x18
        class _tagxCamStatic s; // offset 0x0, size 0x4
        class _tagxCamShoulder sh; // offset 0x0, size 0x14
        class _tagxCamPath p; // offset 0x0, size 0x8
        class _tagxCamStaticFollow sf; // offset 0x0, size 0x4
    };
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
// total size: 0x50
class p2EntAsset : public p2BaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    class _xVec3 ang; // offset 0x10, size 0xC
    class _xVec3 pos; // offset 0x1C, size 0xC
    class _xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0x4
class _tagp2CamStaticFollowAsset {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x20
class p2LinkAsset {
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
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x20
class _zCutsceneMgr : public xBase {
    // Members
public:
    class zCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class zCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
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
// total size: 0xE8
class zShaggy1Globals {
    // Members
public:
    class _zEnt * GrabTry; // offset 0x0, size 0x4
    class _zEnt * Grab; // offset 0x4, size 0x4
    float GrabRot; // offset 0x8, size 0x4
    float GrabOffset; // offset 0xC, size 0x4
    float GrabTimer; // offset 0x10, size 0x4
    class _xVec3 ReleaseTrans; // offset 0x14, size 0xC
    class _xVec3 HangTrans; // offset 0x20, size 0xC
    class _xVec3 LastDelta; // offset 0x2C, size 0xC
    unsigned int ThrowEnded; // offset 0x38, size 0x4
    float ExtraTransY; // offset 0x3C, size 0x4
    class _xVec3 ThrowPos; // offset 0x40, size 0xC
    class _xVec3 ThrowVel; // offset 0x4C, size 0xC
    unsigned int CatchMe; // offset 0x58, size 0x4
    unsigned int CatchYou; // offset 0x5C, size 0x4
    class _zEnt * HangTarget; // offset 0x60, size 0x4
    float ThrowTimer; // offset 0x64, size 0x4
    class _xVec3 HangStart; // offset 0x68, size 0xC
    class _xVec3 HangRelative; // offset 0x74, size 0xC
    unsigned int SetDown; // offset 0x80, size 0x4
    unsigned int GrabOn; // offset 0x84, size 0x4
    unsigned int ThrowState; // offset 0x88, size 0x4
    float ThrowRot; // offset 0x8C, size 0x4
    float CatchHeight; // offset 0x90, size 0x4
    float CatchVel; // offset 0x94, size 0x4
    class xBase * ThrowTgt; // offset 0x98, size 0x4
    float ThrowTgtAngle; // offset 0x9C, size 0x4
    float ThrowTgtPeak; // offset 0xA0, size 0x4
    float ThrowTgtOffset; // offset 0xA4, size 0x4
    unsigned int ThrowTgtAdjust; // offset 0xA8, size 0x4
    class _xVec3 ThrowTgtVec; // offset 0xAC, size 0xC
    float ThrowTgtSpeed; // offset 0xB8, size 0x4
    float ThrowAccel; // offset 0xBC, size 0x4
    class _zEnt * Hangable[10]; // offset 0xC0, size 0x28
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x68
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
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
};
// total size: 0xC8
class zCutsceneMgrAsset : public p2BaseAsset {
    // Members
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    float startTime[15]; // offset 0x14, size 0x3C
    float endTime[15]; // offset 0x50, size 0x3C
    unsigned int emitID[15]; // offset 0x8C, size 0x3C
};
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
};
// total size: 0x138
class xCutscene {
    // Members
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    void * RawBuf; // offset 0x20, size 0x4
    void * AlignBuf; // offset 0x24, size 0x4
    float Time; // offset 0x28, size 0x4
    float CamTime; // offset 0x2C, size 0x4
    unsigned int PlayIndex; // offset 0x30, size 0x4
    unsigned int Ready; // offset 0x34, size 0x4
    signed int DataLoading; // offset 0x38, size 0x4
    unsigned int GotData; // offset 0x3C, size 0x4
    unsigned int ShutDownWait; // offset 0x40, size 0x4
    float PlaybackSpeed; // offset 0x44, size 0x4
    unsigned int Opened; // offset 0x48, size 0x4
    class tag_xFile File; // offset 0x4C, size 0xC0
    unsigned int CurrSector; // offset 0x10C, size 0x4
    void * MemBuf; // offset 0x110, size 0x4
    void * MemCurr; // offset 0x114, size 0x4
    unsigned int SndStarted; // offset 0x118, size 0x4
    unsigned int SndNumChannel; // offset 0x11C, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x120, size 0x8
    unsigned int SndAssetID[2]; // offset 0x128, size 0x8
    unsigned int SndHandle[2]; // offset 0x130, size 0x8
};
// total size: 0x18
class _tagxCamFollow {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x38
class _xBound {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    union { // inferred
        class _xSphere sph; // offset 0x4, size 0x10
        class _xBBox box; // offset 0x4, size 0x24
        class _xCylinder cyl; // offset 0x4, size 0x14
    };
    class _xMat4x3 * mat; // offset 0x28, size 0x4
    class xQCData qcd; // offset 0x2C, size 0xC
};
// total size: 0x6C
class _xScene {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short num_ents; // offset 0x2, size 0x2
    unsigned short num_trigs; // offset 0x4, size 0x2
    unsigned short num_stats; // offset 0x6, size 0x2
    unsigned short num_dyns; // offset 0x8, size 0x2
    unsigned short num_npcs; // offset 0xA, size 0x2
    unsigned short num_act_ents; // offset 0xC, size 0x2
    unsigned short num_nact_ents; // offset 0xE, size 0x2
    float gravity; // offset 0x10, size 0x4
    float drag; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    unsigned short num_ents_allocd; // offset 0x1C, size 0x2
    unsigned short num_trigs_allocd; // offset 0x1E, size 0x2
    unsigned short num_stats_allocd; // offset 0x20, size 0x2
    unsigned short num_dyns_allocd; // offset 0x22, size 0x2
    unsigned short num_npcs_allocd; // offset 0x24, size 0x2
    class _xEnt * * trigs; // offset 0x28, size 0x4
    class _xEnt * * stats; // offset 0x2C, size 0x4
    class _xEnt * * dyns; // offset 0x30, size 0x4
    class _xEnt * * npcs; // offset 0x34, size 0x4
    class _xEnt * * act_ents; // offset 0x38, size 0x4
    class _xEnt * * nact_ents; // offset 0x3C, size 0x4
    class _xEnv * env; // offset 0x40, size 0x4
    class xMemPool mempool; // offset 0x44, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x60, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x64, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x68, size 0x4
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
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};
// total size: 0x14
class zCheckPoint {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
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
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xF0
class _xEntFrame {
    // Members
public:
    class _xMat4x3 mat; // offset 0x0, size 0x40
    class _xMat4x3 dmat; // offset 0x40, size 0x40
    class _xVec3 oldpos; // offset 0x80, size 0xC
    class _xVec3 oldvel; // offset 0x8C, size 0xC
    class _xRot oldrot; // offset 0x98, size 0x10
    class _xRot drot; // offset 0xA8, size 0x10
    class _xRot rot; // offset 0xB8, size 0x10
    class _xVec3 dpos; // offset 0xC8, size 0xC
    class _xVec3 dvel; // offset 0xD4, size 0xC
    class _xVec3 vel; // offset 0xE0, size 0xC
    unsigned int mode; // offset 0xEC, size 0x4
};
// total size: 0x10
class _tagxRumble {
    // Members
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
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
// total size: 0xD0
class zGlobalGameStats {
    // Members
public:
    float gameTime; // offset 0x0, size 0x4
    unsigned int visited; // offset 0x4, size 0x4
    float levelTime; // offset 0x8, size 0x4
    float levelTime_sum; // offset 0xC, size 0x4
    float areaTime; // offset 0x10, size 0x4
    float areaTime_sum; // offset 0x14, size 0x4
    float roomTime; // offset 0x18, size 0x4
    float roomTime_sum; // offset 0x1C, size 0x4
    float timeRunning; // offset 0x20, size 0x4
    float timeRunning_sum; // offset 0x24, size 0x4
    float timeWalking; // offset 0x28, size 0x4
    float timeWalking_sum; // offset 0x2C, size 0x4
    unsigned int scares; // offset 0x30, size 0x4
    unsigned int scares_sum; // offset 0x34, size 0x4
    unsigned int deaths; // offset 0x38, size 0x4
    unsigned int deaths_sum; // offset 0x3C, size 0x4
    unsigned int singleJumps; // offset 0x40, size 0x4
    unsigned int singleJumps_sum; // offset 0x44, size 0x4
    unsigned int doubleJumps; // offset 0x48, size 0x4
    unsigned int doubleJumps_sum; // offset 0x4C, size 0x4
    unsigned int gumShot; // offset 0x50, size 0x4
    unsigned int gumShot_sum; // offset 0x54, size 0x4
    unsigned int gumHit; // offset 0x58, size 0x4
    unsigned int gumHit_sum; // offset 0x5C, size 0x4
    unsigned int gumEmpty; // offset 0x60, size 0x4
    unsigned int gumEmpty_sum; // offset 0x64, size 0x4
    unsigned int soapShot; // offset 0x68, size 0x4
    unsigned int soapShot_sum; // offset 0x6C, size 0x4
    unsigned int soapHit; // offset 0x70, size 0x4
    unsigned int soapHit_sum; // offset 0x74, size 0x4
    unsigned int soapEmpty; // offset 0x78, size 0x4
    unsigned int soapEmpty_sum; // offset 0x7C, size 0x4
    unsigned int food; // offset 0x80, size 0x4
    unsigned int food_sum; // offset 0x84, size 0x4
    unsigned int snackBoxes; // offset 0x88, size 0x4
    unsigned int snackBoxes_sum; // offset 0x8C, size 0x4
    unsigned int enemyKills; // offset 0x90, size 0x4
    unsigned int enemyKills_sum; // offset 0x94, size 0x4
    unsigned int enemyCount; // offset 0x98, size 0x4
    unsigned int enemyCount_sum; // offset 0x9C, size 0x4
    unsigned int specials; // offset 0xA0, size 0x4
    unsigned int specials_tot; // offset 0xA4, size 0x4
    unsigned int tokens; // offset 0xA8, size 0x4
    unsigned int tokens_tot; // offset 0xAC, size 0x4
    unsigned int snacks; // offset 0xB0, size 0x4
    unsigned int snacks_tot; // offset 0xB4, size 0x4
    unsigned int chances; // offset 0xB8, size 0x4
    unsigned int chances_tot; // offset 0xBC, size 0x4
    unsigned int keys; // offset 0xC0, size 0x4
    unsigned int keys_tot; // offset 0xC4, size 0x4
    unsigned int clues; // offset 0xC8, size 0x4
    unsigned int clues_tot; // offset 0xCC, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x144
class _zEntHangable : public _zEnt {
    // Members
public:
    class p2EntHangableAsset * hangInfo; // offset 0xEC, size 0x4
    class _xVec3 pivot; // offset 0xF0, size 0xC
    class _xVec3 endpos; // offset 0xFC, size 0xC
    class _xVec3 vel; // offset 0x108, size 0xC
    class _xVec3 swingplane; // offset 0x114, size 0xC
    float grabTimer; // offset 0x120, size 0x4
    float spin; // offset 0x124, size 0x4
    unsigned int state; // offset 0x128, size 0x4
    class _zEnt * shaggy; // offset 0x12C, size 0x4
    signed int enabled; // offset 0x130, size 0x4
    class _zEnt * follow; // offset 0x134, size 0x4
    signed int moving; // offset 0x138, size 0x4
    float candle_timer; // offset 0x13C, size 0x4
    signed int candle_state; // offset 0x140, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0xC
class _tagxCamPathAsset {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
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
// total size: 0x20
class p2EntHangableAsset {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float pivotOffset; // offset 0x4, size 0x4
    float leverArm; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
    float accel; // offset 0x10, size 0x4
    float decay; // offset 0x14, size 0x4
    float grabDelay; // offset 0x18, size 0x4
    float stopDecel; // offset 0x1C, size 0x4
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
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x4FC
class _xEntCollis {
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
    unsigned char trig_idx; // offset 0xA, size 0x1
    unsigned char idx; // offset 0xB, size 0x1
    class _xCollis colls[18]; // offset 0xC, size 0x4C8
    void (* post)(class _xEnt *, class _xScene *, float, class _xEntCollis *); // offset 0x4D4, size 0x4
    unsigned int (* depenq)(class _xEnt *, class _xEnt *, class _xScene *, float, class _xCollis *); // offset 0x4D8, size 0x4
    unsigned char trigs_cur[8]; // offset 0x4DC, size 0x8
    unsigned char trigs_prev[8]; // offset 0x4E4, size 0x8
    unsigned char trigs_entered[8]; // offset 0x4EC, size 0x8
    unsigned char trigs_exited[8]; // offset 0x4F4, size 0x8
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
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
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0x50
class _xEntDrive {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class _xEnt * odriver; // offset 0x1C, size 0x4
    class _xEnt * driver; // offset 0x20, size 0x4
    class _xEnt * driven; // offset 0x24, size 0x4
    class _xVec3 op; // offset 0x28, size 0xC
    class _xVec3 p; // offset 0x34, size 0xC
    class _xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x14
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x30
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class RpLight * light[2]; // offset 0x10, size 0x8
    class RwFrame * light_frame[2]; // offset 0x18, size 0x8
    signed int memlvl; // offset 0x20, size 0x4
};
// total size: 0x14
class _tagxCamShoulder {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
    signed int state; // offset 0x10, size 0x4
};
// total size: 0x3330
class zGlobals {
    // Members
public:
    class _tagxCamFrame camera; // offset 0x0, size 0x220
    class _tagxPad * pad0; // offset 0x220, size 0x4
    class _tagxPad * pad1; // offset 0x224, size 0x4
    class zPlayerGlobals player; // offset 0x228, size 0x660
    class zAssetPickupTable * pickupTable; // offset 0x888, size 0x4
    signed int profile; // offset 0x88C, size 0x4
    class _zCutsceneMgr * cmgr; // offset 0x890, size 0x4
    char profFunc[6][128]; // offset 0x894, size 0x300
    class zScene * sceneCur; // offset 0xB94, size 0x4
    class zScene * scenePreload; // offset 0xB98, size 0x4
    signed int sceneFirst; // offset 0xB9C, size 0x4
    char sceneStart[32]; // offset 0xBA0, size 0x20
    class iFogParams fog; // offset 0xBC0, size 0x1C
    class iFogParams fogA; // offset 0xBDC, size 0x1C
    class iFogParams fogB; // offset 0xBF8, size 0x1C
    signed long fog_t0; // offset 0xC18, size 0x4
    signed long fog_t1; // offset 0xC20, size 0x4
    class zGlobalGameStats stats; // offset 0xC28, size 0xD0
    class zGlobalGameStats areaStats[30]; // offset 0xCF8, size 0x1860
    class zGlobalGameStats levelStats[13]; // offset 0x2558, size 0xA90
    class zGlobalGameStats worldStats[4]; // offset 0x2FE8, size 0x340
    signed int option_vibration; // offset 0x3328, size 0x4
    float update_dt; // offset 0x332C, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x44
class _xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    class _xVec3 norm; // offset 0x10, size 0xC
    class _xVec3 tohit; // offset 0x1C, size 0xC
    class _xVec3 depen; // offset 0x28, size 0xC
    class _xVec3 hdng; // offset 0x34, size 0xC
    class _iCollis ixtra; // offset 0x40, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_VeryLightHi = 1,
    eRumble_VeryLight = 2,
    eRumble_LightHi = 3,
    eRumble_Light = 4,
    eRumble_MediumHi = 5,
    eRumble_Medium = 6,
    eRumble_HeavyHi = 7,
    eRumble_Heavy = 8,
    eRumble_VeryHeavyHi = 9,
    eRumble_VeryHeavy = 10,
    eRumble_Total = 11,
    eRumbleForceU32 = 2147483647,
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x18
class _tagxCamFollowAsset {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x88
class xCamAsset : public p2BaseAsset {
    // Members
public:
    class _xVec3 pos; // offset 0x8, size 0xC
    class _xVec3 at; // offset 0x14, size 0xC
    class _xVec3 up; // offset 0x20, size 0xC
    class _xVec3 right; // offset 0x2C, size 0xC
    class _xVec3 view_offset; // offset 0x38, size 0xC
    signed short offset_start_frames; // offset 0x44, size 0x2
    signed short offset_end_frames; // offset 0x46, size 0x2
    float fov; // offset 0x48, size 0x4
    float trans_time; // offset 0x4C, size 0x4
    enum _tagTransType trans_type; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    float fade_up; // offset 0x58, size 0x4
    float fade_down; // offset 0x5C, size 0x4
    union { // inferred
        class _tagxCamFollowAsset cam_follow; // offset 0x60, size 0x18
        class _tagxCamShoulderAsset cam_shoulder; // offset 0x60, size 0x10
        class _tagp2CamStaticAsset cam_static; // offset 0x60, size 0x4
        class _tagxCamPathAsset cam_path; // offset 0x60, size 0xC
        class _tagp2CamStaticFollowAsset cam_staticFollow; // offset 0x60, size 0x4
    };
    unsigned int valid_flags; // offset 0x78, size 0x4
    unsigned int markerid[2]; // offset 0x7C, size 0x8
    unsigned char cam_type; // offset 0x84, size 0x1
    unsigned char pad[3]; // offset 0x85, size 0x3
};
// total size: 0x8
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum _tagCamType {
    eCamType_Follow = 0,
    eCamType_FollowWithOffset = 1,
    eCamType_Static = 2,
    eCamType_Path = 3,
    eCamType_StaticFollow = 4,
    eCamType_Shoulder = 5,
    eCamType_Total = 6,
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x13C
class zPlayerStatic {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SpeedSneak[4]; // offset 0x4, size 0x10
    float SpeedWalk[4]; // offset 0x14, size 0x10
    float SpeedRun[4]; // offset 0x24, size 0x10
    float SpeedAir[4]; // offset 0x34, size 0x10
    float SpeedHotsauce[4]; // offset 0x44, size 0x10
    float AnimSneak[3]; // offset 0x54, size 0xC
    float AnimWalk[3]; // offset 0x60, size 0xC
    float Gravity; // offset 0x6C, size 0x4
    float JumpGravity; // offset 0x70, size 0x4
    float GravSmooth; // offset 0x74, size 0x4
    float FloatSpeed; // offset 0x78, size 0x4
    float ButtsmashSpeed; // offset 0x7C, size 0x4
    class zJumpParam Jump; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam Bounce; // offset 0xA0, size 0x10
    class zJumpParam Spring; // offset 0xB0, size 0x10
    class zJumpParam Toss; // offset 0xC0, size 0x10
    float HeadbuttSpeedMin; // offset 0xD0, size 0x4
    float HeadbuttSpeedMax; // offset 0xD4, size 0x4
    float HeadbuttAccel; // offset 0xD8, size 0x4
    float HeadbuttTimeMin; // offset 0xDC, size 0x4
    float HeadbuttTimeMax; // offset 0xE0, size 0x4
    float HeadbuttTurn; // offset 0xE4, size 0x4
    float FireDelay; // offset 0xE8, size 0x4
    float FireRepeat; // offset 0xEC, size 0x4
    float FirePress; // offset 0xF0, size 0x4
    float FireTargetYaw; // offset 0xF4, size 0x4
    float FireTargetPitch; // offset 0xF8, size 0x4
    float FireTargetDist; // offset 0xFC, size 0x4
    float FireTargetRadius; // offset 0x100, size 0x4
    float FireTrack; // offset 0x104, size 0x4
    float FireGumSpeed; // offset 0x108, size 0x4
    float FireSoapSpeed; // offset 0x10C, size 0x4
    float FireGumTimer; // offset 0x110, size 0x4
    float FireSoapTimer; // offset 0x114, size 0x4
    unsigned int Initial_Specials; // offset 0x118, size 0x4
    unsigned int TakeDamage; // offset 0x11C, size 0x4
    float StartSlideAngle; // offset 0x120, size 0x4
    float StopSlideAngle; // offset 0x124, size 0x4
    float RotMatchMaxAngle; // offset 0x128, size 0x4
    float RotMatchMatchTime; // offset 0x12C, size 0x4
    float RotMatchRelaxTime; // offset 0x130, size 0x4
    unsigned short AmmoCapacityGum; // offset 0x134, size 0x2
    unsigned short AmmoCapacitySoap; // offset 0x136, size 0x2
    unsigned short AmmoSceneGum; // offset 0x138, size 0x2
    unsigned short AmmoSceneSoap; // offset 0x13A, size 0x2
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x50
class xCutsceneInfo {
    // Members
public:
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
    char SoundLeft[16]; // offset 0x30, size 0x10
    char SoundRight[16]; // offset 0x40, size 0x10
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
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x4
class iColor_tag {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x4
class _tagxCamStatic {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
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
// total size: 0x0
class _zPlatform {};
// total size: 0x20
class iModelTag {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
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
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
};
// total size: 0x220
class _tagxCamFrame {
    // Members
public:
    class RwCamera * lo_cam; // offset 0x0, size 0x4
    class _tagxCam orig_cam; // offset 0x10, size 0xB0
    class _tagxCam hi_cam; // offset 0xC0, size 0xB0
    class _xVec4 frustplane[8]; // offset 0x170, size 0x80
    class _tagxCam * t_cam; // offset 0x1F0, size 0x4
    float t_time; // offset 0x1F4, size 0x4
    float g_time; // offset 0x1F8, size 0x4
    class _xEnv * env; // offset 0x1FC, size 0x4
    class _xVec3 * target_pos; // offset 0x200, size 0x4
    class _xMat4x3 * target_frame; // offset 0x204, size 0x4
    class _xVec3 pre_align_dir; // offset 0x208, size 0xC
    class _tagxCam * * cameras; // offset 0x214, size 0x4
    unsigned int total_cameras; // offset 0x218, size 0x4
};
// total size: 0x0
class xFFX {};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class _tagxCamShoulderAsset {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
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
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x4
class _tagxCamStaticFollow {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x8
class st_SERIAL_PERCID_SIZE {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int needsize; // offset 0x4, size 0x4
};
// total size: 0x10
class zCutsceneZbuffer {
    // Members
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float near; // offset 0x8, size 0x4
    float far; // offset 0xC, size 0x4
};
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
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

/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001159D0 -> 0x00115D00
*/
// Range: 0x1159D0 -> 0x115D00
static void zMainMemCardQueryPost(signed int bytesNeeded /* r18 */, signed int availOnDisk /* r17 */, signed int showMsg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1159D0 -> 0x115D00
        char strn[256]; // r29+0x170
        char str[256]; // r29+0x70
        signed int available; // r2
        class xFontBox * sTrcFullCardFontBox2; // r21
        class xFontBox * sTrcFullCardFontBox; // r20
        class RwRGBA bg; // r29+0x278
        class RwCamera * cam; // r19
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00115D00 -> 0x00115DD8
*/
// Range: 0x115D00 -> 0x115DD8
static void zMainMemCardSpaceQuery() {
    /* anonymous block */ {
        // Range: 0x115D00 -> 0x115DD8
        signed int fullCard; // r17
        signed int do_chk; // r16
        signed int availOnDisk; // r29+0x4C
        signed int bytesNeeded; // r29+0x48
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00115DE0 -> 0x00115F78
*/
// Range: 0x115DE0 -> 0x115F78
void zMainFirstScreen(signed int mode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x115DE0 -> 0x115F78
        class xFontBox * b; // r17
        char str[271]; // r29+0x30
        class RwRGBA bg; // r29+0x14C
        class RwCamera * cam; // r16
        class iColor_tag yellow; // r29+0x148
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00115F80 -> 0x00116164
*/
// Range: 0x115F80 -> 0x116164
static void zMainCheckINI() {
    /* anonymous block */ {
        // Range: 0x115F80 -> 0x116164
        class xIniFile * ini; // r16
        unsigned int size; // r29+0x4C
        void * buf; // r2
        char * str; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00116170 -> 0x00116438
*/
// Range: 0x116170 -> 0x116438
static void zMainLoop() {
    /* anonymous block */ {
        // Range: 0x116170 -> 0x116438
        unsigned int newGameSceneID; // r16
        float pdone; // r29+0x60
        unsigned int menuModeID; // @ 0x00357C38
        unsigned int gameSceneID; // @ 0x00357C40
        signed char init; // @ 0x00357C44
        signed char init; // @ 0x00357C3C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00116440 -> 0x00116464
*/
// Range: 0x116440 -> 0x116464
static void zMainMemLvlChkCB() {
    /* anonymous block */ {
        // Range: 0x116440 -> 0x116464
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00116470 -> 0x00116DF8
*/
// Range: 0x116470 -> 0x116DF8
static void zMainParseINIGlobals(class xIniFile * ini /* r17 */) {
    /* anonymous block */ {
        // Range: 0x116470 -> 0x116DF8
        float fbuf_Toss[16]; // @ 0x0028A480
        float fbuf_Spring[16]; // @ 0x0028A440
        float fbuf_Bounce[16]; // @ 0x0028A400
        float fbuf_Double[16]; // @ 0x0028A3C0
        float fbuf_Jump[16]; // @ 0x0028A380
        float fbuf_AnimWalk[12]; // @ 0x0028A350
        float fbuf_AnimSneak[12]; // @ 0x0028A320
        float fbuf_SpeedHotsauce[16]; // @ 0x0028A2E0
        float fbuf_SpeedAir[16]; // @ 0x0028A2A0
        float fbuf_SpeedRun[16]; // @ 0x0028A260
        float fbuf_SpeedWalk[16]; // @ 0x0028A220
        float fbuf_SpeedSneak[16]; // @ 0x0028A1E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00116E00 -> 0x00116F7C
*/
// Range: 0x116E00 -> 0x116F7C
void main() {
    /* anonymous block */ {
        // Range: 0x116E00 -> 0x116F7C
    }
}


