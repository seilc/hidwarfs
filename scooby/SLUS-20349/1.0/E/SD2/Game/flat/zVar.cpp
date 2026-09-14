/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int hasMap; // size: 0x4, address: 0x358258
static unsigned int R001Unlocked; // size: 0x4, address: 0x35825C
static unsigned int S001Unlocked; // size: 0x4, address: 0x358260
static unsigned int E001Unlocked; // size: 0x4, address: 0x358264
static unsigned int F001Unlocked; // size: 0x4, address: 0x358268
static unsigned int MMDefeated; // size: 0x4, address: 0x35826C
static unsigned int endgame; // size: 0x4, address: 0x358270
static unsigned int allmovies; // size: 0x4, address: 0x358274
static unsigned int selSceneID; // size: 0x4, address: 0x358278
static unsigned int sSnackGateValue; // size: 0x4, address: 0x35827C
class zVarEntry zVarEntryTable[108]; // size: 0x6C0, address: 0x2B3610
class zVarMagicEntry sVarMagicEntryTrable[32]; // size: 0x180, address: 0x2B3CD0
signed int sVarMagicInit; // size: 0x4, address: 0x358280
char txt[64]; // size: 0x40, address: 0x379160
class zGlobals globals; // size: 0x3330, address: 0x362FD0
class xSndGlobals gSnd; // size: 0xD30, address: 0x373B80
class zSaveLoadGame zSaveLoadGameTable[]; // size: 0x0, address: 0x3ABBF0
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
// total size: 0x20
class _zCutsceneMgr : public xBase {
    // Members
public:
    class zCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class zCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
};
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
// total size: 0xEC
class _zEnt : public _xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xE8, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x14
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
// total size: 0x40
class _xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x44
class zCutsceneZbufferHack {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class zCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x44
class xSndVoiceInfo {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    unsigned int sndID; // offset 0x4, size 0x4
    unsigned int parentID; // offset 0x8, size 0x4
    class _xVec3 * parentPos; // offset 0xC, size 0x4
    signed int internalID; // offset 0x10, size 0x4
    unsigned short flags; // offset 0x14, size 0x2
    unsigned short priority; // offset 0x16, size 0x2
    float vol; // offset 0x18, size 0x4
    float pitch; // offset 0x1C, size 0x4
    unsigned int sample_rate; // offset 0x20, size 0x4
    unsigned int deadct; // offset 0x24, size 0x4
    class _xVec3 pos; // offset 0x28, size 0xC
    float radius2; // offset 0x34, size 0x4
    class iSndInfo ps; // offset 0x38, size 0xC
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
class _xEntShadow {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 vec; // offset 0xC, size 0xC
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
// total size: 0x4
class _tagp2CamStaticFollowAsset {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
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
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
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
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x48
class iShadowCache {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 right; // offset 0xC, size 0xC
    class _xVec3 corner[4]; // offset 0x18, size 0x30
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x14
class zCheckPoint {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
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
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    unsigned int pitch; // offset 0x8, size 0x4
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
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class _tagxCamPathAsset {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x8
class xSndVol {
    // Members
public:
    float volL; // offset 0x0, size 0x4
    float volR; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x10
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x18
class zPortalAsset : public p2BaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x8
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
// total size: 0x10
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x10
class zVarEntry {
    // Members
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(); // offset 0xC, size 0x4
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
enum _tagCamType {
    eCamType_Follow = 0,
    eCamType_FollowWithOffset = 1,
    eCamType_Static = 2,
    eCamType_Path = 3,
    eCamType_StaticFollow = 4,
    eCamType_Shoulder = 5,
    eCamType_Total = 6,
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class zPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x4
class _tagxCamStatic {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
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
// total size: 0x0
class rxReq {};
// total size: 0x10
class zCutsceneZbuffer {
    // Members
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float near; // offset 0x8, size 0x4
    float far; // offset 0xC, size 0x4
};
// total size: 0xC
class zVarMagicEntry {
    // Members
public:
    unsigned int varNameID; // offset 0x0, size 0x4
    char * varName; // offset 0x4, size 0x4
    char * (* varCB)(char *); // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x0
class _zPlatform {};
// total size: 0x10
class _xRot {
    // Members
public:
    class _xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _tagxCamStaticFollow {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x20
class iModelTag {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0xD30
class xSndGlobals {
    // Members
public:
    unsigned int stereo; // offset 0x0, size 0x4
    unsigned int SndCount; // offset 0x4, size 0x4
    class xSndVol mastervol; // offset 0x8, size 0x8
    class xSndVol streamvol; // offset 0x10, size 0x8
    class xSndVol fxvol; // offset 0x18, size 0x8
    class xSndVoiceInfo voice[48]; // offset 0x20, size 0xCC0
    class _xVec3 right; // offset 0xCE0, size 0xC
    class _xVec3 up; // offset 0xCEC, size 0xC
    class _xVec3 at; // offset 0xCF8, size 0xC
    class _xVec3 pos; // offset 0xD04, size 0xC
    float radius2; // offset 0xD10, size 0x4
    class _xVec3 nearpos; // offset 0xD14, size 0xC
    class _xVec3 farpos; // offset 0xD20, size 0xC
    unsigned int suspendCD; // offset 0xD2C, size 0x4
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
// total size: 0x0
class xFFX {};
// total size: 0x64
class zSaveLoadGame {
    // Members
public:
    char label[64]; // offset 0x0, size 0x40
    char date[32]; // offset 0x40, size 0x20
    signed int progress; // offset 0x60, size 0x4
};
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x4
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _tagxCamPath {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagp2CamStaticAsset {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD2A0 -> 0x001AD2D0
*/
// Range: 0x1AD2A0 -> 0x1AD2D0
unsigned int zVarEntryCB_eVarCin14() {
    /* anonymous block */ {
        // Range: 0x1AD2A0 -> 0x1AD2D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD2D0 -> 0x001AD300
*/
// Range: 0x1AD2D0 -> 0x1AD300
unsigned int zVarEntryCB_eVarCin13() {
    /* anonymous block */ {
        // Range: 0x1AD2D0 -> 0x1AD300
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD300 -> 0x001AD330
*/
// Range: 0x1AD300 -> 0x1AD330
unsigned int zVarEntryCB_eVarCin12() {
    /* anonymous block */ {
        // Range: 0x1AD300 -> 0x1AD330
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD330 -> 0x001AD338
*/
// Range: 0x1AD330 -> 0x1AD338
unsigned int zVarEntryCB_eVarCin11() {
    /* anonymous block */ {
        // Range: 0x1AD330 -> 0x1AD338
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD340 -> 0x001AD370
*/
// Range: 0x1AD340 -> 0x1AD370
unsigned int zVarEntryCB_eVarCin10() {
    /* anonymous block */ {
        // Range: 0x1AD340 -> 0x1AD370
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD370 -> 0x001AD3A0
*/
// Range: 0x1AD370 -> 0x1AD3A0
unsigned int zVarEntryCB_eVarCin9() {
    /* anonymous block */ {
        // Range: 0x1AD370 -> 0x1AD3A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD3A0 -> 0x001AD3D0
*/
// Range: 0x1AD3A0 -> 0x1AD3D0
unsigned int zVarEntryCB_eVarCin8() {
    /* anonymous block */ {
        // Range: 0x1AD3A0 -> 0x1AD3D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD3D0 -> 0x001AD400
*/
// Range: 0x1AD3D0 -> 0x1AD400
unsigned int zVarEntryCB_eVarCin7() {
    /* anonymous block */ {
        // Range: 0x1AD3D0 -> 0x1AD400
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD400 -> 0x001AD430
*/
// Range: 0x1AD400 -> 0x1AD430
unsigned int zVarEntryCB_eVarCin6() {
    /* anonymous block */ {
        // Range: 0x1AD400 -> 0x1AD430
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD430 -> 0x001AD460
*/
// Range: 0x1AD430 -> 0x1AD460
unsigned int zVarEntryCB_eVarCin5() {
    /* anonymous block */ {
        // Range: 0x1AD430 -> 0x1AD460
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD460 -> 0x001AD490
*/
// Range: 0x1AD460 -> 0x1AD490
unsigned int zVarEntryCB_eVarCin4() {
    /* anonymous block */ {
        // Range: 0x1AD460 -> 0x1AD490
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD490 -> 0x001AD4C0
*/
// Range: 0x1AD490 -> 0x1AD4C0
unsigned int zVarEntryCB_eVarCin3() {
    /* anonymous block */ {
        // Range: 0x1AD490 -> 0x1AD4C0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4C0 -> 0x001AD4F0
*/
// Range: 0x1AD4C0 -> 0x1AD4F0
unsigned int zVarEntryCB_eVarCin2() {
    /* anonymous block */ {
        // Range: 0x1AD4C0 -> 0x1AD4F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD4F0 -> 0x001AD520
*/
// Range: 0x1AD4F0 -> 0x1AD520
unsigned int zVarEntryCB_eVarCin1() {
    /* anonymous block */ {
        // Range: 0x1AD4F0 -> 0x1AD520
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD520 -> 0x001AD598
*/
// Range: 0x1AD520 -> 0x1AD598
unsigned int zVarEntryCB_eVarAllSnacksFound() {
    /* anonymous block */ {
        // Range: 0x1AD520 -> 0x1AD598
        signed int i; // r18
        unsigned int cnt; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5A0 -> 0x001AD5A8
*/
// Range: 0x1AD5A0 -> 0x1AD5A8
unsigned int zVarEntryCB_eVareVarDefeatedMM() {
    /* anonymous block */ {
        // Range: 0x1AD5A0 -> 0x1AD5A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5B0 -> 0x001AD5B8
*/
// Range: 0x1AD5B0 -> 0x1AD5B8
unsigned int zVarEntryCB_eVarWarpH003() {
    /* anonymous block */ {
        // Range: 0x1AD5B0 -> 0x1AD5B8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5C0 -> 0x001AD5C8
*/
// Range: 0x1AD5C0 -> 0x1AD5C8
unsigned int zVarEntryCB_eVarWarpW026() {
    /* anonymous block */ {
        // Range: 0x1AD5C0 -> 0x1AD5C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5D0 -> 0x001AD5D8
*/
// Range: 0x1AD5D0 -> 0x1AD5D8
unsigned int zVarEntryCB_eVarWarpW022() {
    /* anonymous block */ {
        // Range: 0x1AD5D0 -> 0x1AD5D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5E0 -> 0x001AD5E8
*/
// Range: 0x1AD5E0 -> 0x1AD5E8
unsigned int zVarEntryCB_eVarWarpS003() {
    /* anonymous block */ {
        // Range: 0x1AD5E0 -> 0x1AD5E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD5F0 -> 0x001AD5F8
*/
// Range: 0x1AD5F0 -> 0x1AD5F8
unsigned int zVarEntryCB_eVarWarpR003() {
    /* anonymous block */ {
        // Range: 0x1AD5F0 -> 0x1AD5F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD600 -> 0x001AD608
*/
// Range: 0x1AD600 -> 0x1AD608
unsigned int zVarEntryCB_eVarWarpP005() {
    /* anonymous block */ {
        // Range: 0x1AD600 -> 0x1AD608
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD610 -> 0x001AD618
*/
// Range: 0x1AD610 -> 0x1AD618
unsigned int zVarEntryCB_eVarWarpP003() {
    /* anonymous block */ {
        // Range: 0x1AD610 -> 0x1AD618
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD620 -> 0x001AD628
*/
// Range: 0x1AD620 -> 0x1AD628
unsigned int zVarEntryCB_eVarWarpO006() {
    /* anonymous block */ {
        // Range: 0x1AD620 -> 0x1AD628
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD630 -> 0x001AD638
*/
// Range: 0x1AD630 -> 0x1AD638
unsigned int zVarEntryCB_eVarWarpO004() {
    /* anonymous block */ {
        // Range: 0x1AD630 -> 0x1AD638
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD640 -> 0x001AD648
*/
// Range: 0x1AD640 -> 0x1AD648
unsigned int zVarEntryCB_eVarWarpL018() {
    /* anonymous block */ {
        // Range: 0x1AD640 -> 0x1AD648
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD650 -> 0x001AD658
*/
// Range: 0x1AD650 -> 0x1AD658
unsigned int zVarEntryCB_eVarWarpL015() {
    /* anonymous block */ {
        // Range: 0x1AD650 -> 0x1AD658
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD660 -> 0x001AD668
*/
// Range: 0x1AD660 -> 0x1AD668
unsigned int zVarEntryCB_eVarWarpL014() {
    /* anonymous block */ {
        // Range: 0x1AD660 -> 0x1AD668
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD670 -> 0x001AD678
*/
// Range: 0x1AD670 -> 0x1AD678
unsigned int zVarEntryCB_eVarWarpI006() {
    /* anonymous block */ {
        // Range: 0x1AD670 -> 0x1AD678
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD680 -> 0x001AD688
*/
// Range: 0x1AD680 -> 0x1AD688
unsigned int zVarEntryCB_eVarWarpI003() {
    /* anonymous block */ {
        // Range: 0x1AD680 -> 0x1AD688
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD690 -> 0x001AD698
*/
// Range: 0x1AD690 -> 0x1AD698
unsigned int zVarEntryCB_eVarWarpH001() {
    /* anonymous block */ {
        // Range: 0x1AD690 -> 0x1AD698
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6A0 -> 0x001AD6A8
*/
// Range: 0x1AD6A0 -> 0x1AD6A8
unsigned int zVarEntryCB_eVarWarpG008() {
    /* anonymous block */ {
        // Range: 0x1AD6A0 -> 0x1AD6A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6B0 -> 0x001AD6B8
*/
// Range: 0x1AD6B0 -> 0x1AD6B8
unsigned int zVarEntryCB_eVarWarpG005() {
    /* anonymous block */ {
        // Range: 0x1AD6B0 -> 0x1AD6B8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6C0 -> 0x001AD6C8
*/
// Range: 0x1AD6C0 -> 0x1AD6C8
unsigned int zVarEntryCB_eVarWarpG001() {
    /* anonymous block */ {
        // Range: 0x1AD6C0 -> 0x1AD6C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6D0 -> 0x001AD6D8
*/
// Range: 0x1AD6D0 -> 0x1AD6D8
unsigned int zVarEntryCB_eVarWarpF010() {
    /* anonymous block */ {
        // Range: 0x1AD6D0 -> 0x1AD6D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6E0 -> 0x001AD6E8
*/
// Range: 0x1AD6E0 -> 0x1AD6E8
unsigned int zVarEntryCB_eVarWarpF007() {
    /* anonymous block */ {
        // Range: 0x1AD6E0 -> 0x1AD6E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD6F0 -> 0x001AD6F8
*/
// Range: 0x1AD6F0 -> 0x1AD6F8
unsigned int zVarEntryCB_eVarWarpF003() {
    /* anonymous block */ {
        // Range: 0x1AD6F0 -> 0x1AD6F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD700 -> 0x001AD708
*/
// Range: 0x1AD700 -> 0x1AD708
unsigned int zVarEntryCB_eVarWarpE009() {
    /* anonymous block */ {
        // Range: 0x1AD700 -> 0x1AD708
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD710 -> 0x001AD718
*/
// Range: 0x1AD710 -> 0x1AD718
unsigned int zVarEntryCB_eVarWarpE006() {
    /* anonymous block */ {
        // Range: 0x1AD710 -> 0x1AD718
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD720 -> 0x001AD728
*/
// Range: 0x1AD720 -> 0x1AD728
unsigned int zVarEntryCB_eVarWarpE004() {
    /* anonymous block */ {
        // Range: 0x1AD720 -> 0x1AD728
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD730 -> 0x001AD738
*/
// Range: 0x1AD730 -> 0x1AD738
unsigned int zVarEntryCB_eVarWarpC004() {
    /* anonymous block */ {
        // Range: 0x1AD730 -> 0x1AD738
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD740 -> 0x001AD748
*/
// Range: 0x1AD740 -> 0x1AD748
unsigned int zVarEntryCB_eVarWarpB004() {
    /* anonymous block */ {
        // Range: 0x1AD740 -> 0x1AD748
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD750 -> 0x001AD76C
*/
// Range: 0x1AD750 -> 0x1AD76C
unsigned int zVarEntryCB_eVarMToken21() {
    /* anonymous block */ {
        // Range: 0x1AD750 -> 0x1AD76C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD770 -> 0x001AD78C
*/
// Range: 0x1AD770 -> 0x1AD78C
unsigned int zVarEntryCB_eVarMToken20() {
    /* anonymous block */ {
        // Range: 0x1AD770 -> 0x1AD78C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD790 -> 0x001AD7AC
*/
// Range: 0x1AD790 -> 0x1AD7AC
unsigned int zVarEntryCB_eVarMToken19() {
    /* anonymous block */ {
        // Range: 0x1AD790 -> 0x1AD7AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD7B0 -> 0x001AD7CC
*/
// Range: 0x1AD7B0 -> 0x1AD7CC
unsigned int zVarEntryCB_eVarMToken18() {
    /* anonymous block */ {
        // Range: 0x1AD7B0 -> 0x1AD7CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD7D0 -> 0x001AD7EC
*/
// Range: 0x1AD7D0 -> 0x1AD7EC
unsigned int zVarEntryCB_eVarMToken17() {
    /* anonymous block */ {
        // Range: 0x1AD7D0 -> 0x1AD7EC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD7F0 -> 0x001AD808
*/
// Range: 0x1AD7F0 -> 0x1AD808
unsigned int zVarEntryCB_eVarMToken16() {
    /* anonymous block */ {
        // Range: 0x1AD7F0 -> 0x1AD808
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD810 -> 0x001AD828
*/
// Range: 0x1AD810 -> 0x1AD828
unsigned int zVarEntryCB_eVarMToken15() {
    /* anonymous block */ {
        // Range: 0x1AD810 -> 0x1AD828
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD830 -> 0x001AD848
*/
// Range: 0x1AD830 -> 0x1AD848
unsigned int zVarEntryCB_eVarMToken14() {
    /* anonymous block */ {
        // Range: 0x1AD830 -> 0x1AD848
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD850 -> 0x001AD868
*/
// Range: 0x1AD850 -> 0x1AD868
unsigned int zVarEntryCB_eVarMToken13() {
    /* anonymous block */ {
        // Range: 0x1AD850 -> 0x1AD868
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD870 -> 0x001AD888
*/
// Range: 0x1AD870 -> 0x1AD888
unsigned int zVarEntryCB_eVarMToken12() {
    /* anonymous block */ {
        // Range: 0x1AD870 -> 0x1AD888
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD890 -> 0x001AD8A8
*/
// Range: 0x1AD890 -> 0x1AD8A8
unsigned int zVarEntryCB_eVarMToken11() {
    /* anonymous block */ {
        // Range: 0x1AD890 -> 0x1AD8A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD8B0 -> 0x001AD8C8
*/
// Range: 0x1AD8B0 -> 0x1AD8C8
unsigned int zVarEntryCB_eVarMToken10() {
    /* anonymous block */ {
        // Range: 0x1AD8B0 -> 0x1AD8C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD8D0 -> 0x001AD8E8
*/
// Range: 0x1AD8D0 -> 0x1AD8E8
unsigned int zVarEntryCB_eVarMToken9() {
    /* anonymous block */ {
        // Range: 0x1AD8D0 -> 0x1AD8E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD8F0 -> 0x001AD908
*/
// Range: 0x1AD8F0 -> 0x1AD908
unsigned int zVarEntryCB_eVarMToken8() {
    /* anonymous block */ {
        // Range: 0x1AD8F0 -> 0x1AD908
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD910 -> 0x001AD928
*/
// Range: 0x1AD910 -> 0x1AD928
unsigned int zVarEntryCB_eVarMToken7() {
    /* anonymous block */ {
        // Range: 0x1AD910 -> 0x1AD928
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD930 -> 0x001AD948
*/
// Range: 0x1AD930 -> 0x1AD948
unsigned int zVarEntryCB_eVarMToken6() {
    /* anonymous block */ {
        // Range: 0x1AD930 -> 0x1AD948
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD950 -> 0x001AD968
*/
// Range: 0x1AD950 -> 0x1AD968
unsigned int zVarEntryCB_eVarMToken5() {
    /* anonymous block */ {
        // Range: 0x1AD950 -> 0x1AD968
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD970 -> 0x001AD988
*/
// Range: 0x1AD970 -> 0x1AD988
unsigned int zVarEntryCB_eVarMToken4() {
    /* anonymous block */ {
        // Range: 0x1AD970 -> 0x1AD988
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD990 -> 0x001AD9A8
*/
// Range: 0x1AD990 -> 0x1AD9A8
unsigned int zVarEntryCB_eVarMToken3() {
    /* anonymous block */ {
        // Range: 0x1AD990 -> 0x1AD9A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD9B0 -> 0x001AD9C8
*/
// Range: 0x1AD9B0 -> 0x1AD9C8
unsigned int zVarEntryCB_eVarMToken2() {
    /* anonymous block */ {
        // Range: 0x1AD9B0 -> 0x1AD9C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD9D0 -> 0x001AD9E8
*/
// Range: 0x1AD9D0 -> 0x1AD9E8
unsigned int zVarEntryCB_eVarMToken1() {
    /* anonymous block */ {
        // Range: 0x1AD9D0 -> 0x1AD9E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AD9F0 -> 0x001ADA8C
*/
// Range: 0x1AD9F0 -> 0x1ADA8C
unsigned int zVarEntryCB_CurrentRoom() {
    /* anonymous block */ {
        // Range: 0x1AD9F0 -> 0x1ADA8C
        char s[16]; // r29+0x10
        signed int room; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADA90 -> 0x001ADAB4
*/
// Range: 0x1ADA90 -> 0x1ADAB4
unsigned int zVarEntryCB_PuzzlePieceH() {
    /* anonymous block */ {
        // Range: 0x1ADA90 -> 0x1ADAB4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADAC0 -> 0x001ADAE4
*/
// Range: 0x1ADAC0 -> 0x1ADAE4
unsigned int zVarEntryCB_PuzzlePieceO() {
    /* anonymous block */ {
        // Range: 0x1ADAC0 -> 0x1ADAE4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADAF0 -> 0x001ADB14
*/
// Range: 0x1ADAF0 -> 0x1ADB14
unsigned int zVarEntryCB_PuzzlePieceR() {
    /* anonymous block */ {
        // Range: 0x1ADAF0 -> 0x1ADB14
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADB20 -> 0x001ADB44
*/
// Range: 0x1ADB20 -> 0x1ADB44
unsigned int zVarEntryCB_PuzzlePieceI() {
    /* anonymous block */ {
        // Range: 0x1ADB20 -> 0x1ADB44
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADB50 -> 0x001ADB74
*/
// Range: 0x1ADB50 -> 0x1ADB74
unsigned int zVarEntryCB_PuzzlePieceS() {
    /* anonymous block */ {
        // Range: 0x1ADB50 -> 0x1ADB74
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADB80 -> 0x001ADBA4
*/
// Range: 0x1ADB80 -> 0x1ADBA4
unsigned int zVarEntryCB_PuzzlePieceB() {
    /* anonymous block */ {
        // Range: 0x1ADB80 -> 0x1ADBA4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADBB0 -> 0x001ADBD4
*/
// Range: 0x1ADBB0 -> 0x1ADBD4
unsigned int zVarEntryCB_PuzzlePieceP() {
    /* anonymous block */ {
        // Range: 0x1ADBB0 -> 0x1ADBD4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADBE0 -> 0x001ADC04
*/
// Range: 0x1ADBE0 -> 0x1ADC04
unsigned int zVarEntryCB_PuzzlePieceG() {
    /* anonymous block */ {
        // Range: 0x1ADBE0 -> 0x1ADC04
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADC10 -> 0x001ADC34
*/
// Range: 0x1ADC10 -> 0x1ADC34
unsigned int zVarEntryCB_PuzzlePieceC() {
    /* anonymous block */ {
        // Range: 0x1ADC10 -> 0x1ADC34
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADC40 -> 0x001ADC64
*/
// Range: 0x1ADC40 -> 0x1ADC64
unsigned int zVarEntryCB_PuzzlePieceE() {
    /* anonymous block */ {
        // Range: 0x1ADC40 -> 0x1ADC64
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADC70 -> 0x001ADC94
*/
// Range: 0x1ADC70 -> 0x1ADC94
unsigned int zVarEntryCB_PuzzlePieceW() {
    /* anonymous block */ {
        // Range: 0x1ADC70 -> 0x1ADC94
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADCA0 -> 0x001ADCC4
*/
// Range: 0x1ADCA0 -> 0x1ADCC4
unsigned int zVarEntryCB_PuzzlePieceL() {
    /* anonymous block */ {
        // Range: 0x1ADCA0 -> 0x1ADCC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADCD0 -> 0x001ADCF4
*/
// Range: 0x1ADCD0 -> 0x1ADCF4
unsigned int zVarEntryCB_PuzzlePieceF() {
    /* anonymous block */ {
        // Range: 0x1ADCD0 -> 0x1ADCF4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD00 -> 0x001ADD0C
*/
// Range: 0x1ADD00 -> 0x1ADD0C
void zVarUnlockAllMovies() {
    /* anonymous block */ {
        // Range: 0x1ADD00 -> 0x1ADD0C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD10 -> 0x001ADD1C
*/
// Range: 0x1ADD10 -> 0x1ADD1C
void zVarUnlockEndGame() {
    /* anonymous block */ {
        // Range: 0x1ADD10 -> 0x1ADD1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD20 -> 0x001ADD28
*/
// Range: 0x1ADD20 -> 0x1ADD28
unsigned int finishedGame() {
    /* anonymous block */ {
        // Range: 0x1ADD20 -> 0x1ADD28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD30 -> 0x001ADD38
*/
// Range: 0x1ADD30 -> 0x1ADD38
unsigned int zVarEntryCB_UnlockedF001() {
    /* anonymous block */ {
        // Range: 0x1ADD30 -> 0x1ADD38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD40 -> 0x001ADD48
*/
// Range: 0x1ADD40 -> 0x1ADD48
unsigned int zVarEntryCB_UnlockedE001() {
    /* anonymous block */ {
        // Range: 0x1ADD40 -> 0x1ADD48
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD50 -> 0x001ADD58
*/
// Range: 0x1ADD50 -> 0x1ADD58
unsigned int zVarEntryCB_UnlockedS001() {
    /* anonymous block */ {
        // Range: 0x1ADD50 -> 0x1ADD58
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD60 -> 0x001ADD68
*/
// Range: 0x1ADD60 -> 0x1ADD68
unsigned int zVarEntryCB_UnlockedR001() {
    /* anonymous block */ {
        // Range: 0x1ADD60 -> 0x1ADD68
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD70 -> 0x001ADD78
*/
// Range: 0x1ADD70 -> 0x1ADD78
unsigned int zVarEntryCB_MapItem() {
    /* anonymous block */ {
        // Range: 0x1ADD70 -> 0x1ADD78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADD80 -> 0x001ADDC4
*/
// Range: 0x1ADD80 -> 0x1ADDC4
unsigned int zVarEntryCB_IsSneaking() {
    /* anonymous block */ {
        // Range: 0x1ADD80 -> 0x1ADDC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADDD0 -> 0x001ADE34
*/
// Range: 0x1ADDD0 -> 0x1ADE34
unsigned int zVarEntryCB_CurrentSceneLetter() {
    /* anonymous block */ {
        // Range: 0x1ADDD0 -> 0x1ADE34
        char s[16]; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADE40 -> 0x001ADE7C
*/
// Range: 0x1ADE40 -> 0x1ADE7C
char * zVMCB_SpaceNeeded(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADE40 -> 0x1ADE7C
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADE80 -> 0x001ADEBC
*/
// Range: 0x1ADE80 -> 0x1ADEBC
char * zVMCB_SpaceAvailable(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADE80 -> 0x1ADEBC
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADEC0 -> 0x001ADEE8
*/
// Range: 0x1ADEC0 -> 0x1ADEE8
char * zVMCB_CurrentTime(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADEC0 -> 0x1ADEE8
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADEF0 -> 0x001ADF18
*/
// Range: 0x1ADEF0 -> 0x1ADF18
char * zVMCB_CurrentDate(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADEF0 -> 0x1ADF18
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADF20 -> 0x001ADF54
*/
// Range: 0x1ADF20 -> 0x1ADF54
char * zVMCB_SnackGateValue(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADF20 -> 0x1ADF54
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADF60 -> 0x001ADFA0
*/
// Range: 0x1ADF60 -> 0x1ADFA0
char * zVMCB_SelectedArea(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1ADF60 -> 0x1ADFA0
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ADFA0 -> 0x001AE014
*/
// Range: 0x1ADFA0 -> 0x1AE014
char * zVMCB_AreaStatsTokens(char * dst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1ADFA0 -> 0x1AE014
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE020 -> 0x001AE094
*/
// Range: 0x1AE020 -> 0x1AE094
char * zVMCB_AreaStatsSnacks(char * dst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AE020 -> 0x1AE094
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE0A0 -> 0x001AE0E8
*/
// Range: 0x1AE0A0 -> 0x1AE0E8
char * zVMCB_CurrentArea(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE0A0 -> 0x1AE0E8
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE0F0 -> 0x001AE0F8
*/
// Range: 0x1AE0F0 -> 0x1AE0F8
char * zVMCB_TokenWorldStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE0F0 -> 0x1AE0F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE100 -> 0x001AE108
*/
// Range: 0x1AE100 -> 0x1AE108
char * zVMCB_SnackWorldStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE100 -> 0x1AE108
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE110 -> 0x001AE118
*/
// Range: 0x1AE110 -> 0x1AE118
char * zVMCB_TokenAreaStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE110 -> 0x1AE118
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE120 -> 0x001AE128
*/
// Range: 0x1AE120 -> 0x1AE128
char * zVMCB_SnackAreaStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE120 -> 0x1AE128
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE130 -> 0x001AE138
*/
// Range: 0x1AE130 -> 0x1AE138
char * zVMCB_TokenRoomStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE130 -> 0x1AE138
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE140 -> 0x001AE148
*/
// Range: 0x1AE140 -> 0x1AE148
char * zVMCB_SnackRoomStats(char * dst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE140 -> 0x1AE148
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE150 -> 0x001AE1AC
*/
// Range: 0x1AE150 -> 0x1AE1AC
char * zVMCB_CurrentPosition(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE150 -> 0x1AE1AC
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE1B0 -> 0x001AE1F0
*/
// Range: 0x1AE1B0 -> 0x1AE1F0
char * zVMCB_MCSelectedCard(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE1B0 -> 0x1AE1F0
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE1F0 -> 0x001AE230
*/
// Range: 0x1AE1F0 -> 0x1AE230
char * zVMCB_MCSelectedGame(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE1F0 -> 0x1AE230
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE230 -> 0x001AE274
*/
// Range: 0x1AE230 -> 0x1AE274
char * zVMCB_GameSlot7(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE230 -> 0x1AE274
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE280 -> 0x001AE2C4
*/
// Range: 0x1AE280 -> 0x1AE2C4
char * zVMCB_GameSlot6(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE280 -> 0x1AE2C4
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE2D0 -> 0x001AE314
*/
// Range: 0x1AE2D0 -> 0x1AE314
char * zVMCB_GameSlot5(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE2D0 -> 0x1AE314
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE320 -> 0x001AE364
*/
// Range: 0x1AE320 -> 0x1AE364
char * zVMCB_GameSlot4(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE320 -> 0x1AE364
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE370 -> 0x001AE3B4
*/
// Range: 0x1AE370 -> 0x1AE3B4
char * zVMCB_GameSlot3(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE370 -> 0x1AE3B4
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE3C0 -> 0x001AE404
*/
// Range: 0x1AE3C0 -> 0x1AE404
char * zVMCB_GameSlot2(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE3C0 -> 0x1AE404
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE410 -> 0x001AE454
*/
// Range: 0x1AE410 -> 0x1AE454
char * zVMCB_GameSlot1(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE410 -> 0x1AE454
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE460 -> 0x001AE4A4
*/
// Range: 0x1AE460 -> 0x1AE4A4
char * zVMCB_GameSlot0(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE460 -> 0x1AE4A4
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE4B0 -> 0x001AE4FC
*/
// Range: 0x1AE4B0 -> 0x1AE4FC
char * zVMCB_Scene(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE4B0 -> 0x1AE4FC
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE500 -> 0x001AE594
*/
// Range: 0x1AE500 -> 0x1AE594
char * zVMCB_SoundFXVolume(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE500 -> 0x1AE594
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE5A0 -> 0x001AE634
*/
// Range: 0x1AE5A0 -> 0x1AE634
char * zVMCB_SoundMusicVolume(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE5A0 -> 0x1AE634
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE640 -> 0x001AE678
*/
// Range: 0x1AE640 -> 0x1AE678
char * zVMCB_PlayerChancesCount(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE640 -> 0x1AE678
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE680 -> 0x001AE6B8
*/
// Range: 0x1AE680 -> 0x1AE6B8
char * zVMCB_PlayerScoobySnackCount_Int(char * dst /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AE680 -> 0x1AE6B8
        signed int count; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE6C0 -> 0x001AE6D0
*/
// Range: 0x1AE6C0 -> 0x1AE6D0
void zVarDefeatMasterMind() {
    /* anonymous block */ {
        // Range: 0x1AE6C0 -> 0x1AE6D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE6D0 -> 0x001AE6D8
*/
// Range: 0x1AE6D0 -> 0x1AE6D8
void zVarSetSnackGateValue(unsigned int amount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE6D0 -> 0x1AE6D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE6E0 -> 0x001AE6E8
*/
// Range: 0x1AE6E0 -> 0x1AE6E8
void zVarSetArea(unsigned int sceneID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AE6E0 -> 0x1AE6E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE6F0 -> 0x001AE6FC
*/
// Range: 0x1AE6F0 -> 0x1AE6FC
void zVarUnlockF001() {
    /* anonymous block */ {
        // Range: 0x1AE6F0 -> 0x1AE6FC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE700 -> 0x001AE70C
*/
// Range: 0x1AE700 -> 0x1AE70C
void zVarUnlockE001() {
    /* anonymous block */ {
        // Range: 0x1AE700 -> 0x1AE70C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE710 -> 0x001AE71C
*/
// Range: 0x1AE710 -> 0x1AE71C
void zVarUnlockS001() {
    /* anonymous block */ {
        // Range: 0x1AE710 -> 0x1AE71C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE720 -> 0x001AE72C
*/
// Range: 0x1AE720 -> 0x1AE72C
void zVarUnlockR001() {
    /* anonymous block */ {
        // Range: 0x1AE720 -> 0x1AE72C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE730 -> 0x001AE73C
*/
// Range: 0x1AE730 -> 0x1AE73C
void zVarGiveMap() {
    /* anonymous block */ {
        // Range: 0x1AE730 -> 0x1AE73C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE740 -> 0x001AE93C
*/
// Range: 0x1AE740 -> 0x1AE93C
char * zVarGameSlotInfo(signed int i /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1AE740 -> 0x1AE93C
        char ampm[32]; // r29+0xA0
        signed int hour; // r16
        char time[32]; // r29+0x80
        char date[32]; // r29+0x60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE940 -> 0x001AE950
*/
// Range: 0x1AE940 -> 0x1AE950
unsigned int zVarEntryCB_VibrationOn() {
    /* anonymous block */ {
        // Range: 0x1AE940 -> 0x1AE950
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AE950 -> 0x001AE9F8
*/
// Range: 0x1AE950 -> 0x1AE9F8
unsigned int zVarEntryCB_MCAvailable() {
    /* anonymous block */ {
        // Range: 0x1AE950 -> 0x1AE9F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA00 -> 0x001AEA18
*/
// Range: 0x1AEA00 -> 0x1AEA18
unsigned int zVarEntryCB_PCSpecialLightningBoltStun() {
    /* anonymous block */ {
        // Range: 0x1AEA00 -> 0x1AEA18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA20 -> 0x001AEA38
*/
// Range: 0x1AEA20 -> 0x1AEA38
unsigned int zVarEntryCB_PCSpecialShovel() {
    /* anonymous block */ {
        // Range: 0x1AEA20 -> 0x1AEA38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA40 -> 0x001AEA58
*/
// Range: 0x1AEA40 -> 0x1AEA58
unsigned int zVarEntryCB_PCSpecialUmbrella() {
    /* anonymous block */ {
        // Range: 0x1AEA40 -> 0x1AEA58
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA60 -> 0x001AEA78
*/
// Range: 0x1AEA60 -> 0x1AEA78
unsigned int zVarEntryCB_PCSpecialFootballHelmet() {
    /* anonymous block */ {
        // Range: 0x1AEA60 -> 0x1AEA78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEA80 -> 0x001AEA98
*/
// Range: 0x1AEA80 -> 0x1AEA98
unsigned int zVarEntryCB_PCSpecialLightningBolt() {
    /* anonymous block */ {
        // Range: 0x1AEA80 -> 0x1AEA98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEAA0 -> 0x001AEAB8
*/
// Range: 0x1AEAA0 -> 0x1AEAB8
unsigned int zVarEntryCB_PCSpecialSpring() {
    /* anonymous block */ {
        // Range: 0x1AEAA0 -> 0x1AEAB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEAC0 -> 0x001AEAD8
*/
// Range: 0x1AEAC0 -> 0x1AEAD8
unsigned int zVarEntryCB_PCSpecialDivingHelmet() {
    /* anonymous block */ {
        // Range: 0x1AEAC0 -> 0x1AEAD8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEAE0 -> 0x001AEAF8
*/
// Range: 0x1AEAE0 -> 0x1AEAF8
unsigned int zVarEntryCB_PCSpecialFlowerPot() {
    /* anonymous block */ {
        // Range: 0x1AEAE0 -> 0x1AEAF8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB00 -> 0x001AEB18
*/
// Range: 0x1AEB00 -> 0x1AEB18
unsigned int zVarEntryCB_PCSpecialBlackKnight() {
    /* anonymous block */ {
        // Range: 0x1AEB00 -> 0x1AEB18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB20 -> 0x001AEB38
*/
// Range: 0x1AEB20 -> 0x1AEB38
unsigned int zVarEntryCB_PCSpecialLampShade() {
    /* anonymous block */ {
        // Range: 0x1AEB20 -> 0x1AEB38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB40 -> 0x001AEB58
*/
// Range: 0x1AEB40 -> 0x1AEB58
unsigned int zVarEntryCB_PCSpecialSlippers() {
    /* anonymous block */ {
        // Range: 0x1AEB40 -> 0x1AEB58
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB60 -> 0x001AEB78
*/
// Range: 0x1AEB60 -> 0x1AEB78
unsigned int zVarEntryCB_PCSpecialPlungers() {
    /* anonymous block */ {
        // Range: 0x1AEB60 -> 0x1AEB78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEB80 -> 0x001AEB98
*/
// Range: 0x1AEB80 -> 0x1AEB98
unsigned int zVarEntryCB_PCSpecialStickyBoots() {
    /* anonymous block */ {
        // Range: 0x1AEB80 -> 0x1AEB98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEBA0 -> 0x001AEBB8
*/
// Range: 0x1AEBA0 -> 0x1AEBB8
unsigned int zVarEntryCB_PCSpecialSoapBar() {
    /* anonymous block */ {
        // Range: 0x1AEBA0 -> 0x1AEBB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEBC0 -> 0x001AEBD8
*/
// Range: 0x1AEBC0 -> 0x1AEBD8
unsigned int zVarEntryCB_PCSpecialBubbleGum() {
    /* anonymous block */ {
        // Range: 0x1AEBC0 -> 0x1AEBD8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEBE0 -> 0x001AEC50
*/
// Range: 0x1AEBE0 -> 0x1AEC50
unsigned int zVarEntryCB_SndFXVol() {
    /* anonymous block */ {
        // Range: 0x1AEBE0 -> 0x1AEC50
        double floatVol; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEC50 -> 0x001AECC0
*/
// Range: 0x1AEC50 -> 0x1AECC0
unsigned int zVarEntryCB_SndMusicVol() {
    /* anonymous block */ {
        // Range: 0x1AEC50 -> 0x1AECC0
        double floatVol; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AECC0 -> 0x001AED30
*/
// Range: 0x1AECC0 -> 0x1AED30
unsigned int zVarEntryCB_SndMasterVol() {
    /* anonymous block */ {
        // Range: 0x1AECC0 -> 0x1AED30
        double floatVol; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AED30 -> 0x001AED3C
*/
// Range: 0x1AED30 -> 0x1AED3C
unsigned int zVarEntryCB_SndMode() {
    /* anonymous block */ {
        // Range: 0x1AED30 -> 0x1AED3C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AED40 -> 0x001AED4C
*/
// Range: 0x1AED40 -> 0x1AED4C
unsigned int zVarEntryCB_PCScoobySnacks() {
    /* anonymous block */ {
        // Range: 0x1AED40 -> 0x1AED4C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AED50 -> 0x001AED5C
*/
// Range: 0x1AED50 -> 0x1AED5C
unsigned int zVarEntryCB_PCChances() {
    /* anonymous block */ {
        // Range: 0x1AED50 -> 0x1AED5C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AED60 -> 0x001AEDC4
*/
// Range: 0x1AED60 -> 0x1AEDC4
void zVarLoad(class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AED60 -> 0x1AEDC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEDD0 -> 0x001AEE7C
*/
// Range: 0x1AEDD0 -> 0x1AEE7C
void zVarSave(class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1AEDD0 -> 0x1AEE7C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEE80 -> 0x001AEEA0
*/
// Range: 0x1AEE80 -> 0x1AEEA0
void zVarNewGame() {
    /* anonymous block */ {
        // Range: 0x1AEE80 -> 0x1AEEA0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEEA0 -> 0x001AEEE8
*/
// Range: 0x1AEEA0 -> 0x1AEEE8
void zVarInit(class zVarEntry * table /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AEEA0 -> 0x1AEEE8
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zVar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AEEF0 -> 0x001AF044
*/
// Range: 0x1AEEF0 -> 0x1AF044
void zVarMagicProcessText(char * src /* r18 */, char * dst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1AEEF0 -> 0x1AF044
        class zVarMagicEntry * e; // r5
        unsigned int mvID; // r2
        char * mv; // r4
        char magicVar[256]; // r29+0x50
    }
}


