/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zWad2.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
unsigned int gFXSurfaceFlags; // size: 0x4, address: 0x6374C0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static class xFXRing sPatrickStunRing[3]; // size: 0xC0, address: 0x61F1B0
static class xFXRing sThunderRing[1]; // size: 0x40, address: 0x0
static class xFXRing sHammerRing[1]; // size: 0x40, address: 0x0
static class xFXRing sPorterRing[2]; // size: 0x80, address: 0x0
static class xFXRing sMuscleArmRing[1]; // size: 0x40, address: 0x0
static float defaultGooTimes[4]; // size: 0x10, address: 0x61F270
static float defaultGooWarbc[4]; // size: 0x10, address: 0x61F280
class zFXGooInstance zFXGooInstances[24]; // size: 0xB40, address: 0x669F10
static class ztextbox * sGooTimerTextBox; // size: 0x4, address: 0x6374C8
static enum iSndHandle sGooSndHandle; // size: 0x4, address: 0x636A6C
static enum iSndGroupHandle sGooSndGrpHandle; // size: 0x4, address: 0x636A70
class xEnt * g_entForGoo[24]; // size: 0x60, address: 0x66AA50
class xVec3 zfx_bubblehit_pos_rnd; // size: 0xC, address: 0x5FBCA8
class xVec3 zfx_bubblehit_vel_rnd; // size: 0xC, address: 0x5FBCB8
float zfx_bubblehit_vel_scale; // size: 0x4, address: 0x636A80
class xVec3 bubbletrail_pos_rnd; // size: 0xC, address: 0x5FBCC8
class xVec3 bubbletrail_vel_rnd; // size: 0xC, address: 0x5FBCD8
float bubbletrail_vel_scale; // size: 0x4, address: 0x0
static class xVec3 bubblewall_scale; // size: 0xC, address: 0x61F290
static class xVec3 bubblewall_velscale; // size: 0xC, address: 0x61F2A0
static unsigned short popper_weight_sizes[8]; // size: 0x10, address: 0x61F2B0
static class popper_data poppers[8]; // size: 0x2C0, address: 0x66AAB0
static class popper_data instantPopper; // size: 0x58, address: 0x66AD70
static class entrail_type entrail_types[7]; // size: 0x1C0, address: 0x5FBD00
static class entrail_data * entrails; // size: 0x4, address: 0x6374CC
static unsigned int entrails_size; // size: 0x4, address: 0x6374D0
static unsigned int ribbonCount; // size: 0x4, address: 0x6374D4
static class xFXRibbon * ribbonPool; // size: 0x4, address: 0x6374D8
static unsigned char * ribbonInUse; // size: 0x4, address: 0x6374DC
float thresh; // size: 0x4, address: 0x0
float thresh; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
static unsigned int sPlayerMarkerStartID; // size: 0x4, address: 0x6374E0
static float sGameOverTimer; // size: 0x4, address: 0x6374E4
float sTimeElapsed; // size: 0x4, address: 0x6374E8
float gRealTimeElapsed; // size: 0x4, address: 0x6374EC
signed long sTimeLast; // size: 0x4, address: 0x6374F0
signed long sTimeCurrent; // size: 0x4, address: 0x6374F8
unsigned int gLevelChanged; // size: 0x4, address: 0x637500
static signed int g_hiphopReloadHIP; // size: 0x4, address: 0x637504
static signed int g_hiphopForcePortal; // size: 0x4, address: 0x637508
static signed int g_hiphopResetOnly; // size: 0x4, address: 0x0
static signed int g_hiphopEnabled; // size: 0x4, address: 0x0
static class xColor_tag sFadeColor; // size: 0x4, address: 0x0
static unsigned int gzAsyncSceneID; // size: 0x4, address: 0x63750C
unsigned int startPressed; // size: 0x4, address: 0x636A84
class xColor_tag black; // size: 0x4, address: 0x0
class xColor_tag clear; // size: 0x4, address: 0x0
unsigned int gSoak; // size: 0x4, address: 0x637510
char * * soaklevels; // size: 0x4, address: 0x637514
char * allsoaklevels[33]; // size: 0x84, address: 0x5FBEC0
char * otherNonSoakLevels[44]; // size: 0xB0, address: 0x0
static float SOAK_DELAY; // size: 0x4, address: 0x636A88
static float SOAK_DELAYRAND; // size: 0x4, address: 0x636A8C
static float soaktime; // size: 0x4, address: 0x636A90
signed int doCallLogging; // size: 0x4, address: 0x0
signed int enableMemDebugLogging; // size: 0x4, address: 0x0
signed int enableHackNProbeLogging; // size: 0x4, address: 0x0
signed int enableSuperSoaker; // size: 0x4, address: 0x637518
signed int enableMuttonMasher; // size: 0x4, address: 0x63751C
static signed int superSoak_simulatePlayerAction; // size: 0x4, address: 0x0
static unsigned int superSoakExtraPadOnInput; // size: 0x4, address: 0x0
static unsigned int superSoakExtraPadPressInput; // size: 0x4, address: 0x0
class xPortalAsset dummyPortalAsset; // size: 0x18, address: 0x66ADD0
class _zPortal dummyPortal; // size: 0x14, address: 0x66ADF0
static unsigned int loadMeter; // size: 0x4, address: 0x637520
static unsigned int loadCDMeter; // size: 0x4, address: 0x0
static signed long t0; // size: 0x4, address: 0x637538
static signed long t1; // size: 0x4, address: 0x637540
static signed long w0; // size: 0x4, address: 0x637548
static signed long w1; // size: 0x4, address: 0x637550
static signed long gloop_time; // size: 0x4, address: 0x637558
static signed long gwait_time; // size: 0x4, address: 0x637560
static signed int gloop_ct; // size: 0x4, address: 0x637568
static float gloop_time_secs; // size: 0x4, address: 0x63756C
static float gwait_time_secs; // size: 0x4, address: 0x637570
static float gloop_net_time_secs; // size: 0x4, address: 0x637574
float snd_radius; // size: 0x4, address: 0x0
unsigned int gLastProfileDump; // size: 0x4, address: 0x0
void (* zSB04_BossPreRender)(); // size: 0x4, address: 0x637578
class RwCamera * sGameScreenTransCam; // size: 0x4, address: 0x637580
static class RpWorld * gWorld; // size: 0x4, address: 0x637584
static class RpLight * DirectionalLight; // size: 0x4, address: 0x637588
unsigned int bgID; // size: 0x4, address: 0x636A98
float bgu1; // size: 0x4, address: 0x63758C
float bgv1; // size: 0x4, address: 0x637590
float bgu2; // size: 0x4, address: 0x636A9C
float bgv2; // size: 0x4, address: 0x636AA0
unsigned char bgr; // size: 0x1, address: 0x636AA4
unsigned char bgg; // size: 0x1, address: 0x636AA8
unsigned char bgb; // size: 0x1, address: 0x636AAC
unsigned char bga; // size: 0x1, address: 0x636AB0
static signed int g_enableGameExtras; // size: 0x4, address: 0x637594
static signed int g_currDay; // size: 0x4, address: 0x637598
static signed int g_currMonth; // size: 0x4, address: 0x63759C
static signed int g_gameExtraFlags; // size: 0x4, address: 0x6375A0
static class EGGItemFuncs EGGModuleTest; // size: 0x10, address: 0x0
static class EGGItemFuncs EGGBirthDay; // size: 0x10, address: 0x0
static class EGGItemFuncs EGGSnow; // size: 0x10, address: 0x0
static class EGGItemFuncs EGGRain; // size: 0x10, address: 0x0
static class EGGItemFuncs EGGEmpty; // size: 0x10, address: 0x66AE10
static class EGGItem g_eggBasket[2]; // size: 0x20, address: 0x5FC050
static signed int g_flg_chEnabled; // size: 0x4, address: 0x6375A4
static float sCheatTimer; // size: 0x4, address: 0x6375A8
static signed int sCheatInputCount; // size: 0x4, address: 0x6375AC
unsigned int sCheatAddShiny[16]; // size: 0x40, address: 0x0
unsigned int sCheatAddSpatulas[16]; // size: 0x40, address: 0x0
unsigned int sCheatBubbleBowl[16]; // size: 0x40, address: 0x0
unsigned int sCheatCruiseBubble[16]; // size: 0x40, address: 0x0
unsigned int sCheatMonsterGallery[16]; // size: 0x40, address: 0x0
unsigned int sCheatArtTheatre[16]; // size: 0x40, address: 0x0
unsigned int sCheatTestCheats[16]; // size: 0x40, address: 0x0
unsigned int sCheatTargetCostumeSBCaveman[16]; // size: 0x40, address: 0x5FC070
unsigned int sCheatTargetCostumeSBRippedShorts[16]; // size: 0x40, address: 0x5FC0B0
unsigned int sCheatTargetCostumePatGoofyGoober[16]; // size: 0x40, address: 0x5FC0F0
unsigned int sCheatTargetCostumePatCaveman[16]; // size: 0x40, address: 0x5FC130
unsigned int sMaxHealth[16]; // size: 0x40, address: 0x5FC170
unsigned int sManliness[16]; // size: 0x40, address: 0x0
unsigned int sGoofyGoober[16]; // size: 0x40, address: 0x0
unsigned int sBubbleBash[16]; // size: 0x40, address: 0x0
unsigned int sMachoBowl[16]; // size: 0x40, address: 0x0
unsigned int sSonicGuitar[16]; // size: 0x40, address: 0x0
unsigned int sBellyFlop[16]; // size: 0x40, address: 0x0
unsigned int sPickupThrow[16]; // size: 0x40, address: 0x0
unsigned int sAllMoves[16]; // size: 0x40, address: 0x5FC1B0
unsigned int sAllUpgradedMoves[16]; // size: 0x40, address: 0x5FC1F0
unsigned int sChaChing[16]; // size: 0x40, address: 0x5FC230
unsigned int sTenSkillPoints[16]; // size: 0x40, address: 0x0
unsigned int sTenTreasureChests[16]; // size: 0x40, address: 0x0
unsigned int sAllTasks[16]; // size: 0x40, address: 0x5FC270
static class GECheat cheatList[10]; // size: 0xA0, address: 0x5FC2B0
unsigned int sCheatPressed[16]; // size: 0x40, address: 0x66AE20
static class xEnt * sGalleryTitle; // size: 0x4, address: 0x0
signed int gGameState; // size: 0x4, address: 0x636AB8
enum eGameMode gGameMode; // size: 0x4, address: 0x6375B0
enum _GameOstrich gGameOstrich; // size: 0x4, address: 0x6375B4
static unsigned int sGameMode_DispatchTable[13]; // size: 0x34, address: 0x66AE60
static unsigned int sGameState_DispatchTable[8]; // size: 0x20, address: 0x5FC350
static unsigned int sPauseState_DispatchTable[2]; // size: 0x8, address: 0x636AC0
static unsigned int sSaveState_DispatchTable[3]; // size: 0xC, address: 0x5FC370
static unsigned int sOptionsState_DispatchTable[1]; // size: 0x4, address: 0x636AC8
static unsigned int sLoadState_DispatchTable[3]; // size: 0xC, address: 0x5FC380
static unsigned int sTitleState_DispatchTable[2]; // size: 0x8, address: 0x636AD0
static unsigned int sIntroState_DispatchTable[4]; // size: 0x10, address: 0x5FC390
static unsigned int sGameState_DoDispatchTable[8]; // size: 0x20, address: 0x5FC3A0
static unsigned int sPauseState_DoDispatchTable[2]; // size: 0x8, address: 0x636AD8
static unsigned int sSaveState_DoDispatchTable[3]; // size: 0xC, address: 0x5FC3C0
static unsigned int sOptionsState_DoDispatchTable[1]; // size: 0x4, address: 0x636AE0
static unsigned int sLoadState_DoDispatchTable[3]; // size: 0xC, address: 0x5FC3D0
static unsigned int sTitleState_DoDispatchTable[2]; // size: 0x8, address: 0x636AE8
static unsigned int sIntroState_DoDispatchTable[4]; // size: 0x10, address: 0x5FC3E0
static class zGooParams * zgoo_gps; // size: 0x4, address: 0x6375B8
static signed int zgoo_ngps; // size: 0x4, address: 0x6375BC
static signed int zgoo_nused; // size: 0x4, address: 0x6375C0
static class zGrapplePoint * sGrapplePoints; // size: 0x4, address: 0x0
static signed int sNumGrapplePoints; // size: 0x4, address: 0x0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
class xGrid grabbable_grid; // size: 0x38, address: 0x66AF60
static signed int zGridInitted; // size: 0x4, address: 0x6375C4
static class zHangableObject * sPlayerHangObj; // size: 0x4, address: 0x0
static class xVec3 playerDPos; // size: 0xC, address: 0x0
static class zHangableObject * sHangableObjects; // size: 0x4, address: 0x0
static signed int sNumHangableObjects; // size: 0x4, address: 0x0
class zHitSourceMapEntry zHitSourceMap[22]; // size: 0xB0, address: 0x61F2C0
unsigned int zHitSourceCCs[21]; // size: 0x54, address: 0x0
unsigned int zHitTargetCCs[7]; // size: 0x1C, address: 0x0
static signed int sPatTongueLastCount; // size: 0x4, address: 0x6375C8
static class RwRaster * sLassoRaster; // size: 0x4, address: 0x6375CC
static class zLassoGuideList sGuideList[64]; // size: 0x3800, address: 0x0
static unsigned int sNumGuideLists; // size: 0x4, address: 0x0
static class zLassoGuide * sCurrentGuide; // size: 0x4, address: 0x6375D0
static class RxObjSpace3DVertex * lnverts; // size: 0x4, address: 0x6375D4
static signed int negativeHondaX; // size: 0x4, address: 0x636AF0
static class PatTongueVert sPatMouthVert[12]; // size: 0x2A0, address: 0x5FC3F0
static class PatTongueVert sPatTipVert[12]; // size: 0x2A0, address: 0x5FC690
static class PatTongueVert sPatTeethVert[2]; // size: 0x70, address: 0x5FC930
static class xVec3 sPatHitchPos; // size: 0xC, address: 0x66AF98
static class RwMatrixTag sPatTongueTipMatrix; // size: 0x40, address: 0x66AFB0
static class xVec3 sPatTongueLastVec[16]; // size: 0xC0, address: 0x66AFF0
static class xVec3 sPatTongueLastRight; // size: 0xC, address: 0x66B0B0
static class _zLight * sLight[32]; // size: 0x80, address: 0x66B0C0
static signed int sLightTotal; // size: 0x4, address: 0x6375D8
static class _tagPartition sLightPart; // size: 0x40, address: 0x66B140
static class zVolume * sPartitionVolume; // size: 0x4, address: 0x6375DC
static signed int gNumTemporaryLights; // size: 0x4, address: 0x6375E0
static class _zLight * gTemporaryLights[32]; // size: 0x80, address: 0x66B180
void (* sEffectFuncs[18])(class _zLight *, float); // size: 0x48, address: 0x5FC9A0
void (* sEffectInitFuncs[18])(class _zLight *); // size: 0x48, address: 0x5FC9F0
static class xVec3 sDefaultShadowVec; // size: 0xC, address: 0x5FCA38
static class zLightning * sLightning; // size: 0x4, address: 0x6375E4
static class zParEmitter * sSparkEmitter; // size: 0x4, address: 0x0
static class RwRaster * sLightningRaster; // size: 0x4, address: 0x6375E8
static class RwRaster * sLightningRasterBranch; // size: 0x4, address: 0x6375EC
static class RwTexture * sLightningParticleRaster; // size: 0x4, address: 0x6375F0
float LIGHTNING_FADE_DIST_SQR; // size: 0x4, address: 0x6375F4
float LIGHTNING_CULL_DIST_SQR; // size: 0x4, address: 0x6375F8
static class xFuncPiece sLFuncX[10]; // size: 0x140, address: 0x66B200
static class xFuncPiece sLFuncY[10]; // size: 0x140, address: 0x66B340
static class xFuncPiece sLFuncZ[10]; // size: 0x140, address: 0x66B480
static class xVec3 sLFuncVal[10]; // size: 0x78, address: 0x66B5C0
static class xVec3 sLFuncSlope[10][2]; // size: 0xF0, address: 0x66B640
static float sLFuncEnd[10]; // size: 0x28, address: 0x66B730
static float sLFuncJerkFreq; // size: 0x4, address: 0x636AF4
static float sLFuncJerkTime; // size: 0x4, address: 0x6375FC
static float sLFuncShift; // size: 0x4, address: 0x636AF8
static float sLFuncMaxPStep; // size: 0x4, address: 0x0
static float sLFuncMinPStep; // size: 0x4, address: 0x0
static float sLFuncMinScale; // size: 0x4, address: 0x636AFC
static float sLFuncMaxScale; // size: 0x4, address: 0x636B00
static float sLFuncScalePerLength; // size: 0x4, address: 0x636B04
static float sLFuncMinSpan; // size: 0x4, address: 0x636B08
static float sLFuncSpanPerLength; // size: 0x4, address: 0x636B0C
static float sLFuncSlopeRange; // size: 0x4, address: 0x636B10
static float sLFuncUVSpeed; // size: 0x4, address: 0x636B14
static float sLFuncUVOffset; // size: 0x4, address: 0x637600
class zLightningFuncPiece sLFuncNew[11]; // size: 0x160, address: 0x66B760
class _tagLightningAdd gLightningTweakAddInfo; // size: 0x68, address: 0x66B8C0
static class xVec3 sTweakStart; // size: 0xC, address: 0x66B928
static class xVec3 sTweakEnd; // size: 0xC, address: 0x66B938
static class tweak_callback sLightningStartCB; // size: 0x28, address: 0x66B950
static class tweak_callback sLightningChangeCB; // size: 0x28, address: 0x0
class CollisionInfo collisionInfo; // size: 0x20, address: 0x66B980
class xVec3 * posArray; // size: 0x4, address: 0x637604
static class xVec3 sPoint[5]; // size: 0x3C, address: 0x0
static float sSize[5]; // size: 0x14, address: 0x0
signed int system_count; // size: 0x4, address: 0x637608
class lightweight_system_base * system[10]; // size: 0x28, address: 0x66B9A0
static unsigned int sLODTableCount; // size: 0x4, address: 0x63760C
static class zLODTable * sLODTableList; // size: 0x4, address: 0x637610
static unsigned int sManagerIndex; // size: 0x4, address: 0x637614
static unsigned int sManagerCount; // size: 0x4, address: 0x637618
static float sLODFadeDistance; // size: 0x4, address: 0x636B18
static class zLODManager sManagerList[2048]; // size: 0x8000, address: 0x66B9D0
static signed int sFirstBoot; // size: 0x4, address: 0x636B1C
static signed int logoTmr; // size: 0x4, address: 0x0
static float time_elapsed; // size: 0x4, address: 0x636B20
static float time_last; // size: 0x4, address: 0x63761C
static float time_current; // size: 0x4, address: 0x637620
static float sAttractMode_timer; // size: 0x4, address: 0x637624
static float sOneLiner_timer; // size: 0x4, address: 0x637628
static signed int promptSel; // size: 0x4, address: 0x0
static signed int card; // size: 0x4, address: 0x63762C
static signed int var; // size: 0x4, address: 0x0
static signed int fullCard; // size: 0x4, address: 0x0
static signed int sInMenu; // size: 0x4, address: 0x637630
static float ONELINER_WAITTIME; // size: 0x4, address: 0x0
static float holdTmr; // size: 0x4, address: 0x636B24
static unsigned char sAllowAttract; // size: 0x1, address: 0x637634
static class PowerUpMenuTableEntry sPowerUpMenuTable[11]; // size: 0xB0, address: 0x5FCB10
static unsigned int sPowerUpMenuTableSize; // size: 0x4, address: 0x636B28
static char * cPowerUpMenuRefreshGroupName; // size: 0x4, address: 0x636B2C
static class PowerUpMovieTableEntry sPowerUpMovieTable[10]; // size: 0xA0, address: 0x5FCBC0
static unsigned int sPowerUpMovieTableSize; // size: 0x4, address: 0x636B30
static class taskEntry sDefaultWorldTasks[20]; // size: 0x140, address: 0x6739D0
static unsigned int sNumWorlds; // size: 0x4, address: 0x637638
static class extraEntry sExtrasList[50]; // size: 0xC8, address: 0x673B10
static unsigned int sNumExtras; // size: 0x4, address: 0x63763C
static unsigned char sNumChestsNeeded; // size: 0x1, address: 0x637640
static enum eFMVFile sExtrasMovieList[14]; // size: 0x38, address: 0x5FCCA0
static signed int sExtrasMovieListSize; // size: 0x4, address: 0x0
static class extraCostumeEntry sExtraCostumeList[8]; // size: 0x60, address: 0x5FCCE0
static unsigned int sExtraCostumeListSize; // size: 0x4, address: 0x636B34
static unsigned char bNoChatter; // size: 0x1, address: 0x637644
static class xModelInstance * tempModel; // size: 0x4, address: 0x637648
static unsigned int sNextSceneID; // size: 0x4, address: 0x63764C
class xVec3 sparkleStart; // size: 0xC, address: 0x673BD8
class xVec3 sparkleEnd; // size: 0xC, address: 0x5FCDB8
class xVec3 sparkleScale; // size: 0xC, address: 0x5FCDC8
class xVec3 sparkleVel; // size: 0xC, address: 0x0
float sparkleTime; // size: 0x4, address: 0x636B38
float totalTimeForEffect; // size: 0x4, address: 0x637650
float multiplier; // size: 0x4, address: 0x637654
float randomYOffset; // size: 0x4, address: 0x637658
float probability; // size: 0x4, address: 0x63765C
class zUITextAsset * powerupText[10]; // size: 0x28, address: 0x673BF0
signed int powerupIndex; // size: 0x4, address: 0x636B3C
unsigned char effectStarted; // size: 0x1, address: 0x637660
float fmvDelay; // size: 0x4, address: 0x636B40
enum iSndHandle upgradeSound; // size: 0x4, address: 0x0
enum iSndGroupHandle upgradeSoundGroupHandle; // size: 0x4, address: 0x636B44
static class xSoundFX * sCurrentChatter; // size: 0x4, address: 0x637664
static class zMovePoint * g_mvpt_list; // size: 0x4, address: 0x637668
static signed int g_mvpt_cnt; // size: 0x4, address: 0x63766C
static class zMusicTrackInfo sMusicTrack[2]; // size: 0x48, address: 0x673C20
static class xSndGroup * spMusicGroup; // size: 0x4, address: 0x637670
static class zMusicState sMusic; // size: 0xC, address: 0x673C68
float gDialogueMusicLevel; // size: 0x4, address: 0x636B48
static signed int g_modinit; // size: 0x4, address: 0x637674
static class zNPCMgr * g_npcmgr; // size: 0x4, address: 0x637678
class NPCBrainTableEntry g_brainTable[67]; // size: 0x324, address: 0x5FCDE0
char * EVENT_TYPE_STRINGS[49]; // size: 0xC4, address: 0x0
// total size: 0x38
struct /* @anon5 */ {} zNPC::base::__vtable; // size: 0x38, address: 0x6354C0
signed int zNPCMgr_OrdComp_npcid(void *, void *); // size: 0x0, address: 0x2BDCE0
signed int zNPCMgr_OrdTest_npcid(void *, void *); // size: 0x0, address: 0x2BDD20
class zGlobals globals; // size: 0x2410, address: 0x7AB790
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
class xVec3 g_O3; // size: 0xC, address: 0x62C4D0
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
signed int MVPT_dflt_chklos(void *, class xVec3 *, class zMovePoint *); // size: 0x0, address: 0x0
void zMovePointEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x2BFFA0
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x638300
// total size: 0x4C
struct /* @anon6 */ {} zUICustomPalRedirector::__vtable; // size: 0x4C, address: 0x635500
// total size: 0x4C
struct /* @anon40 */ {} zUICustom::__vtable; // size: 0x4C, address: 0x635230
// total size: 0x4C
struct /* @anon36 */ {} zUICustomDialogPlayer::__vtable; // size: 0x4C, address: 0x635550
// total size: 0x4C
struct /* @anon14 */ {} zUICustomUpgradeTutorialContoller::__vtable; // size: 0x4C, address: 0x6355A0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
// total size: 0x4C
struct /* @anon22 */ {} zUICustomLoadingText::__vtable; // size: 0x4C, address: 0x6355F0
// total size: 0x4C
struct /* @anon39 */ {} zUICustomExtrasArt::__vtable; // size: 0x4C, address: 0x635640
// total size: 0x4C
struct /* @anon37 */ {} zUICustomExtrasSound::__vtable; // size: 0x4C, address: 0x635690
// total size: 0x4C
struct /* @anon30 */ {} zUICustomExtrasIcon::__vtable; // size: 0x4C, address: 0x6356E0
// total size: 0x4C
struct /* @anon44 */ {} zUICustomExtrasManager::__vtable; // size: 0x4C, address: 0x635730
float SECS_PER_VBLANK; // size: 0x4, address: 0x6382F4
unsigned int SCENE_ID_MNU_START; // size: 0x4, address: 0x6382FC
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x7AB120
class xVec3 m_Null; // size: 0xC, address: 0x62CAA8
class _tagxPad mPad[4]; // size: 0x4E0, address: 0x68A3A0
unsigned int gFrameCount; // size: 0x4, address: 0x637EFC
class xColor_tag g_CLEAR; // size: 0x4, address: 0x62C8B0
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
class _zEnv * gCurEnv; // size: 0x4, address: 0x63773C
class xMat4x3 g_I3; // size: 0x40, address: 0x6D3810
class xEnt * AddToLODList(class xEnt *, class xScene *, void *); // size: 0x0, address: 0x2C5CE0
unsigned char HDR_brightening; // size: 0x1, address: 0x638330
class tagiRenderArrays gRenderArr; // size: 0x5280, address: 0x6A8870
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
class _tagxPad * gDebugPad; // size: 0x4, address: 0x0
void lightningTweakStart(class tweak_info &); // size: 0x0, address: 0x2C9C70
void EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x2C9D50
class RpWorld * gLightWorld; // size: 0x4, address: 0x638524
void zLightEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x2CA960
void zHangable_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x0
signed int gCartwheelButton; // size: 0x4, address: 0x637A40
signed int gBowlButton; // size: 0x4, address: 0x63792C
signed int gBashButton; // size: 0x4, address: 0x637A18
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x62CAC8
enum eSNDCurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x6379FC
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
float VBLANKS_PER_SEC; // size: 0x4, address: 0x636F18
unsigned int gBusStopIsRunning; // size: 0x4, address: 0x637CCC
class xSndGlobals gSnd; // size: 0x2970, address: 0x7A57F0
unsigned int gSceneFrameCount; // size: 0x4, address: 0x637F00
float speedOfSound; // size: 0x4, address: 0x62CA80
void on_spawn_bubble_wall(class tweak_info &); // size: 0x0, address: 0x2DCD20
void RenderThread(void *); // size: 0x0, address: 0x3978A0
// total size: 0x18
struct /* @anon45 */ {} zLoadingScreen::__vtable; // size: 0x18, address: 0x635170
// total size: 0x18
struct /* @anon46 */ {} zAsync::Screen::__vtable; // size: 0x18, address: 0x0
class xVec3 g_Y3; // size: 0xC, address: 0x62C4F0
class RpAtomic * (* gAtomicRenderCallBack)(class RpAtomic *); // size: 0x4, address: 0x637F94
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x16ACD8
class RxPipeline * xFXgooPipeline; // size: 0x4, address: 0x637FCC
class RpAtomic * zFXGooRenderAtomic(class RpAtomic *); // size: 0x0, address: 0x2DC0F0
unsigned char _enabled; // size: 0x1, address: 0x638408
void cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x2DCD30
// total size: 0x148
struct /* @anon38 */ {} zNMEMindy::__vtable; // size: 0x148, address: 0x632E90
// total size: 0x148
struct /* @anon19 */ {} zNMEFriendly::__vtable; // size: 0x148, address: 0x632D40
// total size: 0x148
struct /* @anon9 */ {} zNMECommon::__vtable; // size: 0x148, address: 0x633530
// total size: 0xC0
struct /* @anon3 */ {} zNMENPCWrapper::__vtable; // size: 0xC0, address: 0x630B50
// total size: 0x14C
struct /* @anon2 */ {} zNMETongueSpin::__vtable; // size: 0x14C, address: 0x630990
// total size: 0x148
struct /* @anon35 */ {} zNMESBBat::__vtable; // size: 0x148, address: 0x632BF0
// total size: 0x24
struct /* @anon13 */ {} zBossCam_Binary::__vtable; // size: 0x24, address: 0x635F00
// total size: 0x24
struct /* @anon11 */ {} xCam::__vtable; // size: 0x24, address: 0x0
// total size: 0x148
struct /* @anon0 */ {} zNMENeptune::__vtable; // size: 0x148, address: 0x6338D0
// total size: 0x148
struct /* @anon12 */ {} zNMEBoss::__vtable; // size: 0x148, address: 0x633A20
// total size: 0x14C
struct /* @anon4 */ {} zNMEDenToo::__vtable; // size: 0x14C, address: 0x633E80
// total size: 0xC
struct /* @anon34 */ {} DennisLetMeKnow::__vtable; // size: 0xC, address: 0x634150
// total size: 0xC
struct /* @anon29 */ {} xPSYNote::__vtable; // size: 0xC, address: 0x0
// total size: 0x14C
struct /* @anon26 */ {} zNMEDennis::__vtable; // size: 0x14C, address: 0x634160
// total size: 0x14C
struct /* @anon20 */ {} zNMEFrogfish::__vtable; // size: 0x14C, address: 0x633BA0
// total size: 0x14C
struct /* @anon27 */ {} zNMEBuckotron::__vtable; // size: 0x14C, address: 0x633780
// total size: 0xC
struct /* @anon8 */ {} MervLetMeKnow::__vtable; // size: 0xC, address: 0x632160
// total size: 0x154
struct /* @anon28 */ {} zNMEMervyn::__vtable; // size: 0x154, address: 0x632170
// total size: 0x154
struct /* @anon21 */ {} zNMEStandard::__vtable; // size: 0x154, address: 0x6329F0
// total size: 0xC
struct /* @anon25 */ {} ZapLetMeKnow::__vtable; // size: 0xC, address: 0x631840
// total size: 0x154
struct /* @anon23 */ {} zNMEZapper::__vtable; // size: 0x154, address: 0x631850
// total size: 0x158
struct /* @anon18 */ {} zNMEPopper::__vtable; // size: 0x158, address: 0x631E80
// total size: 0x154
struct /* @anon42 */ {} zNMESpinner::__vtable; // size: 0x154, address: 0x631A10
// total size: 0xC
struct /* @anon15 */ {} FlingLetMeKnow::__vtable; // size: 0xC, address: 0x632610
// total size: 0x154
struct /* @anon1 */ {} zNMEFlinger::__vtable; // size: 0x154, address: 0x632620
// total size: 0x154
struct /* @anon32 */ {} zNMESlammer::__vtable; // size: 0x154, address: 0x631C00
// total size: 0x154
struct /* @anon24 */ {} zNMEFogger::__vtable; // size: 0x154, address: 0x632360
// total size: 0x148
struct /* @anon47 */ {} zNMETurSpiral::__vtable; // size: 0x148, address: 0x630DF0
// total size: 0x148
struct /* @anon31 */ {} zNMETurret::__vtable; // size: 0x148, address: 0x630FA0
// total size: 0x148
struct /* @anon17 */ {} zNMETurTurner::__vtable; // size: 0x148, address: 0x630C70
// total size: 0x148
struct /* @anon41 */ {} zNMETurPopup::__vtable; // size: 0x148, address: 0x631150
// total size: 0x14C
struct /* @anon7 */ {} zNMETurBarrel::__vtable; // size: 0x14C, address: 0x631360
// total size: 0x14C
struct /* @anon16 */ {} zNMECritJelly::__vtable; // size: 0x14C, address: 0x633290
// total size: 0x148
struct /* @anon33 */ {} zNMECritter::__vtable; // size: 0x148, address: 0x6330A0
// total size: 0x148
struct /* @anon10 */ {} zNMECritBasic::__vtable; // size: 0x148, address: 0x6333E0
// total size: 0x14C
struct /* @anon43 */ {} zNMETiki::__vtable; // size: 0x14C, address: 0x6315D0
// total size: 0x2A0
class zEntPickup : public zEnt {
    // Members
public:
    class zAssetPickup * p; // offset 0xDC, size 0x4
    void * anim; // offset 0xE0, size 0x4
    float animTime; // offset 0xE4, size 0x4
    float timer; // offset 0xE8, size 0x4
    float fx_scale; // offset 0xEC, size 0x4
    class xVec3 grab_pos; // offset 0xF0, size 0xC
    float reward_timer; // offset 0xFC, size 0x4
    class xVec3 vel; // offset 0x100, size 0xC
    class xVec3 droppos; // offset 0x10C, size 0xC
    class xBase * followTarget; // offset 0x118, size 0x4
    class xVec3 followOffset; // offset 0x11C, size 0xC
    class xBase * dropParent; // offset 0x128, size 0x4
    class xEnt * useThisEntPos; // offset 0x12C, size 0x4
    class xEntDrive drv; // offset 0x130, size 0xC0
    class xShadowSimpleCache simpShadow_embedded; // offset 0x1F0, size 0xA4
    unsigned int state; // offset 0x294, size 0x4
    unsigned int updateIndex; // offset 0x298, size 0x4
    unsigned char pickupFlags; // offset 0x29C, size 0x1
    unsigned char flyflags; // offset 0x29D, size 0x1
    unsigned char flg_opts; // offset 0x29E, size 0x1
};
// total size: 0x0
class NURBS {};
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
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
// total size: 0x18
class zHangable : public xBase {
    // Members
public:
    class zHangableAsset * hangableAsset; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
// total size: 0x6C
class zUI : public xBase {
    // Members
public:
    class zUIAsset * asset; // offset 0x10, size 0x4
    class State current; // offset 0x14, size 0x18
    class State startMovement; // offset 0x2C, size 0x18
    float z; // offset 0x44, size 0x4
    class zUIMotionAsset * selectedMotion; // offset 0x48, size 0x4
    class zUIMotionAsset * unselectedMotion; // offset 0x4C, size 0x4
    class zUICustom * custom; // offset 0x50, size 0x4
    unsigned char visible; // offset 0x54, size 0x1
    unsigned char focus; // offset 0x55, size 0x1
    unsigned char lastFocus; // offset 0x56, size 0x1
    unsigned char selected; // offset 0x57, size 0x1
    unsigned char brighten; // offset 0x58, size 0x1
    unsigned char hdrPass; // offset 0x59, size 0x1
    unsigned char locked; // offset 0x5A, size 0x1
    class zUIMotionAsset * motion; // offset 0x60, size 0x4
    float motionTime; // offset 0x64, size 0x4
    unsigned char motionFiredEvent; // offset 0x68, size 0x1
    unsigned char motionLoop; // offset 0x69, size 0x1
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
class zCutsceneMgr : public xCutsceneMgr {
    // Members
public:
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
// total size: 0x30
class NitroMeter : public ModelAndFontHideOnTextBox {};
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
// total size: 0x0
class st_XSAVEGAME_DATA {};
// total size: 0x34
class zUICustomExtrasIcon : public zUICustom {
    // Members
public:
    float mOffsetX; // offset 0x8, size 0x4
    float mOffsetY; // offset 0xC, size 0x4
    float mWidth; // offset 0x10, size 0x4
    float mHeight; // offset 0x14, size 0x4
    unsigned char mbFullReset; // offset 0x18, size 0x1
    unsigned char misUnlocked; // offset 0x19, size 0x1
    unsigned char mbIsHidden; // offset 0x1A, size 0x1
    class xModelInstance * munlockedModel; // offset 0x1C, size 0x4
    class xAnimTable * munlockedAtbl; // offset 0x20, size 0x4
    float munlockedOffsetX; // offset 0x24, size 0x4
    float munlockedOffsetY; // offset 0x28, size 0x4
    float munlockedWidth; // offset 0x2C, size 0x4
    float munlockedHeight; // offset 0x30, size 0x4
};
// total size: 0x8
class zUICustomLoadingText : public zUICustom {};
// total size: 0x0
class zUIMotionAsset {};
enum zFXGooState {
    zFXGooStateNormal = 0,
    zFXGooStateFreezing = 1,
    zFXGooStateFrozen = 2,
    zFXGooStateMelting = 3,
    zFXGooStateInactive = -559038737,
    zFXGooStateForce32Bit = -1,
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
// total size: 0x10
class EGGItem {
    // Members
public:
    signed int (* fun_check)(class EGGItem *); // offset 0x0, size 0x4
    class EGGItemFuncs * funcs; // offset 0x4, size 0x4
    signed int enabled; // offset 0x8, size 0x4
    class EGGData eggdata; // offset 0xC, size 0x4
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
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
// total size: 0x30
class zMovePoint : public xMovePoint {};
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
// total size: 0x64
class _zLight : public xBase {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zLightAsset * tasset; // offset 0x14, size 0x4
    class iLight light; // offset 0x18, size 0x3C
    class xBase * attached_to; // offset 0x54, size 0x4
    signed int true_idx; // offset 0x58, size 0x4
    float * reg; // offset 0x5C, size 0x4
    signed int effect_idx; // offset 0x60, size 0x4
};
// total size: 0x4
class lightweight_system_base {};
// total size: 0x78
class zUIModel : public zUI {
    // Members
public:
    class xModelInstance * model; // offset 0x6C, size 0x4
    class xAnimTable * atbl; // offset 0x70, size 0x4
    class xSurface * surf; // offset 0x74, size 0x4
};
// total size: 0x20
class zLightningFuncPiece {
    // Members
public:
    class xVec3 coef0; // offset 0x0, size 0xC
    float param; // offset 0xC, size 0x4
    class xVec3 coef1; // offset 0x10, size 0xC
    unsigned int pad; // offset 0x1C, size 0x4
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
// total size: 0x38
class PatTongueVert {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xModelTagWithNormal tag; // offset 0xC, size 0x2C
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
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x44
class zLightAsset : public xBaseAsset {
    // Members
public:
    unsigned char lightType; // offset 0x8, size 0x1
    unsigned char lightEffect; // offset 0x9, size 0x1
    unsigned char lightPad[2]; // offset 0xA, size 0x2
    unsigned int lightFlags; // offset 0xC, size 0x4
    float lightColor[4]; // offset 0x10, size 0x10
    class xVec3 lightDir; // offset 0x20, size 0xC
    float lightConeAngle; // offset 0x2C, size 0x4
    class xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
};
// total size: 0x44
class zUICustomExtrasManager : public zUICustom {
    // Members
public:
    unsigned char mCurRow; // offset 0x8, size 0x1
    unsigned char mCurColumn; // offset 0x9, size 0x1
    unsigned char mNumRows; // offset 0xA, size 0x1
    unsigned char mNumColumns; // offset 0xB, size 0x1
    float mOffsetX; // offset 0xC, size 0x4
    float mOffsetY; // offset 0x10, size 0x4
    unsigned char mbInSubScreen; // offset 0x14, size 0x1
    class zUI * * mGrid; // offset 0x18, size 0x4
    class zUI * * mIconTypes; // offset 0x1C, size 0x4
    class xGroup * mAuraGroup; // offset 0x20, size 0x4
    class zUIText * mDescription; // offset 0x24, size 0x4
    class zUIText * mActionText; // offset 0x28, size 0x4
    class zUIText * mNextExtraText; // offset 0x2C, size 0x4
    class xGroup * mNextExtraGroup; // offset 0x30, size 0x4
    class xSoundFX * mSoundMove; // offset 0x34, size 0x4
    class xSoundFX * mSoundDeny; // offset 0x38, size 0x4
    class xSoundFX * mSoundConfirm; // offset 0x3C, size 0x4
    class zUICustom * * mSubScreens; // offset 0x40, size 0x4
};
// total size: 0x148
struct /* @anon0 */ {};
// total size: 0x14
class xModelAssetInfo {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int NumModelInst; // offset 0x4, size 0x4
    unsigned int AnimTableID; // offset 0x8, size 0x4
    unsigned int CombatID; // offset 0xC, size 0x4
    unsigned int BrainID; // offset 0x10, size 0x4
};
// total size: 0xC
class NPCBrainTableEntry {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum en_npctyp type; // offset 0x4, size 0x4
    unsigned int id; // offset 0x8, size 0x4
};
// total size: 0x154
struct /* @anon1 */ {};
// total size: 0x20
class zUICustomExtrasSound : public zUICustom {
    // Members
public:
    unsigned char mNumSounds; // offset 0x8, size 0x1
    unsigned char mCurrentSound; // offset 0x9, size 0x1
    unsigned char mExtraID; // offset 0xA, size 0x1
    class xGroup * mSoundGroup; // offset 0xC, size 0x4
    class xGroup * mTextGroup; // offset 0x10, size 0x4
    class xSoundFX * mSoundMove; // offset 0x14, size 0x4
    class xSoundFX * mSoundDeny; // offset 0x18, size 0x4
    class xSoundFX * mCurrentSoundFX; // offset 0x1C, size 0x4
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
// total size: 0x24
class entrail_data {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short type; // offset 0x2, size 0x2
    class xEnt * ent; // offset 0x4, size 0x4
    class xVec3 loc; // offset 0x8, size 0xC
    class xVec3 vel; // offset 0x14, size 0xC
    float emitted; // offset 0x20, size 0x4
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
// total size: 0x24
class zLODTable {
    // Members
public:
    class xModelBucket * * baseBucket; // offset 0x0, size 0x4
    float noRenderDist; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    class xModelBucket * * lodBucket[3]; // offset 0xC, size 0xC
    float lodDist[3]; // offset 0x18, size 0xC
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
// total size: 0x80
class zFlameEmitter : public xBase {
    // Members
public:
    class asset_type * asset; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    signed int flags; // offset 0x60, size 0x4
    class handle * flames; // offset 0x64, size 0x4
    class property_set props; // offset 0x68, size 0xC
    signed int flames_size; // offset 0x74, size 0x4
    signed int flames_allocated; // offset 0x78, size 0x4
    float oscil; // offset 0x7C, size 0x4
};
// total size: 0x60
class zNMEAsset : public xDynAsset {
    // Members
public:
    class xEntAsset ent_asset; // offset 0x10, size 0x50
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
// total size: 0x14C
struct /* @anon2 */ {};
// total size: 0x30
class xInternalMovieNode {
    // Members
public:
    unsigned int hash_id; // offset 0x0, size 0x4
    class PKRAssetTOCInfo info; // offset 0x4, size 0x18
    class MOVIE * pMovie; // offset 0x1C, size 0x4
    class RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned char used; // offset 0x24, size 0x1
    unsigned char m_looping; // offset 0x25, size 0x1
    unsigned short m_freezeframed; // offset 0x26, size 0x2
    unsigned int m_startframe; // offset 0x28, size 0x4
    unsigned int m_endframe; // offset 0x2C, size 0x4
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
// total size: 0x0
class RpSkin {};
// total size: 0x1C8
class zNPCMgr : public RyzMemData {
    // Members
public:
    class st_XORDEREDARRAY npclist; // offset 0x0, size 0x10
    class xFactory * npcFactory; // offset 0x10, size 0x4
    class xBase selfbase; // offset 0x14, size 0x10
    signed int flg_createForAnim; // offset 0x24, size 0x4
    class base * firstAllocList[104]; // offset 0x28, size 0x1A0
};
// total size: 0x78
class zFXGooInstance {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    signed int freezeGroup; // offset 0x4, size 0x4
    class xVec3 * orig_verts; // offset 0x8, size 0x4
    class RwRGBA * orig_colors; // offset 0xC, size 0x4
    float time; // offset 0x10, size 0x4
    float timer; // offset 0x14, size 0x4
    float w0; // offset 0x18, size 0x4
    float w2; // offset 0x1C, size 0x4
    float warbc[4]; // offset 0x20, size 0x10
    float state_time[4]; // offset 0x30, size 0x10
    class xVec3 center; // offset 0x40, size 0xC
    enum zFXGooState state; // offset 0x4C, size 0x4
    float warb_time; // offset 0x50, size 0x4
    float alpha; // offset 0x54, size 0x4
    float min; // offset 0x58, size 0x4
    float max; // offset 0x5C, size 0x4
    class xVec3 * ref_parentPos; // offset 0x60, size 0x4
    class xVec3 pos_parentOnFreeze; // offset 0x64, size 0xC
    unsigned int pipeFlags; // offset 0x70, size 0x4
    class RpGeometry * geom2; // offset 0x74, size 0x4
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
// total size: 0x0
class asset_type {};
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
class xParSys {};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x58
class popper_data {
    // Members
public:
    enum state_enum state; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
    class RpAtomic * atomic[4]; // offset 0x8, size 0x10
    unsigned int atomic_size; // offset 0x18, size 0x4
    float time; // offset 0x1C, size 0x4
    float end_time; // offset 0x20, size 0x4
    union { // inferred
        class xVec3 model_scale; // offset 0x24, size 0xC
        unsigned int pipe_flags; // offset 0x24, size 0x4
    };
    float rate; // offset 0x30, size 0x4
    float vel; // offset 0x34, size 0x4
    float rloc; // offset 0x38, size 0x4
    float rvel; // offset 0x3C, size 0x4
    float emitted; // offset 0x40, size 0x4
    float radius; // offset 0x44, size 0x4
    float area; // offset 0x48, size 0x4
    signed int faces; // offset 0x4C, size 0x4
    signed int max_faces; // offset 0x50, size 0x4
    float * weight; // offset 0x54, size 0x4
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
// total size: 0x24
class xInternalTextureNode {
    // Members
public:
    class PKRAssetTOCInfo info; // offset 0x0, size 0x18
    union { // inferred
        void * pAssetMemory; // offset 0x18, size 0x4
        class RwTexture * pTexture; // offset 0x18, size 0x4
    };
    unsigned short LRU; // offset 0x1C, size 0x2
    unsigned char refCount; // offset 0x1E, size 0x1
    signed char state; // offset 0x1F, size 0x1
    unsigned char used; // offset 0x20, size 0x1
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class zGrapple : public xBase {
    // Members
public:
    class zGrappleAsset * grappleAsset; // offset 0x10, size 0x4
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
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
class taskEntry {
    // Members
public:
    char name[4]; // offset 0x0, size 0x4
    unsigned char taskStatus[8]; // offset 0x4, size 0x8
    unsigned int numTasks; // offset 0xC, size 0x4
};
// total size: 0x8
class zHitSourceMapEntry {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum zHitSource sourcetype; // offset 0x4, size 0x4
};
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
// total size: 0xC0
struct /* @anon3 */ {};
// total size: 0x0
class zReactiveAnimationData {};
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
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum en_vis {
    VIS_PREPARE_TO_DIE = 0,
    VIS_HORROR_FLIK = 1,
    VIS_OH_DEAR_GAHD = 2,
    VIS_GET_BACK_HERE = 3,
    VIS_I_SEEE_YOUUU = 4,
    VIS_GREY_AND_FOGGY = 5,
    VIS_LIKE_A_BIRDIE = 6,
    VIS_EARTHWORM_JIM = 7,
    VIS_NOBODY_AROUND = 8,
    VIS_NOMORE = 9,
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
class xSndGroup {
    // Members
public:
    class xSndGroupHeader header; // offset 0x0, size 0x20
    class xSndGroupInfo aSndGroupInfo[]; // offset 0x20, size 0x0
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
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
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
// total size: 0x44
class asset_type : public xDynAsset {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class xVec3 loc; // offset 0x14, size 0xC
    class xVec3 dir; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    float heat_random; // offset 0x38, size 0x4
    float damage; // offset 0x3C, size 0x4
    float knockback; // offset 0x40, size 0x4
};
// total size: 0x98
class model_widget : public widget {
    // Members
public:
    unsigned int mid; // offset 0x88, size 0x4
    class xModelInstance * model; // offset 0x8C, size 0x4
    float x_scale; // offset 0x90, size 0x4
    float y_scale; // offset 0x94, size 0x4
};
// total size: 0x14C
struct /* @anon4 */ {};
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
// total size: 0x8
class _tagPartLink {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    class _tagPartLink * next; // offset 0x4, size 0x4
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
enum en_nmesimp {
    NME_SIMP_HAPPY = 0,
    NME_SIMP_DEAD = 1,
    NME_SIMP_IGNORANT = 2,
    NME_SIMP_WARYDETECT = 3,
    NME_SIMP_WARY = 4,
    NME_SIMP_WORRIED = 5,
    NME_SIMP_CONFUSED = 6,
    NME_SIMP_BIGBULLY = 7,
    NPC_STAT_NOMORE = 8,
};
// total size: 0x0
class zReactiveGenre {};
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
// total size: 0x38
struct /* @anon5 */ {};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
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
// total size: 0x4C
struct /* @anon6 */ {};
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
// total size: 0x14
class zGrappleAsset : public xDynAsset {
    // Members
public:
    unsigned int object; // offset 0x10, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
// total size: 0x150
class font_meter_widget : public meter_widget {
    // Members
public:
    class font_context font; // offset 0xC4, size 0x24
    class font_context start_font; // offset 0xE8, size 0x24
    signed int precision; // offset 0x10C, size 0x4
    char buffer[12]; // offset 0x110, size 0xC
    signed int last_value; // offset 0x11C, size 0x4
    class xfont xf; // offset 0x120, size 0x30
};
// total size: 0xC
class zGooParams {
    // Members
public:
    float depth; // offset 0x0, size 0x4
    float orig_depth; // offset 0x4, size 0x4
    class xEnt * goo_ent; // offset 0x8, size 0x4
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
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x0
class zEntHangable {};
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
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x14
class zUICustomImageSlideshow : public zUICustom {
    // Members
public:
    unsigned int m_CurrentImage; // offset 0x8, size 0x4
    unsigned int m_NumImages; // offset 0xC, size 0x4
    class xGroup * m_TextureGroup; // offset 0x10, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
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
class EGGItemFuncs {
    // Members
public:
    void (* fun_update)(float, class EGGItem *); // offset 0x0, size 0x4
    void (* fun_init)(class EGGItem *); // offset 0x4, size 0x4
    void (* fun_reset)(class EGGItem *); // offset 0x8, size 0x4
    void (* fun_done)(class EGGItem *); // offset 0xC, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
// total size: 0x28
class zUICustomExtrasArt : public zUICustom {
    // Members
public:
    unsigned char mExtraID; // offset 0x8, size 0x1
    class zUIImage * mImage; // offset 0xC, size 0x4
    class zUIText * mDescription; // offset 0x10, size 0x4
    class xGroup * mImageGroup; // offset 0x14, size 0x4
    class xSoundFX * mSoundMove; // offset 0x18, size 0x4
    signed long mImageTime; // offset 0x20, size 0x4
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
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
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
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
enum ePOWERUPMENU {
    ePOWERUPMENU_KarateSpin = 0,
    ePOWERUPMENU_Bash = 1,
    ePOWERUPMENU_BubbleBowl = 2,
    ePOWERUPMENU_SonicWave = 3,
    ePOWERUPMENU_BellyBump = 4,
    ePOWERUPMENU_Cartwheel = 5,
    ePOWERUPMENU_BellyFlop = 6,
    ePOWERUPMENU_Throw = 7,
    ePOWERUPMENU_SBHealth = 8,
    ePOWERUPMENU_PatHealth = 9,
    ePOWERUPMENU_PointsAvail = 10,
    ePOWERUPMENU_Max = 11,
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
enum eSNDCurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerCar = 2,
    eCurrentPlayerSpongePat = 3,
    eCurrentPlayerCount = 4,
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
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x20
class xFuncPiece {
    // Members
public:
    float coef[5]; // offset 0x0, size 0x14
    float end; // offset 0x14, size 0x4
    signed int order; // offset 0x18, size 0x4
    class xFuncPiece * next; // offset 0x1C, size 0x4
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
class xPlatformAsset {};
// total size: 0x8
class zDestructibleStateAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    void * * animData; // offset 0x4, size 0x4
};
// total size: 0x100
class IMLightKit {
    // Members
public:
    class xVec4 lightdir[3]; // offset 0x0, size 0x30
    class xVec4 lightcol[5]; // offset 0x30, size 0x50
    class xVec4 extraLightdir[3]; // offset 0x80, size 0x30
    class xVec4 extraLightcol[4]; // offset 0xB0, size 0x40
    signed int extraLights; // offset 0xF0, size 0x4
};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
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
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
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
class xVolumeAsset {};
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
class zUICustomPalRedirector : public zUICustom {};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x48
class zLassoGuide {
    // Members
public:
    class xModelInstance * poly; // offset 0x0, size 0x4
    class xAnimState * lassoAnim; // offset 0x4, size 0x4
    signed int vertMap[16]; // offset 0x8, size 0x40
};
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x14
class /* @class */ {
    // Members
public:
    char * skip; // offset 0x0, size 0x4
    char * noskip; // offset 0x4, size 0x4
    char * quit; // offset 0x8, size 0x4
    char * noquit; // offset 0xC, size 0x4
    char * yesno; // offset 0x10, size 0x4
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
// total size: 0x4
class handle {
    // Members
public:
    class entry_data * node; // offset 0x0, size 0x4
};
// total size: 0x40
class ztalkbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char visible : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class ztextbox * dialog_box; // offset 0x18, size 0x4
    class ztextbox * prompt_box; // offset 0x1C, size 0x4
    class ztextbox * quit_box; // offset 0x20, size 0x4
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        char * skip; // offset 0x0, size 0x4
        char * noskip; // offset 0x4, size 0x4
        char * quit; // offset 0x8, size 0x4
        char * noquit; // offset 0xC, size 0x4
        char * yesno; // offset 0x10, size 0x4
    } prompt; // offset 0x24, size 0x14
    unsigned int triggerPads; // offset 0x38, size 0x4
    class base * npc; // offset 0x3C, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
class property_set {
    // Members
public:
    float damage; // offset 0x0, size 0x4
    float knockback; // offset 0x4, size 0x4
    enum iSndGroupHandle sound_group; // offset 0x8, size 0x4
};
enum pause_ability {
    PA_NONE = 0,
    PA_MENU = 1,
    PA_STALL = 2,
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
// total size: 0x74
class zUIText : public zUI {
    // Members
public:
    class xColor_tag shadowColor; // offset 0x6C, size 0x4
    char * text; // offset 0x70, size 0x4
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
// total size: 0x20
class CollisionInfo {
    // Members
public:
    class xVec3 hitDir; // offset 0x0, size 0xC
    signed int damage; // offset 0xC, size 0x4
    float knockBackSpeed; // offset 0x10, size 0x4
    class zLightning * l; // offset 0x14, size 0x4
    enum iSndGroupHandle soundHit1; // offset 0x18, size 0x4
    enum iSndGroupHandle soundHit2; // offset 0x1C, size 0x4
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
// total size: 0x14C
struct /* @anon7 */ {};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0x8
class zUICustom {
    // Members
public:
    class zUI * ui; // offset 0x4, size 0x4
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
// total size: 0xC
struct /* @anon8 */ {};
// total size: 0xCC
class zLoadingScreen : public Screen {
    // Members
public:
    class zUI * controls[16]; // offset 0x4, size 0x40
    signed int controlCount; // offset 0x44, size 0x4
    void * allocations[32]; // offset 0x48, size 0x80
    signed int allocationCount; // offset 0xC8, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x148
struct /* @anon9 */ {};
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x0
class xFFX {};
// total size: 0x148
struct /* @anon10 */ {};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0x1C
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x8
class zGrapplePoint {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 * pos; // offset 0x4, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
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
class BINK {};
// total size: 0x0
class zAssetPickupTable {};
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
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x24
struct /* @anon11 */ {};
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
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
class zLODManager {
    // Members
public:
    signed int numextra; // offset 0x0, size 0x4
    class zLODTable * lod; // offset 0x4, size 0x4
    class xModelInstance * model; // offset 0x8, size 0x4
    float adjustNoRenderDist; // offset 0xC, size 0x4
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
// total size: 0x1C
class sound_queue {
    // Members
public:
    enum iSndHandle _playing[5]; // offset 0x0, size 0x14
    signed int head; // offset 0x14, size 0x4
    signed int tail; // offset 0x18, size 0x4
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
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
// total size: 0xC
class _tagPartSpace {
    // Members
public:
    signed int total; // offset 0x0, size 0x4
    class _tagPartLink head; // offset 0x4, size 0x8
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
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
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x1FC
class text_widget : public widget {
    // Members
public:
    char text[256]; // offset 0x88, size 0x100
    class xtextbox tb; // offset 0x188, size 0x74
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
// total size: 0x28
class KrabbyPattyMeter : public hud_element {
    // Members
public:
    class unit_meter_widget * krabbyPattyMeter; // offset 0x18, size 0x4
    unsigned int lastHealth; // offset 0x1C, size 0x4
    unsigned int lastMaxHealth; // offset 0x20, size 0x4
    unsigned char firstTime; // offset 0x24, size 0x1
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
// total size: 0x18
class NMEShadParms {
    // Members
public:
    class SimpShadParm simpshad; // offset 0x0, size 0xC
    class FullShadParm fullshad; // offset 0xC, size 0x4
    class ShadowRadii shadrad; // offset 0x10, size 0x8
};
// total size: 0x8
class xModelAssetParam {
    // Members
public:
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
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
// total size: 0x5C
class zLightningAsset : public xDynAsset {
    // Members
public:
    class xVec3 start; // offset 0x10, size 0xC
    class xVec3 end; // offset 0x1C, size 0xC
    class xColor_tag color; // offset 0x28, size 0x4
    float thickness; // offset 0x2C, size 0x4
    float branchSpeed; // offset 0x30, size 0x4
    unsigned int mainTexture; // offset 0x34, size 0x4
    unsigned int branchTexture; // offset 0x38, size 0x4
    signed int damage; // offset 0x3C, size 0x4
    float knockBackSpeed; // offset 0x40, size 0x4
    unsigned int sound; // offset 0x44, size 0x4
    unsigned int soundHit1; // offset 0x48, size 0x4
    unsigned int soundHit2; // offset 0x4C, size 0x4
    unsigned int followStart; // offset 0x50, size 0x4
    unsigned int followEnd; // offset 0x54, size 0x4
    unsigned int collisionEnabled; // offset 0x58, size 0x4
};
// total size: 0x0
class motive_node {};
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
enum eGameMode {
    eGameMode_Boot = 0,
    eGameMode_Intro = 1,
    eGameMode_Title = 2,
    eGameMode_Start = 3,
    eGameMode_Load = 4,
    eGameMode_Options = 5,
    eGameMode_Save = 6,
    eGameMode_Pause = 7,
    eGameMode_Stall = 8,
    eGameMode_WorldMap = 9,
    eGameMode_MonsterGallery = 10,
    eGameMode_ConceptArtGallery = 11,
    eGameMode_Game = 12,
    eGameMode_Count = 13,
};
// total size: 0x8
class xEntOpacity {
    // Members
public:
    float delta_opacity; // offset 0x0, size 0x4
    float delta_opacity_2; // offset 0x4, size 0x4
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
// total size: 0x10
class xFXRibbon {
    // Members
public:
    float texture_offset; // offset 0x0, size 0x4
    float texture_increment_scale; // offset 0x4, size 0x4
    class activity_data * act; // offset 0x8, size 0x4
    class config_type * cfg; // offset 0xC, size 0x4
};
// total size: 0x148
struct /* @anon12 */ {};
// total size: 0x24
struct /* @anon13 */ {};
// total size: 0xC4
class meter_widget : public widget {
    // Members
public:
    class meter_asset * res; // offset 0x88, size 0x4
    float value; // offset 0x8C, size 0x4
    float min_value; // offset 0x90, size 0x4
    float max_value; // offset 0x94, size 0x4
    float inc_value; // offset 0x98, size 0x4
    float end_value; // offset 0x9C, size 0x4
    float inc_accel; // offset 0xA0, size 0x4
    float ping_delay; // offset 0xA4, size 0x4
    class sound_queue pings; // offset 0xA8, size 0x1C
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
enum _GameOstrich {
    eGameOstrich_Loading = 0,
    eGameOstrich_PlayingMovie = 1,
    eGameOstrich_InScene = 2,
    eGameOstrich_Total = 3,
};
// total size: 0x4
class EGGMisc {
    // Members
public:
    signed int other; // offset 0x0, size 0x4
};
// total size: 0x18
class zLightningWidget : private xBase {
    // Members
public:
    class zLightning * l; // offset 0x10, size 0x4
    class zLightningAsset * asset; // offset 0x14, size 0x4
};
// total size: 0x10
class GECheat {
    // Members
public:
    unsigned int * key_code; // offset 0x0, size 0x4
    void (* fun_cheat)(); // offset 0x4, size 0x4
    signed int flg_keep; // offset 0x8, size 0x4
    signed int flg_mode; // offset 0xC, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class _xFColor {
    // Members
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x4
class xPSYNote {};
// total size: 0x34
class spawn_data {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    class xVec3 up; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    float fuel; // offset 0x20, size 0x4
    float heat; // offset 0x24, size 0x4
    float heat_absorb; // offset 0x28, size 0x4
    class xEnt * driver; // offset 0x2C, size 0x4
    class property_set * props; // offset 0x30, size 0x4
};
// total size: 0xC
class SimpShadParm {
    // Members
public:
    float rad_shadow; // offset 0x0, size 0x4
    char * nam_shadowTexture; // offset 0x4, size 0x4
    class RwRaster * rast_shadow; // offset 0x8, size 0x4
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
class extraEntry {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char id; // offset 0x1, size 0x1
    unsigned char chestsNeeded; // offset 0x2, size 0x1
    unsigned char status; // offset 0x3, size 0x1
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
// total size: 0x0
class anim_coll_data {};
enum xSndMode {
    xSndMode_Mono = 0,
    xSndMode_Stereo = 1,
    xSndMode_Dolby = 2,
    xSndMode_Count = 3,
};
// total size: 0x8
class zUICustomDialogPlayer : public zUICustom {};
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
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x30
class ModelAndFontHideOnTextBox : public ModelAndFont {
    // Members
public:
    unsigned char delayedShow; // offset 0x2C, size 0x1
    unsigned char hidden; // offset 0x2D, size 0x1
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class extraCostumeEntry {
    // Members
public:
    unsigned int costumeID; // offset 0x0, size 0x4
    enum eSNDCurrentPlayer player; // offset 0x4, size 0x4
    unsigned int gameExtrasFlag; // offset 0x8, size 0x4
};
// total size: 0x14
class zVolume : public xVolume {};
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
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x4C
struct /* @anon14 */ {};
// total size: 0x3C
class iLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RpLight * hw; // offset 0x4, size 0x4
    class xSphere sph; // offset 0x8, size 0x10
    float radius_sq; // offset 0x18, size 0x4
    class _xFColor color; // offset 0x1C, size 0x10
    class xVec3 dir; // offset 0x2C, size 0xC
    float coneangle; // offset 0x38, size 0x4
};
// total size: 0x34
class GoofyGooberMeter : public ModelAndFontHideOnTextBox {
    // Members
public:
    class zUIText * autoSave; // offset 0x30, size 0x4
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
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
};
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
// total size: 0x4C
class meter_asset : public asset {
    // Members
public:
    float start_value; // offset 0x28, size 0x4
    float min_value; // offset 0x2C, size 0x4
    float max_value; // offset 0x30, size 0x4
    float increment_time; // offset 0x34, size 0x4
    float decrement_time; // offset 0x38, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        unsigned int start_increment; // offset 0x0, size 0x4
        unsigned int increment; // offset 0x4, size 0x4
        unsigned int start_decrement; // offset 0x8, size 0x4
        unsigned int decrement; // offset 0xC, size 0x4
    } sound; // offset 0x3C, size 0x10
};
// total size: 0x90
class zParEmitter : public xParEmitter {};
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
// total size: 0x40
class xFXRing {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float lifetime; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    float time; // offset 0x14, size 0x4
    float ring_radius; // offset 0x18, size 0x4
    float ring_radius_delta; // offset 0x1C, size 0x4
    float ring_tilt; // offset 0x20, size 0x4
    float ring_tilt_delta; // offset 0x24, size 0x4
    float ring_height; // offset 0x28, size 0x4
    float ring_height_delta; // offset 0x2C, size 0x4
    class xColor_tag ring_color; // offset 0x30, size 0x4
    unsigned short ring_segs; // offset 0x34, size 0x2
    unsigned char u_repeat; // offset 0x36, size 0x1
    unsigned char v_repeat; // offset 0x37, size 0x1
    class xFXRing * * parent; // offset 0x38, size 0x4
    class RwRaster * rast_ring; // offset 0x3C, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0xC
struct /* @anon15 */ {};
enum eTrackReason {
    eMusic = 0,
    eNewMusic = 1,
    eTempMusic = 2,
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
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
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0x14
class zUICustomUpgradeTutorialContoller : public zUICustom {
    // Members
public:
    class ztalkbox * upgradeTutorialTalkBox; // offset 0x8, size 0x4
    class zUIText * autoSave; // offset 0xC, size 0x4
    unsigned int upgradeTutorialID; // offset 0x10, size 0x4
};
// total size: 0x4
class EGGData {
    // Members
public:
    union { // inferred
        signed int placeholder; // offset 0x0, size 0x4
        class EGGMisc misc; // offset 0x0, size 0x4
    };
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
// total size: 0x5C
class zUIModelAsset : public zUIAsset {
    // Members
public:
    unsigned int model; // offset 0x50, size 0x4
    unsigned int animationList; // offset 0x54, size 0x4
    unsigned int surface; // offset 0x58, size 0x4
};
// total size: 0x18
class State {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    unsigned char brightness; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
};
// total size: 0x2C
class xModelTagWithNormal : public xModelTag {
    // Members
public:
    class xVec3 normal; // offset 0x20, size 0xC
};
// total size: 0x14C
struct /* @anon16 */ {};
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x20
class zNMEArena {
    // Members
public:
    signed int flg_arena; // offset 0x0, size 0x4
    class xVec3 pos_arena; // offset 0x4, size 0xC
    float rad_arena; // offset 0x10, size 0x4
    class zMovePoint * nav_arena; // offset 0x14, size 0x4
    class zMovePoint * nav_refer_dest; // offset 0x18, size 0x4
    class zMovePoint * nav_refer_curr; // offset 0x1C, size 0x4
};
// total size: 0x10
class PowerUpMenuTableEntry {
    // Members
public:
    enum ePOWERUPMENU entry; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    signed int powerup; // offset 0x8, size 0x4
    class _xCounter * counter; // offset 0xC, size 0x4
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
enum state_enum {
    STATE_NONE = 0,
    STATE_OFF = 1,
    STATE_ON = 2,
    STATE_CONSTANT = 3,
};
// total size: 0x148
struct /* @anon17 */ {};
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
enum xSndListener {
    xSndListener_CAMERA = 0,
    xSndListener_PLAYER = 1,
    xSndListener_MAX_TYPES = 2,
};
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
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
// total size: 0x2B0
class zPlayerSB : public zPlayer {
    // Members
public:
    unsigned char inited; // offset 0xFC, size 0x1
    class ManlinessMeter manlinessMeter; // offset 0x100, size 0xF4
    class KrabbyPattyMeter krabbyPattyMeter; // offset 0x1F4, size 0x28
    class TreasureChest treasureChest; // offset 0x21C, size 0x30
    class GoofyGooberMeter goofyGooberMeter; // offset 0x24C, size 0x34
    class NitroMeter nitroMeter; // offset 0x280, size 0x30
};
// total size: 0x5280
class tagiRenderArrays {
    // Members
public:
    unsigned short m_index[960]; // offset 0x0, size 0x780
    class RxObjSpace3DVertex m_vertex[480]; // offset 0x780, size 0x4380
    float m_vertexTZ[480]; // offset 0x4B00, size 0x780
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
// total size: 0x0
class zFrag {};
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
class /* @class */ {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x158
struct /* @anon18 */ {};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char active : 1; // offset 0x0, size 0x1
    unsigned char dirty : 1; // offset 0x0, size 0x1
    unsigned char show_backdrop : 1; // offset 0x0, size 0x1
    unsigned char skipFrame : 1; // offset 0x0, size 0x1
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
// total size: 0xC
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x148
struct /* @anon19 */ {};
// total size: 0x4
class FullShadParm {
    // Members
public:
    signed int tobeDetermined; // offset 0x0, size 0x4
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x24
class zMusicTrackInfo {
    // Members
public:
    enum iSndHandle sndHandle; // offset 0x0, size 0x4
    unsigned int sndAssetID; // offset 0x4, size 0x4
    float volume; // offset 0x8, size 0x4
    float startVolume; // offset 0xC, size 0x4
    float targetVolume; // offset 0x10, size 0x4
    float targetVolumeTime; // offset 0x14, size 0x4
    float crossFadeStartTime; // offset 0x18, size 0x4
    enum eTrackReason trackDesc; // offset 0x1C, size 0x4
    float playTime; // offset 0x20, size 0x4
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
// total size: 0x2C
class ModelAndFont : public hud_element {
    // Members
public:
    class model_widget * modelWidget; // offset 0x18, size 0x4
    class font_meter_widget * fontMeter; // offset 0x1C, size 0x4
    unsigned int * valueToWatch; // offset 0x20, size 0x4
    unsigned int lastValue; // offset 0x24, size 0x4
    unsigned char okToAutoHide; // offset 0x28, size 0x1
};
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    signed int lastStreamBuffer; // offset 0x8, size 0x4
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
// total size: 0x14C
struct /* @anon20 */ {};
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
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class zDestructibleStateFXList {
    // Members
public:
    unsigned int nfx; // offset 0x0, size 0x4
    class zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x14
class entry_data {
    // Members
public:
    union { // inferred
        class entry_data * next_free_entry; // offset 0x0, size 0x4
        void * value; // offset 0x0, size 0x4
    };
    signed int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0x154
struct /* @anon21 */ {};
// total size: 0x8
class zAnimFxSoundGroup {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
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
// total size: 0x4
class Screen {};
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
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x0
class zAssetPickup {};
// total size: 0x1C
class NMECfgCommon {
    // Members
public:
    class Damage damage; // offset 0x0, size 0x4
    class Physics physics; // offset 0x4, size 0x8
    class Movement movement; // offset 0xC, size 0x10
};
// total size: 0x80
class BarMeter : public hud_element {
    // Members
public:
    class model_widget * bar; // offset 0x18, size 0x4
    class model_widget * barNotch; // offset 0x1C, size 0x4
    class font_meter_widget * barMeter; // offset 0x20, size 0x4
    float sizeOfActualBar; // offset 0x24, size 0x4
    class xVec3 notchLocation; // offset 0x28, size 0xC
    class xVec3 fontLocation; // offset 0x34, size 0xC
    class text_widget * minValueText; // offset 0x40, size 0x4
    class text_widget * maxValueText; // offset 0x44, size 0x4
    class TextureScroller * textureScroller; // offset 0x48, size 0x4
    class widget * barPartsWidgets[5]; // offset 0x4C, size 0x14
    class xLightKit * hudLightKit; // offset 0x60, size 0x4
    unsigned int defaultMinValue; // offset 0x64, size 0x4
    unsigned int defaultMaxValue; // offset 0x68, size 0x4
    unsigned int * valueToWatch; // offset 0x6C, size 0x4
    unsigned int * minValueToWatch; // offset 0x70, size 0x4
    unsigned int * maxValueToWatch; // offset 0x74, size 0x4
    unsigned int lastValue; // offset 0x78, size 0x4
    unsigned char firstTimeUpdate; // offset 0x7C, size 0x1
};
// total size: 0x4C
struct /* @anon22 */ {};
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x154
struct /* @anon23 */ {};
// total size: 0x154
struct /* @anon24 */ {};
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
// total size: 0x8
class ShadowRadii {
    // Members
public:
    float rad_noShadow; // offset 0x0, size 0x4
    float rad_complexShadow; // offset 0x4, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
};
enum en_SOAK_DIR {
    SOAK_FOR = 0,
    SOAK_BACK = 1,
    SOAK_RAND = 2,
    SOAK_NOMORE = 3,
    SOAK_FORCE = 2147483647,
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
// total size: 0x1C
class xSoundFX : public xBase {
    // Members
public:
    class xSoundFXAsset * asset; // offset 0x10, size 0x4
    enum iSndHandle sndHandle; // offset 0x14, size 0x4
    float cachedOuterDistSquared; // offset 0x18, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0xC
struct /* @anon25 */ {};
// total size: 0x18
class hud_element : public xBase {
    // Members
public:
    class hud_element * _next; // offset 0x10, size 0x4
};
// total size: 0x8
class xDestructibleAssetAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0xC
class xMarkerAsset {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
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
// total size: 0x94
class zUIImage : public zUI {
    // Members
public:
    class ImageState currentImage; // offset 0x6C, size 0xC
    class ImageState startMovementImage; // offset 0x78, size 0xC
    class xTextureHandle texture; // offset 0x84, size 0x10
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum en_typeSplash {
    NMEC_SPLASH_WATER = 0,
    NMEC_SPLASH_CHOCOLATE = 1,
    NMEC_SPLASH_LAVA = 2,
    NMEC_SPLASH_BILE = 3,
    NMEC_SPLASH_OIL = 4,
    NMEC_SPLASH_HOTSAUCE = 5,
    NMEC_SPLASH_NUKEGOO = 6,
    NMEC_SPLASH_NOMORE = 7,
};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
// total size: 0x1
class RyzMemData {};
// total size: 0x14C
struct /* @anon26 */ {};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0xF4
class ManlinessMeter : public BarMeter {
    // Members
public:
    class model_widget * upgradeIcon; // offset 0x80, size 0x4
    class text_widget * manlinessPointsComboText; // offset 0x84, size 0x4
    class text_widget * manlinessPointsComboPointsText; // offset 0x88, size 0x4
    unsigned int lastManlinessPoints; // offset 0x8C, size 0x4
    unsigned int minManlinessPoints; // offset 0x90, size 0x4
    unsigned int maxManlinessPoints; // offset 0x94, size 0x4
    unsigned int lastMaxManlinessPoints; // offset 0x98, size 0x4
    unsigned int lastUnusedSkillPoints; // offset 0x9C, size 0x4
    unsigned char firstTimeUpdate; // offset 0xA0, size 0x1
    char nextUpgrade[16]; // offset 0xA1, size 0x10
    class widget * widgets[8]; // offset 0xB4, size 0x20
    class TextureScroller manlinessTextureScroller; // offset 0xD4, size 0x18
    enum iSndHandle upgradeSound; // offset 0xEC, size 0x4
    enum iSndGroupHandle upgradeSoundGroupHandle; // offset 0xF0, size 0x4
};
// total size: 0x18C
class unit_meter_widget : public meter_widget {
    // Members
public:
    class unit_meter_asset res; // offset 0xC4, size 0x94
    class xModelInstance * model[6][2]; // offset 0x158, size 0x30
    float anim_time; // offset 0x188, size 0x4
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
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x10
class PowerUpMovieTableEntry {
    // Members
public:
    signed int powerup; // offset 0x0, size 0x4
    enum eFMVFile level[3]; // offset 0x4, size 0xC
};
// total size: 0x0
class xParGroup {};
enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
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
// total size: 0xE0
class zLassoGuideList {
    // Members
public:
    class xEnt * target; // offset 0x0, size 0x4
    unsigned int numGuides; // offset 0x4, size 0x4
    class zLassoGuide guide[3]; // offset 0x8, size 0xD8
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
// total size: 0x14C
struct /* @anon27 */ {};
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
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
// total size: 0x154
struct /* @anon28 */ {};
// total size: 0xC
struct /* @anon29 */ {};
// total size: 0x4C
struct /* @anon30 */ {};
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x148
struct /* @anon31 */ {};
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
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0xC
class zMusicState {
    // Members
public:
    unsigned int uMusicDefault; // offset 0x0, size 0x4
    unsigned int uMusicRestart; // offset 0x4, size 0x4
    unsigned char bPaused; // offset 0x8, size 0x1
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
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x154
struct /* @anon32 */ {};
// total size: 0xC
class xSimpleObjAsset {
    // Members
public:
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0x14
class zRewardsQ {
    // Members
public:
    unsigned char active; // offset 0x0, size 0x1
    signed int numRewards; // offset 0x4, size 0x4
    class xVec3 spawnPos; // offset 0x8, size 0xC
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
// total size: 0x1C
class model_info {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    class xVec3 loc; // offset 0x4, size 0xC
    class xVec3 size; // offset 0x10, size 0xC
};
// total size: 0x148
struct /* @anon33 */ {};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0xC
struct /* @anon34 */ {};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned int start_increment; // offset 0x0, size 0x4
    unsigned int increment; // offset 0x4, size 0x4
    unsigned int start_decrement; // offset 0x8, size 0x4
    unsigned int decrement; // offset 0xC, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0x4
class Damage {
    // Members
public:
    float tym_invuln; // offset 0x0, size 0x4
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
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
enum eDirection {
    eDIRECTION_X = 0,
    eDIRECTION_Y = 1,
};
// total size: 0x148
struct /* @anon35 */ {};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x4C
struct /* @anon36 */ {};
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
class xCutsceneMgr : public xBase {
    // Members
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
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
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x4C
struct /* @anon37 */ {};
// total size: 0x148
struct /* @anon38 */ {};
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
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x18
class TextureScroller {
    // Members
public:
    class model_widget * m_pModelWidget; // offset 0x0, size 0x4
    unsigned short * m_aMoveIndices; // offset 0x4, size 0x4
    unsigned short m_moveCount; // offset 0x8, size 0x2
    enum eDirection m_dir : 8; // offset 0xA, size 0x4
    unsigned char m_pad1; // offset 0xB, size 0x1
    float m_prevOffset; // offset 0xC, size 0x4
    float m_finalOffset; // offset 0x10, size 0x4
    float m_initialOffset; // offset 0x14, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x24
class font_context {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    signed int justify; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    float space; // offset 0x10, size 0x4
    float drop_x; // offset 0x14, size 0x4
    float drop_y; // offset 0x18, size 0x4
    class xColor_tag c; // offset 0x1C, size 0x4
    class xColor_tag drop_c; // offset 0x20, size 0x4
};
// total size: 0x1C
class NMECSplashData {
    // Members
public:
    class pointer_asset * ass_ptr; // offset 0x0, size 0x4
    class xVec3 pos_splash; // offset 0x4, size 0xC
    float rad_splash; // offset 0x10, size 0x4
    float tym_duration; // offset 0x14, size 0x4
    enum en_typeSplash typ_splash; // offset 0x18, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
enum eExtrasScreenCheats {
    eExtrasScreenCheats_AltTargetHand = 1,
    eExtrasScreenCheats_AlternateHand = 2,
    eExtrasScreenCheats_AltCarHorn = 3,
    eExtrasScreenCheats_LongAntenna = 4,
    eExtrasScreenCheats_AntennaFountain = 5,
    eExtrasScreenCheats_TinyFoggers = 6,
    eExtrasScreenCheats_MagneticPickups = 7,
    eExtrasScreenCheats_MAX = 8,
};
// total size: 0xC
class xEntSpeedData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x340
class zRewardsMgr {
    // Members
public:
    class zRewardsQ rewardsQ[20]; // offset 0x0, size 0x190
    float comboTime; // offset 0x190, size 0x4
    float comboTimer; // offset 0x194, size 0x4
    unsigned int numCratesDestroyed; // offset 0x198, size 0x4
    unsigned int numEnemiesDefeated; // offset 0x19C, size 0x4
    unsigned int lastComboManlinessPoints; // offset 0x1A0, size 0x4
    unsigned int lastComboIndex; // offset 0x1A4, size 0x4
    float spawnTimer; // offset 0x1A8, size 0x4
    unsigned char playerDead; // offset 0x1AC, size 0x1
    class zEntPickup * enemyManlinessPoints[5][20]; // offset 0x1B0, size 0x190
};
// total size: 0x0
class rxReq {};
enum iSndGroupHandle {
};
// total size: 0x4C
struct /* @anon39 */ {};
// total size: 0x94
class unit_meter_asset : public meter_asset {
    // Members
public:
    class model_info model[2]; // offset 0x4C, size 0x38
    class xVec3 offset; // offset 0x84, size 0xC
    unsigned int fill_forward; // offset 0x90, size 0x4
};
// total size: 0x8
class Physics {
    // Members
public:
    float acc_grav; // offset 0x0, size 0x4
    float spd_maxFall; // offset 0x4, size 0x4
};
enum iSndHandle {
};
// total size: 0x4C
struct /* @anon40 */ {};
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
// total size: 0x18
class xEntMotionOrbitData {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x24
class MOVIE {
    // Members
public:
    class BINK * hBink; // offset 0x0, size 0x4
    class RwRaster * pBinkRaster; // offset 0x4, size 0x4
    signed int asyncReadKey; // offset 0x8, size 0x4
    class RwTexture * pBinkTexture; // offset 0xC, size 0x4
    unsigned char * pPreBuffer; // offset 0x10, size 0x4
    unsigned char * pPreBufferAligned; // offset 0x14, size 0x4
    unsigned int PreBufferSize; // offset 0x18, size 0x4
    signed int FileOffset; // offset 0x1C, size 0x4
    class tag_xFile * pFile; // offset 0x20, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
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
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
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
enum en_allow {
    ALLOW_NEVER = 0,
    ALLOW_NORMAL = 1,
    ALLOW_ALWAYS = 2,
    ALLOW_NOMORE = 3,
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
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x10
class xTextureHandle {
    // Members
public:
    class RwTexture * m_pTexture; // offset 0x0, size 0x4
    class xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    class xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    class xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0x148
struct /* @anon41 */ {};
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
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
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
// total size: 0x154
struct /* @anon42 */ {};
// total size: 0xC
class ImageState {
    // Members
public:
    float rotation; // offset 0x0, size 0x4
    float offsetU; // offset 0x4, size 0x4
    float offsetV; // offset 0x8, size 0x4
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
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
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
// total size: 0x14C
struct /* @anon43 */ {};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char visible : 1; // offset 0x0, size 0x1
};
// total size: 0x30
class TreasureChest : public ModelAndFontHideOnTextBox {};
// total size: 0x80
class xCutsceneAudioTrack {
    // Members
public:
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x4C
struct /* @anon44 */ {};
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
// total size: 0x14
class xVolume : public xBase {
    // Members
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
};
// total size: 0x18
struct /* @anon45 */ {};
// total size: 0x18
struct /* @anon46 */ {};
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x148
struct /* @anon47 */ {};
// total size: 0x10
class Movement {
    // Members
public:
    float spd_move; // offset 0x0, size 0x4
    float acc_move; // offset 0x4, size 0x4
    float dst_deviant; // offset 0x8, size 0x4
    float spd_turnrate; // offset 0xC, size 0x4
};
// total size: 0x40
class entrail_type {
    // Members
public:
    char * model_name; // offset 0x0, size 0x4
    signed int bone; // offset 0x4, size 0x4
    float rate; // offset 0x8, size 0x4
    float cull_dist; // offset 0xC, size 0x4
    class xVec3 offset; // offset 0x10, size 0xC
    class xVec3 offset_rand; // offset 0x1C, size 0xC
    class xVec3 vel; // offset 0x28, size 0xC
    class xVec3 vel_rand; // offset 0x34, size 0xC
};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
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
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0xC
class xEntMotionSplineData {
    // Members
public:
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char value_def; // offset 0x0, size 0x1
};
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
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

