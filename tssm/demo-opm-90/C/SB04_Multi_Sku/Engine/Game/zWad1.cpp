/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zWad1.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static class _tagActionLine * sActionLine[8]; // size: 0x20, address: 0x6861C0
static class RwRaster * sActionLineRaster; // size: 0x4, address: 0x637C94
static unsigned int cachedAnimations; // size: 0x4, address: 0x0
static class zAnimCacheEntry cachedEntry[32]; // size: 0x180, address: 0x0
static unsigned int currentCacheIndex; // size: 0x4, address: 0x0
static class xVec3 cache[5120]; // size: 0xF000, address: 0x0
static signed int nals; // size: 0x4, address: 0x637C98
static unsigned int * aids; // size: 0x4, address: 0x637C9C
static class xAnimTable * * atbls; // size: 0x4, address: 0x637CA0
static signed int * anused; // size: 0x4, address: 0x637CA4
static char * astnames[20]; // size: 0x50, address: 0x600BB0
float thresh; // size: 0x4, address: 0x0
float thresh; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static class PKRAssetType assetTypeHandlers[102]; // size: 0xFF0, address: 0x600C00
static class xJSPHeader sDummyEmptyJSP; // size: 0x2C, address: 0x686270
static class xJSPHeader * sTempJSP; // size: 0x4, address: 0x637CA8
class AnimTableList animTable[8]; // size: 0x60, address: 0x601BF0
static class xAnimTable * (* tableFuncList[1])(); // size: 0x4, address: 0x637CAC
static unsigned int (* effectFuncList[3])(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0xC, address: 0x601C50
class LoadingModels sAsyncModels[1]; // size: 0xC, address: 0x0
class RwCamera * cam; // size: 0x4, address: 0x637CB0
class RpLight * light; // size: 0x4, address: 0x637CB4
class RwFrame * frame; // size: 0x4, address: 0x637CC0
class RpWorld * world; // size: 0x4, address: 0x637CC4
class Screen * screen; // size: 0x4, address: 0x637CC8
static float zBULLET_TIME_CAMERA_TIMER; // size: 0x4, address: 0x0
static float zBULLET_TIME_DEFAULT_ANGLE; // size: 0x4, address: 0x0
static float zBULLET_TIME_ACTIVE_ANGLE; // size: 0x4, address: 0x0
static float zBULLET_TIME_CAMERA_ORIGIN_OFFSET; // size: 0x4, address: 0x0
static float CONST_DEG_TO_RAD; // size: 0x4, address: 0x0
static enum zCameraType zCAMERA_TYPE; // size: 0x4, address: 0x0
static float zSNAPSHOT_TIMER; // size: 0x4, address: 0x0
static unsigned char bt_was_active; // size: 0x1, address: 0x0
static unsigned char force_mode; // size: 0x1, address: 0x0
unsigned char zBULLET_TIME_CAMERA; // size: 0x1, address: 0x0
unsigned char zBULLET_TIME; // size: 0x1, address: 0x0
unsigned char zSTATIC_CAMERA_ACTIVE; // size: 0x1, address: 0x0
class zBulletTimeObject btObj; // size: 0x14, address: 0x0
class zBulletTimeCamera * btCam; // size: 0x4, address: 0x0
class zSnapshots snapshotObj; // size: 0xF4, address: 0x0
static float filter_angle[3]; // size: 0xC, address: 0x0
static unsigned int filters_count; // size: 0x4, address: 0x0
static unsigned int temp_count; // size: 0x4, address: 0x0
unsigned int gBusStopIsRunning; // size: 0x4, address: 0x637CCC
signed int gBusStopIsWaiting; // size: 0x4, address: 0x637CD0
static class ztextbox * sBusStopUI; // size: 0x4, address: 0x637CD4
static unsigned int input_disabled; // size: 0x4, address: 0x637CD8
static enum zcam_mode_enum current_mode; // size: 0x4, address: 0x636CC4
static class xCam * mode_cams[1]; // size: 0x4, address: 0x637CDC
static unsigned char have_default_orientation; // size: 0x1, address: 0x637CE0
static class xVec3 default_orientation; // size: 0xC, address: 0x6862A0
static class zCamSB * follow_cam; // size: 0x4, address: 0x637CE4
static class xCamGroup global_cam; // size: 0x120, address: 0x6862B0
static class xCamScreen global_screen; // size: 0x8, address: 0x637CE8
float MIN_RESPONSIVENESS_NORMAL; // size: 0x4, address: 0x636CC8
float MIN_RESPONSIVENESS_SMALL_VEL; // size: 0x4, address: 0x636CCC
float TIME_TO_COME_OUT_OF_HARD_TURN; // size: 0x4, address: 0x636CD0
float zcam_pad_pyaw_scale; // size: 0x4, address: 0x636CD4
float zcam_pad_pitch_scale; // size: 0x4, address: 0x636CD8
float zcam_near_d; // size: 0x4, address: 0x636CDC
float zcam_near_h; // size: 0x4, address: 0x636CE0
float zcam_near_pitch; // size: 0x4, address: 0x636CE4
float zcam_far_d; // size: 0x4, address: 0x636CE8
float zcam_far_h; // size: 0x4, address: 0x636CEC
float zcam_far_pitch; // size: 0x4, address: 0x636CF0
float zcam_wall_d; // size: 0x4, address: 0x636CF4
float zcam_wall_h; // size: 0x4, address: 0x636CF8
float zcam_wall_pitch; // size: 0x4, address: 0x636CFC
float zcam_above_d; // size: 0x4, address: 0x636D00
float zcam_above_h; // size: 0x4, address: 0x636D04
float zcam_above_pitch; // size: 0x4, address: 0x636D08
float zcam_below_d; // size: 0x4, address: 0x636D0C
float zcam_below_h; // size: 0x4, address: 0x636D10
float zcam_below_pitch; // size: 0x4, address: 0x636D14
float zcam_highbounce_d; // size: 0x4, address: 0x636D18
float zcam_highbounce_h; // size: 0x4, address: 0x636D1C
float zcam_highbounce_pitch; // size: 0x4, address: 0x636D20
float zcam_overrot_min; // size: 0x4, address: 0x636D24
float zcam_overrot_mid; // size: 0x4, address: 0x636D28
float zcam_overrot_max; // size: 0x4, address: 0x636D2C
float zcam_overrot_rate; // size: 0x4, address: 0x636D30
float zcam_overrot_tstart; // size: 0x4, address: 0x636D34
float zcam_overrot_tend; // size: 0x4, address: 0x636D38
float zcam_overrot_velmin; // size: 0x4, address: 0x636D3C
float zcam_overrot_velmax; // size: 0x4, address: 0x636D40
float zcam_overrot_tmanual; // size: 0x4, address: 0x636D44
float zcam_overrot_tmr; // size: 0x4, address: 0x637CF0
class xCamera zcam_backupcam; // size: 0x340, address: 0x6863D0
class xCamera zcam_backupconvers; // size: 0x340, address: 0x0
signed int zcam_near; // size: 0x4, address: 0x637CF4
unsigned char zcam_centering; // size: 0x1, address: 0x637CF8
unsigned char zcam_lastcentering; // size: 0x1, address: 0x637CFC
signed int zcam_mode; // size: 0x4, address: 0x637D00
signed int zcam_bbounce; // size: 0x4, address: 0x637D04
signed int zcam_lbbounce; // size: 0x4, address: 0x637D08
signed int zcam_convers; // size: 0x4, address: 0x637D0C
signed int zcam_lconvers; // size: 0x4, address: 0x637D10
signed int zcam_longbounce; // size: 0x4, address: 0x637D14
signed int zcam_highbounce; // size: 0x4, address: 0x637D18
signed int zcam_cutscene; // size: 0x4, address: 0x637D1C
signed int zcam_reward; // size: 0x4, address: 0x637D20
class xVec3 * zcam_playervel; // size: 0x4, address: 0x637D24
float zcam_mintgtheight; // size: 0x4, address: 0x636D48
signed int zcam_fly; // size: 0x4, address: 0x637D28
signed int zcam_flypaused; // size: 0x4, address: 0x637D2C
void * zcam_flydata; // size: 0x4, address: 0x637D30
unsigned int zcam_flysize; // size: 0x4, address: 0x637D34
float zcam_flytime; // size: 0x4, address: 0x637D38
float zcam_flyrate; // size: 0x4, address: 0x637D3C
signed int zcam_flyJustStopped; // size: 0x4, address: 0x637D40
class xCamAsset * zcam_dest; // size: 0x4, address: 0x637D44
class xQuat zcam_quat; // size: 0x10, address: 0x686710
float zcam_tmr; // size: 0x4, address: 0x637D48
float zcam_ttm; // size: 0x4, address: 0x637D4C
float zcam_fovcurr; // size: 0x4, address: 0x637D50
float zcam_fovdest; // size: 0x4, address: 0x637D54
static unsigned char sNearToggleEnabled; // size: 0x1, address: 0x637D58
static float sCenteringFactorDP; // size: 0x4, address: 0x637D5C
static unsigned int stop_track; // size: 0x4, address: 0x637D60
static unsigned char input_enabled; // size: 0x1, address: 0x636D4C
static unsigned char lassocam_enabled; // size: 0x1, address: 0x637D64
static float lassocam_factor; // size: 0x4, address: 0x637D68
static unsigned char changing_folcam_orientation; // size: 0x1, address: 0x637D6C
static float change_folcam_timer; // size: 0x4, address: 0x637D70
static enum WallJumpViewState wall_jump_enabled; // size: 0x4, address: 0x637D74
static class xVec3 wall_jump_view; // size: 0xC, address: 0x686720
static float dMultiplier; // size: 0x4, address: 0x637D78
static float dOffset; // size: 0x4, address: 0x637D7C
static float hMultiplier; // size: 0x4, address: 0x637D80
static float hOffset; // size: 0x4, address: 0x637D84
static float rewardMove; // size: 0x4, address: 0x636D50
static float rewardMoveSpeed; // size: 0x4, address: 0x636D54
static float rewardZoomSpeed; // size: 0x4, address: 0x636D58
static float rewardZoomAmount; // size: 0x4, address: 0x636D5C
static float rewardTiltTime; // size: 0x4, address: 0x636D60
static float rewardTiltAmount; // size: 0x4, address: 0x636D64
unsigned int zcam_flyasset_current; // size: 0x4, address: 0x637D8C
static signed int sCamTweakCount; // size: 0x4, address: 0x637D90
static class zCamTweak sCamTweakList[8]; // size: 0xA0, address: 0x686730
static float sCamTweakLerp; // size: 0x4, address: 0x637D94
static float sCamTweakTime; // size: 0x4, address: 0x637D98
static float sCamTweakPitch[2]; // size: 0x8, address: 0x637DA0
static float sCamTweakDistMult[2]; // size: 0x8, address: 0x637DA8
static float sCamTweakPitchCur; // size: 0x4, address: 0x637DB0
static float sCamTweakDistMultCur; // size: 0x4, address: 0x637DB4
static float sCamD; // size: 0x4, address: 0x637DB8
static float sCamH; // size: 0x4, address: 0x637DBC
static float sCamPitch; // size: 0x4, address: 0x637DC0
static class zCamTweakLook zcam_neartweak; // size: 0xC, address: 0x6867D0
static class zCamTweakLook zcam_fartweak; // size: 0xC, address: 0x6867E0
static unsigned char activated; // size: 0x1, address: 0x637DC4
static class zCamWidget * widget_cam; // size: 0x4, address: 0x637DC8
static class xCamAsset static_cam_asset; // size: 0x88, address: 0x0
enum iSndGroupHandle sSoundAsset[33]; // size: 0x84, address: 0x6867F0
float BOOST_DURATION; // size: 0x4, address: 0x636D70
signed int MAX_NITROS; // size: 0x4, address: 0x636D74
static signed int sTireBones[4]; // size: 0x10, address: 0x627760
static char * carSmokeEmitterName; // size: 0x4, address: 0x636D78
static class zParEmitter * sCarSmokeEmit; // size: 0x4, address: 0x637DCC
static char * carKetchupEmitterName; // size: 0x4, address: 0x636D7C
static class zParEmitter * sCarKetchupEmit; // size: 0x4, address: 0x637DD0
static char * carMustardEmitterName; // size: 0x4, address: 0x636D80
static class zParEmitter * sCarMustardEmit; // size: 0x4, address: 0x637DD4
static char * carSeedsEmitterName; // size: 0x4, address: 0x636D84
static class zParEmitter * sCarSeedsEmit; // size: 0x4, address: 0x637DD8
static char * carGrassEmitterName; // size: 0x4, address: 0x636D88
static class zParEmitter * sCarGrassEmit; // size: 0x4, address: 0x637DDC
static char * carSandEmitterName; // size: 0x4, address: 0x636D8C
static class zParEmitter * sCarSandEmit; // size: 0x4, address: 0x637DE0
static char * carDirtEmitterName; // size: 0x4, address: 0x636D90
static class zParEmitter * sCarDirtEmit; // size: 0x4, address: 0x637DE4
static char * carWaterEmitterName; // size: 0x4, address: 0x636D94
static class zParEmitter * sCarWaterEmit; // size: 0x4, address: 0x637DE8
static char * carSteamEmitterName; // size: 0x4, address: 0x636D98
static class zParEmitter * sCarSteamEmit; // size: 0x4, address: 0x637DEC
static char * carOilEmitterName; // size: 0x4, address: 0x636D9C
static class zParEmitter * sCarOilEmit; // size: 0x4, address: 0x637DF0
static char * carNitroUsedCounter; // size: 0x4, address: 0x636DA0
static class RwTexture * sBrakeLightTex; // size: 0x4, address: 0x637DF4
class xModelInstance * sDamageModelInstances[4]; // size: 0x10, address: 0x686880
static char * surfaceNames[12]; // size: 0x30, address: 0x0
static class driveSurfaceDescriptor surfaceDescriptors[12]; // size: 0x150, address: 0x601CD0
static class PlayerStreakInfo sStreakInfo[2]; // size: 0x68, address: 0x601E20
static unsigned int tweak_surface_values[12]; // size: 0x30, address: 0x0
class config_data NitroBlurConfig; // size: 0x24, address: 0x601E90
class zStreamedSound carOneLinersData[8]; // size: 0xA0, address: 0x601EC0
static class zCollisionGeomTableEntry sCollisionGeomTable[20]; // size: 0xA0, address: 0x686920
static unsigned int sCollisionGeomTableCount; // size: 0x4, address: 0x637DF8
static char * PlayerModelInfo[27]; // size: 0x6C, address: 0x601F90
static unsigned int PlayerTags[27]; // size: 0x6C, address: 0x627770
static class ScenePlayerMapEntry ScenePlayerMap[128]; // size: 0x3000, address: 0x6869C0
static signed int ScenePlayerMapCount; // size: 0x4, address: 0x637DFC
static class AlternateCostumes AltCostumes[128]; // size: 0x2C00, address: 0x0
static signed int AltCostumeCount; // size: 0x4, address: 0x0
static class zCutsceneHack cutsceneHackTable[17]; // size: 0x594, address: 0x602000
static signed int gCutsceneSkipOK; // size: 0x4, address: 0x637E00
static unsigned char ents_hidden; // size: 0x1, address: 0x637E04
static float DEG_TO_RAD; // size: 0x4, address: 0x636DA8
static float LAUNCH_ANGLE; // size: 0x4, address: 0x636DAC
static float LAUNCH_VEL; // size: 0x4, address: 0x636DB0
static float DAMAGE_RADIUS; // size: 0x4, address: 0x636DB4
static float MAX_TIME_NO_COLLISIONS; // size: 0x4, address: 0x636DB8
static float HIT_TO_DESTROY_TIME; // size: 0x4, address: 0x636DBC
static float Y_VELOCITY; // size: 0x4, address: 0x636DC0
static float RESPAWN_THRESHOLD; // size: 0x4, address: 0x636DC4
static float DOBJ_STD_BOUND_VAR; // size: 0x4, address: 0x636DC8
static unsigned int current_disco_floor; // size: 0x4, address: 0x637E0C
unsigned char off_flag[3]; // size: 0x3, address: 0x6277E0
unsigned char transition_flag[3]; // size: 0x3, address: 0x6277E8
unsigned char on_flag[3]; // size: 0x3, address: 0x6277F0
unsigned char mask; // size: 0x1, address: 0x0
unsigned char off_flag[3]; // size: 0x3, address: 0x6277F8
unsigned char transition_flag[3]; // size: 0x3, address: 0x627800
unsigned char on_flag[3]; // size: 0x3, address: 0x627808
unsigned char mask; // size: 0x1, address: 0x0
static signed int g_zdsp_init; // size: 0x4, address: 0x637E18
static signed int g_zdsp_dblog_init; // size: 0x4, address: 0x0
static class st_ZDISPATCH_DEPOT g_zdsp_depot; // size: 0x8, address: 0x637E20
static class World worlds[20]; // size: 0x690, address: 0x689CD0
static signed short currentWorld; // size: 0x2, address: 0x637E28
static signed short currentTask; // size: 0x2, address: 0x637E2C
static signed short currentPointer; // size: 0x2, address: 0x637E30
static signed int oldVibrationOption; // size: 0x4, address: 0x637E38
static enum xSndMode oldSoundMode; // size: 0x4, address: 0x637E3C
static unsigned int oldMusicVolume; // size: 0x4, address: 0x637E40
static unsigned int oldSFXVolume; // size: 0x4, address: 0x637E44
static char * sEventTable[803]; // size: 0xC8C, address: 0x0
// total size: 0x24
struct /* @anon1 */ {} zCamSB::__vtable; // size: 0x24, address: 0x635BE0
class xEnv * gCurXEnv; // size: 0x4, address: 0x637F40
class zGlobals globals; // size: 0x2410, address: 0x7AB790
void zEnvEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x37DC30
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x443060
void zEGenerator_Render(class zEGenerator *); // size: 0x0, address: 0x37EA60
void zEGeneratorEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x37E0A0
void zEGenerator_Move(class zEGenerator *, class xScene *, float); // size: 0x0, address: 0x37EC90
void zEGenerator_Update(class zEGenerator *, class xScene *, float); // size: 0x0, address: 0x37EA70
class xSndGlobals gSnd; // size: 0x2970, address: 0x7A57F0
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
enum eSNDCurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x6379FC
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
class xColor_tag g_CLEAR; // size: 0x4, address: 0x62C8B0
void ZDSP_elcb_event(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x37F320
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
void event_handler(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x382E70
unsigned int BurnSinRateCallback(float); // size: 0x0, address: 0x384C20
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
class zHitSourceMapEntry zHitSourceMap[22]; // size: 0xB0, address: 0x61F2C0
void DOBJ_alwaysUseSphere(class xEnt *, class xVec3 *); // size: 0x0, address: 0x385210
unsigned int gFrameCount; // size: 0x4, address: 0x637EFC
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x16ACD8
void zCutsceneMgrEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3863F0
class zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x5FE530
void zConditionalEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x387050
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
unsigned int IdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BB90
unsigned int DeathCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B950
unsigned int FailedCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B980
unsigned int SuccessCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B9B0
unsigned int ReverseCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BAD0
unsigned int StartBoostingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BB00
unsigned int StartDrivingSlippyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BB30
unsigned int StartDrivingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BB60
unsigned int JumpEndedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B880
unsigned int JumpEndCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BA70
unsigned int JumpStartedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B8B0
unsigned int JumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BAA0
unsigned int CrashCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BA40
unsigned int DamageSpinCompleteCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B910
unsigned int SpinRightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B9E0
unsigned int SpinLeftCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38BA10
unsigned int AnimDefaultCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x38B8E0
class xVec3 g_Y3; // size: 0xC, address: 0x62C4F0
class xVec3 g_NY3; // size: 0xC, address: 0x62C520
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class xMat4x3 sCameraLastMat; // size: 0x40, address: 0x683290
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
// total size: 0x24
struct /* @anon4 */ {} xCam::__vtable; // size: 0x24, address: 0x0
void zStaticCameraAsset_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x0
void zCamMarkerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x38F9D0
// total size: 0x24
struct /* @anon3 */ {} @unnamed@zWad1_cpp@::zCamWidget::__vtable; // size: 0x24, address: 0x635C10
void zCameraTweak_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x38FE70
void zCameraFlyEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x390440
class xVec3 g_O3; // size: 0xC, address: 0x62C4D0
float gSkipTimeFlythrough; // size: 0x4, address: 0x636F34
// total size: 0x24
struct /* @anon5 */ {} zCamCar::__vtable; // size: 0x24, address: 0x635C40
// total size: 0x24
struct /* @anon8 */ {} zCamDrive::__vtable; // size: 0x24, address: 0x0
void zBusStopEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3972F0
// total size: 0xC
struct /* @anon2 */ {} zLinearFilter::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon9 */ {} zFilterAbstract<xVec3>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon6 */ {} zQuaternionFilter::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon0 */ {} zFilterAbstract<zQuat>::__vtable; // size: 0xC, address: 0x0
// total size: 0x24
struct /* @anon7 */ {} zBulletTimeCamera::__vtable; // size: 0x24, address: 0x0
unsigned int scratch_mem_used; // size: 0x4, address: 0x638098
void * FindAssetCB(unsigned int, char *); // size: 0x0, address: 0x3984A0
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x638124
class RwTexture * TexCB(class RwTexture *, void *); // size: 0x0, address: 0x398760
unsigned int AlwaysConditional(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x399080
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
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
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
enum xSndMode {
    xSndMode_Mono = 0,
    xSndMode_Stereo = 1,
    xSndMode_Dolby = 2,
    xSndMode_Count = 3,
};
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
class zCamTweakLook {
    // Members
public:
    float h; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
// total size: 0x28
class pointer_asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0xD0
class zCamSB : public xCam {};
// total size: 0x700
class zCar {
    // Members
public:
    class xEnt * pEnt; // offset 0x0, size 0x4
    class xMat4x3 lastMat; // offset 0x10, size 0x40
    class xMat4x3 mat; // offset 0x50, size 0x40
    float boundYShift; // offset 0x90, size 0x4
    float boundRadius; // offset 0x94, size 0x4
    float shockHalfRange; // offset 0x98, size 0x4
    unsigned char engineRunning; // offset 0x9C, size 0x1
    unsigned char playShutDownSound; // offset 0x9D, size 0x1
    enum iSndHandle soundBoostStartHandle; // offset 0xA0, size 0x4
    float modelYaw; // offset 0xA4, size 0x4
    class xVec3 velocity; // offset 0xA8, size 0xC
    unsigned char inGroundContact; // offset 0xB4, size 0x1
    float timeOffGround; // offset 0xB8, size 0x4
    float shockExtension; // offset 0xBC, size 0x4
    float steeringPosition; // offset 0xC0, size 0x4
    unsigned char isSliding; // offset 0xC4, size 0x1
    unsigned char isInDamageSpin; // offset 0xC5, size 0x1
    float oilPenaltyTimer; // offset 0xC8, size 0x4
    class driveSurfaceDescriptor * pCurrentSurface; // offset 0xCC, size 0x4
    enum zDrivingSurf currentSurfaceType; // offset 0xD0, size 0x4
    signed int numCollisions; // offset 0xD4, size 0x4
    class xCollis collisions[12]; // offset 0xD8, size 0x3F0
    unsigned int collisionUserFlags[12]; // offset 0x4C8, size 0x30
    class xBound bound; // offset 0x4F8, size 0x4C
    unsigned char collisionTypes[22]; // offset 0x544, size 0x16
    signed int numNitros; // offset 0x55C, size 0x4
    float boostTimeRemaining; // offset 0x560, size 0x4
    class xModelBlur nitroBlur; // offset 0x564, size 0x4
    enum animState currentAnimState; // offset 0x568, size 0x4
    enum animState idealDrivingAnimState; // offset 0x56C, size 0x4
    unsigned char animReversing; // offset 0x570, size 0x1
    unsigned char animBrakeLightsOn; // offset 0x571, size 0x1
    signed int animPropellorAngle; // offset 0x574, size 0x4
    float animLean; // offset 0x578, size 0x4
    class xVec3 animVirtualBunTopPos; // offset 0x57C, size 0xC
    class xVec3 animVirtualBunTopVel; // offset 0x588, size 0xC
    float animVirtualBunTopHeight; // offset 0x594, size 0x4
    float animVirtualBunTopVerticalVel; // offset 0x598, size 0x4
    float animJumpOpeness; // offset 0x59C, size 0x4
    unsigned char animCrash; // offset 0x5A0, size 0x1
    unsigned char animStartSpinLeft; // offset 0x5A1, size 0x1
    unsigned char animStartSpinRight; // offset 0x5A2, size 0x1
    unsigned char animHeavyLanding; // offset 0x5A3, size 0x1
    unsigned char animInJumpAnimation; // offset 0x5A4, size 0x1
    unsigned char animSuccessMode; // offset 0x5A5, size 0x1
    unsigned char animFailedMode; // offset 0x5A6, size 0x1
    float skidFXIntensity; // offset 0x5A8, size 0x4
    class xVec3 lastPositionPar[4]; // offset 0x5AC, size 0x30
    class xVec3 lastVelocityPar[4]; // offset 0x5DC, size 0x30
    class xVec3 lastPositionSeed; // offset 0x60C, size 0xC
    class xVec3 lastPositionKetchup; // offset 0x618, size 0xC
    class xVec3 lastVelocityKetchup; // offset 0x624, size 0xC
    class xVec3 lastPositionMustard; // offset 0x630, size 0xC
    class xVec3 lastVelocityMustard; // offset 0x63C, size 0xC
    enum eDamage damageLevel; // offset 0x648, size 0x4
    float soundEnginePitch; // offset 0x64C, size 0x4
    enum iSndHandle soundEngineHandle; // offset 0x650, size 0x4
    enum eDamage soundCurrentEngineType; // offset 0x654, size 0x4
    enum iSndHandle soundBoostLoopHandle; // offset 0x658, size 0x4
    signed long soundReverseActivationTime; // offset 0x660, size 0x4
    enum iSndHandle soundReverseBeepHandle; // offset 0x668, size 0x4
    class driveSurfaceDescriptor * pSoundCurrentSurface; // offset 0x66C, size 0x4
    enum iSndHandle soundDriveLoopHandle; // offset 0x670, size 0x4
    enum iSndHandle soundSkidLoopHandle; // offset 0x674, size 0x4
    enum iSndHandle soundSkidLoopHandles[22]; // offset 0x678, size 0x58
    unsigned char soundGearCrunchReady; // offset 0x6D0, size 0x1
    class _xCounter * nitroUsedCounter; // offset 0x6D4, size 0x4
    unsigned char oilOneLinerPlayed; // offset 0x6D8, size 0x1
    class zStreamedSoundList carOneLiners; // offset 0x6DC, size 0x8
    class effect * mpRumbleCollision; // offset 0x6E4, size 0x4
    class effect * mpRumbleDamage; // offset 0x6E8, size 0x4
    class effect * mpRumbleBoostStart; // offset 0x6EC, size 0x4
    class effect * mpRumbleBoost; // offset 0x6F0, size 0x4
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
// total size: 0x90
class zParEmitter : public xParEmitter {};
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
// total size: 0x208
class xEntBoulder : public xEnt {
    // Members
public:
    class xEntBoulderAsset * basset; // offset 0xD8, size 0x4
    class xShadowSimpleCache simpShadow_embedded; // offset 0xDC, size 0xA4
    class xEntShadow entShadow_embedded; // offset 0x180, size 0x2C
    class xVec3 localCenter; // offset 0x1AC, size 0xC
    class xVec3 vel; // offset 0x1B8, size 0xC
    class xVec3 rotVec; // offset 0x1C4, size 0xC
    class xVec3 force; // offset 0x1D0, size 0xC
    class xVec3 instForce; // offset 0x1DC, size 0xC
    float angVel; // offset 0x1E8, size 0x4
    float timeToLive; // offset 0x1EC, size 0x4
    signed int hitpoints; // offset 0x1F0, size 0x4
    float fOOSphRadius; // offset 0x1F4, size 0x4
    enum iSndHandle currSndFX; // offset 0x1F8, size 0x4
    unsigned int lastRolling; // offset 0x1FC, size 0x4
    unsigned int rollingID; // offset 0x200, size 0x4
    unsigned char collis_chk; // offset 0x204, size 0x1
    unsigned char collis_pen; // offset 0x205, size 0x1
    unsigned char pad1[2]; // offset 0x206, size 0x2
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
// total size: 0x14
class RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
// total size: 0x8
class xEntOpacity {
    // Members
public:
    float delta_opacity; // offset 0x0, size 0x4
    float delta_opacity_2; // offset 0x4, size 0x4
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
// total size: 0x64
class z_disco_floor : public xBase {
    // Members
public:
    class z_disco_floor_asset * asset; // offset 0x10, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        char * off; // offset 0x0, size 0x4
        char * transition; // offset 0x4, size 0x4
        char * on; // offset 0x8, size 0x4
    } prefix; // offset 0x14, size 0xC
    unsigned char * * state_masks; // offset 0x20, size 0x4
    unsigned char * active_state_mask; // offset 0x24, size 0x4
    unsigned char * next_state_mask; // offset 0x28, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        class xEnt * * off; // offset 0x0, size 0x4
        class xEnt * * transition; // offset 0x4, size 0x4
        class xEnt * * on; // offset 0x8, size 0x4
        unsigned int size; // offset 0xC, size 0x4
    } object_list; // offset 0x2C, size 0x10
    unsigned int min_state; // offset 0x3C, size 0x4
    unsigned int max_state; // offset 0x40, size 0x4
    unsigned int state; // offset 0x44, size 0x4
    unsigned int next_state; // offset 0x48, size 0x4
    unsigned int state_counter; // offset 0x4C, size 0x4
    float transition_delay; // offset 0x50, size 0x4
    float state_delay; // offset 0x54, size 0x4
    float transition_time; // offset 0x58, size 0x4
    float state_time; // offset 0x5C, size 0x4
    unsigned char enabled; // offset 0x60, size 0x1
    unsigned char forward; // offset 0x61, size 0x1
};
// total size: 0x44
class zDestructibleState {
    // Members
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class zShrapnelAsset * shrapnel; // offset 0x4, size 0x4
    class zShrapnelAsset * shrapnelhit; // offset 0x8, size 0x4
    unsigned int percent; // offset 0xC, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x10, size 0x4
    enum iSndGroupHandle sg_handle_hit; // offset 0x14, size 0x4
    enum iSndGroupHandle sg_handle_hit_switch; // offset 0x18, size 0x4
    enum iSndHandle sh_handle_idle; // offset 0x1C, size 0x4
    enum iSndHandle sh_handle_hit; // offset 0x20, size 0x4
    enum iSndHandle sh_handle_hit_switch; // offset 0x24, size 0x4
    unsigned int sg_fx_id; // offset 0x28, size 0x4
    unsigned int sg_fx_id_switch; // offset 0x2C, size 0x4
    class sphericalEmitter * rumbleHit; // offset 0x30, size 0x4
    class sphericalEmitter * rumbleSwitch; // offset 0x34, size 0x4
    class zDestructibleStateAttachedAnimList * animList; // offset 0x38, size 0x4
    class zDestructibleStateFXList fxList; // offset 0x3C, size 0x8
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
// total size: 0x180
class zBulletTimeCamera : public xCam {
    // Members
public:
    class zQuaternionFilter qfilter; // offset 0xD0, size 0x34
    class zLinearFilter lfilter; // offset 0x104, size 0x2C
    enum zFilterType type; // offset 0x130, size 0x4
    class xVec3 _eye; // offset 0x134, size 0xC
    class xVec3 _at; // offset 0x140, size 0xC
    class xVec3 _up; // offset 0x14C, size 0xC
    class xVec3 _pos; // offset 0x158, size 0xC
    float len; // offset 0x164, size 0x4
    enum en_BULLET_TIME_CAMERA_FLAGS cam_flags; // offset 0x168, size 0x4
    class xVec3 cam_pos; // offset 0x16C, size 0xC
};
// total size: 0x10
class st_ZDISPATCH_CONTEXT {
    // Members
public:
    enum en_DISPATCH_COMMAND cmd; // offset 0x0, size 0x4
    void * indata; // offset 0x4, size 0x4
    void * inxtra; // offset 0x8, size 0x4
    void * result; // offset 0xC, size 0x4
};
// total size: 0xC
class xEntMotionSplineData {
    // Members
public:
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0x2410
class zGlobals : public xGlobals {
    // Members
public:
    unsigned int playerTag; // offset 0x8A0, size 0x4
    unsigned int playerLoaded; // offset 0x8A4, size 0x4
    unsigned int playerLoadOrder[8]; // offset 0x8A8, size 0x20
    unsigned char invertJoystick; // offset 0x8C8, size 0x1
    class zPlayerGlobals player; // offset 0x8D0, size 0x1B00
    class zAssetPickupTable * pickupTable; // offset 0x23D0, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x23D4, size 0x4
    class zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x23D8, size 0x4
    char startDebugMode[32]; // offset 0x23DC, size 0x20
    unsigned int noMovies; // offset 0x23FC, size 0x4
    unsigned int boundUpdateTime; // offset 0x2400, size 0x4
    unsigned char draw_player_after_fx; // offset 0x2404, size 0x1
    enum zGlobalDemoType demoType; // offset 0x2408, size 0x4
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
// total size: 0x0
class xModelAssetInfo {};
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
// total size: 0x24
class zCutsceneMgr : public xCutsceneMgr {
    // Members
public:
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0xC
class zAnimCacheEntry {
    // Members
public:
    class xVec3 * data; // offset 0x0, size 0x4
    class xAnimFile * animFile; // offset 0x4, size 0x4
    unsigned short bone; // offset 0x8, size 0x2
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
        unsigned char japanese_break : 1; // offset 0x1, size 0x1
        unsigned short dummy : 3; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0x1C0
class zEntTrigger : public zEnt {
    // Members
public:
    class xBox triggerBox; // offset 0xDC, size 0x18
    unsigned int entered; // offset 0xF4, size 0x4
    class xEntDrive drive; // offset 0x100, size 0xC0
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
// total size: 0x24
class busstop_asset : public xDynAsset {
    // Members
public:
    unsigned int marker; // offset 0x10, size 0x4
    unsigned int character; // offset 0x14, size 0x4
    unsigned int cameraID; // offset 0x18, size 0x4
    unsigned int busID; // offset 0x1C, size 0x4
    float delay; // offset 0x20, size 0x4
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
// total size: 0x18
class _zConditional : public xBase {
    // Members
public:
    class zCondAsset * asset; // offset 0x10, size 0x4
    class zVarEntry * varEntry; // offset 0x14, size 0x4
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
// total size: 0x200
class zCamCar : public zCamDrive {};
// total size: 0x10
class zFootstepsData {
    // Members
public:
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
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
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
};
// total size: 0x18
class st_ZDISPATCH_DATA : public xBase {
    // Members
public:
    class xBaseAsset * rawass; // offset 0x10, size 0x4
    signed int placeholder; // offset 0x14, size 0x4
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
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
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
// total size: 0x18
class _xCounter : public xBase {
    // Members
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char pad; // offset 0x17, size 0x1
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
// total size: 0x170
class zCamWidget : public xCam {
    // Members
public:
    unsigned char transitioning; // offset 0xD0, size 0x1
    class xCamAsset * asset; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
    float end_time; // offset 0xDC, size 0x4
    float start_fov; // offset 0xE0, size 0x4
    float end_fov; // offset 0xE4, size 0x4
    class xVec3 start_loc; // offset 0xE8, size 0xC
    class xQuat start_dir; // offset 0x100, size 0x10
    class xQuat end_dir; // offset 0x110, size 0x10
    float last_s; // offset 0x120, size 0x4
    class xEnt * target_ent; // offset 0x124, size 0x4
    class xMat4x3 end_mat; // offset 0x130, size 0x40
};
// total size: 0x2C
class z_disco_floor_asset : public xBaseAsset {
    // Members
public:
    unsigned int flags; // offset 0x8, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float transition; // offset 0x0, size 0x4
        float state; // offset 0x4, size 0x4
    } interval; // offset 0xC, size 0x8
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        unsigned int off; // offset 0x0, size 0x4
        unsigned int transition; // offset 0x4, size 0x4
        unsigned int on; // offset 0x8, size 0x4
    } prefix_offset; // offset 0x14, size 0xC
    unsigned int state_mask_size; // offset 0x20, size 0x4
    unsigned int states_offset; // offset 0x24, size 0x4
    unsigned int states_size; // offset 0x28, size 0x4
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
// total size: 0x10
class zQuat {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
// total size: 0x200
class zCamDrive : public xCam {
    // Members
public:
    // total size: 0x70
    class /* @class */ {
        // Members
    public:
        unsigned char user_control_glance; // offset 0x0, size 0x1
        float glance_angle; // offset 0x4, size 0x4
        float angle_change; // offset 0x8, size 0x4
        float angle_change_v; // offset 0xC, size 0x4
        float angle_change_speed; // offset 0x10, size 0x4
        float angle_change_max; // offset 0x14, size 0x4
        float blend_time; // offset 0x18, size 0x4
        float current_blend_time; // offset 0x1C, size 0x4
        float responsiveness; // offset 0x20, size 0x4
        float responsiveness_v; // offset 0x24, size 0x4
        float responsiveness_speed; // offset 0x28, size 0x4
        float min_responsiveness; // offset 0x2C, size 0x4
        float min_responsiveness_v; // offset 0x30, size 0x4
        float y; // offset 0x34, size 0x4
        float y_v; // offset 0x38, size 0x4
        float y_speed; // offset 0x3C, size 0x4
        float x; // offset 0x40, size 0x4
        float x_v; // offset 0x44, size 0x4
        float x_speed; // offset 0x48, size 0x4
        float up_height; // offset 0x4C, size 0x4
        float up_distance; // offset 0x50, size 0x4
        float left_angle; // offset 0x54, size 0x4
        float rest_angle; // offset 0x58, size 0x4
        float right_angle; // offset 0x5C, size 0x4
        float rest_height; // offset 0x60, size 0x4
        float rest_distance; // offset 0x64, size 0x4
        float down_height; // offset 0x68, size 0x4
        float down_distance; // offset 0x6C, size 0x4
    } input; // offset 0xD0, size 0x70
    unsigned char frozen; // offset 0x140, size 0x1
    unsigned char airborne; // offset 0x141, size 0x1
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        float radius; // offset 0x0, size 0x4
        float distance; // offset 0x4, size 0x4
        float distance_v; // offset 0x8, size 0x4
        float distance_speed; // offset 0xC, size 0x4
        float angle_v; // offset 0x10, size 0x4
        float angle_speed; // offset 0x14, size 0x4
    } collide_bounds; // offset 0x144, size 0x18
    float distance; // offset 0x15C, size 0x4
    float height; // offset 0x160, size 0x4
    float angle_speed; // offset 0x164, size 0x4
    float position_speed; // offset 0x168, size 0x4
    float velocity_speed; // offset 0x16C, size 0x4
    float target_offset; // offset 0x170, size 0x4
    class xVec3 target_position; // offset 0x174, size 0xC
    float orientation_v; // offset 0x180, size 0x4
    float position_v; // offset 0x184, size 0x4
    float velocity_v; // offset 0x188, size 0x4
    class xQuat input_quat; // offset 0x190, size 0x10
    class xVec3 velocity; // offset 0x1A0, size 0xC
    class xVec3 lastPosition; // offset 0x1AC, size 0xC
    unsigned char disableCameraControl; // offset 0x1B8, size 0x1
    unsigned char hardTurnCam; // offset 0x1B9, size 0x1
    float hardTurnCamTime; // offset 0x1BC, size 0x4
    float currenthardTurnCamTime; // offset 0x1C0, size 0x4
    float timeToComeOutOfHardTurn; // offset 0x1C4, size 0x4
    float hardTurnCamVelocity; // offset 0x1C8, size 0x4
    float hardTurnCamThreshold; // offset 0x1CC, size 0x4
    float hardTurnCamMultiplier; // offset 0x1D0, size 0x4
    float hardTurnCamSpeed; // offset 0x1D4, size 0x4
    float calculatedAngleSpeed; // offset 0x1D8, size 0x4
    float hardTurnCamTargetOffsetX; // offset 0x1DC, size 0x4
    float hardTurnCamTargetSpeed; // offset 0x1E0, size 0x4
    float hardTurnCamCurrentTargetX; // offset 0x1E4, size 0x4
    float boostCamFOV; // offset 0x1E8, size 0x4
    float boostCamFOVVelocity; // offset 0x1EC, size 0x4
    float boostCamFOVSpeed; // offset 0x1F0, size 0x4
    class xEntFrame * frame; // offset 0x1F4, size 0x4
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
// total size: 0x18
class effect : public emitterBase {};
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
// total size: 0x34
class xDestructibleAssetState {
    // Members
public:
    unsigned int percent; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int shrapnelID; // offset 0x8, size 0x4
    unsigned int shrapnelhitID; // offset 0xC, size 0x4
    unsigned int soundgroupidleID; // offset 0x10, size 0x4
    unsigned int soundgroupfxID; // offset 0x14, size 0x4
    unsigned int soundgrouphitID; // offset 0x18, size 0x4
    unsigned int soundgroupfxIDswitch; // offset 0x1C, size 0x4
    unsigned int soundgrouphitIDswitch; // offset 0x20, size 0x4
    unsigned int rumbleIDhit; // offset 0x24, size 0x4
    unsigned int rumbleIDswitch; // offset 0x28, size 0x4
    unsigned int fx_flags; // offset 0x2C, size 0x4
    class xDestructibleAssetAttachedAnimList * animlist; // offset 0x30, size 0x4
};
// total size: 0x4
class Screen {};
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
// total size: 0x8
class Physics {
    // Members
public:
    float acc_grav; // offset 0x0, size 0x4
    float spd_maxFall; // offset 0x4, size 0x4
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
// total size: 0x20
class CameraTweak_asset : public xDynAsset {
    // Members
public:
    signed int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
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
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x20
class xAnimAssetFile {
    // Members
public:
    unsigned int FileFlags; // offset 0x0, size 0x4
    float Duration; // offset 0x4, size 0x4
    float TimeOffset; // offset 0x8, size 0x4
    unsigned short NumAnims[2]; // offset 0xC, size 0x4
    void * * RawData; // offset 0x10, size 0x4
    signed int Physics; // offset 0x14, size 0x4
    signed int StartPose; // offset 0x18, size 0x4
    signed int EndPose; // offset 0x1C, size 0x4
};
// total size: 0x18
class zCondAsset : public xBaseAsset {
    // Members
public:
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
    unsigned int value_asset; // offset 0x14, size 0x4
};
// total size: 0x50
class zUIAsset : public xDynAsset {
    // Members
public:
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float width; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    signed int flags; // offset 0x24, size 0x4
    unsigned int color; // offset 0x28, size 0x4
    unsigned int selectedMotion; // offset 0x2C, size 0x4
    unsigned int unselectedMotion; // offset 0x30, size 0x4
    unsigned char brightness; // offset 0x34, size 0x1
    unsigned char pad[3]; // offset 0x35, size 0x3
    unsigned int autoMenuUp; // offset 0x38, size 0x4
    unsigned int autoMenuDown; // offset 0x3C, size 0x4
    unsigned int autoMenuLeft; // offset 0x40, size 0x4
    unsigned int autoMenuRight; // offset 0x44, size 0x4
    unsigned int custom; // offset 0x48, size 0x4
    unsigned int customWidget; // offset 0x4C, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    char * off; // offset 0x0, size 0x4
    char * transition; // offset 0x4, size 0x4
    char * on; // offset 0x8, size 0x4
};
// total size: 0x14
class RwChunkHeaderInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
    unsigned int version; // offset 0x8, size 0x4
    unsigned int buildNum; // offset 0xC, size 0x4
    signed int isComplex; // offset 0x10, size 0x4
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
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x30
class zBusStop : public xBase {
    // Members
public:
    class busstop_asset * basset; // offset 0x10, size 0x4
    class zEnt * bus; // offset 0x14, size 0x4
    class xVec3 pos; // offset 0x18, size 0xC
    unsigned int currState; // offset 0x24, size 0x4
    unsigned int prevState; // offset 0x28, size 0x4
    float switchTimer; // offset 0x2C, size 0x4
};
// total size: 0x1C
class xSoundFX : public xBase {
    // Members
public:
    class xSoundFXAsset * asset; // offset 0x10, size 0x4
    enum iSndHandle sndHandle; // offset 0x14, size 0x4
    float cachedOuterDistSquared; // offset 0x18, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct /* @anon0 */ {};
// total size: 0x18
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
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
class zVarEntry {
    // Members
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(void *); // offset 0xC, size 0x4
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float distance_v; // offset 0x8, size 0x4
    float distance_speed; // offset 0xC, size 0x4
    float angle_v; // offset 0x10, size 0x4
    float angle_speed; // offset 0x14, size 0x4
};
// total size: 0x8
class Restore {
    // Members
public:
    unsigned char chkby; // offset 0x0, size 0x1
    unsigned char penby; // offset 0x1, size 0x1
    unsigned char padpad[2]; // offset 0x2, size 0x2
    union { // inferred
        enum en_npcgol gid_compare; // offset 0x4, size 0x4
        signed int gid_COMPARE; // offset 0x4, size 0x4
    };
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
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
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum eFMVFile {
    eFMVFile_NoMovie = 0,
    eFMVFile_HeavyIronLOGO = 1,
    eFMVFile_NickLOGO = 4,
    eFMVFile_THQLOGO = 5,
    eFMVFile_AttractMode = 6,
    eFMVFile_NickMovieLOGO = 7,
    eFMVFile_OXMESRB = 8,
    eFMVFile_Pwr_SB_Bash1 = 20,
    eFMVFile_Pwr_SB_Bowl1 = 21,
    eFMVFile_Pwr_SB_Guitar1 = 22,
    eFMVFile_Pwr_Pat_Cartwheel1 = 23,
    eFMVFile_Pwr_Pat_Bellyflop1 = 24,
    eFMVFile_Pwr_Pat_Throw1 = 25,
    eFMVFile_Pwr_SB_Karate2 = 26,
    eFMVFile_Pwr_SB_Bash2 = 27,
    eFMVFile_Pwr_SB_Bowl2 = 28,
    eFMVFile_Pwr_SB_Guitar2 = 29,
    eFMVFile_Pwr_SB_Health4 = 30,
    eFMVFile_Pwr_SB_Health5 = 31,
    eFMVFile_Pwr_SB_Health6 = 32,
    eFMVFile_Pwr_Pat_Spin2 = 33,
    eFMVFile_Pwr_Pat_Cartwheel2 = 34,
    eFMVFile_Pwr_Pat_Bellyflop2 = 35,
    eFMVFile_Pwr_Pat_Throw2 = 36,
    eFMVFile_Pwr_Pat_Health4 = 37,
    eFMVFile_Pwr_Pat_Health5 = 38,
    eFMVFile_Pwr_Pat_Health6 = 39,
    eFMVFile_Story1 = 50,
    eFMVFile_Story2 = 51,
    eFMVFile_Story3 = 52,
    eFMVFile_Story4 = 53,
    eFMVFile_Story5 = 54,
    eFMVFile_Story6 = 55,
    eFMVFile_Story7 = 56,
    eFMVFile_Story8 = 57,
    eFMVFile_Story9 = 58,
    eFMVFile_Story10 = 59,
    eFMVFile_Story11 = 60,
    eFMVFile_Story12 = 61,
    eFMVFile_Promo1 = 70,
    eFMVFile_Promo2 = 71,
    eFMVFile_Promo3 = 72,
    eFMVFile_Promo4 = 73,
    eFMVFile_Promo5 = 74,
    eFMVFile_Promo6 = 75,
    eFMVFile_Making_Of = 80,
    eFMVFile_Trailer1 = 81,
    eFMVFile_Trailer2 = 82,
    eFMVFile_Trailer3 = 83,
    eFMVFile_Pwr_Wagon = 100,
    eFMVFileCount = 101,
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
// total size: 0x5C
class zDestructible {
    // Members
public:
    class xDestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int cur_hit_pts; // offset 0x8, size 0x4
    unsigned int curstateidx; // offset 0xC, size 0x4
    unsigned int nstates; // offset 0x10, size 0x4
    unsigned int hit_pts; // offset 0x14, size 0x4
    unsigned int hit_filter; // offset 0x18, size 0x4
    unsigned int launch_flag; // offset 0x1C, size 0x4
    unsigned int behaviour; // offset 0x20, size 0x4
    unsigned int base_modelID; // offset 0x24, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x28, size 0x4
    enum iSndHandle sh_handle_idle; // offset 0x2C, size 0x4
    class xModelInstance * base_model; // offset 0x30, size 0x4
    class xModelInstance * base_collision; // offset 0x34, size 0x4
    class zDestructibleState * dstates; // offset 0x38, size 0x4
    float hit_to_destroy_timer; // offset 0x3C, size 0x4
    float timer; // offset 0x40, size 0x4
    float respawn_time; // offset 0x44, size 0x4
    void (* destroy_notify)(class zDestructible *, void *); // offset 0x48, size 0x4
    void * notify_context; // offset 0x4C, size 0x4
    class xEnt * root_ent; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    unsigned char has_animation; // offset 0x58, size 0x1
    unsigned char active; // offset 0x59, size 0x1
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
// total size: 0x1C
class xAnimAssetState {
    // Members
public:
    unsigned int StateID; // offset 0x0, size 0x4
    unsigned int FileIndex; // offset 0x4, size 0x4
    unsigned int EffectCount; // offset 0x8, size 0x4
    unsigned int EffectOffset; // offset 0xC, size 0x4
    float Speed; // offset 0x10, size 0x4
    unsigned int SubStateID; // offset 0x14, size 0x4
    unsigned int SubStateCount; // offset 0x18, size 0x4
};
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
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
enum en_allow {
    ALLOW_NEVER = 0,
    ALLOW_NORMAL = 1,
    ALLOW_ALWAYS = 2,
    ALLOW_NOMORE = 3,
};
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
// total size: 0x0
class zRewardsMgr {};
// total size: 0x14
class xCurveAsset {
    // Members
public:
    enum xCurveType type; // offset 0x0, size 0x4
    enum xCurveClamp clamp; // offset 0x4, size 0x4
    float delta; // offset 0x8, size 0x4
    signed int numPoints; // offset 0xC, size 0x4
    float * points; // offset 0x10, size 0x4
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
// total size: 0x10C
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
    float sparkTimer; // offset 0x98, size 0x4
    class xVec3 collisionPoint; // offset 0x9C, size 0xC
    float genTime; // offset 0xA8, size 0x4
    unsigned char randomizeBranchEndPoint; // offset 0xAC, size 0x1
    unsigned char collisionEnabled; // offset 0xAD, size 0x1
    enum iSndHandle sndHandle; // offset 0xB0, size 0x4
    class xEnt * followStart; // offset 0xB4, size 0x4
    class xVec3 followStartOffset; // offset 0xB8, size 0xC
    class xEnt * followEnd; // offset 0xC4, size 0x4
    class xVec3 followEndOffset; // offset 0xC8, size 0xC
    void (* renderCB)(class zLightning *, class RxObjSpace3DVertex *, class RxObjSpace3DVertex *, unsigned int); // offset 0xD4, size 0x4
    void * context; // offset 0xD8, size 0x4
    float weightParam[12]; // offset 0xDC, size 0x30
};
// total size: 0x4
class xPSYNote {};
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
enum xSndListener {
    xSndListener_CAMERA = 0,
    xSndListener_PLAYER = 1,
    xSndListener_MAX_TYPES = 2,
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
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x10
class zDestructibleStateFXParams {
    // Members
public:
    float timer; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    class zParEmitter * emitter; // offset 0x8, size 0x4
    unsigned int (* fn)(float); // offset 0xC, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x0
class zEntHangable {};
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
// total size: 0x14
class zCameraFly : public xBase {
    // Members
public:
    class CameraFly_asset * casset; // offset 0x10, size 0x4
};
// total size: 0x170
class zPlatFMRunTime {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[13]; // offset 0x4, size 0x34
    float ttms[13]; // offset 0x38, size 0x34
    float atms[13]; // offset 0x6C, size 0x34
    float dtms[13]; // offset 0xA0, size 0x34
    float vms[13]; // offset 0xD4, size 0x34
    float dss[13]; // offset 0x108, size 0x34
    float total_change[13]; // offset 0x13C, size 0x34
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
// total size: 0x1C
class driveSurfaceDescriptor {
    // Members
public:
    float staticTraction; // offset 0x0, size 0x4
    float slidingTraction; // offset 0x4, size 0x4
    float slideThreshold; // offset 0x8, size 0x4
    unsigned char useSlideAnimation; // offset 0xC, size 0x1
    float topSpeedFactor; // offset 0x10, size 0x4
    enum iSndGroupHandle soundGroupDrive; // offset 0x14, size 0x4
    enum iSndGroupHandle soundGroupSkid; // offset 0x18, size 0x4
};
// total size: 0x14
class zSnapshot : public zTimeHandler {
    // Members
public:
    unsigned char started; // offset 0x10, size 0x1
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
// total size: 0x8
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
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
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x1B00
class zPlayerGlobals {
    // Members
public:
    class xEntShadow entShadow_embedded; // offset 0x0, size 0x2C
    class xShadowSimpleCache simpShadow_embedded; // offset 0x2C, size 0xA4
    class zGlobalSettings g; // offset 0xD0, size 0x160
    class zPlayerSettings * s; // offset 0x230, size 0x4
    class zPlayerSettings sb; // offset 0x240, size 0x470
    class zPlayerSettings patrick; // offset 0x6B0, size 0x470
    class zPlayerSettings spongepat; // offset 0xB20, size 0x470
    class xLightKit * pPlayerLightKit; // offset 0xF90, size 0x4
    class xModelInstance * model_spongebob; // offset 0xF94, size 0x4
    class xModelInstance * model_patrick; // offset 0xF98, size 0x4
    class xModelInstance * model_spongepat; // offset 0xF9C, size 0x4
    class xModelInstance * model_car; // offset 0xFA0, size 0x4
    unsigned int Visible; // offset 0xFA4, size 0x4
    signed int Speed; // offset 0xFA8, size 0x4
    float SpeedMult; // offset 0xFAC, size 0x4
    signed int Sneak; // offset 0xFB0, size 0x4
    signed int Teeter; // offset 0xFB4, size 0x4
    float SlipFadeTimer; // offset 0xFB8, size 0x4
    signed int Slide; // offset 0xFBC, size 0x4
    float SlideTimer; // offset 0xFC0, size 0x4
    signed int Stepping; // offset 0xFC4, size 0x4
    signed int JumpState; // offset 0xFC8, size 0x4
    signed int LastJumpState; // offset 0xFCC, size 0x4
    float JumpTimer; // offset 0xFD0, size 0x4
    float LookAroundTimer; // offset 0xFD4, size 0x4
    unsigned int LookAroundRand; // offset 0xFD8, size 0x4
    unsigned int LastProjectile; // offset 0xFDC, size 0x4
    float DecelRun; // offset 0xFE0, size 0x4
    float DecelRunSpeed; // offset 0xFE4, size 0x4
    float HotsauceTimer; // offset 0xFE8, size 0x4
    float LeanLerp; // offset 0xFEC, size 0x4
    float ScareTimer; // offset 0xFF0, size 0x4
    class xBase * ScareSource; // offset 0xFF4, size 0x4
    float CowerTimer; // offset 0xFF8, size 0x4
    float DamageTimer; // offset 0xFFC, size 0x4
    float SundaeTimer; // offset 0x1000, size 0x4
    float ControlOffTimer; // offset 0x1004, size 0x4
    float HelmetTimer; // offset 0x1008, size 0x4
    unsigned int WorldDisguise; // offset 0x100C, size 0x4
    unsigned int Bounced; // offset 0x1010, size 0x4
    float FallDeathTimer; // offset 0x1014, size 0x4
    float HeadbuttVel; // offset 0x1018, size 0x4
    float HeadbuttTimer; // offset 0x101C, size 0x4
    unsigned int DoMeleeCheck; // offset 0x1020, size 0x4
    float ForceSlipperyTimer; // offset 0x1024, size 0x4
    float ForceSlipperyFriction; // offset 0x1028, size 0x4
    float ShockRadius; // offset 0x102C, size 0x4
    float ShockRadiusOld; // offset 0x1030, size 0x4
    float Face_ScareTimer; // offset 0x1034, size 0x4
    unsigned int Face_ScareRandom; // offset 0x1038, size 0x4
    unsigned int Face_Event; // offset 0x103C, size 0x4
    float Face_EventTimer; // offset 0x1040, size 0x4
    float Face_PantTimer; // offset 0x1044, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x1048, size 0x4
    unsigned int IdleRand; // offset 0x104C, size 0x4
    float IdleMinorTimer; // offset 0x1050, size 0x4
    float IdleMajorTimer; // offset 0x1054, size 0x4
    float IdleSitTimer; // offset 0x1058, size 0x4
    signed int Transparent; // offset 0x105C, size 0x4
    class zEnt * FireTarget; // offset 0x1060, size 0x4
    unsigned int PlayerIsFrozen; // offset 0x1064, size 0x4
    unsigned int ControlOff; // offset 0x1068, size 0x4
    unsigned int ControlOnEvent; // offset 0x106C, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1070, size 0x4
    float AutoMoveDist; // offset 0x1074, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1078, size 0xC
    class xBase * AutoMoveObject; // offset 0x1084, size 0x4
    class zEnt * Diggable; // offset 0x1088, size 0x4
    float DigTimer; // offset 0x108C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1090, size 0xF0
    class zPlayerLassoInfo lassoInfo; // offset 0x1180, size 0x20C
    class xModelTag BubbleWandTag[2]; // offset 0x138C, size 0x40
    class xModelInstance * model_wand; // offset 0x13CC, size 0x4
    class xEntBoulder * bubblebowl[2]; // offset 0x13D0, size 0x8
    float bbowlInitVel; // offset 0x13D8, size 0x4
    class zEntHangable * HangFound; // offset 0x13DC, size 0x4
    class zEntHangable * HangEnt; // offset 0x13E0, size 0x4
    class zEntHangable * HangEntLast; // offset 0x13E4, size 0x4
    class xVec3 HangPivot; // offset 0x13E8, size 0xC
    class xVec3 HangVel; // offset 0x13F4, size 0xC
    float HangLength; // offset 0x1400, size 0x4
    class xVec3 HangStartPos; // offset 0x1404, size 0xC
    float HangStartLerp; // offset 0x1410, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x1414, size 0x80
    float HangPawOffset; // offset 0x1494, size 0x4
    float HangElapsed; // offset 0x1498, size 0x4
    float Jump_CurrGravity; // offset 0x149C, size 0x4
    float Jump_HoldTimer; // offset 0x14A0, size 0x4
    float Jump_ChangeTimer; // offset 0x14A4, size 0x4
    signed int Jump_CanDouble; // offset 0x14A8, size 0x4
    signed int Jump_CanFloat; // offset 0x14AC, size 0x4
    signed int Jump_SpringboardStart; // offset 0x14B0, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x14B4, size 0x4
    signed int CanJump; // offset 0x14B8, size 0x4
    signed int CanBubbleSpin; // offset 0x14BC, size 0x4
    signed int CanBubbleBounce; // offset 0x14C0, size 0x4
    signed int CanBubbleBash; // offset 0x14C4, size 0x4
    signed int IsJumping; // offset 0x14C8, size 0x4
    signed int IsDJumping; // offset 0x14CC, size 0x4
    signed int IsBubbleSpinning; // offset 0x14D0, size 0x4
    signed int IsBubbleBouncing; // offset 0x14D4, size 0x4
    signed int IsBubbleBashing; // offset 0x14D8, size 0x4
    signed int IsBubbleBowling; // offset 0x14DC, size 0x4
    signed int WasDJumping; // offset 0x14E0, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x14E4, size 0x4
    signed int cheat_mode; // offset 0x14E8, size 0x4
    class zRewardsMgr * rewardsMgr; // offset 0x14EC, size 0x4
    unsigned int ManlinessPointsCurrentRange; // offset 0x14F0, size 0x4
    unsigned int InvManlinessPoints; // offset 0x14F4, size 0x4
    unsigned int InvManlinessPointsMultiplier; // offset 0x14F8, size 0x4
    unsigned int InvGoofyGoober; // offset 0x14FC, size 0x4
    unsigned int InvTreasureChest[20]; // offset 0x1500, size 0x50
    unsigned int InvTreasureChestMax[20]; // offset 0x1550, size 0x50
    unsigned int InvTreasureChestCurrentLevel; // offset 0x15A0, size 0x4
    unsigned int InvLevelPickups[20]; // offset 0x15A4, size 0x50
    unsigned int InvLevelPickupsCurrentLevel; // offset 0x15F4, size 0x4
    unsigned int InvTreasureChestTotal; // offset 0x15F8, size 0x4
    unsigned int InvTreasureChestOpened; // offset 0x15FC, size 0x4
    unsigned int CurrentSkillLevel; // offset 0x1600, size 0x4
    unsigned int InitialUnusedSkillPoints; // offset 0x1604, size 0x4
    signed short CurrentUnusedSkillPoints; // offset 0x1608, size 0x2
    signed short CurrentSpentSkillPoints; // offset 0x160A, size 0x2
    class xModelTag BubbleTag; // offset 0x160C, size 0x20
    class xEntDrive drv; // offset 0x1630, size 0xC0
    class xSurface * floor_surf; // offset 0x16F0, size 0x4
    class xVec3 floor_norm; // offset 0x16F4, size 0xC
    signed int slope; // offset 0x1700, size 0x4
    class xCollis earc_coll; // offset 0x1704, size 0x54
    class xSphere head_sph; // offset 0x1758, size 0x10
    class xModelTag center_tag; // offset 0x1768, size 0x20
    class xModelTag head_tag; // offset 0x1788, size 0x20
    unsigned int TongueFlags[2]; // offset 0x17A8, size 0x8
    class xVec3 RootUp; // offset 0x17B0, size 0xC
    class xVec3 RootUpTarget; // offset 0x17BC, size 0xC
    class zCheckPoint checkpoint; // offset 0x17C8, size 0x1C
    unsigned int SlideTrackSliding; // offset 0x17E4, size 0x4
    unsigned int SlideTrackCount; // offset 0x17E8, size 0x4
    class xEnt * SlideTrackEnt[161]; // offset 0x17EC, size 0x284
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1A70, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1A74, size 0xC
    class xVec3 SlideTrackVel; // offset 0x1A80, size 0xC
    float SlideTrackDecay; // offset 0x1A8C, size 0x4
    float SlideTrackLean; // offset 0x1A90, size 0x4
    float SlideTrackLand; // offset 0x1A94, size 0x4
    unsigned char * sb_model_indices; // offset 0x1A98, size 0x4
    class xModelInstance * sb_models[11]; // offset 0x1A9C, size 0x2C
    unsigned int currentPlayer; // offset 0x1AC8, size 0x4
    class xVec3 PredictRotate; // offset 0x1ACC, size 0xC
    class xVec3 PredictTranslate; // offset 0x1AD8, size 0xC
    float PredictAngV; // offset 0x1AE4, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1AE8, size 0xC
    float PredictCurrVel; // offset 0x1AF4, size 0x4
    float KnockBackTimer; // offset 0x1AF8, size 0x4
    float KnockIntoAirTimer; // offset 0x1AFC, size 0x4
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
class zFlyKey {
    // Members
public:
    signed int frame; // offset 0x0, size 0x4
    float matrix[12]; // offset 0x4, size 0x30
    float aperture[2]; // offset 0x34, size 0x8
    float focal; // offset 0x3C, size 0x4
};
// total size: 0x100
class zEntSimpleObj : public zEnt {
    // Members
public:
    class xSimpleObjAsset * sasset; // offset 0xDC, size 0x4
    unsigned int sflags; // offset 0xE0, size 0x4
    union { // inferred
        struct { // inferred
            class zReactiveAnimationData * reactiveAnimationData; // offset 0xE4, size 0x4
            class zReactiveGenre * reactGenre; // offset 0xE8, size 0x4
            class zSimpleMgr * smgrExtra; // offset 0xEC, size 0x4
        };
        struct { // inferred
            void * anim; // offset 0xE4, size 0x4
            float animTime; // offset 0xE8, size 0x4
            class RwMatrixTag * fastMatList; // offset 0xEC, size 0x4
        };
    };
    class zDestructible * destructible; // offset 0xF0, size 0x4
    class zSimpleMgr * smgr; // offset 0xF4, size 0x4
    class xEntOpacity opacity; // offset 0xF8, size 0x8
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x11C
class zEGenerator : public zEnt {
    // Members
public:
    class zEGenAsset * zasset; // offset 0xDC, size 0x4
    unsigned short flags; // offset 0xE0, size 0x2
    unsigned short num_dsts; // offset 0xE2, size 0x2
    float tmr; // offset 0xE4, size 0x4
    class xAnimFile * afile; // offset 0xE8, size 0x4
    class xVec3 src_pos; // offset 0xEC, size 0xC
    class xVec3 dst_pos; // offset 0xF8, size 0xC
    class xVec3 dst_off; // offset 0x104, size 0xC
    class xBase * dst; // offset 0x110, size 0x4
    class zLightning * lfx[2]; // offset 0x114, size 0x8
};
// total size: 0x20
class xCutsceneMgr : public xBase {
    // Members
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
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
// total size: 0x130
class zNMENPCWrapper : public base {
    // Members
public:
    void (* fun_setup)(class xEnt *); // offset 0x11C, size 0x4
    void (* fun_reset)(class xEnt *); // offset 0x120, size 0x4
    signed int colFreq; // offset 0x124, size 0x4
    unsigned char flg_colCheck; // offset 0x128, size 0x1
    unsigned char flg_penCheck; // offset 0x129, size 0x1
    unsigned short flg_unusedCollFlags; // offset 0x12A, size 0x2
    signed int aflg_basenme : 8; // offset 0x12C, size 0x4
    signed int flg_upward : 8; // offset 0x12C, size 0x4
    signed int flg_xtrarend : 1; // offset 0x12C, size 0x4
    signed int flg_inUpdate : 1; // offset 0x12C, size 0x4
    signed int flg_newtime : 1; // offset 0x12C, size 0x4
    signed int flg_postproc : 1; // offset 0x12C, size 0x4
    signed int flg_profProc : 1; // offset 0x12C, size 0x4
    signed int flg_hudrend : 1; // offset 0x12C, size 0x4
    signed int flg_moreUnusedSpace : 10; // offset 0x12C, size 0x4
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
// total size: 0x8
class xDestructibleAssetAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x2C
class zStaticCameraAsset : public xDynAsset {
    // Members
public:
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float blend_time; // offset 0x1C, size 0x4
    float fovfilter_period; // offset 0x20, size 0x4
    float start_fov; // offset 0x24, size 0x4
    float end_fov; // offset 0x28, size 0x4
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
// total size: 0x2B0
class zPlatform : public zEnt {
    // Members
public:
    class xPlatformAsset * plat_asset; // offset 0xDC, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0xD0
    unsigned short state; // offset 0x1B0, size 0x2
    unsigned short plat_flags; // offset 0x1B2, size 0x2
    float tmr; // offset 0x1B4, size 0x4
    signed int ctr; // offset 0x1B8, size 0x4
    class xMovePoint * src; // offset 0x1BC, size 0x4
    class xModelInstance * am; // offset 0x1C0, size 0x4
    class xModelInstance * bm; // offset 0x1C4, size 0x4
    signed int moving; // offset 0x1C8, size 0x4
    class xEntDrive drv; // offset 0x1D0, size 0xC0
    class zPlatFMRunTime * fmrt; // offset 0x290, size 0x4
    class zDestructible * destructible; // offset 0x294, size 0x4
    float elapsedTime; // offset 0x298, size 0x4
    class xEntOpacity opacity; // offset 0x29C, size 0x8
    enum iSndHandle sndID; // offset 0x2A4, size 0x4
};
// total size: 0x34
class zQuaternionFilter : public zFilterAbstract {
    // Members
public:
    class zQuat q1; // offset 0x14, size 0x10
    class zQuat q2; // offset 0x24, size 0x10
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
class zFMVFile {
    // Members
public:
    enum eFMVFile fmvCode; // offset 0x0, size 0x4
    char * fileName; // offset 0x4, size 0x4
    unsigned char happensBeforePortal; // offset 0x8, size 0x1
};
// total size: 0x1030
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
    class xCutsceneAudioTrack AudioTracks[32]; // offset 0x30, size 0x1000
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
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0xC
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0x20
class xSoundFXAsset : public xBaseAsset {
    // Members
public:
    union { // inferred
        unsigned int soundAssetID; // offset 0x8, size 0x4
        enum iSndGroupHandle soundAsset; // offset 0x8, size 0x4
    };
    unsigned int attachID; // offset 0xC, size 0x4
    class xVec3 pos; // offset 0x10, size 0xC
    unsigned int uFlags; // offset 0x1C, size 0x4
};
// total size: 0x1C
class iSndFileInfo {
    // Members
public:
    enum iSndHandle ID; // offset 0x0, size 0x4
    unsigned int assetID; // offset 0x4, size 0x4
    unsigned short sample_rate; // offset 0x8, size 0x2
    unsigned char is_streamed; // offset 0xA, size 0x1
    unsigned char is_looped; // offset 0xB, size 0x1
    union { // inferred
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            unsigned int address; // offset 0x0, size 0x4
            unsigned int size; // offset 0x4, size 0x4
        } nonstream; // offset 0xC, size 0x8
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            signed int file_index; // offset 0x0, size 0x4
            unsigned int lsn; // offset 0x4, size 0x4
            unsigned int data_size; // offset 0x8, size 0x4
            unsigned short stream_interleave_size; // offset 0xC, size 0x2
            unsigned short stream_interleave_count; // offset 0xE, size 0x2
        } stream; // offset 0xC, size 0x10
    };
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
// total size: 0x14
class zCameraTweak : public xBase {
    // Members
public:
    class CameraTweak_asset * casset; // offset 0x10, size 0x4
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
// total size: 0xCC
class xCutsceneMgrAsset : public xBaseAsset {
    // Members
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    unsigned int uSubtitlesID; // offset 0x14, size 0x4
    float startTime[15]; // offset 0x18, size 0x3C
    float endTime[15]; // offset 0x54, size 0x3C
    unsigned int emitID[15]; // offset 0x90, size 0x3C
};
// total size: 0x44
class xEntERData {
    // Members
public:
    class xVec3 a; // offset 0x0, size 0xC
    class xVec3 b; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
};
// total size: 0x10
class Movement {
    // Members
public:
    float spd_move; // offset 0x0, size 0x4
    float acc_move; // offset 0x4, size 0x4
    float dst_deviant; // offset 0x8, size 0x4
    float spd_turnrate; // offset 0xC, size 0x4
};
// total size: 0xF4
class zSnapshots {
    // Members
public:
    class zSnapshot shots[12]; // offset 0x0, size 0xF0
    signed int shot_idx; // offset 0xF0, size 0x4
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
// total size: 0x20
class NMERuntime {
    // Members
public:
    signed int flg_enableWander : 1; // offset 0x0, size 0x4
    signed int flg_enablePatrol : 1; // offset 0x0, size 0x4
    signed int flg_enableDetect : 1; // offset 0x0, size 0x4
    signed int flg_activeOn : 1; // offset 0x0, size 0x4
    signed int flg_takeNoDamage : 1; // offset 0x0, size 0x4
    signed int flg_unused : 27; // offset 0x0, size 0x4
    union { // inferred
        enum en_allow overrideDetect; // offset 0x4, size 0x4
        signed int alignmeproperly; // offset 0x4, size 0x4
    };
    union { // inferred
        enum en_allow overrideAttack; // offset 0x8, size 0x4
        signed int alignmeproperlyToo; // offset 0x8, size 0x4
    };
    class OriginalBackupData orig; // offset 0xC, size 0xC
    class Restore restore; // offset 0x18, size 0x8
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0xC
class zCollGeomTable {
    // Members
public:
    class RpAtomic * baseModel; // offset 0x0, size 0x4
    class RpAtomic * colModel[1]; // offset 0x4, size 0x4
    class RpAtomic * camcolModel; // offset 0x8, size 0x4
};
// total size: 0x148
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
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    signed int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    class tag_xFile File; // offset 0x54, size 0xB4
    signed int AsyncID; // offset 0x108, size 0x4
    void * MemBuf; // offset 0x10C, size 0x4
    void * MemCurr; // offset 0x110, size 0x4
    unsigned int SndStarted; // offset 0x114, size 0x4
    unsigned int SndNumChannel; // offset 0x118, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x11C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x124, size 0x8
    enum iSndHandle SndHandle[2]; // offset 0x12C, size 0x8
    unsigned int SubTitlesID; // offset 0x134, size 0x4
    class XCSNNosey * cb_nosey; // offset 0x138, size 0x4
    class xCutsceneModelHack * ModelHack; // offset 0x13C, size 0x4
    unsigned char started; // offset 0x140, size 0x1
    unsigned char useDefaultTrack; // offset 0x141, size 0x1
    unsigned int useDefaultTrackID; // offset 0x144, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0xF0
class zPlayerCarryInfo {
    // Members
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwHammerMinDist; // offset 0x74, size 0x4
    float throwHammerMaxDist; // offset 0x78, size 0x4
    float throwMinHeight; // offset 0x7C, size 0x4
    float throwMaxHeight; // offset 0x80, size 0x4
    float throwMaxStack; // offset 0x84, size 0x4
    float throwMaxCosAngle; // offset 0x88, size 0x4
    float throwTargetRotRate; // offset 0x8C, size 0x4
    float targetRot; // offset 0x90, size 0x4
    unsigned int grabTarget; // offset 0x94, size 0x4
    class xVec3 grabOffset; // offset 0x98, size 0xC
    float grabLerpMin; // offset 0xA4, size 0x4
    float grabLerpMax; // offset 0xA8, size 0x4
    float grabLerpLast; // offset 0xAC, size 0x4
    unsigned int grabYclear; // offset 0xB0, size 0x4
    float throwGravity; // offset 0xB4, size 0x4
    float throwHeight; // offset 0xB8, size 0x4
    float throwDistance; // offset 0xBC, size 0x4
    float throwPowerAddDistance; // offset 0xC0, size 0x4
    float fruitFloorDecayMin; // offset 0xC4, size 0x4
    float fruitFloorDecayMax; // offset 0xC8, size 0x4
    float fruitFloorBounce; // offset 0xCC, size 0x4
    float fruitFloorFriction; // offset 0xD0, size 0x4
    float fruitCeilingBounce; // offset 0xD4, size 0x4
    float fruitWallBounce; // offset 0xD8, size 0x4
    float fruitLifetime; // offset 0xDC, size 0x4
    class xEnt * patLauncher; // offset 0xE0, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
// total size: 0x24
struct /* @anon1 */ {};
// total size: 0x470
class zPlayerSettings {
    // Members
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
    unsigned int Health; // offset 0x460, size 0x4
    unsigned int MaxHealth; // offset 0x464, size 0x4
};
// total size: 0x18
class zone_data {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    class xVec3 face; // offset 0xC, size 0xC
};
// total size: 0x68
class _tagLightningAdd {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    float setup_degrees; // offset 0x4, size 0x4
    float move_degrees; // offset 0x8, size 0x4
    float rot_radius; // offset 0xC, size 0x4
    class xVec3 * start; // offset 0x10, size 0x4
    class xVec3 * end; // offset 0x14, size 0x4
    signed short total_points; // offset 0x18, size 0x2
    signed short end_points; // offset 0x1A, size 0x2
    float time; // offset 0x1C, size 0x4
    float arc_height; // offset 0x20, size 0x4
    float thickness; // offset 0x24, size 0x4
    float segmentsPerMeter; // offset 0x28, size 0x4
    class xColor_tag color; // offset 0x2C, size 0x4
    float rand_radius; // offset 0x30, size 0x4
    unsigned int flags; // offset 0x34, size 0x4
    float zeus_normal_offset; // offset 0x38, size 0x4
    float zeus_back_offset; // offset 0x3C, size 0x4
    float zeus_side_offset; // offset 0x40, size 0x4
    float branchSpeed; // offset 0x44, size 0x4
    unsigned int mainTexture; // offset 0x48, size 0x4
    unsigned int branchTexture; // offset 0x4C, size 0x4
    signed int damage; // offset 0x50, size 0x4
    float knockBackSpeed; // offset 0x54, size 0x4
    class xEnt * followStart; // offset 0x58, size 0x4
    class xEnt * followEnd; // offset 0x5C, size 0x4
    enum iSndHandle sndHandle; // offset 0x60, size 0x4
    unsigned char collisionEnabled; // offset 0x64, size 0x1
    unsigned char isMain; // offset 0x65, size 0x1
};
// total size: 0x88
class xCamAsset : public xBaseAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xVec3 up; // offset 0x20, size 0xC
    class xVec3 right; // offset 0x2C, size 0xC
    class xVec3 view_offset; // offset 0x38, size 0xC
    signed short offset_start_frames; // offset 0x44, size 0x2
    signed short offset_end_frames; // offset 0x46, size 0x2
    float fov; // offset 0x48, size 0x4
    float trans_time; // offset 0x4C, size 0x4
    enum _tagTransType trans_type; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    float fade_up; // offset 0x58, size 0x4
    float fade_down; // offset 0x5C, size 0x4
    union { // inferred
        class xCamFollowAsset cam_follow; // offset 0x60, size 0x18
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
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x0
class zFrag {};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
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
enum xCurveType {
    xCVT_BAKED = 0,
};
// total size: 0xC
class xSimpleObjAsset {
    // Members
public:
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x30
class xGoal : public xListItem, public xFactoryInst {
    // Members
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    enum en_GOALSTATE stat; // offset 0x1C, size 0x4
    signed int flg_able; // offset 0x20, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x24, size 0x4
    void * cbdata; // offset 0x28, size 0x4
};
// total size: 0x4
class RwStreamFile {
    // Members
public:
    union { // inferred
        void * fpFile; // offset 0x0, size 0x4
        void * constfpFile; // offset 0x0, size 0x4
    };
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
// total size: 0x60
class zNMEAsset : public xDynAsset {
    // Members
public:
    class xEntAsset ent_asset; // offset 0x10, size 0x50
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
class xEntBoulderAsset {
    // Members
public:
    float gravity; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    float bounce; // offset 0x8, size 0x4
    float friction; // offset 0xC, size 0x4
    float maxVel; // offset 0x10, size 0x4
    float maxAngVel; // offset 0x14, size 0x4
    float stickiness; // offset 0x18, size 0x4
    float bounceDamp; // offset 0x1C, size 0x4
    unsigned int flags; // offset 0x20, size 0x4
    float killtimer; // offset 0x24, size 0x4
    unsigned int hitpoints; // offset 0x28, size 0x4
    union { // inferred
        unsigned int uSoundGroupHash; // offset 0x2C, size 0x4
        enum iSndGroupHandle soundID; // offset 0x2C, size 0x4
    };
    float minSoundVel; // offset 0x30, size 0x4
    float maxSoundVel; // offset 0x34, size 0x4
    float fSphereRadius; // offset 0x38, size 0x4
    unsigned char uPad0; // offset 0x3C, size 0x1
    unsigned char uPad1; // offset 0x3D, size 0x1
    unsigned char uPad2; // offset 0x3E, size 0x1
    unsigned char uBoneIndex; // offset 0x3F, size 0x1
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xSndGroupInfo {
    // Members
public:
    unsigned int uSoundNameHash; // offset 0x0, size 0x4
    float fVolume; // offset 0x4, size 0x4
    float fMinPitchMult; // offset 0x8, size 0x4
    float fMaxPitchMult; // offset 0xC, size 0x4
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
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x2970
class xSndGlobals {
    // Members
public:
    class xSndVoiceInfo voice[96]; // offset 0x0, size 0x2880
    class xMat4x3 listenerMat[2]; // offset 0x2880, size 0x80
    class xVec3 listenerVel[2]; // offset 0x2900, size 0x18
    class xVec3 right; // offset 0x2918, size 0xC
    class xVec3 up; // offset 0x2924, size 0xC
    class xVec3 at; // offset 0x2930, size 0xC
    class xVec3 pos; // offset 0x293C, size 0xC
    class xVec3 velocity; // offset 0x2948, size 0xC
    unsigned int m_uSndMgrFlags; // offset 0x2954, size 0x4
    enum xSndMode sndMode; // offset 0x2958, size 0x4
    unsigned int SndCount; // offset 0x295C, size 0x4
    enum xSndListener listenerMode; // offset 0x2960, size 0x4
};
// total size: 0x18
class xCamFollowAsset {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum xCurveClamp {
    xCC_CONSTANT = 0,
    xCC_CYCLE = 1,
    xCC_OSCILLATE = 2,
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    class xEnt * * off; // offset 0x0, size 0x4
    class xEnt * * transition; // offset 0x4, size 0x4
    class xEnt * * on; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
};
// total size: 0x10
class zTimeHandler {
    // Members
public:
    float elapsed; // offset 0x0, size 0x4
    float period; // offset 0x4, size 0x4
    float invperiod; // offset 0x8, size 0x4
    unsigned char active; // offset 0xC, size 0x1
};
// total size: 0x0
class xParSys {};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x90
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
// total size: 0x38
class xEntMotionMechData {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    unsigned char scale_axis; // offset 0x4, size 0x1
    float sld_dist; // offset 0x8, size 0x4
    float sld_tm; // offset 0xC, size 0x4
    float sld_acc_tm; // offset 0x10, size 0x4
    float sld_dec_tm; // offset 0x14, size 0x4
    float rot_dist; // offset 0x18, size 0x4
    float rot_tm; // offset 0x1C, size 0x4
    float rot_acc_tm; // offset 0x20, size 0x4
    float rot_dec_tm; // offset 0x24, size 0x4
    float ret_delay; // offset 0x28, size 0x4
    float post_ret_delay; // offset 0x2C, size 0x4
    float scale_amount; // offset 0x30, size 0x4
    float scale_duration; // offset 0x34, size 0x4
};
// total size: 0xC
class xMarkerAsset {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
};
// total size: 0x8
class st_ZDISPATCH_DEPOT {
    // Members
public:
    class st_ZDISPATCH_DATA * raw_pool; // offset 0x0, size 0x4
    signed int raw_cnt; // offset 0x4, size 0x4
};
// total size: 0x8
class zStreamedSoundList {
    // Members
public:
    unsigned int mNumSounds; // offset 0x0, size 0x4
    class zStreamedSound * mSounds; // offset 0x4, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
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
// total size: 0x8
class zDestructibleStateFXList {
    // Members
public:
    unsigned int nfx; // offset 0x0, size 0x4
    class zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x0
class activity_data {};
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
enum zDrivingSurf {
    ezDRIVINGSURF_Default = 0,
    ezDRIVINGSURF_Tarmac = 1,
    ezDRIVINGSURF_Cement = 2,
    ezDRIVINGSURF_HardDirt = 3,
    ezDRIVINGSURF_Railroad = 4,
    ezDRIVINGSURF_Grass = 5,
    ezDRIVINGSURF_SoftDirt = 6,
    ezDRIVINGSURF_SideWalk = 7,
    ezDRIVINGSURF_Sand = 8,
    ezDRIVINGSURF_SurfaceWater = 9,
    ezDRIVINGSURF_ThickOil = 10,
    ezDRIVINGSURF_HotSauce = 11,
    ezDRIVINGSURF_NumNormalDrivableSurfaces = 12,
    ezDRIVINGSURF_Wall = 13,
    ezDRIVINGSURF_SlideTubWood = 14,
    ezDRIVINGSURF_SlideTubSand = 15,
    ezDRIVINGSURF_SlideTubHardRock = 16,
    ezDRIVINGSURF_SlideShellHardRock = 17,
    ezDRIVINGSURF_SlideShellTongue = 18,
    ezDRIVINGSURF_SlideCrownRubberHose = 19,
    ezDRIVINGSURF_SlideCrownRubberCable = 20,
    ezDRIVINGSURF_SlideCrownMetalLamp = 21,
    ezDRIVINGSURF_MaxTypes = 22,
};
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
// total size: 0x0
class xParGroup {};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
enum zcam_mode_enum {
    ZCAM_MODE_INVALID = -1,
    ZCAM_MODE_DEFAULT = 0,
    ZCAM_MODE_FOLLOW = 0,
    ZCAM_MODE_MAX = 1,
};
// total size: 0x0
class zReactiveAnimationData {};
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
enum en_npcgol {
    NME_GOAL_UNKNOWN = 0,
    NME_GOAL_CRIT_IDLE = 1313293056,
    NME_GOAL_CRIT_PATROL = 1313293057,
    NME_GOAL_CRIT_DYING = 1313293058,
    NME_GOAL_CRIT_DEAD = 1313293059,
    NME_GOAL_CRIT_BATTACK = 1313293060,
    NME_GOAL_CRIT_JATTACK = 1313293061,
    NME_GOAL_CRIT_JDYING = 1313293062,
    NME_GOAL_TURR_IDLE = 1313294080,
    NME_GOAL_TURR_RELOAD = 1313294081,
    NME_GOAL_TURR_HURT = 1313294082,
    NME_GOAL_TURR_DEAD = 1313294083,
    NME_GOAL_TURR_TREADY = 1313294084,
    NME_GOAL_TURR_TTURN = 1313294085,
    NME_GOAL_TURR_TSHOOT = 1313294086,
    NME_GOAL_TURR_PDORMANT = 1313294087,
    NME_GOAL_TURR_PALERT = 1313294088,
    NME_GOAL_TURR_PPATALPHA = 1313294089,
    NME_GOAL_TURR_BIDLE = 1313294090,
    NME_GOAL_TURR_BTURN = 1313294091,
    NME_GOAL_TURR_BSHOOT = 1313294092,
    NME_GOAL_TURR_BHURT = 1313294093,
    NME_GOAL_TURR_SPIRAL = 1313294094,
    NME_GOAL_IDLE = 1313295872,
    NME_GOAL_PATROL = 1313295873,
    NME_GOAL_WANDER = 1313295874,
    NME_GOAL_FIDGET = 1313295875,
    NME_GOAL_WAITING = 1313295876,
    NME_GOAL_DEAD = 1313295877,
    NME_GOAL_NOMANLAND = 1313295878,
    NME_GOAL_LIMBO = 1313295879,
    NME_GOAL_DEV_ANIMVIEW = 1313293312,
    NME_GOAL_DEV_HEROMODE = 1313293313,
    NME_GOAL_TIKI_IDLE = 1313297408,
    NME_GOAL_TIKI_PATROL = 1313297409,
    NME_GOAL_TIKI_HIDE = 1313297410,
    NME_GOAL_TIKI_COUNT = 1313297411,
    NME_GOAL_TIKI_DYING = 1313297412,
    NME_GOAL_TIKI_DEAD = 1313297413,
    NME_GOAL_AFTERLIFE = 1313297152,
    NME_GOAL_SPAWN = 1313297153,
    NME_GOAL_WOUND = 1313297154,
    NME_GOAL_SPOOKED = 1313297155,
    NME_GOAL_NOTICE = 1313297156,
    NME_GOAL_SCAREWAIT = 1313297157,
    NME_GOAL_SCARE = 1313297158,
    NME_GOAL_TAUNT = 1313297159,
    NME_GOAL_EVILPAT = 1313296384,
    NME_GOAL_STUNNED = 1313296385,
    NME_GOAL_PATCARRY = 1313296386,
    NME_GOAL_PATTWIRL = 1313296387,
    NME_GOAL_PATTHROW = 1313296388,
    NME_GOAL_TRIGGER_NORMAL = 1313298432,
    NME_GOAL_TRIGGER_SCARY = 1313298433,
    NME_GOAL_TRIGGER_DETECT = 1313298434,
    NME_GOAL_TRIGGER_ALERT = 1313298435,
    NME_GOAL_TRIGGER_BATTLE = 1313298436,
    NME_GOAL_TRIGGER_WOUND = 1313298437,
    NME_GOAL_TRIGGER_ATTACK = 1313298438,
    NME_GOAL_TRIGGER_VINIVICIVIDI = 1313298439,
    NME_GOAL_FOGGER_AWARE = 1313293568,
    NME_GOAL_FOGGER_BATTLE = 1313293569,
    NME_GOAL_FOGGER_ATTACK = 1313293570,
    NME_GOAL_SLAMMER_AWARE = 1313293571,
    NME_GOAL_SLAMMER_BATTLE = 1313293572,
    NME_GOAL_SLAMMER_ATTACK = 1313293573,
    NME_GOAL_SPINNER_AWARE = 1313293574,
    NME_GOAL_SPINNER_BATTLE = 1313293575,
    NME_GOAL_FLINGER_NORMAL = 1313293576,
    NME_GOAL_FLINGER_AWARE = 1313293577,
    NME_GOAL_FLINGER_BATTLE = 1313293578,
    NME_GOAL_FLINGER_ATTACK = 1313293579,
    NME_GOAL_FLINGER_BOING = 1313293580,
    NME_GOAL_FLINGER_FLEE = 1313293581,
    NME_GOAL_FLINGER_PANIC = 1313293582,
    NME_GOAL_FLINGER_MOVE = 1313293583,
    NME_GOAL_POPPER_NORMAL = 1313293584,
    NME_GOAL_POPPER_AWARE = 1313293585,
    NME_GOAL_POPPER_WOUND = 1313293586,
    NME_GOAL_POPPER_EVADE = 1313293587,
    NME_GOAL_POPPER_BATTLE = 1313293588,
    NME_GOAL_POPPER_ATTACK = 1313293589,
    NME_GOAL_ZAP_NORMAL = 1313293590,
    NME_GOAL_ZAP_AWARE = 1313293591,
    NME_GOAL_ZAP_BATTLE = 1313293592,
    NME_GOAL_ZAP_WOUND = 1313293593,
    NME_GOAL_ZAP_ZAP = 1313293594,
    NME_GOAL_ZAP_MOVE = 1313293595,
    NME_GOAL_MERV_NORMAL = 1313293596,
    NME_GOAL_MERV_AWARE = 1313293597,
    NME_GOAL_MERV_BATTLE = 1313293598,
    NME_GOAL_MERV_ZAP = 1313293599,
    NME_GOAL_MERV_BOMB = 1313293600,
    NME_GOAL_MERV_BOWL = 1313293601,
    NME_GOAL_MERV_WOUND = 1313293602,
    NME_GOAL_MERV_MOVE = 1313293603,
    NME_GOAL_BUCK_RUNNING = 1313293604,
    NME_GOAL_BUCK_BIRTHING = 1313293605,
    NME_GOAL_BUCK_DYING = 1313293606,
    NME_GOAL_BUCK_DEAD = 1313293607,
    NME_GOAL_DENNIS_NORMAL = 1313293608,
    NME_GOAL_DENNIS_EVADE = 1313293609,
    NME_GOAL_DENNIS_BATTLE = 1313293610,
    NME_GOAL_DENNIS_ATTACK = 1313293611,
    NME_GOAL_DENNIS_TAUNT = 1313293612,
    NME_GOAL_DENNIS_DAMAGE = 1313293613,
    NME_GOAL_DENNIS_DEAD = 1313293614,
    NME_GOAL_DENTOO_NORMAL = 1313293615,
    NME_GOAL_DENTOO_EVADE = 1313293616,
    NME_GOAL_DENTOO_BATTLE = 1313293617,
    NME_GOAL_DENTOO_ATTACK = 1313293618,
    NME_GOAL_DENTOO_TAUNT = 1313293619,
    NME_GOAL_DENTOO_DAMAGE = 1313293620,
    NME_GOAL_DENTOO_DEAD = 1313293621,
    NME_GOAL_SBBAT_IDLE = 1313293622,
    NME_GOAL_SBBAT_DEAD = 1313293623,
    NME_GOAL_NOMORE = 1313293624,
    NME_GOAL_FORCE = 2147483647,
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x24
class RwStream {
    // Members
public:
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x14
class zStreamedSound {
    // Members
public:
    char * mAssetName; // offset 0x0, size 0x4
    float mCycleTime; // offset 0x4, size 0x4
    unsigned int mFlags; // offset 0x8, size 0x4
    float mSoonestTimeToPlay; // offset 0xC, size 0x4
    enum iSndGroupHandle mSoundGroupHdl; // offset 0x10, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum eSNDCurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerCar = 2,
    eCurrentPlayerSpongePat = 3,
    eCurrentPlayerCount = 4,
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
// total size: 0xC
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
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
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x0
class zReactiveGenre {};
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
// total size: 0x14
class zStaticCameraObject : public xBase {
    // Members
public:
    class zStaticCameraAsset * asset; // offset 0x10, size 0x4
};
// total size: 0x54
class World {
    // Members
public:
    char prefix[2]; // offset 0x0, size 0x2
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        char id[4]; // offset 0x0, size 0x4
        unsigned int startPointerId; // offset 0x4, size 0x4
    } tasks[10]; // offset 0x4, size 0x50
};
enum ePlayerEnum {
    PLAYER_BEGIN = 0,
    COSTUME_SB_1 = 0,
    COSTUME_SB_2 = 1,
    COSTUME_SB_3 = 2,
    COSTUME_SB_4 = 3,
    COSTUME_SB_5 = 4,
    COSTUME_SB_6 = 5,
    COSTUME_SB_7 = 6,
    COSTUME_SB_A = 7,
    COSTUME_SB_B = 8,
    COSTUME_SB_C = 9,
    COSTUME_SB_D = 10,
    COSTUME_SB_X = 10,
    COSTUME_PAT_1 = 11,
    COSTUME_PAT_2 = 12,
    COSTUME_PAT_3 = 13,
    COSTUME_PAT_4 = 14,
    COSTUME_PAT_5 = 15,
    COSTUME_PAT_6 = 16,
    COSTUME_PAT_7 = 17,
    COSTUME_PAT_A = 18,
    COSTUME_PAT_B = 19,
    COSTUME_PAT_C = 20,
    COSTUME_PAT_D = 21,
    COSTUME_PAT_X = 21,
    SPONGEPAT_0 = 22,
    SPONGEPAT_1 = 23,
    SPONGEPAT_2 = 24,
    CAR_NORMAL = 25,
    SPONGEBALL_NORMAL = 26,
    PLAYER_COUNT = 27,
};
// total size: 0x1C0
class zNMECommon : public zNMENPCWrapper {
    // Members
public:
    class zNMEAsset * nmeass; // offset 0x130, size 0x4
    signed int siz_nmeass; // offset 0x134, size 0x4
    class xPsyche * psy_self; // offset 0x138, size 0x4
    class NMECfgCommon * cfg_common; // offset 0x13C, size 0x4
    class NMEShadParms * cfg_shadparm; // offset 0x140, size 0x4
    signed int flg_vuln; // offset 0x144, size 0x4
    signed int flg_move; // offset 0x148, size 0x4
    signed int flg_misc; // offset 0x14C, size 0x4
    signed int flg_able; // offset 0x150, size 0x4
    float spd_throttle; // offset 0x154, size 0x4
    class NMERuntime runtimeData; // offset 0x158, size 0x20
    class zNMEDriver * drv_data; // offset 0x178, size 0x4
    class zNMENavNet * navnet; // offset 0x17C, size 0x4
    union { // inferred
        float tmr_common[3]; // offset 0x180, size 0xC
        struct { // inferred
            float tmr_invuln; // offset 0x180, size 0x4
            float tmr_scary; // offset 0x184, size 0x4
            float tmr_lastAlert; // offset 0x188, size 0x4
        };
    };
    class zNMECommon * npc_duplodude; // offset 0x18C, size 0x4
    class zNMESoundTable * snd_table; // offset 0x190, size 0x4
    enum iSndHandle sndID[10]; // offset 0x194, size 0x28
    class zShrapnelAsset * shrapnelAsset; // offset 0x1BC, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x20
class zNMENavNet {
    // Members
public:
    class zMovePoint * nav_past; // offset 0x0, size 0x4
    class zMovePoint * nav_curr; // offset 0x4, size 0x4
    class zMovePoint * nav_dest; // offset 0x8, size 0x4
    class zMovePoint * nav_lead; // offset 0xC, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x10, size 0x4
    float len_mvptspline; // offset 0x14, size 0x4
    float dst_curspline; // offset 0x18, size 0x4
    class zNMECommon * nme_owner; // offset 0x1C, size 0x4
};
// total size: 0xA0
class xEntMechData {
    // Members
public:
    class xBound original_bound; // offset 0x0, size 0x4C
    class xVec3 original_position; // offset 0x4C, size 0xC
    class xVec3 destination_position; // offset 0x58, size 0xC
    class xVec3 direction; // offset 0x64, size 0xC
    float original_rotation; // offset 0x70, size 0x4
    float destination_rotation; // offset 0x74, size 0x4
    float sliding_speed; // offset 0x78, size 0x4
    float rotation_speed; // offset 0x7C, size 0x4
    signed int state; // offset 0x80, size 0x4
    float sliding_forth_decel_time; // offset 0x84, size 0x4
    float rotation_forth_decel_time; // offset 0x88, size 0x4
    float sliding_back_decel_time; // offset 0x8C, size 0x4
    float rotating_back_decel_time; // offset 0x90, size 0x4
    float scale_speed; // offset 0x94, size 0x4
    float current_scale; // offset 0x98, size 0x4
    float * entity_rotation_angle; // offset 0x9C, size 0x4
};
// total size: 0x28
class zAnimListAsset {
    // Members
public:
    unsigned int ids[10]; // offset 0x0, size 0x28
};
// total size: 0xC8
class zNMESoundTable {
    // Members
public:
    enum iSndGroupHandle sndGroupHandle[10]; // offset 0x0, size 0x28
    char * assetNames[10]; // offset 0x28, size 0x28
    float timer[10]; // offset 0x50, size 0x28
    float time[10]; // offset 0x78, size 0x28
    signed int flags[10]; // offset 0xA0, size 0x28
};
enum en_npctyp {
    NPC_TYPE_UNKNOWN = 0,
    NME_TYPE_UNKNOWN = 0,
    NPC_TYPE_BASIC = 1,
    NPC_TYPE_COMMON = 2,
    NPC_TYPE_MELEE = 3,
    NPC_TYPE_MELEE_BOT = 4,
    NPC_TYPE_MINE = 5,
    NPC_TYPE_ORACLE = 6,
    NPC_TYPE_TURRET = 7,
    NPC_TYPE_SPIN_TURRET = 8,
    NPC_TYPE_SHOOTER = 9,
    NPC_TYPE_VIOLET_GUN = 10,
    NPC_TYPE_SECURITY_BIRD = 11,
    NPC_TYPE_FIRE_STREAMER = 12,
    NPC_TYPE_WATER_STREAMER = 13,
    NPC_TYPE_CAR = 14,
    NPC_TYPE_FRIENDLY = 15,
    NPC_TYPE_TANK = 16,
    NPC_TYPE_MELEE_SHIELDED = 17,
    NPC_TYPE_LOBBER = 18,
    NPC_TYPE_FLY_ROCKET = 19,
    NPC_TYPE_FLY_SHOOTER = 20,
    NPC_TYPE_FLY_LOBBER = 21,
    NPC_TYPE_VELOCIPOD = 22,
    NPC_TYPE_VELOCIPOD_DASH = 23,
    NPC_TYPE_MISSILE = 24,
    NPC_TYPE_HELIBOT = 25,
    NPC_TYPE_VIPER = 26,
    NPC_TYPE_BOT_LOB_WATER = 27,
    NPC_TYPE_BOT_LEAP = 28,
    NPC_TYPE_MONOPOD = 29,
    NPC_TYPE_INCREDIBALL = 30,
    NPC_TYPE_FROZONE = 31,
    NPC_TYPE_BOSS_OMNIDROID = 32,
    NPC_TYPE_BOSS_OMNIDROID10 = 33,
    NPC_TYPE_BOSS_BOMB_CHOPPER = 34,
    PLAYER_TYPE_MR_INCREDIBLE_YOUNG = 35,
    PLAYER_TYPE_MR_INCREDIBLE_DISGUISED = 36,
    PLAYER_TYPE_MR_INCREDIBLE_OLD_FAT_BLUE = 37,
    PLAYER_TYPE_MR_INCREDIBLE_OLD_FAT_RED = 38,
    PLAYER_TYPE_MR_INCREDIBLE_OLD_FIT = 39,
    PLAYER_TYPE_ELASTI_GIRL_YOUNG = 40,
    PLAYER_TYPE_ELASTI_GIRL_OLD = 41,
    PLAYER_TYPE_DASH_REGULAR = 42,
    PLAYER_TYPE_DASH_COSTUMED = 43,
    PLAYER_TYPE_INCREDI_BALL = 44,
    PLAYER_TYPE_VIOLET = 45,
    NME_TYPE_COMMON = 46,
    NME_TYPE_TIKI = 47,
    NME_TYPE_TIKI_WOOD = 48,
    NME_TYPE_TIKI_LOVEY = 49,
    NME_TYPE_TIKI_QUIET = 50,
    NME_TYPE_TIKI_THUNDER = 51,
    NME_TYPE_TIKI_STONE = 52,
    NME_TYPE_FIRST_SEE_TYPE = 53,
    NME_TYPE_CRITTER = 53,
    NME_TYPE_CRITBASIC = 54,
    NME_TYPE_CRITJELLY = 55,
    NME_TYPE_BUCKETJELLY = 56,
    NME_TYPE_TURRET = 57,
    NME_TYPE_TURBARREL_V1 = 58,
    NME_TYPE_TURBARREL_V2 = 59,
    NME_TYPE_TURBARREL_V3 = 60,
    NME_TYPE_TURSPIRAL = 61,
    NME_TYPE_TURPOPUP = 62,
    NME_TYPE_TURTURNER = 63,
    NME_TYPE_TURTRACE = 64,
    NME_TYPE_TURARTY = 65,
    NME_TYPE_STANDARD = 66,
    NME_TYPE_FOGGER_V1 = 67,
    NME_TYPE_FOGGER_V2 = 68,
    NME_TYPE_FOGGER_V3 = 69,
    NME_TYPE_SLAMMER_V1 = 70,
    NME_TYPE_SLAMMER_V2 = 71,
    NME_TYPE_SLAMMER_V3 = 72,
    NME_TYPE_FLINGER_V1 = 73,
    NME_TYPE_FLINGER_V2 = 74,
    NME_TYPE_FLINGER_V3 = 75,
    NME_TYPE_SPINNER_V1 = 76,
    NME_TYPE_SPINNER_V2 = 77,
    NME_TYPE_SPINNER_V3 = 78,
    NME_TYPE_POPPER_V1 = 79,
    NME_TYPE_POPPER_V2 = 80,
    NME_TYPE_POPPER_V3 = 81,
    NME_TYPE_ZAPPER_V1 = 82,
    NME_TYPE_ZAPPER_V2 = 83,
    NME_TYPE_ZAPPER_V3 = 84,
    NME_TYPE_MERVYN_V1 = 85,
    NME_TYPE_MERVYN_V2 = 86,
    NME_TYPE_MERVYN_V3 = 87,
    NME_TYPE_BUCKOTRON_V1 = 88,
    NME_TYPE_BUCKOTRON_V2 = 89,
    NME_TYPE_BUCKOTRON_V3 = 90,
    NME_TYPE_BUCKOTRON_V4 = 91,
    NME_TYPE_BUCKOTRON_V5 = 92,
    NME_TYPE_BUCKOTRON_V6 = 93,
    NME_TYPE_BUCKOTRON_V7 = 94,
    NME_TYPE_LAST_SEE_TYPE = 94,
    NME_TYPE_FROGFISH = 95,
    NME_TYPE_DENNIS_V1 = 96,
    NME_TYPE_DENNIS_V2 = 97,
    NME_TYPE_NEPTUNE = 98,
    NME_TYPE_SBBAT = 99,
    NME_TYPE_TONGUESPIN = 100,
    NME_TYPE_MINDY = 101,
    NME_TYPE_SPONGEBOB = 102,
    NME_TYPE_PATRICK = 103,
    NPC_TYPE_NOMORE = 104,
    NPC_TYPE_FORCE = 2147483647,
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
// total size: 0x40
class zSimpleMgr {
    // Members
public:
    class xSphere worldBound; // offset 0x0, size 0x10
    float noRenderDist; // offset 0x10, size 0x4
    float lodDist0; // offset 0x14, size 0x4
    float fadeDist; // offset 0x18, size 0x4
    unsigned int flags; // offset 0x1C, size 0x4
    class xModelBucket * * lodBucket[2]; // offset 0x20, size 0x8
    class RpAtomic * lodAtomic[2]; // offset 0x28, size 0x8
    class RwMatrixTag * mat; // offset 0x30, size 0x4
    class xModelInstance * model; // offset 0x34, size 0x4
    class zEntSimpleObj * ent; // offset 0x38, size 0x4
    class xLightKit * lkit; // offset 0x3C, size 0x4
};
// total size: 0x38
class _tagActionLine {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 pos[4]; // offset 0x4, size 0x30
    float time_left; // offset 0x34, size 0x4
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
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    char id[4]; // offset 0x0, size 0x4
    unsigned int startPointerId; // offset 0x4, size 0x4
};
// total size: 0xC
class LoadingModels {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float zpos; // offset 0x4, size 0x4
    class RpAtomic * model; // offset 0x8, size 0x4
};
// total size: 0x30
class zMovePoint : public xMovePoint {};
// total size: 0x14
class CameraFly_asset : public xDynAsset {
    // Members
public:
    unsigned int flyID; // offset 0x10, size 0x4
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
// total size: 0x14
class zCamMarker : public xBase {
    // Members
public:
    class xCamAsset * asset; // offset 0x10, size 0x4
};
// total size: 0x28
class xEntOrbitData {
    // Members
public:
    class xVec3 orig; // offset 0x0, size 0xC
    class xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
};
// total size: 0x20
class xSndGroupHeader : public xBaseAsset {
    // Members
public:
    unsigned int uPlayedMask; // offset 0x8, size 0x4
    unsigned char uInfoCount; // offset 0xC, size 0x1
    unsigned char uSetBits; // offset 0xD, size 0x1
    signed char nMaxPlays; // offset 0xE, size 0x1
    unsigned char uPriority; // offset 0xF, size 0x1
    unsigned char uFlags; // offset 0x10, size 0x1
    unsigned char eSoundCategory; // offset 0x11, size 0x1
    unsigned char ePlayRule; // offset 0x12, size 0x1
    unsigned char uInfoPad0; // offset 0x13, size 0x1
    float fInnerRadius; // offset 0x14, size 0x4
    float fOuterRadius; // offset 0x18, size 0x4
    char * pszGroupName; // offset 0x1C, size 0x4
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
// total size: 0xC
struct /* @anon2 */ {};
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
enum en_DISPATCH_COMMAND {
    ZDSP_CMD_INITDFLT = -1,
    ZDSP_CMD_CTRL_CFGGET = 0,
    ZDSP_CMD_CTRL_CFGSET = 1,
    ZDSP_CMD_CTRL_VIBEGET = 2,
    ZDSP_CMD_CTRL_VIBESET = 3,
    ZDSP_CMD_CTRL_SUBTGET = 4,
    ZDSP_CMD_CTRL_SUBTSET = 5,
    ZDSP_CMD_SNDMOD_GET = 6,
    ZDSP_CMD_SNDMOD_SET = 7,
    ZDSP_CMD_SNDVOL_GET = 8,
    ZDSP_CMD_SNDVOL_SET = 9,
    ZDSP_CMD_SNDVOL_INCR = 10,
    ZDSP_CMD_SNDVOL_DECR = 11,
    ZDSP_CMD_MUSVOL_GET = 12,
    ZDSP_CMD_MUSVOL_SET = 13,
    ZDSP_CMD_MUSVOL_INCR = 14,
    ZDSP_CMD_MUSVOL_DECR = 15,
    ZDSP_CMD_SFXVOL_GET = 16,
    ZDSP_CMD_SFXVOL_SET = 17,
    ZDSP_CMD_SFXVOL_INCR = 18,
    ZDSP_CMD_SFXVOL_DECR = 19,
    ZDSP_CMD_GSTATE_GET = 20,
    ZDSP_CMD_GSTATE_SET = 21,
    ZDSP_CMD_GMODE_GET = 22,
    ZDSP_CMD_GMODE_SET = 23,
    ZDSP_CHECKPNT_SET = 24,
    ZDSP_CMD_NOMORE = 25,
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
// total size: 0x24
class zBulletTimeAsset : public xDynAsset {
    // Members
public:
    float frequency; // offset 0x10, size 0x4
    float fadeout; // offset 0x14, size 0x4
    float originaltimer; // offset 0x18, size 0x4
    float originalscale; // offset 0x1C, size 0x4
    unsigned char global; // offset 0x20, size 0x1
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
// total size: 0x8
class RwMemory {
    // Members
public:
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
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
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char value_def; // offset 0x0, size 0x1
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
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x8
class zAnimFxSoundGroup {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
};
// total size: 0x18
class NMEShadParms {
    // Members
public:
    class SimpShadParm simpshad; // offset 0x0, size 0xC
    class FullShadParm fullshad; // offset 0xC, size 0x4
    class ShadowRadii shadrad; // offset 0x10, size 0x8
};
// total size: 0x0
class xModelAssetParam {};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
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
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x8
class zHitSourceMapEntry {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum zHitSource sourcetype; // offset 0x4, size 0x4
};
// total size: 0x200
class zLasso {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    unsigned char pad[3]; // offset 0xC9, size 0x3
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
    unsigned int patTongue; // offset 0xFC, size 0x4
    class RpAtomic * tipModel; // offset 0x100, size 0x4
    class xMat4x3 * tipMatrix; // offset 0x104, size 0x4
    float tipDelay; // offset 0x108, size 0x4
    float tipLerp; // offset 0x10C, size 0x4
    class xSpline3 * spl; // offset 0x110, size 0x4
    unsigned int spldata[59]; // offset 0x114, size 0xEC
};
enum eCarOneLiner {
    eCarOneLinerDestroyCrate = 0,
    eCarOneLinerStartJump = 1,
    eCarOneLinerStartBoost = 2,
    eCarOneLinerStartReverse = 3,
    eCarOneLinerDetectedSlipperySurface = 4,
    eCarOneLinerTakeDamage = 5,
    eCarOneLinerGetHealth = 6,
    eCarOneLinerNumSounds = 7,
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
// total size: 0x24
struct /* @anon3 */ {};
// total size: 0xC
class SimpShadParm {
    // Members
public:
    float rad_shadow; // offset 0x0, size 0x4
    char * nam_shadowTexture; // offset 0x4, size 0x4
    class RwRaster * rast_shadow; // offset 0x8, size 0x4
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
// total size: 0x20
class xSndGroup {
    // Members
public:
    class xSndGroupHeader header; // offset 0x0, size 0x20
    class xSndGroupInfo aSndGroupInfo[]; // offset 0x20, size 0x0
};
// total size: 0x70
class /* @class */ {
    // Members
public:
    unsigned char user_control_glance; // offset 0x0, size 0x1
    float glance_angle; // offset 0x4, size 0x4
    float angle_change; // offset 0x8, size 0x4
    float angle_change_v; // offset 0xC, size 0x4
    float angle_change_speed; // offset 0x10, size 0x4
    float angle_change_max; // offset 0x14, size 0x4
    float blend_time; // offset 0x18, size 0x4
    float current_blend_time; // offset 0x1C, size 0x4
    float responsiveness; // offset 0x20, size 0x4
    float responsiveness_v; // offset 0x24, size 0x4
    float responsiveness_speed; // offset 0x28, size 0x4
    float min_responsiveness; // offset 0x2C, size 0x4
    float min_responsiveness_v; // offset 0x30, size 0x4
    float y; // offset 0x34, size 0x4
    float y_v; // offset 0x38, size 0x4
    float y_speed; // offset 0x3C, size 0x4
    float x; // offset 0x40, size 0x4
    float x_v; // offset 0x44, size 0x4
    float x_speed; // offset 0x48, size 0x4
    float up_height; // offset 0x4C, size 0x4
    float up_distance; // offset 0x50, size 0x4
    float left_angle; // offset 0x54, size 0x4
    float rest_angle; // offset 0x58, size 0x4
    float right_angle; // offset 0x5C, size 0x4
    float rest_height; // offset 0x60, size 0x4
    float rest_distance; // offset 0x64, size 0x4
    float down_height; // offset 0x68, size 0x4
    float down_distance; // offset 0x6C, size 0x4
};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
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
// total size: 0x24
struct /* @anon4 */ {};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class xAnimAssetEffect {
    // Members
public:
    unsigned int StateID; // offset 0x0, size 0x4
    float StartTime; // offset 0x4, size 0x4
    float EndTime; // offset 0x8, size 0x4
    unsigned int UserDataSize; // offset 0xC, size 0x4
    unsigned char Flags; // offset 0x10, size 0x1
    unsigned char EffectType; // offset 0x11, size 0x1
    unsigned char Probability; // offset 0x12, size 0x1
    unsigned char PAD; // offset 0x13, size 0x1
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
struct /* @anon5 */ {};
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x14
class zCamTweak {
    // Members
public:
    unsigned int owner; // offset 0x0, size 0x4
    float priority; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
    float pitch; // offset 0xC, size 0x4
    float distMult; // offset 0x10, size 0x4
};
// total size: 0x68
class zEGenAsset : public xEntAsset {
    // Members
public:
    class xVec3 src_dpos; // offset 0x50, size 0xC
    unsigned char damage_type; // offset 0x5C, size 0x1
    unsigned char flags; // offset 0x5D, size 0x1
    float ontime; // offset 0x60, size 0x4
    unsigned int onAnimID; // offset 0x64, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    signed int lastStreamBuffer; // offset 0x8, size 0x4
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC
class xEntSpeedData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
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
// total size: 0xA0
class zNMEDriver {
    // Members
public:
    class xEnt * ent_driver; // offset 0x0, size 0x4
    float tym_mount; // offset 0x4, size 0x4
    class xMat4x3 mat_parLast; // offset 0x10, size 0x40
    class xMat4x3 mat_ownerLast; // offset 0x50, size 0x40
    signed int flg_inContact : 1; // offset 0x90, size 0x4
    signed int flg_matchOrient : 1; // offset 0x90, size 0x4
    signed int flg_unused : 30; // offset 0x90, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x2C
class zLinearFilter : public zFilterAbstract {
    // Members
public:
    class xVec3 v1; // offset 0x14, size 0xC
    class xVec3 v2; // offset 0x20, size 0xC
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
class effectBone {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 * pos; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @anon6 */ {};
// total size: 0xDC
class ztextbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char active : 1; // offset 0x0, size 0x1
        unsigned char dirty : 1; // offset 0x0, size 0x1
        unsigned char show_backdrop : 1; // offset 0x0, size 0x1
        unsigned char skipFrame : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class xtextbox tb; // offset 0x18, size 0x74
    char * segments[16]; // offset 0x8C, size 0x40
    unsigned int segments_size; // offset 0xCC, size 0x4
    class ztextbox * next; // offset 0xD0, size 0x4
    class ztextbox * prev; // offset 0xD4, size 0x4
    class RwRaster * bgtex; // offset 0xD8, size 0x4
};
// total size: 0x14
class zBulletTimeObject {
    // Members
public:
    class zBulletTimeAsset * asset; // offset 0x0, size 0x4
    float timer; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
    unsigned int counter; // offset 0xC, size 0x4
    unsigned char active; // offset 0x10, size 0x1
    unsigned char use_snapshots; // offset 0x11, size 0x1
};
// total size: 0x1C
class /* @class */ {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
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
class xPlatformAsset {};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
enum zFilterType {
    ezFILTER_TYPE_QUATERNION = 0,
    ezFILTER_TYPE_LINEAR = 1,
};
// total size: 0x1
class RyzMemData {};
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
// total size: 0xC
class OriginalBackupData {
    // Members
public:
    signed int flg_enableWander : 1; // offset 0x0, size 0x4
    signed int flg_enablePatrol : 1; // offset 0x0, size 0x4
    signed int flg_enableDetect : 1; // offset 0x0, size 0x4
    signed int flg_activeOn : 1; // offset 0x0, size 0x4
    signed int flg_takeNoDamage : 1; // offset 0x0, size 0x4
    signed int flg_unused : 27; // offset 0x0, size 0x4
    union { // inferred
        enum en_allow overrideDetect; // offset 0x4, size 0x4
        signed int alignmeproperly; // offset 0x4, size 0x4
    };
    union { // inferred
        enum en_allow overrideAttack; // offset 0x8, size 0x4
        signed int alignmeproperlyToo; // offset 0x8, size 0x4
    };
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0x24
struct /* @anon7 */ {};
// total size: 0x14
class xEntMotionPenData {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
// total size: 0x4
class _tagp2CamStaticAsset {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
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
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x68
class xPsyche : public RyzMemData {
    // Members
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
// total size: 0x14
class zFilterAbstract : public zTimeHandler {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float transition; // offset 0x0, size 0x4
    float state; // offset 0x4, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    signed int file_index; // offset 0x0, size 0x4
    unsigned int lsn; // offset 0x4, size 0x4
    unsigned int data_size; // offset 0x8, size 0x4
    unsigned short stream_interleave_size; // offset 0xC, size 0x2
    unsigned short stream_interleave_count; // offset 0xE, size 0x2
};
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0x4
class FullShadParm {
    // Members
public:
    signed int tobeDetermined; // offset 0x0, size 0x4
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    unsigned char skipFrame : 1; // offset 0x0, size 0x1
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum zCameraType {
    ezCAMERA_TYPE_FILTER = 0,
    ezCAMERA_TYPE_STATIC = 1,
};
enum eCollisionType {
    eCollisionTypeHeadOn = 0,
    eCollisionTypeSideKnock = 1,
    eCollisionTypeJumpLand = 2,
    eCollisionTypeDamage = 3,
};
// total size: 0xC
class xGridIterator {
    // Members
public:
    class xGridBound * * listhead; // offset 0x0, size 0x4
    class xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
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
// total size: 0x28
class xEntMotionERData {
    // Members
public:
    class xVec3 ret_pos; // offset 0x0, size 0xC
    class xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
enum camera_owner_enum {
    CO_BOULDER = 1,
    CO_CRUISE_BUBBLE = 2,
    CO_BUNGEE = 4,
    CO_BOSS = 8,
    CO_OOB = 16,
    CO_ZIPLINE = 32,
    CO_TURRET = 64,
    CO_REWARDANIM = 128,
    CO_WALLJUMP = 256,
    CO_BOSSCRUISELAUNCH = 512,
};
// total size: 0x8
class zDestructibleStateAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    void * * animData; // offset 0x4, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
// total size: 0x4
class color_type {
    // Members
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x60
class ScenePlayerMapEntry {
    // Members
public:
    unsigned int sceneTag; // offset 0x0, size 0x4
    unsigned int sceneMask; // offset 0x4, size 0x4
    enum ePlayerEnum playerEnum[10]; // offset 0x8, size 0x28
    unsigned int pointerToPlayer[10]; // offset 0x30, size 0x28
    signed int playerCount; // offset 0x58, size 0x4
    signed int pointerCount; // offset 0x5C, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x30
class xEntSplineData {
    // Members
public:
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    class NURBS * spline; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    unsigned char arrived; // offset 0x14, size 0x1
    float position_blend_v; // offset 0x18, size 0x4
    float orient_blend_v; // offset 0x1C, size 0x4
    class xQuat current_orient; // offset 0x20, size 0x10
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
enum WallJumpViewState {
    WJVS_DISABLED = 0,
    WJVS_DISABLING = 1,
    WJVS_ENABLED = 2,
    WJVS_ENABLING = 3,
};
// total size: 0x14
class xAnimAssetTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumRaw; // offset 0x4, size 0x4
    unsigned int NumFiles; // offset 0x8, size 0x4
    unsigned int NumStates; // offset 0xC, size 0x4
    unsigned int ConstructFunc; // offset 0x10, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
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
// total size: 0x0
class xFFX {};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
// total size: 0x14
class hitBoneInfo {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 boneOffset; // offset 0x4, size 0xC
    signed short atomic; // offset 0x10, size 0x2
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
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    unsigned int off; // offset 0x0, size 0x4
    unsigned int transition; // offset 0x4, size 0x4
    unsigned int on; // offset 0x8, size 0x4
};
// total size: 0x6C
class xSndVoiceInfo {
    // Members
public:
    union { // inferred
        class xSndGroup * soundGroup; // offset 0x0, size 0x4
        enum iSndGroupHandle soundGroupHandle; // offset 0x0, size 0x4
    };
    unsigned int assetID; // offset 0x4, size 0x4
    enum iSndHandle sndUniqueID; // offset 0x8, size 0x4
    class xEnt * pParent; // offset 0xC, size 0x4
    class xVec3 * pPosition; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    float vol; // offset 0x18, size 0x4
    float xpitch; // offset 0x1C, size 0x4
    float dopplerFreqCoef; // offset 0x20, size 0x4
    signed short category; // offset 0x24, size 0x2
    unsigned char bformerlyAPartOfPriority; // offset 0x26, size 0x1
    unsigned char priority; // offset 0x27, size 0x1
    class xVec3 actualPos; // offset 0x28, size 0xC
    class xVec3 playPos; // offset 0x34, size 0xC
    class xVec3 * pVelocity; // offset 0x40, size 0x4
    class xVec3 actualVelocity; // offset 0x44, size 0xC
    float distToListener; // offset 0x50, size 0x4
    float innerRadius; // offset 0x54, size 0x4
    float outerRadius; // offset 0x58, size 0x4
    class iSndInfo ps; // offset 0x5C, size 0xC
    class iSndFileInfo * pSndFileInfo; // offset 0x68, size 0x4
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
    unsigned char japanese_break : 1; // offset 0x1, size 0x1
    unsigned short dummy : 3; // offset 0x0, size 0x2
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x1C
class NMECfgCommon {
    // Members
public:
    class Damage damage; // offset 0x0, size 0x4
    class Physics physics; // offset 0x4, size 0x8
    class Movement movement; // offset 0xC, size 0x10
};
// total size: 0x14
class zFilterAbstract : public zTimeHandler {};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x8
class RwError {
    // Members
public:
    signed int pluginID; // offset 0x0, size 0x4
    signed int errorCode; // offset 0x4, size 0x4
};
// total size: 0x4
class _tagp2CamStaticFollowAsset {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
};
// total size: 0x74
class zUITextAsset : public zUIAsset {
    // Members
public:
    unsigned int textID; // offset 0x50, size 0x4
    unsigned char font; // offset 0x54, size 0x1
    unsigned char fontSizeW; // offset 0x55, size 0x1
    unsigned char fontSizeH; // offset 0x56, size 0x1
    unsigned char fontSpacingX; // offset 0x57, size 0x1
    unsigned char fontSpacingY; // offset 0x58, size 0x1
    unsigned char textBoxInsetTop; // offset 0x59, size 0x1
    unsigned char textBoxInsetLeft; // offset 0x5A, size 0x1
    unsigned char textBoxInsetRight; // offset 0x5B, size 0x1
    unsigned char textBoxInsetBottom; // offset 0x5C, size 0x1
    unsigned char justifyX; // offset 0x5D, size 0x1
    unsigned char justifyY; // offset 0x5E, size 0x1
    unsigned char textFlags; // offset 0x5F, size 0x1
    class xColor_tag shadowColor; // offset 0x60, size 0x4
    float shadowOffsetX; // offset 0x64, size 0x4
    float shadowOffsetY; // offset 0x68, size 0x4
    float textScaleX; // offset 0x6C, size 0x4
    float textScaleY; // offset 0x70, size 0x4
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
class xParInterp {
    // Members
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x8
class ShadowRadii {
    // Members
public:
    float rad_noShadow; // offset 0x0, size 0x4
    float rad_complexShadow; // offset 0x4, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
enum eSound {
    eSoundIdleLoop = 0,
    eSoundEngineLoop = 1,
    eSoundEngineDamage1Loop = 2,
    eSoundEngineDamage2Loop = 3,
    eSoundEngineReverseLoop = 4,
    eSoundEngineReverseDamage1Loop = 5,
    eSoundEngineReverseDamage2Loop = 6,
    eSoundIgnition = 7,
    eSoundEngineStop = 8,
    eSoundBackfire = 9,
    eSoundReverseBeep = 10,
    eSoundGearCrunch = 11,
    eSoundBoostStart = 12,
    eSoundBoostLoop = 13,
    eSoundBoostEnd = 14,
    eSoundJumpLand1 = 15,
    eSoundJumpLand2 = 16,
    eSoundJumpLand3 = 17,
    eSoundHit = 18,
    eSoundHitDamage = 19,
    eSoundCarDestroyed = 20,
    eSoundCountdownBeep = 21,
    eSoundStartBeep = 22,
    eSoundMinorSuccess = 23,
    eSoundMajorSuccess = 24,
    eSoundHealthPickup = 25,
    eSoundBoostPickup = 26,
    eSoundFanfareWin = 27,
    eSoundFanfareLose = 28,
    eSoundHorn = 29,
    eSoundHornFun1 = 30,
    eSoundHornFun2 = 31,
    eSoundHornFun3 = 32,
    eSoundNumSounds = 33,
};
// total size: 0x4
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x2C
class xDestructibleAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nstates; // offset 0x4, size 0x4
    unsigned int hit_points; // offset 0x8, size 0x4
    unsigned int hit_filter; // offset 0xC, size 0x4
    unsigned int launch_flag; // offset 0x10, size 0x4
    unsigned int behaviour; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
    unsigned int soundgroupidleID; // offset 0x1C, size 0x4
    float respawn; // offset 0x20, size 0x4
    unsigned char target_priority; // offset 0x24, size 0x1
    class xDestructibleAssetState * states; // offset 0x28, size 0x4
};
// total size: 0x3C
class xEntMotionAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short ent_motion_flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0xC
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x38
        class xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
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
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x0
class rxReq {};
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
// total size: 0x84
class asset_type : public xDynAsset {
    // Members
public:
    unsigned int text; // offset 0x10, size 0x4
    class basic_rect bounds; // offset 0x14, size 0x10
    unsigned int font; // offset 0x24, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float width; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
    } size; // offset 0x28, size 0x8
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
    } space; // offset 0x30, size 0x8
    class color_type color; // offset 0x38, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float left; // offset 0x0, size 0x4
        float top; // offset 0x4, size 0x4
        float right; // offset 0x8, size 0x4
        float bottom; // offset 0xC, size 0x4
    } inset; // offset 0x3C, size 0x10
    enum /* @enum */ {
        XJ_LEFT = 0,
        XJ_CENTER = 1,
        XJ_RIGHT = 2,
    } xjustify; // offset 0x4C, size 0x4
    enum /* @enum */ {
        YJ_TOP = 0,
        YJ_CENTER = 1,
        YJ_BOTTOM = 2,
    } yjustify; // offset 0x50, size 0x4
    enum /* @enum */ {
        EX_UP = 0,
        EX_CENTER = 1,
        EX_DOWN = 2,
        MAX_EX = 3,
    } expand; // offset 0x54, size 0x4
    float max_height; // offset 0x58, size 0x4
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        unsigned int type; // offset 0x0, size 0x4
        class color_type color; // offset 0x4, size 0x4
        unsigned int texture; // offset 0x8, size 0x4
        float borderU; // offset 0xC, size 0x4
        float borderV; // offset 0x10, size 0x4
        float borderWidth; // offset 0x14, size 0x4
        float borderHeight; // offset 0x18, size 0x4
    } backdrop; // offset 0x5C, size 0x1C
    class color_type shadowColor; // offset 0x78, size 0x4
    float shadowOffsetX; // offset 0x7C, size 0x4
    float shadowOffsetY; // offset 0x80, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum iSndHandle {
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
enum eDamage {
    eDamageNone = 0,
    eDamage1 = 1,
    eDamage2 = 2,
    eDamage3 = 3,
    eDamageMax = 4,
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
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x1C
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0xD0
class xEntMotion {
    // Members
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x30
        class xEntMPData mp; // offset 0x20, size 0x50
        class xEntMechData mech; // offset 0x20, size 0xA0
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0xC0, size 0x4
    class xEnt * target; // offset 0xC4, size 0x4
};
// total size: 0x18
class xEntMotionOrbitData {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
// total size: 0x34
class PlayerStreakInfo {
    // Members
public:
    unsigned int activated; // offset 0x0, size 0x4
    unsigned int streakID; // offset 0x4, size 0x4
    float alphaStart; // offset 0x8, size 0x4
    signed int streakTaper; // offset 0xC, size 0x4
    class xColor_tag colA; // offset 0x10, size 0x4
    class xColor_tag colB; // offset 0x14, size 0x4
    unsigned int bone; // offset 0x18, size 0x4
    class xVec3 a; // offset 0x1C, size 0xC
    class xVec3 b; // offset 0x28, size 0xC
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
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
enum animState {
    eANIMSTATE_Idle = 0,
    eANIMSTATE_Drive = 1,
    eANIMSTATE_DriveSlippy = 2,
    eANIMSTATE_Boosting = 3,
    eANIMSTATE_Reversing = 4,
    eANIMSTATE_Jump = 5,
    eANIMSTATE_JumpLandSquash = 6,
    eANIMSTATE_Crash = 7,
    eANIMSTATE_SpinLeft = 8,
    eANIMSTATE_SpinRight = 9,
    eANIMSTATE_Success = 10,
    eANIMSTATE_Failed = 11,
    eANIMSTATE_Death = 12,
};
// total size: 0x160
class zGlobalSettings {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int FriendlySelectMode; // offset 0x98, size 0x4
    float RotMatchMaxAngle; // offset 0x9C, size 0x4
    float RotMatchMatchTime; // offset 0xA0, size 0x4
    float RotMatchRelaxTime; // offset 0xA4, size 0x4
    float Gravity; // offset 0xA8, size 0x4
    float BBashTime; // offset 0xAC, size 0x4
    float BBashHeight; // offset 0xB0, size 0x4
    float BBashDelay; // offset 0xB4, size 0x4
    float BBashCVTime; // offset 0xB8, size 0x4
    float BBounceSpeed; // offset 0xBC, size 0x4
    float BBashGauntletDelay; // offset 0xC0, size 0x4
    float BBashGauntletBlastRadius; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float BSpinReach; // offset 0xD4, size 0x4
    float BSpinReachUpgrade; // offset 0xD8, size 0x4
    float CartwheelDamageSize; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[10]; // offset 0x149, size 0xA
    unsigned char InitialPowerUp[10]; // offset 0x153, size 0xA
    unsigned char AttractModeDuringGameplay; // offset 0x15D, size 0x1
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
// total size: 0x58
class AlternateCostumes {
    // Members
public:
    unsigned int sceneTag; // offset 0x0, size 0x4
    unsigned int normalPlayerTag[10]; // offset 0x4, size 0x28
    unsigned int alternatePlayerTag[10]; // offset 0x2C, size 0x28
    signed int alternatePlayerCount; // offset 0x54, size 0x4
};
// total size: 0x50
class xEntMPData {
    // Members
public:
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    float curdist; // offset 0xC, size 0x4
    class xMovePoint * dest; // offset 0x10, size 0x4
    class xMovePoint * src; // offset 0x14, size 0x4
    class xSpline3 * spl; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    unsigned int padalign; // offset 0x20, size 0x4
    class xQuat aquat; // offset 0x30, size 0x10
    class xQuat bquat; // offset 0x40, size 0x10
};
enum iSndGroupHandle {
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
// total size: 0xC
class _tagxCamPathAsset {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
};
// total size: 0x14
class RwStreamUnion {
    // Members
public:
    union { // inferred
        class RwStreamMemory memory; // offset 0x0, size 0xC
        class RwStreamFile file; // offset 0x0, size 0x4
        class RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
// total size: 0x24
struct /* @anon8 */ {};
// total size: 0x4
class Damage {
    // Members
public:
    float tym_invuln; // offset 0x0, size 0x4
};
// total size: 0x20C
class zPlayerLassoInfo {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    class xEnt * swingTarget; // offset 0x4, size 0x4
    class xEnt * releasedSwing; // offset 0x8, size 0x4
    class zLasso lasso; // offset 0xC, size 0x200
};
// total size: 0xC
struct /* @anon9 */ {};
// total size: 0x8
class zCollisionGeomTableEntry {
    // Members
public:
    unsigned int sTableCount; // offset 0x0, size 0x4
    class zCollGeomTable * sTableList; // offset 0x4, size 0x4
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
// total size: 0xC
class AnimTableList {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class xAnimTable * (* constructor)(); // offset 0x4, size 0x4
    unsigned int id; // offset 0x8, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
enum en_BULLET_TIME_CAMERA_FLAGS {
    en_BULLET_TIME_CAM_FOLLOW_PLAYER = 1,
    en_BULLET_TIME_CAM_FREEZE = 2,
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
// total size: 0x380
class zLedgeGrabParams {
    // Members
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x80
class xCutsceneAudioTrack {
    // Members
public:
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x54
class zCutsceneHack {
    // Members
public:
    char * cinname; // offset 0x0, size 0x4
    char * modelname; // offset 0x4, size 0x4
    unsigned int noshadow; // offset 0x8, size 0x4
    unsigned int numPipes; // offset 0xC, size 0x4
    class RpAtomic * (* renderCB)(class RpAtomic *); // offset 0x10, size 0x4
    class xModelPipe pipe[8]; // offset 0x14, size 0x40
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

