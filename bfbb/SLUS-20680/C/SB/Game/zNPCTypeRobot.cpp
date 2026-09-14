/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
unsigned int g_hash_roboanim[41]; // size: 0xA4, address: 0x5CC290
char * g_strz_roboanim[41]; // size: 0xA4, address: 0x4DEEA0
static unsigned int g_hash_ttsanim[2]; // size: 0x8, address: 0x50FEA8
static char * g_strz_ttsanim[2]; // size: 0x8, address: 0x50EF78
static unsigned int g_hash_cloudanim[3]; // size: 0xC, address: 0x5CC338
static char * g_strz_cloudanim[3]; // size: 0xC, address: 0x4DEF48
static unsigned int g_hash_nytlytanim[2]; // size: 0x8, address: 0x50FEB0
static char * g_strz_nytlytanim[2]; // size: 0x8, address: 0x50EF80
static unsigned int g_hash_flotanim[2]; // size: 0x8, address: 0x50FEB8
static char * g_strz_flotanim[2]; // size: 0x8, address: 0x50EF88
static unsigned int g_hash_shieldanim[2]; // size: 0x8, address: 0x50FEC0
static char * g_strz_shieldanim[2]; // size: 0x8, address: 0x50EF90
static class UVAModelInfo g_uvaShield; // size: 0x20, address: 0x5CC350
class NPCBattle g_GlobalBattleData; // size: 0x14, address: 0x5CC370
static signed int g_cnt_fodbzzt; // size: 0x4, address: 0x50FEC8
static signed int g_cnt_sleepy; // size: 0x4, address: 0x50FECC
static signed int g_needuvincr_tube; // size: 0x4, address: 0x50FED0
static signed int g_needuvincr_bzzt; // size: 0x4, address: 0x50FED4
static signed int g_needuvincr_nightlight; // size: 0x4, address: 0x50FED8
static signed int g_needuvincr_slickshield; // size: 0x4, address: 0x50FEDC
class RwRaster * rast_blink; // size: 0x4, address: 0x50FEE0
float tmr_nexthokey; // size: 0x4, address: 0x50FEE4
float tmr_hokeypokey; // size: 0x4, address: 0x50FEE8
signed int cnt_alerthokey; // size: 0x4, address: 0x50FEEC
class NPCLaser laser; // size: 0x24, address: 0x5CC430
class RwRaster * rast_discoLight; // size: 0x4, address: 0x50FEF0
float uv_slice_discoLight[2]; // size: 0x8, address: 0x50EFA8
signed int g_needMusician; // size: 0x4, address: 0x50EFB0
class RwRaster * rast_killcone; // size: 0x4, address: 0x50FEF4
class RwRaster * rast_detectcone; // size: 0x4, address: 0x50FEF8
float uv_deathcone[2]; // size: 0x8, address: 0x50FF00
float uv_nightlight[2]; // size: 0x8, address: 0x50FF08
float uv_slice_nightlight[2]; // size: 0x8, address: 0x50EFE8
float uv_slice_deathcone[2]; // size: 0x8, address: 0x50EFF0
float hyt_NightLightCurrent; // size: 0x4, address: 0x50FF10
static signed int g_sleepy_NightLightStates[10]; // size: 0x28, address: 0x0
static signed int g_sleepy_angryStates[5]; // size: 0x14, address: 0x4DF120
static class RxObjSpace3DVertex g_vert_list[34]; // size: 0x4C8, address: 0x5CC460
class RwRaster * rast_blink; // size: 0x4, address: 0x50FF30
class NPCLaser laser; // size: 0x24, address: 0x5CC930
static class zNPCSlick * g_slick_slipfx_owner; // size: 0x4, address: 0x50FF34
static class zParEmitter * g_pemit_smoke; // size: 0x4, address: 0x50FF3C
static class zParEmitter * g_pemit_flame; // size: 0x4, address: 0x50FF40
static class zParEmitter * g_pemit_trek; // size: 0x4, address: 0x50FF44
static class zParEmitter * g_pemit_propwash; // size: 0x4, address: 0x50FF48
static class zParEmitter * g_pemit_exhaust; // size: 0x4, address: 0x50FF4C
static class zParEmitter * g_pemit_steam; // size: 0x4, address: 0x50FF50
static class xParEmitterCustomSettings g_parf_smoke; // size: 0x16C, address: 0x5CC960
static class xParEmitterCustomSettings g_parf_spark; // size: 0x16C, address: 0x5CCAD0
static class xParEmitterCustomSettings g_parf_trek; // size: 0x16C, address: 0x5CCC40
static class xParEmitterCustomSettings g_parf_propwash; // size: 0x16C, address: 0x5CCDB0
static class xParEmitterCustomSettings g_parf_exhaust; // size: 0x16C, address: 0x5CCF20
static class xParEmitterCustomSettings g_parf_steam; // size: 0x16C, address: 0x5CD090
// total size: 0xD8
struct /* @anon16 */ {} zNPCSlick::__vtable; // size: 0xD8, address: 0x50A790
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
enum _CurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x50F3EC
class xVec3 g_NY3; // size: 0xC, address: 0x4F8DC0
class xVec3 g_X3; // size: 0xC, address: 0x4F8D80
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
signed int SLCK_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D6FB0
signed int ROBO_grul_goAlertLobber(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7700
class NPCSndTrax g_sndTrax_Slick[]; // size: 0x0, address: 0x4E0380
class NPCSndTrax g_sndTrax_Robot[]; // size: 0x0, address: 0x4E00C0
class NPCSndTrax g_sndTrax_Tubelet[]; // size: 0x0, address: 0x4E0340
signed int TUBE_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D6FD0
signed int ROBO_grul_goAlertMelee(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D79A0
signed int CHUK_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D6FF0
class NPCSndTrax g_sndTrax_Chuck[]; // size: 0x0, address: 0x4E02A0
signed int PUPY_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7010
class NPCSndTrax g_sndTrax_ArfDog[]; // size: 0x0, address: 0x4E0310
signed int ARFY_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7030
class NPCSndTrax g_sndTrax_ArfArf[]; // size: 0x0, address: 0x4E02E0
class xVec3 g_Y3; // size: 0xC, address: 0x4F8D90
signed int SLEP_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7050
signed int SLEP_grul_goAlert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7070
class NPCSndTrax g_sndTrax_Sleepy[]; // size: 0x0, address: 0x4E0270
signed int MOON_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7600
class NPCSndTrax g_sndTrax_Monsoon[]; // size: 0x0, address: 0x4E0240
signed int GLOV_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7620
class NPCSndTrax g_sndTrax_Glove[]; // size: 0x0, address: 0x4E0220
signed int TART_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7640
class NPCSndTrax g_sndTrax_TarTar[]; // size: 0x0, address: 0x4E01F0
signed int HAMR_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7660
class NPCSndTrax g_sndTrax_Hammer[]; // size: 0x0, address: 0x4E01C0
signed int CHMP_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7680
class NPCSndTrax g_sndTrax_Chomper[]; // size: 0x0, address: 0x4E0190
signed int BZZT_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D76A0
class NPCSndTrax g_sndTrax_FodBzzt[]; // size: 0x0, address: 0x4E0160
signed int BOMB_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D76C0
class NPCSndTrax g_sndTrax_FodBomb[]; // size: 0x0, address: 0x4E0110
signed int FODR_grul_alert(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D76E0
class NPCSndTrax g_sndTrax_Fodder[]; // size: 0x0, address: 0x4E00E0
class xVec3 g_Z3; // size: 0xC, address: 0x4F8DA0
signed int DUMY_grul_returnToIdle(class xGoal *, void *, enum en_trantype *, float, void *); // size: 0x0, address: 0x2D7C00
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
// total size: 0xD8
struct /* @anon5 */ {} zNPCRobot::__vtable; // size: 0xD8, address: 0x50B5B0
// total size: 0xCC
struct /* @anon20 */ {} zNPCCommon::__vtable; // size: 0xCC, address: 0x50A6C0
// total size: 0x54
struct /* @anon14 */ {} xNPCBasic::__vtable; // size: 0x54, address: 0x50BE30
// total size: 0xD8
struct /* @anon1 */ {} zNPCTubeSlave::__vtable; // size: 0xD8, address: 0x50A880
// total size: 0xC
struct /* @anon8 */ {} TubeNotice::__vtable; // size: 0xC, address: 0x50A958
// total size: 0xC
struct /* @anon2 */ {} xPSYNote::__vtable; // size: 0xC, address: 0x50A868
// total size: 0xD8
struct /* @anon7 */ {} zNPCTubelet::__vtable; // size: 0xD8, address: 0x50A970
// total size: 0xD8
struct /* @anon19 */ {} zNPCChuck::__vtable; // size: 0xD8, address: 0x50AA50
// total size: 0xD8
struct /* @anon6 */ {} zNPCArfArf::__vtable; // size: 0xD8, address: 0x50AC10
// total size: 0xD8
struct /* @anon15 */ {} zNPCArfDog::__vtable; // size: 0xD8, address: 0x50AB30
// total size: 0xD8
struct /* @anon3 */ {} zNPCSleepy::__vtable; // size: 0xD8, address: 0x50ACF0
// total size: 0xD8
struct /* @anon11 */ {} zNPCMonsoon::__vtable; // size: 0xD8, address: 0x50ADD0
// total size: 0xD8
struct /* @anon10 */ {} zNPCGlove::__vtable; // size: 0xD8, address: 0x50AEB0
// total size: 0xD8
struct /* @anon17 */ {} zNPCTarTar::__vtable; // size: 0xD8, address: 0x50AF90
// total size: 0xD8
struct /* @anon4 */ {} zNPCHammer::__vtable; // size: 0xD8, address: 0x50B070
// total size: 0xD8
struct /* @anon9 */ {} zNPCCritter::__vtable; // size: 0xD8, address: 0x50B150
// total size: 0xD8
struct /* @anon0 */ {} zNPCChomper::__vtable; // size: 0xD8, address: 0x50B230
// total size: 0xD8
struct /* @anon13 */ {} zNPCFodBzzt::__vtable; // size: 0xD8, address: 0x50B310
// total size: 0xD8
struct /* @anon12 */ {} zNPCFodBomb::__vtable; // size: 0xD8, address: 0x50B3F0
// total size: 0xD8
struct /* @anon18 */ {} zNPCFodder::__vtable; // size: 0xD8, address: 0x50B4D0
// total size: 0xD8
struct /* @anon0 */ {};
// total size: 0x384
class zNPCChomper : public zNPCRobot {
    // Members
public:
    signed int cnt_spurt; // offset 0x37C, size 0x4
    signed int cnt_skipEmit; // offset 0x380, size 0x4
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
// total size: 0x390
class zNPCSlick : public zNPCRobot {
    // Members
public:
    float rad_shield; // offset 0x37C, size 0x4
    float tmr_repairShield; // offset 0x380, size 0x4
    float tmr_invuln; // offset 0x384, size 0x4
    float alf_shieldCurrent; // offset 0x388, size 0x4
    float alf_shieldDesired; // offset 0x38C, size 0x4
};
// total size: 0x0
class xParGroup {};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x3C
class xGoal : public xListItem, public xFactoryInst {
    // Members
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
class xAnimTable {
    // Members
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
};
// total size: 0x38C
class zNPCArfDog : public zNPCRobot {
    // Members
public:
    class NPCBlinker blinkHead; // offset 0x37C, size 0x8
    class NPCBlinker blinkTail; // offset 0x384, size 0x8
};
// total size: 0x30
class zMovePoint : public xMovePoint {};
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
// total size: 0x54
class zNPCGoalAfterlife : public zNPCGoalDead {};
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
// total size: 0x3B0
class NPCConfig : public xListItem {
    // Members
public:
    unsigned int modelID; // offset 0xC, size 0x4
    signed int flg_config; // offset 0x10, size 0x4
    float spd_turnMax; // offset 0x14, size 0x4
    float spd_moveMax; // offset 0x18, size 0x4
    float fac_accelMax; // offset 0x1C, size 0x4
    float fac_driftMax; // offset 0x20, size 0x4
    float fac_gravKnock; // offset 0x24, size 0x4
    float fac_elastic; // offset 0x28, size 0x4
    signed int pts_damage; // offset 0x2C, size 0x4
    signed int useBoxBound; // offset 0x30, size 0x4
    class xVec3 off_bound; // offset 0x34, size 0xC
    class xVec3 dim_bound; // offset 0x40, size 0xC
    float npcMass; // offset 0x4C, size 0x4
    float npcMassInv; // offset 0x50, size 0x4
    float rad_detect; // offset 0x54, size 0x4
    float hyt_detect; // offset 0x58, size 0x4
    float off_detect; // offset 0x5C, size 0x4
    float rad_attack; // offset 0x60, size 0x4
    float fov_attack; // offset 0x64, size 0x4
    class xVec3 scl_model; // offset 0x68, size 0xC
    float tym_attack; // offset 0x74, size 0x4
    float tym_fidget; // offset 0x78, size 0x4
    float tym_stun; // offset 0x7C, size 0x4
    float tym_alert; // offset 0x80, size 0x4
    float dst_castShadow; // offset 0x84, size 0x4
    float rad_shadowCache; // offset 0x88, size 0x4
    float rad_shadowRaster; // offset 0x8C, size 0x4
    float rad_dmgSize; // offset 0x90, size 0x4
    signed int flg_vert; // offset 0x94, size 0x4
    class xModelTag tag_vert[20]; // offset 0x98, size 0x280
    class xVec3 animFrameRange[9]; // offset 0x318, size 0x6C
    signed int cnt_esteem[5]; // offset 0x384, size 0x14
    float rad_sound; // offset 0x398, size 0x4
    class NPCSndTrax * snd_trax; // offset 0x39C, size 0x4
    class NPCSndTrax * snd_traxShare; // offset 0x3A0, size 0x4
    signed int test_count; // offset 0x3A4, size 0x4
    unsigned char talk_filter[4]; // offset 0x3A8, size 0x4
    unsigned char talk_filter_size; // offset 0x3AC, size 0x1
};
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0xD0
class xEnt : public xBase {
    // Members
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned short num_updates; // offset 0x16, size 0x2
    unsigned char flags; // offset 0x18, size 0x1
    unsigned char miscflags; // offset 0x19, size 0x1
    unsigned char subType; // offset 0x1A, size 0x1
    unsigned char pflags; // offset 0x1B, size 0x1
    unsigned char moreFlags; // offset 0x1C, size 0x1
    unsigned char isCulled; // offset 0x1D, size 0x1
    unsigned char driving_count; // offset 0x1E, size 0x1
    unsigned char num_ffx; // offset 0x1F, size 0x1
    unsigned char collType; // offset 0x20, size 0x1
    unsigned char collLev; // offset 0x21, size 0x1
    unsigned char chkby; // offset 0x22, size 0x1
    unsigned char penby; // offset 0x23, size 0x1
    class xModelInstance * model; // offset 0x24, size 0x4
    class xModelInstance * collModel; // offset 0x28, size 0x4
    class xModelInstance * camcollModel; // offset 0x2C, size 0x4
    class xLightKit * lightKit; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x14
    class xBound bound; // offset 0x64, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB0, size 0x4
    class xFFX * ffx; // offset 0xB4, size 0x4
    class xEnt * driver; // offset 0xB8, size 0x4
    signed int driveMode; // offset 0xBC, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC0, size 0x4
    class xEntShadow * entShadow; // offset 0xC4, size 0x4
    class anim_coll_data * anim_coll; // offset 0xC8, size 0x4
    void * user_data; // offset 0xCC, size 0x4
};
// total size: 0xC
class NPCSndTrax {
    // Members
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
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
// total size: 0x54
class zFragGroup {
    // Members
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
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
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x37C
class zNPCRobot : public zNPCCommon {
    // Members
public:
    signed int hitpoints; // offset 0x2A0, size 0x4
    float tmr_safetime; // offset 0x2A4, size 0x4
    class NPCArena arena; // offset 0x2A8, size 0x20
    class NPCBattle * inf_battle; // offset 0x2C8, size 0x4
    signed int idx_neckBone; // offset 0x2CC, size 0x4
    float tmr_stunned; // offset 0x2D0, size 0x4
    class NPCGlyph * glyf_stun; // offset 0x2D4, size 0x4
    signed int cnt_nextemit; // offset 0x2D8, size 0x4
    class xVec3 vel_bunnyhop; // offset 0x2DC, size 0xC
    class zNPCLassoInfo raw_lassoinfo; // offset 0x2E8, size 0x18
    class xEntDrive raw_drvdata; // offset 0x300, size 0x7C
};
// total size: 0x398
class zNPCFodBzzt : public zNPCRobot {
    // Members
public:
    class RwRGBA rgba_discoLight; // offset 0x37C, size 0x4
    float tmr_discoLight; // offset 0x380, size 0x4
    class xVec3 pos_discoLight; // offset 0x384, size 0xC
    float uv_discoLight[2]; // offset 0x390, size 0x8
};
// total size: 0x1E8
class xEntBoulder : public xEnt {
    // Members
public:
    class xEntBoulderAsset * basset; // offset 0xD0, size 0x4
    class xShadowSimpleCache simpShadow_embedded; // offset 0xD4, size 0x98
    class xEntShadow entShadow_embedded; // offset 0x16C, size 0x28
    class xVec3 localCenter; // offset 0x194, size 0xC
    class xVec3 vel; // offset 0x1A0, size 0xC
    class xVec3 rotVec; // offset 0x1AC, size 0xC
    class xVec3 force; // offset 0x1B8, size 0xC
    class xVec3 instForce; // offset 0x1C4, size 0xC
    float angVel; // offset 0x1D0, size 0x4
    float timeToLive; // offset 0x1D4, size 0x4
    signed int hitpoints; // offset 0x1D8, size 0x4
    float lastRolling; // offset 0x1DC, size 0x4
    unsigned int rollingID; // offset 0x1E0, size 0x4
    unsigned char collis_chk; // offset 0x1E4, size 0x1
    unsigned char collis_pen; // offset 0x1E5, size 0x1
    unsigned char pad1[2]; // offset 0x1E6, size 0x2
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
// total size: 0x18
class xJSPHeader {
    // Members
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0x37C
class zNPCTarTar : public zNPCRobot {};
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
// total size: 0x234
class zLightning {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    union { // inferred
        // total size: 0x220
        class /* @class */ {
            // Members
        public:
            class xVec3 base_point[16]; // offset 0x0, size 0xC0
            class xVec3 point[16]; // offset 0xC0, size 0xC0
            signed short total_points; // offset 0x180, size 0x2
            signed short end_points; // offset 0x182, size 0x2
            float arc_height; // offset 0x184, size 0x4
            class xVec3 arc_normal; // offset 0x188, size 0xC
            float thickness[16]; // offset 0x194, size 0x40
            union { // inferred
                class _tagLightningLine line; // offset 0x1D4, size 0x4
                class _tagLightningRot rot; // offset 0x1D4, size 0x48
                class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
            };
            float rand_radius; // offset 0x21C, size 0x4
        } legacy; // offset 0x8, size 0x220
        // total size: 0x58
        class /* @class */ {
            // Members
        public:
            class xVec3 endPoint[2]; // offset 0x0, size 0x18
            class xVec3 direction; // offset 0x18, size 0xC
            float length; // offset 0x24, size 0x4
            float scale; // offset 0x28, size 0x4
            float width; // offset 0x2C, size 0x4
            float endParam[2]; // offset 0x30, size 0x8
            float endVel[2]; // offset 0x38, size 0x8
            float paramSpan[2]; // offset 0x40, size 0x8
            float arc_height; // offset 0x48, size 0x4
            class xVec3 arc_normal; // offset 0x4C, size 0xC
        } func; // offset 0x8, size 0x58
    };
    class iColor_tag color; // offset 0x228, size 0x4
    float time_left; // offset 0x22C, size 0x4
    float time_total; // offset 0x230, size 0x4
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
// total size: 0x10
class NPCChatInfo {
    // Members
public:
    class xVec3 pos_chat; // offset 0x0, size 0xC
    float tym_chat; // offset 0xC, size 0x4
};
// total size: 0x64
class NPCGlyph {
    // Members
public:
    enum en_npcglyph typ_glyph; // offset 0x0, size 0x4
    signed int flg_glyph; // offset 0x4, size 0x4
    class xModelInstance * mdl_glyph; // offset 0x8, size 0x4
    class xVec3 pos_glyph; // offset 0xC, size 0xC
    class xVec3 vel_glyph; // offset 0x18, size 0xC
    class xMat3x3 rot_glyph; // offset 0x24, size 0x30
    class xVec3 scl_glyph; // offset 0x54, size 0xC
    float tmr_glyph; // offset 0x60, size 0x4
};
// total size: 0x39C
class zNPCTubelet : public zNPCRobot {
    // Members
public:
    enum en_tubestat tubestat; // offset 0x37C, size 0x4
    class zNPCTubeSlave * tub_paul; // offset 0x380, size 0x4
    class zNPCTubeSlave * tub_mary; // offset 0x384, size 0x4
    float bonkSpinRate; // offset 0x388, size 0x4
    float tmr_restoreHealth; // offset 0x38C, size 0x4
    signed int pete_attack_last; // offset 0x390, size 0x4
    class TubeNotice psynote; // offset 0x394, size 0x8
};
// total size: 0x2A0
class zNPCCommon : public xNPCBasic {
    // Members
public:
    class xEntAsset * entass; // offset 0x1BC, size 0x4
    class xEntNPCAsset * npcass; // offset 0x1C0, size 0x4
    class zNPCSettings * npcsetass; // offset 0x1C4, size 0x4
    signed int flg_vuln; // offset 0x1C8, size 0x4
    signed int flg_move; // offset 0x1CC, size 0x4
    signed int flg_misc; // offset 0x1D0, size 0x4
    signed int flg_able; // offset 0x1D4, size 0x4
    class NPCConfig * cfg_npc; // offset 0x1D8, size 0x4
    class zNPCSettings npcset; // offset 0x1DC, size 0x2C
    class zMovePoint * nav_past; // offset 0x208, size 0x4
    class zMovePoint * nav_curr; // offset 0x20C, size 0x4
    class zMovePoint * nav_dest; // offset 0x210, size 0x4
    class zMovePoint * nav_lead; // offset 0x214, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x218, size 0x4
    float len_mvptspline; // offset 0x21C, size 0x4
    float dst_curspline; // offset 0x220, size 0x4
    class xEntDrive * drv_data; // offset 0x224, size 0x4
    class xPsyche * psy_instinct; // offset 0x228, size 0x4
    class zNPCCommon * npc_duplodude; // offset 0x22C, size 0x4
    float spd_throttle; // offset 0x230, size 0x4
    signed int flg_xtrarend; // offset 0x234, size 0x4
    float tmr_fidget; // offset 0x238, size 0x4
    float tmr_invuln; // offset 0x23C, size 0x4
    class zShrapnelAsset * explosion; // offset 0x240, size 0x4
    class xModelAssetParam * parmdata; // offset 0x244, size 0x4
    unsigned int pdatsize; // offset 0x248, size 0x4
    class zNPCLassoInfo * lassdata; // offset 0x24C, size 0x4
    class NPCSndQueue snd_queue[4]; // offset 0x250, size 0x50
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
// total size: 0x5B4
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
    class xCollis colls[18]; // offset 0xC, size 0x5A0
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5AC, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5B0, size 0x4
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x60
class zFragInfo {
    // Members
public:
    union { // inferred
        class zFragGroup group; // offset 0x0, size 0x54
        class zFragParticle particle; // offset 0x0, size 0x4
        class zFragProjectile projectile; // offset 0x0, size 0x60
        class zFragLightning lightning; // offset 0x0, size 0x10
        class zFragSound sound; // offset 0x0, size 0x14
        class zFragShockwave shockwave; // offset 0x0, size 0x38
    };
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
// total size: 0x84
class zFrag {
    // Members
public:
    enum zFragType type; // offset 0x0, size 0x4
    class zFragInfo info; // offset 0x4, size 0x60
    float delay; // offset 0x64, size 0x4
    float alivetime; // offset 0x68, size 0x4
    float lifetime; // offset 0x6C, size 0x4
    void (* update)(class zFrag *, float); // offset 0x70, size 0x4
    class xModelInstance * parent[2]; // offset 0x74, size 0x8
    class zFrag * prev; // offset 0x7C, size 0x4
    class zFrag * next; // offset 0x80, size 0x4
};
// total size: 0x20
class NPCArena {
    // Members
public:
    signed int flg_arena; // offset 0x0, size 0x4
    class xVec3 pos_arena; // offset 0x4, size 0xC
    float rad_arena; // offset 0x10, size 0x4
    class zMovePoint * nav_arena; // offset 0x14, size 0x4
    class zMovePoint * nav_refer_dest; // offset 0x18, size 0x4
    class zMovePoint * nav_refer_curr; // offset 0x1C, size 0x4
};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
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
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x37C
class zNPCMonsoon : public zNPCRobot {};
// total size: 0x398
class zNPCSleepy : public zNPCRobot {
    // Members
public:
    signed int flg_sleepy; // offset 0x37C, size 0x4
    class NPCHazard * haz_patriot; // offset 0x380, size 0x4
    float tmr_nextPatriot; // offset 0x384, size 0x4
    class RwRGBA rgba_coneColor; // offset 0x388, size 0x4
    float tmr_angry; // offset 0x38C, size 0x4
    float tmr_emitzeez; // offset 0x390, size 0x4
    float cnt_grpzeez; // offset 0x394, size 0x4
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
enum en_LASSO_EVENT {
    LASS_EVNT_BEGIN = 0,
    LASS_EVNT_ENDED = 1,
    LASS_EVNT_GRABSTART = 2,
    LASS_EVNT_GRABEND = 3,
    LASS_EVNT_YANK = 4,
    LASS_EVNT_ABORT = 5,
    LASS_EVNT_NOMORE = 6,
    LASS_EVNT_FORCEINT = 2147483647,
};
// total size: 0x14
class xGridBound {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char ingrid; // offset 0x8, size 0x1
    unsigned char oversize; // offset 0x9, size 0x1
    unsigned char deleted; // offset 0xA, size 0x1
    unsigned char gpad; // offset 0xB, size 0x1
    class xGridBound * * head; // offset 0xC, size 0x4
    class xGridBound * next; // offset 0x10, size 0x4
};
// total size: 0x20
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
};
// total size: 0xD8
struct /* @anon1 */ {};
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
// total size: 0x3A4
class zNPCArfArf : public zNPCRobot {
    // Members
public:
    signed int flg_puppy[5]; // offset 0x37C, size 0x14
    class zNPCArfDog * pup_kennel[5]; // offset 0x390, size 0x14
};
// total size: 0x384
class zNPCFodBomb : public zNPCRobot {
    // Members
public:
    class NPCBlinker blinker; // offset 0x37C, size 0x8
};
// total size: 0x384
class zNPCTubeSlave : public zNPCRobot {
    // Members
public:
    enum en_tubespot tubespot; // offset 0x37C, size 0x4
    class zNPCTubelet * tub_pete; // offset 0x380, size 0x4
};
// total size: 0x388
class zNPCChuck : public zNPCRobot {
    // Members
public:
    class xVec3 dir_attack; // offset 0x37C, size 0xC
};
// total size: 0xC
class _tagEmitOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x6C
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x44
class NPCMsg {
    // Members
public:
    enum en_NPC_MSG_ID msgid; // offset 0x0, size 0x4
    unsigned int sendto; // offset 0x4, size 0x4
    unsigned int from; // offset 0x8, size 0x4
    enum en_NPC_MSG_DATA infotype; // offset 0xC, size 0x4
    union { // inferred
        class NPCSysEvent sysevent; // offset 0x10, size 0x28
        class NPCBlastInfo blastarea; // offset 0x10, size 0x14
        class NPCChatInfo chatter; // offset 0x10, size 0x10
        class NPCSpawnInfo spawning; // offset 0x10, size 0x18
        class NPCTargetInfo target; // offset 0x10, size 0x10
        class NPCDamageInfo dmgdata; // offset 0x10, size 0x14
        class NPCStunInfo stundata; // offset 0x10, size 0xC
        class NPCScriptInfo scriptdata; // offset 0x10, size 0x4
        class NPCMountInfo mountdata; // offset 0x10, size 0x8
        class NPCAreaInfo areadata; // offset 0x10, size 0x10
    };
    void * attached; // offset 0x38, size 0x4
    class NPCMsg * next; // offset 0x3C, size 0x4
    float tmr_delay; // offset 0x40, size 0x4
};
// total size: 0x14
class zCheckPoint {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
// total size: 0x40
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
    unsigned int pad; // offset 0x3C, size 0x4
};
// total size: 0x1940
class zPlayerGlobals {
    // Members
public:
    class zEnt ent; // offset 0x0, size 0xD4
    class xEntShadow entShadow_embedded; // offset 0xD4, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0xFC, size 0x98
    class zGlobalSettings g; // offset 0x194, size 0x150
    class zPlayerSettings * s; // offset 0x2E4, size 0x4
    class zPlayerSettings sb; // offset 0x2F0, size 0x460
    class zPlayerSettings patrick; // offset 0x750, size 0x460
    class zPlayerSettings sandy; // offset 0xBB0, size 0x460
    class xModelInstance * model_spongebob; // offset 0x1010, size 0x4
    class xModelInstance * model_patrick; // offset 0x1014, size 0x4
    class xModelInstance * model_sandy; // offset 0x1018, size 0x4
    unsigned int Visible; // offset 0x101C, size 0x4
    unsigned int Health; // offset 0x1020, size 0x4
    signed int Speed; // offset 0x1024, size 0x4
    float SpeedMult; // offset 0x1028, size 0x4
    signed int Sneak; // offset 0x102C, size 0x4
    signed int Teeter; // offset 0x1030, size 0x4
    float SlipFadeTimer; // offset 0x1034, size 0x4
    signed int Slide; // offset 0x1038, size 0x4
    float SlideTimer; // offset 0x103C, size 0x4
    signed int Stepping; // offset 0x1040, size 0x4
    signed int JumpState; // offset 0x1044, size 0x4
    signed int LastJumpState; // offset 0x1048, size 0x4
    float JumpTimer; // offset 0x104C, size 0x4
    float LookAroundTimer; // offset 0x1050, size 0x4
    unsigned int LookAroundRand; // offset 0x1054, size 0x4
    unsigned int LastProjectile; // offset 0x1058, size 0x4
    float DecelRun; // offset 0x105C, size 0x4
    float DecelRunSpeed; // offset 0x1060, size 0x4
    float HotsauceTimer; // offset 0x1064, size 0x4
    float LeanLerp; // offset 0x1068, size 0x4
    float ScareTimer; // offset 0x106C, size 0x4
    class xBase * ScareSource; // offset 0x1070, size 0x4
    float CowerTimer; // offset 0x1074, size 0x4
    float DamageTimer; // offset 0x1078, size 0x4
    float SundaeTimer; // offset 0x107C, size 0x4
    float ControlOffTimer; // offset 0x1080, size 0x4
    float HelmetTimer; // offset 0x1084, size 0x4
    unsigned int WorldDisguise; // offset 0x1088, size 0x4
    unsigned int Bounced; // offset 0x108C, size 0x4
    float FallDeathTimer; // offset 0x1090, size 0x4
    float HeadbuttVel; // offset 0x1094, size 0x4
    float HeadbuttTimer; // offset 0x1098, size 0x4
    unsigned int SpecialReceived; // offset 0x109C, size 0x4
    class xEnt * MountChimney; // offset 0x10A0, size 0x4
    float MountChimOldY; // offset 0x10A4, size 0x4
    unsigned int MaxHealth; // offset 0x10A8, size 0x4
    unsigned int DoMeleeCheck; // offset 0x10AC, size 0x4
    float VictoryTimer; // offset 0x10B0, size 0x4
    float BadGuyNearTimer; // offset 0x10B4, size 0x4
    float ForceSlipperyTimer; // offset 0x10B8, size 0x4
    float ForceSlipperyFriction; // offset 0x10BC, size 0x4
    float ShockRadius; // offset 0x10C0, size 0x4
    float ShockRadiusOld; // offset 0x10C4, size 0x4
    float Face_ScareTimer; // offset 0x10C8, size 0x4
    unsigned int Face_ScareRandom; // offset 0x10CC, size 0x4
    unsigned int Face_Event; // offset 0x10D0, size 0x4
    float Face_EventTimer; // offset 0x10D4, size 0x4
    float Face_PantTimer; // offset 0x10D8, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x10DC, size 0x4
    unsigned int IdleRand; // offset 0x10E0, size 0x4
    float IdleMinorTimer; // offset 0x10E4, size 0x4
    float IdleMajorTimer; // offset 0x10E8, size 0x4
    float IdleSitTimer; // offset 0x10EC, size 0x4
    signed int Transparent; // offset 0x10F0, size 0x4
    class zEnt * FireTarget; // offset 0x10F4, size 0x4
    unsigned int ControlOff; // offset 0x10F8, size 0x4
    unsigned int ControlOnEvent; // offset 0x10FC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1100, size 0x4
    float AutoMoveDist; // offset 0x1104, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1108, size 0xC
    class xBase * AutoMoveObject; // offset 0x1114, size 0x4
    class zEnt * Diggable; // offset 0x1118, size 0x4
    float DigTimer; // offset 0x111C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1120, size 0xE0
    class zPlayerLassoInfo lassoInfo; // offset 0x1200, size 0x120
    class xModelTag BubbleWandTag[2]; // offset 0x1320, size 0x40
    class xModelInstance * model_wand; // offset 0x1360, size 0x4
    class xEntBoulder * bubblebowl; // offset 0x1364, size 0x4
    float bbowlInitVel; // offset 0x1368, size 0x4
    class zEntHangable * HangFound; // offset 0x136C, size 0x4
    class zEntHangable * HangEnt; // offset 0x1370, size 0x4
    class zEntHangable * HangEntLast; // offset 0x1374, size 0x4
    class xVec3 HangPivot; // offset 0x1378, size 0xC
    class xVec3 HangVel; // offset 0x1384, size 0xC
    float HangLength; // offset 0x1390, size 0x4
    class xVec3 HangStartPos; // offset 0x1394, size 0xC
    float HangStartLerp; // offset 0x13A0, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x13A4, size 0x80
    float HangPawOffset; // offset 0x1424, size 0x4
    float HangElapsed; // offset 0x1428, size 0x4
    float Jump_CurrGravity; // offset 0x142C, size 0x4
    float Jump_HoldTimer; // offset 0x1430, size 0x4
    float Jump_ChangeTimer; // offset 0x1434, size 0x4
    signed int Jump_CanDouble; // offset 0x1438, size 0x4
    signed int Jump_CanFloat; // offset 0x143C, size 0x4
    signed int Jump_SpringboardStart; // offset 0x1440, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x1444, size 0x4
    signed int CanJump; // offset 0x1448, size 0x4
    signed int CanBubbleSpin; // offset 0x144C, size 0x4
    signed int CanBubbleBounce; // offset 0x1450, size 0x4
    signed int CanBubbleBash; // offset 0x1454, size 0x4
    signed int IsJumping; // offset 0x1458, size 0x4
    signed int IsDJumping; // offset 0x145C, size 0x4
    signed int IsBubbleSpinning; // offset 0x1460, size 0x4
    signed int IsBubbleBouncing; // offset 0x1464, size 0x4
    signed int IsBubbleBashing; // offset 0x1468, size 0x4
    signed int IsBubbleBowling; // offset 0x146C, size 0x4
    signed int WasDJumping; // offset 0x1470, size 0x4
    signed int IsCoptering; // offset 0x1474, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x1478, size 0x4
    signed int cheat_mode; // offset 0x147C, size 0x4
    unsigned int Inv_Shiny; // offset 0x1480, size 0x4
    unsigned int Inv_Spatula; // offset 0x1484, size 0x4
    unsigned int Inv_PatsSock[15]; // offset 0x1488, size 0x3C
    unsigned int Inv_PatsSock_Max[15]; // offset 0x14C4, size 0x3C
    unsigned int Inv_PatsSock_CurrentLevel; // offset 0x1500, size 0x4
    unsigned int Inv_LevelPickups[15]; // offset 0x1504, size 0x3C
    unsigned int Inv_LevelPickups_CurrentLevel; // offset 0x1540, size 0x4
    unsigned int Inv_PatsSock_Total; // offset 0x1544, size 0x4
    class xModelTag BubbleTag; // offset 0x1548, size 0x20
    class xEntDrive drv; // offset 0x1568, size 0x7C
    class xSurface * floor_surf; // offset 0x15E4, size 0x4
    class xVec3 floor_norm; // offset 0x15E8, size 0xC
    signed int slope; // offset 0x15F4, size 0x4
    class xCollis earc_coll; // offset 0x15F8, size 0x50
    class xSphere head_sph; // offset 0x1648, size 0x10
    class xModelTag center_tag; // offset 0x1658, size 0x20
    class xModelTag head_tag; // offset 0x1678, size 0x20
    unsigned int TongueFlags[2]; // offset 0x1698, size 0x8
    class xVec3 RootUp; // offset 0x16A0, size 0xC
    class xVec3 RootUpTarget; // offset 0x16AC, size 0xC
    class zCheckPoint cp; // offset 0x16B8, size 0x14
    unsigned int SlideTrackSliding; // offset 0x16CC, size 0x4
    unsigned int SlideTrackCount; // offset 0x16D0, size 0x4
    class xEnt * SlideTrackEnt[111]; // offset 0x16D4, size 0x1BC
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1890, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1894, size 0xC
    class xVec3 SlideTrackVel; // offset 0x18A0, size 0xC
    float SlideTrackDecay; // offset 0x18AC, size 0x4
    float SlideTrackLean; // offset 0x18B0, size 0x4
    float SlideTrackLand; // offset 0x18B4, size 0x4
    unsigned char sb_model_indices[14]; // offset 0x18B8, size 0xE
    class xModelInstance * sb_models[14]; // offset 0x18C8, size 0x38
    unsigned int currentPlayer; // offset 0x1900, size 0x4
    class xVec3 PredictRotate; // offset 0x1904, size 0xC
    class xVec3 PredictTranslate; // offset 0x1910, size 0xC
    float PredictAngV; // offset 0x191C, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1920, size 0xC
    float PredictCurrVel; // offset 0x192C, size 0x4
    float KnockBackTimer; // offset 0x1930, size 0x4
    float KnockIntoAirTimer; // offset 0x1934, size 0x4
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
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @anon2 */ {};
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
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x44
class HAZCatProd : public HAZBall {
    // Members
public:
    class zLightning * zap_lyta; // offset 0x3C, size 0x4
    class zLightning * zap_lytb; // offset 0x40, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
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
    unsigned char pad[2]; // offset 0x25, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
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
// total size: 0x220
class /* @class */ {
    // Members
public:
    class xVec3 base_point[16]; // offset 0x0, size 0xC0
    class xVec3 point[16]; // offset 0xC0, size 0xC0
    signed short total_points; // offset 0x180, size 0x2
    signed short end_points; // offset 0x182, size 0x2
    float arc_height; // offset 0x184, size 0x4
    class xVec3 arc_normal; // offset 0x188, size 0xC
    float thickness[16]; // offset 0x194, size 0x40
    union { // inferred
        class _tagLightningLine line; // offset 0x1D4, size 0x4
        class _tagLightningRot rot; // offset 0x1D4, size 0x48
        class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
    };
    float rand_radius; // offset 0x21C, size 0x4
};
// total size: 0x7C
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
    class xEnt * odriver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 op; // offset 0x28, size 0xC
    class xVec3 p; // offset 0x34, size 0xC
    class xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x5C, size 0x20
};
// total size: 0x28
class xEntShadow {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
};
enum en_NPC_GOAL_SPOT {
    NPC_GSPOT_START = 32,
    NPC_GSPOT_RESUME = 33,
    NPC_GSPOT_FINISH = 34,
    NPC_GSPOT_STARTALT = 35,
    NPC_GSPOT_ALTA = 36,
    NPC_GSPOT_ALTB = 37,
    NPC_GSPOT_PATROLPAUSE = 38,
    NPC_GSPOT_NOMORE = 39,
    NPC_GSPOT_FORCEINT = 2147483647,
};
// total size: 0x70
class xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_ents; // offset 0x6, size 0x2
    unsigned short num_trigs; // offset 0x8, size 0x2
    unsigned short num_stats; // offset 0xA, size 0x2
    unsigned short num_dyns; // offset 0xC, size 0x2
    unsigned short num_npcs; // offset 0xE, size 0x2
    unsigned short num_act_ents; // offset 0x10, size 0x2
    unsigned short num_nact_ents; // offset 0x12, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short num_ents_allocd; // offset 0x20, size 0x2
    unsigned short num_trigs_allocd; // offset 0x22, size 0x2
    unsigned short num_stats_allocd; // offset 0x24, size 0x2
    unsigned short num_dyns_allocd; // offset 0x26, size 0x2
    unsigned short num_npcs_allocd; // offset 0x28, size 0x2
    class xEnt * * trigs; // offset 0x2C, size 0x4
    class xEnt * * stats; // offset 0x30, size 0x4
    class xEnt * * dyns; // offset 0x34, size 0x4
    class xEnt * * npcs; // offset 0x38, size 0x4
    class xEnt * * act_ents; // offset 0x3C, size 0x4
    class xEnt * * nact_ents; // offset 0x40, size 0x4
    class xEnv * env; // offset 0x44, size 0x4
    class xMemPool mempool; // offset 0x48, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x20
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
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
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
// total size: 0x37C
class zNPCGlove : public zNPCRobot {};
// total size: 0x78
class zParEmitter : public xParEmitter {};
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
// total size: 0x54
class xEntAsset : public xBaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned char pad; // offset 0xC, size 0x1
    unsigned int surfaceID; // offset 0x10, size 0x4
    class xVec3 ang; // offset 0x14, size 0xC
    class xVec3 pos; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    float redMult; // offset 0x38, size 0x4
    float greenMult; // offset 0x3C, size 0x4
    float blueMult; // offset 0x40, size 0x4
    float seeThru; // offset 0x44, size 0x4
    float seeThruSpeed; // offset 0x48, size 0x4
    unsigned int modelInfoID; // offset 0x4C, size 0x4
    unsigned int animListID; // offset 0x50, size 0x4
};
// total size: 0xE0
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
    float throwMinHeight; // offset 0x74, size 0x4
    float throwMaxHeight; // offset 0x78, size 0x4
    float throwMaxStack; // offset 0x7C, size 0x4
    float throwMaxCosAngle; // offset 0x80, size 0x4
    float throwTargetRotRate; // offset 0x84, size 0x4
    float targetRot; // offset 0x88, size 0x4
    unsigned int grabTarget; // offset 0x8C, size 0x4
    class xVec3 grabOffset; // offset 0x90, size 0xC
    float grabLerpMin; // offset 0x9C, size 0x4
    float grabLerpMax; // offset 0xA0, size 0x4
    float grabLerpLast; // offset 0xA4, size 0x4
    unsigned int grabYclear; // offset 0xA8, size 0x4
    float throwGravity; // offset 0xAC, size 0x4
    float throwHeight; // offset 0xB0, size 0x4
    float throwDistance; // offset 0xB4, size 0x4
    float fruitFloorDecayMin; // offset 0xB8, size 0x4
    float fruitFloorDecayMax; // offset 0xBC, size 0x4
    float fruitFloorBounce; // offset 0xC0, size 0x4
    float fruitFloorFriction; // offset 0xC4, size 0x4
    float fruitCeilingBounce; // offset 0xC8, size 0x4
    float fruitWallBounce; // offset 0xCC, size 0x4
    float fruitLifetime; // offset 0xD0, size 0x4
    class xEnt * patLauncher; // offset 0xD4, size 0x4
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
// total size: 0x4
class zFragParticle {
    // Members
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
// total size: 0x2C
class xEntMotionMechData {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    float sld_dist; // offset 0x4, size 0x4
    float sld_tm; // offset 0x8, size 0x4
    float sld_acc_tm; // offset 0xC, size 0x4
    float sld_dec_tm; // offset 0x10, size 0x4
    float rot_dist; // offset 0x14, size 0x4
    float rot_tm; // offset 0x18, size 0x4
    float rot_acc_tm; // offset 0x1C, size 0x4
    float rot_dec_tm; // offset 0x20, size 0x4
    float ret_delay; // offset 0x24, size 0x4
    float post_ret_delay; // offset 0x28, size 0x4
};
// total size: 0x460
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
};
// total size: 0xD8
struct /* @anon3 */ {};
// total size: 0x4C
class zFragSoundAsset : public zFragAsset {
    // Members
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
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
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
enum en_NPC_CARRY_STATE {
    zNPCCARRY_NONE = 0,
    zNPCCARRY_PICKUP = 1,
    zNPCCARRY_THROW = 2,
    zNPCCARRY_ATTEMPTPICKUP = 3,
    zNPCCARRY_FORCEINT = 2147483647,
};
// total size: 0x18
class NPCSpawnInfo {
    // Members
public:
    class xVec3 pos_spawn; // offset 0x0, size 0xC
    class zMovePoint * nav_firstMovepoint; // offset 0xC, size 0x4
    class zMovePoint * nav_spawnReference; // offset 0x10, size 0x4
    signed int spawnSuccess; // offset 0x14, size 0x4
};
// total size: 0x18
class zNPCLassoInfo {
    // Members
public:
    enum en_LASSO_STATUS stage; // offset 0x0, size 0x4
    class xEnt * lassoee; // offset 0x4, size 0x4
    class xAnimState * holdGuideAnim; // offset 0x8, size 0x4
    class xModelInstance * holdGuideModel; // offset 0xC, size 0x4
    class xAnimState * grabGuideAnim; // offset 0x10, size 0x4
    class xModelInstance * grabGuideModel; // offset 0x14, size 0x4
};
// total size: 0x0
class zEntHangable {};
// total size: 0xD4
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
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
// total size: 0x50
class xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    class xVec3 norm; // offset 0x14, size 0xC
    class xVec3 tohit; // offset 0x20, size 0xC
    class xVec3 depen; // offset 0x2C, size 0xC
    class xVec3 hdng; // offset 0x38, size 0xC
    union { // inferred
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x44, size 0xC
        class tri_data tri; // offset 0x44, size 0xC
    };
};
// total size: 0x1D4
class zFragParticleAsset : public zFragAsset {
    // Members
public:
    class zFragLocation source; // offset 0x18, size 0x24
    class zFragLocation vel; // offset 0x3C, size 0x24
    class xParEmitterCustomSettings emit; // offset 0x60, size 0x16C
    unsigned int parEmitterID; // offset 0x1CC, size 0x4
    class zParEmitter * parEmitter; // offset 0x1D0, size 0x4
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
// total size: 0x6C
class zNPCGoalLoopAnim : public zNPCGoalCommon {
    // Members
public:
    signed int flg_loopanim; // offset 0x4C, size 0x4
    unsigned int anid_stage[3]; // offset 0x50, size 0xC
    signed int cnt_loop; // offset 0x5C, size 0x4
    float lastAnimTime; // offset 0x60, size 0x4
    unsigned int origAnimFlags; // offset 0x64, size 0x4
    unsigned int animWeMolested; // offset 0x68, size 0x4
};
// total size: 0x37C
class zNPCFodder : public zNPCRobot {};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
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
// total size: 0x48
class xEntBoulderAsset {
    // Members
public:
    float gravity; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    float bounce; // offset 0x8, size 0x4
    float friction; // offset 0xC, size 0x4
    float statFric; // offset 0x10, size 0x4
    float maxVel; // offset 0x14, size 0x4
    float maxAngVel; // offset 0x18, size 0x4
    float stickiness; // offset 0x1C, size 0x4
    float bounceDamp; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    float killtimer; // offset 0x28, size 0x4
    unsigned int hitpoints; // offset 0x2C, size 0x4
    unsigned int soundID; // offset 0x30, size 0x4
    float volume; // offset 0x34, size 0x4
    float minSoundVel; // offset 0x38, size 0x4
    float maxSoundVel; // offset 0x3C, size 0x4
    float innerRadius; // offset 0x40, size 0x4
    float outerRadius; // offset 0x44, size 0x4
};
// total size: 0x4C
class zNPCGoalCommon : public xGoal {
    // Members
public:
    signed int flg_npcgauto; // offset 0x3C, size 0x4
    signed int flg_npcgable; // offset 0x40, size 0x4
    unsigned int anid_played; // offset 0x44, size 0x4
    signed int flg_info : 16; // offset 0x48, size 0x4
    signed int flg_user : 16; // offset 0x48, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
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
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x0
class zCutsceneMgr {};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x37C
class zNPCHammer : public zNPCRobot {};
// total size: 0xD8
struct /* @anon4 */ {};
// total size: 0x14
class NPCBattle {
    // Members
public:
    class zNPCRobot * members[5]; // offset 0x0, size 0x14
};
// total size: 0xD8
struct /* @anon5 */ {};
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
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
// total size: 0x78
class zNPCGoalWander : public zNPCGoalCommon {
    // Members
public:
    signed int flg_wand; // offset 0x4C, size 0x4
    float tmr_remain; // offset 0x50, size 0x4
    float rad_wand; // offset 0x54, size 0x4
    class xVec3 pos_home; // offset 0x58, size 0xC
    float tmr_minwalk; // offset 0x64, size 0x4
    float tmr_newdir; // offset 0x68, size 0x4
    class xVec3 dir_cur; // offset 0x6C, size 0xC
};
// total size: 0x0
class xFFX {};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x14
class xParInterp {
    // Members
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0xD8
struct /* @anon6 */ {};
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x0
class xParSys {};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xD8
struct /* @anon7 */ {};
// total size: 0x4
class HAZMissile {
    // Members
public:
    float vel; // offset 0x0, size 0x4
};
// total size: 0x330
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
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
};
// total size: 0x0
class xModelAssetParam {};
// total size: 0x4
class _tagLightningLine {
    // Members
public:
    float unused; // offset 0x0, size 0x4
};
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
class NPCBlinker {
    // Members
public:
    float tmr_uvcell; // offset 0x0, size 0x4
    signed int idx_uvcell; // offset 0x4, size 0x4
};
// total size: 0x148
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
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
// total size: 0x60
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
    float parentScale; // offset 0x40, size 0x4
    float alpha; // offset 0x44, size 0x4
    class xVec3 N; // offset 0x48, size 0xC
    class xVec3 axis; // offset 0x54, size 0xC
};
// total size: 0x74
class zNPCGoalWaiting : public zNPCGoalLoopAnim {
    // Members
public:
    signed int flg_waiting; // offset 0x6C, size 0x4
    float tmr_waiting; // offset 0x70, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x90
class zFragProjectileAsset : public zFragAsset {
    // Members
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    class RpAtomic * modelFile; // offset 0x1C, size 0x4
    class zFragLocation launch; // offset 0x20, size 0x24
    class zFragLocation vel; // offset 0x44, size 0x24
    float bounce; // offset 0x68, size 0x4
    signed int maxBounces; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
    unsigned int childID; // offset 0x74, size 0x4
    class zShrapnelAsset * child; // offset 0x78, size 0x4
    float minScale; // offset 0x7C, size 0x4
    float maxScale; // offset 0x80, size 0x4
    unsigned int scaleCurveID; // offset 0x84, size 0x4
    class xCurveAsset * scaleCurve; // offset 0x88, size 0x4
    float gravity; // offset 0x8C, size 0x4
};
// total size: 0x1
class RyzMemData {};
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
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
enum en_NPC_MSG_ID {
    NPC_MID_NONE = 0,
    NPC_MID_SYSEVENT = 1,
    NPC_MID_RESPAWN = 2,
    NPC_MID_DAMAGE = 3,
    NPC_MID_EXPLOSION = 4,
    NPC_MID_BUNNYHOP = 5,
    NPC_MID_DTRON_NPCEMIT = 6,
    NPC_MID_DTRON_NPCAVAIL = 7,
    NPC_MID_DTRON_ISDEAD = 8,
    NPC_MID_CHAT_REQUEST = 9,
    NPC_MID_CHAT_DECLINE = 10,
    NPC_MID_CHAT_ACCEPT = 11,
    NPC_MID_CHAT_DONE = 12,
    NPC_MID_CHAT_ABORT = 13,
    NPC_MID_TALKSTART = 14,
    NPC_MID_TALKON = 15,
    NPC_MID_TALKOFF = 16,
    NPC_MID_SAWPLYR = 17,
    NPC_MID_NEEDMEDIC = 18,
    NPC_MID_UNDERATTACK = 19,
    NPC_MID_NPCDIED = 20,
    NPC_MID_PLYRSPATULA = 21,
    NPC_MID_BECOMESCARED = 22,
    NPC_MID_NOLONGERSCARED = 23,
    NPC_MID_CELEBRATE = 24,
    NPC_MID_STUN = 25,
    NPC_MID_SCRIPTBEGIN = 26,
    NPC_MID_SCRIPTEND = 27,
    NPC_MID_SCRIPTHALT = 28,
    NPC_MID_DEV_ANIMSPIN = 29,
    NPC_MID_DEV_ANIMCYCLE = 30,
    NPC_MID_DEV_HEROMODE = 31,
    NPC_MID_DEV_DONE = 32,
    NPC_MID_NOMORE = 33,
    NPC_MID_FORCE = 2147483647,
};
// total size: 0x124
class zPlatFMRunTime {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[12]; // offset 0x4, size 0x30
    float ttms[12]; // offset 0x34, size 0x30
    float atms[12]; // offset 0x64, size 0x30
    float dtms[12]; // offset 0x94, size 0x30
    float vms[12]; // offset 0xC4, size 0x30
    float dss[12]; // offset 0xF4, size 0x30
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x37C
class zNPCCritter : public zNPCRobot {};
// total size: 0xA4
class /* @class */ {
    // Members
public:
    union { // inferred
        class HAZTypical typical; // offset 0x0, size 0x3C
        class HAZCollide collide; // offset 0x0, size 0x84
        class HAZBall ball; // offset 0x0, size 0x3C
        class HAZRing ring; // offset 0x0, size 0x40
        class HAZShroom shroom; // offset 0x0, size 0x54
        class HAZCloud cloud; // offset 0x0, size 0x68
        class HAZPatriot patriot; // offset 0x0, size 0x1C
        class HAZTarTar tartar; // offset 0x0, size 0xA4
        class HAZCatProd catprod; // offset 0x0, size 0x44
    };
};
enum en_SM_NOTICES {
    SM_NOTE_NPCDIED = 0,
    SM_NOTE_NPCSTANDBY = 1,
    SM_NOTE_NPCALIVE = 2,
    SM_NOTE_DUPPAUSE = 3,
    SM_NOTE_DUPRESUME = 4,
    SM_NOTE_DUPSETDELAY = 5,
    SM_NOTE_DUPDEAD = 6,
    SM_NOTE_KILLKIDS = 7,
    SM_NOTE_NOMORE = 8,
    SM_NOTE_FORCE = 2147483647,
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x14
class NPCSndQueue {
    // Members
public:
    unsigned int sndDirect; // offset 0x0, size 0x4
    enum en_NPC_SOUND sndtype; // offset 0x4, size 0x4
    signed int flg_snd; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
};
// total size: 0x80
class xEntMotion {
    // Members
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x4
        class xEntMPData mp; // offset 0x20, size 0x40
        class xEntMechData mech; // offset 0x20, size 0x4C
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0x70, size 0x4
    class xEnt * target; // offset 0x74, size 0x4
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
// total size: 0x0
class xCurveAsset {};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x0
class xPlatformAsset {};
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
// total size: 0xC
struct /* @anon8 */ {};
// total size: 0x10
class NPCTargetInfo {
    // Members
public:
    class xBase * bas_tgt; // offset 0x0, size 0x4
    class xVec3 pos_tgt; // offset 0x4, size 0xC
};
// total size: 0x30
class xEntMotionAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0x4
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x2C
        class xEntMotionPenData pen; // offset 0x4, size 0x14
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
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char platData; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
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
enum en_tubestat {
    TUBE_STAT_UNKNOWN = 0,
    TUBE_STAT_DUCKLING = 1,
    TUBE_STAT_ATTACK = 2,
    TUBE_STAT_LASSO = 3,
    TUBE_STAT_DYING = 4,
    TUBE_STAT_DEAD = 5,
    TUBE_STAT_BORN = 6,
    TUBE_STAT_NOMORE = 7,
    TUBE_STAT_FORCE = 2147483647,
};
// total size: 0xE4
class NPCHazard {
    // Members
public:
    enum en_npchaz typ_hazard; // offset 0x0, size 0x4
    signed int flg_hazard; // offset 0x4, size 0x4
    class xVec3 pos_hazard; // offset 0x8, size 0xC
    class xModelInstance * mdl_hazard; // offset 0x14, size 0x4
    class UVAModelInfo * uva_uvanim; // offset 0x18, size 0x4
    float tym_lifespan; // offset 0x1C, size 0x4
    float tmr_remain; // offset 0x20, size 0x4
    float pam_interp; // offset 0x24, size 0x4
    union { // inferred
        float tmr_generic; // offset 0x28, size 0x4
        float tmr_nextglob; // offset 0x28, size 0x4
    };
    union { // inferred
        signed int cnt_generic; // offset 0x2C, size 0x4
        signed int cnt_nextemit; // offset 0x2C, size 0x4
        signed int flg_casthurt; // offset 0x2C, size 0x4
    };
    // total size: 0xA4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class HAZTypical typical; // offset 0x0, size 0x3C
            class HAZCollide collide; // offset 0x0, size 0x84
            class HAZBall ball; // offset 0x0, size 0x3C
            class HAZRing ring; // offset 0x0, size 0x40
            class HAZShroom shroom; // offset 0x0, size 0x54
            class HAZCloud cloud; // offset 0x0, size 0x68
            class HAZPatriot patriot; // offset 0x0, size 0x1C
            class HAZTarTar tartar; // offset 0x0, size 0xA4
            class HAZCatProd catprod; // offset 0x0, size 0x44
        };
    } custdata; // offset 0x30, size 0xA4
    class HAZNotify * cb_notify; // offset 0xD4, size 0x4
    class zNPCCommon * npc_owner; // offset 0xD8, size 0x4
    class NPCHazard * haz_parent; // offset 0xDC, size 0x4
    class xShadowCache * shadowCache; // offset 0xE0, size 0x4
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
// total size: 0x4
class xPSYNote {};
// total size: 0x1C
class HAZPatriot : public HAZMissile {
    // Members
public:
    class xVec3 pos_began; // offset 0x4, size 0xC
    float spd_peak; // offset 0x10, size 0x4
    float spd_curr; // offset 0x14, size 0x4
    float acc_rate; // offset 0x18, size 0x4
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
// total size: 0x18
class xBehaveMgr : public RyzMemData {
    // Members
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
enum _CurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerSandy = 2,
    eCurrentPlayerCount = 3,
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
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
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
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x90
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
    class RpMeshHeader * mesh; // offset 0x80, size 0x4
    class RxPipeline * pipeline; // offset 0x84, size 0x4
    unsigned short matListWindowBase; // offset 0x88, size 0x2
    unsigned short numVertices; // offset 0x8A, size 0x2
    unsigned short numPolygons; // offset 0x8C, size 0x2
    unsigned short pad; // offset 0x8E, size 0x2
};
// total size: 0x2C8
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int num_update_base; // offset 0x7C, size 0x4
    class xBase * * update_base; // offset 0x80, size 0x4
    unsigned int baseCount[72]; // offset 0x84, size 0x120
    class xBase * baseList[72]; // offset 0x1A4, size 0x120
    class _zEnv * zen; // offset 0x2C4, size 0x4
};
// total size: 0x44
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
    float padF1; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
};
// total size: 0x48
class _tagLightningRot {
    // Members
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
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
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
// total size: 0xD8
struct /* @anon9 */ {};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
// total size: 0x3C
class HAZTypical {
    // Members
public:
    class xMat3x3 mat_rotDelta; // offset 0x0, size 0x30
    float rad_min; // offset 0x30, size 0x4
    float rad_max; // offset 0x34, size 0x4
    float rad_cur; // offset 0x38, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class xEntSplineData {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
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
// total size: 0xD8
struct /* @anon10 */ {};
// total size: 0xD8
struct /* @anon11 */ {};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x50
class zNPCGoalDamage : public zNPCGoalCommon {
    // Members
public:
    signed int flg_howtodie; // offset 0x4C, size 0x4
};
// total size: 0x700
class xGlobals {
    // Members
public:
    class xCamera camera; // offset 0x0, size 0x330
    class _tagxPad * pad0; // offset 0x330, size 0x4
    class _tagxPad * pad1; // offset 0x334, size 0x4
    class _tagxPad * pad2; // offset 0x338, size 0x4
    class _tagxPad * pad3; // offset 0x33C, size 0x4
    signed int profile; // offset 0x340, size 0x4
    char profFunc[6][128]; // offset 0x344, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x644, size 0x4
    signed int sceneFirst; // offset 0x648, size 0x4
    char sceneStart[32]; // offset 0x64C, size 0x20
    class RpWorld * currWorld; // offset 0x66C, size 0x4
    class iFogParams fog; // offset 0x670, size 0x1C
    class iFogParams fogA; // offset 0x68C, size 0x1C
    class iFogParams fogB; // offset 0x6A8, size 0x1C
    signed long fog_t0; // offset 0x6C8, size 0x4
    signed long fog_t1; // offset 0x6D0, size 0x4
    signed int option_vibration; // offset 0x6D8, size 0x4
    unsigned int QuarterSpeed; // offset 0x6DC, size 0x4
    float update_dt; // offset 0x6E0, size 0x4
    signed int useHIPHOP; // offset 0x6E4, size 0x4
    unsigned char NoMusic; // offset 0x6E8, size 0x1
    char currentActivePad; // offset 0x6E9, size 0x1
    unsigned char firstStartPressed; // offset 0x6EA, size 0x1
    unsigned int minVSyncCnt; // offset 0x6EC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x6F0, size 0x1
    unsigned char autoSaveFeature; // offset 0x6F1, size 0x1
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
    class xVec3 dpos; // offset 0xBC, size 0xC
    class xVec3 dvel; // offset 0xC8, size 0xC
    class xVec3 vel; // offset 0xD4, size 0xC
    unsigned int mode; // offset 0xE0, size 0x4
};
// total size: 0x1BC
class xNPCBasic : public xEnt, public xFactoryInst {
    // Members
public:
    void (* f_setup)(class xEnt *); // offset 0xDC, size 0x4
    void (* f_reset)(class xEnt *); // offset 0xE0, size 0x4
    signed int flg_basenpc : 16; // offset 0xE4, size 0x4
    signed int inUpdate : 8; // offset 0xE4, size 0x4
    signed int flg_upward : 8; // offset 0xE4, size 0x4
    signed int colFreq; // offset 0xE8, size 0x4
    signed int colFreqReset; // offset 0xEC, size 0x4
    unsigned int flg_colCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_penCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_unused : 16; // offset 0xF0, size 0x4
    signed int myNPCType; // offset 0xF4, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xF8, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0x120, size 0x98
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
// total size: 0x4C
class zNPCGoalEvilPat : public zNPCGoalCommon {};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
enum en_hazcol {
    HAZ_COLTYP_STAT = 0,
    HAZ_COLTYP_DYN = 1,
    HAZ_COLTYP_NPC = 2,
    HAZ_COLTYP_NOMORE = 3,
    HAZ_COLTYP_FORCE = 2147483647,
};
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
// total size: 0x2C
class zNPCSettings : public xDynAsset {
    // Members
public:
    enum en_npcbtyp basisType; // offset 0x10, size 0x4
    char allowDetect; // offset 0x14, size 0x1
    char allowPatrol; // offset 0x15, size 0x1
    char allowWander; // offset 0x16, size 0x1
    char reduceCollide; // offset 0x17, size 0x1
    char useNavSplines; // offset 0x18, size 0x1
    char pad[3]; // offset 0x19, size 0x3
    char allowChase; // offset 0x1C, size 0x1
    char allowAttack; // offset 0x1D, size 0x1
    char assumeLOS; // offset 0x1E, size 0x1
    char assumeFOV; // offset 0x1F, size 0x1
    enum en_dupowavmod duploWaveMode; // offset 0x20, size 0x4
    float duploSpawnDelay; // offset 0x24, size 0x4
    signed int duploSpawnLifeMax; // offset 0x28, size 0x4
};
// total size: 0x50
class zNPCGoalIdle : public zNPCGoalCommon {
    // Members
public:
    signed int flg_idle; // offset 0x4C, size 0x4
};
// total size: 0x14
class NPCDamageInfo {
    // Members
public:
    enum en_NPC_DAMAGE_TYPE dmg_type; // offset 0x0, size 0x4
    class xBase * dmg_from; // offset 0x4, size 0x4
    class xVec3 vec_dmghit; // offset 0x8, size 0xC
};
// total size: 0xFC
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
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
};
// total size: 0x50
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
// total size: 0x58
class /* @class */ {
    // Members
public:
    class xVec3 endPoint[2]; // offset 0x0, size 0x18
    class xVec3 direction; // offset 0x18, size 0xC
    float length; // offset 0x24, size 0x4
    float scale; // offset 0x28, size 0x4
    float width; // offset 0x2C, size 0x4
    float endParam[2]; // offset 0x30, size 0x8
    float endVel[2]; // offset 0x38, size 0x8
    float paramSpan[2]; // offset 0x40, size 0x8
    float arc_height; // offset 0x48, size 0x4
    class xVec3 arc_normal; // offset 0x4C, size 0xC
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
// total size: 0x84
class HAZCollide : public HAZTypical {
    // Members
public:
    class xVec3 pos_collide; // offset 0x3C, size 0xC
    class xVec3 dir_normal; // offset 0x48, size 0xC
    class xParabola parabinfo; // offset 0x54, size 0x24
    signed int flg_collide : 8; // offset 0x78, size 0x4
    signed int flg_result : 8; // offset 0x78, size 0x4
    signed int flg_unused : 16; // offset 0x78, size 0x4
    signed int cnt_skipcol; // offset 0x7C, size 0x4
    enum en_hazcol idx_rotateCol; // offset 0x80, size 0x4
};
// total size: 0x10
class zFragLightning {
    // Members
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x210
class zPlatform : public zEnt {
    // Members
public:
    class xPlatformAsset * passet; // offset 0xD4, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0x80
    unsigned short state; // offset 0x160, size 0x2
    unsigned short plat_flags; // offset 0x162, size 0x2
    float tmr; // offset 0x164, size 0x4
    signed int ctr; // offset 0x168, size 0x4
    class xMovePoint * src; // offset 0x16C, size 0x4
    class xModelInstance * am; // offset 0x170, size 0x4
    class xModelInstance * bm; // offset 0x174, size 0x4
    signed int moving; // offset 0x178, size 0x4
    class xEntDrive drv; // offset 0x17C, size 0x7C
    class zPlatFMRunTime * fmrt; // offset 0x1F8, size 0x4
    float pauseMult; // offset 0x1FC, size 0x4
    float pauseDelta; // offset 0x200, size 0x4
};
// total size: 0x40
class xEntMPData {
    // Members
public:
    float curdist; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    class xMovePoint * dest; // offset 0x8, size 0x4
    class xMovePoint * src; // offset 0xC, size 0x4
    class xSpline3 * spl; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
    unsigned int padalign; // offset 0x18, size 0x4
    class xQuat aquat; // offset 0x20, size 0x10
    class xQuat bquat; // offset 0x30, size 0x10
};
enum en_mdlvert {
    NPC_MDLVERT_ATTACKBASE = 0,
    NPC_MDLVERT_ATTACK = 1,
    NPC_MDLVERT_ATTACK1 = 2,
    NPC_MDLVERT_ATTACK2 = 3,
    NPC_MDLVERT_ATTACK3 = 4,
    NPC_MDLVERT_ATTACK4 = 5,
    NPC_MDLVERT_LOSEYEBALL = 6,
    NPC_MDLVERT_DMGSMOKE_A = 7,
    NPC_MDLVERT_DMGSMOKE_B = 8,
    NPC_MDLVERT_DMGSMOKE_C = 9,
    NPC_MDLVERT_DMGFLAME_A = 10,
    NPC_MDLVERT_DMGFLAME_B = 11,
    NPC_MDLVERT_DMGFLAME_C = 12,
    NPC_MDLVERT_PROPEL = 13,
    NPC_MDLVERT_EXHAUST = 14,
    NPC_MDLVERT_GEN01 = 15,
    NPC_MDLVERT_GEN02 = 16,
    NPC_MDLVERT_GEN03 = 17,
    NPC_MDLVERT_GEN04 = 18,
    NPC_MDLVERT_GEN05 = 19,
    NPC_MDLVERT_NOMORE = 20,
    NPC_MDLVERT_FORCEINT = 2147483647,
};
// total size: 0x10
class zFragBone {
    // Members
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
// total size: 0xC
class _tagLightningZeus {
    // Members
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
// total size: 0x4
class HAZNotify {};
// total size: 0x68
class zFragLightningAsset : public zFragAsset {
    // Members
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
enum en_psynote {
    PSY_NOTE_HASRESUMED = 0,
    PSY_NOTE_HASENTERED = 1,
    PSY_NOTE_ANIMCHANGED = 2,
    PSY_NOTE_NOMORE = 3,
    PSY_NOTE_FORCE = 2147483647,
};
enum en_npcbtyp {
    NPCP_BASIS_NONE = 0,
    NPCP_BASIS_EVILROBOT = 1,
    NPCP_BASIS_FRIENDLYROBOT = 2,
    NPCP_BASIS_LOVINGCITIZEN = 3,
    NPCP_BASIS_GRUMPYCITIZEN = 4,
    NPCP_BASIS_NOMORE = 5,
    NPCP_BASIS_FORCE = 2147483647,
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x3C
class HAZBall : public HAZTypical {};
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
// total size: 0x4
class _tagEmitSphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x30
class xShadowPoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x30
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class xJSPHeader * jsp; // offset 0x10, size 0x4
    class RpLight * light[2]; // offset 0x14, size 0x8
    class RwFrame * light_frame[2]; // offset 0x1C, size 0x8
    signed int memlvl; // offset 0x24, size 0x4
};
// total size: 0x20
class UVAModelInfo {
    // Members
public:
    class xVec2 offset_vel; // offset 0x0, size 0x8
    unsigned int flg_uvam; // offset 0x8, size 0x4
    class RpAtomic * model; // offset 0xC, size 0x4
    class RwTexCoords * uv; // offset 0x10, size 0x4
    signed int uvsize; // offset 0x14, size 0x4
    class xVec2 offset; // offset 0x18, size 0x8
};
// total size: 0x0
class rxReq {};
// total size: 0x3070
class xShadowCache {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    unsigned int entCount; // offset 0x10, size 0x4
    unsigned int polyCount; // offset 0x14, size 0x4
    float polyRayDepth[5]; // offset 0x18, size 0x14
    unsigned short castOnEnt; // offset 0x2C, size 0x2
    unsigned short castOnPoly; // offset 0x2E, size 0x2
    class xEnt * ent[16]; // offset 0x30, size 0x40
    class xShadowPoly poly[256]; // offset 0x70, size 0x3000
};
// total size: 0xC
class NPCStunInfo {
    // Members
public:
    float tym_stuntime; // offset 0x0, size 0x4
    enum en_NPC_CARRY_STATE carrystate; // offset 0x4, size 0x4
    signed int allowStun; // offset 0x8, size 0x4
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
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
enum en_alertbzzt {
    FODBZZT_ALERT_NOTICE = 0,
    FODBZZT_ALERT_ARENA = 1,
    FODBZZT_ALERT_CHASE = 2,
    FODBZZT_ALERT_NOMORE = 3,
    FODBZZT_ALERT_FORCE = 2147483647,
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
// total size: 0xD8
struct /* @anon12 */ {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0xD8
struct /* @anon13 */ {};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
// total size: 0x98
class xShadowSimpleCache {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xEnt * castOnEnt; // offset 0x20, size 0x4
    class xShadowSimplePoly poly; // offset 0x24, size 0x30
    float envHeight; // offset 0x54, size 0x4
    float shadowHeight; // offset 0x58, size 0x4
    unsigned int raster; // offset 0x5C, size 0x4
    float dydx; // offset 0x60, size 0x4
    float dydz; // offset 0x64, size 0x4
    class xVec3 corner[4]; // offset 0x68, size 0x30
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x40
class HAZRing : public HAZTypical {
    // Members
public:
    float hyt_ring; // offset 0x3C, size 0x4
};
// total size: 0x54
struct /* @anon14 */ {};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class zFragSound {
    // Members
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
class _tagEmitRect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
enum en_tubespot {
    ROBO_TUBE_PETE = 0,
    ROBO_TUBE_PAUL = 1,
    ROBO_TUBE_MARY = 2,
    ROBO_TUBE_NOMORE = 3,
    ROBO_TUBE_FORCE = 2147483647,
};
// total size: 0xD8
struct /* @anon15 */ {};
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
};
// total size: 0x28
class NPCSysEvent {
    // Members
public:
    signed int doLinkEvents; // offset 0x0, size 0x4
    signed int handled; // offset 0x4, size 0x4
    class xBase * from; // offset 0x8, size 0x4
    class xBase * to; // offset 0xC, size 0x4
    unsigned int toEvent; // offset 0x10, size 0x4
    float toParam[4]; // offset 0x14, size 0x10
    class xBase * toParamWidget; // offset 0x24, size 0x4
};
// total size: 0x16C
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // Members
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 vel; // offset 0x14C, size 0xC
    float vel_angle_variation; // offset 0x158, size 0x4
    unsigned char rot[3]; // offset 0x15C, size 0x3
    unsigned char padding; // offset 0x15F, size 0x1
    float radius; // offset 0x160, size 0x4
    float emit_interval_current; // offset 0x164, size 0x4
    void * emit_volume; // offset 0x168, size 0x4
};
// total size: 0xA4
class HAZTarTar : public HAZCollide {
    // Members
public:
    class xVec3 vel; // offset 0x84, size 0xC
    float spd_lob; // offset 0x90, size 0x4
    class xVec3 pos_tgt; // offset 0x94, size 0xC
    unsigned int streakID; // offset 0xA0, size 0x4
};
// total size: 0x4
class NPCScriptInfo {
    // Members
public:
    unsigned int aid_playanim; // offset 0x0, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xD8
struct /* @anon16 */ {};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
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
// total size: 0x2050
class zGlobals : public xGlobals {
    // Members
public:
    class zPlayerGlobals player; // offset 0x700, size 0x1940
    class zAssetPickupTable * pickupTable; // offset 0x2040, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x2044, size 0x4
    class zScene * sceneCur; // offset 0x2048, size 0x4
    class zScene * scenePreload; // offset 0x204C, size 0x4
};
// total size: 0x24
class zFragLocation {
    // Members
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
enum en_NPC_DAMAGE_TYPE {
    DMGTYP_UNDECIDED = 0,
    DMGTYP_ABOVE = 1,
    DMGTYP_BELOW = 2,
    DMGTYP_SIDE = 3,
    DMGTYP_INSTAKILL = 4,
    DMGTYP_KILLEVENT = 5,
    DMGTYP_HITBYTOSS = 6,
    DMGTYP_NPCATTACK = 7,
    DMGTYP_ROPE = 8,
    DMGTYP_CRUISEBUBBLE = 9,
    DMGTYP_PROJECTILE = 10,
    DMGTYP_BOULDER = 11,
    DMGTYP_BUBBOWL = 12,
    DMGTYP_THUNDER_TIKI_EXPLOSION = 13,
    DMGTYP_DAMAGE_SURFACE = 14,
    DMGTYP_BUNGEED = 15,
    DMGTYP_SURFACE = 16,
    DMGTYP_NOMORE = 17,
    DMGTYP_FORCEINT = 2147483647,
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
// total size: 0x80
class zNPCGoalAlertFodBzzt : public zNPCGoalCommon {
    // Members
public:
    signed int flg_alert; // offset 0x4C, size 0x4
    enum en_alertbzzt alertbzzt; // offset 0x50, size 0x4
    float tmr_warmup; // offset 0x54, size 0x4
    signed int cnt_nextlos; // offset 0x58, size 0x4
    float len_laser; // offset 0x5C, size 0x4
    class xVec3 pos_laserSource; // offset 0x60, size 0xC
    class xVec3 pos_laserTarget; // offset 0x6C, size 0xC
    class RwRGBA rgba_deathRay; // offset 0x78, size 0x4
    signed int cnt_inContact; // offset 0x7C, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x54
class HAZShroom : public HAZTypical {
    // Members
public:
    class xVec3 vel_rise; // offset 0x3C, size 0xC
    class xVec3 acc_rise; // offset 0x48, size 0xC
};
// total size: 0xD8
struct /* @anon17 */ {};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum en_npchaz {
    NPC_HAZ_UNKNOWN = 0,
    NPC_HAZ_EXPLODE = 1,
    NPC_HAZ_EXPLODE_INNER = 2,
    NPC_HAZ_FODBOMB = 3,
    NPC_HAZ_CATTLEPROD = 4,
    NPC_HAZ_TUBELETBLAST = 5,
    NPC_HAZ_PUPPYNUKE = 6,
    NPC_HAZ_DUPLOBOOM = 7,
    NPC_HAZ_DUPLO_SHROOM = 8,
    NPC_HAZ_PATRIOT = 9,
    NPC_HAZ_TARTARPROJ = 10,
    NPC_HAZ_TARTARSPILL = 11,
    NPC_HAZ_TARTARSTINK = 12,
    NPC_HAZ_CHUCKBOMB = 13,
    NPC_HAZ_CHUCKBLAST = 14,
    NPC_HAZ_CHUCKBLOOSH = 15,
    NPC_HAZ_ARFBONE = 16,
    NPC_HAZ_ARFBONEBLAST = 17,
    NPC_HAZ_OILBUBBLE = 18,
    NPC_HAZ_OILSLICK = 19,
    NPC_HAZ_OILBURST = 20,
    NPC_HAZ_OILGLOB = 21,
    NPC_HAZ_MONCLOUD = 22,
    NPC_HAZ_FUNFRAG = 23,
    NPC_HAZ_THUNDER = 24,
    NPC_HAZ_ROBOBITS = 25,
    NPC_HAZ_VISSPLASH = 26,
    NPC_HAZ_NOMORE = 27,
    NPC_HAZ_FORCE = 2147483647,
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
// total size: 0x150
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
    unsigned int DisableForceConversation; // offset 0x98, size 0x4
    float StartSlideAngle; // offset 0x9C, size 0x4
    float StopSlideAngle; // offset 0xA0, size 0x4
    float RotMatchMaxAngle; // offset 0xA4, size 0x4
    float RotMatchMatchTime; // offset 0xA8, size 0x4
    float RotMatchRelaxTime; // offset 0xAC, size 0x4
    float Gravity; // offset 0xB0, size 0x4
    float BBashTime; // offset 0xB4, size 0x4
    float BBashHeight; // offset 0xB8, size 0x4
    float BBashDelay; // offset 0xBC, size 0x4
    float BBashCVTime; // offset 0xC0, size 0x4
    float BBounceSpeed; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float SandyMeleeMinFrame; // offset 0xD4, size 0x4
    float SandyMeleeMaxFrame; // offset 0xD8, size 0x4
    float SandyMeleeRadius; // offset 0xDC, size 0x4
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
    unsigned char PowerUp[2]; // offset 0x149, size 0x2
    unsigned char InitialPowerUp[2]; // offset 0x14B, size 0x2
};
// total size: 0xD8
struct /* @anon18 */ {};
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
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x14
class xModelBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x1C
class _tagEmitLine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x54
class zNPCGoalDead : public zNPCGoalCommon {
    // Members
public:
    signed int flg_deadinfo; // offset 0x4C, size 0x4
    unsigned char old_moreFlags; // offset 0x50, size 0x1
};
// total size: 0x120
class zPlayerLassoInfo {
    // Members
public:
    class xEnt * target; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    unsigned char destroy; // offset 0x8, size 0x1
    unsigned char targetGuide; // offset 0x9, size 0x1
    float lassoRot; // offset 0xC, size 0x4
    class xEnt * swingTarget; // offset 0x10, size 0x4
    class xEnt * releasedSwing; // offset 0x14, size 0x4
    float copterTime; // offset 0x18, size 0x4
    signed int canCopter; // offset 0x1C, size 0x4
    class zLasso lasso; // offset 0x20, size 0xFC
    class xAnimState * zeroAnim; // offset 0x11C, size 0x4
};
enum en_roboanim {
    ROBO_ANIM_UNKNOWN = 0,
    ROBO_ANIM_IDLE = 1,
    ROBO_ANIM_FIDGET = 2,
    ROBO_ANIM_MOVE = 3,
    ROBO_ANIM_NOTICE = 4,
    ROBO_ANIM_TAUNT = 5,
    ROBO_ANIM_RESPAWN = 6,
    ROBO_ANIM_LASSOGRAB = 7,
    ROBO_ANIM_LASSOHOLD = 8,
    ROBO_ANIM_STUNBEGIN = 9,
    ROBO_ANIM_STUNLOOP = 10,
    ROBO_ANIM_ENDTAG_STD = 11,
    ROBO_ANIM_ALERTIDLE = 12,
    ROBO_ANIM_ALERTMOVE = 13,
    ROBO_ANIM_ATTACK = 14,
    ROBO_ANIM_ATTACK_A = 15,
    ROBO_ANIM_ATTACK_B = 16,
    ROBO_ANIM_ATTACKBEGIN = 17,
    ROBO_ANIM_ATTACKLOOP = 18,
    ROBO_ANIM_ATTACKEND = 19,
    ROBO_ANIM_HURTKNOCK = 20,
    ROBO_ANIM_HURTSMASH = 21,
    ROBO_ANIM_HURTBASH = 22,
    ROBO_ANIM_LASSOYANK = 23,
    ROBO_ANIM_PICKUP = 24,
    ROBO_ANIM_CARRIED = 25,
    ROBO_ANIM_THROWBEGIN = 26,
    ROBO_ANIM_THROWNLOOP = 27,
    ROBO_ANIM_SLEEP = 28,
    ROBO_ANIM_TELEPORTBEGIN = 29,
    ROBO_ANIM_TELEPORTLOOP = 30,
    ROBO_ANIM_TELEPORTEND = 31,
    ROBO_ANIM_LAUNCH = 32,
    ROBO_ANIM_LAUNCHEND = 33,
    ROBO_ANIM_DANCEBEGIN = 34,
    ROBO_ANIM_DANCELOOP = 35,
    ROBO_ANIM_DANCEEND = 36,
    ROBO_ANIM_DEATH01 = 37,
    ROBO_ANIM_DEATH02 = 38,
    ROBO_ANIM_DODGEBBOWL = 39,
    ROBO_ANIM_DODGECRUISE = 40,
    ROBO_ANIM_NOMORE = 41,
    ROBO_ANIM_FORCE = 2147483647,
};
// total size: 0x8
class NPCMountInfo {
    // Members
public:
    class xEnt * ent_toMount; // offset 0x0, size 0x4
    class xCollis * col_forMount; // offset 0x4, size 0x4
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
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragCount = 8,
    eFragForceSize = 2147483647,
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x0
class anim_coll_data {};
// total size: 0xD8
struct /* @anon19 */ {};
// total size: 0x68
class HAZCloud : public HAZTypical {
    // Members
public:
    float spd_cloud; // offset 0x3C, size 0x4
    class xVec3 pos_home; // offset 0x40, size 0xC
    float rad_maxRange; // offset 0x4C, size 0x4
    float tmr_dozap; // offset 0x50, size 0x4
    class zLightning * zap_lytnin; // offset 0x54, size 0x4
    class zLightning * zap_warnin; // offset 0x58, size 0x4
    class xVec3 pos_warnin; // offset 0x5C, size 0xC
};
// total size: 0x14
class NPCBlastInfo {
    // Members
public:
    class xVec3 pos_blast; // offset 0x0, size 0xC
    float rad_blast; // offset 0xC, size 0x4
    float spd_expand; // offset 0x10, size 0x4
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
// total size: 0x4C
class xEntMechData {
    // Members
public:
    class xVec3 apos; // offset 0x0, size 0xC
    class xVec3 bpos; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float arot; // offset 0x24, size 0x4
    float brot; // offset 0x28, size 0x4
    float ss; // offset 0x2C, size 0x4
    float sr; // offset 0x30, size 0x4
    signed int state; // offset 0x34, size 0x4
    float tsfd; // offset 0x38, size 0x4
    float trfd; // offset 0x3C, size 0x4
    float tsbd; // offset 0x40, size 0x4
    float trbd; // offset 0x44, size 0x4
    float * rotptr; // offset 0x48, size 0x4
};
enum _SDRenderState {
    SDRS_Unknown = 0,
    SDRS_Default = 1,
    SDRS_OpaqueModels = 2,
    SDRS_AlphaModels = 3,
    SDRS_Bubble = 4,
    SDRS_Projectile = 5,
    SDRS_Font = 6,
    SDRS_HUD = 7,
    SDRS_Particles = 8,
    SDRS_Lightning = 9,
    SDRS_Streak = 10,
    SDRS_SkyBack = 11,
    SDRS_Environment = 12,
    SDRS_Fill = 13,
    SDRS_NPCVisual = 14,
    SDRS_OOBFade = 15,
    SDRS_OOBPlayerZ = 16,
    SDRS_OOBPlayerAlpha = 17,
    SDRS_OOBHand = 18,
    SDRS_Glare = 19,
    SDRS_Newsfish = 20,
    SDRS_CruiseHUD = 21,
    SDRS_DiscoFloorGlow = 22,
    SDRS_Total = -1,
};
enum en_npcglyph {
    NPC_GLYPH_UNKNOWN = 0,
    NPC_GLYPH_SHINYONE = 1,
    NPC_GLYPH_SHINYFIVE = 2,
    NPC_GLYPH_SHINYTEN = 3,
    NPC_GLYPH_SHINYFIFTY = 4,
    NPC_GLYPH_SHINYHUNDRED = 5,
    NPC_GLYPH_TALK = 6,
    NPC_GLYPH_TALKOTHER = 7,
    NPC_GLYPH_FRIEND = 8,
    NPC_GLYPH_DAZED = 9,
    NPC_GLYPH_NOMORE = 10,
    NPC_GLYPH_FORCE = 2147483647,
};
// total size: 0x4
class xEntMotionSplineData {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0xCC
struct /* @anon20 */ {};
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
// total size: 0x24
class NPCLaser {
    // Members
public:
    class RwRaster * rast_laser; // offset 0x0, size 0x4
    float radius[2]; // offset 0x4, size 0x8
    float uv_scroll[2]; // offset 0xC, size 0x8
    class RwRGBA rgba[2]; // offset 0x14, size 0x8
    float uv_base[2]; // offset 0x1C, size 0x8
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x4
class _tagEmitVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0x78
class xParEmitter : public xBase {
    // Members
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    float rate; // offset 0x20, size 0x4
    float rate_time; // offset 0x24, size 0x4
    float rate_fraction; // offset 0x28, size 0x4
    float rate_fraction_cull; // offset 0x2C, size 0x4
    unsigned char emit_flags; // offset 0x30, size 0x1
    unsigned char emit_pad[3]; // offset 0x31, size 0x3
    unsigned char rot[3]; // offset 0x34, size 0x3
    class xModelTag tag; // offset 0x38, size 0x20
    float oocull_distance_sqr; // offset 0x58, size 0x4
    float distance_to_cull_sqr; // offset 0x5C, size 0x4
    void * attachTo; // offset 0x60, size 0x4
    class xParSys * parSys; // offset 0x64, size 0x4
    void * emit_volume; // offset 0x68, size 0x4
    class xVec3 last_attach_loc; // offset 0x6C, size 0xC
};
// total size: 0x10
class NPCAreaInfo {
    // Members
public:
    class zNPCCommon * npc_origin; // offset 0x0, size 0x4
    class xVec3 pos_origin; // offset 0x4, size 0xC
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};
// total size: 0x8
class TubeNotice : public xPSYNote {
    // Members
public:
    class zNPCCommon * npc; // offset 0x4, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
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
enum en_NPC_MSG_DATA {
    NPC_MDAT_BLANK = 0,
    NPC_MDAT_SYSEVENT = 1,
    NPC_MDAT_BLAST = 2,
    NPC_MDAT_CHAT = 3,
    NPC_MDAT_SPAWN = 4,
    NPC_MDAT_TARGET = 5,
    NPC_MDAT_DAMAGE = 6,
    NPC_MDAT_STUN = 7,
    NPC_MDAT_SCRIPT = 8,
    NPC_MDAT_MOUNT = 9,
    NPC_MDAT_AREANOTIFY = 10,
    NPC_MDAT_NOMORE = 11,
    NPC_MDAT_FORCE = 2147483647,
};

/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5F40 -> 0x002D5F9C
*/
// Range: 0x2D5F40 -> 0x2D5F9C
// this: r2
void NPCArena::SetHome(class zNPCCommon * npc /* r2 */, class xVec3 * pos /* r2 */, float rad /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2D5F40 -> 0x2D5F9C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5FA0 -> 0x002D6094
*/
// Range: 0x2D5FA0 -> 0x2D6094
// this: r16
void NPCArena::SetHome(class zNPCCommon * npc /* r17 */, class zMovePoint * nav /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D5FA0 -> 0x2D6094
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D60A0 -> 0x002D61C8
*/
// Range: 0x2D60A0 -> 0x2D61C8
class zMovePoint * NextBestNav(class zMovePoint * nav_from /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D60A0 -> 0x2D61C8
        float rad_best; // r7
        class zMovePoint * nav_best; // r2
        signed int findbest; // r9
        signed int i; // r8
        signed int count; // r7
        class zMovePoint * nav; // r5
        float rad_arena; // r6
        class xVec3 diff; // r29
        float ds2; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D61D0 -> 0x002D6540
*/
// Range: 0x2D61D0 -> 0x2D6540
// this: r18
signed int NPCArena::Cycle(class zNPCCommon * npc /* r17 */, signed int peek /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2D61D0 -> 0x2D6540
        class zMovePoint * nav_near; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6540 -> 0x002D6670
*/
// Range: 0x2D6540 -> 0x2D6670
// this: r2
signed int NPCArena::NeedToCycle(class zNPCCommon * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6540 -> 0x2D6670
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6670 -> 0x002D6700
*/
// Range: 0x2D6670 -> 0x2D6700
// this: r2
float NPCArena::DstSqFromHome(class xVec3 * pos /* r2 */, class xVec3 * delt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6670 -> 0x2D6700
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6700 -> 0x002D6778
*/
// Range: 0x2D6700 -> 0x2D6778
// this: r2
float NPCArena::PctFromHome(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6700 -> 0x2D6778
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6780 -> 0x002D6830
*/
// Range: 0x2D6780 -> 0x2D6830
// this: r2
signed int NPCArena::IncludesPos(class xVec3 * pos /* r2 */, float rad_thresh /* r29 */, class xVec3 * vec /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6780 -> 0x2D6830
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6830 -> 0x002D6D5C
*/
// Range: 0x2D6830 -> 0x2D6D5C
// this: r18
signed int zNPCRobot::LaunchProjectile(enum en_npchaz haztyp /* r19 */, float spd_proj /* r23 */, float dst_minRange /* r22 */, enum en_mdlvert idx_mvtx /* r16 */, float tym_predictMax /* r21 */, float hyt_offset /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D6830 -> 0x2D6D5C
        class NPCHazard * haz; // r17
        signed int rc; // r2
        class xVec3 pos_launch; // r29+0xC0
        class xVec3 dir; // r29+0xB0
        class xVec3 pos_tgt; // r29+0xA0
        float tym_predict; // r29+0xD0
        float dst_tgt; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6D60 -> 0x002D6DB8
*/
// Range: 0x2D6D60 -> 0x2D6DB8
void VFXStarTrek(float dt /* r29 */, class xVec3 * pos /* r2 */, class xVec3 * vel /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6D60 -> 0x2D6DB8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6DC0 -> 0x002D6FB0
*/
// Range: 0x2D6DC0 -> 0x2D6FB0
void ROBO_InitEffects() {
    /* anonymous block */ {
        // Range: 0x2D6DC0 -> 0x2D6FB0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6FB0 -> 0x002D6FC4
*/
// Range: 0x2D6FB0 -> 0x2D6FC4
static signed int SLCK_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6FB0 -> 0x2D6FC4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6FD0 -> 0x002D6FE4
*/
// Range: 0x2D6FD0 -> 0x2D6FE4
static signed int TUBE_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6FD0 -> 0x2D6FE4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6FF0 -> 0x002D7004
*/
// Range: 0x2D6FF0 -> 0x2D7004
static signed int CHUK_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D6FF0 -> 0x2D7004
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7010 -> 0x002D7024
*/
// Range: 0x2D7010 -> 0x2D7024
static signed int PUPY_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7010 -> 0x2D7024
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7030 -> 0x002D7044
*/
// Range: 0x2D7030 -> 0x2D7044
static signed int ARFY_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7030 -> 0x2D7044
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7050 -> 0x002D7064
*/
// Range: 0x2D7050 -> 0x2D7064
static signed int SLEP_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7050 -> 0x2D7064
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7070 -> 0x002D7600
*/
// Range: 0x2D7070 -> 0x2D7600
static signed int SLEP_grul_goAlert(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2D7070 -> 0x2D7600
        class zNPCSleepy * npc; // r17
        class NPCArena * arena; // r16
        signed int rc; // r2
        float dy; // r29+0xCC
        class xVec3 vec_plyr; // r29+0xC0
        class xVec3 dir_side; // r29+0xB0
        class xVec3 dir_plyr; // r29+0xA0
        unsigned int plyr_mvinf; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7600 -> 0x002D7614
*/
// Range: 0x2D7600 -> 0x2D7614
static signed int MOON_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7600 -> 0x2D7614
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7620 -> 0x002D7634
*/
// Range: 0x2D7620 -> 0x2D7634
static signed int GLOV_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7620 -> 0x2D7634
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7640 -> 0x002D7654
*/
// Range: 0x2D7640 -> 0x2D7654
static signed int TART_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7640 -> 0x2D7654
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7660 -> 0x002D7674
*/
// Range: 0x2D7660 -> 0x2D7674
static signed int HAMR_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7660 -> 0x2D7674
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7680 -> 0x002D7694
*/
// Range: 0x2D7680 -> 0x2D7694
static signed int CHMP_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7680 -> 0x2D7694
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D76A0 -> 0x002D76B4
*/
// Range: 0x2D76A0 -> 0x2D76B4
static signed int BZZT_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D76A0 -> 0x2D76B4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D76C0 -> 0x002D76D4
*/
// Range: 0x2D76C0 -> 0x2D76D4
static signed int BOMB_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D76C0 -> 0x2D76D4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D76E0 -> 0x002D76F4
*/
// Range: 0x2D76E0 -> 0x2D76F4
static signed int FODR_grul_alert(enum en_trantype * trantype /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D76E0 -> 0x2D76F4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7700 -> 0x002D79A0
*/
// Range: 0x2D7700 -> 0x2D79A0
static signed int ROBO_grul_goAlertLobber(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2D7700 -> 0x2D79A0
        class zNPCRobot * npc; // r17
        class NPCArena * arena; // r16
        signed int rc; // r2
        class xVec3 delta; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D79A0 -> 0x002D7BF8
*/
// Range: 0x2D79A0 -> 0x2D7BF8
static signed int ROBO_grul_goAlertMelee(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2D79A0 -> 0x2D7BF8
        class zNPCRobot * npc; // r17
        class NPCArena * arena; // r16
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7C00 -> 0x002D7C60
*/
// Range: 0x2D7C00 -> 0x2D7C60
static signed int DUMY_grul_returnToIdle(class xGoal * rawgoal /* r2 */, enum en_trantype * trantype /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2D7C00 -> 0x2D7C60
        signed int nextgoal; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7C60 -> 0x002D7FD4
*/
// Range: 0x2D7C60 -> 0x2D7FD4
void SlipSlidenAway() {
    /* anonymous block */ {
        // Range: 0x2D7C60 -> 0x2D7FD4
        float dst_emit; // r22
        class xVec3 pos_plyr; // r29+0x120
        unsigned int i; // r22
        class xVec3 pos_emit; // r29+0x110
        signed int moreorless; // @ 0x0050FF38
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7FE0 -> 0x002D7FE8
*/
// Range: 0x2D7FE0 -> 0x2D7FE8
// this: r2
void zNPCSlick::YouOwnSlipFX() {
    /* anonymous block */ {
        // Range: 0x2D7FE0 -> 0x2D7FE8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7FF0 -> 0x002D80F8
*/
// Range: 0x2D7FF0 -> 0x2D80F8
// this: r16
void zNPCSlick::BUpdate(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D7FF0 -> 0x2D80F8
        class xSphere * sph; // r4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8100 -> 0x002D8254
*/
// Range: 0x2D8100 -> 0x2D8254
// this: r19
void zNPCSlick::RopePopsShield() {
    /* anonymous block */ {
        // Range: 0x2D8100 -> 0x2D8254
        class xVec3 smidge; // @ 0x004FEAA0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8260 -> 0x002D84C0
*/
// Range: 0x2D8260 -> 0x2D84C0
// this: r17
void zNPCSlick::ShieldUpdate(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x2D8260 -> 0x2D84C0
        float rat_shield; // r20
        class xModelInstance * model; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D84C0 -> 0x002D8730
*/
// Range: 0x2D84C0 -> 0x2D8730
// this: r16
void zNPCSlick::Damage(enum en_NPC_DAMAGE_TYPE dmg_type /* r19 */, class xBase * who /* r18 */, class xVec3 * vec_hit /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2D84C0 -> 0x2D8730
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8730 -> 0x002D88E8
*/
// Range: 0x2D8730 -> 0x2D88E8
// this: r17
void zNPCSlick::Process(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D8730 -> 0x2D88E8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D88F0 -> 0x002D8AC8
*/
// Range: 0x2D88F0 -> 0x2D8AC8
// this: r20
unsigned int zNPCSlick::AnimPick(signed int gid /* r19 */, enum en_NPC_GOAL_SPOT gspot /* r18 */, class xGoal * rawgoal /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2D88F0 -> 0x2D8AC8
        signed int idx; // r16
        unsigned int da_anim; // r2
        signed int choices[3]; // @ 0x004DF148
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8AD0 -> 0x002D8C40
*/
// Range: 0x2D8AD0 -> 0x2D8C40
// this: r16
void zNPCSlick::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2D8AD0 -> 0x2D8C40
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8C40 -> 0x002D8C94
*/
// Range: 0x2D8C40 -> 0x2D8C94
// this: r17
void zNPCSlick::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2D8C40 -> 0x2D8C94
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8CA0 -> 0x002D8CEC
*/
// Range: 0x2D8CA0 -> 0x2D8CEC
// this: r16
void zNPCSlick::Reset() {
    /* anonymous block */ {
        // Range: 0x2D8CA0 -> 0x2D8CEC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8CF0 -> 0x002D8DF8
*/
// Range: 0x2D8CF0 -> 0x2D8DF8
// this: r16
void zNPCSlick::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D8CF0 -> 0x2D8DF8
        class xModelInstance * shield; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8E00 -> 0x002D8E5C
*/
// Range: 0x2D8E00 -> 0x2D8E5C
// this: r2
void zNPCTubeSlave::PosStacked(class xVec3 * pos_stacked /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D8E00 -> 0x2D8E5C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8E60 -> 0x002D8E74
*/
// Range: 0x2D8E60 -> 0x2D8E74
// this: r2
signed int zNPCTubeSlave::IsDying() {
    /* anonymous block */ {
        // Range: 0x2D8E60 -> 0x2D8E74
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8E80 -> 0x002D8F00
*/
// Range: 0x2D8E80 -> 0x2D8F00
// this: r2
signed int zNPCTubeSlave::RoboHandleMail(class NPCMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D8E80 -> 0x2D8F00
        signed int handled; // r17
        class xPsyche * psy; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8F00 -> 0x002D8F54
*/
// Range: 0x2D8F00 -> 0x2D8F54
// this: r2
void zNPCTubeSlave::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x2D8F00 -> 0x2D8F54
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8F60 -> 0x002D8F68
*/
// Range: 0x2D8F60 -> 0x2D8F68
// this: r2
void zNPCTubeSlave::Process(class xScene * xscn /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2D8F60 -> 0x2D8F68
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8F70 -> 0x002D9020
*/
// Range: 0x2D8F70 -> 0x2D9020
// this: r2
unsigned int zNPCTubeSlave::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D8F70 -> 0x2D9020
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9020 -> 0x002D9168
*/
// Range: 0x2D9020 -> 0x2D9168
// this: r16
void zNPCTubeSlave::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2D9020 -> 0x2D9168
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9170 -> 0x002D91C4
*/
// Range: 0x2D9170 -> 0x2D91C4
// this: r17
void zNPCTubeSlave::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2D9170 -> 0x2D91C4
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D91D0 -> 0x002D9250
*/
// Range: 0x2D91D0 -> 0x2D9250
// this: r16
void zNPCTubeSlave::Reset() {
    /* anonymous block */ {
        // Range: 0x2D91D0 -> 0x2D9250
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9250 -> 0x002D933C
*/
// Range: 0x2D9250 -> 0x2D933C
// this: r2
void zNPCTubeSlave::Setup() {
    /* anonymous block */ {
        // Range: 0x2D9250 -> 0x2D933C
        class RwTexture * tmp_txtr; // r2
        class RwRaster * rast; // r6
        class RwRGBA rgba_beg; // r29+0x1C
        class RwRGBA rgba_end; // r29+0x18
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9340 -> 0x002D9414
*/
// Range: 0x2D9340 -> 0x2D9414
// this: r16
void zNPCTubeSlave::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D9340 -> 0x2D9414
        class xModelInstance * minst; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9420 -> 0x002D9430
*/
// Range: 0x2D9420 -> 0x2D9430
// this: r2
signed int zNPCTubelet::IsDying() {
    /* anonymous block */ {
        // Range: 0x2D9420 -> 0x2D9430
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9430 -> 0x002D9538
*/
// Range: 0x2D9430 -> 0x2D9538
// this: r2
void TubeNotice::Notice(enum en_psynote note /* r2 */, class xGoal * goal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D9430 -> 0x2D9538
        class zNPCTubelet * pete; // r3
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9540 -> 0x002D954C
*/
// Range: 0x2D9540 -> 0x2D954C
// this: r2
void zNPCTubelet::PainInTheBand() {
    /* anonymous block */ {
        // Range: 0x2D9540 -> 0x2D954C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9550 -> 0x002D96C0
*/
// Range: 0x2D9550 -> 0x2D96C0
// this: r16
signed int zNPCTubelet::Chk_IsBonked() {
    /* anonymous block */ {
        // Range: 0x2D9550 -> 0x2D96C0
        signed int cnt_hurt; // r6
        signed int die; // r5
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D96C0 -> 0x002D972C
*/
// Range: 0x2D96C0 -> 0x2D972C
// this: r16
void zNPCTubelet::Unbonk() {
    /* anonymous block */ {
        // Range: 0x2D96C0 -> 0x2D972C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9730 -> 0x002D9808
*/
// Range: 0x2D9730 -> 0x2D9808
// this: r16
void zNPCTubelet::Bonk() {
    /* anonymous block */ {
        // Range: 0x2D9730 -> 0x2D9808
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9810 -> 0x002D9A50
*/
// Range: 0x2D9810 -> 0x2D9A50
// this: r18
void zNPCTubelet::LassoNotify(enum en_LASSO_EVENT event /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2D9810 -> 0x2D9A50
        class zNPCLassoInfo * lass; // r16
        class xPsyche * psy; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9A50 -> 0x002D9B70
*/
// Range: 0x2D9A50 -> 0x2D9B70
// this: r17
signed int zNPCTubelet::RoboHandleMail(class NPCMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D9A50 -> 0x2D9B70
        signed int handled; // r16
        class NPCMsg tellkid; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9B70 -> 0x002D9CA4
*/
// Range: 0x2D9B70 -> 0x2D9CA4
// this: r17
signed int zNPCTubelet::Respawn(class xVec3 * pos /* r2 */, class zMovePoint * mvptFirst /* r2 */, class zMovePoint * mvptSpawnRef /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D9B70 -> 0x2D9CA4
        signed int rc; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9CB0 -> 0x002D9F08
*/
// Range: 0x2D9CB0 -> 0x2D9F08
// this: r16
void zNPCTubelet::Process(class xScene * xscn /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D9CB0 -> 0x2D9F08
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9F10 -> 0x002D9F88
*/
// Range: 0x2D9F10 -> 0x2D9F88
// this: r2
unsigned int zNPCTubelet::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D9F10 -> 0x2D9F88
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9F90 -> 0x002DA118
*/
// Range: 0x2D9F90 -> 0x2DA118
// this: r17
void zNPCTubelet::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2D9F90 -> 0x2DA118
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA120 -> 0x002DA2F4
*/
// Range: 0x2DA120 -> 0x2DA2F4
// this: r19
void zNPCTubelet::ParseChild(class xBase * child /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DA120 -> 0x2DA2F4
        signed int i; // r18
        class zNPCTubeSlave * slave; // r17
        enum en_tubespot spot; // r16
        class xGroup * grp; // r17
        signed int cnt; // r16
        class xBase * grpitem; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA300 -> 0x002DA3CC
*/
// Range: 0x2DA300 -> 0x2DA3CC
// this: r18
void zNPCTubelet::ParseLinks() {
    /* anonymous block */ {
        // Range: 0x2DA300 -> 0x2DA3CC
        signed int i; // r17
        class xLinkAsset * link; // r19
        class xBase * mychild; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA3D0 -> 0x002DA424
*/
// Range: 0x2DA3D0 -> 0x2DA424
// this: r17
void zNPCTubelet::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DA3D0 -> 0x2DA424
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA430 -> 0x002DA498
*/
// Range: 0x2DA430 -> 0x2DA498
// this: r16
void zNPCTubelet::Reset() {
    /* anonymous block */ {
        // Range: 0x2DA430 -> 0x2DA498
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA4A0 -> 0x002DA558
*/
// Range: 0x2DA4A0 -> 0x2DA558
// this: r16
void zNPCTubelet::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DA4A0 -> 0x2DA558
        class xModelInstance * minst; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA560 -> 0x002DA638
*/
// Range: 0x2DA560 -> 0x2DA638
// this: r2
unsigned int zNPCChuck::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DA560 -> 0x2DA638
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA640 -> 0x002DA7F0
*/
// Range: 0x2DA640 -> 0x2DA7F0
// this: r16
void zNPCChuck::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DA640 -> 0x2DA7F0
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
        class zNPCGoalIdle * idle; // r2
        class zNPCGoalWander * wand; // r2
        class zNPCGoalWaiting * wait; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA7F0 -> 0x002DA844
*/
// Range: 0x2DA7F0 -> 0x2DA844
// this: r17
void zNPCChuck::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DA7F0 -> 0x2DA844
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA850 -> 0x002DA898
*/
// Range: 0x2DA850 -> 0x2DA898
// this: r16
void zNPCChuck::Reset() {
    /* anonymous block */ {
        // Range: 0x2DA850 -> 0x2DA898
        class xModelInstance * minst; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA8A0 -> 0x002DA928
*/
// Range: 0x2DA8A0 -> 0x2DA928
// this: r16
void zNPCChuck::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DA8A0 -> 0x2DA928
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA930 -> 0x002DAC74
*/
// Range: 0x2DA930 -> 0x2DAC74
// this: r16
void zNPCArfDog::BlinkRender() {
    /* anonymous block */ {
        // Range: 0x2DA930 -> 0x2DAC74
        class xVec3 pos_blink; // r29+0x30
        class xVec3 pos_blink; // r29+0x20
        class xVec3 vec_tailOffset; // @ 0x004FEA90
        class xVec3 vec_headOffset; // @ 0x004FEA80
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DAC80 -> 0x002DADB0
*/
// Range: 0x2DAC80 -> 0x2DADB0
// this: r16
void zNPCArfDog::Process(class xScene * xscn /* r2 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2DAC80 -> 0x2DADB0
        signed int gid; // r2
        float accum; // r20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DADB0 -> 0x002DAEB0
*/
// Range: 0x2DADB0 -> 0x2DAEB0
// this: r16
void zNPCArfDog::Stun() {
    /* anonymous block */ {
        // Range: 0x2DADB0 -> 0x2DAEB0
        class xVec3 dir_dmg; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DAEB0 -> 0x002DB018
*/
// Range: 0x2DAEB0 -> 0x2DB018
// this: r2
unsigned int zNPCArfDog::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DAEB0 -> 0x2DB018
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB020 -> 0x002DB1B8
*/
// Range: 0x2DB020 -> 0x2DB1B8
// this: r16
void zNPCArfDog::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DB020 -> 0x2DB1B8
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB1C0 -> 0x002DB214
*/
// Range: 0x2DB1C0 -> 0x2DB214
// this: r17
void zNPCArfDog::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DB1C0 -> 0x2DB214
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB220 -> 0x002DB264
*/
// Range: 0x2DB220 -> 0x2DB264
// this: r16
void zNPCArfDog::Reset() {
    /* anonymous block */ {
        // Range: 0x2DB220 -> 0x2DB264
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB270 -> 0x002DB2A4
*/
// Range: 0x2DB270 -> 0x2DB2A4
// this: r2
void zNPCArfDog::Setup() {
    /* anonymous block */ {
        // Range: 0x2DB270 -> 0x2DB2A4
        char * nam_texture; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB2B0 -> 0x002DB31C
*/
// Range: 0x2DB2B0 -> 0x2DB31C
// this: r16
void zNPCArfDog::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB2B0 -> 0x2DB31C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB320 -> 0x002DB378
*/
// Range: 0x2DB320 -> 0x2DB378
// this: r2
class zNPCArfDog * zNPCArfArf::AdoptADoggie() {
    /* anonymous block */ {
        // Range: 0x2DB320 -> 0x2DB378
        class zNPCArfDog * pup; // r2
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB380 -> 0x002DB428
*/
// Range: 0x2DB380 -> 0x2DB428
// this: r2
void zNPCArfArf::DuploNotice(enum en_SM_NOTICES note /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB380 -> 0x2DB428
        class zNPCCommon * npc; // r2
        signed int i; // r7
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB430 -> 0x002DB538
*/
// Range: 0x2DB430 -> 0x2DB538
// this: r2
unsigned int zNPCArfArf::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB430 -> 0x2DB538
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB540 -> 0x002DB6D8
*/
// Range: 0x2DB540 -> 0x2DB6D8
// this: r16
void zNPCArfArf::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DB540 -> 0x2DB6D8
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB6E0 -> 0x002DB844
*/
// Range: 0x2DB6E0 -> 0x2DB844
// this: r19
void zNPCArfArf::ParseChild(class xBase * child /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB6E0 -> 0x2DB844
        signed int i; // r4
        class zNPCArfDog * puppy; // r16
        class xGroup * grp; // r18
        signed int cnt; // r17
        class xBase * grpitem; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB850 -> 0x002DB924
*/
// Range: 0x2DB850 -> 0x2DB924
// this: r18
void zNPCArfArf::ParseLinks() {
    /* anonymous block */ {
        // Range: 0x2DB850 -> 0x2DB924
        signed int i; // r17
        class xLinkAsset * link; // r19
        class xBase * mychild; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB930 -> 0x002DB984
*/
// Range: 0x2DB930 -> 0x2DB984
// this: r17
void zNPCArfArf::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DB930 -> 0x2DB984
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB990 -> 0x002DB9CC
*/
// Range: 0x2DB990 -> 0x2DB9CC
// this: r16
void zNPCArfArf::Reset() {
    /* anonymous block */ {
        // Range: 0x2DB990 -> 0x2DB9CC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB9D0 -> 0x002DBA38
*/
// Range: 0x2DB9D0 -> 0x2DBA38
// this: r16
void zNPCArfArf::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB9D0 -> 0x2DBA38
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DBA40 -> 0x002DC020
*/
// Range: 0x2DBA40 -> 0x2DC020
// this: r2
void zNPCSleepy::RendConeRange() {
    /* anonymous block */ {
        // Range: 0x2DBA40 -> 0x2DC020
        float rad_end; // r25
        class xVec3 vec_aim; // r29+0x110
        signed int i; // r20
        class xMat3x3 mat; // r29+0xC0
        class xVec3 offset; // r29+0x100
        class RxObjSpace3DVertex * vtx; // r19
        class RwRGBA * _col; // r2
        float u; // r24
        class RwRGBA * _col; // r2
        enum _SDRenderState old_rendstat; // r16
        float uv_bot[2]; // @ 0x0050F008
        float uv_top[2]; // @ 0x0050FF28
        float rad_fadeinInner; // @ 0x004FEA78
        float rad_fadeinOuter; // @ 0x004FEA70
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC020 -> 0x002DC540
*/
// Range: 0x2DC020 -> 0x2DC540
// this: r2
void zNPCSleepy::RendConeOfDeath(signed int tgt_isBowlingBall /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DC020 -> 0x2DC540
        signed int i; // r20
        class xVec3 pos_top; // r29+0x130
        class xEntBoulder * bowl; // r3
        class RxObjSpace3DVertex * vtx; // r19
        float ang_seg; // r27
        class xVec3 pos_edge; // r29+0x120
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        enum _SDRenderState old_rendstat; // r16
        class RwRGBA rgba_end; // @ 0x0050F000
        class RwRGBA rgba_beg; // @ 0x0050EFFC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC540 -> 0x002DC604
*/
// Range: 0x2DC540 -> 0x2DC604
// this: r16
void zNPCSleepy::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x2DC540 -> 0x2DC604
        class xPsyche * psy; // r17
        signed int gid; // r17
        signed int flg_wonder; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC610 -> 0x002DC88C
*/
// Range: 0x2DC610 -> 0x2DC88C
// this: r2
void zNPCSleepy::ConeOfRange() {
    /* anonymous block */ {
        // Range: 0x2DC610 -> 0x2DC88C
        float rgb_interp[3]; // r29+0x10
        float rgb_anger[3]; // @ 0x004FEA60
        float rgb_peace[3]; // @ 0x004FEA50
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC890 -> 0x002DCCB4
*/
// Range: 0x2DC890 -> 0x2DCCB4
// this: r19
signed int zNPCSleepy::RepelBowlBall() {
    /* anonymous block */ {
        // Range: 0x2DC890 -> 0x2DCCB4
        class xEntBoulder * bowl; // r18
        class xVec3 vec_tmp; // r29+0xF0
        class xVec3 vec_NtoB; // r29+0xE0
        class xVec3 dir_repel; // r29+0xD0
        float dst; // r20
        class xVec3 dir_ball; // r29+0xC0
        float spd; // r29+0x100
        class xVec3 dir_side; // r29+0xB0
        float rat; // r20
        signed int next_los_check; // @ 0x0050FF18
        signed int los_said_ok; // @ 0x0050FF1C
        signed int keepgoing; // @ 0x0050FF20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCCC0 -> 0x002DCD38
*/
// Range: 0x2DCCC0 -> 0x2DCD38
// this: r2
signed int zNPCSleepy::RepelMissile(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2DCCC0 -> 0x2DCD38
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCD40 -> 0x002DD004
*/
// Range: 0x2DCD40 -> 0x2DD004
// this: r16
void zNPCSleepy::SnoreNZeez(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DCD40 -> 0x2DD004
        float ds2; // r29+0x50
        class xVec3 pos_emit; // r29+0x40
        class xVec3 vel_emit; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD010 -> 0x002DD214
*/
// Range: 0x2DD010 -> 0x2DD214
void NightLightUVStep(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2DD010 -> 0x2DD214
        float uv_scroll_deathcone[2]; // @ 0x004FEA48
        float uv_scroll_nightlight[2]; // @ 0x004FEA40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD220 -> 0x002DD300
*/
// Range: 0x2DD220 -> 0x2DD300
// this: r17
void zNPCSleepy::NewTime(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DD220 -> 0x2DD300
        class xModelInstance * nightlight; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD300 -> 0x002DD408
*/
// Range: 0x2DD300 -> 0x2DD408
// this: r17
void zNPCSleepy::Process(class xScene * xscn /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DD300 -> 0x2DD408
        signed int angry; // r16
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD410 -> 0x002DD490
*/
// Range: 0x2DD410 -> 0x2DD490
// this: r2
unsigned int zNPCSleepy::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DD410 -> 0x2DD490
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD490 -> 0x002DD5EC
*/
// Range: 0x2DD490 -> 0x2DD5EC
// this: r16
void zNPCSleepy::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DD490 -> 0x2DD5EC
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD5F0 -> 0x002DD66C
*/
// Range: 0x2DD5F0 -> 0x2DD66C
// this: r17
void zNPCSleepy::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DD5F0 -> 0x2DD66C
        class NPCConfig * cfg; // r16
        float rad_minimum; // @ 0x0050EFF8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD670 -> 0x002DD6F8
*/
// Range: 0x2DD670 -> 0x2DD6F8
// this: r16
void zNPCSleepy::Reset() {
    /* anonymous block */ {
        // Range: 0x2DD670 -> 0x2DD6F8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD700 -> 0x002DD78C
*/
// Range: 0x2DD700 -> 0x2DD78C
// this: r16
void zNPCSleepy::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DD700 -> 0x2DD78C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD790 -> 0x002DD800
*/
// Range: 0x2DD790 -> 0x2DD800
// this: r17
void zNPCMonsoon::NewTime(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DD790 -> 0x2DD800
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD800 -> 0x002DD840
*/
// Range: 0x2DD800 -> 0x2DD840
// this: r16
void zNPCMonsoon::Process(class xScene * xscn /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2DD800 -> 0x2DD840
        class xPsyche * psy; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD840 -> 0x002DD928
*/
// Range: 0x2DD840 -> 0x2DD928
// this: r2
unsigned int zNPCMonsoon::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DD840 -> 0x2DD928
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DD930 -> 0x002DDA8C
*/
// Range: 0x2DD930 -> 0x2DDA8C
// this: r16
void zNPCMonsoon::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DD930 -> 0x2DDA8C
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDA90 -> 0x002DDAE4
*/
// Range: 0x2DDA90 -> 0x2DDAE4
// this: r17
void zNPCMonsoon::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DDA90 -> 0x2DDAE4
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDAF0 -> 0x002DDAF8
*/
// Range: 0x2DDAF0 -> 0x2DDAF8
// this: r2
void zNPCMonsoon::Reset() {
    /* anonymous block */ {
        // Range: 0x2DDAF0 -> 0x2DDAF8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDB00 -> 0x002DDB88
*/
// Range: 0x2DDB00 -> 0x2DDB88
// this: r16
void zNPCMonsoon::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DDB00 -> 0x2DDB88
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDB90 -> 0x002DDCA0
*/
// Range: 0x2DDB90 -> 0x2DDCA0
// this: r2
unsigned int zNPCGlove::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DDB90 -> 0x2DDCA0
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDCA0 -> 0x002DDDE8
*/
// Range: 0x2DDCA0 -> 0x2DDDE8
// this: r16
void zNPCGlove::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DDCA0 -> 0x2DDDE8
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDDF0 -> 0x002DDE44
*/
// Range: 0x2DDDF0 -> 0x2DDE44
// this: r17
void zNPCGlove::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DDDF0 -> 0x2DDE44
        class NPCConfig * cfg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDE50 -> 0x002DDEAC
*/
// Range: 0x2DDE50 -> 0x2DDEAC
// this: r16
void zNPCGlove::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DDE50 -> 0x2DDEAC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDEB0 -> 0x002DDFA8
*/
// Range: 0x2DDEB0 -> 0x2DDFA8
// this: r2
unsigned int zNPCTarTar::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DDEB0 -> 0x2DDFA8
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DDFB0 -> 0x002DE120
*/
// Range: 0x2DDFB0 -> 0x2DE120
// this: r16
void zNPCTarTar::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DDFB0 -> 0x2DE120
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE120 -> 0x002DE16C
*/
// Range: 0x2DE120 -> 0x2DE16C
// this: r16
void zNPCTarTar::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DE120 -> 0x2DE16C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE170 -> 0x002DE1DC
*/
// Range: 0x2DE170 -> 0x2DE1DC
// this: r16
void zNPCTarTar::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE170 -> 0x2DE1DC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE1E0 -> 0x002DE368
*/
// Range: 0x2DE1E0 -> 0x2DE368
// this: r2
unsigned int zNPCHammer::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE1E0 -> 0x2DE368
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE370 -> 0x002DE4CC
*/
// Range: 0x2DE370 -> 0x2DE4CC
// this: r16
void zNPCHammer::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DE370 -> 0x2DE4CC
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE4D0 -> 0x002DE51C
*/
// Range: 0x2DE4D0 -> 0x2DE51C
// this: r16
void zNPCHammer::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DE4D0 -> 0x2DE51C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE520 -> 0x002DE578
*/
// Range: 0x2DE520 -> 0x2DE578
// this: r16
void zNPCHammer::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE520 -> 0x2DE578
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE580 -> 0x002DE5B4
*/
// Range: 0x2DE580 -> 0x2DE5B4
// this: r16
void zNPCCritter::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DE580 -> 0x2DE5B4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE5C0 -> 0x002DE60C
*/
// Range: 0x2DE5C0 -> 0x2DE60C
// this: r16
void zNPCCritter::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE5C0 -> 0x2DE60C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE610 -> 0x002DE9B4
*/
// Range: 0x2DE610 -> 0x2DE9B4
// this: r17
void zNPCChomper::BreathTrail() {
    /* anonymous block */ {
        // Range: 0x2DE610 -> 0x2DE9B4
        class xVec3 pos_emit; // r29+0x60
        class xVec3 vel_emit; // r29+0x50
        class xVec3 pos_emit; // r29+0x40
        class xVec3 vel_emit; // r29+0x30
        class xVec3 vec_boneOffsetLeft; // @ 0x004FEA20
        class xVec3 vec_boneOffsetRight; // @ 0x004FEA30
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DE9C0 -> 0x002DEA90
*/
// Range: 0x2DE9C0 -> 0x2DEA90
// this: r2
unsigned int zNPCChomper::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DE9C0 -> 0x2DEA90
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DEA90 -> 0x002DEB18
*/
// Range: 0x2DEA90 -> 0x2DEB18
// this: r17
void zNPCChomper::Process(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DEA90 -> 0x2DEB18
        signed int gid; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DEB20 -> 0x002DEC10
*/
// Range: 0x2DEB20 -> 0x2DEC10
// this: r16
void zNPCChomper::Stun() {
    /* anonymous block */ {
        // Range: 0x2DEB20 -> 0x2DEC10
        class xVec3 dir_dmg; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DEC10 -> 0x002DED80
*/
// Range: 0x2DEC10 -> 0x2DED80
// this: r16
void zNPCChomper::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DEC10 -> 0x2DED80
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DED80 -> 0x002DEDCC
*/
// Range: 0x2DED80 -> 0x2DEDCC
// this: r16
void zNPCChomper::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DED80 -> 0x2DEDCC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DEDD0 -> 0x002DEE48
*/
// Range: 0x2DEDD0 -> 0x2DEE48
// this: r16
void zNPCChomper::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DEDD0 -> 0x2DEE48
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DEE50 -> 0x002DF254
*/
// Range: 0x2DEE50 -> 0x2DF254
// this: r2
void zNPCFodBzzt::DiscoRender() {
    /* anonymous block */ {
        // Range: 0x2DEE50 -> 0x2DF254
        class RwRGBA rgba_top; // r29+0x13C
        class RwRGBA rgba_bot; // r29+0x138
        class xVec3 pos_top; // r29+0x128
        class xVec3 pos_bot; // r29+0x118
        float uv_top[2]; // r29+0x110
        float uv_bot[2]; // r29+0x108
        class xVec3 vec_aim; // r29+0xF8
        void * mem; // r20
        class RxObjSpace3DVertex * vert_list; // r2
        class RxObjSpace3DVertex * vtx; // r19
        class RwRGBA * _col; // r2
        signed int i; // r18
        class xMat3x3 mat; // r29+0xB0
        class xVec3 pos_edge; // r29+0xE8
        class RwRGBA * _col; // r2
        enum _SDRenderState old_rendstat; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF260 -> 0x002DF5D0
*/
// Range: 0x2DF260 -> 0x2DF5D0
// this: r16
void zNPCFodBzzt::DiscoUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DF260 -> 0x2DF5D0
        float rat; // r1
        float uv_scroll_discoLight[2]; // @ 0x004FEA18
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF5D0 -> 0x002DF5DC
*/
// Range: 0x2DF5D0 -> 0x2DF5DC
// this: r2
void zNPCFodBzzt::DiscoReset() {
    /* anonymous block */ {
        // Range: 0x2DF5D0 -> 0x2DF5DC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF5E0 -> 0x002DF80C
*/
// Range: 0x2DF5E0 -> 0x2DF80C
void zNPCFodBzzt_DoTheHokeyPokey(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2DF5E0 -> 0x2DF80C
        signed int g_somebodyplay; // @ 0x0050EFD0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF810 -> 0x002DF884
*/
// Range: 0x2DF810 -> 0x2DF884
// this: r17
void zNPCFodBzzt::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x2DF810 -> 0x2DF884
        class xPsyche * psy; // r16
        signed int gid; // r2
        class zNPCGoalAlertFodBzzt * alert; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF890 -> 0x002DF960
*/
// Range: 0x2DF890 -> 0x2DF960
// this: r2
unsigned int zNPCFodBzzt::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DF890 -> 0x2DF960
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DF960 -> 0x002DFA50
*/
// Range: 0x2DF960 -> 0x2DFA50
// this: r16
void zNPCFodBzzt::Stun() {
    /* anonymous block */ {
        // Range: 0x2DF960 -> 0x2DFA50
        class xVec3 dir_dmg; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFA50 -> 0x002DFB10
*/
// Range: 0x2DFA50 -> 0x2DFB10
// this: r2
void zNPCFodBzzt::Process(class xScene * xscn /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DFA50 -> 0x2DFB10
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFB10 -> 0x002DFC6C
*/
// Range: 0x2DFB10 -> 0x2DFC6C
// this: r16
void zNPCFodBzzt::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2DFB10 -> 0x2DFC6C
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFC70 -> 0x002DFC78
*/
// Range: 0x2DFC70 -> 0x2DFC78
// this: r2
void zNPCFodBzzt::Reset() {
    /* anonymous block */ {
        // Range: 0x2DFC70 -> 0x2DFC78
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFC80 -> 0x002DFDD0
*/
// Range: 0x2DFC80 -> 0x2DFDD0
// this: r16
void zNPCFodBzzt::Setup() {
    /* anonymous block */ {
        // Range: 0x2DFC80 -> 0x2DFDD0
        class xAnimState * ast; // r2
        char * nam_texture; // r2
        class RwRaster * rast; // r2
        class RwRGBA rgba_beg; // r29+0x3C
        class RwRGBA rgba_end; // r29+0x38
        float uv_scroll[2]; // r29+0x30
        float rad_laser[2]; // r29+0x28
        char * nam_texture; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFDD0 -> 0x002DFE1C
*/
// Range: 0x2DFDD0 -> 0x2DFE1C
// this: r16
void zNPCFodBzzt::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2DFDD0 -> 0x2DFE1C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFE20 -> 0x002DFED0
*/
// Range: 0x2DFE20 -> 0x2DFED0
// this: r16
void zNPCFodBzzt::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DFE20 -> 0x2DFED0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DFED0 -> 0x002E0078
*/
// Range: 0x2DFED0 -> 0x2E0078
// this: r2
void zNPCFodBomb::BlinkerRender() {
    /* anonymous block */ {
        // Range: 0x2DFED0 -> 0x2E0078
        class xVec3 pos_blink; // r29+0x10
        class xVec3 vec_boneOffset; // @ 0x004FEA08
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0080 -> 0x002E00D8
*/
// Range: 0x2E0080 -> 0x2E00D8
// this: r16
void zNPCFodBomb::BlinkerUpdate(float dt /* r29+0x20 */, float pct_timeRemain /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2E0080 -> 0x2E00D8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E00E0 -> 0x002E0118
*/
// Range: 0x2E00E0 -> 0x2E0118
// this: r16
void zNPCFodBomb::BlinkerReset() {
    /* anonymous block */ {
        // Range: 0x2E00E0 -> 0x2E0118
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0120 -> 0x002E01E0
*/
// Range: 0x2E0120 -> 0x2E01E0
// this: r2
unsigned int zNPCFodBomb::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E0120 -> 0x2E01E0
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E01E0 -> 0x002E02D0
*/
// Range: 0x2E01E0 -> 0x2E02D0
// this: r16
void zNPCFodBomb::Stun() {
    /* anonymous block */ {
        // Range: 0x2E01E0 -> 0x2E02D0
        class xVec3 dir_dmg; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E02D0 -> 0x002E042C
*/
// Range: 0x2E02D0 -> 0x2E042C
// this: r16
void zNPCFodBomb::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2E02D0 -> 0x2E042C
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0430 -> 0x002E047C
*/
// Range: 0x2E0430 -> 0x2E047C
// this: r16
void zNPCFodBomb::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2E0430 -> 0x2E047C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0480 -> 0x002E04B4
*/
// Range: 0x2E0480 -> 0x2E04B4
// this: r2
void zNPCFodBomb::Setup() {
    /* anonymous block */ {
        // Range: 0x2E0480 -> 0x2E04B4
        char * nam_texture; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E04C0 -> 0x002E0530
*/
// Range: 0x2E04C0 -> 0x2E0530
// this: r16
void zNPCFodBomb::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E04C0 -> 0x2E0530
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0530 -> 0x002E0620
*/
// Range: 0x2E0530 -> 0x2E0620
// this: r16
void zNPCFodder::Stun() {
    /* anonymous block */ {
        // Range: 0x2E0530 -> 0x2E0620
        class xVec3 dir_dmg; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0620 -> 0x002E0710
*/
// Range: 0x2E0620 -> 0x2E0710
// this: r2
unsigned int zNPCFodder::AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */, class xGoal * rawgoal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E0620 -> 0x2E0710
        signed int idx; // r16
        unsigned int da_anim; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0710 -> 0x002E086C
*/
// Range: 0x2E0710 -> 0x2E086C
// this: r16
void zNPCFodder::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2E0710 -> 0x2E086C
        class xPsyche * psy; // r16
        class xGoal * g; // r2
        class xGoal * g; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0870 -> 0x002E08BC
*/
// Range: 0x2E0870 -> 0x2E08BC
// this: r16
void zNPCFodder::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2E0870 -> 0x2E08BC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E08C0 -> 0x002E092C
*/
// Range: 0x2E08C0 -> 0x2E092C
// this: r16
void zNPCFodder::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E08C0 -> 0x2E092C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0930 -> 0x002E0C80
*/
// Range: 0x2E0930 -> 0x2E0C80
void zNPCRobot_TubeConfetti(class xVec3 * pos_emit /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2E0930 -> 0x2E0C80
        signed int i; // r20
        class xVec3 vel_emit; // r29+0x120
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0C80 -> 0x002E0CC4
*/
// Range: 0x2E0C80 -> 0x2E0CC4
// this: r2
void zNPCRobot::ShowerConfetti(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E0C80 -> 0x2E0CC4
        class xVec3 pos_emit; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0CD0 -> 0x002E0DE0
*/
// Range: 0x2E0CD0 -> 0x2E0DE0
// this: r16
float zNPCRobot::MoveTowardsArena(float dt /* r20 */, float speed /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x2E0CD0 -> 0x2E0DE0
        class xVec3 dir_home; // r29+0x30
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E0DE0 -> 0x002E1160
*/
// Range: 0x2E0DE0 -> 0x2E1160
// this: r2
void zNPCRobot::CornerOfArena(class xVec3 * pos_corner /* r16 */, float dst /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x2E0DE0 -> 0x2E1160
        class NPCArena * arena; // r13
        class xVec3 pos_a; // r29+0x50
        class xVec3 pos_b; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1160 -> 0x002E125C
*/
// Range: 0x2E1160 -> 0x2E125C
// this: r2
float zNPCRobot::FaceAntiPlayer(float dt /* r29+0x30 */, float spd_turn /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2E1160 -> 0x2E125C
        class xVec3 dir_plyr; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1260 -> 0x002E133C
*/
// Range: 0x2E1260 -> 0x2E133C
// this: r2
float zNPCRobot::FacePos(class xVec3 * pos /* r2 */, float dt /* r29+0x30 */, float spd_turn /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2E1260 -> 0x2E133C
        class xVec3 dir_pos; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1340 -> 0x002E14FC
*/
// Range: 0x2E1340 -> 0x2E14FC
// this: r18
void zNPCRobot::TurnThemHeads() {
    /* anonymous block */ {
        // Range: 0x2E1340 -> 0x2E14FC
        class xVec3 dir; // r29+0xB0
        class xMat4x3 * neck; // r19
        class xMat3x3 back; // r29+0x80
        class xMat3x3 mat; // r29+0x50
        float dst_toPlyr; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1500 -> 0x002E156C
*/
// Range: 0x2E1500 -> 0x2E156C
// this: r2
void zNPCRobot::InflictPain(signed int numHitPoints /* r2 */, signed int giveCreditToPlayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E1500 -> 0x2E156C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1570 -> 0x002E1934
*/
// Range: 0x2E1570 -> 0x2E1934
// this: r21
void zNPCRobot::CollideReview() {
    /* anonymous block */ {
        // Range: 0x2E1570 -> 0x2E1934
        class zNPCGoalCommon * goal; // r2
        signed int goaldidit; // r16
        class xEntCollis * npccol; // r20
        class xCollis * colrec; // r16
        class xVec3 vec_depen; // r29+0x90
        signed int i; // r18
        class xSurface * surf; // r2
        signed int badsurf; // r19
        float goodep; // r29+0x9C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1940 -> 0x002E19BC
*/
// Range: 0x2E1940 -> 0x2E19BC
// this: r17
void zNPCRobot::LassoNotify(enum en_LASSO_EVENT event /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E1940 -> 0x2E19BC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E19C0 -> 0x002E1B3C
*/
// Range: 0x2E19C0 -> 0x2E1B3C
// this: r16
void zNPCRobot::SyncStunGlyph(float tmr_remain /* r20 */, float height /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x2E19C0 -> 0x2E1B3C
        class NPCConfig * cfg; // r5
        class xVec3 vec; // r29+0x30
        signed int trun; // r3
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1B40 -> 0x002E1C04
*/
// Range: 0x2E1B40 -> 0x2E1C04
// this: r16
void zNPCRobot::Stun(float stuntime /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E1B40 -> 0x2E1C04
        class NPCMsg msg; // @ 0x005CC3E0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1C10 -> 0x002E1D70
*/
// Range: 0x2E1C10 -> 0x2E1D70
// this: r18
signed int zNPCRobot::SetCarryState(enum en_NPC_CARRY_STATE stat /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E1C10 -> 0x2E1D70
        signed int result; // r16
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1D70 -> 0x002E1E28
*/
// Range: 0x2E1D70 -> 0x2E1E28
// this: r2
signed int zNPCRobot::IsDying() {
    /* anonymous block */ {
        // Range: 0x2E1D70 -> 0x2E1E28
        signed int isdying; // r16
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1E30 -> 0x002E1E98
*/
// Range: 0x2E1E30 -> 0x2E1E98
// this: r16
signed int zNPCRobot::LassoSetup() {
    /* anonymous block */ {
        // Range: 0x2E1E30 -> 0x2E1E98
        signed int idx_grab; // r29+0x2C
        signed int idx_hold; // r29+0x28
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1EB0 -> 0x002E1FB4
*/
// Range: 0x2E1EB0 -> 0x2E1FB4
// this: r19
void zNPCRobot::AddStunThrow(class xPsyche * psy /* r18 */, signed int (* eval_evilpat)(class xGoal *, void *, enum en_trantype *, float, void *) /* r21 */, signed int (* eval_stunned)(class xGoal *, void *, enum en_trantype *, float, void *) /* r20 */, signed int (* eval_patcarry)(class xGoal *, void *, enum en_trantype *, float, void *) /* r17 */, signed int (* eval_patthrow)(class xGoal *, void *, enum en_trantype *, float, void *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E1EB0 -> 0x2E1FB4
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1FC0 -> 0x002E2104
*/
// Range: 0x2E1FC0 -> 0x2E2104
// this: r17
void zNPCRobot::CheckFalling() {
    /* anonymous block */ {
        // Range: 0x2E1FC0 -> 0x2E2104
        signed int i; // r6
        signed int inSkipList; // r16
        signed int gid; // r2
        signed int skipstates[13]; // @ 0x004FE9C0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2110 -> 0x002E24E4
*/
// Range: 0x2E2110 -> 0x2E24E4
// this: r17
void zNPCRobot::DoAliveStuff(float dt /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x2E2110 -> 0x2E24E4
        class xPsyche * psy; // r16
        float wid; // r29+0x70
        class xBound * bnd; // r5
        float dx; // r2
        float dz; // r29+0x70
        class xVec3 pos_drvArena; // r29+0x60
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E24F0 -> 0x002E2560
*/
// Range: 0x2E24F0 -> 0x2E2560
// this: r2
void zNPCRobot::DuploOwner(class zNPCCommon * duper /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E24F0 -> 0x2E2560
        class xPsyche * psy; // r16
        class zNPCGoalAfterlife * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2560 -> 0x002E27F8
*/
// Range: 0x2E2560 -> 0x2E27F8
// this: r19
signed int zNPCRobot::RoboHandleMail(class NPCMsg * mail /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2E2560 -> 0x2E27F8
        signed int handled; // r17
        class zNPCGoalDamage * dmggoal; // r2
        class zNPCGoalEvilPat * evilgoal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2800 -> 0x002E2910
*/
// Range: 0x2E2800 -> 0x2E2910
// this: r20
signed int zNPCRobot::NPCMessage(class NPCMsg * mail /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2E2800 -> 0x2E2910
        class zNPCGoalCommon * curgoal; // r18
        class zNPCGoalCommon * recgoal; // r17
        class xPsyche * psy; // r16
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2910 -> 0x002E2A90
*/
// Range: 0x2E2910 -> 0x2E2A90
// this: r30
signed int zNPCRobot::SysEvent(class xBase * from /* r22 */, class xBase * to /* r21 */, unsigned int toEvent /* r20 */, float * toParam /* r19 */, class xBase * toParamWidget /* r18 */, signed int * handled /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E2910 -> 0x2E2A90
        signed int doother; // r2
        class xGoal * curgoal; // r16
        class xGoal * recgoal; // r2
        class xPsyche * psy; // r23
        class NPCMsg npcmsg; // @ 0x005CC390
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2A90 -> 0x002E2CFC
*/
// Range: 0x2E2A90 -> 0x2E2CFC
unsigned int AnimPick(signed int gid /* r2 */, enum en_NPC_GOAL_SPOT gspot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E2A90 -> 0x2E2CFC
        signed int idx; // r4
        unsigned int da_anim; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2D00 -> 0x002E2F90
*/
// Range: 0x2E2D00 -> 0x2E2F90
// this: r17
void zNPCRobot::SelfSetup() {
    /* anonymous block */ {
        // Range: 0x2E2D00 -> 0x2E2F90
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r16
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2F90 -> 0x002E3000
*/
// Range: 0x2E2F90 -> 0x2E3000
// this: r17
void zNPCRobot::NewTime(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E2F90 -> 0x2E3000
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3000 -> 0x002E3078
*/
// Range: 0x2E3000 -> 0x2E3078
// this: r17
void zNPCRobot::Process(class xScene * xscn /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E3000 -> 0x2E3078
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3080 -> 0x002E30B8
*/
// Range: 0x2E3080 -> 0x2E30B8
// this: r16
void zNPCRobot::ParseINI() {
    /* anonymous block */ {
        // Range: 0x2E3080 -> 0x2E30B8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E30C0 -> 0x002E315C
*/
// Range: 0x2E30C0 -> 0x2E315C
// this: r2
float zNPCRobot::GenShadCacheRad() {
    /* anonymous block */ {
        // Range: 0x2E30C0 -> 0x2E315C
        float fac_use; // r20
        float rad_cache; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3160 -> 0x002E333C
*/
// Range: 0x2E3160 -> 0x2E333C
// this: r16
void zNPCRobot::Reset() {
    /* anonymous block */ {
        // Range: 0x2E3160 -> 0x2E333C
        class zNPCGoalAfterlife * goal; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3340 -> 0x002E3384
*/
// Range: 0x2E3340 -> 0x2E3384
// this: r16
void zNPCRobot::Init(class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E3340 -> 0x2E3384
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3390 -> 0x002E33C0
*/
// Range: 0x2E3390 -> 0x2E33C0
// this: r2
unsigned char zNPCRobot::PhysicsFlags() {
    /* anonymous block */ {
        // Range: 0x2E3390 -> 0x2E33C0
        signed int flags; // r4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E33C0 -> 0x002E33E0
*/
// Range: 0x2E33C0 -> 0x2E33E0
// this: r2
unsigned char zNPCRobot::ColPenFlags() {
    /* anonymous block */ {
        // Range: 0x2E33C0 -> 0x2E33E0
        signed int flags; // r3
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E33E0 -> 0x002E3400
*/
// Range: 0x2E33E0 -> 0x2E3400
// this: r2
unsigned char zNPCRobot::ColChkFlags() {
    /* anonymous block */ {
        // Range: 0x2E33E0 -> 0x2E3400
        signed int flags; // r3
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3400 -> 0x002E3598
*/
// Range: 0x2E3400 -> 0x2E3598
class xAnimTable * ZNPC_AnimTable_Slick() {
    /* anonymous block */ {
        // Range: 0x2E3400 -> 0x2E3598
        class xAnimTable * table; // r16
        signed int ourAnims[4]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E35A0 -> 0x002E361C
*/
// Range: 0x2E35A0 -> 0x2E361C
class xAnimTable * ZNPC_AnimTable_SlickShield() {
    /* anonymous block */ {
        // Range: 0x2E35A0 -> 0x2E361C
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3620 -> 0x002E369C
*/
// Range: 0x2E3620 -> 0x2E369C
class xAnimTable * ZNPC_AnimTable_FloatDevice() {
    /* anonymous block */ {
        // Range: 0x2E3620 -> 0x2E369C
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E36A0 -> 0x002E3758
*/
// Range: 0x2E36A0 -> 0x2E3758
class xAnimTable * ZNPC_AnimTable_Tubelet() {
    /* anonymous block */ {
        // Range: 0x2E36A0 -> 0x2E3758
        class xAnimTable * table; // r16
        signed int ourAnims[2]; // r29+0x48
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3760 -> 0x002E3988
*/
// Range: 0x2E3760 -> 0x2E3988
class xAnimTable * ZNPC_AnimTable_Chuck() {
    /* anonymous block */ {
        // Range: 0x2E3760 -> 0x2E3988
        class xAnimTable * table; // r16
        signed int ourAnims[4]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3990 -> 0x002E3C10
*/
// Range: 0x2E3990 -> 0x2E3C10
class xAnimTable * ZNPC_AnimTable_ArfArf() {
    /* anonymous block */ {
        // Range: 0x2E3990 -> 0x2E3C10
        class xAnimTable * table; // r16
        signed int ourAnims[7]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3C10 -> 0x002E4120
*/
// Range: 0x2E3C10 -> 0x2E4120
class xAnimTable * ZNPC_AnimTable_ArfDog() {
    /* anonymous block */ {
        // Range: 0x2E3C10 -> 0x2E4120
        class xAnimTable * table; // r16
        signed int ourAnims[17]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4120 -> 0x002E4230
*/
// Range: 0x2E4120 -> 0x2E4230
class xAnimTable * ZNPC_AnimTable_SleepyTime() {
    /* anonymous block */ {
        // Range: 0x2E4120 -> 0x2E4230
        class xAnimTable * table; // r16
        signed int ourAnims[3]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4230 -> 0x002E42D8
*/
// Range: 0x2E4230 -> 0x2E42D8
class xAnimTable * ZNPC_AnimTable_NightLight() {
    /* anonymous block */ {
        // Range: 0x2E4230 -> 0x2E42D8
        class xAnimTable * table; // r16
        signed int ourAnims[2]; // r29+0x48
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E42E0 -> 0x002E43E8
*/
// Range: 0x2E42E0 -> 0x2E43E8
class xAnimTable * ZNPC_AnimTable_ThunderCloud() {
    /* anonymous block */ {
        // Range: 0x2E42E0 -> 0x2E43E8
        class xAnimTable * table; // r16
        signed int ourAnims[3]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E43F0 -> 0x002E45D8
*/
// Range: 0x2E43F0 -> 0x2E45D8
class xAnimTable * ZNPC_AnimTable_Monsoon() {
    /* anonymous block */ {
        // Range: 0x2E43F0 -> 0x2E45D8
        class xAnimTable * table; // r16
        signed int ourAnims[5]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E45E0 -> 0x002E4930
*/
// Range: 0x2E45E0 -> 0x2E4930
class xAnimTable * ZNPC_AnimTable_GLove() {
    /* anonymous block */ {
        // Range: 0x2E45E0 -> 0x2E4930
        class xAnimTable * table; // r16
        signed int ourAnims[8]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4930 -> 0x002E49AC
*/
// Range: 0x2E4930 -> 0x2E49AC
class xAnimTable * ZNPC_AnimTable_TTSauce() {
    /* anonymous block */ {
        // Range: 0x2E4930 -> 0x2E49AC
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E49B0 -> 0x002E4BD8
*/
// Range: 0x2E49B0 -> 0x2E4BD8
class xAnimTable * ZNPC_AnimTable_TarTar() {
    /* anonymous block */ {
        // Range: 0x2E49B0 -> 0x2E4BD8
        class xAnimTable * table; // r16
        signed int ourAnims[4]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4BE0 -> 0x002E4E58
*/
// Range: 0x2E4BE0 -> 0x2E4E58
class xAnimTable * ZNPC_AnimTable_Hammer() {
    /* anonymous block */ {
        // Range: 0x2E4BE0 -> 0x2E4E58
        class xAnimTable * table; // r16
        signed int ourAnims[6]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E4E60 -> 0x002E5440
*/
// Range: 0x2E4E60 -> 0x2E5440
class xAnimTable * ZNPC_AnimTable_Fodder() {
    /* anonymous block */ {
        // Range: 0x2E4E60 -> 0x2E5440
        class xAnimTable * table; // r16
        signed int ourAnims[16]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E5440 -> 0x002E5A9C
*/
// Range: 0x2E5440 -> 0x2E5A9C
void ZNPC_AnimTable_RobotBase(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E5440 -> 0x2E5A9C
        signed int ourAnims[17]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E5AA0 -> 0x002E5AC4
*/
// Range: 0x2E5AA0 -> 0x2E5AC4
void ZNPC_Destroy_Robot(class xFactoryInst * inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E5AA0 -> 0x2E5AC4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E5AD0 -> 0x002E6308
*/
// Range: 0x2E5AD0 -> 0x2E6308
class xFactoryInst * ZNPC_Create_Robot(signed int who /* r16 */, class RyzMemGrow * grow /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E5AD0 -> 0x2E6308
        class zNPCRobot * robo; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E6310 -> 0x002E63B0
*/
// Range: 0x2E6310 -> 0x2E63B0
void zNPCRobot_Timestep(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2E6310 -> 0x2E63B0
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E63B0 -> 0x002E63D4
*/
// Range: 0x2E63B0 -> 0x2E63D4
void zNPCRobot_ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2E63B0 -> 0x2E63D4
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E63E0 -> 0x002E63E8
*/
// Range: 0x2E63E0 -> 0x2E63E8
void zNPCRobot_SceneReset() {
    /* anonymous block */ {
        // Range: 0x2E63E0 -> 0x2E63E8
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E63F0 -> 0x002E63FC
*/
// Range: 0x2E63F0 -> 0x2E63FC
void zNPCRobot_SceneFinish() {
    /* anonymous block */ {
        // Range: 0x2E63F0 -> 0x2E63FC
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E6400 -> 0x002E642C
*/
// Range: 0x2E6400 -> 0x2E642C
void zNPCRobot_ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x2E6400 -> 0x2E642C
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E6430 -> 0x002E6438
*/
// Range: 0x2E6430 -> 0x2E6438
void ZNPC_Robot_Shutdown() {
    /* anonymous block */ {
        // Range: 0x2E6430 -> 0x2E6438
    }
}


/*
    Compile unit: C:\SB\Game\zNPCTypeRobot.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E6440 -> 0x002E6598
*/
// Range: 0x2E6440 -> 0x2E6598
void ZNPC_Robot_Startup() {
    /* anonymous block */ {
        // Range: 0x2E6440 -> 0x2E6598
        signed int i; // r18
    }
}


