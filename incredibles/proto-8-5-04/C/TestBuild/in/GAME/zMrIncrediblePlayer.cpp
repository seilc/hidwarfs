/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
static float UBER_RAY_CHECK_FREQUENCY; // size: 0x4, address: 0x0
static unsigned char drawLedgeTests; // size: 0x1, address: 0x0
static unsigned char drawLedgeGroundRays; // size: 0x1, address: 0x0
static unsigned char drawLedgeLand; // size: 0x1, address: 0x0
static float ZIPLINE_DETECT_RADIUS; // size: 0x4, address: 0x6079E4
static float ZIPLINE_ANIMATION_MOVE_SPEED; // size: 0x4, address: 0x6079E8
static float ZIPLINE_MOVE_TO_POINT_SPEED; // size: 0x4, address: 0x6079EC
static float ZIPLINE_EXIT_SPEED; // size: 0x4, address: 0x6079F0
static float ZIPLINE_MAX_VEL; // size: 0x4, address: 0x6079F4
static float ZIPLINE_MIN_VEL; // size: 0x4, address: 0x6079F8
static float ZIPLINE_RECOVER_TIME; // size: 0x4, address: 0x6079FC
static float ZIPLINE_SWING_BLEND_TIME; // size: 0x4, address: 0x607A00
static float ZIPLINE_SWING_TIME; // size: 0x4, address: 0x607A04
static float ZIPLINE_SWING_CENTER; // size: 0x4, address: 0x607A08
static signed int ZIPLINE_HIT_DAMAGE_DYN; // size: 0x4, address: 0x607A0C
static signed int ZIPLINE_HIT_DAMAGE_STAT; // size: 0x4, address: 0x607A10
static signed int ZIPLINE_HIT_DAMAGE_ENV; // size: 0x4, address: 0x607A14
static float ZIPLINE_DISTANCE_CORRECT; // size: 0x4, address: 0x607A18
static float ZIPLINE_FORCE_MODIFIER; // size: 0x4, address: 0x607A1C
static float ZIPLINE_GRAVITY; // size: 0x4, address: 0x607A20
static float ZIPLINE_LEAN_SMOOTH_CONSTANT; // size: 0x4, address: 0x607A24
static float ZIPLINE_SWITCH_SPEED; // size: 0x4, address: 0x607A28
static float ZIPLINE_TURN_MAX; // size: 0x4, address: 0x607A2C
static float ZIPLINE_CAMERA_FOLLOW_DISTANCE; // size: 0x4, address: 0x607A30
static float ZIPLINE_CAMERA_BELOW_PLAYER; // size: 0x4, address: 0x607A34
static float ZIPLINE_CAMERA_LOOK_OFFSET; // size: 0x4, address: 0x0
static float ZIPLINE_CAMERA_TURN_SPEED_MOVING; // size: 0x4, address: 0x607A38
static float ZIPLINE_CAMERA_TURN_SPEED_INITIAL; // size: 0x4, address: 0x607A3C
static float ZIPLINE_HANG_RADIUS; // size: 0x4, address: 0x0
static float ZIPLINE_DEATH_DELAY; // size: 0x4, address: 0x0
static signed int RIGHTPALMBONE; // size: 0x4, address: 0x607A40
static class xVec3 RIGHTPALMOFFSET; // size: 0xC, address: 0x509518
static signed int LEFTPALMBONE; // size: 0x4, address: 0x607A44
static class xVec3 LEFTPALMOFFSET; // size: 0xC, address: 0x509528
static signed int LEDGE_NPC_BONE; // size: 0x4, address: 0x607A48
static class xVec3 LEDGE_NPC_OFFSET; // size: 0xC, address: 0x67FF28
static float LEDGE_NPC_TOSS_AT; // size: 0x4, address: 0x607A4C
static float LEDGE_NPC_TOSS_UP; // size: 0x4, address: 0x607A50
static float LEDGE_NPC_TOSS_LEFT; // size: 0x4, address: 0x607A54
static class xVec3 GRABOFFSET; // size: 0xC, address: 0x509538
static class smoke_config zipline_smoke_settings; // size: 0x38, address: 0x67FF40
static class config grab_dust_config; // size: 0x4C, address: 0x67FF80
static class config ledge_dirt_config; // size: 0x4C, address: 0x67FFD0
static signed int headBones[19]; // size: 0x4C, address: 0x5EAB40
static float drivingLerpTable[12]; // size: 0x30, address: 0x5EAB90
static float reactionLerpTable[12]; // size: 0x30, address: 0x5EABC0
// total size: 0x10C
struct /* @anon0 */ {} zMrIncrediblePlayer::__vtable; // size: 0x10C, address: 0x5FFD60
class zGlobals globals; // size: 0x640, address: 0x61C210
class zCombatCombo zccombo; // size: 0x218, address: 0x69A010
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
class config default_config; // size: 0xB4, address: 0x6A2490
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x1D0B50
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
class xGrid colls_oso_grid; // size: 0x38, address: 0x66BC20
class xGrid colls_grid; // size: 0x38, address: 0x66BBE0
class xGrid npcs_grid; // size: 0x38, address: 0x66BC60
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x653BA0
class xVec3 m_UnitAxisX; // size: 0xC, address: 0x5E7C50
class xVec3 g_Y3; // size: 0xC, address: 0x5E77E0
unsigned int anTurretStartCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FAA0
unsigned int anTurretStartCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F3A0
unsigned int anSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F5D0
unsigned int anRunEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F4B0
unsigned int anRunNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F540
unsigned int anWalkEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F640
unsigned int anWalkNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F6B0
unsigned int anIdleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F910
unsigned int anIdleEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F840
unsigned int anIdleNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F920
unsigned int anActionLiftDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FBF0
unsigned int anActionLiftDropCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FBC0
unsigned int anActionLiftTossCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FD00
unsigned int anActionLiftStruggleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FD20
unsigned int anActionLiftGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FD70
unsigned int anActionLaunchDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FDD0
unsigned int anActionLaunchQuitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FE40
unsigned int anActionLaunchQuitCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FEE0
unsigned int anLandCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252FB0
unsigned int anActionLaunchLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FF00
unsigned int anActionLaunchApexCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FF20
unsigned int anActionLaunchLiftCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FF40
unsigned int anActionLaunchFlingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FF60
unsigned int anActionLaunchGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x24FF80
unsigned int anActionLaunchIntroCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250040
unsigned int anActionTurnReleaseCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2500A0
unsigned int anActionTurnReleaseCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2500B0
unsigned int anActionTurnLeftCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250110
unsigned int anActionTurnRightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2500F0
unsigned int anActionTurnIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2500D0
unsigned int anActionTurnReadyCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250130
unsigned int anActionTurnGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250170
unsigned int anHangDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2501D0
unsigned int anHangDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2501F0
unsigned int anHangCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250260
unsigned int anHangCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250380
unsigned int anZipDeathCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2503C0
unsigned int anZipLineHitDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2503F0
unsigned int anZipBuddyHitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250460
unsigned int anHitAnyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250D90
unsigned int anHitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250D70
unsigned int anZipLineExitDropCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2504E0
unsigned int anZipLineExitFlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250550
unsigned int anZipSwitchRightCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2505C0
unsigned int anZipSwitchRight(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2505D0
unsigned int anZipSwitchLandedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250630
unsigned int anZipSwitchLand(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250650
unsigned int anZipSwitchLeftCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250690
unsigned int anZipSwitchLeft(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2506A0
unsigned int anMrITakeDamageCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250D30
unsigned int anZipLineLaunchCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250780
unsigned int anZipLineCycleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2507D0
unsigned int anZipBuddyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250800
unsigned int anZipLineGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250830
unsigned int anSwimExitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250840
unsigned int anNoSwimCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2508F0
unsigned int anIdleAnyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250920
unsigned int anMoveAnyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250900
unsigned int anBeachedRunNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250940
unsigned int anBeachedWalkNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250980
unsigned int anJumpFallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2509C0
unsigned int anCrouchUpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252C00
unsigned int anCrouchDownCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253360
unsigned int anHitDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2509E0
unsigned int anFallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252EC0
unsigned int anHitLandCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250A00
unsigned int anLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252F00
unsigned int anLandDeadCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250A20
unsigned int anMrILaunchDamageCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250A60
unsigned int anHitEitherBackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250A40
unsigned int anHitEitherFrontCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250AE0
unsigned int anLaunchBackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250B00
unsigned int anLaunchFrontCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250B20
unsigned int anHitBackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250D10
unsigned int anHitFrontCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250D50
unsigned int anDeathCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250BA0
unsigned int anDeathCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250BC0
unsigned int anCarryDeathCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250B40
unsigned int anInfiniteFallDeathCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250B80
unsigned int anCarryDropCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250C00
unsigned int anHitRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250BE0
unsigned int anSwimPullDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250DB0
unsigned int anSwimPullCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250DF0
unsigned int anSwimReachCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250E30
unsigned int anSwimReachCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250E70
unsigned int anSwimFallEnterCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250EA0
unsigned int anSwimCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251240
unsigned int anSwimEnterCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x250F70
unsigned int anJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253240
unsigned int anJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253260
unsigned int anStartSlamEffectCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251020
unsigned int anHandHurtCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251140
unsigned int anHandHurtCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251170
unsigned int anCarryHitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2511A0
unsigned int anGrabDestroyCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2511C0
unsigned int anGrabKillCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251520
unsigned int anGrabKillRunEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251250
unsigned int anGrabKillRunNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2512E0
unsigned int anGrabKillWalkEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251370
unsigned int anGrabKillWalkNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251400
unsigned int anGrabKillIdleEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251490
unsigned int anGrabKillIdleNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251570
unsigned int anLedgeGoToIdleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251E30
unsigned int anLedgeThrowDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251600
unsigned int anLedgeThrowGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251710
unsigned int anLedgeThrowGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2518E0
unsigned int anLedgeThrowCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2518F0
unsigned int anLedgeThrowCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251900
unsigned int anLedgeGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252680
unsigned int anLedgeGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252700
unsigned int anLedgeJumpUpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251940
unsigned int anLedgeJumpUpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251990
unsigned int anLedgeRightDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2519D0
unsigned int anLedgeLeftDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251A20
unsigned int anLedgeRightCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251A70
unsigned int anLedgeRightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251A80
unsigned int anLedgeLeftCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251AC0
unsigned int anLedgeLeftCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251AD0
unsigned int anLedgeDownCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251B10
unsigned int anLedgeDownCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251B50
unsigned int anLedgeGrabUpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251BB0
unsigned int anLedgeUpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251C00
unsigned int anInactiveCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22F9F0
unsigned int anInactiveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x22FA00
unsigned int anGroundTossEndCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251E40
unsigned int anGroundTossCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x251F50
unsigned int anGrabThrowNPCFierce(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2520F0
unsigned int anThrowNPCEndCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252160
unsigned int anThrowNPCEndCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252180
unsigned int anThrowNPCLoopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2521F0
unsigned int anThrowNPCLoopCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252210
unsigned int anGrabThrowCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2522E0
unsigned int anGrabThrowFierce(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252280
unsigned int anGrabThrowLight(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252420
unsigned int anGrabDoneCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252460
unsigned int anAnyStopCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2524A0
unsigned int anAnyMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2524C0
unsigned int anPickedUpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2524E0
unsigned int anGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252580
unsigned int anWhifHitCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252550
unsigned int anGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2525A0
unsigned int anGrabUnconsciousCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252630
unsigned int anGrabUnconsciousCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252650
unsigned int anLedgeFinishCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252670
unsigned int anCrouchDodgeJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252710
unsigned int anCrouchDodgeJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2527C0
unsigned int anCrouchDodgeEndCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252840
unsigned int anCrouchDodgeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252AC0
unsigned int anCrouchDodgeRightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2528D0
unsigned int anCrouchDodgeBackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2528E0
unsigned int anCrouchDodgeLeftCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2528F0
unsigned int anCrouchDodgeFrontCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252900
unsigned int anCrouchRightCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252910
unsigned int anCrouchBackCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2529A0
unsigned int anCrouchLeftCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252A30
unsigned int anCrouchFrontCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252B70
unsigned int anCrouchDodgeDelayedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252D00
unsigned int anCrouchDodgeDelayedRightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252C40
unsigned int anCrouchDodgeDelayedBackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252C80
unsigned int anCrouchDodgeDelayedLeftCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252CC0
unsigned int anCrouchDodgeDelayedFrontCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252DC0
unsigned int anCrouchJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252E80
unsigned int anCrouchJumpFromAttackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252E00
unsigned int anCrouchJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252EB0
unsigned int anJumpSpringCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252EE0
unsigned int anCrouchLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252F20
unsigned int anLandRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252F90
unsigned int anLandWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252FD0
unsigned int anControlOffCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x252FF0
unsigned int anMrICrouchCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253010
unsigned int anMrIJumpCombatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253110
unsigned int anCrouchRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253280
unsigned int anCrouchRunEnemyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2532C0
unsigned int anCrouchRunNormalCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x253310
static float GTOSSCOMBODELAY; // size: 0x4, address: 0x5EABF0
static float CROUCHCOMBODELAY; // size: 0x4, address: 0x5EABF8
static float LANDATTACKCOMBODELAY; // size: 0x4, address: 0x5EAC00
static float GOLFIDLECOMBODELAY; // size: 0x4, address: 0x5EAC08
static float GOLFCROUCHCOMBODELAY; // size: 0x4, address: 0x5EAC10
void zCombatHitChooser(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x1F7190
void anChargeStandCB(class xAnimState *, class xAnimSingle *, void *); // size: 0x0, address: 0x255C00
void anChargeBefore(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x255C40
void anChargeCrouchCB(class xAnimState *, class xAnimSingle *, void *); // size: 0x0, address: 0x255C20
void anBulletTimeBefore(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x255C60
void anSlamFallBefore(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x255C50
void anLaunchBeforeEnter(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x255C70
void anZipLineMatrixManipulator(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // size: 0x0, address: 0x255CD0
void anCrouchRunCB(class xAnimState *, class xAnimSingle *, void *); // size: 0x0, address: 0x255CE0
void anGrabBeforeEnter(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x255D40
void anThrowNPCLoopState(class xAnimState *, class xAnimSingle *, void *); // size: 0x0, address: 0x255CF0
class xVec3 g_O3; // size: 0xC, address: 0x5E77C0
float sProjBoundShift; // size: 0x4, address: 0x607944
class xMat4x3 g_I3; // size: 0x40, address: 0x643E60
float SECS_PER_VBLANK; // size: 0x4, address: 0x608724
float CENTER_OF_MASS_HEIGHT; // size: 0x4, address: 0x6079AC
class xColor_tag g_RED; // size: 0x4, address: 0x5E71F0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x24
struct /* @anon2 */ {} zZipLineCam::__vtable; // size: 0x24, address: 0x5FD740
// total size: 0x24
struct /* @anon1 */ {} xCam::__vtable; // size: 0x24, address: 0x0
class config default_config; // size: 0x4C, address: 0x6BA620
class smoke_config default_config; // size: 0x38, address: 0x6BA340
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
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
// total size: 0x2C
class zLaunchAsset : public xDynAsset {
    // Members
public:
    unsigned int launchType; // offset 0x10, size 0x4
    unsigned int launchObject; // offset 0x14, size 0x4
    unsigned int targetAsset; // offset 0x18, size 0x4
    float gravity; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    unsigned int leaves_bone; // offset 0x24, size 0x4
    unsigned int launchFlags; // offset 0x28, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x18
class effect : public emitterBase {};
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
// total size: 0x10C
struct /* @anon0 */ {};
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
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xFFX {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class xEnt *, class xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x18
class zZipLine : public xBase {
    // Members
public:
    class zZipLineAsset * asset; // offset 0x10, size 0x4
    unsigned char enabled; // offset 0x14, size 0x1
    unsigned char gotDismount; // offset 0x15, size 0x1
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
// total size: 0x8
class zAttackTableSection {
    // Members
public:
    unsigned int section; // offset 0x0, size 0x4
    unsigned short start; // offset 0x4, size 0x2
    unsigned short count; // offset 0x6, size 0x2
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
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
// total size: 0xB4
class config {
    // Members
public:
    signed int num_waves; // offset 0x0, size 0x4
    class RwRaster * textureRaster; // offset 0x4, size 0x4
    class RwTexture * particleTex; // offset 0x8, size 0x4
    unsigned char use_scroll; // offset 0xC, size 0x1
    float gravity; // offset 0x10, size 0x4
    float start_alpha; // offset 0x14, size 0x4
    float genParTime; // offset 0x18, size 0x4
    float delta_rot; // offset 0x1C, size 0x4
    // total size: 0x50
    class /* @class */ {
        // Members
    public:
        class xVec3 pos; // offset 0x0, size 0xC
        class xVec3 velMul; // offset 0xC, size 0xC
        class xVec3 velAdd; // offset 0x18, size 0xC
        float plife; // offset 0x24, size 0x4
        float pfadetime; // offset 0x28, size 0x4
        float timeInit; // offset 0x2C, size 0x4
        float time; // offset 0x30, size 0x4
        float genTimeInit; // offset 0x34, size 0x4
        float genTime; // offset 0x38, size 0x4
        float radius; // offset 0x3C, size 0x4
        float startSize; // offset 0x40, size 0x4
        float endSize; // offset 0x44, size 0x4
        float decalTime; // offset 0x48, size 0x4
        unsigned int enable; // offset 0x4C, size 0x4
    } center; // offset 0x20, size 0x50
    // total size: 0x44
    class /* @class */ {
        // Members
    public:
        class xVec3 velMul; // offset 0x0, size 0xC
        class xVec3 velAdd; // offset 0xC, size 0xC
        float life; // offset 0x18, size 0x4
        float plife; // offset 0x1C, size 0x4
        float pfadetime; // offset 0x20, size 0x4
        float speed; // offset 0x24, size 0x4
        float fadetime; // offset 0x28, size 0x4
        float gentime; // offset 0x2C, size 0x4
        float parGenProb; // offset 0x30, size 0x4
        float startSize; // offset 0x34, size 0x4
        float endSize; // offset 0x38, size 0x4
        float height; // offset 0x3C, size 0x4
        float scrollSpeed; // offset 0x40, size 0x4
    } waveParams; // offset 0x70, size 0x44
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
// total size: 0x210
class zZipLineCam : public xCam {
    // Members
public:
    class config cfg; // offset 0xD0, size 0x78
    class xMat4x3 basis; // offset 0x150, size 0x40
    class xCamCoordSphere end_coord; // offset 0x190, size 0x20
    class xVec3 end_offset; // offset 0x1B0, size 0xC
    float vel_dist; // offset 0x1BC, size 0x4
    float vel_turn; // offset 0x1C0, size 0x4
    class zone_data zone; // offset 0x1C4, size 0x18
    class zone_data end_zone; // offset 0x1DC, size 0x18
    class zone_data vel_zone; // offset 0x1F4, size 0x18
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
enum MoveState {
    MS_NONE = 0,
    MS_HOLD = 1,
    MS_SETVEL = 2,
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
enum iSndGroupHandle {
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
// total size: 0x1
class RyzMemData {};
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
};
// total size: 0x0
class zGrapplePoint {};
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
enum iSndHandle {
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
class zCamSwingPrefs {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float pitchCorrect; // offset 0x8, size 0x4
    float targetHeight; // offset 0xC, size 0x4
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
class zCutsceneMgr {};
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
// total size: 0x10
class buddy_anim : public behavior_implementation {};
// total size: 0x2D0
class friendly : public common {
    // Members
public:
    class buddy_anim anim_state; // offset 0x2C0, size 0x10
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
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
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
class zQuat {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
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
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
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
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x28
class mblur_data {
    // Members
public:
    class config_data cfg; // offset 0x0, size 0x24
    class xModelBlur blur; // offset 0x24, size 0x4
};
// total size: 0xC
class LedgeThrowCallback {
    // Members
public:
    class xBound * hand_bound; // offset 0x0, size 0x4
    class zMrIncrediblePlayer * player; // offset 0x4, size 0x4
    class xEnt * & npc_to_grab; // offset 0x8, size 0x4
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
class zAssetPickupTable {};
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
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x10
class behavior_implementation : public behavior {
    // Members
public:
    class common * owner; // offset 0xC, size 0x4
};
// total size: 0x10
class navigation_mesh : public xBaseAsset {
    // Members
public:
    signed int num_sub_meshes; // offset 0x8, size 0x4
    class sub_mesh * sub_meshes; // offset 0xC, size 0x4
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
// total size: 0x1C
class FootLockInfo {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    signed int bone; // offset 0xC, size 0x4
    class xVec3 lockPos; // offset 0x10, size 0xC
};
// total size: 0x0
class zAnimCacheEntry {};
// total size: 0x0
class anim_coll_data {};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x10
class zFootstepsData {
    // Members
public:
    unsigned int particle_emitter; // offset 0x0, size 0x4
    unsigned int sound; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
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
// total size: 0x8
class block_data {
    // Members
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
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
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0xC
class behavior {
    // Members
public:
    class xEnt * owner; // offset 0x0, size 0x4
    unsigned int type; // offset 0x8, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
// total size: 0x24
struct /* @anon1 */ {};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
enum zLaunchState {
    eLaunchStateReleased = 0,
    eLaunchStateIntro = 1,
    eLaunchStateWindupGrab = 2,
    eLaunchStateWindupReelIn = 3,
    eLaunchStateWindupFlingWait = 4,
    eLaunchStateFlingBegin = 5,
    eLaunchStateFlungLift = 6,
    eLaunchStateFlungFall = 7,
    eLaunchStateFlungLand = 8,
    eLaunchStateCount = 9,
    eLaunchStateForceSize = 2147483647,
};
// total size: 0x50
class /* @class */ {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 velMul; // offset 0xC, size 0xC
    class xVec3 velAdd; // offset 0x18, size 0xC
    float plife; // offset 0x24, size 0x4
    float pfadetime; // offset 0x28, size 0x4
    float timeInit; // offset 0x2C, size 0x4
    float time; // offset 0x30, size 0x4
    float genTimeInit; // offset 0x34, size 0x4
    float genTime; // offset 0x38, size 0x4
    float radius; // offset 0x3C, size 0x4
    float startSize; // offset 0x40, size 0x4
    float endSize; // offset 0x44, size 0x4
    float decalTime; // offset 0x48, size 0x4
    unsigned int enable; // offset 0x4C, size 0x4
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
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    signed short incrediPower; // offset 0x0, size 0x2
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x78
class config : public xCamConfigFollow {
    // Members
public:
    float speed_move; // offset 0x54, size 0x4
    float speed_turn; // offset 0x58, size 0x4
    class zone_data zone_side; // offset 0x5C, size 0x18
    float side_yaw; // offset 0x74, size 0x4
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
// total size: 0x0
class zSlideCam {};
// total size: 0x30
class ProcEffectData {
    // Members
public:
    class xVec3 oldPos; // offset 0x0, size 0xC
    class xVec3 oldVel; // offset 0xC, size 0xC
    class xVec3 currPos; // offset 0x18, size 0xC
    class xVec3 currVel; // offset 0x24, size 0xC
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
// total size: 0x14
class xHierarchyNode {
    // Members
public:
    class xSphere sphere; // offset 0x0, size 0x10
    unsigned short userData; // offset 0x10, size 0x2
    signed char bone; // offset 0x12, size 0x1
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
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0xE0
class zLaunch : public zInteraction {
    // Members
public:
    class zLaunchAsset * launchAsset; // offset 0x70, size 0x4
    enum zLaunchState launchState; // offset 0x74, size 0x4
    float jumpYaw; // offset 0x78, size 0x4
    class xVec3 * target; // offset 0x7C, size 0x4
    float initYaw; // offset 0x80, size 0x4
    float deltaYaw; // offset 0x84, size 0x4
    class xVec3 initPos; // offset 0x88, size 0xC
    float currAlpha; // offset 0x94, size 0x4
    class xParabola path; // offset 0x98, size 0x24
    float param; // offset 0xBC, size 0x4
    unsigned int runFlags; // offset 0xC0, size 0x4
    class LeavesState leaves; // offset 0xC4, size 0x14
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x0
class motive_node {};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0x0
class zTurret {};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum /* @enum */ {
    FORWARD = 0,
    BACKWARD = 1,
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
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
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
// total size: 0x2C
class zZipLineAsset : public xBaseAsset {
    // Members
public:
    unsigned char dismount_type; // offset 0x8, size 0x1
    class xVec3 position; // offset 0xC, size 0xC
    float hang_length; // offset 0x18, size 0x4
    union { // inferred
        unsigned int startSplineID; // offset 0x1C, size 0x4
        class NURBS * spline; // offset 0x1C, size 0x4
    };
    union { // inferred
        unsigned int boundEntityID; // offset 0x20, size 0x4
        class xEnt * boundEntity; // offset 0x20, size 0x4
    };
    float speed; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
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
// total size: 0x0
class zDecalEmitterList {};
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
// total size: 0x5C
class SphereCollisionResults {
    // Members
public:
    class xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    signed int collisionFlags; // offset 0x10, size 0x4
    class xVec3 contact; // offset 0x14, size 0xC
    class xVec3 normal; // offset 0x20, size 0xC
    float colliding_sphere_raidus; // offset 0x2C, size 0x4
    unsigned int oid; // offset 0x30, size 0x4
    void * optr; // offset 0x34, size 0x4
    class xModelInstance * mptr; // offset 0x38, size 0x4
    class xJSPHeader * jsp; // offset 0x3C, size 0x4
    class xClumpCollBSPTriangle * bspTriangle; // offset 0x40, size 0x4
    enum xCollideSphereHitType hit_triangle_type; // offset 0x44, size 0x4
    class xPlane tri_plane; // offset 0x48, size 0x10
    signed int sphere_index; // offset 0x58, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
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
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x0
class zKaboomMinigame {};
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
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
// total size: 0x18
class xHierarchyBound {
    // Members
public:
    class xSphere master; // offset 0x0, size 0x10
    class xHierarchyNode * nodes; // offset 0x10, size 0x4
    unsigned char count; // offset 0x14, size 0x1
    unsigned char maxCount; // offset 0x15, size 0x1
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
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
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
// total size: 0x24
struct /* @anon2 */ {};
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x60
class zAttackStateRunTimeData {
    // Members
public:
    class ProcEffectData bonePosVel[2]; // offset 0x0, size 0x60
};
// total size: 0x218
class zCombatCombo : public zQueue {
    // Members
public:
    float combo_time; // offset 0x208, size 0x4
    float elapsed; // offset 0x20C, size 0x4
    float timer; // offset 0x210, size 0x4
    unsigned char enabled; // offset 0x214, size 0x1
};
// total size: 0x70
class zInteraction : public xBase {
    // Members
public:
    class xEnt * object; // offset 0x10, size 0x4
    class xMat4x3 playerMat; // offset 0x20, size 0x40
    enum zInteractionType type; // offset 0x60, size 0x4
};
// total size: 0x0
class xOneLiner {};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x38
class smoke_config {
    // Members
public:
    float floor; // offset 0x0, size 0x4
    float SMOKE_ALPHA_DELTA; // offset 0x4, size 0x4
    float SMOKE_SIZE_DELTA; // offset 0x8, size 0x4
    float SMOKE_START_SIZE; // offset 0xC, size 0x4
    class xVec3 SMOKE_VELOCITY; // offset 0x10, size 0xC
    float SMOKE_EMIT_RATE; // offset 0x1C, size 0x4
    float SMOKE_ROTATION_DELTA_MIN; // offset 0x20, size 0x4
    float SMOKE_ROTATION_DELTA_MAX; // offset 0x24, size 0x4
    float SMOKE_COLOR; // offset 0x28, size 0x4
    float VELOCITY_RANDOM; // offset 0x2C, size 0x4
    float START_ALPHA; // offset 0x30, size 0x4
    unsigned char distance_emit; // offset 0x34, size 0x1
};
// total size: 0xC
class xHierarchyBoundInitData {
    // Members
public:
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
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
// total size: 0x20
class sphereInfo {
    // Members
public:
    class xSphere sphere; // offset 0x0, size 0x10
    class xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x0
class zFrag {};
// total size: 0x8
class xModelAssetParam {
    // Members
public:
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
};
// total size: 0x0
class activity_data {};
// total size: 0x8
class BoundHitsObject {
    // Members
public:
    class xSphere * sphere; // offset 0x0, size 0x4
    unsigned char * done; // offset 0x4, size 0x4
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
// total size: 0x208
class zQueue {
    // Members
public:
    signed int first; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    class zHitStruct data[64]; // offset 0x8, size 0x200
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
class zHitStruct {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    float elapsed; // offset 0x4, size 0x4
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
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
enum zInteractionType {
    eInteractionTypeTurn = 0,
    eInteractionTypeLaunch = 1,
    eInteractionTypeLift = 2,
    eInteractionTypeCount = 3,
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x44
class /* @class */ {
    // Members
public:
    class xVec3 velMul; // offset 0x0, size 0xC
    class xVec3 velAdd; // offset 0xC, size 0xC
    float life; // offset 0x18, size 0x4
    float plife; // offset 0x1C, size 0x4
    float pfadetime; // offset 0x20, size 0x4
    float speed; // offset 0x24, size 0x4
    float fadetime; // offset 0x28, size 0x4
    float gentime; // offset 0x2C, size 0x4
    float parGenProb; // offset 0x30, size 0x4
    float startSize; // offset 0x34, size 0x4
    float endSize; // offset 0x38, size 0x4
    float height; // offset 0x3C, size 0x4
    float scrollSpeed; // offset 0x40, size 0x4
};
// total size: 0x10
class zFootstepDetect {
    // Members
public:
    class xVec3 last_emit_position; // offset 0x0, size 0xC
    unsigned char was_lifted; // offset 0xC, size 0x1
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
// total size: 0x14
class group_asset : public xDynAsset {
    // Members
public:
    signed int max_attackers; // offset 0x10, size 0x4
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
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
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
// total size: 0x8
class effectBone {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 * pos; // offset 0x4, size 0x4
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
// total size: 0xC
class grab_collide_callback {
    // Members
public:
    class zPlayer * m_pPlayer; // offset 0x0, size 0x4
    unsigned int & m_zscNumEnts; // offset 0x4, size 0x4
    class xEnt * * m_ppZscEnts; // offset 0x8, size 0x4
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
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
enum HitType {
    eHitType_None = -1,
    eHitType_BackGround = 0,
    eHitType_FrontGround = 1,
    eHitType_BackAir = 2,
    eHitType_FrontAir = 3,
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
// total size: 0x28
class pointer_asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    float yaw; // offset 0x1C, size 0x4
    float pitch; // offset 0x20, size 0x4
    float roll; // offset 0x24, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
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
class zThrowableProperty {
    // Members
public:
    float velocity; // offset 0x0, size 0x4
    float dropVelocity; // offset 0x4, size 0x4
    float rotationRate; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
    unsigned int (* collideCB)(class xEnt *, class xEnt *, class xVec3 *, class xVec3 *, void *); // offset 0x10, size 0x4
    void * collideCBData; // offset 0x14, size 0x4
    unsigned int (* destroyCB)(class xEnt *, void *, unsigned char); // offset 0x18, size 0x4
    void * destroyCBData; // offset 0x1C, size 0x4
    class zShrapnelAsset * shrapnel; // offset 0x20, size 0x4
    signed int splashID; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    class xVec3 preferOffset; // offset 0x2C, size 0xC
    class xVec3 preferUp; // offset 0x38, size 0xC
};
// total size: 0x0
class zDuplicator {};
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
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
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class group : public xBase {
    // Members
public:
    class group_asset * asset; // offset 0x10, size 0x4
    signed int attacking_count; // offset 0x14, size 0x4
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
class LeavesState {
    // Members
public:
    unsigned char have_bone_pos; // offset 0x0, size 0x1
    class xVec3 last_bone_pos; // offset 0x4, size 0xC
    float num_leaves; // offset 0x10, size 0x4
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
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x0
class BossMeter {};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x18
class zHangable : public xBase {
    // Members
public:
    class zHangableAsset * hangableAsset; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
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
// total size: 0x14
class hitBoneInfo {
    // Members
public:
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 boneOffset; // offset 0x4, size 0xC
    signed short atomic; // offset 0x10, size 0x2
};
// total size: 0x10
class zThrowableSystemTarget {
    // Members
public:
    class xVec3 * target; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
    float sortKey; // offset 0x8, size 0x4
    unsigned char priority; // offset 0xC, size 0x1
    unsigned char lobAtMe; // offset 0xD, size 0x1
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
// total size: 0x0
class FamilyMeter {};
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
// total size: 0x0
class rxReq {};
enum ZipLineState {
    ZIPLINE_NONE = 0,
    ZIPLINE_INITIAL = 1,
    ZIPLINE_GRABBING = 2,
    ZIPLINE_MOVING = 3,
    ZIPLINE_EXITING = 4,
    ZIPLINE_INIT_DEATH = 5,
    ZIPLINE_DEATH = 6,
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x18
class zone_data {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    class xVec3 face; // offset 0xC, size 0xC
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
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0xC
class xGridIterator {
    // Members
public:
    class xGridBound * * listhead; // offset 0x0, size 0x4
    class xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
enum SwimExitState {
    SES_NONE = 0,
    SES_WANT_REACH = 1,
    SES_REACHING = 2,
    SES_PULLING = 3,
    SES_PULL_DONE = 4,
};
// total size: 0x8
class Point {
    // Members
public:
    float value; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
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
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
enum ZipLineSwitchType {
    SWITCH_LEFT = 0,
    SWITCH_RIGHT = 1,
    SWITCH_NONE = 2,
};
// total size: 0x18
class hud_element : public xBase {
    // Members
public:
    class hud_element * _next; // offset 0x10, size 0x4
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
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
enum AutoMoveMode {
    eAutoMoveOff = 0,
    eAutoMoveMoving = 1,
    eAutoMoveInterp = 2,
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
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00247650 -> 0x002478C0
*/
// Range: 0x247650 -> 0x2478C0
// this: r16
unsigned int zMrIncrediblePlayer::MrITakeDamageCB(class xAnimTransition * tran /* r2 */, class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x247650 -> 0x2478C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002478C0 -> 0x00247B34
*/
// Range: 0x2478C0 -> 0x247B34
// this: r18
unsigned int zMrIncrediblePlayer::HangDoneCB() {
    /* anonymous block */ {
        // Range: 0x2478C0 -> 0x247B34
        class zHangableAsset * asset; // r2
        class xMat3x3 rotMat; // r29+0x40
        class xVec3 pivot; // r29+0x90
        class xVec3 disp; // r29+0x80
        class xVec3 cross; // r29+0x70
        float len; // r29+0xA0
        float ang; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00247B40 -> 0x00247DA0
*/
// Range: 0x247B40 -> 0x247DA0
// this: r18
void zMrIncrediblePlayer::ChargeCrouchCB(class xAnimState * state /* r17 */, class xAnimSingle * anim /* r16 */) {
    /* anonymous block */ {
        // Range: 0x247B40 -> 0x247DA0
        class zCombat * combat; // r2
        class zAttackTableState * attack; // r3
        float interp; // r29+0x90
        class xMat4x3 slamMat; // r29+0x40
        class xVec3 newPos; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00247DA0 -> 0x00248144
*/
// Range: 0x247DA0 -> 0x248144
// this: r16
void zMrIncrediblePlayer::ChargeStandCB(class xAnimState * state /* r17 */, class xAnimSingle * anim /* r18 */) {
    /* anonymous block */ {
        // Range: 0x247DA0 -> 0x248144
        class zCombat * combat; // r2
        class zAttackTableState * attack; // r21
        float interp; // r20
        class xMat4x3 slamMat; // r29+0xE0
        class xMat3x3 rot; // r29+0xB0
        class xVec3 newPos; // r29+0x120
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00248150 -> 0x002481F4
*/
// Range: 0x248150 -> 0x2481F4
// this: r17
void zMrIncrediblePlayer::GrabBeforeEnter(class xAnimState * state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x248150 -> 0x2481F4
        unsigned int animCode; // r2
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00248200 -> 0x00248504
*/
// Range: 0x248200 -> 0x248504
// this: r19
unsigned int zMrIncrediblePlayer::GrabUnconsciousCB(class xAnimSingle * anim /* r18 */) {
    /* anonymous block */ {
        // Range: 0x248200 -> 0x248504
        class xVec3 grabHandle; // r29+0xD0
        class xVec3 grabDir; // r29+0xC0
        class xVec3 grabDirXZ; // r29+0xB0
        class xVec3 dispXZ; // r29+0xA0
        float len; // r29+0xE0
        class xVec3 cross; // r29+0x90
        float turnAng; // r29+0xE0
        class xMat3x3 rotMat; // r29+0x60
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00248510 -> 0x00248E10
*/
// Range: 0x248510 -> 0x248E10
// this: r16
unsigned int zMrIncrediblePlayer::GrabCB(class xAnimSingle * anim /* r19 */) {
    /* anonymous block */ {
        // Range: 0x248510 -> 0x248E10
        class zThrowableProperty * props; // r2
        unsigned int throwFlags; // r2
        unsigned int animCode; // r2
        class xAnimState * stat; // r20
        class common * npc; // r19
        class xVec3 tmptran; // r29+0x1C0
        class xQuat tmpquat; // r29+0x160
        class xMat4x3 objMat; // r29+0x120
        class xMat4x3 targetMat; // r29+0xE0
        class xEntBoulder * boul; // r2
        float rsqr; // r29+0x1D0
        float restHeight; // r6
        class xMat4x3 & model_mat; // r17
        class xVec3 prefer_up; // r29+0x1B0
        class xMat3x3 rot_mat; // r29+0xB0
        class xMat3x3 end_mat; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00248E10 -> 0x0024FA9C
*/
// Range: 0x248E10 -> 0x24FA9C
// this: r2
void zMrIncrediblePlayer::AddTransitions(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x248E10 -> 0x24FA9C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002533A0 -> 0x00255C00
*/
// Range: 0x2533A0 -> 0x255C00
// this: r2
void zMrIncrediblePlayer::AddStates(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2533A0 -> 0x255C00
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255D60 -> 0x00255D74
*/
// Range: 0x255D60 -> 0x255D74
float GetHierarchyMasterRadius() {
    /* anonymous block */ {
        // Range: 0x255D60 -> 0x255D74
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255D80 -> 0x00255D8C
*/
// Range: 0x255D80 -> 0x255D8C
class xHierarchyBoundInitData * GetHierarchyBoundInitData() {
    /* anonymous block */ {
        // Range: 0x255D80 -> 0x255D8C
        class xHierarchyBoundInitData bounds[14]; // @ 0x00509580
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255D90 -> 0x00255DDC
*/
// Range: 0x255D90 -> 0x255DDC
// this: r2
char * zMrIncrediblePlayer::GetComboSection(signed int section /* r2 */) {
    /* anonymous block */ {
        // Range: 0x255D90 -> 0x255DDC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255DE0 -> 0x00256128
*/
// Range: 0x255DE0 -> 0x256128
// this: r20
void zMrIncrediblePlayer::SurfDamageUpdate() {
    /* anonymous block */ {
        // Range: 0x255DE0 -> 0x256128
        class xCollis * coll; // r19
        class xCollis * cend; // r2
        class xSurface * surf; // r2
        signed int damaged; // r18
        class zSurfaceProps * prop; // r2
        class xEnt * cent; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256130 -> 0x0025636C
*/
// Range: 0x256130 -> 0x25636C
// this: r16
void zMrIncrediblePlayer::HandleEvent(class xBase * from /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x256130 -> 0x25636C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256370 -> 0x002566C0
*/
// Range: 0x256370 -> 0x2566C0
// this: r21
void zMrIncrediblePlayer::GetThrowTargets() {
    /* anonymous block */ {
        // Range: 0x256370 -> 0x2566C0
        class xVec3 * newTarget; // r22
        class xEnt * newTargetEnt; // r30
        unsigned char lobAtMe; // r29+0xA0
        class zThrowableSystemTarget targets[32]; // r29+0x150
        signed int currentTarget; // r20
        signed int numTargets; // r2
        class xRay3 ray; // r29+0x120
        signed int i; // r19
        class xCollis collisionRecord; // r29+0xC0
        class xEnt * hitEnt; // r2
        class xVec3 reticle_pos; // r29+0x350
        class xSphere s; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002566C0 -> 0x00256990
*/
// Range: 0x2566C0 -> 0x256990
// this: r16
void zMrIncrediblePlayer::DoThrow() {
    /* anonymous block */ {
        // Range: 0x2566C0 -> 0x256990
        class common * npc; // r2
        float toParam[4]; // r29+0x20
        unsigned int animCode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00256990 -> 0x00257050
*/
// Range: 0x256990 -> 0x257050
// this: r20
void zMrIncrediblePlayer::TryGrab() {
    /* anonymous block */ {
        // Range: 0x256990 -> 0x257050
        unsigned int zscNumEnts; // r29+0x2BC
        class xEnt * zscEnts[32]; // r29+0x1F0
        class xSphere normSphere; // r29+0x1E0
        class xVec3 offset; // r29+0x2B0
        class xBound normBound; // r29+0x190
        class xBound lowBound; // r29+0x140
        class grab_collide_callback cb; // r29+0x2A0
        class xEnt * bestEnt; // r21
        unsigned int i; // r19
        class xEnt * grabent; // r18
        class xVec3 center; // r29+0x290
        class common * npc; // r2
        class xVec3 offset; // r29+0x280
        signed int bone; // r17
        class xVec3 grabPos; // r29+0x270
        class xRay3 ray; // r29+0x110
        class xCollis rayCollis; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00257050 -> 0x0025729C
*/
// Range: 0x257050 -> 0x25729C
// this: r21
void zMrIncrediblePlayer::TryWhifGrab() {
    /* anonymous block */ {
        // Range: 0x257050 -> 0x25729C
        class zAttackTableState * attack; // r6
        class xSphere grabSphere; // r29+0x140
        class xBound grabBound; // r29+0xF0
        unsigned int zscNumEnts; // r29+0x15C
        class xEnt * zscEnts[32]; // r29+0x70
        class grab_collide_callback cb; // r29+0x150
        unsigned int i; // r20
        class xEnt * grabent; // r2
        class common * npc; // r2
        float maxDist2; // r29+0x160
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002572A0 -> 0x00258784
*/
// Range: 0x2572A0 -> 0x258784
// this: r21
unsigned char zMrIncrediblePlayer::Update_LedgeHandleDetect(class xNearFloorPoly & nfpoly /* r20 */, class xVec3 & centerPos /* r19 */, class xVec3 & horizontalDirection /* r29+0x12C */) {
    /* anonymous block */ {
        // Range: 0x2572A0 -> 0x258784
        class xSurface * surface; // r2
        signed int firstPoint; // r29+0x110
        signed int secondPoint; // r29+0x100
        signed int thirdPoint; // r29+0xF0
        class xVec3 closestEdge; // r29+0x400
        class xVec3 prevEdge; // r29+0x3F0
        class xVec3 nextEdge; // r29+0x3E0
        signed int prevVert; // r2
        signed int nextVert; // r2
        float neardx; // r29+0x410
        float neardz; // r29+0x410
        float nearDotFacing; // r29+0x410
        signed int start; // r18
        signed int end; // r29+0xE0
        class xVec3 right_offset; // r29+0x3D0
        unsigned char failed; // r22
        signed int i; // r2
        class xRay3 groundray; // r29+0x190
        class xCollis groundcoll; // r29+0x130
        class xVec3 point; // r29+0x3C0
        class xVec3 rightDirGuess; // r29+0x3B0
        class xVec3 box_width; // r29+0x3A0
        signed int count; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00258790 -> 0x00259354
*/
// Range: 0x258790 -> 0x259354
// this: r16
void zMrIncrediblePlayer::Update_Ledge(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x258790 -> 0x259354
        unsigned char on_ledge_now; // r2
        unsigned int animFlags; // r2
        class xVec3 centerPos; // r29+0x300
        class xVec3 horizontalDirection; // r29+0x2F0
        class xNearFloorPoly nfpoly; // r29+0x150
        class xVec3 velocity; // r29+0x2E0
        class xVec3 position; // r29+0x2D0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00259360 -> 0x00259650
*/
// Range: 0x259360 -> 0x259650
// this: r16
signed int zMrIncrediblePlayer::SwingUpdate(float mag /* r22 */, float angle /* r21 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x259360 -> 0x259650
        class zHangableAsset * hAsset; // r2
        class xVec3 pivot; // r29+0x40
        class xVec3 disp; // r29+0x30
        float oldLerp; // r29+0x50
        float targLerp; // r29+0x50
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00259650 -> 0x00259ABC
*/
// Range: 0x259650 -> 0x259ABC
// this: r16
float zMrIncrediblePlayer::CalcSwingLerp(float mag /* r22 */) {
    /* anonymous block */ {
        // Range: 0x259650 -> 0x259ABC
        float phase; // r29+0x40
        float driveMult; // r21
        float reactMult; // r20
        class xVec3 pivot; // r29+0x30
        float kinetic; // r5
        float potential; // r4
        float total; // r3
        float potMult; // r13
        float kinMult; // r9
        float fade; // r29+0x40
        float factor; // r29+0x40
        float lowLim; // r8
        float highLim; // r3
        float drivingLerp; // r29+0x40
        float reactionLerp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00259AC0 -> 0x00259F0C
*/
// Range: 0x259AC0 -> 0x259F0C
// this: r20
void zMrIncrediblePlayer::CheckForHangables(float blendSpeed /* r20 */) {
    /* anonymous block */ {
        // Range: 0x259AC0 -> 0x259F0C
        signed int numHangers; // r2
        signed int i; // r19
        class zHangableObject * hang; // r2
        class xVec3 disp; // r29+0xA0
        class xMat3x3 newCenterMat; // r29+0x70
        class xMat4x3 * hObjMat; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00259F10 -> 0x0025A198
*/
// Range: 0x259F10 -> 0x25A198
// this: r16
void zMrIncrediblePlayer::Update_ZipLineCollisions() {
    /* anonymous block */ {
        // Range: 0x259F10 -> 0x25A198
        signed int damage; // r5
        class effect * rumbleEffect; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025A1A0 -> 0x0025B54C
*/
// Range: 0x25A1A0 -> 0x25B54C
// this: r17
void zMrIncrediblePlayer::Update_ZipLinePosition(float dt /* r24 */, unsigned char movePlayer /* r16 */, unsigned char leanAllowed /* r20 */) {
    /* anonymous block */ {
        // Range: 0x25A1A0 -> 0x25B54C
        float dist; // r29+0x420
        class xVec3 newPlayerPos; // r29+0x410
        float new_dist; // r29+0x420
        class xVec3 forward; // r29+0x400
        class xVec3 direction; // r29+0x3F0
        float lean_center; // r20
        float swing; // r29+0x420
        signed int trySwing; // r4
        float mag; // r21
        float param; // r29+0x420
        float mag; // r29+0x420
        float param; // r29+0x420
        float desiredLean; // r1
        float diffLerp; // r29+0x420
        float angle; // r21
        class xVec3 upVector; // r29+0x3E0
        class xVec3 hangVector; // r29+0x3D0
        float diffCenterLerp; // r29+0x420
        class xMat4x3 buddyMat; // r29+0xB0
        class xVec3 forward; // r29+0x3C0
        class xModelInstance * buddyModel; // r5
        float lean; // r29+0x420
        class xMat3x3 direction; // r29+0x80
        class xModelInstance * entModel; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025B550 -> 0x0025B93C
*/
// Range: 0x25B550 -> 0x25B93C
// this: r17
void zMrIncrediblePlayer::Update_ZipLineStateInitial(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x25B550 -> 0x25B93C
        class xVec3 diff; // r29+0x100
        float diffLength2; // r29+0x110
        float diffLength; // r29+0x110
        unsigned char done; // r16
        class xMat3x3 rotation; // r29+0x70
        class xMat3x3 temp; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025B940 -> 0x0025BD6C
*/
// Range: 0x25B940 -> 0x25BD6C
// this: r18
void zMrIncrediblePlayer::ZipLineAttach(unsigned char use_frame_direction /* r2 */) {
    /* anonymous block */ {
        // Range: 0x25B940 -> 0x25BD6C
        class zZipLineAsset & asset; // r17
        class common * npc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025BD70 -> 0x0025BF04
*/
// Range: 0x25BD70 -> 0x25BF04
// this: r17
class zZipLine * zMrIncrediblePlayer::ZipLineCheck() {
    /* anonymous block */ {
        // Range: 0x25BD70 -> 0x25BF04
        class xVec3 handPos; // r29+0x48
        class zScene * zsc; // r2
        signed int i; // r4
        float distance; // r29+0x5C
        float u; // r29+0x58
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025BF10 -> 0x0025C1AC
*/
// Range: 0x25BF10 -> 0x25C1AC
// this: r21
unsigned char zMrIncrediblePlayer::SwitchZipLine(class xVec3 & direction /* r20 */) {
    /* anonymous block */ {
        // Range: 0x25BF10 -> 0x25C1AC
        float closest_distance; // r21
        class zZipLine * closest_zipline; // r29+0xB4
        class xVec3 closest_point; // r29+0x118
        float closest_u; // r20
        signed int i; // r19
        class zZipLine * zipline; // r18
        float distance; // r29+0x12C
        float u; // r29+0x128
        class xVec3 point; // r29+0x108
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025C1B0 -> 0x0025CA3C
*/
// Range: 0x25C1B0 -> 0x25CA3C
// this: r16
void zMrIncrediblePlayer::Update_ZipLine(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x25C1B0 -> 0x25CA3C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025CA40 -> 0x0025CE00
*/
// Range: 0x25CA40 -> 0x25CE00
// this: r18
void zMrIncrediblePlayer::Update_GrabUnconsciousObject(float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x25CA40 -> 0x25CE00
        class xMat3x3 rot; // r29+0x90
        class xVec3 anchorPos; // r29+0xE0
        class xMat3x3 rot; // r29+0x60
        class xVec3 disp; // r29+0xD0
        float len2; // r29+0xF0
        float ang; // r29+0xF0
        float maxAng; // r29+0xF0
        class xVec3 grabHandle; // r29+0xC0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025CE00 -> 0x0025DCFC
*/
// Range: 0x25CE00 -> 0x25DCFC
// this: r17
void zMrIncrediblePlayer::Update_GrabObject(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x25CE00 -> 0x25DCFC
        char tmpStateName[256]; // r29+0x150
        class xAnimSingle * playerAnim; // r16
        unsigned char finishedAnimation; // r22
        class xAnimState * itemAnim; // r21
        class common * npc; // r20
        class xAnimSingle * pcSingle; // r19
        class xAnimSingle * npcSingle; // r18
        float currLerp; // r20
        signed int rightState; // r2
        float currRot; // r29+0x2F0
        class xEntBoulder * boul; // r2
        class xVec3 tmptran; // r29+0x2E0
        class xQuat tmpquat; // r29+0x140
        float time; // r21
        class xAnimSingle * single; // r19
        class xAnimState * blendState; // r18
        class xQuat blendquat; // r29+0x130
        class xVec3 blendtran; // r29+0x2D0
        class xMat4x3 objMat; // r29+0xF0
        class xVec3 rotatedLC; // r29+0x2C0
        class xEntBoulder * boul; // r21
        float restHeight; // r20
        float rsqr; // r29+0x2F0
        class xMat4x3 targetMat; // r29+0xB0
        float lerp; // r29+0x2F0
        float bottom; // r29+0x2F0
        float lerp; // r29+0x2F0
        class xQuat orient; // r29+0xA0
        float bottom; // r29+0x2F0
        class xVec3 model_scale; // r29+0x2B0
        class xMat4x3 & model_mat; // r2
        signed int in_throwing_anim; // r2
        class xEnt * oldTargetEnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DD00 -> 0x0025DD0C
*/
// Range: 0x25DD00 -> 0x25DD0C
signed int * GetHeadBones() {
    /* anonymous block */ {
        // Range: 0x25DD00 -> 0x25DD0C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DD10 -> 0x0025DD98
*/
// Range: 0x25DD10 -> 0x25DD98
// this: r16
class xVec3 zMrIncrediblePlayer::get_target() {
    /* anonymous block */ {
        // Range: 0x25DD10 -> 0x25DD98
        class xVec3 centerPos; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DDA0 -> 0x0025DDA8
*/
// Range: 0x25DDA0 -> 0x25DDA8
// this: r2
void zMrIncrediblePlayer::BreakGrab() {
    /* anonymous block */ {
        // Range: 0x25DDA0 -> 0x25DDA8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025DDB0 -> 0x0025E7E0
*/
// Range: 0x25DDB0 -> 0x25E7E0
// this: r21
unsigned char zMrIncrediblePlayer::CheckSwimJumpEnv(class xVec3 & water_exit_grab_point /* r22 */) {
    /* anonymous block */ {
        // Range: 0x25DDB0 -> 0x25E7E0
        class xVec3 * cur_pos; // r20
        class xVec3 * facing; // r19
        float sphere_radius; // r22
        class xVec3 column_bottom; // r29+0x590
        class xVec3 obstruction_point; // r29+0x580
        float obs_point_slope; // r21
        unsigned int first_blocked_column; // r18
        class xVec3 obstruction_point2; // r29+0x570
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025E7E0 -> 0x0025E878
*/
// Range: 0x25E7E0 -> 0x25E878
// this: r16
float zMrIncrediblePlayer::InitialDepenetrationVelocity() {
    /* anonymous block */ {
        // Range: 0x25E7E0 -> 0x25E878
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025E880 -> 0x0025ECE4
*/
// Range: 0x25E880 -> 0x25ECE4
// this: r20
void zMrIncrediblePlayer::Update_DrippingWaterEffect(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x25E880 -> 0x25ECE4
        class xModelInstance * playerModel; // r2
        class xVec3 pos; // r29+0x170
        class xMat4x3 matBone; // r29+0x70
        float rateAdjust; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025ECF0 -> 0x0025F65C
*/
// Range: 0x25ECF0 -> 0x25F65C
// this: r18
void zMrIncrediblePlayer::Update_Swim(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x25ECF0 -> 0x25F65C
        class xModelInstance * playerModel; // r17
        class xVec3 splash_loc; // r29+0x200
        class xVec3 velocity; // r29+0x1F0
        class xMat4x3 matBone; // r29+0x120
        class xVec3 pos; // r29+0x1E0
        class xMat4x3 matBone; // r29+0xE0
        class xVec3 pos; // r29+0x1D0
        unsigned char over_water; // r5
        class xRay3 groundray; // r29+0xB0
        class xCollis groundcoll; // r29+0x50
        float desiredAdjust; // r20
        class xVec3 splash_loc; // r29+0x1C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025F660 -> 0x0025FB4C
*/
// Range: 0x25F660 -> 0x25FB4C
// this: r19
unsigned char zMrIncrediblePlayer::CollisionResponse(class SphereCollisionResults & scene_collide /* r18 */, class xVec3 & response_dpos /* r17 */) {
    /* anonymous block */ {
        // Range: 0x25F660 -> 0x25FB4C
        float velIntoCollision; // r29+0x140
        class zCombatDamageInfo info; // r29+0x50
        class xBase * base; // r16
        class common * npc; // r2
        class xVec3 normal_part_response_dpos; // r29+0x130
        class xVec3 npc_dpos; // r29+0x120
        unsigned char clear_vertical_response; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025FB50 -> 0x0025FBA4
*/
// Range: 0x25FB50 -> 0x25FBA4
// this: r2
unsigned char zMrIncrediblePlayer::SuperSlamming() {
    /* anonymous block */ {
        // Range: 0x25FB50 -> 0x25FBA4
        unsigned int state_id; // r2
        unsigned int * id; // r5
        unsigned int * end_id; // r2
        unsigned int slam_state_id[8]; // @ 0x005EAB20
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025FBB0 -> 0x0025FCAC
*/
// Range: 0x25FBB0 -> 0x25FCAC
// this: r16
unsigned char zMrIncrediblePlayer::AllowInteraction() {
    /* anonymous block */ {
        // Range: 0x25FBB0 -> 0x25FCAC
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0025FCB0 -> 0x00260314
*/
// Range: 0x25FCB0 -> 0x260314
// this: r16
void zMrIncrediblePlayer::Update_SwimAdjust(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x25FCB0 -> 0x260314
        float last_desired_down; // r29+0x70
        float this_frame_adjust_down; // r20
        class xVec3 next_frame_displacement; // r29+0x60
        unsigned char have_next_frame_disp; // r17
        class xVec3 hand_pos; // r29+0x50
        class xVec3 drawn_hand; // r29+0x40
        float time_remain; // r1
        signed int num_bones; // r8
        class xModelInstance * m; // r7
        signed int i; // r6
        unsigned char no_down; // @ 0x00608E60
        float desired_down; // @ 0x00000000
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260320 -> 0x002603AC
*/
// Range: 0x260320 -> 0x2603AC
// this: r2
unsigned char zMrIncrediblePlayer::AcceptInput(enum zAttackTableInput input /* r2 */) {
    /* anonymous block */ {
        // Range: 0x260320 -> 0x2603AC
        unsigned int animFlags; // r2
        unsigned int playerMove; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002603B0 -> 0x002603C0
*/
// Range: 0x2603B0 -> 0x2603C0
// this: r2
unsigned char zMrIncrediblePlayer::IsSwimming() {
    /* anonymous block */ {
        // Range: 0x2603B0 -> 0x2603C0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002603C0 -> 0x00260664
*/
// Range: 0x2603C0 -> 0x260664
// this: r17
void zMrIncrediblePlayer::Update_Crouch() {
    /* anonymous block */ {
        // Range: 0x2603C0 -> 0x260664
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260670 -> 0x00260738
*/
// Range: 0x260670 -> 0x260738
// this: r2
void zMrIncrediblePlayer::Update_FX(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x260670 -> 0x260738
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260740 -> 0x00260E30
*/
// Range: 0x260740 -> 0x260E30
// this: r16
void zMrIncrediblePlayer::BoundUpdate() {
    /* anonymous block */ {
        // Range: 0x260740 -> 0x260E30
        class xVec3 offset; // r29+0x150
        class xVec3 group_pos; // r29+0x140
        class xVec3 position; // r29+0x130
        unsigned int playerMove; // r2
        class xSphere * midSphere; // r17
        unsigned char collision_hands; // r17
        class xSphere * leftelbow; // r17
        class xSphere * rightelbow; // r17
        class xSphere * head; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00260E30 -> 0x00261108
*/
// Range: 0x260E30 -> 0x261108
// this: r16
void zMrIncrediblePlayer::ParseIni() {
    /* anonymous block */ {
        // Range: 0x260E30 -> 0x261108
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261110 -> 0x002613E4
*/
// Range: 0x261110 -> 0x2613E4
// this: r19
void zMrIncrediblePlayer::AbsControl(float x /* r22 */, float z /* r21 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x261110 -> 0x2613E4
        class xAnimSingle * single; // r2
        class xAnimState * state; // r2
        float diffAngle; // r2
        float atime; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002613F0 -> 0x0026142C
*/
// Range: 0x2613F0 -> 0x26142C
// this: r16
unsigned char zMrIncrediblePlayer::DoCriticalCollisionCheck() {
    /* anonymous block */ {
        // Range: 0x2613F0 -> 0x26142C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261430 -> 0x0026177C
*/
// Range: 0x261430 -> 0x26177C
// this: r20
void zMrIncrediblePlayer::Move(class xScene * s /* r19 */, float dt /* r20 */, class xEntFrame * frame /* r18 */) {
    /* anonymous block */ {
        // Range: 0x261430 -> 0x26177C
        unsigned int animFlags; // r2
        unsigned char isHanging; // r2
        float px; // r29+0xB0
        float pz; // r29+0xB0
        class xVec3 dpos; // r29+0xA0
        class xVec3 dpos; // r29+0x90
        class xVec3 dpos; // r29+0x80
        unsigned char bLedgeMoving; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261780 -> 0x00261A64
*/
// Range: 0x261780 -> 0x261A64
// this: r16
void zMrIncrediblePlayer::HangEndUpdate() {
    /* anonymous block */ {
        // Range: 0x261780 -> 0x261A64
        class zHangableAsset * asset; // r2
        class xVec3 touchPoint; // r29+0x90
        class xVec3 offset; // r29+0x80
        class xMat4x3 tmpMat; // r29+0x20
        class xVec3 hangTargPos; // r29+0x70
        class xVec3 initPos; // r29+0x60
        class xMat4x3 * hObjMat; // r2
        class xModelInstance * minst; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261A70 -> 0x00261E40
*/
// Range: 0x261A70 -> 0x261E40
// this: r16
unsigned char zMrIncrediblePlayer::LedgeMove(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x261A70 -> 0x261E40
        class xVec3 dest; // r29+0x90
        class xVec3 working; // r29+0x80
        class xVec3 diff; // r29+0x70
        float maxSpeed; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261E40 -> 0x00261E48
*/
// Range: 0x261E40 -> 0x261E48
void RenderEffects() {
    /* anonymous block */ {
        // Range: 0x261E40 -> 0x261E48
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00261E50 -> 0x00262120
*/
// Range: 0x261E50 -> 0x262120
// this: r16
void zMrIncrediblePlayer::Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x261E50 -> 0x262120
        unsigned int animCode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262120 -> 0x002621A8
*/
// Range: 0x262120 -> 0x2621A8
// this: r16
void zMrIncrediblePlayer::EndUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x262120 -> 0x2621A8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002621B0 -> 0x00262550
*/
// Range: 0x2621B0 -> 0x262550
// this: r16
void zMrIncrediblePlayer::BeginUpdate(float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2621B0 -> 0x262550
        signed int num_bones; // r2
        class xModelInstance * m; // r7
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262550 -> 0x00262610
*/
// Range: 0x262550 -> 0x262610
// this: r16
void zMrIncrediblePlayer::Reset() {
    /* anonymous block */ {
        // Range: 0x262550 -> 0x262610
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262610 -> 0x00262684
*/
// Range: 0x262610 -> 0x262684
// this: r16
void zMrIncrediblePlayer::SceneSetup() {
    /* anonymous block */ {
        // Range: 0x262610 -> 0x262684
        class xColor_tag lightBlue; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262690 -> 0x002627F8
*/
// Range: 0x262690 -> 0x2627F8
// this: r17
void zMrIncrediblePlayer::InitAtomicRenderOrder() {
    /* anonymous block */ {
        // Range: 0x262690 -> 0x2627F8
        unsigned int assetID; // r16
        unsigned int i; // r10
        unsigned short size; // r29+0x14E
        class xModelAssetParam * param; // r16
        char buffer[256]; // r29+0x40
        unsigned int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zMrIncrediblePlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00262800 -> 0x00262FEC
*/
// Range: 0x262800 -> 0x262FEC
// this: r17
void zMrIncrediblePlayer::Init(class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x262800 -> 0x262FEC
    }
}


