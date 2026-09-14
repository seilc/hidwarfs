/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int sPlayerSurfaceType; // size: 0x4, address: 0x357F20
static float sPlayerWaterOffset; // size: 0x4, address: 0x357F24
class _xVec3 gPlayerWaterPos; // size: 0xC, address: 0x36E280
signed int gPlayerHitWater; // size: 0x4, address: 0x357F28
signed int gDeadScooby; // size: 0x4, address: 0x357F2C
class _xVec3 gDeadScoobyPos; // size: 0xC, address: 0x36E290
class _xEnt * sDebugPlayerPtr; // size: 0x4, address: 0x0
static class _zParEmitter * sEmitterStars; // size: 0x4, address: 0x357F30
static class _zParEmitter * sEmitterShockLeft; // size: 0x4, address: 0x357F34
static class _zParEmitter * sEmitterShockRight; // size: 0x4, address: 0x357F38
static class _zParEmitter * sEmitterWaterSplash; // size: 0x4, address: 0x357F3C
static class _zParEmitter * sEmitterBounceMiss; // size: 0x4, address: 0x357F40
static class _zParEmitter * sEmitterSprings; // size: 0x4, address: 0x357F44
static class _zParEmitter * sEmitterSpringBoard; // size: 0x4, address: 0x357F48
static class _zParEmitter * sEmitterBounceOnVillain; // size: 0x4, address: 0x357F4C
static class _zParEmitter * sEmitterHeadButt; // size: 0x4, address: 0x357F50
static class _zParEmitter * sEmitterHeadButt2; // size: 0x4, address: 0x357F54
static unsigned int sSoundWaterSplash; // size: 0x4, address: 0x357F58
class _tagPlayerFX gPlayerfx; // size: 0xD0, address: 0x36E2A0
class tagzFeet sPlayerFeet[10]; // size: 0x78, address: 0x36E370
class _tagFeetSkidMark sPlayerSkidMark[5]; // size: 0xB4, address: 0x36E3F0
class _tagFeetSkidMark * sPlayerCurSkidMark; // size: 0x4, address: 0x357F5C
unsigned int sSnackDecrement; // size: 0x4, address: 0x357F60
class _zEntPickup * sDecrementSnackGateEnt; // size: 0x4, address: 0x357F64
float sDecrementDelay; // size: 0x4, address: 0x357F68
float sDecrementAmount; // size: 0x4, address: 0x357F6C
static class _tagPlayerSndFX sPlayerSndfx; // size: 0x230, address: 0x36E4B0
float startJump; // size: 0x4, address: 0x357F70
float startDouble; // size: 0x4, address: 0x357F74
float startBounce; // size: 0x4, address: 0x357F78
float umbrellaFudgeX; // size: 0x4, address: 0x357540
float umbrellaFudgeY; // size: 0x4, address: 0x357544
float umbrellaFudgeRot; // size: 0x4, address: 0x357548
static float minVelmag; // size: 0x4, address: 0x35754C
static float maxVelmag; // size: 0x4, address: 0x357550
static float curVelmag; // size: 0x4, address: 0x357F7C
static float curVelangle; // size: 0x4, address: 0x357F80
static signed int surfSlickness; // size: 0x4, address: 0x357554
static float surfFriction; // size: 0x4, address: 0x357558
static float surfDamping; // size: 0x4, address: 0x357F84
static signed int lastSlickness; // size: 0x4, address: 0x35755C
static class _xVec3 lastDeltaPos; // size: 0xC, address: 0x36E6E0
static class _xVec3 lastFloorNorm; // size: 0xC, address: 0x36E6F0
static class _xEnt * lastFloorEnt; // size: 0x4, address: 0x357F88
static unsigned int surfSticky; // size: 0x4, address: 0x357F8C
static float surfSlideStart; // size: 0x4, address: 0x357560
static float surfSlideStop; // size: 0x4, address: 0x357564
static float surfSlickRatio; // size: 0x4, address: 0x357F90
static float surfSlickTimer; // size: 0x4, address: 0x357F94
static float surfPeakRatio; // size: 0x4, address: 0x357568
static float surfAccelWalk; // size: 0x4, address: 0x35756C
static float surfAccelRun; // size: 0x4, address: 0x357570
static float surfDecelIdle; // size: 0x4, address: 0x357574
static float surfDecelSkid; // size: 0x4, address: 0x357578
static float surfMaxSpeed; // size: 0x4, address: 0x357F98
static float surfSlipTimer; // size: 0x4, address: 0x357F9C
static float update_dt; // size: 0x4, address: 0x357FA0
static class _xVec3 update_motion; // size: 0xC, address: 0x36E700
static class _xVec3 req_motion; // size: 0xC, address: 0x36E710
class _xVec3 vHangBefore; // size: 0xC, address: 0x36E720
class _xVec3 vHangFirst; // size: 0xC, address: 0x36E730
class _xVec3 vHangLast; // size: 0xC, address: 0x36E740
class zGustData gust_data; // size: 0x24, address: 0x36E750
class _xMat4x3 gPlayerAbsMat; // size: 0x40, address: 0x36E780
static class _xVec3 headcoll_oses[12]; // size: 0x90, address: 0x297780
static float headcoll_bltimes[12]; // size: 0x30, address: 0x297810
signed int headcoll_anim; // size: 0x4, address: 0x357FA4
float headcoll_tmr; // size: 0x4, address: 0x357FA8
float headcoll_bltime; // size: 0x4, address: 0x357FAC
class _xVec3 headcoll_fromos; // size: 0xC, address: 0x297840
class _xVec3 headcoll_os; // size: 0xC, address: 0x297850
class _xMat4x3 rendermat; // size: 0x40, address: 0x36E7C0
class _xVec3 floor_supp[4]; // size: 0x30, address: 0x36E800
float floor_dist[4]; // size: 0x10, address: 0x36E830
float floor_tmr[4]; // size: 0x10, address: 0x36E840
class _zParEmitterCustomSettings g_info; // size: 0x54, address: 0x36E850
static unsigned int cchkButtbounce; // size: 0x4, address: 0x357FF8
static unsigned int cchkSquish; // size: 0x4, address: 0x357FFC
static unsigned int sVO; // size: 0x4, address: 0x358000
static unsigned int sVOAssetID; // size: 0x4, address: 0x358004
static unsigned int sVOPriority; // size: 0x4, address: 0x358008
static class zPlayerSituation sPlayerInfo[37]; // size: 0x40C, address: 0x297890
static class zPlayerSituation * sVONextSituation; // size: 0x4, address: 0x35800C
static float sVOTimer; // size: 0x4, address: 0x358010
static class RpAtomic * sPlayerBodyAtomic; // size: 0x4, address: 0x358024
static class RpAtomic * sPlayerHeadAtomic; // size: 0x4, address: 0x358028
static class RpClump * sPlayerBodyClump; // size: 0x4, address: 0x35802C
static class RpClump * sPlayerHeadClump; // size: 0x4, address: 0x358030
class zGlobals globals; // size: 0x3330, address: 0x362FD0
unsigned int zEntPlayer_FXOpenBrollyCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BD20
unsigned int zEntPlayer_FXSpringCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BD30
unsigned int zEntPlayer_FXDigupCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BE20
unsigned int zEntPlayer_SNDSkidCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BBC0
unsigned int zEntPlayer_FXScratchCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BE60
class _xVec3 g_Y3; // size: 0xC, address: 0x342E38
class _xVec3 g_O3; // size: 0xC, address: 0x342E28
class _xEnt * zEntPlayerCollTriggerCB(class _xEnt *, class _xScene *, void *); // size: 0x0, address: 0x16F540
class _xEnt * PlayerCollCheckOneEnt(class _xEnt *, class _xScene *, void *); // size: 0x0, address: 0x171680
class _xEnt * PlayerCollCheckOneVillain(class _xEnt *, class _xScene *, void *); // size: 0x0, address: 0x1710C0
void PlayerBoundUpdate(class _xEnt *, class _xVec3 *); // size: 0x0, address: 0x172C90
unsigned int PlayerDepenQuery(class _xEnt *, class _xEnt *, class _xScene *, float, class _xCollis *); // size: 0x0, address: 0x172EC0
signed int Shaggy2Plat_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1BAEA0
signed int Shaggy2_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1BAF60
float sTimeElapsed; // size: 0x4, address: 0x357D84
signed int VillHBCallback(class _zEnt *, class _xCollis *); // size: 0x0, address: 0x183890
signed int DestructObjHBCallback(class _zEnt *, class _xCollis *); // size: 0x0, address: 0x180990
signed int ButtonHBCallback(class _zEnt *, class _xCollis *); // size: 0x0, address: 0x180EE0
void zGustUpdateEnt(class _xEnt *, class _xScene *, float, void *); // size: 0x0, address: 0x1A6250
void PlayerRotMatchUpdateEnt(class _xEnt *, class _xScene *, float, void *); // size: 0x0, address: 0x16DF80
signed int zEntPlayerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x16EEB0
void zEntPlayer_Render(class _zEnt *); // size: 0x0, address: 0x175040
void zEntPlayer_Move(class _xEnt *, class _xScene *, float, class _xEntFrame *); // size: 0x0, address: 0x174F30
void zEntPlayer_Update(class _xEnt *, class _xScene *, float); // size: 0x0, address: 0x176150
unsigned int LampDrawCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x179180
unsigned int LampFixbugCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x179030
unsigned int LampbackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x179080
unsigned int LampoffCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1790D0
unsigned int LamponCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x179120
unsigned int FaceIdle(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A1D0
unsigned int FaceSwing(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A270
unsigned int FaceSneak(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A310
unsigned int FaceTeeter(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A3B0
unsigned int FacePant(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A450
unsigned int FaceRun(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A4F0
unsigned int FaceEvent(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A560
unsigned int FaceClearScareCB(class xAnimTransition *, class xAnimSingle *); // size: 0x0, address: 0x17A650
unsigned int FaceBlow(class xAnimTransition *, class xAnimSingle *); // size: 0x0, address: 0x17A680
unsigned int FaceMad(class xAnimTransition *, class xAnimSingle *); // size: 0x0, address: 0x17A660
unsigned int FaceScare(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x17A600
unsigned int StopDigCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181E80
unsigned int DigCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181EF0
unsigned int DigCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181F30
unsigned int AttackFinishedHotsauce(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1819F0
unsigned int AttackFinishedRun(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181A40
unsigned int NotRunCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1834D0
unsigned int AttackFinished(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181AC0
unsigned int HealthCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183860
unsigned int HeadHitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1819D0
unsigned int HeadHitCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1819E0
unsigned int AttackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181B20
unsigned int AttackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181B50
unsigned int ProjectileCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181BD0
unsigned int ProjectileRepeat(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181C00
unsigned int ProjectileRepeatSync(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181CE0
unsigned int ProjectileCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181DD0
unsigned int PowerupCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181700
unsigned int PowerupCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181710
unsigned int IdleMajorCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182740
unsigned int IdleMajorCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182850
unsigned int IdleMinorCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182790
unsigned int IdleMinorCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1828C0
unsigned int IdleGetupCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1826E0
unsigned int IdleGetupCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1827D0
unsigned int ActiveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182680
unsigned int IdleSitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182710
unsigned int IdleSitCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182820
unsigned int ScareLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182A60
unsigned int LandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182AB0
unsigned int LandFastCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1829A0
unsigned int LandWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1829E0
unsigned int LandSlowCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182A20
unsigned int BounceCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1821D0
unsigned int SpringCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181FF0
unsigned int BounceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1821F0
unsigned int ButtSmashLandCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182010
unsigned int ButtSmashStateCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1818E0
unsigned int ButtSmashCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181900
unsigned int ButtSmashCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181940
unsigned int NotFloatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181760
unsigned int FloatCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181780
unsigned int FallingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182930
unsigned int HangNoSwingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1813A0
unsigned int HangSwingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181400
unsigned int NoHangCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181730
unsigned int JumpHangCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1823F0
unsigned int JumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182540
unsigned int HangCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181460
unsigned int HangCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181750
unsigned int DblJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182210
unsigned int DblJumpCheckTime(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1822D0
unsigned int DblJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182380
unsigned int JumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182480
unsigned int NospringCheck(class xAnimTransition *, class xAnimSingle *, class _zEnt *); // size: 0x0, address: 0x181FC0
unsigned int ScareKnockbackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182AD0
unsigned int ScareCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182DB0
unsigned int ScareCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182BD0
unsigned int FallToDeathDropCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1811F0
unsigned int FallToDeathDrop(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181270
unsigned int FallToDeathStart(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1812A0
unsigned int DeathCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1812D0
unsigned int ScareCheckCritter(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182C40
unsigned int ScareCheckNoHealth(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182CF0
unsigned int UncowerCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182D20
unsigned int CowerCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182D80
unsigned int HotsauceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1836D0
unsigned int NosneakCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182FE0
unsigned int NosneakPlunger(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182E10
unsigned int NosneakSlippery(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182E70
unsigned int NosneakTeeter(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182EF0
unsigned int SneakIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183040
unsigned int SneakMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183080
unsigned int NotRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1834F0
unsigned int ClearHelmetCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1811E0
unsigned int StickNoBootsIdle(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1832E0
unsigned int StickNoBootsWalk(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183240
unsigned int StickySurfIdle(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1833B0
unsigned int StickySurfWalk(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183380
unsigned int RunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1835D0
unsigned int SlideCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x181860
unsigned int WalkPlungeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1831F0
unsigned int WalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1833E0
unsigned int SkidStopCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1830E0
unsigned int PlungerCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183820
unsigned int SlipperyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1836F0
unsigned int TeeterCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183750
unsigned int IdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x183120
unsigned int LandHealthCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x182950
unsigned int Shaggy0_FlipCB(class xAnimTransition *, class xAnimSingle *, class _zEnt *); // size: 0x0, address: 0x1C19A0
unsigned int SD0_TossCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1810F0
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x3B1A10
// total size: 0x18
class st_ZPRJ_CAT_ARROW {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
    signed int amStuck; // offset 0x4, size 0x4
    class _xEnt * ent_stuck; // offset 0x8, size 0x4
    class _xVec3 pos_stuck; // offset 0xC, size 0xC
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
// total size: 0x28
class p2EntMotionERData {
    // Members
public:
    class _xVec3 ret_pos; // offset 0x0, size 0xC
    class _xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
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
// total size: 0x28
class zParSys : public xBase {
    // Members
public:
    class zParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    class zParCmd * cmd; // offset 0x18, size 0x4
    class zParSys * parent; // offset 0x1C, size 0x4
    class _zParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
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
enum en_NPC_ANIMSTATES {
    ZVIL_ANIM_UNKNOWN = 0,
    ZVIL_ANIM_IDLE = 1,
    ZVIL_ANIM_FIDGET_IDLE1 = 2,
    ZVIL_ANIM_FIDGET_IDLE2 = 3,
    ZVIL_ANIM_BORED = 4,
    ZVIL_ANIM_FIDGET_BORED1 = 5,
    ZVIL_ANIM_FIDGET_BORED2 = 6,
    ZVIL_ANIM_MOVE = 7,
    ZVIL_ANIM_POSE = 8,
    ZVIL_ANIM_TURN = 9,
    ZVIL_ANIM_CHASE = 10,
    ZVIL_ANIM_ACTION_NOMOVE = 11,
    ZVIL_ANIM_ACTION_MOVING = 12,
    ZVIL_ANIM_SURPRIZE = 13,
    ZVIL_ANIM_TAUNT = 14,
    ZVIL_ANIM_TAUNT1 = 15,
    ZVIL_ANIM_TAUNT2 = 16,
    ZVIL_ANIM_HEAR_START = 17,
    ZVIL_ANIM_HEAR_LOOP = 18,
    ZVIL_ANIM_LOOK_START = 19,
    ZVIL_ANIM_LOOK_LOOP = 20,
    ZVIL_ANIM_INVESTIGATE_START = 21,
    ZVIL_ANIM_INVESTIGATE = 22,
    ZVIL_ANIM_ATTACKIDLE = 23,
    ZVIL_ANIM_ATTACK = 24,
    ZVIL_ANIM_ATTACK1 = 25,
    ZVIL_ANIM_ATTACK2 = 26,
    ZVIL_ANIM_COMBO = 27,
    ZVIL_ANIM_COMBO1 = 28,
    ZVIL_ANIM_COMBO2 = 29,
    ZVIL_ANIM_LOB_ATTACK = 30,
    ZVIL_ANIM_LOB_COMBO = 31,
    ZVIL_ANIM_EXT_ATTACK_START = 32,
    ZVIL_ANIM_EXT_ATTACK_LOOP = 33,
    ZVIL_ANIM_EXT_COMBO = 34,
    ZVIL_ANIM_HIT_BY_GUM = 35,
    ZVIL_ANIM_GUMMED = 36,
    ZVIL_ANIM_GUMMED_RESIST = 37,
    ZVIL_ANIM_GUMMED_BREAKFREE = 38,
    ZVIL_ANIM_HIT_WHEN_GUMMED = 39,
    ZVIL_ANIM_BOUNCED_WHEN_GUMMED = 40,
    ZVIL_ANIM_HIT_BY_SOAP = 41,
    ZVIL_ANIM_SOAPED = 42,
    ZVIL_ANIM_SOAPED_RESIST = 43,
    ZVIL_ANIM_SOAPED_BREAKFREE = 44,
    ZVIL_ANIM_HIT_WHEN_SOAPED = 45,
    ZVIL_ANIM_BOUNCED_WHEN_SOAPED = 46,
    ZVIL_ANIM_DAZED_BEGIN = 47,
    ZVIL_ANIM_DAZED = 48,
    ZVIL_ANIM_DAZED_RECOVER = 49,
    ZVIL_ANIM_DEATH = 50,
    ZVIL_ANIM_DEATH_ABOVE = 51,
    ZVIL_ANIM_DEATH_DAZED = 52,
    ZVIL_ANIM_DEATH_IDLE = 53,
    ZVIL_ANIM_JUMP_BEGIN = 54,
    ZVIL_ANIM_JUMP_LOOP = 55,
    ZVIL_ANIM_JUMP_LAND = 56,
    ZVIL_ANIM_FALL_LOOP = 57,
    ZVIL_ANIM_FALL_SPLAT = 58,
    ZVIL_ANIM_BK_SCARYIDLE = 59,
    ZVIL_ANIM_BK_WALK = 60,
    ZVIL_ANIM_BK_TURN = 61,
    ZVIL_ANIM_BK_PATROL = 62,
    ZVIL_ANIM_BK_PATROLFLIP = 63,
    ZVIL_ANIM_BK_ATTACK = 64,
    ZVIL_ANIM_BK_SHOCK = 65,
    ZVIL_ANIM_BK_SHOCKSKEL = 66,
    ZVIL_ANIM_BK_GLOAT = 67,
    ZVIL_ANIM_BK_GLOAT1 = 68,
    ZVIL_ANIM_BK_GLOAT2 = 69,
    ZVIL_ANIM_BK_DEATH = 70,
    ZVIL_ANIM_GG_CHASE = 71,
    ZVIL_ANIM_GG_CHASELEFT = 72,
    ZVIL_ANIM_GG_CHASERIGHT = 73,
    ZVIL_ANIM_GG_BUILDBEGIN = 74,
    ZVIL_ANIM_GG_BUILDLOOP = 75,
    ZVIL_ANIM_GG_ATTACK = 76,
    ZVIL_ANIM_GG_TAUNT = 77,
    ZVIL_ANIM_GG_TAUNT1 = 78,
    ZVIL_ANIM_GG_HURT = 79,
    ZVIL_ANIM_GG_HURT1 = 80,
    ZVIL_ANIM_GG_HURT2 = 81,
    ZVIL_ANIM_RB_IDLEWIND = 82,
    ZVIL_ANIM_RB_PATROL = 83,
    ZVIL_ANIM_RB_TURN = 84,
    ZVIL_ANIM_RB_CHASE = 85,
    ZVIL_ANIM_RB_TAUNTFEEL = 86,
    ZVIL_ANIM_RB_TAUNTTHROAT = 87,
    ZVIL_ANIM_RB_TAUNTLAUGH = 88,
    ZVIL_ANIM_RB_ATTACKPUNCH = 89,
    ZVIL_ANIM_RB_ATTACKTHROW = 90,
    ZVIL_ANIM_RB_ATTACKWAIT = 91,
    ZVIL_ANIM_RB_ATTACKCATCH = 92,
    ZVIL_ANIM_RB_REACT = 93,
    ZVIL_ANIM_RB_LOOK_BEGIN = 94,
    ZVIL_ANIM_RB_LOOK_LOOP = 95,
    ZVIL_ANIM_RB_LOOK_END = 96,
    ZVIL_ANIM_RB_DEATH_LOOP = 97,
    ZVIL_ANIM_MM_FP_MOVE = 98,
    ZVIL_ANIM_MM_FP_TAUNT = 99,
    ZVIL_ANIM_MM_FP_ACTION = 100,
    ZVIL_ANIM_MM_FP_JUMP = 101,
    ZVIL_ANIM_MM_BA_IDLE = 102,
    ZVIL_ANIM_MM_BA_MOVE = 103,
    ZVIL_ANIM_MM_BA_TURN = 104,
    ZVIL_ANIM_MM_BA_BACKSTEP = 105,
    ZVIL_ANIM_MM_BA_TAUNT = 106,
    ZVIL_ANIM_MM_BA_REACT = 107,
    ZVIL_ANIM_MM_BA_ATTACK_BEGIN = 108,
    ZVIL_ANIM_MM_BA_ATTACK_LOOP = 109,
    ZVIL_ANIM_MM_BA_ATTACK = 110,
    ZVIL_ANIM_MM_BA_SHIELD_BEGIN = 111,
    ZVIL_ANIM_MM_BA_SHIELD_LOOP = 112,
    ZVIL_ANIM_MM_BA_SHIELD_END = 113,
    ZVIL_ANIM_MM_BA_STUNNED_BEGIN = 114,
    ZVIL_ANIM_MM_BA_STUNNED_LOOP = 115,
    ZVIL_ANIM_MM_BA_STUNNED_END = 116,
    ZVIL_ANIM_MM_BA_KNOCKED_BEGIN = 117,
    ZVIL_ANIM_MM_BA_KNOCKED_LOOP = 118,
    ZVIL_ANIM_MM_BA_KNOCKED_END = 119,
    ZVIL_ANIM_MM_BA_DEATH_BEGIN = 120,
    ZVIL_ANIM_MM_BA_DEATH = 121,
    ZVIL_ANIM_GANG_ALTIDLE1 = 122,
    ZVIL_ANIM_GANG_ALTIDLE2 = 123,
    ZVIL_ANIM_GANG_ALTIDLE3 = 124,
    ZVIL_ANIM_GANG_FIDGET = 125,
    ZVIL_ANIM_GANG_FIDGET1 = 126,
    ZVIL_ANIM_GANG_FIDGET2 = 127,
    ZVIL_ANIM_GANG_FIDGET3 = 128,
    ZVIL_ANIM_GANG_TURN = 129,
    ZVIL_ANIM_GANG_WALK = 130,
    ZVIL_ANIM_GANG_RUN = 131,
    ZVIL_ANIM_GANG_RUNCHASED = 132,
    ZVIL_ANIM_GANG_ACTION = 133,
    ZVIL_ANIM_GANG_BOSSACTION = 134,
    ZVIL_ANIM_GANG_TALK = 135,
    ZVIL_ANIM_GANG_TALK1 = 136,
    ZVIL_ANIM_GANG_TALK2 = 137,
    ZVIL_ANIM_GANG_TALK3 = 138,
    ZVIL_ANIM_GANG_TALKANDTURN = 139,
    ZVIL_ANIM_SHAM_MOVE = 140,
    ZVIL_ANIM_SHAM_TAUNT = 141,
    ZVIL_ANIM_CRIT_MOVE = 142,
    ZVIL_ANIM_CRIT_BATSLEEP = 143,
    ZVIL_ANIM_CRIT_SPIDERDROP = 144,
    ZVIL_ANIM_CRIT_SMASHED = 145,
    ZVIL_ANIM_SIMP_ACTION = 146,
    ZVIL_ANIM_NOMORE = 147,
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
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class _xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class _xVec3 * p12; // offset 0x14, size 0x4
    class _xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0x24
class _xRay3 {
    // Members
public:
    class _xVec3 origin; // offset 0x0, size 0xC
    class _xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
// total size: 0x78
class zParEmitterAsset : public p2BaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned char count; // offset 0xA, size 0x1
    unsigned char count_variation; // offset 0xB, size 0x1
    float interval; // offset 0xC, size 0x4
    union { // inferred
        class _tagEmitCircle e_circle; // offset 0x10, size 0x8
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    unsigned int parSysID; // offset 0x30, size 0x4
    class _xVec3 pos; // offset 0x34, size 0xC
    class _xVec3 vel; // offset 0x40, size 0xC
    float vel_angle_variation; // offset 0x4C, size 0x4
    unsigned char color_birth[4]; // offset 0x50, size 0x4
    unsigned char color_death[4]; // offset 0x54, size 0x4
    float size_birth; // offset 0x58, size 0x4
    float size_birth_variation; // offset 0x5C, size 0x4
    float size_death; // offset 0x60, size 0x4
    float life; // offset 0x64, size 0x4
    float life_variation; // offset 0x68, size 0x4
    unsigned char pad_emit[2]; // offset 0x6C, size 0x2
    unsigned char cull_mode; // offset 0x6E, size 0x1
    float cull_dist_sqr; // offset 0x70, size 0x4
    unsigned char max_emit; // offset 0x74, size 0x1
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
// total size: 0x4
class _tagxCamStaticFollow {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class _zParGroup : public xParGroup {};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
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
// total size: 0x50
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class _xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class _xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    unsigned int pad32; // offset 0x38, size 0x4
    class zParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
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
// total size: 0x14
class p2EntMotionPenData {
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
// total size: 0x790
class st_zEntVillain : public _zEnt {
    // Members
public:
    class st_ZVIL_NPC_HANDLERFUNCS * vhf; // offset 0xEC, size 0x4
    signed int ability; // offset 0xF0, size 0x4
    signed int abl_atak; // offset 0xF4, size 0x4
    signed int abl_dtct; // offset 0xF8, size 0x4
    signed int abl_move; // offset 0xFC, size 0x4
    signed int abl_spyk; // offset 0x100, size 0x4
    signed int abl_vuln; // offset 0x104, size 0x4
    enum en_NPC_PERSONALITIES typ_person; // offset 0x108, size 0x4
    signed int flg_misc; // offset 0x10C, size 0x4
    enum en_NPC_MODE mode; // offset 0x110, size 0x4
    enum en_BEHAVIOUR_GOAL goal; // offset 0x114, size 0x4
    enum en_BEHAVIOUR_GOAL goaldflt; // offset 0x118, size 0x4
    signed int standby; // offset 0x11C, size 0x4
    signed int anim_playing; // offset 0x120, size 0x4
    signed int anim_playsync; // offset 0x124, size 0x4
    enum en_NPC_ANIMSTATES anim_playnext; // offset 0x128, size 0x4
    float anim_loopmult; // offset 0x12C, size 0x4
    class _xVec3 sanim_idle; // offset 0x130, size 0xC
    class _xVec3 sanim_move; // offset 0x13C, size 0xC
    class _xVec3 sanim_chase; // offset 0x148, size 0xC
    float spd_move; // offset 0x154, size 0x4
    float spd_chase; // offset 0x158, size 0x4
    float spd_turn; // offset 0x15C, size 0x4
    float ds2_detect; // offset 0x160, size 0x4
    float fov_detect; // offset 0x164, size 0x4
    float hyt_detect; // offset 0x168, size 0x4
    float hyt_dtctoff; // offset 0x16C, size 0x4
    float ds2_pursue; // offset 0x170, size 0x4
    float spd_lob; // offset 0x174, size 0x4
    float dst_lob; // offset 0x178, size 0x4
    signed int cnt_lobSalvo; // offset 0x17C, size 0x4
    unsigned int prjTypeID; // offset 0x180, size 0x4
    class _xVec3 vec_lobSpin; // offset 0x184, size 0xC
    float dst_extend; // offset 0x190, size 0x4
    float wid_extend; // offset 0x194, size 0x4
    float spd_extend; // offset 0x198, size 0x4
    class _xVec3 pos_exttgt; // offset 0x19C, size 0xC
    float ang_wander; // offset 0x1A8, size 0x4
    float fac_lobarc; // offset 0x1AC, size 0x4
    float fac_lobheavy; // offset 0x1B0, size 0x4
    class iModelTag tag_vert[12]; // offset 0x1B4, size 0x180
    signed int flg_vert; // offset 0x334, size 0x4
    class tagzFeet feet; // offset 0x338, size 0xC
    class zSFX * sfx_curTalk; // offset 0x344, size 0x4
    class _xBound bound2; // offset 0x348, size 0x38
    signed int allow; // offset 0x380, size 0x4
    class _zEntBubble * bubble; // offset 0x384, size 0x4
    float scl_nombub; // offset 0x388, size 0x4
    class xModelInstance * mdl_gumBlob; // offset 0x38C, size 0x4
    signed int hitpts; // offset 0x390, size 0x4
    unsigned int flinch; // offset 0x394, size 0x4
    signed int goodattack; // offset 0x398, size 0x4
    class _zMovePoint * nav_mvptlist; // offset 0x39C, size 0x4
    class _zMovePoint * nav_next; // offset 0x3A0, size 0x4
    class _zMovePoint * nav_prev; // offset 0x3A4, size 0x4
    signed int need_navpt; // offset 0x3A8, size 0x4
    float dst_navTween; // offset 0x3AC, size 0x4
    signed int domove; // offset 0x3B0, size 0x4
    class _xVec3 pos_moveto; // offset 0x3B4, size 0xC
    class _xVec3 dlt_moveto; // offset 0x3C0, size 0xC
    class _xVec3 dir_moveto; // offset 0x3CC, size 0xC
    float ang_moveto; // offset 0x3D8, size 0x4
    class _xVec3 vel_moveto; // offset 0x3DC, size 0xC
    float dlt_faceang; // offset 0x3E8, size 0x4
    float ang_mdlface; // offset 0x3EC, size 0x4
    float spd_moveto; // offset 0x3F0, size 0x4
    float wiz_moveto; // offset 0x3F4, size 0x4
    float ang_spiral; // offset 0x3F8, size 0x4
    float rad_spiral; // offset 0x3FC, size 0x4
    class _xVec3 pos_vortex; // offset 0x400, size 0xC
    class _xVec3 vec_knocked; // offset 0x40C, size 0xC
    class _xVec3 pos_bowling; // offset 0x418, size 0xC
    class _xVec3 dir_bowling; // offset 0x424, size 0xC
    class _xVec3 pos_pursue_home; // offset 0x430, size 0xC
    class _xVec3 pos_guard_home; // offset 0x43C, size 0xC
    class _xVec3 pos_goto; // offset 0x448, size 0xC
    float ds2_goto_keepaway; // offset 0x454, size 0x4
    class _xEnt * tgt_follow; // offset 0x458, size 0x4
    class _zMovePoint * tgt_bullseye; // offset 0x45C, size 0x4
    class _zEnt * tgt_protect; // offset 0x460, size 0x4
    signed int tgt_stat; // offset 0x464, size 0x4
    float ang_listen; // offset 0x468, size 0x4
    class zEntProjectile * prj_reserved; // offset 0x46C, size 0x4
    float tmr_list[32]; // offset 0x470, size 0x80
    class st_ZVIL_PRECALC precalc; // offset 0x4F0, size 0x64
    class st_NPC_SOUND_QUEUE snd_queue[4]; // offset 0x554, size 0x70
    class st_ZVIL_CONFIG_REFERENCE vilcfg; // offset 0x5C4, size 0x1CC
};
// total size: 0x18
class zSurfacePropTexAnim {
    // Members
public:
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned int group; // offset 0xC, size 0x4
    signed int group_idx; // offset 0x10, size 0x4
    class xBase * group_ptr; // offset 0x14, size 0x4
};
// total size: 0x4
class p2PlatformSplineData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x50
class _zParEmitter : public xBase {
    // Members
public:
    class zParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    unsigned char emit_flags; // offset 0x18, size 0x1
    unsigned char emit_pad[3]; // offset 0x19, size 0x3
    float emit_interval_current; // offset 0x1C, size 0x4
    unsigned char rot[3]; // offset 0x20, size 0x3
    class iModelTag tag; // offset 0x24, size 0x20
    void * attachTo; // offset 0x44, size 0x4
    void * parSys; // offset 0x48, size 0x4
    void * emit_volume; // offset 0x4C, size 0x4
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
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
enum en_NPC_MODE {
    ZVIL_MODE_NOCHANGE = 0,
    ZVIL_MODE_SHUTDOWN = 1,
    ZVIL_MODE_READY = 2,
    ZVIL_MODE_NORMAL = 3,
    ZVIL_MODE_ALERT = 4,
    ZVIL_MODE_BATTLE = 5,
    ZVIL_MODE_RETREAT = 6,
    ZVIL_MODE_DEATH = 7,
    ZVIL_MODE_NOMORE = 8,
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
// total size: 0x4
class _tagEmitVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
// total size: 0x28
class st_STIMULUS_CONTEXT_DATA {
    // Members
public:
    enum en_NPC_STIMULUS stim; // offset 0x0, size 0x4
    class _zEnt * tgt_ent; // offset 0x4, size 0x4
    union { // inferred
        enum en_BEHAVIOUR_GOAL gods_goal; // offset 0x8, size 0x4
        class _zEntBubble * bubble; // offset 0x8, size 0x4
        class _xVec3 dir_headbutt; // offset 0x8, size 0xC
        class _xCollis * colrec; // offset 0x8, size 0x4
        class _xVec3 pos_guard; // offset 0x8, size 0xC
        class _xVec3 gotopos; // offset 0x8, size 0xC
        class xBase * widge; // offset 0x8, size 0x4
        signed int use_alt_action; // offset 0x8, size 0x4
        signed int mm_teleport_hurtz_doggie; // offset 0x8, size 0x4
        class zSFX * talkSFX; // offset 0x8, size 0x4
    };
    union { // inferred
        float off_goto; // offset 0x14, size 0x4
        float mag_headbutt; // offset 0x14, size 0x4
        float amt_stun; // offset 0x14, size 0x4
    };
    union { // inferred
        signed int res_gods; // offset 0x18, size 0x4
        enum en_ZVILLAIN_BUBBLE_RESPONSE res_bubble; // offset 0x18, size 0x4
        enum en_ZVILLAIN_HEADBUTT_RESPONSE res_headbutt; // offset 0x18, size 0x4
        enum en_ZVILLAIN_BOUNCE_RESPONSE res_buttbounce; // offset 0x18, size 0x4
        enum en_ZVILLAIN_BUMPED_RESPONSE res_bumped; // offset 0x18, size 0x4
    };
    signed int res_bogus; // offset 0x1C, size 0x4
    enum en_BEHAVIOUR_GOAL trangoal; // offset 0x20, size 0x4
    enum en_NPC_MODE tranmode; // offset 0x24, size 0x4
};
// total size: 0xB4
class zSurfaceProps {
    // Members
public:
    class zSurfAsset * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    class zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x30
    unsigned int uvfx_flags; // offset 0x38, size 0x4
    class zSurfacePropUVFX uvfx[2]; // offset 0x3C, size 0x78
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
// total size: 0x190
class _zPlatform : public _zEnt {
    // Members
public:
    class p2PlatformAsset * passet; // offset 0xEC, size 0x4
    class _xEntMotion motion; // offset 0xF0, size 0x80
    unsigned short state; // offset 0x170, size 0x2
    unsigned short plat_flags; // offset 0x172, size 0x2
    float tmr; // offset 0x174, size 0x4
    signed int ctr; // offset 0x178, size 0x4
    class _xMovePoint * src; // offset 0x17C, size 0x4
    class xModelInstance * am; // offset 0x180, size 0x4
    class xModelInstance * bm; // offset 0x184, size 0x4
    signed int moving; // offset 0x188, size 0x4
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
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
enum en_NPC_STIMULUS {
    ZVIL_STIM_NONE = 0,
    ZVIL_STIM_OFTHEGODS = 1,
    ZVIL_STIM_MAKEREADY = 2,
    ZVIL_STIM_EXITGOAL = 3,
    ZVIL_STIM_ENTERGOAL = 4,
    ZVIL_STIM_TRANGOAL = 5,
    ZVIL_STIM_WAKEUP = 6,
    ZVIL_STIM_GOTOSLEEP = 7,
    ZVIL_STIM_GOTOPOS = 8,
    ZVIL_STIM_GOTOWIDGET = 9,
    ZVIL_STIM_FOLLOWWIDGET = 10,
    ZVIL_STIM_STARTPATROL = 11,
    ZVIL_STIM_STOPPATROL = 12,
    ZVIL_STIM_STARTGUARD = 13,
    ZVIL_STIM_STOPGUARD = 14,
    ZVIL_STIM_TRESPASS = 15,
    ZVIL_STIM_ENDTRESPASS = 16,
    ZVIL_STIM_STARTTALK = 17,
    ZVIL_STIM_STOPTALK = 18,
    ZVIL_STIM_LOOKFORHERO = 19,
    ZVIL_STIM_SAWHERO = 20,
    ZVIL_STIM_HEARDHERO = 21,
    ZVIL_STIM_SHOCKED = 22,
    ZVIL_STIM_ATTACKHERO = 23,
    ZVIL_STIM_DOACTION = 24,
    ZVIL_STIM_DOTAUNT = 25,
    ZVIL_STIM_COLLIDE = 26,
    ZVIL_STIM_HEADBUTT = 27,
    ZVIL_STIM_BOUNCED = 28,
    ZVIL_STIM_BUMPED = 29,
    ZVIL_STIM_STUNNING = 30,
    ZVIL_STIM_KILLED = 31,
    ZVIL_STIM_SOAPED = 32,
    ZVIL_STIM_GUMMED = 33,
    ZVIL_STIM_KILLSELF = 34,
    ZVIL_STIM_GOTOAFTERLIFE = 35,
    ZVIL_STIM_GUARDWIDGET = 36,
    ZVIL_STIM_GANGBOSSACTION = 37,
    ZVIL_STIM_HURTBOSS = 38,
    ZVIL_STIM_MMPUSHBUTTON = 39,
    ZVIL_STIM_NOMORE = 40,
};
// total size: 0x3C
class zSurfacePropUVFX {
    // Members
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    class _xVec3 trans; // offset 0xC, size 0xC
    class _xVec3 trans_spd; // offset 0x18, size 0xC
    class _xVec3 scale; // offset 0x24, size 0xC
    class _xVec3 scale_spd; // offset 0x30, size 0xC
};
// total size: 0x40
class _xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class p2PlatformOrbitData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xEC
class _zEnt : public _xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xE8, size 0x4
};
// total size: 0x28
class _xEntOrbitData {
    // Members
public:
    class _xVec3 orig; // offset 0x0, size 0xC
    class _xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
// total size: 0x18
class zSFX : public xBase {
    // Members
public:
    class zSFXAsset * asset; // offset 0x10, size 0x4
    unsigned int sndID; // offset 0x14, size 0x4
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
// total size: 0x18
class zPortalAsset : public p2BaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
class st_ZPRJ_CAT_GRAVBALL {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
};
// total size: 0x330
class zEntProjectile : public _xEnt {
    // Members
public:
    signed int flg_prop; // offset 0xE8, size 0x4
    signed int flg_categ; // offset 0xEC, size 0x4
    unsigned char flg_chk; // offset 0xF0, size 0x1
    unsigned char flg_pen; // offset 0xF1, size 0x1
    unsigned char pad[2]; // offset 0xF2, size 0x2
    void * owner; // offset 0xF4, size 0x4
    void * ownerContext; // offset 0xF8, size 0x4
    signed int (* ownerNotify)(class zEntProjectile *, enum en_PROJECTILE_EVENT, void *); // offset 0xFC, size 0x4
    signed int (* ownerDoCollide)(class zEntProjectile *, class zScene *, float); // offset 0x100, size 0x4
    float tmr_alive; // offset 0x104, size 0x4
    float tmr_curstate; // offset 0x108, size 0x4
    class _xVec3 pos_home; // offset 0x10C, size 0xC
    float tym_maxlife; // offset 0x118, size 0x4
    float ds2_maxlife; // offset 0x11C, size 0x4
    class st_ZPRJ_COMMON common; // offset 0x120, size 0x3C
    class st_ZPRJ_CATDATA cat_data; // offset 0x15C, size 0x24
    void * xtradata; // offset 0x180, size 0x4
    class _xCollis * plyr_colrec; // offset 0x184, size 0x4
    class st_ZPRJ_LINKNODE linknode; // offset 0x188, size 0xC
    enum en_ZPRJ_STATES state; // offset 0x194, size 0x4
    signed int flg_stat; // offset 0x198, size 0x4
    float pct_docol; // offset 0x19C, size 0x4
    float tmr_coldelay; // offset 0x1A0, size 0x4
    enum en_ZPRJ_CATEGORY cat_proj; // offset 0x1A4, size 0x4
    class st_ZPRJ_TYPERECORD * ptype; // offset 0x1A8, size 0x4
    float tmr_emit; // offset 0x1AC, size 0x4
    class _xEntFrame raw_frame; // offset 0x1B0, size 0xF0
    class p2EntAsset raw_asset; // offset 0x2A0, size 0x50
    class _xEntShadow raw_shadow; // offset 0x2F0, size 0x18
    class zGustData raw_gust; // offset 0x308, size 0x24
};
// total size: 0x24
class p2PlatformSpringboardData {
    // Members
public:
    float jmph[3]; // offset 0x0, size 0xC
    unsigned int animID[3]; // offset 0xC, size 0xC
    class _xVec3 jmpdir; // offset 0x18, size 0xC
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
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
// total size: 0x30
class zSFXAsset : public p2BaseAsset {
    // Members
public:
    unsigned short flagsSFX; // offset 0x8, size 0x2
    unsigned short freq; // offset 0xA, size 0x2
    float freqm; // offset 0xC, size 0x4
    unsigned int soundAssetID; // offset 0x10, size 0x4
    unsigned int attachID; // offset 0x14, size 0x4
    unsigned char loopCount; // offset 0x18, size 0x1
    unsigned char priority; // offset 0x19, size 0x1
    unsigned char volume; // offset 0x1A, size 0x1
    unsigned char pad; // offset 0x1B, size 0x1
    class _xVec3 pos; // offset 0x1C, size 0xC
    float range; // offset 0x28, size 0x4
    float range_falloff; // offset 0x2C, size 0x4
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
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0x34
class st_ZVIL_NPC_HANDLERFUNCS {
    // Members
public:
    signed int flg_funcs; // offset 0x0, size 0x4
    signed int (* flags)(class st_zEntVillain *, enum en_ZVIL_FLAG_GROUPS, enum en_BEHAVIOUR_GOAL); // offset 0x4, size 0x4
    signed int (* query)(class st_zEntVillain *, enum en_ZVIL_QUERY); // offset 0x8, size 0x4
    signed int (* sysevent)(class st_zEntVillain *, class xBase *, unsigned int, float *, class xBase *, class st_STIMULUS_CONTEXT_DATA *); // offset 0xC, size 0x4
    signed int (* notice)(class st_zEntVillain *, enum en_ZVIL_NOTICE, class st_STIMULUS_CONTEXT_DATA *); // offset 0x10, size 0x4
    signed int (* aware)(class st_zEntVillain *, class _xScene *, float, class st_STIMULUS_CONTEXT_DATA *); // offset 0x14, size 0x4
    signed int (* stimulus)(class st_zEntVillain *, class st_STIMULUS_CONTEXT_DATA *, class st_STIMULUS_CONTEXT_DATA *); // offset 0x18, size 0x4
    signed int (* trangoal)(class st_zEntVillain *, class st_STIMULUS_CONTEXT_DATA *, float); // offset 0x1C, size 0x4
    signed int (* calcmove)(class st_zEntVillain *, class _xScene *, float, class _xEntFrame *); // offset 0x20, size 0x4
    signed int (* respond)(class st_zEntVillain *, class st_STIMULUS_CONTEXT_DATA *); // offset 0x24, size 0x4
    signed int (* pickanim)(class st_zEntVillain *, enum en_BEHAVIOUR_GOAL, enum en_ZVIL_GOAL_SPOT); // offset 0x28, size 0x4
    signed int (* animtran)(class st_zEntVillain *, class xAnimTransition *, class xAnimSingle *); // offset 0x2C, size 0x4
    signed int (* xtrarend)(class st_zEntVillain *); // offset 0x30, size 0x4
};
// total size: 0x14
class _xCylinder {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x3
class RpCollSector {
    // Members
public:
    unsigned char cType; // offset 0x0, size 0x1
    unsigned char vertex; // offset 0x1, size 0x1
    unsigned char start; // offset 0x2, size 0x1
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
// total size: 0x4
class p2PlatformMPData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
// total size: 0x8
class _tagxCamPath {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
};
// total size: 0xC
class xQCData {
    // Members
public:
    unsigned int xmask; // offset 0x0, size 0x4
    unsigned int ymask; // offset 0x4, size 0x4
    unsigned int zmask; // offset 0x8, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1CC
class st_ZVIL_CONFIG_REFERENCE {
    // Members
public:
    class p2EntVillainAsset * vilp2ass; // offset 0x0, size 0x4
    class p2EntAsset * asset; // offset 0x4, size 0x4
    float spd_move; // offset 0x8, size 0x4
    float spd_chase; // offset 0xC, size 0x4
    float spd_turn; // offset 0x10, size 0x4
    float ds2_detect; // offset 0x14, size 0x4
    float hyt_detect; // offset 0x18, size 0x4
    float hyt_dtctoff; // offset 0x1C, size 0x4
    float fov_detect; // offset 0x20, size 0x4
    float ds2_pursue; // offset 0x24, size 0x4
    float ds2_fromhome; // offset 0x28, size 0x4
    float spd_lob; // offset 0x2C, size 0x4
    float dst_lob; // offset 0x30, size 0x4
    signed int cnt_lobSalvo; // offset 0x34, size 0x4
    unsigned int prjTypeID; // offset 0x38, size 0x4
    float dst_extend; // offset 0x3C, size 0x4
    float wid_extend; // offset 0x40, size 0x4
    float spd_extend; // offset 0x44, size 0x4
    float ang_wander; // offset 0x48, size 0x4
    float fac_lobarc; // offset 0x4C, size 0x4
    float fac_lobheavy; // offset 0x50, size 0x4
    float tymref_list[32]; // offset 0x54, size 0x80
    signed int msk_condspawn; // offset 0xD4, size 0x4
    signed int minDifficulty; // offset 0xD8, size 0x4
    signed int hitpts; // offset 0xDC, size 0x4
    signed int misc_flags; // offset 0xE0, size 0x4
    class _xVec3 scl_modelBase; // offset 0xE4, size 0xC
    class _xVec3 sanim_idle; // offset 0xF0, size 0xC
    class _xVec3 sanim_move; // offset 0xFC, size 0xC
    class _xVec3 sanim_chase; // offset 0x108, size 0xC
    float rad_bound; // offset 0x114, size 0x4
    class _xVec3 vec_bndoffset; // offset 0x118, size 0xC
    float rad_bound2; // offset 0x124, size 0x4
    class _xVec3 vec_bnd2offset; // offset 0x128, size 0xC
    float tym_attack_begin; // offset 0x134, size 0x4
    float tym_attack_end; // offset 0x138, size 0x4
    class _xVec3 pos_verts[12]; // offset 0x13C, size 0x90
};
// total size: 0x4
class _tagp2CamStaticAsset {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};
// total size: 0x118
class _zEntBubble : public _zEnt {
    // Members
public:
    unsigned int state; // offset 0xEC, size 0x4
    class _zEnt * villain; // offset 0xF0, size 0x4
    float bubbleScale; // offset 0xF4, size 0x4
    float timer; // offset 0xF8, size 0x4
    float stuckTimer; // offset 0xFC, size 0x4
    class _xVec3 envelopStart; // offset 0x100, size 0xC
    float fx_timer; // offset 0x10C, size 0x4
    float fx_scale; // offset 0x110, size 0x4
    class xPar * particle; // offset 0x114, size 0x4
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
// total size: 0x28
class p2PlatformAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class p2PlatformERData er; // offset 0x4, size 0x4
        class p2PlatformOrbitData orb; // offset 0x4, size 0x4
        class p2PlatformSplineData spl; // offset 0x4, size 0x4
        class p2PlatformMPData mp; // offset 0x4, size 0x4
        class p2PlatformMechData mech; // offset 0x4, size 0x4
        class p2PlatformPenData pen; // offset 0x4, size 0x4
        class p2PlatformConvBeltData cb; // offset 0x4, size 0x4
        class p2PlatformFallingData fall; // offset 0x4, size 0x8
        class p2PlatformFRData fr; // offset 0x4, size 0x10
        class p2PlatformBreakawayData ba; // offset 0x4, size 0xC
        class p2PlatformSpringboardData sb; // offset 0x4, size 0x24
        class p2PlatformTeeterData teet; // offset 0x4, size 0xC
    };
};
// total size: 0x8
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
// total size: 0xC
class tagzFeet {
    // Members
public:
    signed int total; // offset 0x0, size 0x4
    class _xEnt * owner; // offset 0x4, size 0x4
    signed short entity_type; // offset 0x8, size 0x2
    signed short pitch; // offset 0xA, size 0x2
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0xC
class p2SimpleObjAsset {
    // Members
public:
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
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
// total size: 0x74
class p2EntVillainAsset {
    // Members
public:
    float activateRadius; // offset 0x0, size 0x4
    float activateFOV; // offset 0x4, size 0x4
    float detectHeight; // offset 0x8, size 0x4
    float detectHeightOffset; // offset 0xC, size 0x4
    float speedMovement; // offset 0x10, size 0x4
    float speedPursue; // offset 0x14, size 0x4
    float speedTurn; // offset 0x18, size 0x4
    float pursuitRange; // offset 0x1C, size 0x4
    unsigned short durDazedState; // offset 0x20, size 0x2
    unsigned short durGloatState; // offset 0x22, size 0x2
    unsigned short durGummedState; // offset 0x24, size 0x2
    unsigned short durBubbleState; // offset 0x26, size 0x2
    unsigned char hitpoints; // offset 0x28, size 0x1
    unsigned char behaviorState; // offset 0x29, size 0x1
    unsigned short pad; // offset 0x2A, size 0x2
    unsigned int villFlags; // offset 0x2C, size 0x4
    float lobSpeed; // offset 0x30, size 0x4
    float lobDurReload; // offset 0x34, size 0x4
    float lobRange; // offset 0x38, size 0x4
    unsigned int lobSalvo; // offset 0x3C, size 0x4
    unsigned int projectileTypeID; // offset 0x40, size 0x4
    unsigned int mvptBullseyeID; // offset 0x44, size 0x4
    float lobArcness; // offset 0x48, size 0x4
    float lobHeavy; // offset 0x4C, size 0x4
    float extenderRange; // offset 0x50, size 0x4
    float extenderWidth; // offset 0x54, size 0x4
    float extenderDuration; // offset 0x58, size 0x4
    float extenderRate; // offset 0x5C, size 0x4
    float extenderReloadTime; // offset 0x60, size 0x4
    unsigned int movePointAssetID; // offset 0x64, size 0x4
    unsigned int pathAssetID; // offset 0x68, size 0x4
    signed int minPlayerPowerups; // offset 0x6C, size 0x4
    signed int minGameDifficulty; // offset 0x70, size 0x4
};
enum en_ZPRJ_CATEGORY {
    ZPRJ_CAT_UNKNOWN = 0,
    ZPRJ_CAT_ARROW = 1,
    ZPRJ_CAT_GRAVBALL = 2,
    ZPRJ_CAT_BOUNCEBALL = 3,
    ZPRJ_CAT_BUBSOAP = 4,
    ZPRJ_CAT_BUBGUM = 5,
    ZPRJ_CAT_BKAXE = 6,
    ZPRJ_CAT_GGSHOCK = 7,
    ZPRJ_CAT_RBSWORD = 8,
    ZPRJ_CAT_MMFLASK = 9,
    ZPRJ_CAT_PICKUP = 10,
    ZPRJ_CAT_STDDEBRIS = 11,
    ZPRJ_CAT_BANGDEBRIS = 12,
    ZPRJ_CAT_NOMORE = 13,
};
// total size: 0x10
class xFFX {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class _xEnt *, class _xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
// total size: 0xF4
class _zEntSimpleObj : public _zEnt {
    // Members
public:
    class p2SimpleObjAsset * sasset; // offset 0xEC, size 0x4
    unsigned int sflags; // offset 0xF0, size 0x4
};
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x0
class st_ZPRJ_TYPERECORD {};
enum _LostChanceFX {
    LCFX_None = 0,
    LCFX_StdShock = 1,
    LCFX_Water = 2,
    LCFX_Total = 3,
};
// total size: 0xC
class _tagEmitOffsetPoint {
    // Members
public:
    class _xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x18
class p2EntMotionOrbitData {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
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
// total size: 0x50
class zVolumeAsset : public p2BaseAsset {
    // Members
public:
    unsigned int flags; // offset 0x8, size 0x4
    class _xBound bound; // offset 0xC, size 0x38
    float rot; // offset 0x44, size 0x4
    float xpivot; // offset 0x48, size 0x4
    float zpivot; // offset 0x4C, size 0x4
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
// total size: 0x1EC
class _tagLightning {
    // Members
public:
    enum _tagLightningType type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    class _xVec3 base_point[16]; // offset 0x8, size 0xC0
    class _xVec3 point[16]; // offset 0xC8, size 0xC0
    signed int total_points; // offset 0x188, size 0x4
    float arc_height; // offset 0x18C, size 0x4
    float thickness; // offset 0x190, size 0x4
    union { // inferred
        class _tagLightningLine line; // offset 0x194, size 0x4
        class _tagLightningRot rot; // offset 0x194, size 0x48
    };
    unsigned char r; // offset 0x1DC, size 0x1
    unsigned char g; // offset 0x1DD, size 0x1
    unsigned char b; // offset 0x1DE, size 0x1
    unsigned char alpha_pad; // offset 0x1DF, size 0x1
    float rand_radius; // offset 0x1E0, size 0x4
    float time_left; // offset 0x1E4, size 0x4
    float time_total; // offset 0x1E8, size 0x4
};
// total size: 0x8
class zParCmd : public xParCmd {
    // Members
public:
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
// total size: 0x230
class _tagPlayerSndFX {
    // Members
public:
    signed short ammo_pitch; // offset 0x0, size 0x2
    signed short special_pitch; // offset 0x2, size 0x2
    signed short token_pitch; // offset 0x4, size 0x2
    signed short bite_pitch; // offset 0x6, size 0x2
    signed short snackcounter_pitch; // offset 0x8, size 0x2
    signed short save_pitch; // offset 0xA, size 0x2
    signed short key_pitch; // offset 0xC, size 0x2
    signed short info_pitch; // offset 0xE, size 0x2
    signed short error_pitch; // offset 0x10, size 0x2
    unsigned int ammo_id; // offset 0x14, size 0x4
    unsigned int special_id; // offset 0x18, size 0x4
    unsigned int token_id; // offset 0x1C, size 0x4
    unsigned int bite_id; // offset 0x20, size 0x4
    unsigned int snackcounter_id; // offset 0x24, size 0x4
    unsigned int save_id; // offset 0x28, size 0x4
    unsigned int key_id; // offset 0x2C, size 0x4
    unsigned int info_id; // offset 0x30, size 0x4
    unsigned int error_id; // offset 0x34, size 0x4
    unsigned int van_id; // offset 0x38, size 0x4
    signed short butt_pitch; // offset 0x3C, size 0x2
    signed short head_pitch; // offset 0x3E, size 0x2
    signed short butt_snd; // offset 0x40, size 0x2
    signed short head_snd; // offset 0x42, size 0x2
    unsigned int butt_id[3]; // offset 0x44, size 0xC
    unsigned int head_id[3]; // offset 0x50, size 0xC
    unsigned int buttmiss_id; // offset 0x5C, size 0x4
    unsigned int skid_id[3]; // offset 0x60, size 0xC
    signed int vo_snd; // offset 0x6C, size 0x4
    unsigned int dig_id[2]; // offset 0x70, size 0x8
    unsigned int scare_id[2]; // offset 0x78, size 0x8
    unsigned int excite_id[13]; // offset 0x80, size 0x34
    unsigned int danger_id[9]; // offset 0xB4, size 0x24
    unsigned int leap_id[12]; // offset 0xD8, size 0x30
    unsigned int see_geronimo_id[1]; // offset 0x108, size 0x4
    unsigned int see_shaggy_id[5]; // offset 0x10C, size 0x14
    unsigned int see_holly_id[3]; // offset 0x120, size 0xC
    unsigned int see_monster_id[5]; // offset 0x12C, size 0x14
    unsigned int see_groundskeeper_id[1]; // offset 0x140, size 0x4
    unsigned int see_warpgate_id[1]; // offset 0x144, size 0x4
    unsigned int need_more_snacks_id[3]; // offset 0x148, size 0xC
    unsigned int success_id[1]; // offset 0x154, size 0x4
    unsigned int see_token_id[3]; // offset 0x158, size 0xC
    unsigned int see_crab_id[2]; // offset 0x164, size 0x8
    unsigned int see_rat_id[4]; // offset 0x16C, size 0x10
    unsigned int see_gargoyle_id[2]; // offset 0x17C, size 0x8
    unsigned int see_creeper_id[2]; // offset 0x184, size 0x8
    unsigned int see_ghost_diver_id[2]; // offset 0x18C, size 0x8
    unsigned int see_sea_creature_id[2]; // offset 0x194, size 0x8
    unsigned int see_headless_specter_id[2]; // offset 0x19C, size 0x8
    unsigned int see_scarecrow_id[3]; // offset 0x1A4, size 0xC
    unsigned int see_space_kook_id[2]; // offset 0x1B0, size 0x8
    unsigned int see_tar_monster_id[4]; // offset 0x1B8, size 0x10
    unsigned int see_witch_id[2]; // offset 0x1C8, size 0x8
    unsigned int see_robot_id[2]; // offset 0x1D0, size 0x8
    unsigned int see_wolfman_id[2]; // offset 0x1D8, size 0x8
    unsigned int see_ghost_id[4]; // offset 0x1E0, size 0x10
    unsigned int see_zombie_id[2]; // offset 0x1F0, size 0x8
    unsigned int sorry_id[4]; // offset 0x1F8, size 0x10
    unsigned int collect_all_snacks_id[1]; // offset 0x208, size 0x4
    unsigned int eat_sandwich_id[2]; // offset 0x20C, size 0x8
    unsigned int eat_turkey_id[2]; // offset 0x214, size 0x8
    unsigned int eat_cake_id[2]; // offset 0x21C, size 0x8
    unsigned int eat_snacks_id[3]; // offset 0x224, size 0xC
};
// total size: 0x24
class _xBBox {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    class _xBox box; // offset 0xC, size 0x18
};
// total size: 0x18
class _xBox {
    // Members
public:
    class _xVec3 upper; // offset 0x0, size 0xC
    class _xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class zPortalAsset * passet; // offset 0x10, size 0x4
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
// total size: 0x20
class st_ZPRJ_CAT_BOUNCEBALL : public st_ZPRJ_CAT_GRAVBALL {
    // Members
public:
    signed int atRest; // offset 0x4, size 0x4
    float tym_atrest; // offset 0x8, size 0x4
    signed int cnt_curBounce; // offset 0xC, size 0x4
    signed int cnt_maxBounce; // offset 0x10, size 0x4
    float fac_elastic; // offset 0x14, size 0x4
    float pct_randKick; // offset 0x18, size 0x4
    signed int skip_next_bounce; // offset 0x1C, size 0x4
};
// total size: 0x30
class _xMovePoint : public xBase {
    // Members
public:
    class p2MovePointAsset * asset; // offset 0x10, size 0x4
    class _xVec3 * pos; // offset 0x14, size 0x4
    class _xMovePoint * * nodes; // offset 0x18, size 0x4
    class _xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char flg_props; // offset 0x25, size 0x1
    unsigned char pad[2]; // offset 0x26, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum en_BEHAVIOUR_GOAL {
    ZVIL_GOAL_NONE = -1,
    ZVIL_GOAL_AFTERLIFE = 0,
    ZVIL_GOAL_BASEINIT = 1,
    ZVIL_GOAL_STARTUP = 2,
    ZVIL_GOAL_GOONLINE = 3,
    ZVIL_GOAL_IDLE = 4,
    ZVIL_GOAL_BORED = 5,
    ZVIL_GOAL_PATROL = 6,
    ZVIL_GOAL_MINIPATROL = 7,
    ZVIL_GOAL_FOLLOW = 8,
    ZVIL_GOAL_GUARD = 9,
    ZVIL_GOAL_AMBUSH = 10,
    ZVIL_GOAL_LEAP = 11,
    ZVIL_GOAL_TALK = 12,
    ZVIL_GOAL_LOOKFORHERO = 13,
    ZVIL_GOAL_LISTEN = 14,
    ZVIL_GOAL_SURPRIZE = 15,
    ZVIL_GOAL_INVESTIGATE = 16,
    ZVIL_GOAL_ATTACKREADY = 17,
    ZVIL_GOAL_BULLREADY = 18,
    ZVIL_GOAL_CHASE = 19,
    ZVIL_GOAL_CQCATTACK = 20,
    ZVIL_GOAL_LOBBING = 21,
    ZVIL_GOAL_SPELLCAST = 22,
    ZVIL_GOAL_TAUNT = 23,
    ZVIL_GOAL_DAZED = 24,
    ZVIL_GOAL_SOAPED = 25,
    ZVIL_GOAL_GUMMED = 26,
    ZVIL_GOAL_HURT = 27,
    ZVIL_GOAL_BLOCKHEAD = 28,
    ZVIL_GOAL_TELEPORT = 29,
    ZVIL_GOAL_KNOCKBACK = 30,
    ZVIL_GOAL_ACTION = 31,
    ZVIL_GOAL_DIE = 32,
    ZVIL_GOAL_NOMORE = 33,
};
enum en_ZPRJ_CATDATA_FORM {
    ZPRJ_CDAT_ARROW = 0,
    ZPRJ_CDAT_GRAVBALL = 1,
    ZPRJ_CDAT_BOUNCE = 2,
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
// total size: 0x18
class _xEntShadow {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 vec; // offset 0xC, size 0xC
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
// total size: 0x4
class p2PlatformMechData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
// total size: 0x10
class zCutsceneZbuffer {
    // Members
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float near; // offset 0x8, size 0x4
    float far; // offset 0xC, size 0x4
};
enum en_NPC_PERSONALITIES {
    ZVIL_PERSON_BOGUS = -1,
    ZVIL_PERSON_NORMAL = 0,
    ZVIL_PERSON_WIMP = 1,
    ZVIL_PERSON_WIRED = 2,
    ZVIL_PERSON_BULLY = 3,
    ZVIL_PERSON_LEADER = 4,
    ZVIL_PERSON_AGGRESSIVE = 5,
    ZVIL_PERSON_BOSS = 6,
    ZVIL_PERSON_SCOOBYGANG = 7,
};
// total size: 0x34
class _zMovePoint : public _xMovePoint {
    // Members
public:
    unsigned int unused; // offset 0x30, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x50
class _xEntPenData {
    // Members
public:
    class _xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class _xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0xC
class p2PlatformTeeterData {
    // Members
public:
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
};
// total size: 0xD0
class zSurfAsset : public p2BaseAsset {
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
    class zSurfUVFX uvfx[2]; // offset 0x54, size 0x78
    unsigned char on; // offset 0xCC, size 0x1
    unsigned char surf_pad[3]; // offset 0xCD, size 0x3
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
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x4
class _xEntSplineData {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
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
// total size: 0x3C
class zSurfUVFX {
    // Members
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    class _xVec3 trans; // offset 0xC, size 0xC
    class _xVec3 trans_spd; // offset 0x18, size 0xC
    class _xVec3 scale; // offset 0x24, size 0xC
    class _xVec3 scale_spd; // offset 0x30, size 0xC
};
// total size: 0x4
class _tagp2CamStaticFollowAsset {
    // Members
public:
    float rubber_band; // offset 0x0, size 0x4
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
// total size: 0x11C
class zEGenerator : public _zEnt {
    // Members
public:
    unsigned short flags; // offset 0xEC, size 0x2
    unsigned short num_dsts; // offset 0xEE, size 0x2
    float tmr; // offset 0xF0, size 0x4
    class xAnimFile * afile; // offset 0xF4, size 0x4
    class _xVec3 src_pos; // offset 0xF8, size 0xC
    class _xVec3 dst_pos; // offset 0x104, size 0xC
    class xBase * dst; // offset 0x110, size 0x4
    class _tagLightning * lfx[2]; // offset 0x114, size 0x8
};
// total size: 0xD0
class _tagPlayerFX {
    // Members
public:
    class _zParEmitter * emit_land[23]; // offset 0x0, size 0x5C
    class _zParEmitter * emit_stop[23]; // offset 0x5C, size 0x5C
    class _zParEmitter * emit_scratch; // offset 0xB8, size 0x4
    class _zParEmitter * emit_digup[2]; // offset 0xBC, size 0x8
    float timer_stop; // offset 0xC4, size 0x4
    float timer_scratch; // offset 0xC8, size 0x4
    float timer_digup; // offset 0xCC, size 0x4
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
// total size: 0x54
class _zParEmitterCustomSettings {
    // Members
public:
    unsigned int custom_flags; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
    unsigned char count_variation; // offset 0x5, size 0x1
    float interval; // offset 0x8, size 0x4
    unsigned int attachToID; // offset 0xC, size 0x4
    class _xVec3 pos; // offset 0x10, size 0xC
    class _xVec3 vel; // offset 0x1C, size 0xC
    float vel_angle_variation; // offset 0x28, size 0x4
    unsigned char color_birth[4]; // offset 0x2C, size 0x4
    unsigned char color_death[4]; // offset 0x30, size 0x4
    float size_birth; // offset 0x34, size 0x4
    float size_birth_variation; // offset 0x38, size 0x4
    float size_death; // offset 0x3C, size 0x4
    float life; // offset 0x40, size 0x4
    float life_variation; // offset 0x44, size 0x4
    unsigned char rot[3]; // offset 0x48, size 0x3
    float xzcircle_radius; // offset 0x4C, size 0x4
    float emit_interval_current; // offset 0x50, size 0x4
};
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
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x168
class _zEntPickup : public _zEnt {
    // Members
public:
    unsigned int state; // offset 0xEC, size 0x4
    class zAssetPickup * p; // offset 0xF0, size 0x4
    void * anim; // offset 0xF4, size 0x4
    float animTime; // offset 0xF8, size 0x4
    float timer; // offset 0xFC, size 0x4
    float shake_timer; // offset 0x100, size 0x4
    class _xVec3 shake_pos; // offset 0x104, size 0xC
    signed int snackGateInfoDisplayed; // offset 0x110, size 0x4
    float fx_timer; // offset 0x114, size 0x4
    class xPar * fx_par; // offset 0x118, size 0x4
    class _zParEmitter * fx_emit; // offset 0x11C, size 0x4
    float fx_scale; // offset 0x120, size 0x4
    class _xVec3 grab_pos; // offset 0x124, size 0xC
    unsigned int flyflags; // offset 0x130, size 0x4
    signed int flg_opts; // offset 0x134, size 0x4
    class _xVec3 vel; // offset 0x138, size 0xC
    class _xVec3 droppos; // offset 0x144, size 0xC
    class xBase * followTarget; // offset 0x150, size 0x4
    class _xVec3 followOffset; // offset 0x154, size 0xC
    class xBase * dropParent; // offset 0x160, size 0x4
    class _xEnt * useThisEntPos; // offset 0x164, size 0x4
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
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
enum en_ZVIL_FLAG_GROUPS {
    ZVIL_FGRP_PHYS = 0,
    ZVIL_FGRP_CHK = 1,
    ZVIL_FGRP_PEN = 2,
    ZVIL_FGRP_CHKBY = 3,
    ZVIL_FGRP_PENBY = 4,
    ZVIL_FGRP_ABLE = 5,
    ZVIL_FGRP_ATAK = 6,
    ZVIL_FGRP_DTCT = 7,
    ZVIL_FGRP_MOVE = 8,
    ZVIL_FGRP_SPYK = 9,
    ZVIL_FGRP_VULN = 10,
    ZVIL_FGRP_ALOW = 11,
    ZVIL_FGRP_NOMORE = 12,
};
// total size: 0x4
class xParCmd {
    // Members
public:
    unsigned int flag; // offset 0x0, size 0x4
};
// total size: 0x4
class p2EntMotionSplineData {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
enum _tagLightningType {
    eLT_Line = 0,
    eLT_Rotating = 1,
    eLT_Total = 2,
};
// total size: 0x30
class _xMat3x3 {
    // Members
public:
    class _xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class _xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
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
// total size: 0x4
class p2PlatformPenData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
// total size: 0x20
class p2MovePointAsset : public p2BaseAsset {
    // Members
public:
    class _xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
};
// total size: 0x8
class _tagEmitCircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
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
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x44
class xFFXRotMatchState {
    // Members
public:
    signed int lgrounded; // offset 0x0, size 0x4
    class _xVec3 lfup; // offset 0x4, size 0xC
    class _xVec3 lfat; // offset 0x10, size 0xC
    class _xVec3 plfat; // offset 0x1C, size 0xC
    float tmr; // offset 0x28, size 0x4
    float mrate; // offset 0x2C, size 0x4
    float tmatch; // offset 0x30, size 0x4
    float rrate; // offset 0x34, size 0x4
    float trelax; // offset 0x38, size 0x4
    float max_decl; // offset 0x3C, size 0x4
    class xFFXRotMatchState * next; // offset 0x40, size 0x4
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
// total size: 0x44
class zCutsceneZbufferHack {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class zCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
// total size: 0x40
class _xEntMPData {
    // Members
public:
    float curdist; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    class _xMovePoint * dest; // offset 0x8, size 0x4
    class _xMovePoint * src; // offset 0xC, size 0x4
    class xSpline3 * spl; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
    unsigned int padalign; // offset 0x18, size 0x4
    class _xQuat aquat; // offset 0x20, size 0x10
    class _xQuat bquat; // offset 0x30, size 0x10
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x2C
class _xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class _xVec3 point; // offset 0x10, size 0xC
    class _xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x40
class p2EntTriggerAsset {
    // Members
public:
    class _xVec3 p[4]; // offset 0x0, size 0x30
    class _xVec3 direction; // offset 0x30, size 0xC
    unsigned int flags; // offset 0x3C, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x80
class _xEntMotion {
    // Members
public:
    class p2EntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class _xEntERData er; // offset 0x20, size 0x44
        class _xEntOrbitData orb; // offset 0x20, size 0x28
        class _xEntSplineData spl; // offset 0x20, size 0x4
        class _xEntMPData mp; // offset 0x20, size 0x40
        class _xEntMechData mech; // offset 0x20, size 0x4C
        class _xEntPenData pen; // offset 0x20, size 0x50
    };
    class _xEnt * owner; // offset 0x70, size 0x4
    class _xEnt * target; // offset 0x74, size 0x4
};
// total size: 0x1C
class zPlayerSituation {
    // Members
public:
    unsigned int priority; // offset 0x0, size 0x4
    unsigned int countMax; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    float punchDelay; // offset 0xC, size 0x4
    float elapsedTime; // offset 0x10, size 0x4
    unsigned int count; // offset 0x14, size 0x4
    unsigned int type; // offset 0x18, size 0x4
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
class p2EntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x4
class _tagLightningLine {
    // Members
public:
    float unused; // offset 0x0, size 0x4
};
// total size: 0x8
class st_ENODE {
    // Members
public:
    class st_ENODE * next; // offset 0x0, size 0x4
    class st_ENODE * prev; // offset 0x4, size 0x4
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
// total size: 0x30
class p2EntMotionAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class p2EntMotionERData er; // offset 0x4, size 0x28
        class p2EntMotionOrbitData orb; // offset 0x4, size 0x18
        class p2EntMotionSplineData spl; // offset 0x4, size 0x4
        class p2EntMotionMPData mp; // offset 0x4, size 0xC
        class p2EntMotionMechData mech; // offset 0x4, size 0x2C
        class p2EntMotionPenData pen; // offset 0x4, size 0x14
    };
};
// total size: 0x8
class RpPolygon {
    // Members
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
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
// total size: 0x48
class iShadowCache {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    class _xVec3 right; // offset 0xC, size 0xC
    class _xVec3 corner[4]; // offset 0x18, size 0x30
};
// total size: 0x4
class p2PlatformConvBeltData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
};
enum en_ZPRJ_STATES {
    ZPRJ_STATE_UNUSED = 0,
    ZPRJ_STATE_STANDBY = 1,
    ZPRJ_STATE_ACTIVE = 2,
    ZPRJ_STATE_DEAD = 3,
};
// total size: 0x4
class st_ZPRJ_CAT_PICKUP {
    // Members
public:
    signed int nada; // offset 0x0, size 0x4
};
// total size: 0x24
class _zGust : public xBase {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zGustAsset * asset; // offset 0x14, size 0x4
    class _zVolume * volume; // offset 0x18, size 0x4
    class _zVolume * fx_volume; // offset 0x1C, size 0x4
    float debris_timer; // offset 0x20, size 0x4
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
enum en_ZVILLAIN_BOUNCE_RESPONSE {
    ZVIL_BOUNCE_NONE = 0,
    ZVIL_BOUNCE_NORMAL = 1,
    ZVIL_BOUNCE_GUM = 2,
    ZVIL_BOUNCE_DAMAGE = 3,
    ZVIL_BOUNCE_LAND = 4,
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
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
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x20
class iModelTag {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
class _tagEmitSphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
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
// total size: 0x1C
class st_NPC_SOUND_QUEUE {
    // Members
public:
    enum en_NPC_SOUND sndEvent; // offset 0x0, size 0x4
    unsigned int sndDirect; // offset 0x4, size 0x4
    signed int flg_frolic; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    signed int cnt_repeat; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float tym_repeatDelay; // offset 0x18, size 0x4
};
// total size: 0x0
class zGustAsset {};
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
class _xQuat {
    // Members
public:
    class _xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x1C
class _tagSkidEdge {
    // Members
public:
    class _xVec3 centre; // offset 0x0, size 0xC
    class _xVec3 local_x; // offset 0xC, size 0xC
    float width; // offset 0x18, size 0x4
};
// total size: 0x24
class _tagFeetSkidMark {
    // Members
public:
    signed int total_feet; // offset 0x0, size 0x4
    class _tagSkidEdge * edge[4]; // offset 0x4, size 0x10
    signed int first_idx; // offset 0x14, size 0x4
    signed int total_edges; // offset 0x18, size 0x4
    float sample_timer; // offset 0x1C, size 0x4
    float remove_timer; // offset 0x20, size 0x4
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
// total size: 0x0
class rxReq {};
// total size: 0x48
class _tagLightningRot {
    // Members
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x2C
class p2EntMotionMechData {
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
// total size: 0x8
class p2PlatformFallingData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
};
enum en_PROJECTILE_EVENT {
    ZPRJ_EVNT_ACTIVE = 0,
    ZPRJ_EVNT_TRANSTATE = 1,
    ZPRJ_EVNT_NEWTIME = 2,
    ZPRJ_EVNT_ENDTIME = 3,
    ZPRJ_EVNT_ABORT = 4,
    ZPRJ_EVNT_HITPLYR = 5,
    ZPRJ_EVNT_LAUNCH = 6,
    ZPRJ_EVNT_INFLIGHT = 7,
    ZPRJ_EVNT_ATREST = 8,
    ZPRJ_EVNT_HITSTUFF = 9,
    ZPRJ_EVNT_DETONATE = 10,
    ZPRJ_EVNT_SELFDESTRUCT = 11,
    ZPRJ_EVNT_DEATH = 12,
    ZPRJ_EVNT_STARTRESTING = 13,
    ZPRJ_EVNT_BOUNCE = 14,
    ZPRJ_EVNT_VIL_BUILDUP = 15,
    ZPRJ_EVNT_VIL_AFTERMATH = 16,
    ZPRJ_EVNT_NOMORE = 17,
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x14
class _zVolume : public xBase {
    // Members
public:
    class zVolumeAsset * asset; // offset 0x10, size 0x4
};
enum en_ZVIL_GOAL_SPOT {
    ZVIL_GSPOT_START = 0,
    ZVIL_GSPOT_RESUME = 1,
    ZVIL_GSPOT_FIDGET = 2,
    ZVIL_GSPOT_ATTACKLINGER = 3,
    ZVIL_GSPOT_KICKATTACK = 4,
    ZVIL_GSPOT_BUBHIT = 5,
    ZVIL_GSPOT_BUBBOUNCE = 6,
    ZVIL_GSPOT_BUBRESIST = 7,
    ZVIL_GSPOT_BUBBREAKFREE = 8,
    ZVIL_GSPOT_STATERECOVER = 9,
    ZVIL_GSPOT_ACTION_ALTA = 10,
    ZVIL_GSPOT_MOVELEFT = 11,
    ZVIL_GSPOT_MOVERIGHT = 12,
    ZVIL_GSPOT_TAUNT_ALTA = 13,
    ZVIL_GSPOT_TAUNT_ALTB = 14,
    ZVIL_GSPOT_HURT_ALTA = 15,
    ZVIL_GSPOT_HURT_ALTB = 16,
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
enum en_ZVIL_NOTICE {
    ZVIL_NOTE_PREPARE = 0,
    ZVIL_NOTE_PRECALC = 1,
    ZVIL_NOTE_OLDTIME = 2,
    ZVIL_NOTE_NOMORE = 3,
};
// total size: 0x24
class st_ZPRJ_CATDATA {
    // Members
public:
    enum en_ZPRJ_CATDATA_FORM idx_cdat; // offset 0x0, size 0x4
    union { // inferred
        class st_ZPRJ_CAT_ARROW arrow; // offset 0x4, size 0x18
        class st_ZPRJ_CAT_GRAVBALL gravball; // offset 0x4, size 0x4
        class st_ZPRJ_CAT_BOUNCEBALL bounce; // offset 0x4, size 0x20
        class st_ZPRJ_CAT_PICKUP pickup; // offset 0x4, size 0x4
    };
};
// total size: 0xC
class st_ZPRJ_LINKNODE {
    // Members
public:
    class st_ENODE node; // offset 0x0, size 0x8
    class zEntProjectile * backref; // offset 0x8, size 0x4
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
enum en_ZVILLAIN_HEADBUTT_RESPONSE {
    ZVIL_HEADBUTT_NONE = 0,
    ZVIL_HEADBUTT_NORMAL = 1,
    ZVIL_HEADBUTT_CONTINUE = 2,
    ZVIL_HEADBUTT_HITGANG = 3,
    ZVIL_HEADBUTT_DAMAGE = 4,
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class _tagEmitRect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0x20
class zParSysAsset : public p2BaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned int parentParSysID; // offset 0xC, size 0x4
    unsigned int textureID; // offset 0x10, size 0x4
    unsigned char parFlags; // offset 0x14, size 0x1
    unsigned char priority; // offset 0x15, size 0x1
    unsigned short maxPar; // offset 0x16, size 0x2
    unsigned char renderFunc; // offset 0x18, size 0x1
    unsigned char renderSrcBlendMode; // offset 0x19, size 0x1
    unsigned char renderDstBlendMode; // offset 0x1A, size 0x1
    unsigned char cmdCount; // offset 0x1B, size 0x1
    unsigned int cmdSize; // offset 0x1C, size 0x4
};
// total size: 0x14
class zAssetPickup {
    // Members
public:
    unsigned int pickupHash; // offset 0x0, size 0x4
    unsigned char pickupType; // offset 0x4, size 0x1
    unsigned char pickupIndex; // offset 0x5, size 0x1
    unsigned short pickupFlags; // offset 0x6, size 0x2
    unsigned int quantity; // offset 0x8, size 0x4
    unsigned int modelID; // offset 0xC, size 0x4
    unsigned int animID; // offset 0x10, size 0x4
};
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
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
// total size: 0x4
class _iCollis {
    // Members
public:
    signed int unknown; // offset 0x0, size 0x4
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x10
class _xRot {
    // Members
public:
    class _xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x10
class p2PlatformFRData {
    // Members
public:
    float fspeed; // offset 0x0, size 0x4
    float rspeed; // offset 0x4, size 0x4
    float ret_delay; // offset 0x8, size 0x4
    float post_ret_delay; // offset 0xC, size 0x4
};
enum en_ZVIL_QUERY {
    ZVIL_Q_DOUPDATE = 0,
    ZVIL_Q_ALIVE = 1,
    ZVIL_Q_ASLEEP = 2,
    ZVIL_Q_PITFALL = 3,
    ZVIL_Q_HAVEANCHOR = 4,
    ZVIL_Q_HAVEGUARDPOS = 5,
    ZVIL_Q_DOFOLLOW = 6,
    ZVIL_Q_NEEDNAV = 7,
    ZVIL_Q_HAVENAV = 8,
    ZVIL_Q_CANGUARD = 9,
    ZVIL_Q_CANPATROL = 10,
    ZVIL_Q_CANCHASE = 11,
    ZVIL_Q_RUNAWAY = 12,
    ZVIL_Q_CANPURSUE = 13,
    ZVIL_Q_CANATTACK = 14,
    ZVIL_Q_SHOULDATTACK = 15,
    ZVIL_Q_CANDETECT = 16,
    ZVIL_Q_PLYRDETECTED = 17,
    ZVIL_Q_PLYRTOOCLOSE = 18,
    ZVIL_Q_PLYRNEAR = 19,
    ZVIL_Q_PLYRINFOV = 20,
    ZVIL_Q_PLYRINLOS = 21,
    ZVIL_Q_CANSEEPLYR = 22,
    ZVIL_Q_CANHEARPLYR = 23,
    ZVIL_Q_PLYRSEEN = 24,
    ZVIL_Q_PLYRHEARD = 25,
    ZVIL_Q_NOMORE = 26,
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
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x44
class _xEntERData {
    // Members
public:
    class _xVec3 a; // offset 0x0, size 0xC
    class _xVec3 b; // offset 0xC, size 0xC
    class _xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x3C
class st_ZPRJ_COMMON {
    // Members
public:
    class _xVec3 vec_flex; // offset 0x0, size 0xC
    class _xMat3x3 mat_flex; // offset 0xC, size 0x30
};
enum en_NPC_SOUND {
    VSND_TYP_BOGUS = -1,
    VSND_TYP_ENCOUNTER = 0,
    VSND_TYP_SPOOKYROOM = 1,
    VSND_TYP_DIALOGUE = 2,
    VSND_TYP_MOVE = 3,
    VSND_TYP_MOVE_ALT = 4,
    VSND_TYP_IDLESLOP = 5,
    VSND_TYP_SNORE = 6,
    VSND_TYP_MUMBLE = 7,
    VSND_TYP_SPLISH = 8,
    VSND_TYP_SPLASH = 9,
    VSND_TYP_CLANKING = 10,
    VSND_TYP_LOOK = 11,
    VSND_TYP_LISTEN = 12,
    VSND_TYP_CURIOUS = 13,
    VSND_TYP_EXCLAIM = 14,
    VSND_TYP_AMBUSH = 15,
    VSND_TYP_ATTACK = 16,
    VSND_TYP_ATTACKSWIPE = 17,
    VSND_TYP_KICK = 18,
    VSND_TYP_PUNCH = 19,
    VSND_TYP_WEPLAUNCH = 20,
    VSND_TYP_WEPFLIGHT = 21,
    VSND_TYP_WEPEXPLODE = 22,
    VSND_TYP_LAUGH = 23,
    VSND_TYP_DIZZY = 24,
    VSND_TYP_SOAPBEGIN = 25,
    VSND_TYP_SOAPSTOP = 26,
    VSND_TYP_SOAPED = 27,
    VSND_TYP_GUMBEGIN = 28,
    VSND_TYP_GUMSTOP = 29,
    VSND_TYP_GUMMED = 30,
    VSND_TYP_GUMBOUNCE = 31,
    VSND_TYP_GUMSTRETCH = 32,
    VSND_TYP_OUCH = 33,
    VSND_TYP_OUCHCRASH = 34,
    VSND_TYP_FALL = 35,
    VSND_TYP_DIE = 36,
    VSND_TYP_HOLOFADE = 37,
    VSND_TYP_PLAYERDEATH = 38,
    VSND_TYP_PRJ_LAUNCH = 39,
    VSND_TYP_PRJ_FLIGHT = 40,
    VSND_TYP_PRJ_EXPLODE = 41,
    VSND_TYP_PRJ_SPLAT = 42,
    VSND_TYP_SPELL_CAST = 43,
    VSND_TYP_SPELL_PLAY = 44,
    VSND_TYP_SPELL_LOOP = 45,
    VSND_TYP_ZSFXTALK = 46,
    VSND_TYP_CHEERING = 47,
    VSND_TYP_ONELINER = 48,
    VSND_TYP_ONELINERTOO = 49,
    VSND_TYP_NEEDTARBOOTS = 50,
    VSND_TYP_EXTRASPRING = 51,
    VSND_TYP_NEEDFLOAT = 52,
    VSND_TYP_HAVEFLOAT = 53,
    VSND_TYP_BKZAPPED = 54,
    VSND_TYP_BKDIE = 55,
    VSND_TYP_BLOCKING = 56,
    VSND_TYP_ESCAPING = 57,
    VSND_TYP_TRASHTALK = 58,
    VSND_TYP_FOREPLAYHURT = 59,
    VSND_TYP_BUTTONPRESS = 60,
    VSND_TYP_ATTACKBUILD = 61,
    VSND_TYP_ALMOSTKILLED = 62,
    VSND_TYP_DISAPPEAR = 63,
    VSND_TYP_REAPPEAR = 64,
    VSND_TYP_MMDIE = 65,
    VSND_TYP_MMLAUGH = 66,
    ZVIL_SND_NOMORE = 67,
    VSND_LISTEND = 32768,
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
class _tagxCamStatic {
    // Members
public:
    unsigned int unused; // offset 0x0, size 0x4
};
enum en_ZVILLAIN_BUBBLE_RESPONSE {
    ZVIL_BUBBLE_NONE = 0,
    ZVIL_BUBBLE_ENVELOP = 1,
    ZVIL_BUBBLE_BREAK = 2,
    ZVIL_BUBBLE_BOUNCE = 3,
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
class zGustData {
    // Members
public:
    unsigned int gust_on; // offset 0x0, size 0x4
    class _zGust * g[4]; // offset 0x4, size 0x10
    float lerp[4]; // offset 0x14, size 0x10
};
// total size: 0x1C
class _tagEmitLine {
    // Members
public:
    class _xVec3 pos1; // offset 0x0, size 0xC
    class _xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x14
class zCheckPoint {
    // Members
public:
    class _xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskTrayOpen = 5,
    TRC_DiskTrayClosed = 6,
    TRC_DiskInvalid = 7,
    TRC_Total = 8,
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
// total size: 0x4C
class _xEntMechData {
    // Members
public:
    class _xVec3 apos; // offset 0x0, size 0xC
    class _xVec3 bpos; // offset 0xC, size 0xC
    class _xVec3 dir; // offset 0x18, size 0xC
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
// total size: 0x10
class _tagxCamShoulderAsset {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
};
// total size: 0x64
class st_ZVIL_PRECALC {
    // Members
public:
    signed int flg_status; // offset 0x0, size 0x4
    float ds2_VtoP; // offset 0x4, size 0x4
    float dst_VtoP; // offset 0x8, size 0x4
    float ang_VtoP; // offset 0xC, size 0x4
    class _xVec3 dir_VtoP; // offset 0x10, size 0xC
    class _xVec3 vec_VtoP; // offset 0x1C, size 0xC
    unsigned int plyr_mvinf; // offset 0x28, size 0x4
    signed int flg_plyr; // offset 0x2C, size 0x4
    signed int flg_xtra; // offset 0x30, size 0x4
    float dif_plyrCtr; // offset 0x34, size 0x4
    float dif_vilCtr; // offset 0x38, size 0x4
    float hyt_vil; // offset 0x3C, size 0x4
    float hyt_plyr; // offset 0x40, size 0x4
    float ds2_anchor; // offset 0x44, size 0x4
    float ds2_grdpos; // offset 0x48, size 0x4
    float cos_faceang; // offset 0x4C, size 0x4
    float sin_faceang; // offset 0x50, size 0x4
    float ds2_plyrToAnchor; // offset 0x54, size 0x4
    class _xVec3 pos_intercept; // offset 0x58, size 0xC
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
class p2PlatformBreakawayData {
    // Members
public:
    float ba_delay; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
    float reset_delay; // offset 0x8, size 0x4
};
// total size: 0x4
class p2PlatformERData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
enum en_ZVILLAIN_BUMPED_RESPONSE {
    ZVIL_BUMPED_NONE = 0,
    ZVIL_BUMPED_SOAP = 1,
    ZVIL_BUMPED_GUM = 2,
    ZVIL_BUMPED_DAMAGE = 3,
    ZVIL_BUMPED_ATTACK = 4,
};

/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B850 -> 0x0016B928
*/
// Range: 0x16B850 -> 0x16B928
void zEntPlayer_InitCutsceneModelHack() {
    /* anonymous block */ {
        // Range: 0x16B850 -> 0x16B928
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B930 -> 0x0016BAA4
*/
// Range: 0x16B930 -> 0x16BAA4
static void zEntPlayer_ButtonHBFX() {
    /* anonymous block */ {
        // Range: 0x16B930 -> 0x16BAA4
        class _xVec3 angles; // r29+0xA0
        class _xEnt * player_ent; // r4
        class _zParEmitterCustomSettings info; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BAB0 -> 0x0016BBB8
*/
// Range: 0x16BAB0 -> 0x16BBB8
static void zEntPlayer_ButtonBBFX(class _xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16BAB0 -> 0x16BBB8
        class _zParEmitterCustomSettings info; // r29+0x10
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BBC0 -> 0x0016BD1C
*/
// Range: 0x16BBC0 -> 0x16BD1C
static unsigned int zEntPlayer_SNDSkidCB() {
    /* anonymous block */ {
        // Range: 0x16BBC0 -> 0x16BD1C
        signed int newsnd; // r3
        float pitch; // r29+0x2C
        signed int snd; // @ 0x00358014
        signed short pitch_angle; // @ 0x0035801C
        signed char init; // @ 0x00358020
        signed char init; // @ 0x00358018
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BD20 -> 0x0016BD28
*/
// Range: 0x16BD20 -> 0x16BD28
static unsigned int zEntPlayer_FXOpenBrollyCB() {
    /* anonymous block */ {
        // Range: 0x16BD20 -> 0x16BD28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BD30 -> 0x0016BE20
*/
// Range: 0x16BD30 -> 0x16BE20
static unsigned int zEntPlayer_FXSpringCB() {
    /* anonymous block */ {
        // Range: 0x16BD30 -> 0x16BE20
        class _zParEmitterCustomSettings info; // r29+0x60
        class _xEnt * ent; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BE20 -> 0x0016BE54
*/
// Range: 0x16BE20 -> 0x16BE54
static unsigned int zEntPlayer_FXDigupCB() {
    /* anonymous block */ {
        // Range: 0x16BE20 -> 0x16BE54
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BE60 -> 0x0016BE94
*/
// Range: 0x16BE60 -> 0x16BE94
static unsigned int zEntPlayer_FXScratchCB() {
    /* anonymous block */ {
        // Range: 0x16BE60 -> 0x16BE94
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BEA0 -> 0x0016C0B8
*/
// Range: 0x16BEA0 -> 0x16C0B8
static void zEntPlayer_FXSetup(class xAnimTable * table /* r17 */) {
    /* anonymous block */ {
        // Range: 0x16BEA0 -> 0x16C0B8
        signed int i; // r16
        class xAnimState * state; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C0C0 -> 0x0016C48C
*/
// Range: 0x16C0C0 -> 0x16C48C
static void zEntPlayer_FXUpdate(class _xEnt * ent /* r18 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x16C0C0 -> 0x16C48C
        class zParEmitterAsset * a; // r4
        class _xVec3 paw; // r29+0x60
        class zParEmitterAsset * a; // r16
        signed int i; // r16
        class zParEmitterAsset * a; // r3
        signed int i; // r5
        signed int least_edges; // r4
        signed int i; // r3
        class zSurfAsset * surface_asset; // r2
        class zSurfaceProps * surface; // r2
        class xSurface * xsurf; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C490 -> 0x0016C79C
*/
// Range: 0x16C490 -> 0x16C79C
static void zEntPlayer_FXLostChance(class _xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x16C490 -> 0x16C79C
        class _zParEmitterCustomSettings info; // r29+0x120
        class _zParEmitterCustomSettings info; // r29+0xC0
        class _zParEmitterCustomSettings info; // r29+0x60
        float dz; // r21
        float dx; // r20
        class zSurfaceProps * prop; // r2
        class xSurface * fsurf; // r2
        enum _LostChanceFX fx_to_play; // r18
        signed int sd_surface; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C7A0 -> 0x0016C870
*/
// Range: 0x16C7A0 -> 0x16C870
void zEntPlayer_Notify(signed int situation /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C7A0 -> 0x16C870
        class zPlayerSituation * s; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C870 -> 0x0016CB04
*/
// Range: 0x16C870 -> 0x16CB04
void zEntPlayer_Notify(signed int characterSubType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16C870 -> 0x16CB04
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CB10 -> 0x0016CEE8
*/
// Range: 0x16CB10 -> 0x16CEE8
void zEntPlayer_SituationDo() {
    /* anonymous block */ {
        // Range: 0x16CB10 -> 0x16CEE8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CEF0 -> 0x0016CFD8
*/
// Range: 0x16CEF0 -> 0x16CFD8
static void zEntPlayer_SNDPlayRandom(unsigned int * array /* r21 */, unsigned int max /* r20 */) {
    /* anonymous block */ {
        // Range: 0x16CEF0 -> 0x16CFD8
        unsigned int idx; // r17
        unsigned int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CFE0 -> 0x0016D008
*/
// Range: 0x16CFE0 -> 0x16D008
void zEntPlayer_SNDVan() {
    /* anonymous block */ {
        // Range: 0x16CFE0 -> 0x16D008
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D010 -> 0x0016D038
*/
// Range: 0x16D010 -> 0x16D038
void zEntPlayer_SNDSnackCounter() {
    /* anonymous block */ {
        // Range: 0x16D010 -> 0x16D038
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D040 -> 0x0016D0A4
*/
// Range: 0x16D040 -> 0x16D0A4
void zEntPlayer_SNDKeyPickup() {
    /* anonymous block */ {
        // Range: 0x16D040 -> 0x16D0A4
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D0B0 -> 0x0016D114
*/
// Range: 0x16D0B0 -> 0x16D114
void zEntPlayer_SNDErrorPickup() {
    /* anonymous block */ {
        // Range: 0x16D0B0 -> 0x16D114
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D120 -> 0x0016D184
*/
// Range: 0x16D120 -> 0x16D184
void zEntPlayer_SNDInfoPickup() {
    /* anonymous block */ {
        // Range: 0x16D120 -> 0x16D184
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D190 -> 0x0016D1F4
*/
// Range: 0x16D190 -> 0x16D1F4
void zEntPlayer_SNDSavePickup() {
    /* anonymous block */ {
        // Range: 0x16D190 -> 0x16D1F4
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D200 -> 0x0016D264
*/
// Range: 0x16D200 -> 0x16D264
void zEntPlayer_SNDTokenPickup() {
    /* anonymous block */ {
        // Range: 0x16D200 -> 0x16D264
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D270 -> 0x0016D2D4
*/
// Range: 0x16D270 -> 0x16D2D4
void zEntPlayer_SNDSpecialPickup() {
    /* anonymous block */ {
        // Range: 0x16D270 -> 0x16D2D4
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D2E0 -> 0x0016D344
*/
// Range: 0x16D2E0 -> 0x16D344
void zEntPlayer_SNDAmmoPickup() {
    /* anonymous block */ {
        // Range: 0x16D2E0 -> 0x16D344
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D350 -> 0x0016D3B4
*/
// Range: 0x16D350 -> 0x16D3B4
void zEntPlayer_SNDBitePickup() {
    /* anonymous block */ {
        // Range: 0x16D350 -> 0x16D3B4
        float pitch; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D3C0 -> 0x0016D4AC
*/
// Range: 0x16D3C0 -> 0x16D4AC
static void zEntPlayer_SNDButtBounce(signed int hit_villain /* r17 */) {
    /* anonymous block */ {
        // Range: 0x16D3C0 -> 0x16D4AC
        signed short choice; // r5
        float pitch; // r29+0x3C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D4B0 -> 0x0016DE40
*/
// Range: 0x16D4B0 -> 0x16DE40
static void zEntPlayer_SNDInit() {
    /* anonymous block */ {
        // Range: 0x16D4B0 -> 0x16DE40
        char tmp[256]; // r29+0x40
        signed int i; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DE40 -> 0x0016DEF0
*/
// Range: 0x16DE40 -> 0x16DEF0
void zEntPlayer_LoadCheckPoint() {
    /* anonymous block */ {
        // Range: 0x16DE40 -> 0x16DEF0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DEF0 -> 0x0016DF7C
*/
// Range: 0x16DEF0 -> 0x16DF7C
void zEntPlayer_StoreCheckPoint(float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16DEF0 -> 0x16DF7C
        float r; // r1
        class _xVec3 p; // r29
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DF80 -> 0x0016E37C
*/
// Range: 0x16DF80 -> 0x16E37C
static void PlayerRotMatchUpdateEnt(class _xEnt * ent /* r21 */, float dt /* r22 */, void * fdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16DF80 -> 0x16E37C
        class _xMat4x3 rot; // r29+0xE0
        float dang; // r29+0x170
        float rang; // r29+0x170
        class _xVec3 raxis; // r29+0x160
        class _xVec3 neup; // r29+0x150
        float s; // r1
        class _xMat4x3 rot; // r29+0xA0
        float dang; // r29+0x170
        float rang; // r29+0x170
        class _xVec3 raxis; // r29+0x140
        float edecl; // r21
        float fdecl; // r20
        class _xVec3 neup; // r29+0x130
        class _xVec3 nfup; // r29+0x120
        class _xVec3 * eup; // r19
        class _xVec3 * fup; // r18
        signed int grounded; // r17
        class xSurface * surf; // r2
        signed int hit_it; // r17
        class _xCollis * coll; // r2
        class xFFXRotMatchState * rms; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E380 -> 0x0016E58C
*/
// Range: 0x16E380 -> 0x16E58C
static void PlayerDigUpdate(float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x16E380 -> 0x16E58C
        class _xEnt * tgtEnt; // r2
        class xBase * tgt; // r2
        class xBase * tgt; // r2
        class p2LinkAsset * curlink; // r17
        unsigned int i; // r16
        float digDelta; // r20
        float digT; // r29+0x50
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E590 -> 0x0016E678
*/
// Range: 0x16E590 -> 0x16E678
static void PlayerTeeterCheck(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x16E590 -> 0x16E678
        signed int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E680 -> 0x0016E9C8
*/
// Range: 0x16E680 -> 0x16E9C8
static void PlayerHangCheck(class _xEnt * ent /* r2 */, class _xScene * sc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16E680 -> 0x16E9C8
        float d2; // r29+0x60
        float d1; // r23
        class _xVec3 oldpos; // r29+0x50
        class _zEntHangable * hangme; // r9
        class _zEntHangable * hangclose; // r17
        float closedist; // r4
        unsigned int sphereresult; // r16
        unsigned int i; // r8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E9D0 -> 0x0016EEB0
*/
// Range: 0x16E9D0 -> 0x16EEB0
static void PlayerHangUpdate(class _xEnt * ent /* r19 */, float mag /* r25 */, float angle /* r23 */, float dt /* r26 */) {
    /* anonymous block */ {
        // Range: 0x16E9D0 -> 0x16EEB0
        float mag; // r29+0x80
        float removedot; // r29+0x80
        class xAnimState * astate; // r4
        class _xVec3 unitHang; // r29+0x70
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016EEB0 -> 0x0016F4A0
*/
// Range: 0x16EEB0 -> 0x16F4A0
signed int zEntPlayerEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r16 */) {
    /* anonymous block */ {
        // Range: 0x16EEB0 -> 0x16F4A0
        char * astatename; // r16
        class _zEnt * z; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F4A0 -> 0x0016F534
*/
// Range: 0x16F4A0 -> 0x16F534
static class _xVec3 * GetPosVec(class xBase * target /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16F4A0 -> 0x16F534
        class _xVec3 * pos; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F540 -> 0x0016F990
*/
// Range: 0x16F540 -> 0x16F990
class _xEnt * zEntPlayerCollTriggerCB(class _xEnt * ent /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x16F540 -> 0x16F990
        class _xIsect isect; // r29+0x120
        class _xSphere sphere; // r29+0x110
        class _xIsect isect; // r29+0xE0
        class _xCylinder cylinder; // r29+0xC0
        class _xIsect isect; // r29+0x90
        class _xSphere sphere; // r29+0x80
        class _xIsect isect; // r29+0x50
        class _xBox box; // r29+0x30
        class p2EntTriggerAsset * tasset; // r7
        class _zEnt * t; // r17
        class _zEnt * p; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F990 -> 0x0016FC04
*/
// Range: 0x16F990 -> 0x16FC04
void zEntPlayerCollTrigger(class _xEnt * ent /* r22 */, class _xScene * sc /* r21 */) {
    /* anonymous block */ {
        // Range: 0x16F990 -> 0x16FC04
        class p2EntTriggerAsset * asset; // r5
        class p2EntTriggerAsset * asset; // r5
        unsigned short i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FC10 -> 0x0016FEBC
*/
// Range: 0x16FC10 -> 0x16FEBC
void zEntPlayerCollide(class _xEnt * ent /* r18 */, class _xScene * sc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x16FC10 -> 0x16FEBC
        class _xCollis * c; // r5
        class _xCollis * cend; // r4
        class _xCollis * colls; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FEC0 -> 0x00170E44
*/
// Range: 0x16FEC0 -> 0x170E44
static void PlayerCollsSelectDepen(class _xEnt * p /* r22 */) {
    /* anonymous block */ {
        // Range: 0x16FEC0 -> 0x170E44
        float dz; // r2
        float dz; // r2
        class _xCollis * cright; // r5
        class _xCollis * cleft; // r4
        float dz; // r21
        float dx; // r20
        float dz; // r21
        float dx; // r20
        class _xCollis * crear; // r3
        class _xCollis * cfront; // r5
        class _xCollis * inside_wall; // r7
        class _xCollis * first_wall; // r6
        signed int num_walls; // r5
        class _xCollis * cceil; // r18
        class xSurface * sfloor; // r2
        class xSurface * surf; // r18
        class _xEnt * cent; // r2
        float depen_len; // r2
        float h_dot_n; // r29+0xA0
        class _xCollis * coll; // r18
        class _xCollis * curr; // r3
        unsigned char idx; // r2
        class _xCollis * cend; // r19
        class _xCollis * c; // r18
        class _xMat4x3 * mat; // r17
        class _xCollis * colls; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170E50 -> 0x00170EF0
*/
// Range: 0x170E50 -> 0x170EF0
static void PlayerCollsWallsTranslate(class _xCollis * colls /* r2 */, float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x170E50 -> 0x170EF0
        class _xCollis * c; // r17
        class _xCollis * cend; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170EF0 -> 0x00170F90
*/
// Range: 0x170EF0 -> 0x170F90
static void PlayerCollsAllTranslate(class _xCollis * colls /* r2 */, float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x170EF0 -> 0x170F90
        class _xCollis * c; // r17
        class _xCollis * cend; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170F90 -> 0x001710B4
*/
// Range: 0x170F90 -> 0x1710B4
static void PlayerCollisTranslate(class _xCollis * c /* r16 */, float x /* r29+0x30 */, float y /* r29+0x30 */, float z /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x170F90 -> 0x1710B4
        float s; // r3
        float dist; // r29+0x30
        float dz; // r22
        float dy; // r21
        float dx; // r20
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001710C0 -> 0x00171674
*/
// Range: 0x1710C0 -> 0x171674
static class _xEnt * PlayerCollCheckOneVillain(class _xEnt * ent /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1710C0 -> 0x171674
        float hsqr; // r29+0xC0
        float dz; // r29+0xC0
        float dy; // r20
        float dx; // r4
        float rsum; // r6
        class _xCollis coll2; // r29+0x70
        class st_zEntVillain * vill; // r2
        float playerOldRad; // r20
        unsigned int modl_coll; // r6
        class _xCollis * coll; // r17
        class _xEnt * p; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171680 -> 0x00171CA0
*/
// Range: 0x171680 -> 0x171CA0
static class _xEnt * PlayerCollCheckOneEnt(class _xEnt * ent /* r21 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171680 -> 0x171CA0
        float hsqr; // r29+0x100
        float dz; // r29+0x100
        float dy; // r20
        float dx; // r4
        float rsum; // r6
        unsigned char idx; // r2
        unsigned char ncolls; // r2
        class _xSphere temp; // r29+0xF0
        class _xCollis coll2; // r29+0xA0
        unsigned int head_hit; // r19
        unsigned int modl_coll; // r18
        class _xCollis * coll; // r17
        class _xEnt * p; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171CA0 -> 0x001724C4
*/
// Range: 0x171CA0 -> 0x1724C4
void zEntPlayerReset(class _xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x171CA0 -> 0x1724C4
        class iColor_tag clear; // r29+0x8C
        class iColor_tag black; // r29+0x88
        unsigned int index; // r4
        class xModelInstance * minst; // r3
        class xAnimState * curr; // r6
        class iModelTag tmpTag; // r29+0x60
        unsigned int numV; // r19
        unsigned int wnum; // r6
        unsigned int widx; // r3
        unsigned int tngV; // r18
        unsigned int tongueIdx; // r3
        class xModelInstance * tongue; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001724D0 -> 0x0017257C
*/
// Range: 0x1724D0 -> 0x17257C
void zEntPlayerExit(class _xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1724D0 -> 0x17257C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172580 -> 0x00172AE8
*/
// Range: 0x172580 -> 0x172AE8
void zEntPlayerDriveUpdate(class _xEnt * p /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x172580 -> 0x172AE8
        class xAnimSingle * asing; // r3
        class xAnimPlay * aplay; // r2
        class _xVec3 * jmpdir; // r16
        float * jmphs; // r2
        class xSurface * surf; // r2
        class _zPlatform * plat; // r2
        class _xCollis * coll; // r2
        class _zPlatform * oplat; // r2
        class _xEntDrive * drv; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172AF0 -> 0x00172C88
*/
// Range: 0x172AF0 -> 0x172C88
void zEntPlayerSurfDamageUpdate(class _xEnt * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x172AF0 -> 0x172C88
        class _xEnt * cent; // r2
        class zSurfaceProps * prop; // r3
        signed int damaged; // r6
        class xSurface * surf; // r2
        class _xCollis * cend; // r17
        class _xCollis * coll; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172C90 -> 0x00172EB8
*/
// Range: 0x172C90 -> 0x172EB8
static void PlayerBoundUpdate(class _xEnt * ent /* r20 */, class _xVec3 * pos /* r19 */) {
    /* anonymous block */ {
        // Range: 0x172C90 -> 0x172EB8
        class _xVec3 dpos; // r29+0x60
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172EC0 -> 0x00172F74
*/
// Range: 0x172EC0 -> 0x172F74
static unsigned int PlayerDepenQuery(class _xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x172EC0 -> 0x172F74
        class zSurfaceProps * prop; // r2
        class xSurface * surf; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172F80 -> 0x00173B4C
*/
// Range: 0x172F80 -> 0x173B4C
void zEntPlayerFloorUpdate(class _xEnt * p /* r20 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x172F80 -> 0x173B4C
        float s; // r2
        float dz; // r2
        float s; // r3
        float ddotm; // r20
        class _xVec3 D_flat; // r29+0x1D0
        class _xMat3x3 N_to_Up; // r29+0x180
        class _xVec3 D; // r29+0x1C0
        class _xVec3 X; // r29+0x1B0
        class _xVec3 * vel; // r16
        float dmax; // r2
        float dmin; // r1
        float dave; // r20
        signed int i; // r30
        class _xEnt * fent; // r16
        class _xCollis rcoll; // r29+0x130
        class _xRay3 ray; // r29+0x100
        class _xVec3 * fnorm; // r29+0xD0
        float slickLerp; // r2
        float decelmag; // r4
        float velmag; // r20
        class _xVec3 * vel; // r16
        class xSurface * fsurf; // r29+0xCC
        class _xCollis * fcoll; // r29+0xB0
        class _xVec3 lorigins[4]; // @ 0x00297860
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173B50 -> 0x00173FA0
*/
// Range: 0x173B50 -> 0x173FA0
void zEntPlayerVelUpdate(class _xEnt * ent /* r18 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x173B50 -> 0x173FA0
        float s; // r7
        float s; // r1
        float sft; // r3
        signed int i; // r6
        class _xCollis * coll; // r5
        class _xCollis * colls; // r2
        float velen2; // r29+0x50
        float s; // r1
        float aft; // r2
        float s; // r1
        float gft; // r2
        float rft; // r1
        class _xVec3 * v; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173FA0 -> 0x00174508
*/
// Range: 0x173FA0 -> 0x174508
void zEntPlayerJumpUpdate(class _xEnt * ent /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x173FA0 -> 0x174508
        class _xCollis * cfloor; // r2
        float lerp; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174510 -> 0x001745BC
*/
// Range: 0x174510 -> 0x1745BC
void zEntPlayerJumpStart(class _xEnt * ent /* r2 */, class zJumpParam * jump /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174510 -> 0x1745BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001745C0 -> 0x00174604
*/
// Range: 0x1745C0 -> 0x174604
void CalcJumpImpulse(class zJumpParam * param /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1745C0 -> 0x174604
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174610 -> 0x001748E4
*/
// Range: 0x174610 -> 0x1748E4
static float CalcJumpImpulse_Smooth(float g /* r29+0x60 */, float j /* r29+0x60 */, float h /* r31 */, float Tgc /* r30 */, float Tgs /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x174610 -> 0x1748E4
        float Tmfound; // r29+0x60
        float Tf; // r25
        float Tm[3]; // r29+0x50
        float Ts; // r24
        float Kbf; // r29+0x4C
        float AF; // r23
        float D; // r29+0x48
        float Kc; // r22
        float B; // r21
        float A; // r20
        float AS; // r29+0x60
        unsigned int solcnt; // r2
        unsigned int i; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001748F0 -> 0x00174940
*/
// Range: 0x1748F0 -> 0x174940
void zEntPlayer_GiveHotsauce(unsigned int value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1748F0 -> 0x174940
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174940 -> 0x00174970
*/
// Range: 0x174940 -> 0x174970
void zEntPlayer_GiveHealth(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174940 -> 0x174970
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174970 -> 0x001749A0
*/
// Range: 0x174970 -> 0x1749A0
void zEntPlayer_GiveChance(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174970 -> 0x1749A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001749A0 -> 0x001749D0
*/
// Range: 0x1749A0 -> 0x1749D0
void zEntPlayer_GiveKey(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1749A0 -> 0x1749D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001749D0 -> 0x001749E8
*/
// Range: 0x1749D0 -> 0x1749E8
void zEntPlayer_GiveClue(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1749D0 -> 0x1749E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001749F0 -> 0x00174A18
*/
// Range: 0x1749F0 -> 0x174A18
void zEntPlayer_TakeScoobySnack(class _xEnt * ent /* r2 */, unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1749F0 -> 0x174A18
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174A20 -> 0x00174A34
*/
// Range: 0x174A20 -> 0x174A34
signed int zEntPlayer_HasScoobySnack(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174A20 -> 0x174A34
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174A40 -> 0x00174A84
*/
// Range: 0x174A40 -> 0x174A84
void zEntPlayer_GiveScoobySnack(unsigned int quantity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174A40 -> 0x174A84
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174A90 -> 0x00174C08
*/
// Range: 0x174A90 -> 0x174C08
unsigned int zEntPlayer_MoveInfo() {
    /* anonymous block */ {
        // Range: 0x174A90 -> 0x174C08
        class _xEnt * plyr; // r17
        unsigned int infoflags; // r16
        unsigned int animflags; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174C10 -> 0x00174EBC
*/
// Range: 0x174C10 -> 0x174EBC
signed int zEntPlayer_Damage(class xBase * src /* r18 */, unsigned int damage /* r17 */) {
    /* anonymous block */ {
        // Range: 0x174C10 -> 0x174EBC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174EC0 -> 0x00174F2C
*/
// Range: 0x174EC0 -> 0x174F2C
signed int zEntPlayer_Damage(class xBase * src /* r2 */, unsigned int damage /* r2 */, class _xVec3 * knockback /* r16 */) {
    /* anonymous block */ {
        // Range: 0x174EC0 -> 0x174F2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00174F30 -> 0x00175040
*/
// Range: 0x174F30 -> 0x175040
void zEntPlayer_Move(class _xEnt * ent /* r2 */, float dt /* r20 */, class _xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x174F30 -> 0x175040
        signed int pz; // r5
        signed int px; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00175040 -> 0x00176144
*/
// Range: 0x175040 -> 0x176144
void zEntPlayer_Render(class _zEnt * ent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x175040 -> 0x176144
        class xModelInstance * minst; // r17
        class xModelInstance * minst; // r3
        signed int player_trans; // r16
        class _xVec3 pos1; // r29+0x150
        class _xVec3 pos0; // r29+0x140
        class xAnimSingle * asingle; // r17
        unsigned int index; // r16
        class xModelInstance * minst; // r2
        class xModelInstance * minst; // r3
        class _xMat4x3 tmpMat; // r29+0xF0
        class _xVec3 rootZvec; // r29+0x130
        class xAnimSingle * ablend; // r16
        class xAnimSingle * asingle; // r2
        class RwMatrixTag rootOldMat; // r29+0xB0
        float rootZadjust; // r29+0x160
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00176150 -> 0x0017864C
*/
// Range: 0x176150 -> 0x17864C
void zEntPlayer_Update(class _xEnt * ent /* r20 */, class _xScene * sc /* r19 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x176150 -> 0x17864C
        float parm[4]; // r29+0x1E0
        class _zEntSimpleObj * simpent; // r2
        class zScene * zsc; // r2
        unsigned int i; // r16
        float lerpspeed; // r29+0x240
        float mag; // r29+0x240
        class _zEntBubble * bub; // r2
        class _xCollis * endcoll; // r17
        class _xCollis * coll; // r16
        signed int took_damage; // r17
        enum en_ZVILLAIN_BUMPED_RESPONSE bumpedResponse; // r2
        signed int bounceResponse; // r17
        class _xCollis * endcoll; // r21
        class _xCollis * coll; // r16
        class _zEnt * shagent; // r6
        class _xCollis * endcoll; // r4
        class _xCollis * coll; // r5
        class _zEnt * shagent; // r17
        class _xCollis * endcoll; // r21
        class _xCollis * coll; // r16
        class xSurface * wsurf; // r2
        float hdotm; // r21
        class _xCollis * gcoll; // r21
        class _xCollis * wcoll; // r16
        class _xEnt * cent; // r2
        class _xCollis * cend; // r22
        class _xCollis * c; // r16
        class _xCollis ctc; // r29+0x190
        class _xRay3 ctr; // r29+0x160
        class _xBox bbox; // r29+0x140
        class _xCollis bbc; // r29+0xF0
        float m; // r2
        float fg; // r29+0x240
        float sft; // r2
        float s; // r2
        float dy; // r20
        float sett2; // r29+0x240
        float ndotm; // r29+0x240
        class xFFX * gust_fkt; // r16
        class _xVec3 suboldpos; // r29+0x228
        signed int updidx; // r23
        signed int num_updates; // r29+0xC0
        class _xEnt * vill; // r21
        float ydist; // r29+0x240
        float sdistold2; // r23
        float sdist2; // r22
        float radold2; // r21
        float rad2; // r20
        unsigned int i; // r16
        class iColor_tag clear; // r29+0x238
        class iColor_tag black; // r29+0x234
        class xAnimState * astate; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178650 -> 0x00178798
*/
// Range: 0x178650 -> 0x178798
static void zEntPlayer_SnackDecrement(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x178650 -> 0x178798
        unsigned int amount; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001787A0 -> 0x001787A8
*/
// Range: 0x1787A0 -> 0x1787A8
void zEntPlayer_Load() {
    /* anonymous block */ {
        // Range: 0x1787A0 -> 0x1787A8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001787B0 -> 0x00178B2C
*/
// Range: 0x1787B0 -> 0x178B2C
void zEntPlayer_Init(class _xEnt * ent /* r18 */, class p2EntAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1787B0 -> 0x178B2C
        class xFFXRotMatchState * rms; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178B30 -> 0x00178D3C
*/
// Range: 0x178B30 -> 0x178D3C
static void zEntPlayerFindEmitters() {
    /* anonymous block */ {
        // Range: 0x178B30 -> 0x178D3C
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00178D40 -> 0x00179028
*/
// Range: 0x178D40 -> 0x179028
class xAnimTable * zEntPlayer_LampshadeAnimTable() {
    /* anonymous block */ {
        // Range: 0x178D40 -> 0x179028
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179030 -> 0x00179074
*/
// Range: 0x179030 -> 0x179074
static unsigned int LampFixbugCheck() {
    /* anonymous block */ {
        // Range: 0x179030 -> 0x179074
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179080 -> 0x001790C4
*/
// Range: 0x179080 -> 0x1790C4
static unsigned int LampbackCheck() {
    /* anonymous block */ {
        // Range: 0x179080 -> 0x1790C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001790D0 -> 0x00179114
*/
// Range: 0x1790D0 -> 0x179114
static unsigned int LampoffCheck() {
    /* anonymous block */ {
        // Range: 0x1790D0 -> 0x179114
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179120 -> 0x00179180
*/
// Range: 0x179120 -> 0x179180
static unsigned int LamponCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x179120 -> 0x179180
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179180 -> 0x001791A0
*/
// Range: 0x179180 -> 0x1791A0
static unsigned int LampDrawCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x179180 -> 0x1791A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001791A0 -> 0x00179204
*/
// Range: 0x1791A0 -> 0x179204
class xAnimTable * zEntPlayer_UmbrellaAnimTable() {
    /* anonymous block */ {
        // Range: 0x1791A0 -> 0x179204
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179210 -> 0x00179274
*/
// Range: 0x179210 -> 0x179274
class xAnimTable * zEntPlayer_TongueAnimTable() {
    /* anonymous block */ {
        // Range: 0x179210 -> 0x179274
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00179280 -> 0x0017A06C
*/
// Range: 0x179280 -> 0x17A06C
class xAnimTable * zEntPlayer_HeadAnimTable() {
    /* anonymous block */ {
        // Range: 0x179280 -> 0x17A06C
        class xAnimTransition * tran; // r17
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A070 -> 0x0017A1C8
*/
// Range: 0x17A070 -> 0x17A1C8
static void PlayerFaceUpdate(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x17A070 -> 0x17A1C8
        class xAnimState * astate; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A1D0 -> 0x0017A26C
*/
// Range: 0x17A1D0 -> 0x17A26C
static unsigned int FaceIdle() {
    /* anonymous block */ {
        // Range: 0x17A1D0 -> 0x17A26C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A270 -> 0x0017A30C
*/
// Range: 0x17A270 -> 0x17A30C
static unsigned int FaceSwing() {
    /* anonymous block */ {
        // Range: 0x17A270 -> 0x17A30C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A310 -> 0x0017A3AC
*/
// Range: 0x17A310 -> 0x17A3AC
static unsigned int FaceSneak() {
    /* anonymous block */ {
        // Range: 0x17A310 -> 0x17A3AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A3B0 -> 0x0017A44C
*/
// Range: 0x17A3B0 -> 0x17A44C
static unsigned int FaceTeeter() {
    /* anonymous block */ {
        // Range: 0x17A3B0 -> 0x17A44C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A450 -> 0x0017A4E8
*/
// Range: 0x17A450 -> 0x17A4E8
static unsigned int FacePant() {
    /* anonymous block */ {
        // Range: 0x17A450 -> 0x17A4E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A4F0 -> 0x0017A560
*/
// Range: 0x17A4F0 -> 0x17A560
static unsigned int FaceRun() {
    /* anonymous block */ {
        // Range: 0x17A4F0 -> 0x17A560
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A560 -> 0x0017A5F4
*/
// Range: 0x17A560 -> 0x17A5F4
static unsigned int FaceEvent(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17A560 -> 0x17A5F4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A600 -> 0x0017A64C
*/
// Range: 0x17A600 -> 0x17A64C
static unsigned int FaceScare(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x17A600 -> 0x17A64C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A650 -> 0x0017A660
*/
// Range: 0x17A650 -> 0x17A660
static unsigned int FaceClearScareCB() {
    /* anonymous block */ {
        // Range: 0x17A650 -> 0x17A660
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A660 -> 0x0017A674
*/
// Range: 0x17A660 -> 0x17A674
static unsigned int FaceMad() {
    /* anonymous block */ {
        // Range: 0x17A660 -> 0x17A674
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A680 -> 0x0017A694
*/
// Range: 0x17A680 -> 0x17A694
static unsigned int FaceBlow() {
    /* anonymous block */ {
        // Range: 0x17A680 -> 0x17A694
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0017A6A0 -> 0x0018098C
*/
// Range: 0x17A6A0 -> 0x18098C
class xAnimTable * zEntPlayer_AnimTable() {
    /* anonymous block */ {
        // Range: 0x17A6A0 -> 0x18098C
        class xAnimState * currst; // r16
        class xAnimTable * table; // r17
        class xAnimTransition * tran; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180990 -> 0x00180B1C
*/
// Range: 0x180990 -> 0x180B1C
static signed int DestructObjHBCallback(class _zEnt * ent /* r20 */, class _xCollis * coll /* r19 */) {
    /* anonymous block */ {
        // Range: 0x180990 -> 0x180B1C
        unsigned int dobjState; // r17
        unsigned int headResponse; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180B20 -> 0x00180D60
*/
// Range: 0x180B20 -> 0x180D60
void DestructObjBBCheck(class _xEnt * ent /* r19 */) {
    /* anonymous block */ {
        // Range: 0x180B20 -> 0x180D60
        unsigned int buttonState; // r2
        unsigned int bounceResponse; // r20
        class _xCollis * endcoll; // r17
        class _xCollis * coll; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180D60 -> 0x00180ED4
*/
// Range: 0x180D60 -> 0x180ED4
void ButtonBBCheck(class _xEnt * ent /* r18 */) {
    /* anonymous block */ {
        // Range: 0x180D60 -> 0x180ED4
        unsigned int buttonState; // r2
        unsigned int bounceResponse; // r19
        class _xCollis * endcoll; // r17
        class _xCollis * coll; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180EE0 -> 0x0018103C
*/
// Range: 0x180EE0 -> 0x18103C
static signed int ButtonHBCallback(class _zEnt * ent /* r18 */, class _xCollis * coll /* r17 */) {
    /* anonymous block */ {
        // Range: 0x180EE0 -> 0x18103C
        unsigned int buttonState; // r2
        unsigned int headResponse; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181040 -> 0x001810E8
*/
// Range: 0x181040 -> 0x1810E8
void ButtonStandOnCheck(class _xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181040 -> 0x1810E8
        unsigned int buttonState; // r2
        unsigned int response; // r17
        class _zEnt * bn; // r2
        class _xCollis * coll; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001810F0 -> 0x001811D8
*/
// Range: 0x1810F0 -> 0x1811D8
static unsigned int SD0_TossCB() {
    /* anonymous block */ {
        // Range: 0x1810F0 -> 0x1811D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811E0 -> 0x001811F0
*/
// Range: 0x1811E0 -> 0x1811F0
static unsigned int ClearHelmetCB() {
    /* anonymous block */ {
        // Range: 0x1811E0 -> 0x1811F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811F0 -> 0x00181270
*/
// Range: 0x1811F0 -> 0x181270
static unsigned int FallToDeathDropCB() {
    /* anonymous block */ {
        // Range: 0x1811F0 -> 0x181270
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181270 -> 0x001812A0
*/
// Range: 0x181270 -> 0x1812A0
static unsigned int FallToDeathDrop() {
    /* anonymous block */ {
        // Range: 0x181270 -> 0x1812A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001812A0 -> 0x001812CC
*/
// Range: 0x1812A0 -> 0x1812CC
static unsigned int FallToDeathStart() {
    /* anonymous block */ {
        // Range: 0x1812A0 -> 0x1812CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001812D0 -> 0x00181398
*/
// Range: 0x1812D0 -> 0x181398
static unsigned int DeathCB() {
    /* anonymous block */ {
        // Range: 0x1812D0 -> 0x181398
        unsigned int deathSnd; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001813A0 -> 0x00181400
*/
// Range: 0x1813A0 -> 0x181400
static unsigned int HangNoSwingCheck() {
    /* anonymous block */ {
        // Range: 0x1813A0 -> 0x181400
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181400 -> 0x0018145C
*/
// Range: 0x181400 -> 0x18145C
static unsigned int HangSwingCheck() {
    /* anonymous block */ {
        // Range: 0x181400 -> 0x18145C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181460 -> 0x00181700
*/
// Range: 0x181460 -> 0x181700
static unsigned int HangCB() {
    /* anonymous block */ {
        // Range: 0x181460 -> 0x181700
        float spinAngle; // r29+0x70
        float scoobAngle; // r29+0x70
        float hangAngle; // r20
        class _xVec3 targetPos; // r29+0x60
        class _zEnt * ent; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181700 -> 0x00181710
*/
// Range: 0x181700 -> 0x181710
static unsigned int PowerupCB() {
    /* anonymous block */ {
        // Range: 0x181700 -> 0x181710
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181710 -> 0x00181728
*/
// Range: 0x181710 -> 0x181728
static unsigned int PowerupCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181710 -> 0x181728
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181730 -> 0x00181744
*/
// Range: 0x181730 -> 0x181744
static unsigned int NoHangCheck() {
    /* anonymous block */ {
        // Range: 0x181730 -> 0x181744
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181750 -> 0x00181760
*/
// Range: 0x181750 -> 0x181760
static unsigned int HangCheck() {
    /* anonymous block */ {
        // Range: 0x181750 -> 0x181760
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181760 -> 0x00181774
*/
// Range: 0x181760 -> 0x181774
static unsigned int NotFloatCheck() {
    /* anonymous block */ {
        // Range: 0x181760 -> 0x181774
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181780 -> 0x00181858
*/
// Range: 0x181780 -> 0x181858
static unsigned int FloatCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181780 -> 0x181858
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181860 -> 0x001818E0
*/
// Range: 0x181860 -> 0x1818E0
static unsigned int SlideCheck() {
    /* anonymous block */ {
        // Range: 0x181860 -> 0x1818E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001818E0 -> 0x001818F4
*/
// Range: 0x1818E0 -> 0x1818F4
static unsigned int ButtSmashStateCB() {
    /* anonymous block */ {
        // Range: 0x1818E0 -> 0x1818F4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181900 -> 0x0018193C
*/
// Range: 0x181900 -> 0x18193C
static unsigned int ButtSmashCB() {
    /* anonymous block */ {
        // Range: 0x181900 -> 0x18193C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181940 -> 0x001819C8
*/
// Range: 0x181940 -> 0x1819C8
static unsigned int ButtSmashCheck() {
    /* anonymous block */ {
        // Range: 0x181940 -> 0x1819C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001819D0 -> 0x001819E0
*/
// Range: 0x1819D0 -> 0x1819E0
static unsigned int HeadHitCB() {
    /* anonymous block */ {
        // Range: 0x1819D0 -> 0x1819E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001819E0 -> 0x001819EC
*/
// Range: 0x1819E0 -> 0x1819EC
static unsigned int HeadHitCheck() {
    /* anonymous block */ {
        // Range: 0x1819E0 -> 0x1819EC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001819F0 -> 0x00181A38
*/
// Range: 0x1819F0 -> 0x181A38
static unsigned int AttackFinishedHotsauce() {
    /* anonymous block */ {
        // Range: 0x1819F0 -> 0x181A38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181A40 -> 0x00181ABC
*/
// Range: 0x181A40 -> 0x181ABC
static unsigned int AttackFinishedRun(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181A40 -> 0x181ABC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181AC0 -> 0x00181B1C
*/
// Range: 0x181AC0 -> 0x181B1C
static unsigned int AttackFinished(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181AC0 -> 0x181B1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181B20 -> 0x00181B44
*/
// Range: 0x181B20 -> 0x181B44
static unsigned int AttackCB() {
    /* anonymous block */ {
        // Range: 0x181B20 -> 0x181B44
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181B50 -> 0x00181BD0
*/
// Range: 0x181B50 -> 0x181BD0
static unsigned int AttackCheck() {
    /* anonymous block */ {
        // Range: 0x181B50 -> 0x181BD0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181BD0 -> 0x00181BF4
*/
// Range: 0x181BD0 -> 0x181BF4
static unsigned int ProjectileCB() {
    /* anonymous block */ {
        // Range: 0x181BD0 -> 0x181BF4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181C00 -> 0x00181CD4
*/
// Range: 0x181C00 -> 0x181CD4
static unsigned int ProjectileRepeat(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181C00 -> 0x181CD4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181CE0 -> 0x00181DC8
*/
// Range: 0x181CE0 -> 0x181DC8
static unsigned int ProjectileRepeatSync(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181CE0 -> 0x181DC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181DD0 -> 0x00181E78
*/
// Range: 0x181DD0 -> 0x181E78
static unsigned int ProjectileCheck() {
    /* anonymous block */ {
        // Range: 0x181DD0 -> 0x181E78
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181E80 -> 0x00181EEC
*/
// Range: 0x181E80 -> 0x181EEC
static unsigned int StopDigCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181E80 -> 0x181EEC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181EF0 -> 0x00181F28
*/
// Range: 0x181EF0 -> 0x181F28
static unsigned int DigCB() {
    /* anonymous block */ {
        // Range: 0x181EF0 -> 0x181F28
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181F30 -> 0x00181FB8
*/
// Range: 0x181F30 -> 0x181FB8
static unsigned int DigCheck() {
    /* anonymous block */ {
        // Range: 0x181F30 -> 0x181FB8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181FC0 -> 0x00181FEC
*/
// Range: 0x181FC0 -> 0x181FEC
static unsigned int NospringCheck(class _zEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181FC0 -> 0x181FEC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181FF0 -> 0x00182004
*/
// Range: 0x181FF0 -> 0x182004
static unsigned int SpringCheck() {
    /* anonymous block */ {
        // Range: 0x181FF0 -> 0x182004
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182010 -> 0x001821D0
*/
// Range: 0x182010 -> 0x1821D0
static unsigned int ButtSmashLandCB() {
    /* anonymous block */ {
        // Range: 0x182010 -> 0x1821D0
        signed int i; // r16
        class _xCollis * c; // r2
        class _xEnt * ent; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001821D0 -> 0x001821F0
*/
// Range: 0x1821D0 -> 0x1821F0
static unsigned int BounceCB() {
    /* anonymous block */ {
        // Range: 0x1821D0 -> 0x1821F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001821F0 -> 0x00182204
*/
// Range: 0x1821F0 -> 0x182204
static unsigned int BounceCheck() {
    /* anonymous block */ {
        // Range: 0x1821F0 -> 0x182204
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182210 -> 0x001822CC
*/
// Range: 0x182210 -> 0x1822CC
static unsigned int DblJumpCB() {
    /* anonymous block */ {
        // Range: 0x182210 -> 0x1822CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001822D0 -> 0x00182374
*/
// Range: 0x1822D0 -> 0x182374
static unsigned int DblJumpCheckTime(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1822D0 -> 0x182374
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182380 -> 0x001823F0
*/
// Range: 0x182380 -> 0x1823F0
static unsigned int DblJumpCheck() {
    /* anonymous block */ {
        // Range: 0x182380 -> 0x1823F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001823F0 -> 0x00182478
*/
// Range: 0x1823F0 -> 0x182478
static unsigned int JumpHangCB() {
    /* anonymous block */ {
        // Range: 0x1823F0 -> 0x182478
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182480 -> 0x0018253C
*/
// Range: 0x182480 -> 0x18253C
static unsigned int JumpCB() {
    /* anonymous block */ {
        // Range: 0x182480 -> 0x18253C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182540 -> 0x0018267C
*/
// Range: 0x182540 -> 0x18267C
static unsigned int JumpCheck() {
    /* anonymous block */ {
        // Range: 0x182540 -> 0x18267C
        class _xCollis * flc; // r7
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182680 -> 0x001826DC
*/
// Range: 0x182680 -> 0x1826DC
static unsigned int ActiveCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182680 -> 0x1826DC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001826E0 -> 0x00182708
*/
// Range: 0x1826E0 -> 0x182708
static unsigned int IdleGetupCB() {
    /* anonymous block */ {
        // Range: 0x1826E0 -> 0x182708
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182710 -> 0x00182738
*/
// Range: 0x182710 -> 0x182738
static unsigned int IdleSitCB() {
    /* anonymous block */ {
        // Range: 0x182710 -> 0x182738
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182740 -> 0x00182784
*/
// Range: 0x182740 -> 0x182784
static unsigned int IdleMajorCB() {
    /* anonymous block */ {
        // Range: 0x182740 -> 0x182784
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182790 -> 0x001827CC
*/
// Range: 0x182790 -> 0x1827CC
static unsigned int IdleMinorCB() {
    /* anonymous block */ {
        // Range: 0x182790 -> 0x1827CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001827D0 -> 0x0018281C
*/
// Range: 0x1827D0 -> 0x18281C
static unsigned int IdleGetupCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1827D0 -> 0x18281C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182820 -> 0x00182850
*/
// Range: 0x182820 -> 0x182850
static unsigned int IdleSitCheck() {
    /* anonymous block */ {
        // Range: 0x182820 -> 0x182850
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182850 -> 0x001828BC
*/
// Range: 0x182850 -> 0x1828BC
static unsigned int IdleMajorCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182850 -> 0x1828BC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001828C0 -> 0x0018292C
*/
// Range: 0x1828C0 -> 0x18292C
static unsigned int IdleMinorCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1828C0 -> 0x18292C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182930 -> 0x00182944
*/
// Range: 0x182930 -> 0x182944
static unsigned int FallingCheck() {
    /* anonymous block */ {
        // Range: 0x182930 -> 0x182944
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182950 -> 0x0018299C
*/
// Range: 0x182950 -> 0x18299C
static unsigned int LandHealthCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182950 -> 0x18299C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001829A0 -> 0x001829D4
*/
// Range: 0x1829A0 -> 0x1829D4
static unsigned int LandFastCheck() {
    /* anonymous block */ {
        // Range: 0x1829A0 -> 0x1829D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001829E0 -> 0x00182A14
*/
// Range: 0x1829E0 -> 0x182A14
static unsigned int LandWalkCheck() {
    /* anonymous block */ {
        // Range: 0x1829E0 -> 0x182A14
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182A20 -> 0x00182A54
*/
// Range: 0x182A20 -> 0x182A54
static unsigned int LandSlowCheck() {
    /* anonymous block */ {
        // Range: 0x182A20 -> 0x182A54
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182A60 -> 0x00182AAC
*/
// Range: 0x182A60 -> 0x182AAC
static unsigned int ScareLandCheck() {
    /* anonymous block */ {
        // Range: 0x182A60 -> 0x182AAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182AB0 -> 0x00182AC4
*/
// Range: 0x182AB0 -> 0x182AC4
static unsigned int LandCheck() {
    /* anonymous block */ {
        // Range: 0x182AB0 -> 0x182AC4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182AD0 -> 0x00182BC4
*/
// Range: 0x182AD0 -> 0x182BC4
static unsigned int ScareKnockbackCB() {
    /* anonymous block */ {
        // Range: 0x182AD0 -> 0x182BC4
        class _xVec3 vel; // r29+0x40
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182BD0 -> 0x00182C34
*/
// Range: 0x182BD0 -> 0x182C34
static unsigned int ScareCB() {
    /* anonymous block */ {
        // Range: 0x182BD0 -> 0x182C34
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182C40 -> 0x00182CF0
*/
// Range: 0x182C40 -> 0x182CF0
static unsigned int ScareCheckCritter() {
    /* anonymous block */ {
        // Range: 0x182C40 -> 0x182CF0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182CF0 -> 0x00182D1C
*/
// Range: 0x182CF0 -> 0x182D1C
static unsigned int ScareCheckNoHealth() {
    /* anonymous block */ {
        // Range: 0x182CF0 -> 0x182D1C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182D20 -> 0x00182D7C
*/
// Range: 0x182D20 -> 0x182D7C
static unsigned int UncowerCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182D20 -> 0x182D7C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182D80 -> 0x00182DAC
*/
// Range: 0x182D80 -> 0x182DAC
static unsigned int CowerCheck() {
    /* anonymous block */ {
        // Range: 0x182D80 -> 0x182DAC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182DB0 -> 0x00182E0C
*/
// Range: 0x182DB0 -> 0x182E0C
static unsigned int ScareCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182DB0 -> 0x182E0C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182E10 -> 0x00182E68
*/
// Range: 0x182E10 -> 0x182E68
static unsigned int NosneakPlunger() {
    /* anonymous block */ {
        // Range: 0x182E10 -> 0x182E68
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182E70 -> 0x00182EF0
*/
// Range: 0x182E70 -> 0x182EF0
static unsigned int NosneakSlippery() {
    /* anonymous block */ {
        // Range: 0x182E70 -> 0x182EF0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182EF0 -> 0x00182FE0
*/
// Range: 0x182EF0 -> 0x182FE0
static unsigned int NosneakTeeter() {
    /* anonymous block */ {
        // Range: 0x182EF0 -> 0x182FE0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00182FE0 -> 0x00183034
*/
// Range: 0x182FE0 -> 0x183034
static unsigned int NosneakCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x182FE0 -> 0x183034
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183040 -> 0x00183080
*/
// Range: 0x183040 -> 0x183080
static unsigned int SneakIdleCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x183040 -> 0x183080
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183080 -> 0x001830D8
*/
// Range: 0x183080 -> 0x1830D8
static unsigned int SneakMoveCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x183080 -> 0x1830D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001830E0 -> 0x0018311C
*/
// Range: 0x1830E0 -> 0x18311C
static unsigned int SkidStopCheck() {
    /* anonymous block */ {
        // Range: 0x1830E0 -> 0x18311C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183120 -> 0x001831E8
*/
// Range: 0x183120 -> 0x1831E8
static unsigned int IdleCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x183120 -> 0x1831E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001831F0 -> 0x0018323C
*/
// Range: 0x1831F0 -> 0x18323C
static unsigned int WalkPlungeCheck() {
    /* anonymous block */ {
        // Range: 0x1831F0 -> 0x18323C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183240 -> 0x001832D4
*/
// Range: 0x183240 -> 0x1832D4
static unsigned int StickNoBootsWalk() {
    /* anonymous block */ {
        // Range: 0x183240 -> 0x1832D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001832E0 -> 0x00183374
*/
// Range: 0x1832E0 -> 0x183374
static unsigned int StickNoBootsIdle() {
    /* anonymous block */ {
        // Range: 0x1832E0 -> 0x183374
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183380 -> 0x001833AC
*/
// Range: 0x183380 -> 0x1833AC
static unsigned int StickySurfWalk() {
    /* anonymous block */ {
        // Range: 0x183380 -> 0x1833AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001833B0 -> 0x001833DC
*/
// Range: 0x1833B0 -> 0x1833DC
static unsigned int StickySurfIdle() {
    /* anonymous block */ {
        // Range: 0x1833B0 -> 0x1833DC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001833E0 -> 0x001834D0
*/
// Range: 0x1833E0 -> 0x1834D0
static unsigned int WalkCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1833E0 -> 0x1834D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001834D0 -> 0x001834E4
*/
// Range: 0x1834D0 -> 0x1834E4
static unsigned int NotRunCB() {
    /* anonymous block */ {
        // Range: 0x1834D0 -> 0x1834E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001834F0 -> 0x001835C4
*/
// Range: 0x1834F0 -> 0x1835C4
static unsigned int NotRunCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1834F0 -> 0x1835C4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001835D0 -> 0x001836CC
*/
// Range: 0x1835D0 -> 0x1836CC
static unsigned int RunCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1835D0 -> 0x1836CC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001836D0 -> 0x001836E4
*/
// Range: 0x1836D0 -> 0x1836E4
static unsigned int HotsauceCheck() {
    /* anonymous block */ {
        // Range: 0x1836D0 -> 0x1836E4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001836F0 -> 0x0018374C
*/
// Range: 0x1836F0 -> 0x18374C
static unsigned int SlipperyCheck() {
    /* anonymous block */ {
        // Range: 0x1836F0 -> 0x18374C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183750 -> 0x0018381C
*/
// Range: 0x183750 -> 0x18381C
static unsigned int TeeterCheck() {
    /* anonymous block */ {
        // Range: 0x183750 -> 0x18381C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183820 -> 0x00183854
*/
// Range: 0x183820 -> 0x183854
static unsigned int PlungerCheck() {
    /* anonymous block */ {
        // Range: 0x183820 -> 0x183854
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183860 -> 0x00183888
*/
// Range: 0x183860 -> 0x183888
static unsigned int HealthCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x183860 -> 0x183888
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183890 -> 0x001839F4
*/
// Range: 0x183890 -> 0x1839F4
static signed int VillHBCallback(class _zEnt * ent /* r17 */, class _xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x183890 -> 0x1839F4
        signed int headResponse; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183A00 -> 0x00183B7C
*/
// Range: 0x183A00 -> 0x183B7C
static void HeadbuttTest(class _xCollis * coll /* r19 */, class _xCollis * endcoll /* r18 */, float angle_cosine /* r20 */, signed int (* headbuttCB)(class _zEnt *, class _xCollis *) /* r17 */) {
    /* anonymous block */ {
        // Range: 0x183A00 -> 0x183B7C
        float dz2; // r24
        float dx2; // r23
        class _zEnt * villent; // r20
        float mag; // r29+0x80
        float dz; // r22
        float dx; // r21
        class _zEnt * ent; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183B80 -> 0x00183D18
*/
// Range: 0x183B80 -> 0x183D18
static void HeadcollUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x183B80 -> 0x183D18
        float t; // r4
        float s; // r5
        signed int headcoll_animto; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00183D20 -> 0x00184028
*/
// Range: 0x183D20 -> 0x184028
static signed int GetHeadcollAnimState() {
    /* anonymous block */ {
        // Range: 0x183D20 -> 0x184028
        class xAnimState * state; // r16
        unsigned int FRUN_ID; // @ 0x00357FE8
        unsigned int FWALK_ID; // @ 0x00357FE0
        unsigned int FNORMAL_ID; // @ 0x00357FD8
        unsigned int JSB_ID; // @ 0x00357FD0
        unsigned int JRUN_ID; // @ 0x00357FC8
        unsigned int JWALK_ID; // @ 0x00357FC0
        unsigned int JDOUBLE_ID; // @ 0x00357FB8
        unsigned int JNORMAL_ID; // @ 0x00357FB0
        signed char init; // @ 0x00357FEC
        signed char init; // @ 0x00357FE4
        signed char init; // @ 0x00357FDC
        signed char init; // @ 0x00357FD4
        signed char init; // @ 0x00357FCC
        signed char init; // @ 0x00357FC4
        signed char init; // @ 0x00357FBC
        signed char init; // @ 0x00357FB4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00184030 -> 0x00185BEC
*/
// Range: 0x184030 -> 0x185BEC
static void PlayerAbsControl(class _xEnt * ent /* r20 */, float x /* r26 */, float z /* r25 */, float dt /* r24 */) {
    /* anonymous block */ {
        // Range: 0x184030 -> 0x185BEC
        float slickLerp; // r2
        float peakLerp; // r3
        float accelMag; // r20
        unsigned int moveFlag; // r16
        float turnang; // r25
        float dz; // r26
        float dx; // r25
        float tmpdrot; // r20
        class _xVec3 delta; // r29+0x138
        class _xVec3 delta; // r29+0x128
        float downAngle; // r29+0x150
        class _xVec3 D_flat; // r29+0x118
        class _xMat3x3 N_to_Up; // r29+0xB0
        class _xVec3 D; // r29+0x108
        class _xVec3 X; // r29+0xF8
        class _xVec3 * N; // r17
        class _xVec3 euler; // r29+0xE8
        float camAngle; // r29+0x150
        float autodist2d; // r22
        float diffAngle; // r20
        float turnfactor; // r21
        float dir_dp; // r20
        float mag; // r29+0x14C
        float angle; // r29+0x148
        unsigned int blendUserFlag; // r2
        unsigned int animUserFlag; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00185BF0 -> 0x00185E24
*/
// Range: 0x185BF0 -> 0x185E24
static void DampenControls(float * angle /* r18 */, float * mag /* r17 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x185BF0 -> 0x185E24
    }
}


