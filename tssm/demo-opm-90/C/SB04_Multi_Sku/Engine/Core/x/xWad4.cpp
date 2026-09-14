/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xWad4.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class _tagxPad mPad[4]; // size: 0x4E0, address: 0x68A3A0
class xPar gParPool[500]; // size: 0xBB80, address: 0x68A880
class xPar * gParDead; // size: 0x4, address: 0x637E50
static class xCmdInfo sCmdInfo[35]; // size: 0x1A4, address: 0x696400
static class xParEmitterAsset sSaveEmmiterSettings; // size: 0x54, address: 0x6965B0
static class xParEmitterPropsAsset sSaveEmmiterPropSettings; // size: 0x138, address: 0x696610
static class xParEmitterPropsAsset sDummyProp; // size: 0x138, address: 0x696750
static signed int sParGroupRegTableInit; // size: 0x4, address: 0x637E54
static signed int sParGroupRegTableCount; // size: 0x4, address: 0x637E58
class xParGroup * sParGroupRegTable[255]; // size: 0x3FC, address: 0x696900
static unsigned int sFrameCount; // size: 0x4, address: 0x637E5C
static signed int sCounter; // size: 0x4, address: 0x0
static unsigned int sParMgrIgnoreFXCounter; // size: 0x4, address: 0x0
static signed int sParMgrInit; // size: 0x4, address: 0x637E60
static signed int sBlendTable[11]; // size: 0x2C, address: 0x62B800
static enum ptank_render_mode_enum ptank_render_mode; // size: 0x4, address: 0x636DE8
static class xVec3 par_offset_right; // size: 0xC, address: 0x696D00
static class xVec3 par_offset_up; // size: 0xC, address: 0x696D10
unsigned char HACK; // size: 0x1, address: 0x636DEC
static class xParSysInfo sParSysInfo[7]; // size: 0x38, address: 0x6025D0
static class internal_system systems[128]; // size: 0x2000, address: 0x696D20
static class system_bucket buckets[6][128]; // size: 0x3C00, address: 0x698D20
static class block_info * head_free_block; // size: 0x4, address: 0x637E64
static unsigned char * block_buffer; // size: 0x4, address: 0x637E68
static class block_info block_info_buffer[32]; // size: 0x180, address: 0x69C920
static signed int systems_size; // size: 0x4, address: 0x637E6C
static signed int buckets_size[6]; // size: 0x18, address: 0x69CAA0
static class PKRReadFuncs g_pkr_read_funcmap_original; // size: 0x44, address: 0x602610
static class PKRReadFuncs g_pkr_read_funcmap; // size: 0x44, address: 0x69CAC0
static class st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x637E70
static class st_PACKER_READ_DATA g_readdatainst[20]; // size: 0xB360, address: 0x69CB10
static unsigned int g_loadlock; // size: 0x4, address: 0x637E74
static signed int pkr_sector_size; // size: 0x4, address: 0x637E78
static signed int g_packinit; // size: 0x4, address: 0x637E7C
static signed int g_memalloc_pair; // size: 0x4, address: 0x637E80
static signed int g_memalloc_runtot; // size: 0x4, address: 0x637E84
static signed int g_memalloc_runfree; // size: 0x4, address: 0x637E88
static char * g_strz_layername[12]; // size: 0x30, address: 0x0
static class RwResEntry * g_RWarena_resEntry; // size: 0x4, address: 0x637E94
static class RwResEntry * g_RWarena_resOwner; // size: 0x4, address: 0x637E98
static signed int g_RWarena_bufsize; // size: 0x4, address: 0x0
static unsigned char sxPTankPoolFree; // size: 0x1, address: 0x636DF0
static unsigned char inited; // size: 0x1, address: 0x637E9C
static unsigned int current_sequence_index; // size: 0x4, address: 0x637EA0
static class group_data groups[6]; // size: 0xA8, address: 0x602660
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
static unsigned int state[624]; // size: 0x9C0, address: 0x6A7EB0
static signed int left; // size: 0x4, address: 0x636DF4
static signed int initf; // size: 0x4, address: 0x637EA4
static unsigned int * next; // size: 0x4, address: 0x637EA8
char * apszRegionCode[21]; // size: 0x54, address: 0x602730
class tagiRenderArrays gRenderArr; // size: 0x5280, address: 0x6A8870
class tagiRenderInput gRenderBuffer; // size: 0x80, address: 0x6ADAF0
static class RwRaster * hack_raster; // size: 0x4, address: 0x637EAC
static signed int sRenderStateBlendTable[11]; // size: 0x2C, address: 0x602790
static signed int old_alpha_discard_test; // size: 0x4, address: 0x0
static unsigned char alphaDiscardCurrentlySet; // size: 0x1, address: 0x0
static signed int (* old_bridge_cb)(class RxPS2AllPipeData *); // size: 0x4, address: 0x637EB0
static signed int (* * hacked_bridge_cb_pointer)(class RxPS2AllPipeData *); // size: 0x4, address: 0x637EB4
static signed int (* * matfx_cb_pointer)(class RxPS2AllPipeData *); // size: 0x4, address: 0x0
static signed int (* old_matfx_cb)(class RxPS2AllPipeData *); // size: 0x4, address: 0x0
static class RpAtomic * current_hacked_atomic; // size: 0x4, address: 0x637EB8
static signed int (* old_im_setup_cb)(class RxPS2AllPipeData *, class RwMatrixTag * *); // size: 0x4, address: 0x637EBC
static class RwRGBA * im_material_color; // size: 0x4, address: 0x637EC0
static class RwRGBA old_im_material_color; // size: 0x4, address: 0x637EC4
static unsigned int g_total_alloc; // size: 0x4, address: 0x0
static signed int g_xsginit; // size: 0x4, address: 0x637ECC
static class st_XSAVEGAME_DATA g_xsgdata; // size: 0x20F0, address: 0x6ADCC0
static class st_XSAVEGAME_LEADER g_leaders[3]; // size: 0x108, address: 0x6AFDB0
static signed int force_icon_write; // size: 0x4, address: 0x637ED0
static class XSGAutoData g_autodata; // size: 0x14, address: 0x6AFF00
char * g_xScene_FMT; // size: 0x4, address: 0x0
class xScene * g_xSceneCur; // size: 0x4, address: 0x637ED4
static void (* cb_seethru_func)(class xEnt *); // size: 0x4, address: 0x0
static unsigned char cb_collType; // size: 0x1, address: 0x0
static class xMat4x3 * sBoxTestMat; // size: 0x4, address: 0x637EE0
static unsigned char sUseJSP; // size: 0x1, address: 0x637EE4
static void * sTestOPtr; // size: 0x4, address: 0x637EE8
static class xModelInstance * sTestMPtr; // size: 0x4, address: 0x637EEC
static class xBound sNearestBound; // size: 0x4C, address: 0x6AFF20
static unsigned char sNearestChk; // size: 0x1, address: 0x637EF0
static unsigned char sNearestCollType; // size: 0x1, address: 0x637EF4
static class RpIntersection sSphereIsx; // size: 0x1C, address: 0x6AFF70
// total size: 0x14
struct /* @anon3 */ {} xRumble::sphericalEmitter::__vtable; // size: 0x14, address: 0x635C70
class RpCollisionTriangle * sectorNearestFloorCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x39A700
signed int gridNearestFloorCB(class xEnt *, void *); // size: 0x0, address: 0x39A5B0
class xGrid grabbable_grid; // size: 0x38, address: 0x66AF60
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class RpCollisionTriangle * boxNearestFloorCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x39A710
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
void xRayHitsEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x39B9A0
void xRayHitsTikiLandableEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x39BA60
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
void ASG_ISG_changed(void *, enum en_CHGCODE); // size: 0x0, address: 0x39CDA0
signed int xSG_cb_leader_svproc(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x39E050
signed int xSG_cb_leader_svinfo(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x39E140
signed int xSG_cb_leader_load(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x39DFA0
void xSG_cb_ISGChange(void *, enum en_CHGCODE); // size: 0x0, address: 0x39D430
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
void emitter_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3A04D0
// total size: 0x10
struct /* @anon2 */ {} xRumble::emitterBase::__vtable; // size: 0x10, address: 0x0
// total size: 0x10
struct /* @anon1 */ {} xRumble::boxEmitter::__vtable; // size: 0x10, address: 0x635CA0
// total size: 0x10
struct /* @anon0 */ {} xRumble::effect::__vtable; // size: 0x10, address: 0x635C90
signed int FixClamp_RpPDS_G3_Uva_PS2AllMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x0
class RpMatFXState rpMatFXPipeState; // size: 0x20, address: 0x52AE30
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
class RwModuleInfo _rwIm3DModule; // size: 0x8, address: 0x6371F8
signed int yet_another_bullshit_workaround(class RxPS2AllPipeData *, class RwMatrixTag * *); // size: 0x0, address: 0x3A0AA0
signed int HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x3A0B20
signed int HackedRpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x3A1D60
signed int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x637200
signed int HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x3A0FB0
signed int iFXgooBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x4B78B0
signed int HIFastSkinMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x1D17C0
signed int CloneBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x1D0E40
signed int RpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x140C18
signed int RpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x184238
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x637100
signed long skyTest_1; // size: 0x4, address: 0x636808
signed long skyClamp_1; // size: 0x4, address: 0x636820
signed long skyPrim_State; // size: 0x4, address: 0x636840
void * skyUploadedCode; // size: 0x4, address: 0x636894
signed long skyTex1_1; // size: 0x4, address: 0x636828
unsigned int skyUserSwitch2; // size: 0x4, address: 0x63689C
unsigned int skyUserSwitch1; // size: 0x4, address: 0x636898
__int128 skyClipVect2; // size: 0x10, address: 0x5ECF20
__int128 skyClipVect1; // size: 0x10, address: 0x5ECF10
class RwRaster * skyTextureRaster; // size: 0x4, address: 0x6371A0
signed int skyAlphaTex; // size: 0x4, address: 0x6371A4
signed int MatFXMaterialDataOffset; // size: 0x4, address: 0x636348
signed long skyFogcol; // size: 0x4, address: 0x636818
enum RwCullMode gSkyCullState; // size: 0x4, address: 0x6371AC
__int128 skyCClipVect2; // size: 0x10, address: 0x5ECF40
__int128 skyCClipVect1; // size: 0x10, address: 0x5ECF30
signed int skyTLClipperMode; // size: 0x4, address: 0x6368A4
signed int skyTSClipperMode; // size: 0x4, address: 0x6368A0
signed long skyZbuf_1; // size: 0x4, address: 0x6367F8
signed int skyRasterExt; // size: 0x4, address: 0x637198
__int128 gifTag128; // size: 0x10, address: 0x5ECE90
signed int _rpPTankAtomicDataOffset; // size: 0x4, address: 0x636558
unsigned char HDR_brightening; // size: 0x1, address: 0x638330
signed int compare_ptanks(void *, void *); // size: 0x0, address: 0x3A5C00
class RwModuleInfo resourcesModule; // size: 0x8, address: 0x6370B0
void PKR_special_loadbuf_killed(class RwResEntry *); // size: 0x0, address: 0x3A6200
signed int OrdTest_R_AssetID(void *, void *); // size: 0x0, address: 0x3A75A0
signed int OrdComp_R_Asset(void *, void *); // size: 0x0, address: 0x3A75E0
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x638300
signed int compare_group_systems_function(void *, void *); // size: 0x0, address: 0x3A9AA0
void xParSysEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3AA7E0
void xParEmitterEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3C1CA0
float cosSinPolynomial[]; // size: 0x0, address: 0x605540
void xParCmd_DampenSpeed_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C2A40
void xParCmd_SizeInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C28C0
void xParCmd_AlphaInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C26B0
void xParCmd_Shaper_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C2370
void xParCmdCollideFallSticky_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C2AC0
void xParCmdCollideFall_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C2B80
void xParCmdScale_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3FD0
void xParCmdSmokeAlpha_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3FE0
void xParCmdRotateAround_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C32E0
void xParCmdRotPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3560
void xParCmdApplyWind_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3BC0
void xParCmdAlpha3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3FC0
void xParCmdAge_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4D10
void xParCmdRandomVelocityPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3C10
void xParCmdTexAnim_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C2C10
void xParCmdTex_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C32D0
void xParCmdScale3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C3FF0
void xParCmdMoveRandomPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4000
void xParCmdOrbitLine_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4A40
void xParCmdOrbitPoint_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4B60
void xParCmdFollow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4C40
void xParCmdKillSlow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4D50
void xParCmdVelocityApply_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C34B0
void xParCmdAccelerate_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C49B0
void xParCmdMoveRandom_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4370
void xParCmdMove_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x3C4940
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
// total size: 0x8A0
class xGlobals {
    // Members
public:
    class xCamera oldSkoolCamera; // offset 0x0, size 0x340
    class xCamGroup * cam; // offset 0x340, size 0x4
    class xCamScreen * screen; // offset 0x344, size 0x4
    class xVec4 frustplane[12]; // offset 0x350, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0x410, size 0x4
            class _tagxPad * pad1; // offset 0x414, size 0x4
            class _tagxPad * pad2; // offset 0x418, size 0x4
            class _tagxPad * pad3; // offset 0x41C, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0x410, size 0x10
    };
    signed int profile; // offset 0x420, size 0x4
    char profFunc[6][128]; // offset 0x424, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x724, size 0x4
    signed int sceneFirst; // offset 0x728, size 0x4
    char sceneStart[32]; // offset 0x72C, size 0x20
    class RpWorld * currWorld; // offset 0x74C, size 0x4
    class iFogParams fog; // offset 0x750, size 0x1C
    class iFogParams fogA; // offset 0x76C, size 0x1C
    class iFogParams fogB; // offset 0x788, size 0x1C
    signed long fog_t0; // offset 0x7A8, size 0x4
    signed long fog_t1; // offset 0x7B0, size 0x4
    signed int option_vibration; // offset 0x7B8, size 0x4
    signed int option_subtitles; // offset 0x7BC, size 0x4
    unsigned int slowdown; // offset 0x7C0, size 0x4
    float update_dt; // offset 0x7C4, size 0x4
    signed short ForceCinematic; // offset 0x7C8, size 0x2
    signed short ForceAllCinematics; // offset 0x7CA, size 0x2
    signed int useHIPHOP; // offset 0x7CC, size 0x4
    unsigned char NoMusic; // offset 0x7D0, size 0x1
    unsigned char NoCutscenes; // offset 0x7D1, size 0x1
    unsigned char NoPadCheck; // offset 0x7D2, size 0x1
    char currentActivePad; // offset 0x7D3, size 0x1
    unsigned char firstStartPressed; // offset 0x7D4, size 0x1
    unsigned char fromLauncher; // offset 0x7D5, size 0x1
    unsigned char FlashWIP; // offset 0x7D6, size 0x1
    unsigned char inLoadingScreen; // offset 0x7D7, size 0x1
    unsigned char LoadingScene; // offset 0x7D8, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x7D9, size 0x1
    unsigned char ForceMono; // offset 0x7DA, size 0x1
    unsigned int minVSyncCnt; // offset 0x7DC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x7E0, size 0x1
    unsigned char autoSaveFeature; // offset 0x7E1, size 0x1
    signed int asyncLoadingScreen; // offset 0x7E4, size 0x4
    signed int asyncLoadingFlags; // offset 0x7E8, size 0x4
    char fromLauncherUser[32]; // offset 0x7EC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x80C, size 0x4
    class zScene * sceneCur; // offset 0x810, size 0x4
    class zScene * scenePreload; // offset 0x814, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x818, size 0x4
    char watermark[127]; // offset 0x81C, size 0x7F
    unsigned char watermarkAlpha; // offset 0x89B, size 0x1
    float watermarkSize; // offset 0x89C, size 0x4
};
// total size: 0x8
class xParCmd {
    // Members
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
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
// total size: 0x60
class st_PACKER_ATOC_NODE {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int asstype; // offset 0x4, size 0x4
    signed int d_off; // offset 0x8, size 0x4
    signed int d_size; // offset 0xC, size 0x4
    signed int d_pad; // offset 0x10, size 0x4
    unsigned int d_chksum; // offset 0x14, size 0x4
    signed int assalign; // offset 0x18, size 0x4
    signed int infoflag; // offset 0x1C, size 0x4
    signed int loadflag; // offset 0x20, size 0x4
    char * memloc; // offset 0x24, size 0x4
    signed int x_size; // offset 0x28, size 0x4
    signed int readcnt; // offset 0x2C, size 0x4
    signed int readrem; // offset 0x30, size 0x4
    class PKRAssetType * typeref; // offset 0x34, size 0x4
    class st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    class st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char name[32]; // offset 0x40, size 0x20
};
// total size: 0x44
class PKRReadFuncs {
    // Members
public:
    unsigned int api_ver; // offset 0x0, size 0x4
    class st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, signed int *, class PKRAssetType *, signed int); // offset 0x4, size 0x4
    void (* Done)(class st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    signed int (* LoadLayer)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(class st_PACKER_READ_DATA *, unsigned int, char *, void *, signed int *); // offset 0x14, size 0x4
    void * (* AssetByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, unsigned int *); // offset 0x18, size 0x4
    signed int (* AssetCount)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    signed int (* IsAssetReady)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    signed int (* SetActive)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(class st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    signed int (* GetAssetInfo)(class st_PACKER_READ_DATA *, unsigned int, class PKRAssetTOCInfo *); // offset 0x30, size 0x4
    signed int (* GetAssetInfoByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, class PKRAssetTOCInfo *); // offset 0x34, size 0x4
    signed int (* PkgHasAsset)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(class st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(class st_PACKER_READ_DATA *); // offset 0x40, size 0x4
};
// total size: 0x20F0
class st_XSAVEGAME_DATA {
    // Members
public:
    signed int gfile_idx; // offset 0x0, size 0x4
    enum en_SAVEGAME_MODE mode; // offset 0x4, size 0x4
    unsigned int stage; // offset 0x8, size 0x4
    signed int gslot; // offset 0xC, size 0x4
    char label[64]; // offset 0x10, size 0x40
    signed int progress; // offset 0x50, size 0x4
    signed int thumbIconIdx; // offset 0x54, size 0x4
    signed long playtime; // offset 0x58, size 0x4
    char * membuf; // offset 0x60, size 0x4
    signed int memsize; // offset 0x64, size 0x4
    char * buf_curpos; // offset 0x68, size 0x4
    char * buf_sizespot; // offset 0x6C, size 0x4
    char * buf_cksmspot; // offset 0x70, size 0x4
    signed int totamt; // offset 0x74, size 0x4
    unsigned int chksum; // offset 0x78, size 0x4
    unsigned int upd_tally; // offset 0x7C, size 0x4
    signed int cltneed; // offset 0x80, size 0x4
    signed int cltmax; // offset 0x84, size 0x4
    signed int chdrneed; // offset 0x88, size 0x4
    signed int stkcnt; // offset 0x8C, size 0x4
    class st_XSAVEGAME_CLIENT cltstk[128]; // offset 0x90, size 0x2000
    class st_XSAVEGAME_CLIENT dfltloadclt; // offset 0x2090, size 0x40
    unsigned int file_chksum; // offset 0x20D0, size 0x4
    unsigned int read_chksum; // offset 0x20D4, size 0x4
    signed int readsize; // offset 0x20D8, size 0x4
    char * loadbuf; // offset 0x20DC, size 0x4
    signed int loadsize; // offset 0x20E0, size 0x4
    char * walkpos; // offset 0x20E4, size 0x4
    signed int walkremain; // offset 0x20E8, size 0x4
    class st_ISGSESSION * isgsess; // offset 0x20EC, size 0x4
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
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x24
class xParGroup {
    // Members
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
// total size: 0x2C
class st_PACKER_LTOC_NODE {
    // Members
public:
    enum en_LAYER_TYPE laytyp; // offset 0x0, size 0x4
    class st_XORDEREDARRAY assref; // offset 0x4, size 0x10
    signed int flg_ldstat; // offset 0x14, size 0x4
    signed int danglecnt; // offset 0x18, size 0x4
    unsigned int chksum; // offset 0x1C, size 0x4
    signed int laysize; // offset 0x20, size 0x4
    char * laymem; // offset 0x24, size 0x4
    char * laytru; // offset 0x28, size 0x4
};
// total size: 0x0
class st_HIPLOADDATA {};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
// total size: 0x138
class xParEmitterPropsAsset : public xBaseAsset {
    // Members
public:
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        class xParInterp rate; // offset 0xC, size 0x14
        class xParInterp value[1]; // offset 0xC, size 0x14
    };
    class xParInterp life; // offset 0x20, size 0x14
    class xParInterp size_birth; // offset 0x34, size 0x14
    class xParInterp size_death; // offset 0x48, size 0x14
    class xParInterp color_birth[4]; // offset 0x5C, size 0x50
    class xParInterp color_death[4]; // offset 0xAC, size 0x50
    class xParInterp vel_scale; // offset 0xFC, size 0x14
    class xParInterp vel_angle; // offset 0x110, size 0x14
    class xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
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
// total size: 0x20
class ptank_context {
    // Members
public:
    class ptank_context * next; // offset 0x0, size 0x4
    class RpAtomic * ptank; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    unsigned int src_blend; // offset 0xC, size 0x4
    unsigned int dst_blend; // offset 0x10, size 0x4
    unsigned int order_group; // offset 0x14, size 0x4
    signed int order_index; // offset 0x18, size 0x4
    unsigned int sequence_index; // offset 0x1C, size 0x4
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
// total size: 0xC
class xPEEntBound {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x8F8
class st_PACKER_READ_DATA {
    // Members
public:
    class PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    unsigned int opts; // offset 0x8, size 0x4
    unsigned int pkgver; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    signed int subver; // offset 0x14, size 0x4
    signed int compatver; // offset 0x18, size 0x4
    class st_HIPLOADDATA * pkg; // offset 0x1C, size 0x4
    unsigned int base_sector; // offset 0x20, size 0x4
    signed int lockid; // offset 0x24, size 0x4
    char packfile[128]; // offset 0x28, size 0x80
    signed int asscnt; // offset 0xA8, size 0x4
    signed int laycnt; // offset 0xAC, size 0x4
    class st_XORDEREDARRAY asstoc; // offset 0xB0, size 0x10
    class st_XORDEREDARRAY laytoc; // offset 0xC0, size 0x10
    class st_PACKER_ATOC_NODE * pool_anode; // offset 0xD0, size 0x4
    signed int pool_nextaidx; // offset 0xD4, size 0x4
    class st_XORDEREDARRAY typelist[129]; // offset 0xD8, size 0x810
    signed long time_made; // offset 0x8E8, size 0x4
    signed long time_mod; // offset 0x8F0, size 0x4
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
// total size: 0x60
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
// total size: 0x90
class xParEmitter : public xBase {
    // Members
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    class xVec3 last_emit_position; // offset 0x20, size 0xC
    class xVec3 last_emit_velocity; // offset 0x2C, size 0xC
    float rate; // offset 0x38, size 0x4
    float rate_time; // offset 0x3C, size 0x4
    float rate_fraction; // offset 0x40, size 0x4
    float rate_fraction_cull; // offset 0x44, size 0x4
    unsigned char emit_flags; // offset 0x48, size 0x1
    unsigned char emit_pad[3]; // offset 0x49, size 0x3
    unsigned char rot[3]; // offset 0x4C, size 0x3
    class xModelTag tag; // offset 0x50, size 0x20
    float oocull_distance_sqr; // offset 0x70, size 0x4
    float distance_to_cull_sqr; // offset 0x74, size 0x4
    void * attachTo; // offset 0x78, size 0x4
    class xParSys * parSys; // offset 0x7C, size 0x4
    class xBase * emit_volume; // offset 0x80, size 0x4
    class xVec3 last_attach_loc; // offset 0x84, size 0xC
};
// total size: 0x20
class RpMatFXState {
    // Members
public:
    enum RpMatFXMaterialFlags oldEffectType; // offset 0x0, size 0x4
    signed int (* bridgeCallBacks[7])(class RxPS2AllPipeData *); // offset 0x4, size 0x1C
};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
// total size: 0x144
class Manager {
    // Members
public:
    class padInfo m_padInfo[1]; // offset 0x0, size 0x144
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
// total size: 0x2C
class xParSys : public xBase {
    // Members
public:
    class xParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    class xParCmd * cmd; // offset 0x18, size 0x4
    class xParSys * parent; // offset 0x1C, size 0x4
    class xParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
    class RwTexture * txtr_particle; // offset 0x28, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0x48
class RxPS2AllPipeData {
    // Members
public:
    class rxNodePS2AllPvtData * objPvtData; // offset 0x0, size 0x4
    class rxNodePS2AllMatPvtData * matPvtData; // offset 0x4, size 0x4
    void * sourceObject; // offset 0x8, size 0x4
    class RpMeshHeader * meshHeader; // offset 0xC, size 0x4
    class RwMeshCache * meshCache; // offset 0x10, size 0x4
    enum RxInstanceFlags objInstance; // offset 0x14, size 0x4
    unsigned int objIdentifier; // offset 0x18, size 0x4
    float spExtra; // offset 0x1C, size 0x4
    signed int numMorphTargets; // offset 0x20, size 0x4
    unsigned int fastMorphing; // offset 0x24, size 0x4
    unsigned char transType; // offset 0x28, size 0x1
    unsigned char primType; // offset 0x29, size 0x1
    unsigned char matModulate; // offset 0x2A, size 0x1
    unsigned char vu1CodeIndex; // offset 0x2B, size 0x1
    class RpMesh * mesh; // offset 0x2C, size 0x4
    class RwResEntry * * cacheEntryRef; // offset 0x30, size 0x4
    enum RxInstanceFlags meshInstance; // offset 0x34, size 0x4
    unsigned int meshIdentifier; // offset 0x38, size 0x4
    class RwSurfaceProperties * surfProps; // offset 0x3C, size 0x4
    class RwTexture * texture; // offset 0x40, size 0x4
    class RwRGBA matCol; // offset 0x44, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x54
class xParEmitterAsset : public xBaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class xPESphere e_sphere; // offset 0x10, size 0x4
        class xPERect e_rect; // offset 0x10, size 0x8
        class xPELine e_line; // offset 0x10, size 0x1C
        class xPEVolume e_volume; // offset 0x10, size 0x4
        class xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
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
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class xParCmdAsset {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
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
class group_data {
    // Members
public:
    unsigned int max_size; // offset 0x0, size 0x4
    unsigned int create_flags; // offset 0x4, size 0x4
    class ptank_context * ptanks; // offset 0x8, size 0x4
    class ptank_context * * buckets; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    unsigned int used; // offset 0x14, size 0x4
    unsigned int buckets_used; // offset 0x18, size 0x4
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
// total size: 0x0
class st_ISGSESSION {};
// total size: 0xC
class xGridIterator {
    // Members
public:
    class xGridBound * * listhead; // offset 0x0, size 0x4
    class xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
// total size: 0x14
class xParCmdCollideFallSticky : public xParCmdCollideFall {
    // Members
public:
    float sticky; // offset 0x10, size 0x4
};
enum RpMeshHeaderFlags {
    rpMESHHEADERTRISTRIP = 1,
    rpMESHHEADERTRIFAN = 2,
    rpMESHHEADERLINELIST = 4,
    rpMESHHEADERPOLYLINE = 8,
    rpMESHHEADERPOINTLIST = 16,
    rpMESHHEADERPRIMMASK = 255,
    rpMESHHEADERUNINDEXED = 256,
    rpMESHHEADERFLAGSFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
class st_XSAVEGAME_CLIENT {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int (* cltinfo)(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // offset 0x4, size 0x4
    signed int (* cltproc)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // offset 0x8, size 0x4
    signed int (* cltload)(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // offset 0xC, size 0x4
    void * cltdata; // offset 0x10, size 0x4
    signed int needamt; // offset 0x14, size 0x4
    signed int maxamt; // offset 0x18, size 0x4
    signed int realamt; // offset 0x1C, size 0x4
    char * buf_sizepos; // offset 0x20, size 0x4
    char * buf_maxpos; // offset 0x24, size 0x4
    signed int blokact; // offset 0x28, size 0x4
    signed int blokmax; // offset 0x2C, size 0x4
    char * blokpos; // offset 0x30, size 0x4
    char * readpos; // offset 0x34, size 0x4
    signed int readamt; // offset 0x38, size 0x4
    signed int readremain; // offset 0x3C, size 0x4
};
// total size: 0x14
class xVolume : public xBase {
    // Members
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
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
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x14
class system_bucket {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    union { // inferred
        signed int rskey; // offset 0x4, size 0x4
        struct { // inferred
            unsigned char src_blend; // offset 0x4, size 0x1
            unsigned char dst_blend; // offset 0x5, size 0x1
            unsigned short flags; // offset 0x6, size 0x2
        };
    };
    unsigned int order_group; // offset 0x8, size 0x4
    signed int order_index; // offset 0xC, size 0x4
    class internal_system * systems; // offset 0x10, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x40
class internal_system : public xParticleBatchSystem {
    // Members
public:
    class block_info * block_list; // offset 0x28, size 0x4
    signed int blocks_used; // offset 0x2C, size 0x4
    signed int units_used; // offset 0x30, size 0x4
    signed int units_per_block; // offset 0x34, size 0x4
    class block_info * best_block; // offset 0x38, size 0x4
    class internal_system * next; // offset 0x3C, size 0x4
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
// total size: 0x1C
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
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
// total size: 0x28
class sphericalEmitterAsset : public xDynAsset {
    // Members
public:
    unsigned int effectID; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    class xVec3 position; // offset 0x18, size 0xC
    unsigned char onlyRumbleOnY; // offset 0x24, size 0x1
    unsigned char fallOff; // offset 0x25, size 0x1
    unsigned char onlyOnFloor; // offset 0x26, size 0x1
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
class _tagPartSpace {
    // Members
public:
    signed int total; // offset 0x0, size 0x4
    class _tagPartLink head; // offset 0x4, size 0x8
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
class PKRAssetTOCInfo {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
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
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
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
struct /* @anon0 */ {};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
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
// total size: 0xC
class block_info {
    // Members
public:
    unsigned char * mem; // offset 0x0, size 0x4
    signed int used; // offset 0x4, size 0x4
    class block_info * next; // offset 0x8, size 0x4
};
// total size: 0x8
class sector_type {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
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
enum xRandomChoiceRule {
    xRandomChoiceRule_ANY_EXCEPT_LAST = 0,
    xRandomChoiceRule_ANY = 1,
    xRandomChoiceRule_ANY_NOT_CHOSEN = 2,
    xRandomChoiceRule_IN_ORDER = 3,
    xRandomChoiceRule_IN_ORDER_RANDOM = 4,
    xRandomChoiceRule_COUNT = 5,
};
// total size: 0x10
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x184
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // Members
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 last_emit_position; // offset 0x14C, size 0xC
    class xVec3 vel; // offset 0x158, size 0xC
    class xVec3 last_emit_velocity; // offset 0x164, size 0xC
    float vel_angle_variation; // offset 0x170, size 0x4
    unsigned char rot[3]; // offset 0x174, size 0x3
    unsigned char padding; // offset 0x177, size 0x1
    float radius; // offset 0x178, size 0x4
    float emit_interval_current; // offset 0x17C, size 0x4
    class xBase * emit_volume; // offset 0x180, size 0x4
};
// total size: 0x18
class xPEEntBone {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4F0
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x68, size 0x4
    signed int num_base; // offset 0x6C, size 0x4
    class xBase * * base; // offset 0x70, size 0x4
    unsigned int num_update_base; // offset 0x74, size 0x4
    class xBase * * update_base; // offset 0x78, size 0x4
    signed int baseCount[141]; // offset 0x7C, size 0x234
    class xBase * baseList[141]; // offset 0x2B0, size 0x234
    class _zEnv * zen; // offset 0x4E4, size 0x4
    class zSceneParameters * parameters; // offset 0x4E8, size 0x4
    unsigned char enableDrawing; // offset 0x4EC, size 0x1
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
// total size: 0x20
class MatFXEffectUnion {
    // Members
public:
    union { // inferred
        class MatFXBumpMapData bumpMap; // offset 0x0, size 0x14
        class MatFXEnvMapData envMap; // offset 0x0, size 0x10
        class MatFXDualData dual; // offset 0x0, size 0x10
        class MatFXUVAnimData uvAnim; // offset 0x0, size 0x8
    };
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x8
class xParticleBatchGroup {
    // Members
public:
    unsigned char * elements; // offset 0x0, size 0x4
    signed int elements_size; // offset 0x4, size 0x4
};
// total size: 0x10
struct /* @anon2 */ {};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0x8
class rwPS2AllClusterInstanceInfo {
    // Members
public:
    unsigned int attrib; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0x14
class effectInternal {
    // Members
public:
    class emitterBase * pEmitter; // offset 0x0, size 0x4
    float timeToLive; // offset 0x4, size 0x4
    float prevMagFraction; // offset 0x8, size 0x4
    class cameraFX * cameraEffect; // offset 0xC, size 0x4
    unsigned char rumbleForever; // offset 0x10, size 0x1
};
// total size: 0x1B0
class rwPS2AllResEntryHeader {
    // Members
public:
    signed int refCnt; // offset 0x0, size 0x4
    signed int clrCnt; // offset 0x4, size 0x4
    __int128 * data; // offset 0x8, size 0x4
    unsigned int numVerts; // offset 0xC, size 0x4
    unsigned int objIdentifier; // offset 0x10, size 0x4
    unsigned int meshIdentifier; // offset 0x14, size 0x4
    signed int batchSize; // offset 0x18, size 0x4
    signed int numBatches; // offset 0x1C, size 0x4
    signed int batchesPerTag; // offset 0x20, size 0x4
    signed int morphStart; // offset 0x24, size 0x4
    signed int morphFinish; // offset 0x28, size 0x4
    signed int morphNum; // offset 0x2C, size 0x4
    class rwPS2AllClusterQuickInfo clquickinfo[12]; // offset 0x30, size 0x60
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x90, size 0x120
};
// total size: 0x0
class xFFX {};
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
enum en_XSGASYNC_STATUS {
    XSG_ASTAT_NOOP = 0,
    XSG_ASTAT_INPROG = 1,
    XSG_ASTAT_SUCCESS = 2,
    XSG_ASTAT_FAILED = 3,
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x1C
class boxEmitter : public emitterBase {
    // Members
public:
    class boxEmitterAsset * pAsset; // offset 0x18, size 0x4
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
class xParCmdDampenData : public xParCmdAsset {
    // Members
public:
    float dampSpeed; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x2D0
class PKRWriteData {
    // Members
public:
    class PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    signed int lockid; // offset 0x8, size 0x4
    unsigned int pkropt; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    char packfile[256]; // offset 0x14, size 0x100
    signed int sectalign; // offset 0x114, size 0x4
    signed int dassalign; // offset 0x118, size 0x4
    class st_XORDEREDARRAY asslist; // offset 0x11C, size 0x10
    class st_XORDEREDARRAY laylist; // offset 0x12C, size 0x10
    signed int off_lg_asset; // offset 0x13C, size 0x4
    signed int off_lg_layer; // offset 0x140, size 0x4
    signed int off_lg_xform; // offset 0x144, size 0x4
    char gameName[32]; // offset 0x148, size 0x20
    char platform[32]; // offset 0x168, size 0x20
    char videoSystem[32]; // offset 0x188, size 0x20
    char countryCode[32]; // offset 0x1A8, size 0x20
    char hdrfile[256]; // offset 0x1C8, size 0x100
    signed int (* hdrfunc)(void *, unsigned int, char *, char *); // offset 0x2C8, size 0x4
    signed int (* generrf)(unsigned int, enum en_generr, char *, char *); // offset 0x2CC, size 0x4
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
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum en_LAYER_TYPE {
    PKR_LTYPE_ALL = -1,
    PKR_LTYPE_DEFAULT = 0,
    PKR_LTYPE_TEXTURE = 1,
    PKR_LTYPE_TEXTURE_STRM = 2,
    PKR_LTYPE_BSP = 3,
    PKR_LTYPE_MODEL = 4,
    PKR_LTYPE_ANIMATION = 5,
    PKR_LTYPE_VRAM = 6,
    PKR_LTYPE_SRAM = 7,
    PKR_LTYPE_SNDTOC = 8,
    PKR_LTYPE_CUTSCENE = 9,
    PKR_LTYPE_CUTSCENETOC = 10,
    PKR_LTYPE_JSPINFO = 11,
    PKR_LTYPE_NOMORE = 12,
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
// total size: 0x2C
class xParCmdOrbitLine : public xParCmdAsset {
    // Members
public:
    class xVec3 p; // offset 0x8, size 0xC
    class xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
// total size: 0x10
class xParCmdCollideFall : public xParCmdAsset {
    // Members
public:
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
// total size: 0x14
class xParCmdRandomVelocityPar : public xParCmdAsset {
    // Members
public:
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
};
// total size: 0x144
class padInfo {
    // Members
public:
    class effectInternal m_effects[16]; // offset 0x0, size 0x140
    class effectInternal * m_currentExclusive; // offset 0x140, size 0x4
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
// total size: 0x4C
class cameraFX {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float elapsedTime; // offset 0x8, size 0x4
    float maxTime; // offset 0xC, size 0x4
    union { // inferred
        class cameraFXShake shake; // offset 0x10, size 0x3C
        class cameraFXZoom zoom; // offset 0x10, size 0x20
    };
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
// total size: 0x10
class cb_sphere_hits_ent {
    // Members
public:
    class xSphere * sphere; // offset 0x0, size 0x4
    class xCollis * coll; // offset 0x4, size 0x4
    unsigned char chkby; // offset 0x8, size 0x1
    unsigned char collType; // offset 0x9, size 0x1
    signed int hit_calc; // offset 0xC, size 0x4
};
// total size: 0x10
class xParCmdFollow : public xParCmdAsset {
    // Members
public:
    float gravity; // offset 0x8, size 0x4
    float epsilon; // offset 0xC, size 0x4
};
// total size: 0x28
class PKRAssetType {
    // Members
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
enum en_XSG_WHYFAIL {
    XSG_WHYERR_NONE = 0,
    XSG_WHYERR_NOCARD = 1,
    XSG_WHYERR_NOROOM = 2,
    XSG_WHYERR_DAMAGE = 3,
    XSG_WHYERR_CARDYANKED = 4,
    XSG_WHYERR_OTHER = 5,
    XSG_WHYERR_NOMORE = 6,
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
// total size: 0x8
class _tagPartLink {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    class _tagPartLink * next; // offset 0x4, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
};
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};
enum en_CHGCODE {
    ISG_CHG_NONE = 0,
    ISG_CHG_TARGET = 1,
    ISG_CHG_GAMELIST = 2,
};
// total size: 0x40
class _tagPartition {
    // Members
public:
    class xVec3 min; // offset 0x0, size 0xC
    class xVec3 max; // offset 0xC, size 0xC
    class xVec3 space_dim; // offset 0x18, size 0xC
    signed int total_x; // offset 0x24, size 0x4
    signed int total_y; // offset 0x28, size 0x4
    signed int total_z; // offset 0x2C, size 0x4
    class _tagPartSpace * space; // offset 0x30, size 0x4
    class _tagPartSpace global; // offset 0x34, size 0xC
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
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
// total size: 0x14
class XSGAutoData {
    // Members
public:
    signed int flg_autodata; // offset 0x0, size 0x4
    signed int lastTarg; // offset 0x4, size 0x4
    signed int lastGame; // offset 0x8, size 0x4
    signed int lastPhysicalSlot; // offset 0xC, size 0x4
    class st_ISGSESSION * isg_monitor; // offset 0x10, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
enum xRegion {
    eRegionUnknown = -1,
    eRegionUS = 0,
    eRegionBE = 1,
    eRegionCH = 2,
    eRegionCZ = 3,
    eRegionDE = 4,
    eRegionDK = 5,
    eRegionES = 6,
    eRegionFI = 7,
    eRegionFR = 8,
    eRegionIT = 9,
    eRegionJP = 10,
    eRegionKR = 11,
    eRegionNL = 12,
    eRegionNO = 13,
    eRegionPL = 14,
    eRegionPT = 15,
    eRegionRU = 16,
    eRegionSE = 17,
    eRegionSK = 18,
    eRegionTW = 19,
    eRegionUK = 20,
    eRegionCount = 21,
    eRegionMaxCount = 32,
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
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x18
class xLine3 {
    // Members
public:
    class xVec3 p1; // offset 0x0, size 0xC
    class xVec3 p2; // offset 0xC, size 0xC
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
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
enum ptank_render_mode_enum {
    PTANK_RENDER_DEFAULT = 0,
    PTANK_RENDER_NONE = 1,
    PTANK_RENDER_ALL = 2,
    MAX_PTANK_RENDER = 3,
    FORCE_INT_PTANK_RENDER = -1,
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
enum RpMatFXMaterialFlags {
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX = 7,
    rpMATFXNUMEFFECTS = 6,
    rpMATFXFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
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
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
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
// total size: 0x24
class xParSysAsset : public xBaseAsset {
    // Members
public:
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x24
class xParCmdTex : public xParCmdAsset {
    // Members
public:
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
// total size: 0x0
class xVolumeAsset {};
enum en_XSG_TGT_NAME_FORMAT {
    XSG_NAMFMT_BASIC = 0,
    XSG_NAMFMT_SYMBOLS = 1,
    XSG_NAMFMT_PROPER = 2,
    XSG_NAMFMT_PHYSSLOT = 3,
    XSG_NAMFMT_PHYSICAL = 4,
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
class xParCmdKillSlow : public xParCmdAsset {
    // Members
public:
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
// total size: 0x14
class xParInterp {
    // Members
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
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
enum iSndHandle {
};
// total size: 0x18
class xParCmdAlphaInOutData : public xParCmdAsset {
    // Members
public:
    float custAlpha[4]; // offset 0x8, size 0x10
};
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x10
class cb_ray_hits_ent {
    // Members
public:
    class xRay3 * ray; // offset 0x0, size 0x4
    class xCollis * coll; // offset 0x4, size 0x4
    unsigned char chkby; // offset 0x8, size 0x1
    unsigned char collType; // offset 0x9, size 0x1
    signed int hit_calc; // offset 0xC, size 0x4
};
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0xE
class rwPS2AllPrimTypeLUT {
    // Members
public:
    unsigned char vertToIndRatio[7]; // offset 0x0, size 0x7
    unsigned char vertToIndOffset[7]; // offset 0x7, size 0x7
};
// total size: 0x10
class MatFXDualData {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    enum RwBlendFunction srcBlendMode; // offset 0x4, size 0x4
    enum RwBlendFunction dstBlendMode; // offset 0x8, size 0x4
    void * padAlign; // offset 0xC, size 0x4
};
// total size: 0x40
class MatFXEffectData {
    // Members
public:
    class MatFXEffectUnion data; // offset 0x0, size 0x20
    enum RpMatFXMaterialFlags flag; // offset 0x20, size 0x4
    class MatFXSkyMaterial skyMat; // offset 0x28, size 0x18
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0xC
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x20
class xParCmdOrbitPoint : public xParCmdAsset {
    // Members
public:
    class xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class xParCmdMove : public xParCmdAsset {
    // Members
public:
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x18
class xParCmdSizeInOutData : public xParCmdAsset {
    // Members
public:
    float custSize[4]; // offset 0x8, size 0x10
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
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x80
class xNearFloorPoly {
    // Members
public:
    class xBox box; // offset 0x0, size 0x18
    class xVec3 center; // offset 0x18, size 0xC
    class xVec3 facingVec; // offset 0x24, size 0xC
    float facingDot; // offset 0x30, size 0x4
    float floorDot; // offset 0x34, size 0x4
    class xVec3 vert[3]; // offset 0x38, size 0x24
    float neardist; // offset 0x5C, size 0x4
    class xVec3 nearpt; // offset 0x60, size 0xC
    signed int nearvert; // offset 0x6C, size 0x4
    signed int nearedge; // offset 0x70, size 0x4
    unsigned int oid; // offset 0x74, size 0x4
    void * optr; // offset 0x78, size 0x4
    class xModelInstance * mptr; // offset 0x7C, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x8
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
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
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0xC
class xCmdInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    void (* func)(class xParCmd *, class xParGroup *, float); // offset 0x8, size 0x4
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
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x340
class xCamera : public xBase {
    // Members
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
    float smoothOutwardSlidePos; // offset 0x330, size 0x4
};
// total size: 0x90
class rpMatFXMaterialData {
    // Members
public:
    class MatFXEffectData data[2]; // offset 0x0, size 0x80
    enum RpMatFXMaterialFlags flags; // offset 0x80, size 0x4
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
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0x58
class rxNodePS2AllPvtData {
    // Members
public:
    class rwPS2AllPrimTypeLUT primLUT; // offset 0x0, size 0xE
    unsigned char pad[2]; // offset 0xE, size 0x2
    signed int (* objectSetupCB)(class RxPS2AllPipeData *, class RwMatrixTag * *); // offset 0x10, size 0x4
    signed int (* objectFinalizeCB)(class RxPS2AllPipeData *); // offset 0x14, size 0x4
    class RxPipeline * groupPipe; // offset 0x18, size 0x4
    unsigned int lightOffset; // offset 0x1C, size 0x4
    unsigned int lightBufferSize; // offset 0x20, size 0x4
    __int128 * nullLightBlock; // offset 0x24, size 0x4
    float nullLightBuffer[12]; // offset 0x28, size 0x30
};
// total size: 0x34
class st_HIPLOADFUNCS {
    // Members
public:
    class st_HIPLOADDATA * (* create)(char *, char *, signed int, signed int); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(class st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(class st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(class st_HIPLOADDATA *); // offset 0x10, size 0x4
    signed int (* readBytes)(class st_HIPLOADDATA *, char *, signed int); // offset 0x14, size 0x4
    signed int (* readShorts)(class st_HIPLOADDATA *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readLongs)(class st_HIPLOADDATA *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readFloats)(class st_HIPLOADDATA *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readString)(class st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    signed int (* setBypass)(class st_HIPLOADDATA *, signed int, signed int); // offset 0x28, size 0x4
    void (* setSpot)(class st_HIPLOADDATA *, signed int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(class st_HIPLOADDATA *); // offset 0x30, size 0x4
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
// total size: 0x14
class MatFXBumpMapData {
    // Members
public:
    class RwFrame * frame; // offset 0x0, size 0x4
    class RwTexture * texture; // offset 0x4, size 0x4
    class RwTexture * bumpTexture; // offset 0x8, size 0x4
    float coef; // offset 0xC, size 0x4
    float invBumpWidth; // offset 0x10, size 0x4
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
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
// total size: 0x58
class st_XSAVEGAME_LEADER {
    // Members
public:
    char gameLabel[64]; // offset 0x0, size 0x40
    signed int progress; // offset 0x40, size 0x4
    signed long gametime; // offset 0x48, size 0x4
    char thumbIconIdx; // offset 0x50, size 0x1
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
// total size: 0x14
class xParCmdMoveRandomPar : public xParCmdAsset {
    // Members
public:
    class xVec3 dim; // offset 0x8, size 0xC
};
// total size: 0xFC
class zPlayer : public zEnt {
    // Members
public:
    class xVec3 trigLastFramePos; // offset 0xE0, size 0xC
    signed int zPlayerFlags; // offset 0xEC, size 0x4
    unsigned int lorezModelID; // offset 0xF0, size 0x4
    class xModelInstance * lorezModel; // offset 0xF4, size 0x4
    class xModelInstance * hirezModel; // offset 0xF8, size 0x4
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
class xParCmdShaperData : public xParCmdAsset {
    // Members
public:
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
// total size: 0x30
class boxEmitterAsset : public xDynAsset {
    // Members
public:
    unsigned int effectID; // offset 0x10, size 0x4
    class xVec3 minCorner; // offset 0x14, size 0xC
    class xVec3 maxCorner; // offset 0x20, size 0xC
    unsigned char onlyOnFloor; // offset 0x2C, size 0x1
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
class xParCmdTexAnim : public xParCmdAsset {
    // Members
public:
    unsigned char anim_mode; // offset 0x8, size 0x1
    unsigned char anim_wrap_mode; // offset 0x9, size 0x1
    unsigned char pad_anim; // offset 0xA, size 0x1
    unsigned char throttle_spd_less_than; // offset 0xB, size 0x1
    float throttle_spd_sqr; // offset 0xC, size 0x4
    float throttle_time; // offset 0x10, size 0x4
    float throttle_time_elapsed; // offset 0x14, size 0x4
};
// total size: 0x32C
class rxNodePS2AllMatPvtData {
    // Members
public:
    signed int (* meshInstanceTestCB)(class RxPS2AllPipeData *); // offset 0x0, size 0x4
    class RwResEntry * (* resEntryAllocCB)(class RxPS2AllPipeData *, class RwResEntry * *, unsigned int, void (*)(class RwResEntry *)); // offset 0x4, size 0x4
    signed int (* instanceCB)(class RxPS2AllPipeData *, void * *, unsigned int); // offset 0x8, size 0x4
    signed int (* bridgeCB)(class RxPS2AllPipeData *); // offset 0xC, size 0x4
    signed int (* postMeshCB)(class RxPS2AllPipeData *); // offset 0x10, size 0x4
    signed int vifOffset; // offset 0x14, size 0x4
    void * * vu1CodeArray; // offset 0x18, size 0x4
    unsigned int codeArrayLength; // offset 0x1C, size 0x4
    class rwPS2AllClusterInstanceInfo clinfo[12]; // offset 0x20, size 0x60
    unsigned int cliIndex[12]; // offset 0x80, size 0x30
    enum RpMeshHeaderFlags pipeType; // offset 0xB0, size 0x4
    unsigned char totallyOpaque; // offset 0xB4, size 0x1
    unsigned char numStripes; // offset 0xB5, size 0x1
    unsigned char sizeOnVU; // offset 0xB6, size 0x1
    unsigned char pad0; // offset 0xB7, size 0x1
    class rwPS2AllResEntryFormat strip; // offset 0xB8, size 0x138
    class rwPS2AllResEntryFormat list; // offset 0x1F0, size 0x138
    unsigned int magicValue; // offset 0x328, size 0x4
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
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x18
class effect : public emitterBase {};
enum RxInstanceFlags {
    rxINSTANCENAINSTANCEFLAG = 0,
    rxINSTANCEDONTINSTANCE = 1,
    rxINSTANCEINPLACEINSTANCE = 2,
    rxINSTANCECONGRUENTINSTANCE = 4,
    rxINSTANCEFULLINSTANCE = 8,
    rxINSTANCETYPEMASK = 14,
    rxINSTANCEXYZ = 16,
    rxINSTANCENORMAL = 32,
    rxINSTANCERGBA = 64,
    rxINSTANCEUV = 128,
    rxINSTANCEUV1 = 128,
    rxINSTANCEUV2 = 256,
    rxINSTANCEUV3 = 512,
    rxINSTANCEUV4 = 1024,
    rxINSTANCEUV5 = 2048,
    rxINSTANCEUV6 = 4096,
    rxINSTANCEUV7 = 8192,
    rxINSTANCEUV8 = 16384,
    rxINSTANCEUSER1 = 32768,
    rxINSTANCEUSER2 = 65536,
    rxINSTANCEUSER3 = 131072,
    rxINSTANCEUSER4 = 262144,
    rxINSTANCEALL = 524272,
    rxINSTANCEMASK = 524287,
    rxINSTANCEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RpIntersectData {
    // Members
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
};
// total size: 0x18
class MatFXSkyMaterial {
    // Members
public:
    unsigned long alpha; // offset 0x0, size 0x4
    unsigned long fogcol; // offset 0x8, size 0x4
    unsigned long test; // offset 0x10, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x138
class rwPS2AllResEntryFormat {
    // Members
public:
    unsigned char batchRound; // offset 0x0, size 0x1
    unsigned char stripReverse; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    unsigned int maxInputSize; // offset 0x4, size 0x4
    signed int batchSize; // offset 0x8, size 0x4
    signed int batchesPerTag; // offset 0xC, size 0x4
    signed int morphBatchSize; // offset 0x10, size 0x4
    signed int morphBatchesPerTag; // offset 0x14, size 0x4
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x18, size 0x120
};
enum en_ASYNC_OPSTAT {
    ISG_OPSTAT_FAILURE = -1,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS = 1,
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
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
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
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
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x20
class cameraFXZoom {
    // Members
public:
    float holdTime; // offset 0x0, size 0x4
    float vel; // offset 0x4, size 0x4
    float accel; // offset 0x8, size 0x4
    float distance; // offset 0xC, size 0x4
    unsigned int mode; // offset 0x10, size 0x4
    float velCur; // offset 0x14, size 0x4
    float distanceCur; // offset 0x18, size 0x4
    float holdTimeCur; // offset 0x1C, size 0x4
};
// total size: 0x5280
class tagiRenderArrays {
    // Members
public:
    unsigned short m_index[960]; // offset 0x0, size 0x780
    class RxObjSpace3DVertex m_vertex[480]; // offset 0x780, size 0x4380
    float m_vertexTZ[480]; // offset 0x4B00, size 0x780
};
// total size: 0x8
class RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};
enum en_generr {
    PKR_GENERR_NONE = 0,
    PKR_GENERR_PACKOPEN = 1,
    PKR_GENERR_ASSETOPEN = 2,
    PKR_GENERR_EMPTYASSET = 3,
    PKR_GENERR_WRITEFAIL = 4,
    PKR_GENERR_VIRTUAL = 5,
    PKR_GENERR_DUPEASSET = 6,
    PKR_GENERR_UNKNOWN = 7,
};
// total size: 0x20
class xParCmdRotateAround : public xParCmdAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
// total size: 0x18
class rwPS2AllFieldRec {
    // Members
public:
    signed int numVerts; // offset 0x0, size 0x4
    signed int morphNumVerts; // offset 0x4, size 0x4
    signed int dataoffset; // offset 0x8, size 0x4
    signed int morphDataoffset; // offset 0xC, size 0x4
    signed short skip; // offset 0x10, size 0x2
    signed short morphSkip; // offset 0x12, size 0x2
    signed short reverse; // offset 0x14, size 0x2
    unsigned char vuoffset; // offset 0x16, size 0x1
    unsigned char pad[1]; // offset 0x17, size 0x1
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
enum en_ASYNC_OPERR {
    ISG_OPERR_NONE = 0,
    ISG_OPERR_NOOPER = 1,
    ISG_OPERR_MULTIOPER = 2,
    ISG_OPERR_INITFAIL = 3,
    ISG_OPERR_GAMEDIR = 4,
    ISG_OPERR_NOCARD = 5,
    ISG_OPERR_NOROOM = 6,
    ISG_OPERR_DAMAGE = 7,
    ISG_OPERR_CORRUPT = 8,
    ISG_OPERR_OTHER = 9,
    ISG_OPERR_SVNOSPACE = 10,
    ISG_OPERR_SVINIT = 11,
    ISG_OPERR_SVWRITE = 12,
    ISG_OPERR_SVOPEN = 13,
    ISG_OPERR_LDINIT = 14,
    ISG_OPERR_LDREAD = 15,
    ISG_OPERR_LDOPEN = 16,
    ISG_OPERR_TGTERR = 17,
    ISG_OPERR_TGTREM = 18,
    ISG_OPERR_TGTPREP = 19,
    ISG_OPERR_UNKNOWN = 20,
    ISG_OPERR_NOMORE = 21,
};
// total size: 0x28
class ptank_pool__color_mat : public ptank_pool {
    // Members
public:
    class xColor_tag * color; // offset 0x20, size 0x4
    class xMat4x3 * mat; // offset 0x24, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x2C
class ptank_pool__color_mat_uv2 : public ptank_pool {
    // Members
public:
    class xColor_tag * color; // offset 0x20, size 0x4
    class xMat4x3 * mat; // offset 0x24, size 0x4
    class xVec2 * uv; // offset 0x28, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x14
struct /* @anon3 */ {};
// total size: 0x0
class rxReq {};
// total size: 0x20
class xParCmdRotPar : public xParCmdAsset {
    // Members
public:
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
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
// total size: 0x10
class MatFXEnvMapData {
    // Members
public:
    class RwFrame * frame; // offset 0x0, size 0x4
    class RwTexture * texture; // offset 0x4, size 0x4
    float coef; // offset 0x8, size 0x4
    signed int useFrameBufferAlpha; // offset 0xC, size 0x4
};
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x2C
class ptank_pool__pos_color_size : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
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
// total size: 0x30
class ptank_pool__pos_color_size_uv2 : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
    class xVec2 * uv; // offset 0x2C, size 0x4
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
// total size: 0x80
class tagiRenderInput {
    // Members
public:
    unsigned short * m_index; // offset 0x0, size 0x4
    class RxObjSpace3DVertex * m_vertex; // offset 0x4, size 0x4
    float * m_vertexTZ; // offset 0x8, size 0x4
    unsigned int m_mode; // offset 0xC, size 0x4
    signed int m_vertexType; // offset 0x10, size 0x4
    signed int m_vertexTypeSize; // offset 0x14, size 0x4
    signed int m_indexCount; // offset 0x18, size 0x4
    signed int m_vertexCount; // offset 0x1C, size 0x4
    class xMat4x3 m_camViewMatrix; // offset 0x20, size 0x40
    class xVec4 m_camViewR; // offset 0x60, size 0x10
    class xVec4 m_camViewU; // offset 0x70, size 0x10
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
// total size: 0x3C
class cameraFXShake {
    // Members
public:
    float magnitude; // offset 0x0, size 0x4
    class xVec3 dir; // offset 0x4, size 0xC
    float cycleTime; // offset 0x10, size 0x4
    float cycleMax; // offset 0x14, size 0x4
    float dampen; // offset 0x18, size 0x4
    float dampenRate; // offset 0x1C, size 0x4
    float rotate_magnitude; // offset 0x20, size 0x4
    float radius; // offset 0x24, size 0x4
    class xVec3 * epicenterP; // offset 0x28, size 0x4
    class xVec3 epicenter; // offset 0x2C, size 0xC
    class xVec3 * player; // offset 0x38, size 0x4
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
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
// total size: 0x34
class ptank_pool__pos_color_size_rot_uv2 : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
    class xVec2 * uv; // offset 0x2C, size 0x4
    float * rot; // offset 0x30, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x8
class xParSysInfo {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    void (* func)(void *, class xParGroup *); // offset 0x4, size 0x4
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
class MatFXUVAnimData {
    // Members
public:
    class RwMatrixTag * baseTransform; // offset 0x0, size 0x4
    class RwMatrixTag * dualTransform; // offset 0x4, size 0x4
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

