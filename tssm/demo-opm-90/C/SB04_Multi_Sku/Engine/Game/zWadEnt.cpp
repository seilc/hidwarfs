/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zWadEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
unsigned int model_id; // size: 0x4, address: 0x636BA8
float xlower; // size: 0x4, address: 0x0
float xupper; // size: 0x4, address: 0x0
float ylower; // size: 0x4, address: 0x0
float yupper; // size: 0x4, address: 0x0
unsigned int g_hash_xentanim[5]; // size: 0x14, address: 0x680940
char * g_strz_xentanim[5]; // size: 0x14, address: 0x0
class _ShadowParams gShadowParams[1]; // size: 0xC, address: 0x0
float thresh; // size: 0x4, address: 0x0
float thresh; // size: 0x4, address: 0x0
static float sRedMultiplier; // size: 0x4, address: 0x636BAC
static float sGreenMultiplier; // size: 0x4, address: 0x636BB0
static float sBlueMultiplier; // size: 0x4, address: 0x636BB4
static float sColorMultiplier; // size: 0x4, address: 0x636BB8
static signed int sColorMultiplierSign; // size: 0x4, address: 0x636BBC
static class basic_rect screen_bounds; // size: 0x10, address: 0x6225C0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
void (* Cam_Launch)(); // size: 0x4, address: 0x6377EC
void (* Cam_Return)(); // size: 0x4, address: 0x6377F0
static class xVec3 vec_offPlyr; // size: 0xC, address: 0x6225D0
static class xVec3 vec_offPlyr; // size: 0xC, address: 0x6225E0
class tweak_group normal_tweak; // size: 0x1D0, address: 0x680960
class tweak_group cheat_tweak; // size: 0x1D0, address: 0x680B30
class tweak_group * current_tweak; // size: 0x4, address: 0x636BC0
static class zEntSimpleObj * curSourceSimpObj; // size: 0x4, address: 0x6377F4
class xBase base; // size: 0x10, address: 0x680D00
char * start_anim_states[17]; // size: 0x44, address: 0x5FE6D0
// total size: 0x1A0
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state[3]; // offset 0x4, size 0xC
    class state_type * states[12]; // offset 0x10, size 0x30
    class xVec2 last_sp; // offset 0x40, size 0x8
    class xVec2 sp; // offset 0x48, size 0x8
    class xVec3 hit_loc; // offset 0x50, size 0xC
    class xVec3 hit_norm; // offset 0x5C, size 0xC
    class xModelInstance * missle_model; // offset 0x68, size 0x4
    class xEnt * hits[32]; // offset 0x6C, size 0x80
    signed int hits_size; // offset 0xEC, size 0x4
    unsigned int player_health; // offset 0xF0, size 0x4
    class xVec3 player_motion; // offset 0xF4, size 0xC
    float fov_default; // offset 0x100, size 0x4
    class zShrapnelAsset * droplet_shrapnel; // offset 0x104, size 0x4
    float dialog_freq; // offset 0x108, size 0x4
    float last_check_dist; // offset 0x10C, size 0x4
    // total size: 0x60
    class /* @class */ {
        // Members
    public:
        float samples; // offset 0x0, size 0x4
        float bubbles; // offset 0x4, size 0x4
        class xMat4x3 mat; // offset 0x10, size 0x40
        class xQuat dir; // offset 0x50, size 0x10
    } trail; // offset 0x110, size 0x60
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            class xAnimState * aim; // offset 0x0, size 0x4
            class xAnimState * fire; // offset 0x4, size 0x4
            class xAnimState * fire2; // offset 0x8, size 0x4
            class xAnimState * idle; // offset 0xC, size 0x4
        } player; // offset 0x0, size 0x10
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            class xAnimState * fire; // offset 0x0, size 0x4
            class xAnimState * fly; // offset 0x4, size 0x4
        } missle; // offset 0x10, size 0x8
    } astate; // offset 0x170, size 0x18
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        // total size: 0x14
        class /* @class */ {
            // Members
        public:
            class xAnimTransition * aim; // offset 0x0, size 0x4
            class xAnimTransition * fire; // offset 0x4, size 0x4
            class xAnimTransition * fire2; // offset 0x8, size 0x4
            class xAnimTransition * idle; // offset 0xC, size 0x4
            class xAnimTransition * end; // offset 0x10, size 0x4
        } player; // offset 0x0, size 0x14
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            class xAnimTransition * fly; // offset 0x0, size 0x4
        } missle; // offset 0x14, size 0x4
    } atran; // offset 0x188, size 0x18
} shared; // size: 0x1A0, address: 0x5FE720
class xMat4x3 start_cam_mat; // size: 0x40, address: 0x680D10
class fixed_queue missle_record; // size: 0x808, address: 0x680D50
class xFXRibbon wake_ribbon[2]; // size: 0x20, address: 0x681560
class xDecalEmitter explode_decal; // size: 0x68, address: 0x681580
static class curve_node wake_ribbon_curve[7]; // size: 0x54, address: 0x6225F0
static class curve_node cheat_wake_ribbon_curve[4]; // size: 0x30, address: 0x622650
static class curve_node explode_curve[3]; // size: 0x24, address: 0x622680
static class curve_node cheat_explode_curve[3]; // size: 0x24, address: 0x6226B0
class xVec3 ringPos; // size: 0xC, address: 0x6815E8
float ringRadius; // size: 0x4, address: 0x6377F8
signed int ringAlpha; // size: 0x4, address: 0x6377FC
unsigned char renderRing; // size: 0x1, address: 0x637800
class RwTexture * ringTex; // size: 0x4, address: 0x637804
class sound_config sounds[8]; // size: 0x140, address: 0x5FE8C0
unsigned int hash_uber; // size: 0x4, address: 0x637808
unsigned int hash_mini; // size: 0x4, address: 0x637810
float steerFactor; // size: 0x4, address: 0x636BC4
float clampMaxAdd; // size: 0x4, address: 0x636BC8
class quadrant_set qzone; // size: 0x14, address: 0x0
// total size: 0x690
class /* @class */ {
    // Members
public:
    unsigned char hiding; // offset 0x0, size 0x1
    float alpha; // offset 0x4, size 0x4
    float alpha_vel; // offset 0x8, size 0x4
    float glow; // offset 0xC, size 0x4
    float glow_vel; // offset 0x10, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        class xModelInstance * reticle; // offset 0x0, size 0x4
        class xModelInstance * target; // offset 0x4, size 0x4
        class xModelInstance * swirl; // offset 0x8, size 0x4
        class xModelInstance * wind; // offset 0xC, size 0x4
    } model; // offset 0x14, size 0x10
    class hud_gizmo gizmo[33]; // offset 0x24, size 0x630
    unsigned int gizmos_used; // offset 0x654, size 0x4
    class uv_animated_model uv_swirl; // offset 0x658, size 0x1C
    class uv_animated_model uv_wind; // offset 0x674, size 0x1C
} hud; // size: 0x690, address: 0x6819D0
class xCam * xCamLaunchCam; // size: 0x4, address: 0x63785C
static class CBFXData cbfxdata; // size: 0x8, address: 0x637860
static class xVec3 vec_offset; // size: 0xC, address: 0x6226D8
static class xVec3 vec_tilt; // size: 0xC, address: 0x6226E8
static class xVec3 vec_offset; // size: 0xC, address: 0x6226F8
static class xVec3 vec_tilt; // size: 0xC, address: 0x622708
static class xVec3 vec_offset; // size: 0xC, address: 0x622718
static class xVec3 vec_tilt; // size: 0xC, address: 0x622728
static class zParEmitter * sCandleEmitter; // size: 0x4, address: 0x637878
static class zParEmitter * sCandleSmokeEmitter; // size: 0x4, address: 0x63787C
static class zParEmitter * sMountEmitter; // size: 0x4, address: 0x637880
static unsigned int sChandelierHash; // size: 0x4, address: 0x637884
static class zEntPickup * * sPickupUpdateList; // size: 0x4, address: 0x637888
static unsigned int sPickupUpdateCount; // size: 0x4, address: 0x63788C
static unsigned int sPickupUpdateTotal; // size: 0x4, address: 0x637890
signed int gRenderPickups; // size: 0x4, address: 0x636BD4
class zParEmitter * gEmitShinySparkles; // size: 0x4, address: 0x637894
class zPickupAuraInfo zPickupAuraTable[5]; // size: 0x3C, address: 0x5FEA20
class zPickupAuraInfo zManlinessAuraTable[5]; // size: 0x3C, address: 0x5FEA60
class KnownPickups AnimatedPickups[3]; // size: 0xF0, address: 0x5FEAA0
static float * sPickupScaling; // size: 0x4, address: 0x637898
static float sPickupScalingPlatform[5]; // size: 0x14, address: 0x5FEB90
static float sPickupScalingDrive[5]; // size: 0x14, address: 0x5FEBB0
static float sPickupScalingSlide[5]; // size: 0x14, address: 0x5FEBD0
static class LevelPickupScale sCustomLevelScales[8]; // size: 0x40, address: 0x5FEBF0
static class RwMatrixTag sPickupOrientation; // size: 0x40, address: 0x5FEC30
static float sPickupOrientAngle; // size: 0x4, address: 0x63789C
static float PickupRenderMaxDistanceSqr; // size: 0x4, address: 0x636BD8
static class xEntFrame gPickupFrame; // size: 0xF0, address: 0x682060
static class xEntCollis gPickupCollis; // size: 0x5FC, address: 0x682150
static class _xCounter * keyCounter; // size: 0x4, address: 0x6378A0
static class xVec3 sGoofyGooberOffset; // size: 0xC, address: 0x682750
static signed int sGoofyGooberGlareId; // size: 0x4, address: 0x6378A4
static float sGoofyGooberPickupOrientAngleZ; // size: 0x4, address: 0x6378A8
static float sGoofyGooberPickupOrientAngleY; // size: 0x4, address: 0x6378AC
static unsigned char sGoofyGooberSoundPlayed; // size: 0x1, address: 0x6378B0
static unsigned char sGoofyGooberEventSent; // size: 0x1, address: 0x636BDC
static class xFXRibbon * ggRibbon; // size: 0x4, address: 0x6378B4
static signed int ggCntSkipRibbonJoint; // size: 0x4, address: 0x6378B8
static unsigned char sGoofyGooberNoTranslation; // size: 0x1, address: 0x6378BC
static class curve_node ggRaysCurveData[2]; // size: 0x18, address: 0x622740
class RibData ribGGRays; // size: 0x4C, address: 0x5FEC70
class SparkyCurve sGGSparksCurveData[2]; // size: 0x18, address: 0x5FECC0
static class SparkyEmitter sGGSparks; // size: 0x74, address: 0x622760
class xMat4x3 sGGPinwheelMat; // size: 0x40, address: 0x0
class xLightKit * PickupLightKit; // size: 0x4, address: 0x6378C0
static float sHackStuckTimer; // size: 0x4, address: 0x6378C4
static class xVec3 sHackStuckDir; // size: 0xC, address: 0x682760
static class xVec3 sHackStuckVel; // size: 0xC, address: 0x682770
static unsigned int sHackStuckSetDir; // size: 0x4, address: 0x6378C8
static float CATCH_CAPSULE_RAD; // size: 0x4, address: 0x636BE0
static float CATCH_CAPSULE_BIAS; // size: 0x4, address: 0x636BE4
static float sCatchCapsuleTimer; // size: 0x4, address: 0x6378CC
signed int gBungeeDeath; // size: 0x4, address: 0x6378D0
static signed int sPlayerUpdateIndex; // size: 0x4, address: 0x6378D4
static signed int sPlayerUpdateCount; // size: 0x4, address: 0x6378D8
static class xVec3 sAnimPhysicsIncrement; // size: 0xC, address: 0x682780
static float wallStickTimer; // size: 0x4, address: 0x6378DC
float gWallStickTime; // size: 0x4, address: 0x636BE8
static enum _zPlayerWallJumpState lastWallJumpState; // size: 0x4, address: 0x6378E0
static float stuck_timer; // size: 0x4, address: 0x6378E4
static float not_stuck_timer; // size: 0x4, address: 0x6378E8
static class xVec3 stuck_start_loc; // size: 0xC, address: 0x682790
static unsigned char sModelUpdatedOnce; // size: 0x1, address: 0x6378EC
signed int sPlayerSurfaceType; // size: 0x4, address: 0x0
class xEnt * sDebugPlayerPtr; // size: 0x4, address: 0x0
signed int gSpongeBall; // size: 0x4, address: 0x6378F0
class zParEmitter * gEmitBFX; // size: 0x4, address: 0x6378F4
static float sLastBubbleEmit; // size: 0x4, address: 0x0
static float sLastInvulnEmit; // size: 0x4, address: 0x6378F8
class xModelTag sSpongeBobLKnee; // size: 0x20, address: 0x6827A0
class xModelTag sSpongeBobRKnee; // size: 0x20, address: 0x6827C0
class xModelTag sSpongeBobLElbow; // size: 0x20, address: 0x6827E0
class xModelTag sSpongeBobRElbow; // size: 0x20, address: 0x682800
class xModelTag sSpongeBobLFoot; // size: 0x20, address: 0x682820
class xModelTag sSpongeBobRFoot; // size: 0x20, address: 0x682840
class xModelTag sSpongeBobLHand; // size: 0x20, address: 0x682860
class xModelTag sSpongeBobRHand; // size: 0x20, address: 0x682880
class xModelTag sPatrickLFoot; // size: 0x20, address: 0x6828A0
class xModelTag sPatrickRFoot; // size: 0x20, address: 0x6828C0
class xModelTag sPatrickLHand; // size: 0x20, address: 0x6828E0
class xModelTag sPatrickRHand; // size: 0x20, address: 0x682900
class xModelTag sPatrickLKnee; // size: 0x20, address: 0x682920
class xModelTag sPatrickRKnee; // size: 0x20, address: 0x682940
class xModelTag sPatrickLElbow; // size: 0x20, address: 0x682960
class xModelTag sPatrickRElbow; // size: 0x20, address: 0x682980
class xModelTag sPatrickBelly; // size: 0x20, address: 0x6829A0
class xModelTag sPatrickHead; // size: 0x20, address: 0x6829C0
class zPlayerCommentTimer sIdleCommentTimer; // size: 0x14, address: 0x6829E0
class zPlayerCommentTimer sRunningCommentTimer; // size: 0x14, address: 0x682A00
class zPlayerCommentTimer sPatCarryCommentTimer; // size: 0x14, address: 0x682A20
class zPlayerCommentTimer sRollingCommentTimer; // size: 0x14, address: 0x682A40
static class zStreamedSound spongeBobOneLinerData[97]; // size: 0x794, address: 0x5FECE0
static class zStreamedSound patrickOneLinerData[97]; // size: 0x794, address: 0x5FF480
static class zStreamedSound carEmptyOneLinerData[1]; // size: 0x14, address: 0x5FFC20
static class zStreamedSound spongePatOneLinerData[17]; // size: 0x154, address: 0x5FFC40
static class zStreamedSound slidingOneLinerData[6]; // size: 0x78, address: 0x5FFDA0
static class zStreamedSoundList sSlidingOneLiners; // size: 0x8, address: 0x637900
static class zStreamedSoundList sPlayerOneLiners[4]; // size: 0x20, address: 0x682A60
static enum iSndHandle sCurrentStreamSndID; // size: 0x4, address: 0x0
static unsigned int sPlayerSnd[4][52]; // size: 0x340, address: 0x682A80
static enum iSndHandle sPlayerSndID[4][52]; // size: 0x340, address: 0x5FFE20
static class xBase * sPlayerRumble[52]; // size: 0xD0, address: 0x682DC0
static float sPlayerSndSneakDelay; // size: 0x4, address: 0x637908
static signed int sPlayerDiedLastTime; // size: 0x4, address: 0x63790C
static signed int sPlayerIgnoreSound; // size: 0x4, address: 0x637910
static signed int sPlayerAttackInAir; // size: 0x4, address: 0x637914
static float sOldMusicVolume; // size: 0x4, address: 0x637918
static unsigned char spongebobCostumeAtomicOrder[11][11]; // size: 0x79, address: 0x600160
static class zEntPlayerBowlTarget zEntPlayerBowlTargetPool[16]; // size: 0x140, address: 0x682E90
static class zEntPlayerBowlTarget * sBowlTargetHead; // size: 0x4, address: 0x63791C
static class zEntPlayerBowlTarget * sBowlTargetTail; // size: 0x4, address: 0x637920
static class _tagLightningAdd sBowlLightningAddInfo; // size: 0x68, address: 0x682FD0
static signed int sNumActiveBowlTargets; // size: 0x4, address: 0x637924
static float sBowlBlastRadius; // size: 0x4, address: 0x637928
signed int gBowlButton; // size: 0x4, address: 0x63792C
static float sStartBubbleBowlTimer; // size: 0x4, address: 0x637930
static signed int sStartBubbleBowlLeftGround; // size: 0x4, address: 0x637934
static float sThrowBlastRadius; // size: 0x4, address: 0x637938
static class xVec3 sThrowBlastPosition; // size: 0xC, address: 0x683038
float startJump; // size: 0x4, address: 0x63793C
float startDouble; // size: 0x4, address: 0x637940
float startBounce; // size: 0x4, address: 0x637944
unsigned char gInitShadow; // size: 0x1, address: 0x637948
static float minVelmag; // size: 0x4, address: 0x636BEC
static float maxVelmag; // size: 0x4, address: 0x636BF0
static float curVelmag; // size: 0x4, address: 0x63794C
static float curVelangle; // size: 0x4, address: 0x637950
static signed int surfSlickness; // size: 0x4, address: 0x636BF4
static float surfFriction; // size: 0x4, address: 0x636BF8
static float surfDamping; // size: 0x4, address: 0x637954
static signed int lastSlickness; // size: 0x4, address: 0x636BFC
static class xVec3 lastDeltaPos; // size: 0xC, address: 0x683048
static class xVec3 lastFloorNorm; // size: 0xC, address: 0x683058
static class xEnt * lastFloorEnt; // size: 0x4, address: 0x637958
static unsigned int surfSticky; // size: 0x4, address: 0x63795C
static float surfSlideStart; // size: 0x4, address: 0x636C00
static float surfSlideStop; // size: 0x4, address: 0x636C04
float surfSlickRatio; // size: 0x4, address: 0x637960
static float surfSlickTimer; // size: 0x4, address: 0x637964
static float surfPeakRatio; // size: 0x4, address: 0x636C08
static float surfAccelWalk; // size: 0x4, address: 0x636C0C
static float surfAccelRun; // size: 0x4, address: 0x636C10
static float surfDecelIdle; // size: 0x4, address: 0x636C14
static float surfDecelSkid; // size: 0x4, address: 0x636C18
static float surfMaxSpeed; // size: 0x4, address: 0x637968
static float surfSlipTimer; // size: 0x4, address: 0x63796C
static class xEnt * sGrabFound; // size: 0x4, address: 0x637970
static signed int sGrabFailed; // size: 0x4, address: 0x637974
static float sThrowAngle; // size: 0x4, address: 0x637978
static float shrapDeathTimer; // size: 0x4, address: 0x636C1C
static float sPlayerNPC_KnockBackTime; // size: 0x4, address: 0x636C20
static float sPlayerNPC_KnockBackVel; // size: 0x4, address: 0x636C24
static float sPlayerCollAdjust; // size: 0x4, address: 0x63797C
static class zPlayerLassoInfo * sLassoInfo; // size: 0x4, address: 0x637980
static class zLasso * sLasso; // size: 0x4, address: 0x637984
static class xEnt * sHitch[32]; // size: 0x80, address: 0x683070
static signed int sNumHitches; // size: 0x4, address: 0x637988
static float sHitchAngle; // size: 0x4, address: 0x63798C
static float sSwingTimeElapsed; // size: 0x4, address: 0x637990
static signed int sLassoCamLinger; // size: 0x4, address: 0x637994
static signed int sGooKnockedToSafety; // size: 0x4, address: 0x637998
static float sGooKnockedTimer; // size: 0x4, address: 0x63799C
class xEntBoulder * boulderVehicle; // size: 0x4, address: 0x6379A0
static float bvTimeToIdle; // size: 0x4, address: 0x6379A4
static signed int boulderRollShouldEnd; // size: 0x4, address: 0x6379A8
static signed int boulderRollShouldStart; // size: 0x4, address: 0x6379AC
static class zParEmitter * sEmitSpinBubbles; // size: 0x4, address: 0x6379B0
static class zParEmitter * sEmitSundae; // size: 0x4, address: 0x6379B4
static class zParEmitter * sEmitStankBreath; // size: 0x4, address: 0x6379B8
static class xModelTag sStankTag[3]; // size: 0x60, address: 0x6830F0
static class RpAtomic * sReticleModel[4]; // size: 0x10, address: 0x683150
static class RpAtomic * sReticleHandModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleDuhModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleYeeModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleHawModel; // size: 0x4, address: 0x0
static float sReticleRot[2]; // size: 0x8, address: 0x6379C0
static float sReticleAlpha[2]; // size: 0x8, address: 0x6379C8
static class xMat4x3 sReticleMat[2]; // size: 0x80, address: 0x683160
static signed int sTypeOfTarget[2]; // size: 0x8, address: 0x6379D0
static float sTimeToRetarget[2]; // size: 0x8, address: 0x6379D8
class xEnt * gReticleTarget[2]; // size: 0x8, address: 0x6379E0
static class RwRaster * sBowlingLaneRast; // size: 0x4, address: 0x6379E8
char * cBowlingLaneTexture; // size: 0x4, address: 0x636C28
static class RwRaster * sThrowArrowRast; // size: 0x4, address: 0x6379EC
static class xVec3 sThrowDecalPos; // size: 0xC, address: 0x0
static float sThrowDecalFactor; // size: 0x4, address: 0x6379F0
char * cThrowArrowTexture; // size: 0x4, address: 0x636C2C
static float sShowThrowArrow; // size: 0x4, address: 0x6379F4
char * sDirDecalBlendLabels[11]; // size: 0x2C, address: 0x0
static unsigned int sDirDecalBlendValues[11]; // size: 0x2C, address: 0x0
static unsigned int sDirDecalNumBlendModes; // size: 0x4, address: 0x0
static // total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int level; // offset 0x0, size 0x4
    unsigned int total; // offset 0x4, size 0x4
} TreasureChestsPerLevel[15]; // size: 0x78, address: 0x6227E0
static float update_dt; // size: 0x4, address: 0x636C30
static float last_update_dt; // size: 0x4, address: 0x636C34
static class xVec3 update_motion; // size: 0xC, address: 0x6831E0
static class xVec3 req_motion; // size: 0xC, address: 0x6831F0
static class xVec3 precollide_motion; // size: 0xC, address: 0x683200
class xMat4x3 gPlayerAbsMat; // size: 0x40, address: 0x683210
static unsigned int sPlayerKillAnimMovement; // size: 0x4, address: 0x6379F8
class xMat4x3 rendermat; // size: 0x40, address: 0x683250
class xMat4x3 sCameraLastMat; // size: 0x40, address: 0x683290
class xVec3 sDriveVel; // size: 0xC, address: 0x6832D0
float default_player_radius; // size: 0x4, address: 0x0
enum eSNDCurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x6379FC
enum eSNDCurrentPlayer lastgCurrentPlayer; // size: 0x4, address: 0x636C38
enum ePlayerEnum gCurrentCostume; // size: 0x4, address: 0x637A00
class xVec3 floor_supp[4]; // size: 0x30, address: 0x6832E0
float floor_dist[4]; // size: 0x10, address: 0x683310
float floor_tmr[4]; // size: 0x10, address: 0x683320
class xVec3 floor_safe_vec; // size: 0xC, address: 0x683330
float floor_safe_tmr; // size: 0x4, address: 0x637A04
static float bbash_start_ht; // size: 0x4, address: 0x637A08
static float bbash_end_tmr; // size: 0x4, address: 0x637A0C
static float bbash_tmr; // size: 0x4, address: 0x637A10
static float bbash_vel; // size: 0x4, address: 0x637A14
signed int gBashButton; // size: 0x4, address: 0x637A18
static class zNMEHazard * sGauntletHaz; // size: 0x4, address: 0x637A1C
static signed int sGauntletStartHaz; // size: 0x4, address: 0x637A20
static float sGauntletBlastRadius; // size: 0x4, address: 0x637A24
static signed int sGauntletBoundHit; // size: 0x4, address: 0x637A28
static float sBashSoundTimer; // size: 0x4, address: 0x637A2C
static unsigned int sGauntletBubbleEffectNum; // size: 0x4, address: 0x636C3C
static float sGauntletBubbleEffectRadius; // size: 0x4, address: 0x636C40
static float sGauntletBubbleEffectVel; // size: 0x4, address: 0x636C44
static float sGauntletBubbleEffectRandVel; // size: 0x4, address: 0x636C48
static float sGauntletTweakButtonY; // size: 0x4, address: 0x636C4C
static float sGauntletTweakPlatBashY; // size: 0x4, address: 0x636C50
static float sGauntletTweakPlatDefaultY; // size: 0x4, address: 0x0
static signed int bbash_hit; // size: 0x4, address: 0x637A30
static signed int bbounce_hit; // size: 0x4, address: 0x637A34
static signed int cartwheel_hit; // size: 0x4, address: 0x637A38
static signed int cartwheel_first; // size: 0x4, address: 0x637A3C
signed int gCartwheelButton; // size: 0x4, address: 0x637A40
static class xEnt * contactEnt; // size: 0x4, address: 0x637A44
static signed int hammer_button; // size: 0x4, address: 0x637A48
static signed int hammer_start; // size: 0x4, address: 0x637A4C
static signed int hammer_throw; // size: 0x4, address: 0x637A50
static signed int hammer_first; // size: 0x4, address: 0x637A54
static float sLastHammerTime; // size: 0x4, address: 0x637A58
static float sThrowChargeTime; // size: 0x4, address: 0x637A5C
float gThrowPower; // size: 0x4, address: 0x637A60
static float bbounce_tmr; // size: 0x4, address: 0x0
static float idle_tmr; // size: 0x4, address: 0x637A64
static float inact_tmr; // size: 0x4, address: 0x637A68
static float stun_power_tmr; // size: 0x4, address: 0x637A6C
static class xBase * stun_rumble[2][4]; // size: 0x20, address: 0x683340
static float tslide_maxspd; // size: 0x4, address: 0x637A70
static float tslide_maxspd_tmr; // size: 0x4, address: 0x637A74
static float tslide_inair_tmr; // size: 0x4, address: 0x637A78
static float tslide_dbl_tmr; // size: 0x4, address: 0x637A7C
static unsigned int tslide_ground; // size: 0x4, address: 0x637A80
static class xVec3 tslide_lastrealvel; // size: 0xC, address: 0x683360
static signed int in_goo; // size: 0x4, address: 0x637A84
static signed int lin_goo; // size: 0x4, address: 0x637A88
static float in_goo_tmr; // size: 0x4, address: 0x637A8C
static signed int sOnBouncBack; // size: 0x4, address: 0x637A90
static unsigned int player_hitlist_anim; // size: 0x4, address: 0x637A94
signed int player_hit; // size: 0x4, address: 0x637A98
static signed int player_hit_anim; // size: 0x4, address: 0x636C54
static unsigned int player_dead_anim; // size: 0x4, address: 0x636C58
static unsigned int player_idle_anim; // size: 0x4, address: 0x637A9C
static unsigned int sMountType; // size: 0x4, address: 0x637AA0
static class xEnt * sMountObject; // size: 0x4, address: 0x637AA4
static float sMountTimer; // size: 0x4, address: 0x637AA8
static class xVec3 velbase; // size: 0xC, address: 0x0
static class xVec3 velvar; // size: 0xC, address: 0x0
static class xVec3 last_center; // size: 0xC, address: 0x0
static unsigned int last_frame; // size: 0x4, address: 0x0
static enum _tagePlayerStreamSnd sSeeEnemySounds[42]; // size: 0xA8, address: 0x6001E0
unsigned char default_PowerUp[10]; // size: 0xA, address: 0x0
static unsigned int sShouldBubbleBowl; // size: 0x4, address: 0x637AAC
static float sBubbleBowlTimer; // size: 0x4, address: 0x637AB0
static float sBubbleBowlLastWindupTime; // size: 0x4, address: 0x636C5C
static float sBubbleBowlMultiplier; // size: 0x4, address: 0x636C60
static unsigned int sSpatulaGrabbed; // size: 0x4, address: 0x637AB4
static enum /* @enum */ {
    WallJumpResult_NoJump = 0,
    WallJumpResult_Jump = 1,
} sWallJumpResult; // size: 0x4, address: 0x637AB8
static class xVec3 sWallNormal; // size: 0xC, address: 0x683370
static class xVec3 sWallContactPos; // size: 0xC, address: 0x683380
static class zSurfaceProps * sWallCollisionSurface; // size: 0x4, address: 0x637ABC
static float sTongueDblSpeedMult; // size: 0x4, address: 0x637AC0
static unsigned int sShouldMelee; // size: 0x4, address: 0x637ACC
unsigned int patrickHitMax; // size: 0x4, address: 0x637AD0
unsigned int sbHitMax; // size: 0x4, address: 0x0
class xAnimTransition patrickHitTran[8]; // size: 0x160, address: 0x683390
class xAnimTransition sbHitTran[8]; // size: 0x160, address: 0x0
static class PlayerStreakInfo sStreakInfo[3][4]; // size: 0x2A0, address: 0x6002B0
float sRingDelay; // size: 0x4, address: 0x637ADC
static unsigned char SBBBashBones[8]; // size: 0x8, address: 0x622940
static unsigned char SBBBounceBones[8]; // size: 0x8, address: 0x622948
static signed int g_doPlayerUpdateAgainDueToPlayerSwitch; // size: 0x4, address: 0x637AE0
static unsigned int sTrackHash[32]; // size: 0x80, address: 0x6005F0
static unsigned int cchkButtbounce; // size: 0x4, address: 0x637B0C
static unsigned int cchkSquish; // size: 0x4, address: 0x637B10
class _tagLightningAdd LightningInfo; // size: 0x68, address: 0x683FE0
class InnerLightningData Lightning[16]; // size: 0x180, address: 0x684050
float TimeToChangeLightning; // size: 0x4, address: 0x637B14
float TimeToFlash; // size: 0x4, address: 0x637B18
class RwRGBA WarningColor; // size: 0x4, address: 0x0
signed int TargetCount; // size: 0x4, address: 0x637B1C
float TimeLeftForExplosion; // size: 0x4, address: 0x637B20
unsigned char Exploding; // size: 0x1, address: 0x637B24
float Step; // size: 0x4, address: 0x637B28
float Scale; // size: 0x4, address: 0x637B2C
unsigned char Exploding; // size: 0x1, address: 0x637B30
class xModelInstance * ExplosionSphere; // size: 0x4, address: 0x637B34
class xSurface * Surface; // size: 0x4, address: 0x637B38
enum iSndHandle ExplodeSndHandle; // size: 0x4, address: 0x636C90
unsigned char Exploding; // size: 0x1, address: 0x637B3C
unsigned char Sparking; // size: 0x1, address: 0x637B40
static class xFXRing FXExplodeRing[2]; // size: 0x80, address: 0x622980
unsigned char WarpEmitted; // size: 0x1, address: 0x637B44
class xModelBlur NormalBlur; // size: 0x4, address: 0x637B48
class xModelBlur UpgradeBlur; // size: 0x4, address: 0x637B4C
unsigned char Blurring; // size: 0x1, address: 0x637B50
class xEnt * EntToTrack; // size: 0x4, address: 0x637B54
class config_data NormalBlurConfig; // size: 0x24, address: 0x600820
class config_data UpgradeBlurConfig; // size: 0x24, address: 0x600850
class xModelInstance * CartShieldModelInstances[2]; // size: 0x8, address: 0x637B58
signed int on; // size: 0x4, address: 0x637B60
signed int lastOn; // size: 0x4, address: 0x637B64
signed int render; // size: 0x4, address: 0x637B68
float modelRot[2]; // size: 0x8, address: 0x637B70
float maxAlpha[2]; // size: 0x8, address: 0x637B78
float minAlpha[2]; // size: 0x8, address: 0x637B80
float maxScale[2]; // size: 0x8, address: 0x637B88
float minScale[2]; // size: 0x8, address: 0x637B90
float rotSpeed[2]; // size: 0x8, address: 0x637B98
signed int isBright[2]; // size: 0x8, address: 0x637BA0
class xSurface * surface; // size: 0x4, address: 0x637BA8
class xColor_tag modelColor[2]; // size: 0x8, address: 0x637BB0
class zDustRingEmitter DustEmitter; // size: 0x8, address: 0x637BB8
class config_type DustConfig; // size: 0x14, address: 0x6841D0
unsigned char Dust; // size: 0x1, address: 0x637BC0
unsigned char Blur; // size: 0x1, address: 0x637BC4
float DustForce; // size: 0x4, address: 0x637BC8
class xModelBlur ThrowBlur; // size: 0x4, address: 0x637BCC
class xEnt * ThrownObject; // size: 0x4, address: 0x637BD0
class config_data ThrowBlurConfig; // size: 0x24, address: 0x600880
class xFXRibbon PlayerRibbons[2][4]; // size: 0x80, address: 0x6841F0
class xFXRibbon CartRibbon[2]; // size: 0x20, address: 0x684270
class config_type RibbonConfigs[2][4]; // size: 0x100, address: 0x684290
class config_type CartConfig; // size: 0x20, address: 0x684390
class curve_node PlayerRibbonCurve[2]; // size: 0x18, address: 0x6008B0
class curve_node SBKarate2Curve[2]; // size: 0x18, address: 0x6008D0
class curve_node PatMelee2Curve[2]; // size: 0x18, address: 0x6008F0
static class curve_node CartWheelRibbonCurve[2]; // size: 0x18, address: 0x622A00
static class curve_node CartWheel2RibbonCurve[2]; // size: 0x18, address: 0x622A20
float yaw; // size: 0x4, address: 0x637BD4
float roll; // size: 0x4, address: 0x637BD8
float pitch; // size: 0x4, address: 0x637BDC
class xVec3 axis; // size: 0xC, address: 0x6843B0
enum iSndHandle Snd[5]; // size: 0x14, address: 0x6843C0
enum iSndGroupHandle SndGroup[5]; // size: 0x14, address: 0x6843E0
unsigned int helpHash; // size: 0x4, address: 0x637BE0
unsigned int helpNoDiveHash; // size: 0x4, address: 0x637BE4
unsigned int helpNoQuitHash; // size: 0x4, address: 0x637BE8
unsigned int helpNoQuitNoDiveHash; // size: 0x4, address: 0x637BEC
class ztextbox * helpTextBox; // size: 0x4, address: 0x637BF0
float oldShadowCastDistance; // size: 0x4, address: 0x637BF4
static class sound_group sound_groups[9]; // size: 0x48, address: 0x622A40
static // total size: 0x40
class /* @class */ {
    // Members
public:
    float bottom_anim_frac; // offset 0x0, size 0x4
    float top_anim_frac; // offset 0x4, size 0x4
    float bottom_anim_time; // offset 0x8, size 0x4
    float top_anim_time; // offset 0xC, size 0x4
    float hit_anim_time; // offset 0x10, size 0x4
    float damage_rot; // offset 0x14, size 0x4
    float death_time; // offset 0x18, size 0x4
    float vel_blur; // offset 0x1C, size 0x4
    float fade_dist; // offset 0x20, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float edge_zone; // offset 0x0, size 0x4
        float sway; // offset 0x4, size 0x4
        float decay; // offset 0x8, size 0x4
    } horizontal; // offset 0x24, size 0xC
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float time; // offset 0x0, size 0x4
        float anim_out_time; // offset 0x4, size 0x4
        float min_dist; // offset 0x8, size 0x4
        float max_dist; // offset 0xC, size 0x4
    } dive; // offset 0x30, size 0x10
} fixed; // size: 0x40, address: 0x684400
static // total size: 0x19C
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state; // offset 0x4, size 0x4
    class state_type * states[2]; // offset 0x8, size 0x8
    // total size: 0x2C
    class /* @class */ {
        // Members
    public:
        class xAnimTransition * start; // offset 0x0, size 0x4
        class xAnimTransition * rise; // offset 0x4, size 0x4
        class xAnimTransition * fall; // offset 0x8, size 0x4
        class xAnimTransition * stop; // offset 0xC, size 0x4
        class xAnimTransition * dive_start; // offset 0x10, size 0x4
        class xAnimTransition * dive_stop; // offset 0x14, size 0x4
        class xAnimTransition * top_start; // offset 0x18, size 0x4
        class xAnimTransition * top_stop; // offset 0x1C, size 0x4
        class xAnimTransition * bottom_start; // offset 0x20, size 0x4
        class xAnimTransition * bottom_stop; // offset 0x24, size 0x4
        class xAnimTransition * hit; // offset 0x28, size 0x4
    } anim_tran; // offset 0x10, size 0x2C
    class hook_type * hook; // offset 0x3C, size 0x4
    class hook_type * hook_cache[8]; // offset 0x40, size 0x20
    class drop_asset * drop_cache[32]; // offset 0x60, size 0x80
    class xMarkerAsset * drop_marker_cache[32]; // offset 0xE0, size 0x80
    signed int hook_cache_size; // offset 0x160, size 0x4
    signed int drop_cache_size; // offset 0x164, size 0x4
    class xModelInstance * root_model; // offset 0x168, size 0x4
    class xModelInstance * ass_model; // offset 0x16C, size 0x4
    class xModelInstance * pants_model; // offset 0x170, size 0x4
    class xVec3 hook_loc; // offset 0x174, size 0xC
    class xVec3 drop_loc; // offset 0x180, size 0xC
    unsigned char drop_set_view_angle; // offset 0x18C, size 0x1
    float drop_view_angle; // offset 0x190, size 0x4
    float away_timer; // offset 0x194, size 0x4
    signed int anim_state; // offset 0x198, size 0x4
} shared; // size: 0x19C, address: 0x600910
static float old_pants_clip_radius; // size: 0x4, address: 0x637BF8
static float old_root_clip_radius; // size: 0x4, address: 0x0
class tweak_callback turn_cb; // size: 0x28, address: 0x0
class tweak_callback vertical_cb; // size: 0x28, address: 0x0
class tweak_callback horizontal_cb; // size: 0x28, address: 0x0
class tweak_callback camera_cb; // size: 0x28, address: 0x0
class tweak_callback collision_cb; // size: 0x28, address: 0x0
static class zCar playerCar; // size: 0x700, address: 0x685230
class zCamCar * carCam; // size: 0x4, address: 0x637C08
static signed int sMemDepthJustHIPStartPlayer; // size: 0x4, address: 0x0
class tagFixed fixed; // size: 0x7C, address: 0x685B40
// total size: 0x70
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state; // offset 0x4, size 0x4
    class state_type * states[4]; // offset 0x8, size 0x10
    unsigned char control; // offset 0x18, size 0x1
    float camlerp; // offset 0x1C, size 0x4
    float out_time; // offset 0x20, size 0x4
    float max_out_time; // offset 0x24, size 0x4
    float reset_time; // offset 0x28, size 0x4
    class xModelInstance * model; // offset 0x2C, size 0x4
    class xVec2 loc; // offset 0x30, size 0x8
    class xVec2 dir; // offset 0x38, size 0x8
    float fade_alpha; // offset 0x40, size 0x4
    unsigned char render_hand; // offset 0x44, size 0x1
    unsigned char vertical; // offset 0x45, size 0x1
    unsigned char first_reset_frame; // offset 0x46, size 0x1
    float vel; // offset 0x48, size 0x4
    float accel; // offset 0x4C, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        float near_d; // offset 0x0, size 0x4
        float near_h; // offset 0x4, size 0x4
        float near_pitch; // offset 0x8, size 0x4
        float far_d; // offset 0xC, size 0x4
        float far_h; // offset 0x10, size 0x4
        float far_pitch; // offset 0x14, size 0x4
        class xMat4x3 * tgt_mat; // offset 0x18, size 0x4
        class xMat4x3 * tgt_omat; // offset 0x1C, size 0x4
    } cam_data; // offset 0x50, size 0x20
} shared; // size: 0x70, address: 0x600AD0
class xMat4x3 shared_target; // size: 0x40, address: 0x685BC0
static class xVec3 move_posAdjust; // size: 0xC, address: 0x685C00
static void (* old_before_animmat)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // size: 0x4, address: 0x637C10
float carOutLoc; // size: 0x4, address: 0x0
float carCamDist; // size: 0x4, address: 0x0
float carCamHeight; // size: 0x4, address: 0x0
float tubOutLoc; // size: 0x4, address: 0x0
float tubCamDist; // size: 0x4, address: 0x0
float tubCamHeight; // size: 0x4, address: 0x0
float normOutLoc; // size: 0x4, address: 0x0
float normCamDist; // size: 0x4, address: 0x0
float normCamHeight; // size: 0x4, address: 0x0
static unsigned int sMgrCount; // size: 0x4, address: 0x637C38
static class zSimpleMgr * sMgrList; // size: 0x4, address: 0x637C3C
static unsigned int sSimpleCustomCount; // size: 0x4, address: 0x637C40
static class xEnt * * sSimpleCustomList; // size: 0x4, address: 0x637C44
static enum iSndGroupHandle surfaceSoundGroupID[22]; // size: 0x58, address: 0x685CC0
static enum iSndGroupHandle surfaceSoundGroupSpongebob; // size: 0x4, address: 0x637C48
static enum iSndGroupHandle surfaceSoundGroupPatrick; // size: 0x4, address: 0x637C4C
static enum zDrivingSurf sCurrentSurface; // size: 0x4, address: 0x637C50
enum iSndHandle slideSoundHandle; // size: 0x4, address: 0x636CA4
static class zParEmitter * sSlideDustEmit; // size: 0x4, address: 0x637C54
static signed int sPlayerIn; // size: 0x4, address: 0x637C60
static unsigned int sPlayerNear; // size: 0x4, address: 0x637C64
static float fudgex; // size: 0x4, address: 0x0
static float fudgez; // size: 0x4, address: 0x0
unsigned char g_drawtriggers; // size: 0x1, address: 0x0
// total size: 0xC
struct /* @anon16 */ {} cruise_bubble::CruiseBubble::CBFXtra::HazGone::__vtable; // size: 0xC, address: 0x6357F8
void zEntTriggerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x312130
void zEntTriggerUpdate(class zEntTrigger *, class xScene *, float); // size: 0x0, address: 0x312370
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
class zGlobals globals; // size: 0x2410, address: 0x7AB790
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
class xMat4x3 g_I3; // size: 0x40, address: 0x6D3810
unsigned int CtoOEffectTboxEnableCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314150
unsigned int JumpOutEffectJOAnimCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314080
unsigned int JumpOutEffectPlrEjectCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314090
unsigned int JumpOutEffectPlrVisibleCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314100
unsigned int JumpInEffectJIAnimCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314180
unsigned int JumpInEffectPlrTeleportCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x314190
unsigned int JumpInEffectPlrInvisibleCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x3141A0
unsigned int CtoOCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3141E0
unsigned int CtoOCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314270
unsigned int JOtoOCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3142E0
unsigned int JOtoOCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3142F0
unsigned int JItoOCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314300
unsigned int JItoOCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314310
unsigned int JumpInCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314340
unsigned int JumpInCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314350
unsigned int JumpOutCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314320
unsigned int JumpOutCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314330
unsigned int OpenCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x314360
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *, void *); // size: 0x0, address: 0x443060
void zEntTeleportBoxEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3129C0
void zEntTeleportBox_Update(class xEnt *, class xScene *, float); // size: 0x0, address: 0x312C50
unsigned int xUpdateCull_DistanceSquaredCB(void *, void *); // size: 0x0, address: 0x448650
unsigned int xUpdateCull_AlwaysTrueCB(void *, void *); // size: 0x0, address: 0x448700
class xScene * g_xSceneCur; // size: 0x4, address: 0x637ED4
void zEntSimpleObj_Move(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x316030
void zEntSimpleObj_Render(class xEnt *); // size: 0x0, address: 0x3163E0
void zEntSimpleObjEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3149D0
void zEntSimpleObj_Update(class zEntSimpleObj *, class xScene *, float); // size: 0x0, address: 0x315BA0
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x636F94
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
void VisUpdateSimpleMgr(class xEnt *); // size: 0x0, address: 0x317820
signed int CmpSimpleMgr(void *, void *); // size: 0x0, address: 0x317880
float VBLANKS_PER_SEC; // size: 0x4, address: 0x636F18
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
enum substate_enum supdate_fade_in(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x3189E0
enum substate_enum supdate_start_fade_in(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318A60
enum substate_enum supdate_moving_out(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318AB0
enum substate_enum supdate_starting(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318BC0
enum substate_enum supdate_stopped(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318C80
enum substate_enum supdate_stopping(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318D00
enum substate_enum supdate_moving_in(class drop_state_type &, class xScene &, float &); // size: 0x0, address: 0x318DE0
// total size: 0x14
struct /* @anon13 */ {} oob_state::OOBState::drop_state_type::__vtable; // size: 0x14, address: 0x6359D0
// total size: 0x14
struct /* @anon17 */ {} oob_state::OOBState::state_type::__vtable; // size: 0x14, address: 0x0
enum substate_enum supdate_fade_out(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x318F10
enum substate_enum supdate_start_fade_out(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x318F90
enum substate_enum supdate_moving_out(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x318FE0
enum substate_enum supdate_starting(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x3190F0
enum substate_enum supdate_stopped(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x3191B0
enum substate_enum supdate_stopping(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x319230
enum substate_enum supdate_moving_in(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x319310
enum substate_enum supdate_begin_wait(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x319440
enum substate_enum supdate_reorient(class grab_state_type &, class xScene &, float &); // size: 0x0, address: 0x319490
// total size: 0x14
struct /* @anon6 */ {} oob_state::OOBState::grab_state_type::__vtable; // size: 0x14, address: 0x6359F0
// total size: 0x14
struct /* @anon5 */ {} oob_state::OOBState::out_state_type::__vtable; // size: 0x14, address: 0x635A10
// total size: 0x14
struct /* @anon3 */ {} oob_state::OOBState::in_state_type::__vtable; // size: 0x14, address: 0x635A30
class xVec3 g_O3; // size: 0xC, address: 0x62C4D0
void * __dt(class zCamCar *, signed short); // size: 0x0, address: 0x396B20
void zEntPlayerCarHandleEvents(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x319B90
unsigned int check_anim_hit_to_death(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BAC0
unsigned int check_anim_hit_to_cycle(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BAE0
unsigned int check_anim_hit_to_bottom(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BB40
unsigned int check_anim_hit_to_top(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BB90
unsigned int check_anim_hit_to_dive(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BBE0
unsigned int check_anim_mount_to_cycle_start(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BC30
unsigned int check_anim_start(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x31BC40
// total size: 0x18
struct /* @anon12 */ {} bungee_state::@unnamed@zWadEnt_cpp@::attaching_state_type::__vtable; // size: 0x18, address: 0x6359B0
// total size: 0x18
struct /* @anon0 */ {} bungee_state::@unnamed@zWadEnt_cpp@::state_type::__vtable; // size: 0x18, address: 0x0
// total size: 0x18
struct /* @anon9 */ {} bungee_state::@unnamed@zWadEnt_cpp@::hanging_state_type::__vtable; // size: 0x18, address: 0x635990
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x62CAC8
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
void dont_move(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x31F180
signed int CheckPickupAgainstPlayer(class xEnt *, void *); // size: 0x0, address: 0x3555B0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class xEnt * PlayerCollCheckOneEnt(class xEnt *, class xScene *, void *); // size: 0x0, address: 0x325870
class xEnt * PlayerCollCheckOneVillain(class xEnt *, class xScene *, void *); // size: 0x0, address: 0x324DF0
enum iSndHandle sLastPlayedSoundHdl; // size: 0x4, address: 0x636BA0
void TimeOutCB(class zTimerBase *); // size: 0x0, address: 0x321580
float gDialogueMusicLevel; // size: 0x4, address: 0x636B48
void zEntPlayer_BoulderVehicleUpdate(class xEnt *, class xScene *, float); // size: 0x0, address: 0x3394F0
class xVec3 g_Y3; // size: 0xC, address: 0x62C4F0
signed int xent_entent; // size: 0x4, address: 0x637F3C
class _tagxPad mPad[4]; // size: 0x4E0, address: 0x68A3A0
void PlayerBoundUpdate(class xEnt *, class xVec3 *); // size: 0x0, address: 0x327C40
unsigned int PlayerDepenQuery(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // size: 0x0, address: 0x327CE0
void zPlayerRender(class zEnt *); // size: 0x0, address: 0x307B70
void zEntPlayer_Move(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x32C200
void zPlayerUpdate(class xEnt *, class xScene *, float); // size: 0x0, address: 0x307B80
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x636EAC
class RpCollisionTriangle * nearestTrackCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x329620
signed int xModelBucketEnabled; // size: 0x4, address: 0x6380C4
float gShadowObjectRadius; // size: 0x4, address: 0x63824C
class xVec3 g_NY3; // size: 0xC, address: 0x62C520
class xQuat g_IQ; // size: 0x10, address: 0x62C540
signed int CheckObjectAgainstGauntlet(class xEnt *, void *); // size: 0x0, address: 0x344B20
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
signed int zcam_bbounce; // size: 0x4, address: 0x637D04
signed int CheckNMEAgainstBubbleBowl(class xEnt *, void *); // size: 0x0, address: 0x344D00
void zEntPlayer_BoulderVehicleMove(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x33A470
unsigned int gPTankDisable; // size: 0x4, address: 0x620608
void BoulderVEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x33A490
signed int xModelInstStaticAlloc; // size: 0x4, address: 0x6380C0
void PlayerRotMatchUpdateEnt(class xEnt *, class xScene *, float, void *); // size: 0x0, address: 0x3215F0
unsigned int GooDeathCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C170
unsigned int GooCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C370
unsigned int DefeatedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BCD0
unsigned int DefeatedCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BFA0
unsigned int IdleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E7B0
unsigned int HitCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C150
unsigned int HitCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C160
unsigned int SlideCruisingCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E6B0
unsigned int SlideCruisingCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E6C0
unsigned int SlideAccelerateCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E630
unsigned int SlideAccelerateCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E640
unsigned int SlideDecelerateCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E5B0
unsigned int SlideDecelerateCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E5C0
unsigned int SlideTrackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349BA0
unsigned int LandTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E540
unsigned int DblJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A960
unsigned int DblJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34AB50
unsigned int JumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34AD90
unsigned int TrackPrefallJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349A30
unsigned int JumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B240
unsigned int TrackFallCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349AD0
unsigned int TrackFallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349AF0
unsigned int BoulderRollIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A820
unsigned int BoulderRollMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A860
unsigned int BbashStart01EffectMissCB(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D470
unsigned int TalkDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x308C50
unsigned int TalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x308C70
unsigned int SlipRunCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E960
unsigned int BbowlRecoverRunSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C3E0
unsigned int BbowlRecoverRunOutOfWorldCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C490
unsigned int BbowlRecoverRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C590
unsigned int BbowlRecoverWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C690
unsigned int BbowlTossEndCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C790
unsigned int BbowlWindupEndCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34CA90
unsigned int BbowlCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34CAD0
unsigned int BbowlCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34CE70
unsigned int LedgeFinishCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349800
unsigned int LedgeGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349820
unsigned int LedgeGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349A00
unsigned int RunSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EF10
unsigned int RunOutOfWorldCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EE40
unsigned int RunStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EFA0
unsigned int WalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34ED70
unsigned int IdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EC00
unsigned int IdleSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EAD0
unsigned int BBounceToJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D060
unsigned int BBounceToJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D140
unsigned int BBounceStrikeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D150
unsigned int BBounceStrikeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D390
unsigned int BBounceAttackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D3C0
unsigned int BBashStrikeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D5B0
unsigned int BBashStrikeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D880
unsigned int BubbleBounceCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D3F0
unsigned int BubbleBounceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D460
unsigned int BubbleSpinCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34DD00
unsigned int BubbleSpinCheck2(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34DF50
unsigned int BubbleSpinCheck1(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34DFE0
unsigned int LandCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E1D0
unsigned int LandSlipIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E3D0
unsigned int LandSlipRunCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E070
unsigned int LandSlipRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E370
unsigned int LandRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E490
unsigned int LandHighCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E4C0
unsigned int LandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E590
unsigned int WallJumpFallCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B290
unsigned int WallJumpFallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B2D0
unsigned int WallJumpStickCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B2B0
unsigned int WallJumpLandFlightCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B300
unsigned int WallJumpLandFlightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B320
unsigned int WallJumpFlightLandCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B330
unsigned int WallJumpFlightLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B470
unsigned int WallJumpCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B480
unsigned int WallJumpLaunchCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B7F0
unsigned int WallJumpLaunchCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34B880
unsigned int JumpApexCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34AD50
unsigned int FallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A8A0
unsigned int BoulderRollCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A0A0
unsigned int BoulderRollWindupCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A610
unsigned int BoulderRollCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A800
unsigned int TongueDblSpinCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A8D0
unsigned int TongueDblJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34A8F0
unsigned int LandNoTrackSlipIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E210
unsigned int LandNoTrackSlipRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E290
unsigned int LandNoTrackWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E430
unsigned int LandNoTrackFastCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E310
unsigned int NoslideTrackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349B90
unsigned int LandNoTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E4F0
unsigned int NoslideTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349B50
unsigned int SlideTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349C90
unsigned int Defeated03Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BED0
unsigned int Defeated02Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BF10
unsigned int Defeated01Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BF50
unsigned int Hit05CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BFC0
unsigned int Hit05Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BFE0
unsigned int Hit04CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C010
unsigned int Hit04Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C030
unsigned int Hit03CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C060
unsigned int Hit03Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C080
unsigned int Hit02CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C0B0
unsigned int Hit02Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C0D0
unsigned int Hit01CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C100
unsigned int Hit01Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34C120
unsigned int BounceCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34ACF0
unsigned int BounceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34AD30
unsigned int BubbleBashCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34D890
unsigned int BubbleBashCheckGauntlet(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34DB30
unsigned int BubbleBashCheckPunch(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34DC20
unsigned int NoSlipCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E890
unsigned int InactiveCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E740
unsigned int InactiveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34E760
unsigned int SpatulaGrabStopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BAE0
unsigned int SpatulaGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BC30
unsigned int SpatulaGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34BCC0
unsigned int StunRadiusCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346220
unsigned int StunStartFallCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346750
unsigned int PatrickStunCheckHeadbutt(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349550
unsigned int PatrickStunCheckButtslam(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3495C0
unsigned int WalkStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34ECA0
unsigned int IdleStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EB60
unsigned int PatrickMeleeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349240
unsigned int PatrickAttackCheckMelee2(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349630
unsigned int PatrickAttackCheckMelee1(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3496C0
unsigned int PatrickHammerThrowCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347A80
unsigned int PatrickHammerThrowCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349750
unsigned int PatrickHammerSpinCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347D10
unsigned int PatrickHammerCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347D20
unsigned int PatrickHammerCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349760
unsigned int PatrickGrabKill(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3497C0
unsigned int PatrickGrabFailed(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3497E0
unsigned int PatrickGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x348D70
unsigned int PatrickGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3497F0
unsigned int PatrickGrabThrowStartCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347F20
unsigned int PatrickGrabThrowStart(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x349770
unsigned int AnyStopCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EAA0
unsigned int AnyMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34EAC0
unsigned int PatCartwheelLoopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3487C0
unsigned int PatNoCartwheelCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3487D0
unsigned int PatCartwheelNoCartwheelCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x348960
unsigned int PatCartwheelCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x348A00
unsigned int PatCartwheelCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x348CE0
unsigned int LassoSwingReleaseCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346760
unsigned int LassoSwingReleaseCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347980
unsigned int LassoSwingGroundedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346CF0
unsigned int RunAnyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x34F070
unsigned int LassoSwingCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346DF0
unsigned int LassoSwingTossCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x346EA0
unsigned int LassoSwingBeginCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3476D0
unsigned int LassoSwingBeginCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347A20
unsigned int LassoSwingGroundedBeginCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x3471E0
unsigned int LassoSwingGroundedBeginCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x347A50
unsigned char HazardCheck(class zNMEHazard &, void *); // size: 0x0, address: 0x3451F0
signed int CheckObjectAgainstBound(class xEnt *, void *); // size: 0x0, address: 0x3452F0
signed int gBusStopIsWaiting; // size: 0x4, address: 0x637CD0
unsigned int gBusStopIsRunning; // size: 0x4, address: 0x637CCC
void zEntPlayer_BoulderVehicleRender(class zEnt *); // size: 0x0, address: 0x33A480
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x7AB120
unsigned int gFrameCount; // size: 0x4, address: 0x637EFC
void zEntPickupEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x355CF0
void zEntPickup_Update(class zEntPickup *, class xScene *, float); // size: 0x0, address: 0x353860
void zEntHangableEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3571E0
void zEntHangable_Update(class zEntHangable *, class xScene *, float); // size: 0x0, address: 0x3575F0
// total size: 0xC
struct /* @anon20 */ {} HAZNotify::__vtable; // size: 0xC, address: 0x0
unsigned int check_anim_aim(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x360D00
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x16ACD8
class RpAtomic * custom_bubble_render(class RpAtomic *); // size: 0x0, address: 0x363880
unsigned char HDR_brightening; // size: 0x1, address: 0x638330
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
// total size: 0x1C
struct /* @anon7 */ {} cruise_bubble::CruiseBubble::state_camera_restore::__vtable; // size: 0x1C, address: 0x635810
// total size: 0x1C
struct /* @anon14 */ {} cruise_bubble::CruiseBubble::state_type::__vtable; // size: 0x1C, address: 0x0
// total size: 0x1C
struct /* @anon18 */ {} cruise_bubble::CruiseBubble::state_camera_survey::__vtable; // size: 0x1C, address: 0x635830
// total size: 0x1C
struct /* @anon19 */ {} cruise_bubble::CruiseBubble::state_camera_attach::__vtable; // size: 0x1C, address: 0x635850
// total size: 0x1C
struct /* @anon21 */ {} cruise_bubble::CruiseBubble::state_camera_seize::__vtable; // size: 0x1C, address: 0x635870
// total size: 0x1C
struct /* @anon15 */ {} cruise_bubble::CruiseBubble::state_camera_aim::__vtable; // size: 0x1C, address: 0x635890
// total size: 0x1C
struct /* @anon22 */ {} cruise_bubble::CruiseBubble::state_missle_explode::__vtable; // size: 0x1C, address: 0x6358B0
// total size: 0x1C
struct /* @anon11 */ {} cruise_bubble::CruiseBubble::state_missle_fly::__vtable; // size: 0x1C, address: 0x6358D0
// total size: 0x1C
struct /* @anon10 */ {} cruise_bubble::CruiseBubble::state_missle_appear::__vtable; // size: 0x1C, address: 0x6358F0
// total size: 0x1C
struct /* @anon2 */ {} cruise_bubble::CruiseBubble::state_player_wait::__vtable; // size: 0x1C, address: 0x635910
// total size: 0x1C
struct /* @anon1 */ {} cruise_bubble::CruiseBubble::state_player_fire::__vtable; // size: 0x1C, address: 0x635930
// total size: 0x1C
struct /* @anon8 */ {} cruise_bubble::CruiseBubble::state_player_aim::__vtable; // size: 0x1C, address: 0x635950
// total size: 0x1C
struct /* @anon4 */ {} cruise_bubble::CruiseBubble::state_player_halt::__vtable; // size: 0x1C, address: 0x635970
class RpAtomic * (* gAtomicRenderCallBack)(class RpAtomic *); // size: 0x4, address: 0x637F94
unsigned int gFXSurfaceFlags; // size: 0x4, address: 0x6374C0
void zEntButtonEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x3648D0
void zEntButton_Render(class _zEntButton *); // size: 0x0, address: 0x365360
void zEntButton_Move(class _zEntButton *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x365A10
void zEntButton_Update(class _zEntButton *, class xScene *, float); // size: 0x0, address: 0x365410
void zEntUpdate(class zEnt *, class zScene *, float); // size: 0x0, address: 0x366B80
void SweptSphereHitsCameraEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x434BA0
unsigned char hazard_check(class zNMEHazard &, void *); // size: 0x0, address: 0x36A230
unsigned char hazard_check(class zNMEHazard &, void *); // size: 0x0, address: 0x36C640
void oob_before_anim_mat(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // size: 0x0, address: 0x319B00
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x4C
class state_missle_fly : public state_type {
    // Members
public:
    class xVec3 rot; // offset 0x8, size 0xC
    class xVec3 rot_vel; // offset 0x14, size 0xC
    class xVec3 last_loc; // offset 0x20, size 0xC
    class xVec3 boost_target_pos; // offset 0x2C, size 0xC
    float life; // offset 0x38, size 0x4
    float vel; // offset 0x3C, size 0x4
    float engine_pitch; // offset 0x40, size 0x4
    float flash_time; // offset 0x44, size 0x4
    signed int boost; // offset 0x48, size 0x4
};
// total size: 0x44
class xFFXRotMatchState {
    // Members
public:
    signed int lgrounded; // offset 0x0, size 0x4
    class xVec3 lfup; // offset 0x4, size 0xC
    class xVec3 lfat; // offset 0x10, size 0xC
    class xVec3 plfat; // offset 0x1C, size 0xC
    float tmr; // offset 0x28, size 0x4
    float mrate; // offset 0x2C, size 0x4
    float tmatch; // offset 0x30, size 0x4
    float rrate; // offset 0x34, size 0x4
    float trelax; // offset 0x38, size 0x4
    float max_decl; // offset 0x3C, size 0x4
    class xFFXRotMatchState * next; // offset 0x40, size 0x4
};
enum en_plyratak {
    PLYR_ATAK_NONE = 0,
    PLYR_ATAK_SB_KARATE = 1,
    PLYR_ATAK_SB_BASH = 2,
    PLYR_ATAK_SB_BOWL = 3,
    PLYR_ATAK_SB_GUITAR = 4,
    PLYR_ATAK_PAT_BELLY = 5,
    PLYR_ATAK_PAT_CARTWHEEL = 6,
    PLYR_ATAK_PAT_FLOP = 7,
    PLYR_ATAK_PAT_THROW = 8,
    PLYR_ATAK_SLIDE = 9,
    PLYR_ATAK_NOMORE = 10,
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
class config_type {
    // Members
public:
    float radius_inner; // offset 0x0, size 0x4
    float radius_outer; // offset 0x4, size 0x4
    float intensity; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float rate_scale; // offset 0x10, size 0x4
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
// total size: 0x40
class xTriggerAsset {
    // Members
public:
    class xVec3 p[4]; // offset 0x0, size 0x30
    class xVec3 direction; // offset 0x30, size 0xC
    unsigned int flags; // offset 0x3C, size 0x4
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
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
// total size: 0x3080
class xShadowCache {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    signed int entCount; // offset 0x10, size 0x4
    signed int polyCount; // offset 0x14, size 0x4
    float polyRayDepth[5]; // offset 0x18, size 0x14
    unsigned short castOnEnt; // offset 0x2C, size 0x2
    unsigned short castOnPoly; // offset 0x2E, size 0x2
    unsigned int pad; // offset 0x30, size 0x4
    class xEnt * ent[16]; // offset 0x34, size 0x40
    class xShadowPoly poly[256]; // offset 0x80, size 0x3000
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
// total size: 0x130
class zEntHangable : public zEnt {
    // Members
public:
    class xEntHangableAsset * hangInfo; // offset 0xDC, size 0x4
    class xVec3 pivot; // offset 0xE0, size 0xC
    class xVec3 endpos; // offset 0xEC, size 0xC
    class xVec3 vel; // offset 0xF8, size 0xC
    class xVec3 swingplane; // offset 0x104, size 0xC
    float grabTimer; // offset 0x110, size 0x4
    float spin; // offset 0x114, size 0x4
    unsigned int state; // offset 0x118, size 0x4
    signed int enabled; // offset 0x11C, size 0x4
    class zEnt * follow; // offset 0x120, size 0x4
    signed int moving; // offset 0x124, size 0x4
    float candle_timer; // offset 0x128, size 0x4
    signed int candle_state; // offset 0x12C, size 0x4
};
// total size: 0x8
class sound_group {
    // Members
public:
    signed int first; // offset 0x0, size 0x4
    unsigned char streamed; // offset 0x4, size 0x1
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
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0x8
class zStreamedSoundList {
    // Members
public:
    unsigned int mNumSounds; // offset 0x0, size 0x4
    class zStreamedSound * mSounds; // offset 0x4, size 0x4
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
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0x14
class zEntPlayerBowlTarget {
    // Members
public:
    class zLightning * lightning; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
    float timer; // offset 0x8, size 0x4
    class zEntPlayerBowlTarget * prev; // offset 0xC, size 0x4
    class zEntPlayerBowlTarget * next; // offset 0x10, size 0x4
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
// total size: 0x18
struct /* @anon0 */ {};
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0x0
class activity_data {};
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
// total size: 0x1E0
class _zEntButton : public zEnt {
    // Members
public:
    class zEntButtonAsset * basset; // offset 0xDC, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0xD0
    unsigned int state; // offset 0x1B0, size 0x4
    float speed; // offset 0x1B4, size 0x4
    unsigned int oldState; // offset 0x1B8, size 0x4
    signed int oldMotState; // offset 0x1BC, size 0x4
    float counter; // offset 0x1C0, size 0x4
    class xModelInstance * modelPressed; // offset 0x1C4, size 0x4
    float holdTimer; // offset 0x1C8, size 0x4
    unsigned int hold; // offset 0x1CC, size 0x4
    float topHeight; // offset 0x1D0, size 0x4
};
// total size: 0x14
class state_camera_attach : public state_type {
    // Members
public:
    class xEnt * best_target_ent; // offset 0x8, size 0x4
    float best_target; // offset 0xC, size 0x4
    float reticle_delay; // offset 0x10, size 0x4
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
// total size: 0x29C
class zNMETiki : public zNMECommon {
    // Members
public:
    unsigned int tikiFlag; // offset 0x1C0, size 0x4
    class xBound origLocalBound; // offset 0x1C4, size 0x4C
    class xVec3 deltaPos; // offset 0x210, size 0xC
    float timeToLive; // offset 0x21C, size 0x4
    float t1; // offset 0x220, size 0x4
    float t2; // offset 0x224, size 0x4
    float t3; // offset 0x228, size 0x4
    class xVec3 v1; // offset 0x22C, size 0xC
    class xMat4x3 * rigidAnim; // offset 0x238, size 0x4
    union { // inferred
        class hoverData hovdat; // offset 0x23C, size 0x8
        class explodeData xplod; // offset 0x23C, size 0x4
    };
    float vel; // offset 0x244, size 0x4
    float landHt; // offset 0x248, size 0x4
    class xEnt * nonTikiParent; // offset 0x24C, size 0x4
    class xVec3 nonTikiParentDisp; // offset 0x250, size 0xC
    unsigned char numParents; // offset 0x25C, size 0x1
    class zNMETiki * parents[4]; // offset 0x260, size 0x10
    unsigned char numChildren; // offset 0x270, size 0x1
    class zNMETiki * children[4]; // offset 0x274, size 0x10
    class zNMETiki * nextOrphan; // offset 0x284, size 0x4
    unsigned int updatedParents; // offset 0x288, size 0x4
    signed int contactParent; // offset 0x28C, size 0x4
    void * tikiAnim; // offset 0x290, size 0x4
    float tikiAnimTime; // offset 0x294, size 0x4
    class zShrapnelAsset * death_explosion; // offset 0x298, size 0x4
};
// total size: 0x14
class Melee_cbData {
    // Members
public:
    class xEnt * ent; // offset 0x0, size 0x4
    class zScene * zsc; // offset 0x4, size 0x4
    class xBound * meleeB; // offset 0x8, size 0x4
    signed int hitsomething; // offset 0xC, size 0x4
    enum en_plyratak attackType; // offset 0x10, size 0x4
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
class state_missle_appear : public state_type {};
// total size: 0x148
class _zEntTeleportBox : public zEnt {
    // Members
public:
    unsigned int status; // offset 0xDC, size 0x4
    class teleport_asset * tasset; // offset 0xE0, size 0x4
    class zEnt * target; // offset 0xE4, size 0x4
    unsigned int currPlrState; // offset 0xE8, size 0x4
    unsigned int prevPlrState; // offset 0xEC, size 0x4
    unsigned int jumpInAnim; // offset 0xF0, size 0x4
    unsigned int jumpOutAnim; // offset 0xF4, size 0x4
    unsigned int JOtoOpenAnim; // offset 0xF8, size 0x4
    unsigned int JItoOpenAnim; // offset 0xFC, size 0x4
    class xBox trig[2]; // offset 0x100, size 0x30
    unsigned int currPlayerIn; // offset 0x130, size 0x4
    unsigned int prevPlayerIn; // offset 0x134, size 0x4
    unsigned int currPlayerNear; // offset 0x138, size 0x4
    unsigned int prevPlayerNear; // offset 0x13C, size 0x4
    float lastdt; // offset 0x140, size 0x4
    float plrCtrlTimer; // offset 0x144, size 0x4
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
// total size: 0x1C
struct /* @anon1 */ {};
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
// total size: 0x8
class zDestructibleStateAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    void * * animData; // offset 0x4, size 0x4
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x58
class grab_state_type : public state_type {
    // Members
public:
    enum substate_enum move_substate; // offset 0x8, size 0x4
    enum substate_enum fade_substate; // offset 0xC, size 0x4
    class xVec3 player_start; // offset 0x10, size 0xC
    float reorient_time; // offset 0x1C, size 0x4
    float angle_delta; // offset 0x20, size 0x4
    float delay; // offset 0x24, size 0x4
    float fade_start_time; // offset 0x28, size 0x4
    float fade_time; // offset 0x2C, size 0x4
    unsigned int scene_reset; // offset 0x30, size 0x4
    enum substate_enum (* updatess[9])(class grab_state_type &, class xScene &, float &); // offset 0x34, size 0x24
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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
enum thread_enum {
    THREAD_PLAYER = 0,
    THREAD_MISSLE = 1,
    THREAD_CAMERA = 2,
    MAX_THREAD = 3,
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
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
enum en_plyrpup {
    ePowerupLevelDisabled = 0,
    ePowerupLevelNormal = 1,
    ePowerupLevelLevelMax = 2,
    ePowerupLevelHealthMax = 3,
    ePowerupLevelCount = 4,
};
// total size: 0x200
class zCamCar : public zCamDrive {};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
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
// total size: 0xC
class state_missle_explode : public state_type {
    // Members
public:
    float hit_time; // offset 0x8, size 0x4
};
// total size: 0x40
class /* @class */ {
    // Members
public:
    float bottom_anim_frac; // offset 0x0, size 0x4
    float top_anim_frac; // offset 0x4, size 0x4
    float bottom_anim_time; // offset 0x8, size 0x4
    float top_anim_time; // offset 0xC, size 0x4
    float hit_anim_time; // offset 0x10, size 0x4
    float damage_rot; // offset 0x14, size 0x4
    float death_time; // offset 0x18, size 0x4
    float vel_blur; // offset 0x1C, size 0x4
    float fade_dist; // offset 0x20, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float edge_zone; // offset 0x0, size 0x4
        float sway; // offset 0x4, size 0x4
        float decay; // offset 0x8, size 0x4
    } horizontal; // offset 0x24, size 0xC
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float time; // offset 0x0, size 0x4
        float anim_out_time; // offset 0x4, size 0x4
        float min_dist; // offset 0x8, size 0x4
        float max_dist; // offset 0xC, size 0x4
    } dive; // offset 0x30, size 0x10
};
enum /* @enum */ {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
// total size: 0x90
class zParEmitter : public xParEmitter {};
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
// total size: 0xD8C
class hanging_state_type : public state_type {
    // Members
public:
    class xVec3 loc; // offset 0x8, size 0xC
    class xVec3 vel; // offset 0x14, size 0xC
    class xVec3 last_loc; // offset 0x20, size 0xC
    class xVec3 last_hook_loc; // offset 0x2C, size 0xC
    class xVec3 cam_loc; // offset 0x38, size 0xC
    class xVec3 cam_vel; // offset 0x44, size 0xC
    class xVec3 cam_dir; // offset 0x50, size 0xC
    class xVec3 cam_dir_vel; // offset 0x5C, size 0xC
    float dive_remaining; // offset 0x68, size 0x4
    float rot; // offset 0x6C, size 0x4
    float rot_vel; // offset 0x70, size 0x4
    class xVec2 stick_loc; // offset 0x74, size 0x8
    float stick_ang; // offset 0x7C, size 0x4
    float stick_mag; // offset 0x80, size 0x4
    float stick_frac; // offset 0x84, size 0x4
    class xVec3 collide_accel; // offset 0x88, size 0xC
    float roll_offset; // offset 0x94, size 0x4
    unsigned char detaching; // offset 0x98, size 0x1
    class xVec3 drop_off_vel; // offset 0x9C, size 0xC
    float max_yvel; // offset 0xA8, size 0x4
    unsigned char dying; // offset 0xAC, size 0x1
    float damage_timer; // offset 0xB0, size 0x4
    float control_lag_timer; // offset 0xB4, size 0x4
    float control_lag_max; // offset 0xB8, size 0x4
    unsigned char has_dived; // offset 0xBC, size 0x1
    unsigned char can_dive; // offset 0xBD, size 0x1
    unsigned int last_health; // offset 0xC0, size 0x4
    class xModelInstance * root_model; // offset 0xC4, size 0x4
    class xModelInstance * ass_model; // offset 0xC8, size 0x4
    class xModelInstance * pants_model; // offset 0xCC, size 0x4
    class hook_asset h; // offset 0xD0, size 0x8C
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        // total size: 0x14
        class /* @class */ {
            // Members
        public:
            float rest_dist; // offset 0x0, size 0x4
            float emax; // offset 0x4, size 0x4
            float spring; // offset 0x8, size 0x4
            float alpha; // offset 0xC, size 0x4
            float omega; // offset 0x10, size 0x4
        } vertical; // offset 0x0, size 0x14
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float vscale; // offset 0x0, size 0x4
            float hscale; // offset 0x4, size 0x4
            float roll_decay; // offset 0x8, size 0x4
        } camera; // offset 0x14, size 0xC
    } eh; // offset 0x15C, size 0x20
    class ent_info ent_cache[256]; // offset 0x17C, size 0xC00
    signed int ent_cache_size; // offset 0xD7C, size 0x4
    class env_info env_cache; // offset 0xD80, size 0xC
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
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x50
class HAZTypical {
    // Members
public:
    class xMat3x3 mat_rotDelta; // offset 0x0, size 0x30
    float rad_min; // offset 0x30, size 0x4
    float rad_max; // offset 0x34, size 0x4
    float rad_cur; // offset 0x38, size 0x4
    class xVec3 vel; // offset 0x3C, size 0xC
};
// total size: 0x1
class RyzMemData {};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
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
// total size: 0x8
class zSurfColorFX {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    float xdelta; // offset 0x0, size 0x4
    float ydelta; // offset 0x4, size 0x4
    float xdecay; // offset 0x8, size 0x4
    float ydecay; // offset 0xC, size 0x4
    float ybound; // offset 0x10, size 0x4
    float roll_frac; // offset 0x14, size 0x4
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
class state_type {
    // Members
public:
    enum state_enum type; // offset 0x0, size 0x4
};
// total size: 0x34
class CfgInfo {
    // Members
public:
    char * str_texture; // offset 0x0, size 0x4
    class curve_node * curvedata; // offset 0x4, size 0x4
    signed int curvedata_size; // offset 0x8, size 0x4
    float lifetime; // offset 0xC, size 0x4
    float pivot; // offset 0x10, size 0x4
    class config_type ignore_local_ribcfg; // offset 0x14, size 0x20
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
// total size: 0x24
class /* @class */ {
    // Members
public:
    float dist_min; // offset 0x0, size 0x4
    float dist_max; // offset 0x4, size 0x4
    unsigned int emit_min; // offset 0x8, size 0x4
    unsigned int emit_max; // offset 0xC, size 0x4
    float vel_min; // offset 0x10, size 0x4
    float vel_max; // offset 0x14, size 0x4
    float vel_perturb; // offset 0x18, size 0x4
    float vel_angle; // offset 0x1C, size 0x4
    float rot_vel_max; // offset 0x20, size 0x4
};
// total size: 0x20
class xEntHangableAsset {
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
// total size: 0x19C
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state; // offset 0x4, size 0x4
    class state_type * states[2]; // offset 0x8, size 0x8
    // total size: 0x2C
    class /* @class */ {
        // Members
    public:
        class xAnimTransition * start; // offset 0x0, size 0x4
        class xAnimTransition * rise; // offset 0x4, size 0x4
        class xAnimTransition * fall; // offset 0x8, size 0x4
        class xAnimTransition * stop; // offset 0xC, size 0x4
        class xAnimTransition * dive_start; // offset 0x10, size 0x4
        class xAnimTransition * dive_stop; // offset 0x14, size 0x4
        class xAnimTransition * top_start; // offset 0x18, size 0x4
        class xAnimTransition * top_stop; // offset 0x1C, size 0x4
        class xAnimTransition * bottom_start; // offset 0x20, size 0x4
        class xAnimTransition * bottom_stop; // offset 0x24, size 0x4
        class xAnimTransition * hit; // offset 0x28, size 0x4
    } anim_tran; // offset 0x10, size 0x2C
    class hook_type * hook; // offset 0x3C, size 0x4
    class hook_type * hook_cache[8]; // offset 0x40, size 0x20
    class drop_asset * drop_cache[32]; // offset 0x60, size 0x80
    class xMarkerAsset * drop_marker_cache[32]; // offset 0xE0, size 0x80
    signed int hook_cache_size; // offset 0x160, size 0x4
    signed int drop_cache_size; // offset 0x164, size 0x4
    class xModelInstance * root_model; // offset 0x168, size 0x4
    class xModelInstance * ass_model; // offset 0x16C, size 0x4
    class xModelInstance * pants_model; // offset 0x170, size 0x4
    class xVec3 hook_loc; // offset 0x174, size 0xC
    class xVec3 drop_loc; // offset 0x180, size 0xC
    unsigned char drop_set_view_angle; // offset 0x18C, size 0x1
    float drop_view_angle; // offset 0x190, size 0x4
    float away_timer; // offset 0x194, size 0x4
    signed int anim_state; // offset 0x198, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float freq; // offset 0x0, size 0x4
    float decay; // offset 0x4, size 0x4
    float min_freq; // offset 0x8, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
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
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
// total size: 0x8
class xModelAssetParam {
    // Members
public:
    unsigned int HashID; // offset 0x0, size 0x4
    unsigned char WordLength; // offset 0x4, size 0x1
    unsigned char String[3]; // offset 0x5, size 0x3
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x18
class _xCounter : public xBase {
    // Members
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char pad; // offset 0x17, size 0x1
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
// total size: 0x110
class zNMEHazard {
    // Members
public:
    enum en_haztyp typ_hazard; // offset 0x0, size 0x4
    class zNMECommon * npc_owner; // offset 0x4, size 0x4
    class HAZNotify * cb_notify; // offset 0x8, size 0x4
    class zNMEHazard * haz_parent; // offset 0xC, size 0x4
    signed int flg_hazard; // offset 0x10, size 0x4
    class xVec3 pos_hazard; // offset 0x14, size 0xC
    signed int flg_custom; // offset 0x20, size 0x4
    float tym_lifespan; // offset 0x24, size 0x4
    float tmr_remain; // offset 0x28, size 0x4
    float pam_interp; // offset 0x2C, size 0x4
    class xModelInstance * mdl_hazard; // offset 0x30, size 0x4
    union { // inferred
        float tmr_generic; // offset 0x34, size 0x4
        float tmr_parEmit; // offset 0x34, size 0x4
        float tmr_lessismore; // offset 0x34, size 0x4
        float tmr_nextEmit; // offset 0x34, size 0x4
        float tmr_skipEmit; // offset 0x34, size 0x4
        float tmr_skipNext; // offset 0x34, size 0x4
    };
    union { // inferred
        signed int cnt_generic; // offset 0x38, size 0x4
        signed int flg_casthurt; // offset 0x38, size 0x4
    };
    // total size: 0x90
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class HAZTypical typical; // offset 0x0, size 0x50
            class HAZCollide collide; // offset 0x0, size 0x80
            class HAZLob lobdata; // offset 0x0, size 0x90
            class HAZBang bang; // offset 0x0, size 0x80
            class HAZMisc misctyp; // offset 0x0, size 0x60
        };
    } custdata; // offset 0x40, size 0x90
    // total size: 0x28
    class /* @class */ {
        // Members
    public:
        class HAZFXRibbon ribdata; // offset 0x0, size 0x14
        class HAZFXLightning lytdata; // offset 0x14, size 0x14
    } fxdata; // offset 0xD0, size 0x28
    class xShadowCache * shadCacheComplex; // offset 0xF8, size 0x4
    class xShadowSimpleCache * shadCacheSimple; // offset 0xFC, size 0x4
    signed int cnt_nextFill; // offset 0x100, size 0x4
    enum iSndHandle sndIDPlayed; // offset 0x104, size 0x4
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
struct /* @anon2 */ {};
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
// total size: 0x30
class hud_gizmo {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class basic_rect bound; // offset 0x4, size 0x10
    float alpha; // offset 0x14, size 0x4
    float alpha_vel; // offset 0x18, size 0x4
    float glow; // offset 0x1C, size 0x4
    float glow_vel; // offset 0x20, size 0x4
    float opacity; // offset 0x24, size 0x4
    class xVec3 * target; // offset 0x28, size 0x4
    class xModelInstance * model; // offset 0x2C, size 0x4
};
// total size: 0x3C
class xPlatformAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xPlatformERData er; // offset 0x4, size 0x4
        class xPlatformOrbitData orb; // offset 0x4, size 0x4
        class xPlatformSplineData spl; // offset 0x4, size 0x4
        class xPlatformMPData mp; // offset 0x4, size 0x4
        class xPlatformMechData mech; // offset 0x4, size 0x4
        class xPlatformPenData pen; // offset 0x4, size 0x4
        class xPlatformConvBeltData cb; // offset 0x4, size 0x4
        class xPlatformFallingData fall; // offset 0x4, size 0x8
        class xPlatformFRData fr; // offset 0x4, size 0x10
        class xPlatformBreakawayData ba; // offset 0x4, size 0x10
        class xPlatformSpringboardData sb; // offset 0x4, size 0x2C
        class xPlatformTeeterData teet; // offset 0x4, size 0xC
        class xPlatformPaddleData paddle; // offset 0x4, size 0x38
        class xPlatformFMData fm; // offset 0x4, size 0x4
    };
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
    SDRS_SkidMark = 10,
    SDRS_Streak = 11,
    SDRS_Tide = 12,
    SDRS_SkyBack = 13,
    SDRS_Environment = 14,
    SDRS_NPCMatter = 15,
    SDRS_NPCVisual = 16,
    SDRS_NPCBossMeter = 17,
    SDRS_Fill = 18,
    SDRS_OOBFade = 19,
    SDRS_OOBPlayerZ = 20,
    SDRS_OOBPlayerAlpha = 21,
    SDRS_OOBHand = 22,
    SDRS_Glare = 23,
    SDRS_Newsfish = 24,
    SDRS_CruiseHUD = 25,
    SDRS_DiscoFloorGlow = 26,
    SDRS_FireCards = 27,
    SDRS_SplashCones = 28,
    SDRS_Water = 29,
    SDRS_Grass = 30,
    SDRS_WaterSkyDome = 31,
    SDRS_LaserBeam = 32,
    SDRS_Spotlight = 33,
    SDRS_LightVolume = 34,
    SDRS_Ribbon = 35,
    SDRS_ScanLaser = 36,
    SDRS_HDRBeginRender = 37,
    SDRS_BlurAlpha = 38,
    SDRS_ZParPTank = 39,
    SDRS_XPTankPool = 40,
    SDRS_UI = 41,
    SDRS_IncrediBall = 42,
    SDRS_Frozone = 43,
    SDRS_SmashRing = 44,
    SDRS_LaserBolt = 45,
    SDRS_PatStunRings = 46,
    SDRS_Decal = 47,
    SDRS_NMEHazardOpaque = 48,
    SDRS_NMEHazardAlpha = 49,
    SDRS_Total = -1,
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
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
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
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x8
class state_type {
    // Members
public:
    enum state_enum type; // offset 0x0, size 0x4
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
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0x8
class Life {
    // Members
public:
    float tym_lifeBase; // offset 0x0, size 0x4
    float tym_lifeRand; // offset 0x4, size 0x4
};
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    float max_dist; // offset 0x0, size 0x4
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
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
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
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_OOB = 4,
    CONTROL_OWNER_BOSS = 8,
    CONTROL_OWNER_TALK_BOX = 16,
    CONTROL_OWNER_TAXI = 32,
    CONTROL_OWNER_BUS_STOP = 64,
    CONTROL_OWNER_TELEPORT_BOX = 128,
    CONTROL_OWNER_CRUISE_BUBBLE = 256,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_FROZEN = 1024,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_REWARDANIM = 4096,
    CONTROL_OWNER_BUNGEE = 8192,
    CONTROL_OWNER_SPRINGBOARD = 16384,
    CONTROL_OWNER_CUTSCENE = 32768,
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
// total size: 0xC
class xEntSpeedData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
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
// total size: 0x4
class xPlatformERData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
// total size: 0x690
class /* @class */ {
    // Members
public:
    unsigned char hiding; // offset 0x0, size 0x1
    float alpha; // offset 0x4, size 0x4
    float alpha_vel; // offset 0x8, size 0x4
    float glow; // offset 0xC, size 0x4
    float glow_vel; // offset 0x10, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        class xModelInstance * reticle; // offset 0x0, size 0x4
        class xModelInstance * target; // offset 0x4, size 0x4
        class xModelInstance * swirl; // offset 0x8, size 0x4
        class xModelInstance * wind; // offset 0xC, size 0x4
    } model; // offset 0x14, size 0x10
    class hud_gizmo gizmo[33]; // offset 0x24, size 0x630
    unsigned int gizmos_used; // offset 0x654, size 0x4
    class uv_animated_model uv_swirl; // offset 0x658, size 0x1C
    class uv_animated_model uv_wind; // offset 0x674, size 0x1C
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
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x10
class xPlatformBreakawayData {
    // Members
public:
    float warningTime; // offset 0x0, size 0x4
    float collapseIdleTime; // offset 0x4, size 0x4
    unsigned int breakflags; // offset 0x8, size 0x4
    float collisionOffTime; // offset 0xC, size 0x4
};
// total size: 0xC
class ent_info {
    // Members
public:
    enum ent_type type; // offset 0x0, size 0x4
    class xEnt * ent; // offset 0x4, size 0x4
    signed int hits; // offset 0x8, size 0x4
};
// total size: 0x50
class KnownPickups {
    // Members
public:
    char dffFileName[40]; // offset 0x0, size 0x28
    char minfFileName[40]; // offset 0x28, size 0x28
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
enum /* @enum */ {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x38
class PlayerStreakInfo {
    // Members
public:
    unsigned int activated; // offset 0x0, size 0x4
    unsigned int streakID; // offset 0x4, size 0x4
    class xModelTag * tagA; // offset 0x8, size 0x4
    class xModelTag * tagB; // offset 0xC, size 0x4
    float alphaStart; // offset 0x10, size 0x4
    signed int streakTaper; // offset 0x14, size 0x4
    class xColor_tag colA; // offset 0x18, size 0x4
    class xColor_tag colB; // offset 0x1C, size 0x4
    class xVec3 a; // offset 0x20, size 0xC
    class xVec3 b; // offset 0x2C, size 0xC
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
// total size: 0x1C0
class zEntTrigger : public zEnt {
    // Members
public:
    class xBox triggerBox; // offset 0xDC, size 0x18
    unsigned int entered; // offset 0xF4, size 0x4
    class xEntDrive drive; // offset 0x100, size 0xC0
};
// total size: 0x2C
class /* @class */ {
    // Members
public:
    class xAnimTransition * start; // offset 0x0, size 0x4
    class xAnimTransition * rise; // offset 0x4, size 0x4
    class xAnimTransition * fall; // offset 0x8, size 0x4
    class xAnimTransition * stop; // offset 0xC, size 0x4
    class xAnimTransition * dive_start; // offset 0x10, size 0x4
    class xAnimTransition * dive_stop; // offset 0x14, size 0x4
    class xAnimTransition * top_start; // offset 0x18, size 0x4
    class xAnimTransition * top_stop; // offset 0x1C, size 0x4
    class xAnimTransition * bottom_start; // offset 0x20, size 0x4
    class xAnimTransition * bottom_stop; // offset 0x24, size 0x4
    class xAnimTransition * hit; // offset 0x28, size 0x4
};
// total size: 0x60
class /* @class */ {
    // Members
public:
    float samples; // offset 0x0, size 0x4
    float bubbles; // offset 0x4, size 0x4
    class xMat4x3 mat; // offset 0x10, size 0x40
    class xQuat dir; // offset 0x50, size 0x10
};
enum state_enum {
    STATE_INVALID = -1,
    BEGIN_STATE_PLAYER = 0,
    BACKUP_STATE_PLAYER = -1,
    STATE_PLAYER_HALT = 0,
    STATE_PLAYER_AIM = 1,
    STATE_PLAYER_FIRE = 2,
    STATE_PLAYER_WAIT = 3,
    END_STATE_PLAYER = 4,
    BEGIN_STATE_MISSLE = 4,
    BACKUP_STATE_MISSLE = 3,
    STATE_MISSLE_APPEAR = 4,
    STATE_MISSLE_FLY = 5,
    STATE_MISSLE_EXPLODE = 6,
    END_STATE_MISSLE = 7,
    BEGIN_STATE_CAMERA = 7,
    BACKUP_STATE_CAMERA = 6,
    STATE_CAMERA_AIM = 7,
    STATE_CAMERA_SEIZE = 8,
    STATE_CAMERA_ATTACH = 9,
    STATE_CAMERA_SURVEY = 10,
    STATE_CAMERA_RESTORE = 11,
    END_STATE_CAMERA = 12,
    MAX_STATE = 12,
};
// total size: 0x50
class state_camera_aim : public state_type {
    // Members
public:
    float phi; // offset 0x8, size 0x4
    float phi_vel; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float height_vel; // offset 0x14, size 0x4
    float dist; // offset 0x18, size 0x4
    float dist_vel; // offset 0x1C, size 0x4
    class xQuat facing; // offset 0x20, size 0x10
    class xQuat target; // offset 0x30, size 0x10
    float control_delay; // offset 0x40, size 0x4
    float seize_delay; // offset 0x44, size 0x4
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
// total size: 0x14
class HAZFXLightning {
    // Members
public:
    class zLightning * lytlist[4]; // offset 0x0, size 0x10
    signed int cnt_skipRibInsert; // offset 0x10, size 0x4
};
// total size: 0x4
class cb_damage_ent {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x9C
class RayBundle {
    // Members
public:
    class RwV3d delta; // offset 0x0, size 0xC
    float rayup; // offset 0xC, size 0x4
    class RwV3d locdelta; // offset 0x10, size 0xC
    class RwV3d raystart[4]; // offset 0x1C, size 0x30
    class RwV3d raylocal[4]; // offset 0x4C, size 0x30
    float raydist[4]; // offset 0x7C, size 0x10
    unsigned int rayhit[4]; // offset 0x8C, size 0x10
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
// total size: 0x4
class HAZNotify {};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
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
// total size: 0x58
class TrackPolyData {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xMat4x3 * mat; // offset 0xC, size 0x4
    class xEnt * testEnt; // offset 0x10, size 0x4
    signed int triIndex; // offset 0x14, size 0x4
    class xVec3 vert[3]; // offset 0x18, size 0x24
    float neardist; // offset 0x3C, size 0x4
    class xVec3 nearpt; // offset 0x40, size 0xC
    signed int nearvert; // offset 0x4C, size 0x4
    signed int nearedge; // offset 0x50, size 0x4
    class xEnt * foundEnt; // offset 0x54, size 0x4
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
class drop_state_type : public state_type {
    // Members
public:
    enum substate_enum move_substate; // offset 0x8, size 0x4
    enum substate_enum fade_substate; // offset 0xC, size 0x4
    class xVec3 player_start; // offset 0x10, size 0xC
    float stop_time; // offset 0x1C, size 0x4
    float fade_start_time; // offset 0x20, size 0x4
    float fade_time; // offset 0x24, size 0x4
    enum substate_enum (* updatess[7])(class drop_state_type &, class xScene &, float &); // offset 0x28, size 0x1C
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
class /* @class */ {
    // Members
public:
    float control_delay; // offset 0x0, size 0x4
};
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x14
struct /* @anon3 */ {};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x4C
class attaching_state_type : public state_type {
    // Members
public:
    class xVec3 * loc; // offset 0x8, size 0x4
    class xVec3 * vel; // offset 0xC, size 0x4
    class xVec3 last_hook_loc; // offset 0x10, size 0xC
    class xVec3 hook_vel; // offset 0x1C, size 0xC
    float time_left; // offset 0x28, size 0x4
    float time; // offset 0x2C, size 0x4
    float end_time; // offset 0x30, size 0x4
    class xVec3 player_loc; // offset 0x34, size 0xC
    class xVec3 player_vel; // offset 0x40, size 0xC
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
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x2C
class xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
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
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
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
class xSimpleObjAsset {
    // Members
public:
    float animSpeed; // offset 0x0, size 0x4
    unsigned int initAnimState; // offset 0x4, size 0x4
    unsigned char collType; // offset 0x8, size 0x1
    unsigned char flags; // offset 0x9, size 0x1
};
// total size: 0x1C
struct /* @anon4 */ {};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
enum eSNDCurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerCar = 2,
    eCurrentPlayerSpongePat = 3,
    eCurrentPlayerCount = 4,
};
enum state_enum {
    STATE_INVALID = -1,
    BEGIN_STATE = 0,
    STATE_ATTACHING = 0,
    STATE_HANGING = 1,
    END_STATE = 2,
    MAX_STATE = 2,
};
// total size: 0x28
class sound_config {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    float volume; // offset 0x4, size 0x4
    float radius_inner; // offset 0x8, size 0x4
    float radius_outer; // offset 0xC, size 0x4
    unsigned char streamed; // offset 0x10, size 0x1
    unsigned char looping; // offset 0x11, size 0x1
    char * rumble_name; // offset 0x14, size 0x4
    signed int first; // offset 0x18, size 0x4
    unsigned int id; // offset 0x1C, size 0x4
    enum iSndHandle handle; // offset 0x20, size 0x4
    class xBase * rumble_effect; // offset 0x24, size 0x4
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
// total size: 0x910
class CloneContainer {
    // Members
public:
    class rwPDS_HICloneArray clone[12]; // offset 0x0, size 0x900
    class RpAtomic * atomic; // offset 0x900, size 0x4
    unsigned int numClones; // offset 0x904, size 0x4
    unsigned int pad[2]; // offset 0x908, size 0x8
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
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    class xModelInstance * reticle; // offset 0x0, size 0x4
    class xModelInstance * target; // offset 0x4, size 0x4
    class xModelInstance * swirl; // offset 0x8, size 0x4
    class xModelInstance * wind; // offset 0xC, size 0x4
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
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x28
class /* @class */ {
    // Members
public:
    float rest_dist; // offset 0x0, size 0x4
    float view_angle; // offset 0x4, size 0x4
    float offset; // offset 0x8, size 0x4
    float offset_dir; // offset 0xC, size 0x4
    float turn_speed; // offset 0x10, size 0x4
    float vel_scale; // offset 0x14, size 0x4
    float roll_speed; // offset 0x18, size 0x4
    class xVec3 speed; // offset 0x1C, size 0xC
};
// total size: 0x30
class zMovePoint : public xMovePoint {};
// total size: 0x1C
class state_player_fire : public state_type {
    // Members
public:
    unsigned char wand_shown; // offset 0x8, size 0x1
    signed int flg_bangLeft : 1; // offset 0x9, size 0x4
    signed int flg_bangRight : 1; // offset 0x9, size 0x4
    signed int flg_speakerOn : 1; // offset 0x9, size 0x4
    signed int flg_toBeUsed : 29; // offset 0xC, size 0x4
    float tmr_bangLeft; // offset 0x10, size 0x4
    float tmr_bangRight; // offset 0x14, size 0x4
    float tmr_showSpeaker; // offset 0x18, size 0x4
};
// total size: 0x10
class Emit {
    // Members
public:
    signed int num_emitBase; // offset 0x0, size 0x4
    signed int num_emitRand; // offset 0x4, size 0x4
    float rad_emitBase; // offset 0x8, size 0x4
    float rad_emitRand; // offset 0xC, size 0x4
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
// total size: 0x80
class HAZCollide : public HAZTypical {
    // Members
public:
    class xVec3 pos_collide; // offset 0x50, size 0xC
    class xVec3 dir_normal; // offset 0x5C, size 0xC
    class xParabola * parabinfo; // offset 0x68, size 0x4
    signed int flg_collide : 8; // offset 0x6C, size 0x4
    signed int flg_result : 8; // offset 0x6C, size 0x4
    signed int flg_unused : 16; // offset 0x6C, size 0x4
    signed int cnt_skipcol; // offset 0x70, size 0x4
    enum en_hazcol idx_rotateCol; // offset 0x74, size 0x4
};
// total size: 0x18
class effect : public emitterBase {};
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x4
class xPlatformOrbitData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float edge_zone; // offset 0x0, size 0x4
    float sway; // offset 0x4, size 0x4
    float decay; // offset 0x8, size 0x4
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
// total size: 0x10
class missle_record_data {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
    float roll; // offset 0xC, size 0x4
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
// total size: 0x14
class zRewardsQ {
    // Members
public:
    unsigned char active; // offset 0x0, size 0x1
    signed int numRewards; // offset 0x4, size 0x4
    class xVec3 spawnPos; // offset 0x8, size 0xC
};
// total size: 0xC
class env_info {
    // Members
public:
    class xEnv * env; // offset 0x0, size 0x4
    unsigned char collide; // offset 0x4, size 0x1
    signed int hits; // offset 0x8, size 0x4
};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
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
class /* @class */ {
    // Members
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
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
enum en_xEventTags {
    eEventUnknown = 0,
    eEventEnable = 1,
    eEventDisable = 2,
    eEventVisible = 3,
    eEventInvisible = 4,
    eEventEnterPlayer = 5,
    eEventExitPlayer = 6,
    eEventTouchPlayer = 7,
    eEventControlOff = 8,
    eEventControlOn = 9,
    eEventReset = 10,
    eEventIncrement = 11,
    eEventDecrement = 12,
    eEventOpen = 13,
    eEventClose = 14,
    eEventToggle = 15,
    eEventTeleportPlayer = 16,
    eEventOutOfBounds = 17,
    eEventRun = 18,
    eEventStop = 19,
    eEventExpired = 20,
    eEventMove = 21,
    eEventDestroy = 22,
    eEventPause = 23,
    eEventPlay = 24,
    eEventPlayOne = 25,
    eEventPlayMaybe = 26,
    eEventRoomStart = 27,
    eEventInvalidate = 28,
    eEventTilt = 29,
    eEventUntilt = 30,
    eEventArrive = 31,
    eEventMount = 32,
    eEventDismount = 33,
    eEventBreak = 34,
    eEventPickup = 35,
    eEventDeath = 36,
    eEventKill = 37,
    eEventOn = 38,
    eEventOff = 39,
    eEventNPCPatrolOn = 40,
    eEventNPCPatrolOff = 41,
    eEventNPCWanderOn = 42,
    eEventNPCWanderOff = 43,
    eEventNPCDetectOn = 44,
    eEventNPCDetectOff = 45,
    eEventNPCChaseOn = 46,
    eEventNPCChaseOff = 47,
    eEventNPCGoToSleep = 48,
    eEventNPCWakeUp = 49,
    eEventNPCRespawn = 50,
    eEventPlayerDeath = 51,
    eEventGiveChance = 52,
    eEventGiveShinyObjects = 53,
    eEventGiveHealth = 54,
    eEventPress = 55,
    eEventUnpress = 56,
    eEventArriveHalfway = 57,
    eEventHit = 58,
    eEventButtonPressAction = 59,
    eEventEvaluate = 60,
    eEventTrue = 61,
    eEventFalse = 62,
    eEventPadPressX = 63,
    eEventPadPressSquare = 64,
    eEventPadPressO = 65,
    eEventPadPressTriangle = 66,
    eEventPadPressL1 = 67,
    eEventPadPressL2 = 68,
    eEventPadPressR1 = 69,
    eEventPadPressR2 = 70,
    eEventPadPressStart = 71,
    eEventPadPressSelect = 72,
    eEventPadPressUp = 73,
    eEventPadPressDown = 74,
    eEventPadPressRight = 75,
    eEventPadPressLeft = 76,
    eEventFontBackdropOn = 77,
    eEventFontBackdropOff = 78,
    eEventUISelect = 79,
    eEventUIUnselect = 80,
    eEventUIFocusOn = 81,
    eEventUIFocusOff = 82,
    eEventCollisionOn = 83,
    eEventCollisionOff = 84,
    eEventCollision_Visible_On = 85,
    eEventCollision_Visible_Off = 86,
    eEventSceneBegin = 87,
    eEventSceneEnd = 88,
    eEventRoomBegin = 89,
    eEventRoomEnd = 90,
    eEventLobMasterShoot = 91,
    eEventLobMasterReset = 92,
    eEventFallToDeath = 93,
    eEventUIFocusOn_Select = 94,
    eEventUIFocusOff_Unselect = 95,
    eEventDispatcher_PadCfg_PresetA = 96,
    eEventDispatcher_PadCfg_PresetB = 97,
    eEventDispatcher_PadCfg_PresetC = 98,
    eEventDispatcher_PadCfg_PresetD = 99,
    eEventDispatcher_PadVibrateOn = 100,
    eEventDispatcher_PadVibrateOff = 101,
    eEventDispatcher_SoundMono = 102,
    eEventDispatcher_SoundStereo = 103,
    eEventDispatcher_SoundMasterIncrease = 104,
    eEventDispatcher_SoundMasterDecrease = 105,
    eEventDispatcher_SoundMusicIncrease = 106,
    eEventDispatcher_SoundMusicDecrease = 107,
    eEventDispatcher_SoundSFXIncrease = 108,
    eEventDispatcher_SoundSFXDecrease = 109,
    eEventDispatcher_IntroState_Sony = 110,
    eEventDispatcher_IntroState_Publisher = 111,
    eEventDispatcher_IntroState_Developer = 112,
    eEventDispatcher_IntroState_License = 113,
    eEventDispatcher_IntroState_Count = 114,
    eEventDispatcher_TitleState_Start = 115,
    eEventDispatcher_TitleState_Attract = 116,
    eEventDispatcher_TitleState_Count = 117,
    eEventDispatcher_LoadState_SelectMemCard = 118,
    eEventDispatcher_LoadState_SelectSlot = 119,
    eEventDispatcher_LoadState_Loading = 120,
    eEventDispatcher_LoadState_Count = 121,
    eEventDispatcher_OptionsState_Options = 122,
    eEventDispatcher_OptionsState_Count = 123,
    eEventDispatcher_SaveState_SelectMemCard = 124,
    eEventDispatcher_SaveState_SelectSlot = 125,
    eEventDispatcher_SaveState_Saving = 126,
    eEventDispatcher_SaveState_Count = 127,
    eEventDispatcher_PauseState_Pause = 128,
    eEventDispatcher_PauseState_Options = 129,
    eEventDispatcher_PauseState_Count = 130,
    eEventDispatcher_GameState_FirstTime = 131,
    eEventDispatcher_GameState_Play = 132,
    eEventDispatcher_GameState_LoseChance = 133,
    eEventDispatcher_GameState_GameOver = 134,
    eEventDispatcher_GameState_SceneSwitch = 135,
    eEventDispatcher_GameState_Dead = 136,
    eEventDispatcher_SetIntroState_Sony = 137,
    eEventDispatcher_SetIntroState_Publisher = 138,
    eEventDispatcher_SetIntroState_Developer = 139,
    eEventDispatcher_SetIntroState_License = 140,
    eEventDispatcher_SetIntroState_Count = 141,
    eEventDispatcher_SetTitleState_Start = 142,
    eEventDispatcher_SetTitleState_Attract = 143,
    eEventDispatcher_SetTitleState_Count = 144,
    eEventDispatcher_SetLoadState_SelectMemCard = 145,
    eEventDispatcher_SetLoadState_SelectSlot = 146,
    eEventDispatcher_SetLoadState_Loading = 147,
    eEventDispatcher_SetLoadState_Count = 148,
    eEventDispatcher_SetOptionsState_Options = 149,
    eEventDispatcher_SetOptionsState_Count = 150,
    eEventDispatcher_SetSaveState_SelectMemCard = 151,
    eEventDispatcher_SetSaveState_SelectSlot = 152,
    eEventDispatcher_SetSaveState_Saving = 153,
    eEventDispatcher_SetSaveState_Count = 154,
    eEventDispatcher_SetPauseState_Pause = 155,
    eEventDispatcher_SetPauseState_Options = 156,
    eEventDispatcher_SetPauseState_Count = 157,
    eEventDispatcher_SetGameState_FirstTime = 158,
    eEventDispatcher_SetGameState_Play = 159,
    eEventDispatcher_SetGameState_LoseChance = 160,
    eEventDispatcher_SetGameState_GameOver = 161,
    eEventDispatcher_SetGameState_SceneSwitch = 162,
    eEventDispatcher_SetGameState_Dead = 163,
    eEventDigup = 164,
    eEventDispatcher_GameState_Exit = 165,
    eEventDispatcher_SetGameState_Exit = 166,
    eEventLobMasterShootFromWidget = 167,
    eEventDispatcher_SLBack = 168,
    eEventDispatcher_SLCancel = 169,
    eEventDispatcher_SLRetry = 170,
    eEventDispatcher_SLSelectCard = 171,
    eEventDispatcher_SLSelectSlot = 172,
    eEventDispatcher_SLOkay = 173,
    eEventVilHurtBoss = 174,
    eEventAttack = 175,
    eEventAttackOn = 176,
    eEventAttackOff = 177,
    eEventDrop = 178,
    eEventUIAddChar = 179,
    eEventUIDelChar = 180,
    eEventUIStringEmpty = 181,
    eEventUIStringFull = 182,
    eEventUISendStringAsCheat = 183,
    eEventUISetMaxChars = 184,
    eEventUICheatOK = 185,
    eEventUICheatBad = 186,
    eEventVilReport_StartingChase = 187,
    eEventVilReport_StartingAttack = 188,
    eEventVilReport_StartingRetreat = 189,
    eEventPreload = 190,
    eEventDone = 191,
    eEventArcto = 192,
    eEventDigupReaction = 193,
    eEventDispatcher_StoreCheckPoint = 194,
    eEventAnimPlay = 195,
    eEventAnimPlayLoop = 196,
    eEventAnimStop = 197,
    eEventAnimPause = 198,
    eEventAnimResume = 199,
    eEventAnimTogglePause = 200,
    eEventAnimPlayRandom = 201,
    eEventAnimPlayMaybe = 202,
    eEventSetSpeed = 203,
    eEventAccelerate = 204,
    eEventMoveToTarget = 205,
    eEventSwingerFollow = 206,
    eEventImpact = 207,
    eEventStartTimer = 208,
    eEventFinishedTimer = 209,
    eEventUIReset = 210,
    eEventSetScaleFactor = 211,
    eEventEnterEntity = 212,
    eEventExitEntity = 213,
    eEventEnterEntityFLAG = 214,
    eEventExitEntityFLAG = 215,
    eEventDrivenby = 216,
    eEventFollowTarget = 217,
    eEventFaceTarget = 218,
    eEventWatchTarget = 219,
    eEventCarChangeLaneRight = 220,
    eEventCarChangeLaneLeft = 221,
    eEventCarStart = 222,
    eEventCarSetSwerveMode = 223,
    eEventIncreaseSpeed = 224,
    eEventDecreaseSpeed = 225,
    eEventStartMoving = 226,
    eEventStopMoving = 227,
    eEventSwoosh = 228,
    eEventTurretDestroyed = 229,
    eEventNPCSpeakStop = 230,
    eEventStartRumbleEffect = 231,
    eEventNavigateTo = 232,
    eEventNPCSpeakStart = 233,
    eEventNPCAlert = 234,
    eEventNPCPatrolDelay = 235,
    eEventNPCScrambleActionEnd = 236,
    eEventVilFakeChaseOff = 237,
    eEventBossMMPushButton = 238,
    eEventVilReport_DecayComplete = 239,
    eEventVilGuardWidget = 240,
    eEventTextureAnimateOn = 241,
    eEventTextureAnimateOff = 242,
    eEventTextureAnimateToggle = 243,
    eEventColorEffectOn = 244,
    eEventColorEffectOff = 245,
    eEventColorEffectToggle = 246,
    eEventSetTextureAnimGroup = 247,
    eEventSetTextureAnimSpeed = 248,
    eEventTextureAnimateStep = 249,
    eEventEmit = 250,
    eEventEmitted = 251,
    eEventTranslucentOn = 252,
    eEventTranslucentOff = 253,
    eEventTranslucentToggle = 254,
    eEventZipLineEnvDamage = 255,
    eEventVilGangTalkOff = 256,
    eEventGivePowerUp = 257,
    eEventRaceTimerReset = 258,
    eEventFireCruiseBubble = 259,
    eEventCarSuccessAnimPlay = 260,
    eEventCarFailureAnimPlay = 261,
    eEventDisableGroupContents = 262,
    eEventNPCCharge = 263,
    eEventOccludeOn = 264,
    eEventOccludeOff = 265,
    eEventRaceTimerPause = 266,
    eEventRaceTimerResume = 267,
    eEventRaceTimerSetBestTime = 268,
    eEventRaceTimerWarning1 = 269,
    eEventRaceTimerWarning2 = 270,
    eEventRaceTimerWarning3 = 271,
    eEventRingChallengeStart = 272,
    eEventCarStop = 273,
    eEventRingChallengeRun = 274,
    eEventRingChallengeReset = 275,
    eEventRingChallengeSuccess = 276,
    eEventRingChallengeFailed = 277,
    eEventFormationChanged = 278,
    eEventChargeResume = 279,
    eEventChargePause = 280,
    eEventNPCChargeStop = 281,
    eEventNPCChargeCompleted = 282,
    eEventFormationChargeStart = 283,
    eEventSituationPlayerSuccess = 284,
    eEventSituationPlayerFailure = 285,
    eEventDispatcher_ShowHud = 286,
    eEventDispatcher_HideHud = 287,
    eEventDispatcher_FadeOut = 288,
    eEventSetRain = 289,
    eEventSetSnow = 290,
    eEventScriptNoop = 291,
    eEventScriptReset = 292,
    eEventWaitForInput = 293,
    eEventPlayMovie = 294,
    eEventCelebrationAnimPlay = 295,
    eEventDispatcher_SetGameState_GameStats = 296,
    eEventMusicNewSong = 297,
    eEventForward = 298,
    eEventReverse = 299,
    eEventDeprecatedRumbleTest = 300,
    eEventDeprecatedRumbleLight = 301,
    eEventDeprecatedRumbleMedium = 302,
    eEventDeprecatedRumbleHeavy = 303,
    eEventDispatcherScreenAdjustON = 304,
    eEventDispatcherScreenAdjustOFF = 305,
    eEventSetSkyDome = 306,
    eEventConnectToChild = 307,
    eEventDuploWaveBegin = 308,
    eEventDuploWaveComplete = 309,
    eEventDuploNPCBorn = 310,
    eEventDuploNPCKilled = 311,
    eEventDuploExpiredMaxNPC = 312,
    eEventDuploPause = 313,
    eEventDuploResume = 314,
    eEventSetGoo = 315,
    eEventNPCScript_ScriptBegin = 316,
    eEventNPCScript_ScriptEnd = 317,
    eEventNPCScript_ScriptReady = 318,
    eEventNPCScript_Halt = 319,
    eEventNPCScript_SetPos = 320,
    eEventNPCScript_SetDir = 321,
    eEventNPCScript_LookNormal = 322,
    eEventNPCScript_LookAlert = 323,
    eEventNPCScript_FaceWidget = 324,
    eEventNPCScript_FaceWidgetDone = 325,
    eEventNPCScript_GotoWidget = 326,
    eEventNPCScript_GotoWidgetDone = 327,
    eEventNPCScript_AttackWidget = 328,
    eEventNPCScript_AttackWidgetDone = 329,
    eEventNPCScript_FollowWidget = 330,
    eEventNPCScript_PlayAnim = 331,
    eEventNPCScript_PlayAnimDone = 332,
    eEventNPCScript_LeadPlayer = 333,
    eEventSetText = 334,
    eEventStartConversation = 335,
    eEventEndConversation = 336,
    eEventSwitch = 337,
    eEventAddText = 338,
    eEventClearText = 339,
    eEventOpenTBox = 340,
    eEventCloseTBox = 341,
    eEventTalkBox_OnSignal0 = 342,
    eEventTalkBox_OnSignal1 = 343,
    eEventTalkBox_OnSignal2 = 344,
    eEventTalkBox_OnSignal3 = 345,
    eEventTalkBox_OnSignal4 = 346,
    eEventTalkBox_OnSignal5 = 347,
    eEventTalkBox_OnSignal6 = 348,
    eEventTalkBox_OnSignal7 = 349,
    eEventTalkBox_OnSignal8 = 350,
    eEventTalkBox_OnSignal9 = 351,
    eEventTalkBox_StopWait = 352,
    eEventTalkBox_OnStart = 353,
    eEventTalkBox_OnStop = 354,
    eEventHit_Melee = 355,
    eEventHit_BubbleBounce = 356,
    eEventHit_BubbleBash = 357,
    eEventHit_BubbleBowl = 358,
    eEventHit_PatrickSlam = 359,
    eEventHit_Throw = 360,
    eEventHit_PaddleLeft = 361,
    eEventHit_PaddleRight = 362,
    eEventTaskBox_Initiate = 363,
    eEventTaskBox_SetSuccess = 364,
    eEventTaskBox_SetFailure = 365,
    eEventTaskBox_OnAccept = 366,
    eEventTaskBox_OnDecline = 367,
    eEventTaskBox_OnComplete = 368,
    eEventGenerateBoulder = 369,
    eEventLaunchBoulderAtWidget = 370,
    eEventLaunchBoulderAtPoint = 371,
    eEventLaunchBoulderAtPlayer = 372,
    eEventDuploSuperDuperDone = 373,
    eEventDuploDuperIsDoner = 374,
    eEventBusStopSwitchChr = 375,
    eEventGroupUpdateTogether = 376,
    eEventSetUpdateDistance = 377,
    eEventTranslLocalX = 378,
    eEventTranslLocalY = 379,
    eEventTranslLocalZ = 380,
    eEventTranslWorldX = 381,
    eEventTranslWorldY = 382,
    eEventTranslWorldZ = 383,
    eEventRotLocalX = 384,
    eEventRotLocalY = 385,
    eEventRotLocalZ = 386,
    eEventRotWorldX = 387,
    eEventRotWorldY = 388,
    eEventRotWorldZ = 389,
    eEventTranslLocalXDone = 390,
    eEventTranslLocalYDone = 391,
    eEventTranslLocalZDone = 392,
    eEventTranslWorldXDone = 393,
    eEventTranslWorldYDone = 394,
    eEventTranslWorldZDone = 395,
    eEventRotLocalXDone = 396,
    eEventRotLocalYDone = 397,
    eEventRotLocalZDone = 398,
    eEventRotWorldXDone = 399,
    eEventRotWorldYDone = 400,
    eEventRotWorldZDone = 401,
    eEventCount1 = 402,
    eEventCount2 = 403,
    eEventCount3 = 404,
    eEventCount4 = 405,
    eEventCount5 = 406,
    eEventCount6 = 407,
    eEventCount7 = 408,
    eEventCount8 = 409,
    eEventCount9 = 410,
    eEventCount10 = 411,
    eEventCount11 = 412,
    eEventCount12 = 413,
    eEventCount13 = 414,
    eEventCount14 = 415,
    eEventCount15 = 416,
    eEventCount16 = 417,
    eEventCount17 = 418,
    eEventCount18 = 419,
    eEventCount19 = 420,
    eEventCount20 = 421,
    eEventSetState = 422,
    eEventEnterSpongeBob = 423,
    eEventEnterPatrick = 424,
    eEventEnterSandyUNUSED = 425,
    eEventExitSpongeBob = 426,
    eEventExitPatrick = 427,
    eEventExitSandyUNUSED = 428,
    eEventNPCSpecial_PlatformSnap = 429,
    eEventNPCSpecial_PlatformFall = 430,
    eEventGooSetWarb = 431,
    eEventGooSetFreezeDuration = 432,
    eEventGooMelt = 433,
    eEventSetStateRange = 434,
    eEventSetStateDelay = 435,
    eEventSetTransitionDelay = 436,
    eEventNPCFightOn = 437,
    eEventNPCFightOff = 438,
    eEventNPCSplineOKOn = 439,
    eEventNPCSplineOKOff = 440,
    eEventNPCKillQuietly = 441,
    eEventHitHead = 442,
    eEventHitUpperBody = 443,
    eEventHitLeftArm = 444,
    eEventHitRightArm = 445,
    eEventHitLeftLeg = 446,
    eEventHitRightLeg = 447,
    eEventHitLowerBody = 448,
    eEventGiveCurrLevelSocks = 449,
    eEventGiveCurrLevelPickup = 450,
    eEventSetCurrLevelSocks = 451,
    eEventSetCurrLevelPickup = 452,
    eEventTalkBox_OnYes = 453,
    eEventTalkBox_OnNo = 454,
    eEventHit_Cruise = 455,
    eEventDuploKillKids = 456,
    eEventTalkBox_OnSignal10 = 457,
    eEventTalkBox_OnSignal11 = 458,
    eEventTalkBox_OnSignal12 = 459,
    eEventTalkBox_OnSignal13 = 460,
    eEventTalkBox_OnSignal14 = 461,
    eEventTalkBox_OnSignal15 = 462,
    eEventTalkBox_OnSignal16 = 463,
    eEventTalkBox_OnSignal17 = 464,
    eEventTalkBox_OnSignal18 = 465,
    eEventTalkBox_OnSignal19 = 466,
    eEventSpongeballOn = 467,
    eEventSpongeballOff = 468,
    eEventLaunchShrapnel = 469,
    eEventNPCHPIncremented = 470,
    eEventNPCHPDecremented = 471,
    eEventNPCSetActiveOn = 472,
    eEventNPCSetActiveOff = 473,
    eEventPlrSwitchCharacter = 474,
    eEventLevelBegin = 475,
    eEventSceneReset = 476,
    eEventSceneEnter = 477,
    eEventSituationDestroyedTiki = 478,
    eEventSituationDestroyedRobot = 479,
    eEventSituationSeeWoodTiki = 480,
    eEventSituationSeeLoveyTiki = 481,
    eEventSituationSeeShhhTiki = 482,
    eEventSituationSeeThunderTiki = 483,
    eEventSituationSeeStoneTiki = 484,
    eEventSituationSeeFodder = 485,
    eEventSituationSeeHammer = 486,
    eEventSituationSeeTarTar = 487,
    eEventSituationSeeGLove = 488,
    eEventSituationSeeMonsoon = 489,
    eEventSituationSeeSleepyTime = 490,
    eEventSituationSeeArf = 491,
    eEventSituationSeeTubelets = 492,
    eEventSituationSeeSlick = 493,
    eEventSituationSeeKingJellyfish = 494,
    eEventSituationSeePrawn = 495,
    eEventSituationSeeDutchman = 496,
    eEventSituationSeeSandyBossUNUSED = 497,
    eEventSituationSeePatrickBoss = 498,
    eEventSituationSeeSpongeBobBoss = 499,
    eEventSituationSeeRobotPlankton = 500,
    eEventUIChangeTexture = 501,
    eEventNPCCheerForMe = 502,
    eEventFastVisible = 503,
    eEventFastInvisible = 504,
    eEventZipLineMount = 505,
    eEventZipLineDismount = 506,
    eEventTarget = 507,
    eEventFire = 508,
    eEventCameraFXShake = 509,
    eEventBulletTime = 510,
    eEventThrown = 511,
    eEventNPCPatrol = 512,
    eEventEnterCruise = 513,
    eEventExitCruise = 514,
    eEventCruiseFired = 515,
    eEventCruiseDied = 516,
    eEventCruiseAddLife = 517,
    eEventCruiseSetLife = 518,
    eEventCruiseResetLife = 519,
    eEventCameraCollideOff = 520,
    eEventCameraCollideOn = 521,
    eEventOnSliding = 522,
    eEventOffSliding = 523,
    eEventTimerSet = 524,
    eEventTimerAdd = 525,
    eEventNPCForceConverseStart = 526,
    eEventMakeASplash = 527,
    eEventCreditsStart = 528,
    eEventCreditsStop = 529,
    eEventCreditsEnded = 530,
    eEventBubbleWipe = 531,
    eEventSetLightKit = 532,
    eEventSetOpacity = 533,
    eEventDispatcher_SetSoundEffect = 534,
    eEventScale = 535,
    eEventSetReference = 536,
    eEventWarpSetWorld = 537,
    eEventWarpSetTask = 538,
    eEventWarpGo = 539,
    eEventSetCount = 540,
    eEventGetDashSpeed = 541,
    eEventDashTrip = 542,
    eEventDashBurst = 543,
    eEventDashFast = 544,
    eEventDashNormal = 545,
    eEventDashSlow = 546,
    eEventTakeSocks = 547,
    eEventDispatcherAssert = 548,
    eEventBorn = 549,
    eEventPlatPause = 550,
    eEventPlatUnpause = 551,
    eEventStoreOptions = 552,
    eEventRestoreOptions = 553,
    eEventUISetMotion = 554,
    eEventUIMotionFinished = 555,
    eEventUIMotionLoop = 556,
    eEventDestructibleLaunch = 557,
    eEventDestructibleRespawn = 558,
    eEventKaboomStart = 559,
    eEventKaboomStop = 560,
    eEventNPCAttack = 561,
    eEventNPCDefend = 562,
    eEventTrainCarSpeed = 563,
    eEventTrainJunctOut1 = 564,
    eEventTrainJunctOut2 = 565,
    eEventTrainJunctSwitch = 566,
    eEventTrainJunctPassed = 567,
    eEventTrainCarDetach = 568,
    eEventTrainCarExplode = 569,
    eEventNet_InitNetAPI = 570,
    eEventNet_UpdateConnection = 571,
    eEventNet_UpdateOnlineTask = 572,
    eEventNet_UpdateUserList = 573,
    eEventNet_CheckForNewContent = 574,
    eEventNet_SelectDevice = 575,
    eEventNet_SelectContent = 576,
    eEventNet_VerifyContent = 577,
    eEventNet_RemoveContent = 578,
    eEventNet_SelectDeviceAfterRemove = 579,
    eEventNet_ConfirmUseContentIdx = 580,
    eEventNet_ConfirmNoUseContentIdx = 581,
    eEventNet_NoContentInstalled = 582,
    eEventNet_NoContentAvailable = 583,
    eEventNet_NewContentAvailable = 584,
    eEventSceneEnableDraw = 585,
    eEventSceneDisableDraw = 586,
    eEventLightningStart = 587,
    eEventLightningStop = 588,
    eEventChangeBossUIStage = 589,
    eEventStaticCameraStart = 590,
    eEventStaticCameraEnd = 591,
    eEventSetCameraStartOrientation = 592,
    eEventNMESetMovepointPath = 593,
    eEventNMEScareBegin = 594,
    eEventNMEScareSkip = 595,
    eEventNMESetMovepointGroup = 596,
    eEventVentSetStateIdle = 597,
    eEventVentSetStateWarn = 598,
    eEventVentSetStateDamage = 599,
    eEventVentSetStateOff = 600,
    eEventWaterhoseStart = 601,
    eEventWaterhoseStop = 602,
    eEventWaterhoseSetLength = 603,
    eEventCarried = 604,
    eEventExplode = 605,
    eEventJumpTo = 606,
    eEventJumpOnSpawn = 607,
    eEventPlayerHit = 608,
    eEventStartFade = 609,
    eEventFadeDownDone = 610,
    eEventFadeUpDone = 611,
    eEventBounce = 612,
    eEventLaunchNPC = 613,
    eEventUpgradePowerUp = 614,
    eEventBulletStreak = 615,
    eEventSetFollowCameraOrientation = 616,
    eEventHDRFade = 617,
    eEventStart = 618,
    eEventSuccess = 619,
    eEventFailure = 620,
    eEventEnableRestore = 621,
    eEventDisableRestore = 622,
    eEventNPCSpawn = 623,
    eEventSpawnDone = 624,
    eEventSpawnedNPCKilled = 625,
    eEventSpawnedNPCNoHealth = 626,
    eEventSpawnedNPCAllKilled = 627,
    eEventSpawnedNPCAllNoHealth = 628,
    eEventDashTimerSet = 629,
    eEventDashNotOutOfTime = 630,
    eEventDashOutOfTime = 631,
    eEventForceSceneReset = 632,
    eEventNPCActive = 633,
    eEventNPCInactive = 634,
    eEventDuplicatorActive = 635,
    eEventDuplicatorInactive = 636,
    eEventDashEnterTunnel = 637,
    eEventDashExitTunnel = 638,
    eEventStopRumbleEffect = 639,
    eEventDashChaseLasersOn = 640,
    eEventDashChaseLasersOff = 641,
    eEventJumpRandomOnSpawn = 642,
    eEventHit_Cartwheel = 643,
    eEventUIVisible_FocusOn_Select = 644,
    eEventUIFocusOff_Unselect_Invisible = 645,
    eEventCopyReference = 646,
    eEventUIMotionFinishedIn = 647,
    eEventUIMotionFinishedOut = 648,
    eEventUISignalActivateScreen = 649,
    eEventUISignalDeactivateScreen = 650,
    eEventUISignalActivatedScreen = 651,
    eEventUISignalSwitchScreens = 652,
    eEventUISignalStartFadeOut = 653,
    eEventUISignalStartFadeIn = 654,
    eEventUISignalScreenMotionInDone = 655,
    eEventUISignalScreenMotionOutDone = 656,
    eEventUISignalMainBoxInDone = 657,
    eEventUISignalMainBoxOutDone = 658,
    eEventUIResetMotion = 659,
    eEventUIEnableHDR = 660,
    eEventUIDisableHDR = 661,
    eEventUIBrighten = 662,
    eEventUIUnbrighten = 663,
    eEventUISignalDeactivatedScreen = 664,
    eEventNPCDetectAlways = 665,
    eEventNPCDetectNever = 666,
    eEventNPCDetectNormal = 667,
    eEventNPCFightDefault = 668,
    eEventCameraCollidePartial = 669,
    eEventMusicTempSong = 670,
    eEvaluateCounterValue = 671,
    eEventCount0 = 672,
    eEventRotToAbsoluteX = 673,
    eEventRotToAbsoluteY = 674,
    eEventRotToAbsoluteZ = 675,
    eEventTriggerAnim = 676,
    eEventTriggeredAnimDone = 677,
    eEventUISignalMore = 678,
    eEventUISignalNoMore = 679,
    eEventUISignalLess = 680,
    eEventUISignalNoLess = 681,
    eEventUISignalUp = 682,
    eEventUISignalDown = 683,
    eEventUISignalSyncToCurrent = 684,
    eEventUISignalEffect = 685,
    eEventFreezePlayer = 686,
    eEventUnfreezePlayer = 687,
    eEventUISignalMapStart = 688,
    eEventUISignalMapEnd = 689,
    eEventTransToAbsoluteX = 690,
    eEventTransToAbsoluteY = 691,
    eEventTransToAbsoluteZ = 692,
    eEventJSPVisibilityIncrement = 693,
    eEventJSPVisibilityDecrement = 694,
    eEventEnterCamera = 695,
    eEventExitCamera = 696,
    eEventPadPressE = 697,
    eEventSetDashJumpParameters = 698,
    eEventViperFacePlayer = 699,
    eEventViperFaceMovement = 700,
    eEventRequestStart = 701,
    eEventUIAutoMenuRun = 702,
    eEventUIAutoMenuRunUp = 703,
    eEventUIAutoMenuRunDown = 704,
    eEventUIAutoMenuRunLeft = 705,
    eEventUIAutoMenuRunRight = 706,
    eEventIncrementSuccess = 707,
    eEventDecrementSuccess = 708,
    eEventIncrementFailed = 709,
    eEventDecrementFailed = 710,
    eEventMusicTempSongStop = 711,
    eEventNPCScrambleActionBegin = 712,
    eEventNPCScrambleAlert = 713,
    eEventNPCSetTurretAttackRadius = 714,
    eEventGooFreezeStart = 715,
    eEventGooMeltStart = 716,
    eEventNPCNotice = 717,
    eEventBossStageSet = 718,
    eEventBossStageBegan = 719,
    eEventBossStageEnded = 720,
    eEventBossStageBeganA = 721,
    eEventBossStageEndedA = 722,
    eEventBossStageBeganB = 723,
    eEventBossStageEndedB = 724,
    eEventBossStageBeganC = 725,
    eEventBossStageEndedC = 726,
    eEventVisibilityCullOn = 727,
    eEventVisibilityCullOff = 728,
    eEventRBandCameraStart = 729,
    eEventRBandCameraEnd = 730,
    eEventMindyStart = 731,
    eEventMindyEnd = 732,
    eEventFlamethrowerStart = 733,
    eEventFlamethrowerStop = 734,
    eEventFlamethrowerSetLength = 735,
    eEventNPCTakeNoDamageOn = 736,
    eEventNPCTakeNoDamageOff = 737,
    eEventStaticCameraStartFOVFilter = 738,
    eEventStaticCameraRestoreFOV = 739,
    eEventUIXboxDemoExitToLauncher = 740,
    eEventSpawn = 741,
    eEventSpawned = 742,
    eEventCreditsSetDest = 743,
    eEventAllowAttractMode = 744,
    eEventDisallowAttractMode = 745,
    eEventRocketAttack = 746,
    eEventCollisionReset = 747,
    eEventAutoSave = 748,
    eEventOpenBonus = 749,
    eEventFlagLevel = 750,
    eEventLevelEnd = 751,
    eEventNet_GetLocalContentDevice = 752,
    eEventDispatcher_PauseGame_Safe = 753,
    eEventOverrideFreqency = 754,
    eEventResetFrequency = 755,
    eEventSetShotDelay = 756,
    eEventSetShotsInGroup = 757,
    eEventDispatcher_UserSelectYes = 758,
    eEventDispatcher_UserSelectNo = 759,
    eEventDispatcher_UserSelectBack = 760,
    eEventLaunchFireWorks = 761,
    eEventDispatcher_UserSelectionReset = 762,
    eEventSetAsBounceBack = 763,
    eEventUIResetUnlockables = 764,
    eEventUISysMessageWaitResponse = 765,
    eEventUISysMessageWaitConfirm = 766,
    eEventUISysMessageConfirm = 767,
    eEventUISysMessageAccept = 768,
    eEventUISysMessageDecline = 769,
    eEventSetAsBounceBack_Cancel = 770,
    eEventDispatcher_PauseGame = 771,
    eEventPattyWagonStartEngine = 772,
    eEventPattyWagonStopEngine = 773,
    eEventSpawnBubblesOn = 774,
    eEventSpawnBubblesOff = 775,
    eEventNet_XBLiveToggleSignIn = 776,
    eEventNet_XBLiveManageFriends = 777,
    eEventApplyOnResetOn = 778,
    eEventApplyOnResetOff = 779,
    eEventSnapTo = 780,
    eEventThrow = 781,
    eEventFirstZipLine = 782,
    eEventFirstLedgeGrab = 783,
    eEventFirstIncredimeterPickup = 784,
    eEventUISparkTrail = 785,
    eEventUIGetBattleScenes = 786,
    eEventUIBattleScenesAvailable = 787,
    eEventUIBattleScenesNotAvailable = 788,
    eEventNet_XBLiveToggleAppearOnline = 789,
    eEventSys_ReturnPrevScreen = 790,
    eEventSys_Nope = 791,
    eEventDispatcher_SubtitlesOn = 792,
    eEventDispatcher_SubtitlesOff = 793,
    eEventUISetBoxMapping = 794,
    eEventTBoxPlayerEjected = 795,
    eEventDamagePlayer = 796,
    eEventFirstHealthPickup = 797,
    eEventTokenPickupComplete = 798,
    eEventDispatcher_LoadSavePromptDead = 799,
    eEventUIFlipVisibility = 800,
    eEventNet_XBLiveRebootToDashboard = 801,
    eEventFirstPowerupPoint = 802,
    eEventCount = 803,
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
// total size: 0x18
class NMEShadParms {
    // Members
public:
    class SimpShadParm simpshad; // offset 0x0, size 0xC
    class FullShadParm fullshad; // offset 0xC, size 0x4
    class ShadowRadii shadrad; // offset 0x10, size 0x8
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
enum eDamage {
    eDamageNone = 0,
    eDamage1 = 1,
    eDamage2 = 2,
    eDamage3 = 3,
    eDamageMax = 4,
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
// total size: 0xC
class UpdateInfo {
    // Members
public:
    signed int frq_ribJoint; // offset 0x0, size 0x4
    float alf_master; // offset 0x4, size 0x4
    float scl_master; // offset 0x8, size 0x4
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
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        class xAnimState * aim; // offset 0x0, size 0x4
        class xAnimState * fire; // offset 0x4, size 0x4
        class xAnimState * fire2; // offset 0x8, size 0x4
        class xAnimState * idle; // offset 0xC, size 0x4
    } player; // offset 0x0, size 0x10
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        class xAnimState * fire; // offset 0x0, size 0x4
        class xAnimState * fly; // offset 0x4, size 0x4
    } missle; // offset 0x10, size 0x8
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x44
class /* @class */ {
    // Members
public:
    float glow_size; // offset 0x0, size 0x4
    float time_fade; // offset 0x4, size 0x4
    float time_glow; // offset 0x8, size 0x4
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float size; // offset 0x0, size 0x4
        float du; // offset 0x4, size 0x4
        float dv; // offset 0x8, size 0x4
    } swirl; // offset 0xC, size 0xC
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float size; // offset 0x0, size 0x4
        float du; // offset 0x4, size 0x4
        float dv; // offset 0x8, size 0x4
    } wind; // offset 0x18, size 0xC
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        float size; // offset 0x0, size 0x4
    } reticle; // offset 0x24, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        float size; // offset 0x0, size 0x4
    } target; // offset 0x28, size 0x4
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        signed int font; // offset 0x0, size 0x4
        float font_width; // offset 0x4, size 0x4
        float font_height; // offset 0x8, size 0x4
        float x; // offset 0xC, size 0x4
        float y; // offset 0x10, size 0x4
        float glow_size; // offset 0x14, size 0x4
    } timer; // offset 0x2C, size 0x18
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
// total size: 0xC
class SimpShadParm {
    // Members
public:
    float rad_shadow; // offset 0x0, size 0x4
    char * nam_shadowTexture; // offset 0x4, size 0x4
    class RwRaster * rast_shadow; // offset 0x8, size 0x4
};
// total size: 0xC
class state_camera_restore : public state_type {
    // Members
public:
    float control_delay; // offset 0x8, size 0x4
};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x10
class zTimerBase {
    // Members
public:
    float mCurrentTime; // offset 0x0, size 0x4
    float mDuration; // offset 0x4, size 0x4
    unsigned int mFlags; // offset 0x8, size 0x4
    void (* mTimeOutCB)(class zTimerBase *); // offset 0xC, size 0x4
};
// total size: 0x0
class zReactiveAnimationData {};
// total size: 0x1C
class state_player_halt : public state_type {
    // Members
public:
    unsigned char first_update; // offset 0x8, size 0x1
    float time; // offset 0xC, size 0x4
    class xVec3 last_motion; // offset 0x10, size 0xC
};
// total size: 0x18
class hook_type : public xBase {
    // Members
public:
    class hook_asset * asset; // offset 0x10, size 0x4
    class xEnt * ent; // offset 0x14, size 0x4
};
// total size: 0x0
class NURBS {};
// total size: 0x2C
class xPlatformSpringboardData {
    // Members
public:
    float jmph[3]; // offset 0x0, size 0xC
    float jmpbounce; // offset 0xC, size 0x4
    unsigned int animID[3]; // offset 0x10, size 0xC
    class xVec3 jmpdir; // offset 0x1C, size 0xC
    unsigned int springflags; // offset 0x28, size 0x4
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
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
// total size: 0x18
class zEntButtonAsset {
    // Members
public:
    unsigned int modelPressedInfoID; // offset 0x0, size 0x4
    unsigned int actMethod; // offset 0x4, size 0x4
    signed int initButtonState; // offset 0x8, size 0x4
    signed int isReset; // offset 0xC, size 0x4
    float resetDelay; // offset 0x10, size 0x4
    unsigned int buttonActFlags; // offset 0x14, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x14
class zPlayerCommentTimer : public zTimerBase {
    // Members
public:
    enum _tagePlayerStreamSnd mSound; // offset 0x10, size 0x4
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
class xParCmdAsset {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x8
class xParCmd {
    // Members
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
// total size: 0xC
class xMarkerAsset {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
};
// total size: 0x0
class zReactiveGenre {};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
};
enum _tagePlayerSnd {
    ePlayerSnd_Invalid = 0,
    ePlayerSnd_Land = 1,
    ePlayerSnd_Jump = 2,
    ePlayerSnd_DoubleJump = 3,
    ePlayerSnd_BowlWindup = 4,
    ePlayerSnd_BowlRelease = 5,
    ePlayerSnd_BubbleBashStart = 6,
    ePlayerSnd_BubbleBashHit1 = 7,
    ePlayerSnd_BubbleBashHitStart = 7,
    ePlayerSnd_BubbleBashHit2 = 8,
    ePlayerSnd_BubbleBashHitEnd = 8,
    ePlayerSnd_BubbleWand = 9,
    ePlayerSnd_CruiseStart = 10,
    ePlayerSnd_CruiseNavigate = 11,
    ePlayerSnd_CruiseHit = 12,
    ePlayerSnd_BounceStrike = 13,
    ePlayerSnd_BoulderStart = 14,
    ePlayerSnd_BoulderRoll = 15,
    ePlayerSnd_BoulderEnd = 16,
    ePlayerSnd_BellyMelee = 17,
    ePlayerSnd_BellySmash = 18,
    ePlayerSnd_Lift1 = 19,
    ePlayerSnd_Throw = 20,
    ePlayerSnd_Chop = 21,
    ePlayerSnd_Kick = 22,
    ePlayerSnd_Heli = 23,
    ePlayerSnd_LassoThrow = 24,
    ePlayerSnd_LassoYank = 25,
    ePlayerSnd_LassoStretch = 26,
    ePlayerSnd_Ouch = 27,
    ePlayerSnd_Death = 28,
    ePlayerSnd_FruitCrackle = 29,
    ePlayerSnd_CheckPoint = 30,
    ePlayerSnd_PickupSpatula = 31,
    ePlayerSnd_PickupUnderwear = 32,
    ePlayerSnd_Bus = 33,
    ePlayerSnd_Taxi = 34,
    ePlayerSnd_SlideLoop = 35,
    ePlayerSnd_BeginBungee = 36,
    ePlayerSnd_BungeeWind = 36,
    ePlayerSnd_BungeeAttach = 37,
    ePlayerSnd_BungeeRelease = 38,
    ePlayerSnd_EndBungee = 38,
    ePlayerSnd_PickupSpatulaComment = 39,
    ePlayerSnd_BungeeDive = 40,
    ePlayerSnd_Sneak = 41,
    ePlayerSnd_SlipLoop = 42,
    ePlayerSnd_BubbleBashMiss = 43,
    ePlayerSnd_WallJumpLand = 44,
    ePlayerSnd_CartwheelLoop = 45,
    ePlayerSnd_HammerThrow = 46,
    ePlayerSnd_HammerThrowLoop = 47,
    ePlayerSnd_GauntletTick = 48,
    ePlayerSnd_Cartwheel2Loop = 49,
    ePlayerSnd_MeleeDeflect = 50,
    ePlayerSnd_BellySmash2 = 51,
    ePlayerSnd_Total = 52,
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    class xAnimState * aim; // offset 0x0, size 0x4
    class xAnimState * fire; // offset 0x4, size 0x4
    class xAnimState * fire2; // offset 0x8, size 0x4
    class xAnimState * idle; // offset 0xC, size 0x4
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
// total size: 0x14
class quadrant_set {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
    unsigned int arcs; // offset 0x8, size 0x4
    float ring; // offset 0xC, size 0x4
    float arc; // offset 0x10, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float halt_time; // offset 0x0, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float turn_speed; // offset 0x0, size 0x4
        float anim_delta; // offset 0x4, size 0x4
    } aim; // offset 0x4, size 0x8
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        float delay_wand; // offset 0x0, size 0x4
    } fire; // offset 0xC, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float hit_radius; // offset 0x0, size 0x4
    float hit_radius_super; // offset 0x4, size 0x4
    float hit_duration; // offset 0x8, size 0x4
};
// total size: 0x70
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state; // offset 0x4, size 0x4
    class state_type * states[4]; // offset 0x8, size 0x10
    unsigned char control; // offset 0x18, size 0x1
    float camlerp; // offset 0x1C, size 0x4
    float out_time; // offset 0x20, size 0x4
    float max_out_time; // offset 0x24, size 0x4
    float reset_time; // offset 0x28, size 0x4
    class xModelInstance * model; // offset 0x2C, size 0x4
    class xVec2 loc; // offset 0x30, size 0x8
    class xVec2 dir; // offset 0x38, size 0x8
    float fade_alpha; // offset 0x40, size 0x4
    unsigned char render_hand; // offset 0x44, size 0x1
    unsigned char vertical; // offset 0x45, size 0x1
    unsigned char first_reset_frame; // offset 0x46, size 0x1
    float vel; // offset 0x48, size 0x4
    float accel; // offset 0x4C, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        float near_d; // offset 0x0, size 0x4
        float near_h; // offset 0x4, size 0x4
        float near_pitch; // offset 0x8, size 0x4
        float far_d; // offset 0xC, size 0x4
        float far_h; // offset 0x10, size 0x4
        float far_pitch; // offset 0x14, size 0x4
        class xMat4x3 * tgt_mat; // offset 0x18, size 0x4
        class xMat4x3 * tgt_omat; // offset 0x1C, size 0x4
    } cam_data; // offset 0x50, size 0x20
};
// total size: 0x4
class xPlatformSplineData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
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
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    float env_alpha; // offset 0x0, size 0x4
    float env_coeff; // offset 0x4, size 0x4
    unsigned int env_texture; // offset 0x8, size 0x4
    float fresnel_alpha; // offset 0xC, size 0x4
    float fresnel_coeff; // offset 0x10, size 0x4
    unsigned int fresnel_texture; // offset 0x14, size 0x4
};
// total size: 0x4
class HazGone : public HAZNotify {};
// total size: 0x24
class Speed {
    // Members
public:
    float spd_emitBase; // offset 0x0, size 0x4
    float spd_emitRand; // offset 0x4, size 0x4
    float spd_outBase; // offset 0x8, size 0x4
    float spd_outRand; // offset 0xC, size 0x4
    float acc_emitaxis; // offset 0x10, size 0x4
    float acc_outward; // offset 0x14, size 0x4
    class xVec3 acc_world; // offset 0x18, size 0xC
};
enum substate_enum {
    SS_INVALID = -1,
    SS_MOVING_IN = 0,
    SS_STOPPING = 1,
    SS_STOPPED = 2,
    SS_STARTING = 3,
    SS_MOVING_OUT = 4,
    SS_START_FADE_IN = 5,
    SS_FADE_IN = 6,
    MAX_SS = 7,
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
enum ent_type {
    ENT_INVALID = -1,
    ENT_NPC = 0,
    ENT_DYN = 1,
    ENT_STAT = 2,
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float time; // offset 0x0, size 0x4
    float anim_out_time; // offset 0x4, size 0x4
    float min_dist; // offset 0x8, size 0x4
    float max_dist; // offset 0xC, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float size; // offset 0x0, size 0x4
    float du; // offset 0x4, size 0x4
    float dv; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float turn_speed; // offset 0x0, size 0x4
    float anim_delta; // offset 0x4, size 0x4
};
// total size: 0x18
class InnerLightningData {
    // Members
public:
    float theta; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    class zLightning * lightning; // offset 0x8, size 0x4
    class xVec3 randomPoint; // offset 0xC, size 0xC
};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char value_def; // offset 0x0, size 0x1
};
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
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
enum texture_mode {
    TM_DEFAULT = 0,
    TM_RANDOM = 1,
    TM_CYCLE = 2,
    MAX_TM = 3,
    FORCE_INT_TM = -1,
};
// total size: 0x14
struct /* @anon5 */ {};
// total size: 0x0
class zFrag {};
enum en_npartyp {
    NPAR_TYP_UNKNOWN = 0,
    NPAR_TYP_DUMMY = 1,
    NPAR_TYP_DUSTPUFF = 2,
    NPAR_TYP_DUSTHEAT = 3,
    NPAR_TYP_RADIOACTIVE = 4,
    NPAR_TYP_FLINGVAPORS_DE = 5,
    NPAR_TYP_FLINGVAPORS_TR = 6,
    NPAR_TYP_FLINGVAPORS_JK = 7,
    NPAR_TYP_FOGBREATH = 8,
    NPAR_TYP_POPGAS = 9,
    NPAR_TYP_SPITSPRAY = 10,
    NPAR_TYP_SLIMED = 11,
    NPAR_TYP_PLASMA = 12,
    NPAR_TYP_ENERGY = 13,
    NPAR_TYP_MUZZLE = 14,
    NPAR_TYP_CLOUDS = 15,
    NPAR_TYP_EXHAUST = 16,
    NPAR_TYP_HEATED = 17,
    NPAR_TYP_NOTES = 18,
    NPAR_TYP_NOTES_UPGRADE = 19,
    NPAR_TYP_RKOWAVES = 20,
    NPAR_TYP_JETFLAME = 21,
    NPAR_TYP_JETSMOKE = 22,
    NPAR_TYP_SEASPRAY = 23,
    NPAR_TYP_SEASPLASH = 24,
    NPAR_TYP_SEAMIST = 25,
    NPAR_TYP_SEAFOG = 26,
    NPAR_TYP_SEAFOG_NOROT = 27,
    NPAR_TYP_SEASPARKLE = 28,
    NPAR_TYP_SEAFOAM = 29,
    NPAR_TYP_SEARAINBOW = 30,
    NPAR_TYP_RAIN = 31,
    NPAR_TYP_SPAWNRINGS = 32,
    NPAR_TYP_MACHRING = 33,
    NPAR_TYP_RINGS = 34,
    NPAR_TYP_SPARKS = 35,
    NPAR_TYP_COLORS = 36,
    NPAR_TYP_SPARKY = 37,
    NPAR_TYP_FOUNTAIN = 38,
    NPAR_TYP_FIRESPIRAL = 39,
    NPAR_TYP_FIREWORKS = 40,
    NPAR_TYP_NOMORE = 41,
    NPAR_TYP_FORCE = 2147483647,
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
// total size: 0xC
class xGridIterator {
    // Members
public:
    class xGridBound * * listhead; // offset 0x0, size 0x4
    class xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
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
// total size: 0x14
struct /* @anon6 */ {};
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// total size: 0x8
class xEntPickupAsset {
    // Members
public:
    unsigned int pickupHash; // offset 0x0, size 0x4
    unsigned short pickupFlags; // offset 0x4, size 0x2
    unsigned short pickupValue; // offset 0x6, size 0x2
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
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
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
// total size: 0x1C
struct /* @anon7 */ {};
// total size: 0x8
class zDestructibleStateFXList {
    // Members
public:
    unsigned int nfx; // offset 0x0, size 0x4
    class zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
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
    float hit_loss; // offset 0x0, size 0x4
    float damage_velocity; // offset 0x4, size 0x4
    float hit_velocity; // offset 0x8, size 0x4
};
// total size: 0x8
class TxtrXtra {
    // Members
public:
    class RwTexture * txtr_texture; // offset 0x0, size 0x4
    unsigned int aid_texture; // offset 0x4, size 0x4
};
enum en_haznote {
    HAZ_NOTE_DISCARD = 0,
    HAZ_NOTE_ABORT = 1,
    HAZ_NOTE_HITPLAYER = 2,
    HAZ_NOTE_RECONFIG = 3,
    HAZ_NOTE_NOMORE = 4,
    HAZ_NOTE_FORCE = 2147483647,
};
// total size: 0x8
class out_state_type : public state_type {};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
class SparkyCurve {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
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
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
// total size: 0x60
class state_camera_seize : public state_type {
    // Members
public:
    float blend_time; // offset 0x8, size 0x4
    class xVec3 start_loc; // offset 0xC, size 0xC
    class xQuat start_dir; // offset 0x20, size 0x10
    class xQuat end_dir; // offset 0x30, size 0x10
    class xQuat cur_dir; // offset 0x40, size 0x10
    float last_s; // offset 0x50, size 0x4
    float fov; // offset 0x54, size 0x4
    float wipe_bubbles; // offset 0x58, size 0x4
};
// total size: 0x808
class fixed_queue {
    // Members
public:
    unsigned int _first; // offset 0x0, size 0x4
    unsigned int _last; // offset 0x4, size 0x4
    class missle_record_data _buffer[128]; // offset 0x8, size 0x800
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
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
enum ePlayerNMEDamage {
    ePlayerNMEDamageDefault = 0,
    ePlayerNMEDamageEnemyLaserBeam = 1,
    ePlayerNMEDamageEnemyProjectile = 2,
    ePlayerNMEDamageEnemyParticle = 3,
    ePlayerNMEDamageCount = 4,
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
// total size: 0x20
class xCutsceneMgr : public xBase {
    // Members
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
};
// total size: 0x50
class unit_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char curve_index; // offset 0x1, size 0x1
    unsigned char u; // offset 0x2, size 0x1
    unsigned char v; // offset 0x3, size 0x1
    float frac; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float cull_size; // offset 0xC, size 0x4
    class xMat4x3 mat; // offset 0x10, size 0x40
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x80
class HAZBang : public HAZTypical {
    // Members
public:
    class xEnt * ent; // offset 0x50, size 0x4
    class xVec3 offset; // offset 0x54, size 0xC
    class xVec3 offsetRot; // offset 0x60, size 0xC
    class xVec3 targetOffsetRot; // offset 0x6C, size 0xC
    signed int state; // offset 0x78, size 0x4
};
// total size: 0xC
class xEntMotionSplineData {
    // Members
public:
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0x4
class xPlatformMPData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
// total size: 0x1C
struct /* @anon8 */ {};
// total size: 0x4
class FullShadParm {
    // Members
public:
    signed int tobeDetermined; // offset 0x0, size 0x4
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
enum eLimb {
    eLeftHand = 0,
    eRightHand = 1,
    eLeftFoot = 2,
    eRightFoot = 3,
    eLimbCount = 4,
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
struct /* @anon9 */ {};
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0x90
class HAZLob : public HAZCollide {
    // Members
public:
    class xVec3 pos_tgt; // offset 0x80, size 0xC
};
// total size: 0x8
class xDestructibleAssetAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0x1C
class drop_asset : public xDynAsset {
    // Members
public:
    unsigned int marker; // offset 0x10, size 0x4
    unsigned int set_view_angle; // offset 0x14, size 0x4
    float view_angle; // offset 0x18, size 0x4
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
class xPlatformTeeterData {
    // Members
public:
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    class xAnimState * fire; // offset 0x0, size 0x4
    class xAnimState * fly; // offset 0x4, size 0x4
};
// total size: 0x8
class state_player_wait : public state_type {};
// total size: 0x1C
struct /* @anon10 */ {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x28
class config {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    unsigned int blend_src; // offset 0x8, size 0x4
    unsigned int blend_dst; // offset 0xC, size 0x4
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        class xVec2 uv[2]; // offset 0x0, size 0x10
        unsigned char rows; // offset 0x10, size 0x1
        unsigned char cols; // offset 0x11, size 0x1
        enum texture_mode mode; // offset 0x14, size 0x4
    } texture; // offset 0x10, size 0x18
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
// total size: 0x1D0
class tweak_group {
    // Members
public:
    float aim_delay; // offset 0x0, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float halt_time; // offset 0x0, size 0x4
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            float turn_speed; // offset 0x0, size 0x4
            float anim_delta; // offset 0x4, size 0x4
        } aim; // offset 0x4, size 0x8
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            float delay_wand; // offset 0x0, size 0x4
        } fire; // offset 0xC, size 0x4
    } player; // offset 0x4, size 0x10
    // total size: 0x68
    class /* @class */ {
        // Members
    public:
        float life; // offset 0x0, size 0x4
        float hit_dist; // offset 0x4, size 0x4
        float crash_angle; // offset 0x8, size 0x4
        float collide_twist; // offset 0xC, size 0x4
        signed int hit_tests; // offset 0x10, size 0x4
        // total size: 0x1C
        class /* @class */ {
            // Members
        public:
            float delay_show; // offset 0x0, size 0x4
            float delay_show_super; // offset 0x4, size 0x4
            float delay_fly; // offset 0x8, size 0x4
            float delay_fly_super; // offset 0xC, size 0x4
            class xVec3 offset; // offset 0x10, size 0xC
        } appear; // offset 0x14, size 0x1C
        // total size: 0x2C
        class /* @class */ {
            // Members
        public:
            float accel; // offset 0x0, size 0x4
            float max_vel; // offset 0x4, size 0x4
            float engine_pitch_max; // offset 0x8, size 0x4
            float engine_pitch_sensitivity; // offset 0xC, size 0x4
            float flash_interval; // offset 0x10, size 0x4
            // total size: 0x18
            class /* @class */ {
                // Members
            public:
                float xdelta; // offset 0x0, size 0x4
                float ydelta; // offset 0x4, size 0x4
                float xdecay; // offset 0x8, size 0x4
                float ydecay; // offset 0xC, size 0x4
                float ybound; // offset 0x10, size 0x4
                float roll_frac; // offset 0x14, size 0x4
            } turn; // offset 0x14, size 0x18
        } fly; // offset 0x30, size 0x2C
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float hit_radius; // offset 0x0, size 0x4
            float hit_radius_super; // offset 0x4, size 0x4
            float hit_duration; // offset 0x8, size 0x4
        } explode; // offset 0x5C, size 0xC
    } missle; // offset 0x14, size 0x68
    // total size: 0x60
    class /* @class */ {
        // Members
    public:
        // total size: 0x24
        class /* @class */ {
            // Members
        public:
            float dist; // offset 0x0, size 0x4
            float height; // offset 0x4, size 0x4
            float pitch; // offset 0x8, size 0x4
            float accel; // offset 0xC, size 0x4
            float max_vel; // offset 0x10, size 0x4
            float stick_decel; // offset 0x14, size 0x4
            float stick_accel; // offset 0x18, size 0x4
            float stick_max_vel; // offset 0x1C, size 0x4
            float turn_speed; // offset 0x20, size 0x4
        } aim; // offset 0x0, size 0x24
        // total size: 0x18
        class /* @class */ {
            // Members
        public:
            float delay; // offset 0x0, size 0x4
            float delay_super; // offset 0x4, size 0x4
            float blend_time; // offset 0x8, size 0x4
            float fade_dist; // offset 0xC, size 0x4
            float hide_dist; // offset 0x10, size 0x4
            float fov; // offset 0x14, size 0x4
        } seize; // offset 0x24, size 0x18
        // total size: 0x20
        class /* @class */ {
            // Members
        public:
            float duration; // offset 0x0, size 0x4
            float min_duration; // offset 0x4, size 0x4
            float min_dist; // offset 0x8, size 0x4
            float cut_dist; // offset 0xC, size 0x4
            float drift_dist; // offset 0x10, size 0x4
            float drift_softness; // offset 0x14, size 0x4
            float jerk_offset; // offset 0x18, size 0x4
            float jerk_deflect; // offset 0x1C, size 0x4
        } survey; // offset 0x3C, size 0x20
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            float control_delay; // offset 0x0, size 0x4
        } restore; // offset 0x5C, size 0x4
    } camera; // offset 0x7C, size 0x60
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        float env_alpha; // offset 0x0, size 0x4
        float env_coeff; // offset 0x4, size 0x4
        unsigned int env_texture; // offset 0x8, size 0x4
        float fresnel_alpha; // offset 0xC, size 0x4
        float fresnel_coeff; // offset 0x10, size 0x4
        unsigned int fresnel_texture; // offset 0x14, size 0x4
    } material; // offset 0xDC, size 0x18
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        float dist_min; // offset 0x0, size 0x4
        float dist_max; // offset 0x4, size 0x4
        float ang_show; // offset 0x8, size 0x4
        float ang_hide; // offset 0xC, size 0x4
        float ang_show_super; // offset 0x10, size 0x4
        float ang_hide_super; // offset 0x14, size 0x4
        float delay_retarget; // offset 0x18, size 0x4
    } reticle; // offset 0xF4, size 0x1C
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float sample_rate; // offset 0x0, size 0x4
        float bubble_rate; // offset 0x4, size 0x4
        float bubble_emit_radius; // offset 0x8, size 0x4
        float wake_emit_radius; // offset 0xC, size 0x4
    } trail; // offset 0x110, size 0x10
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        unsigned int emit; // offset 0x0, size 0x4
        float radius; // offset 0x4, size 0x4
        float vel; // offset 0x8, size 0x4
        float rand_vel; // offset 0xC, size 0x4
    } blast; // offset 0x120, size 0x10
    // total size: 0x24
    class /* @class */ {
        // Members
    public:
        float dist_min; // offset 0x0, size 0x4
        float dist_max; // offset 0x4, size 0x4
        unsigned int emit_min; // offset 0x8, size 0x4
        unsigned int emit_max; // offset 0xC, size 0x4
        float vel_min; // offset 0x10, size 0x4
        float vel_max; // offset 0x14, size 0x4
        float vel_perturb; // offset 0x18, size 0x4
        float vel_angle; // offset 0x1C, size 0x4
        float rot_vel_max; // offset 0x20, size 0x4
    } droplet; // offset 0x130, size 0x24
    // total size: 0x44
    class /* @class */ {
        // Members
    public:
        float glow_size; // offset 0x0, size 0x4
        float time_fade; // offset 0x4, size 0x4
        float time_glow; // offset 0x8, size 0x4
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float size; // offset 0x0, size 0x4
            float du; // offset 0x4, size 0x4
            float dv; // offset 0x8, size 0x4
        } swirl; // offset 0xC, size 0xC
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float size; // offset 0x0, size 0x4
            float du; // offset 0x4, size 0x4
            float dv; // offset 0x8, size 0x4
        } wind; // offset 0x18, size 0xC
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            float size; // offset 0x0, size 0x4
        } reticle; // offset 0x24, size 0x4
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            float size; // offset 0x0, size 0x4
        } target; // offset 0x28, size 0x4
        // total size: 0x18
        class /* @class */ {
            // Members
        public:
            signed int font; // offset 0x0, size 0x4
            float font_width; // offset 0x4, size 0x4
            float font_height; // offset 0x8, size 0x4
            float x; // offset 0xC, size 0x4
            float y; // offset 0x10, size 0x4
            float glow_size; // offset 0x14, size 0x4
        } timer; // offset 0x2C, size 0x18
    } hud; // offset 0x154, size 0x44
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float freq; // offset 0x0, size 0x4
        float decay; // offset 0x4, size 0x4
        float min_freq; // offset 0x8, size 0x4
    } dialog; // offset 0x198, size 0xC
    void * context; // offset 0x1A4, size 0x4
    class tweak_callback cb_missle_model; // offset 0x1A8, size 0x28
};
// total size: 0x24
class zCutsceneMgr : public xCutsceneMgr {
    // Members
public:
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    float delay_wand; // offset 0x0, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float size; // offset 0x0, size 0x4
    float du; // offset 0x4, size 0x4
    float dv; // offset 0x8, size 0x4
};
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0xC
class curve_node {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
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
// total size: 0x1C
struct /* @anon11 */ {};
// total size: 0x4C
class RibData {
    // Members
public:
    class Flags flags; // offset 0x0, size 0x4
    class CfgInfo cfginfo; // offset 0x4, size 0x34
    class UpdateInfo updinfo; // offset 0x38, size 0xC
    class TxtrXtra txtrxtra; // offset 0x44, size 0x8
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
// total size: 0x60
class zNMEAsset : public xDynAsset {
    // Members
public:
    class xEntAsset ent_asset; // offset 0x10, size 0x50
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
// total size: 0x10
class xFFX {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class xEnt *, class xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
// total size: 0x7C
class tagFixed {
    // Members
public:
    float out_time; // offset 0x0, size 0x4
    float reset_time; // offset 0x4, size 0x4
    float cam_dist; // offset 0x8, size 0x4
    float cam_height; // offset 0xC, size 0x4
    float cam_pitch; // offset 0x10, size 0x4
    float reorient_time; // offset 0x14, size 0x4
    char * hand_model; // offset 0x18, size 0x4
    class xVec2 in_loc; // offset 0x1C, size 0x8
    class xVec2 out_loc; // offset 0x24, size 0x8
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        float in_wait_time; // offset 0x0, size 0x4
        float in_vel; // offset 0x4, size 0x4
        float in_stop_dist; // offset 0x8, size 0x4
        float out_wait_time; // offset 0xC, size 0x4
        float out_vel; // offset 0x10, size 0x4
        float out_start_dist; // offset 0x14, size 0x4
        float fade_start_time; // offset 0x18, size 0x4
        float fade_time; // offset 0x1C, size 0x4
    } grab; // offset 0x2C, size 0x20
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        float in_vel; // offset 0x0, size 0x4
        float in_stop_dist; // offset 0x4, size 0x4
        float out_wait_time; // offset 0x8, size 0x4
        float out_vel; // offset 0xC, size 0x4
        float out_start_dist; // offset 0x10, size 0x4
        float fade_start_time; // offset 0x14, size 0x4
        float fade_time; // offset 0x18, size 0x4
    } drop; // offset 0x4C, size 0x1C
    float hand_size_x; // offset 0x68, size 0x4
    float hand_size_y; // offset 0x6C, size 0x4
    float hand_yaw; // offset 0x70, size 0x4
    float hand_pitch; // offset 0x74, size 0x4
    float hand_roll; // offset 0x78, size 0x4
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
class zAssetPickupTable {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
// total size: 0x8C
class hook_asset : public xDynAsset {
    // Members
public:
    unsigned int entity; // offset 0x10, size 0x4
    class xVec3 center; // offset 0x14, size 0xC
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float dist; // offset 0x0, size 0x4
        float travel_time; // offset 0x4, size 0x4
    } attach; // offset 0x20, size 0x8
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float dist; // offset 0x0, size 0x4
        float free_fall_time; // offset 0x4, size 0x4
        float accel; // offset 0x8, size 0x4
    } detach; // offset 0x28, size 0xC
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float spring; // offset 0x0, size 0x4
        float decay; // offset 0x4, size 0x4
    } turn; // offset 0x34, size 0x8
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        float frequency; // offset 0x0, size 0x4
        float gravity; // offset 0x4, size 0x4
        float dive; // offset 0x8, size 0x4
        float min_dist; // offset 0xC, size 0x4
        float max_dist; // offset 0x10, size 0x4
        float damp; // offset 0x14, size 0x4
    } vertical; // offset 0x3C, size 0x18
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        float max_dist; // offset 0x0, size 0x4
    } horizontal; // offset 0x54, size 0x4
    // total size: 0x28
    class /* @class */ {
        // Members
    public:
        float rest_dist; // offset 0x0, size 0x4
        float view_angle; // offset 0x4, size 0x4
        float offset; // offset 0x8, size 0x4
        float offset_dir; // offset 0xC, size 0x4
        float turn_speed; // offset 0x10, size 0x4
        float vel_scale; // offset 0x14, size 0x4
        float roll_speed; // offset 0x18, size 0x4
        class xVec3 speed; // offset 0x1C, size 0xC
    } camera; // offset 0x58, size 0x28
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float hit_loss; // offset 0x0, size 0x4
        float damage_velocity; // offset 0x4, size 0x4
        float hit_velocity; // offset 0x8, size 0x4
    } collision; // offset 0x80, size 0xC
};
// total size: 0x10
class CurveInfo {
    // Members
public:
    class SparkyCurve * curveData; // offset 0x0, size 0x4
    signed int curveSize; // offset 0x4, size 0x4
    float alf_master; // offset 0x8, size 0x4
    float scl_master; // offset 0xC, size 0x4
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
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int level; // offset 0x0, size 0x4
    unsigned int total; // offset 0x4, size 0x4
};
// total size: 0x8
class hoverData {
    // Members
public:
    float tmr_hovBubDelay; // offset 0x0, size 0x4
    float tmr_hovBubEmit; // offset 0x4, size 0x4
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
enum _tagePlayerStreamSnd {
    ePlayerStreamSnd_Invalid = 0,
    ePlayerStreamSnd_PickupSock = 1,
    ePlayerStreamSnd_UnderwearComment = 2,
    ePlayerStreamSnd_EnterScene1 = 3,
    ePlayerStreamSnd_EnterScene2 = 4,
    ePlayerStreamSnd_EnterScene3 = 5,
    ePlayerStreamSnd_EnterScene4 = 6,
    ePlayerStreamSnd_EnterScene5 = 7,
    ePlayerStreamSnd_SpatulaComment1 = 8,
    ePlayerStreamSnd_ShinyComment = 9,
    ePlayerStreamSnd_SpongeBallComment = 10,
    ePlayerStreamSnd_CruiseComment = 11,
    ePlayerStreamSnd_BowlComment1 = 12,
    ePlayerStreamSnd_BowlComment2 = 13,
    ePlayerStreamSnd_BowlComment3 = 14,
    ePlayerStreamSnd_PushButton = 15,
    ePlayerStreamSnd_BellySmashComment = 16,
    ePlayerStreamSnd_ChopComment = 17,
    ePlayerStreamSnd_KickComment = 18,
    ePlayerStreamSnd_RopingComment = 19,
    ePlayerStreamSnd_HeliComment = 20,
    ePlayerStreamSnd_DestroyTiki = 21,
    ePlayerStreamSnd_DestroyRobot = 22,
    ePlayerStreamSnd_SeeWoodTiki = 23,
    ePlayerStreamSnd_SeeLoveyTiki = 24,
    ePlayerStreamSnd_SeeShhhTiki = 25,
    ePlayerStreamSnd_SeeThunderTiki = 26,
    ePlayerStreamSnd_SeeStoneTiki = 27,
    ePlayerStreamSnd_SeePatrickBoss1 = 28,
    ePlayerStreamSnd_SeePatrickBoss2 = 29,
    ePlayerStreamSnd_SeeSpongeBobBoss = 30,
    ePlayerStreamSnd_SeeRobotPlankton = 31,
    ePlayerStreamSnd_PickupSpecialGeneric1 = 32,
    ePlayerStreamSnd_PickupSpecialGeneric2 = 33,
    ePlayerStreamSnd_GoldenUnderwear = 34,
    ePlayerStreamSnd_Combo = 35,
    ePlayerStreamSnd_BigCombo1 = 36,
    ePlayerStreamSnd_BigCombo2 = 37,
    ePlayerStreamSnd_BigCombo3 = 38,
    ePlayerStreamSnd_BigCombo4 = 39,
    ePlayerStreamSnd_BigCombo5 = 40,
    ePlayerStreamSnd_Lift1 = 41,
    ePlayerStreamSnd_Exclaim = 42,
    ePlayerStreamSnd_BeginBungee = 43,
    ePlayerStreamSnd_BungeeAttachComment = 43,
    ePlayerStreamSnd_BungeeBeginDive = 44,
    ePlayerStreamSnd_BungeeDive1 = 44,
    ePlayerStreamSnd_BungeeDive2 = 45,
    ePlayerStreamSnd_BungeeEndDive = 45,
    ePlayerStreamSnd_BungeeDeath = 46,
    ePlayerStreamSnd_SharedSpaceStart = 47,
    ePlayerStreamSnd_SBKarateSpin = 47,
    ePlayerStreamSnd_MeleeDeflect = 48,
    ePlayerStreamSnd_SBKarateDeflect = 48,
    ePlayerStreamSnd_SBHelmetBash = 49,
    ePlayerStreamSnd_SBHelmetEmbedded = 50,
    ePlayerStreamSnd_SBUnderWearBungee = 51,
    ePlayerStreamSnd_SBBowl = 52,
    ePlayerStreamSnd_SBMachoBowl = 53,
    ePlayerStreamSnd_SBSonicGuitar = 54,
    ePlayerStreamSnd_SBSonicGuitarReleased = 55,
    ePlayerStreamSnd_SBSpongeBallMove = 56,
    ePlayerStreamSnd_SBLastSharedEnum = 56,
    ePlayerStreamSnd_PatBellyBounce = 47,
    ePlayerStreamSnd_PatBellyDeflect = 48,
    ePlayerStreamSnd_PatCartwheel = 49,
    ePlayerStreamSnd_PatTongueSwing = 50,
    ePlayerStreamSnd_PatLift = 51,
    ePlayerStreamSnd_PatCarry = 52,
    ePlayerStreamSnd_PatThrow = 53,
    ePlayerStreamSnd_PatHammerThrowRelease = 54,
    ePlayerStreamSnd_PatBellyFlop = 55,
    ePlayerStreamSnd_PatBellyFlopStun = 56,
    ePlayerStreamSnd_PatLastSharedEnum = 56,
    ePlayerStreamSnd_Waiting = 57,
    ePlayerStreamSnd_Jumping = 58,
    ePlayerStreamSnd_IntoGoo = 59,
    ePlayerStreamSnd_Icy = 60,
    ePlayerStreamSnd_Defeated = 61,
    ePlayerStreamSnd_StartingOut = 62,
    ePlayerStreamSnd_RunningLong = 63,
    ePlayerStreamSnd_LedgeHang = 64,
    ePlayerStreamSnd_WallJump = 65,
    ePlayerStreamSnd_UpgradeComment1 = 66,
    ePlayerStreamSnd_UpgradeCommentsBase = 66,
    ePlayerStreamSnd_UpgradeComment2 = 67,
    ePlayerStreamSnd_UpgradeComment3 = 68,
    ePlayerStreamSnd_UpgradeComment4 = 69,
    ePlayerStreamSnd_UpgradeComment4Health = 70,
    ePlayerStreamSnd_UpgradeCommentsHealthBase = 70,
    ePlayerStreamSnd_UpgradeComment5Health = 71,
    ePlayerStreamSnd_UpgradeComment6Health = 72,
    ePlayerStreamSnd_Laughing = 73,
    ePlayerStreamSnd_SuggestOtherCharacter = 74,
    ePlayerStreamSnd_SmashTiki = 75,
    ePlayerStreamSnd_SmashWoodTiki = 76,
    ePlayerStreamSnd_SmashLoveyTiki = 77,
    ePlayerStreamSnd_SmashShrinkyTiki = 78,
    ePlayerStreamSnd_SmashExplodeTiki = 79,
    ePlayerStreamSnd_SmashSteelTiki = 80,
    ePlayerStreamSnd_EnemyDefeated = 81,
    ePlayerStreamSnd_SeeFogger = 82,
    ePlayerStreamSnd_SeeSlammer = 83,
    ePlayerStreamSnd_SeePopper = 84,
    ePlayerStreamSnd_SeeSpinner = 85,
    ePlayerStreamSnd_SeeFlinger = 86,
    ePlayerStreamSnd_SeeMiniMerv = 87,
    ePlayerStreamSnd_SeeTurret = 88,
    ePlayerStreamSnd_SeeJellyFish = 89,
    ePlayerStreamSnd_SeeMervyn = 90,
    ePlayerStreamSnd_SeeBucketotron = 91,
    ePlayerStreamSnd_GotManliness = 92,
    ePlayerStreamSnd_GotHealth = 93,
    ePlayerStreamSnd_GotGGToken = 94,
    ePlayerStreamSnd_GotTreasureChest = 95,
    ePlayerStreamSnd_Total = 96,
};
// total size: 0x60
class /* @class */ {
    // Members
public:
    // total size: 0x24
    class /* @class */ {
        // Members
    public:
        float dist; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
        float pitch; // offset 0x8, size 0x4
        float accel; // offset 0xC, size 0x4
        float max_vel; // offset 0x10, size 0x4
        float stick_decel; // offset 0x14, size 0x4
        float stick_accel; // offset 0x18, size 0x4
        float stick_max_vel; // offset 0x1C, size 0x4
        float turn_speed; // offset 0x20, size 0x4
    } aim; // offset 0x0, size 0x24
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        float delay; // offset 0x0, size 0x4
        float delay_super; // offset 0x4, size 0x4
        float blend_time; // offset 0x8, size 0x4
        float fade_dist; // offset 0xC, size 0x4
        float hide_dist; // offset 0x10, size 0x4
        float fov; // offset 0x14, size 0x4
    } seize; // offset 0x24, size 0x18
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        float duration; // offset 0x0, size 0x4
        float min_duration; // offset 0x4, size 0x4
        float min_dist; // offset 0x8, size 0x4
        float cut_dist; // offset 0xC, size 0x4
        float drift_dist; // offset 0x10, size 0x4
        float drift_softness; // offset 0x14, size 0x4
        float jerk_offset; // offset 0x18, size 0x4
        float jerk_deflect; // offset 0x1C, size 0x4
    } survey; // offset 0x3C, size 0x20
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        float control_delay; // offset 0x0, size 0x4
    } restore; // offset 0x5C, size 0x4
};
// total size: 0x4
class xPlatformMechData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
// total size: 0x74
class SparkyEmitter {
    // Members
public:
    enum en_npartyp useNPARtype; // offset 0x0, size 0x4
    class Flags flags; // offset 0x4, size 0x4
    class RunTime run; // offset 0x8, size 0x8
    class Size size; // offset 0x10, size 0x8
    class Damage dmg; // offset 0x18, size 0x10
    class Life life; // offset 0x28, size 0x8
    class Emit emit; // offset 0x30, size 0x10
    class Speed speed; // offset 0x40, size 0x24
    class CurveInfo curve; // offset 0x64, size 0x10
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
// total size: 0x18
class /* @class */ {
    // Members
public:
    class xVec2 uv[2]; // offset 0x0, size 0x10
    unsigned char rows; // offset 0x10, size 0x1
    unsigned char cols; // offset 0x11, size 0x1
    enum texture_mode mode; // offset 0x14, size 0x4
};
// total size: 0x1C
class /* @class */ {
    // Members
public:
    float dist_min; // offset 0x0, size 0x4
    float dist_max; // offset 0x4, size 0x4
    float ang_show; // offset 0x8, size 0x4
    float ang_hide; // offset 0xC, size 0x4
    float ang_show_super; // offset 0x10, size 0x4
    float ang_hide_super; // offset 0x14, size 0x4
    float delay_retarget; // offset 0x18, size 0x4
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
// total size: 0x1C
class iAnimSKBHeader {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    void * ExtractedData; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned int KeyCount; // offset 0xC, size 0x4
    float Scale[3]; // offset 0x10, size 0xC
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
// total size: 0x4
class xPSYNote {};
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
struct /* @anon12 */ {};
// total size: 0xC0
class rwPDS_HICloneArray {
    // Members
public:
    float mat1X; // offset 0x0, size 0x4
    float mat1Y; // offset 0x4, size 0x4
    signed int cloneFlag; // offset 0x8, size 0x4
    float mat1W; // offset 0xC, size 0x4
    float mat2X; // offset 0x10, size 0x4
    float mat2Y; // offset 0x14, size 0x4
    signed int UNUSED1; // offset 0x18, size 0x4
    float mat2W; // offset 0x1C, size 0x4
    float mat3X; // offset 0x20, size 0x4
    float mat3Y; // offset 0x24, size 0x4
    signed int UNUSED2; // offset 0x28, size 0x4
    float mat3W; // offset 0x2C, size 0x4
    float mat4X; // offset 0x30, size 0x4
    float mat4Y; // offset 0x34, size 0x4
    float mat4Z; // offset 0x38, size 0x4
    float mat4W; // offset 0x3C, size 0x4
    float colScale[4]; // offset 0x40, size 0x10
    class RwV3d lmat1; // offset 0x50, size 0xC
    float lmatposX; // offset 0x5C, size 0x4
    class RwV3d lmat2; // offset 0x60, size 0xC
    float lmatposY; // offset 0x6C, size 0x4
    class RwV3d lmat3; // offset 0x70, size 0xC
    float lmatposZ; // offset 0x7C, size 0x4
    float bonusLt0_color[3]; // offset 0x80, size 0xC
    signed int UNUSED3; // offset 0x8C, size 0x4
    class RwV3d bonusLt0_dir; // offset 0x90, size 0xC
    float bonusLt0_rad; // offset 0x9C, size 0x4
    float bonusLt1_color[3]; // offset 0xA0, size 0xC
    signed int UNUSED4; // offset 0xAC, size 0x4
    class RwV3d bonusLt1_dir; // offset 0xB0, size 0xC
    float bonusLt1_rad; // offset 0xBC, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
struct /* @anon13 */ {};
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
// total size: 0x8
class /* @class */ {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    float travel_time; // offset 0x4, size 0x4
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
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
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0x1C
struct /* @anon14 */ {};
// total size: 0x1C
struct /* @anon15 */ {};
// total size: 0x8
class ShadowRadii {
    // Members
public:
    float rad_noShadow; // offset 0x0, size 0x4
    float rad_complexShadow; // offset 0x4, size 0x4
};
// total size: 0x24
class /* @class */ {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
    float accel; // offset 0xC, size 0x4
    float max_vel; // offset 0x10, size 0x4
    float stick_decel; // offset 0x14, size 0x4
    float stick_accel; // offset 0x18, size 0x4
    float stick_max_vel; // offset 0x1C, size 0x4
    float turn_speed; // offset 0x20, size 0x4
};
enum ePlayerAnimMove {
    ANIM_MOVE_TBOX = 1,
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    float near_d; // offset 0x0, size 0x4
    float near_h; // offset 0x4, size 0x4
    float near_pitch; // offset 0x8, size 0x4
    float far_d; // offset 0xC, size 0x4
    float far_h; // offset 0x10, size 0x4
    float far_pitch; // offset 0x14, size 0x4
    class xMat4x3 * tgt_mat; // offset 0x18, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x1C, size 0x4
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
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x68
class xDecalEmitter {
    // Members
public:
    class config cfg; // offset 0x0, size 0x28
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        class RwTexture * asset; // offset 0x0, size 0x4
        unsigned int units; // offset 0x4, size 0x4
        class xVec2 size; // offset 0x8, size 0x8
        class xVec2 isize; // offset 0x10, size 0x8
        signed int prev; // offset 0x18, size 0x4
    } texture; // offset 0x28, size 0x1C
    class static_queue units; // offset 0x44, size 0x14
    class curve_node * curve; // offset 0x58, size 0x4
    unsigned int curve_size; // offset 0x5C, size 0x4
    unsigned int curve_index; // offset 0x60, size 0x4
    float ilife; // offset 0x64, size 0x4
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
// total size: 0x4
class FloatAndVoid {
    // Members
public:
    union { // inferred
        float f; // offset 0x0, size 0x4
        void * v; // offset 0x0, size 0x4
    };
};
// total size: 0x4
class Flags {
    // Members
public:
    signed char doDamage; // offset 0x0, size 0x1
    signed char useLinear; // offset 0x1, size 0x1
    signed char unused[2]; // offset 0x2, size 0x2
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
// total size: 0x8
class xEntOpacity {
    // Members
public:
    float delta_opacity; // offset 0x0, size 0x4
    float delta_opacity_2; // offset 0x4, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
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
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    float size; // offset 0x0, size 0x4
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
// total size: 0x38
class xPlatformPaddleData {
    // Members
public:
    signed int startOrient; // offset 0x0, size 0x4
    signed int countOrient; // offset 0x4, size 0x4
    float orientLoop; // offset 0x8, size 0x4
    float orient[6]; // offset 0xC, size 0x18
    unsigned int paddleFlags; // offset 0x24, size 0x4
    float rotateSpeed; // offset 0x28, size 0x4
    float accelTime; // offset 0x2C, size 0x4
    float decelTime; // offset 0x30, size 0x4
    float hubRadius; // offset 0x34, size 0x4
};
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
enum en_hazcol {
    HAZ_COLTYP_STAT = 0,
    HAZ_COLTYP_DYN = 1,
    HAZ_COLTYP_NME = 2,
    HAZ_COLTYP_NOMORE = 3,
    HAZ_COLTYP_FORCE = 2147483647,
};
// total size: 0x0
class anim_coll_data {};
// total size: 0xC
struct /* @anon16 */ {};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
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
// total size: 0x14
struct /* @anon17 */ {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
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
// total size: 0x4
class xPlatformPenData {
    // Members
public:
    signed int nodata; // offset 0x0, size 0x4
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
enum en_npcdmg {
    DMGTYP_UNDECIDED = 0,
    DMGTYP_ABOVE = 1,
    DMGTYP_BELOW = 2,
    DMGTYP_SIDE = 3,
    DMGTYP_INSTAKILL = 4,
    DMGTYP_WOUNDEVENT = 5,
    DMGTYP_KILLEVENT = 6,
    DMGTYP_NMEATTACK = 7,
    DMGTYP_HITBYTOSS = 8,
    DMGTYP_NMEKNOCKED = 9,
    DMGTYP_ROPE = 10,
    DMGTYP_CRUISEBUBBLE = 11,
    DMGTYP_FRIENDLYFIRE = 12,
    DMGTYP_REFLECTED = 13,
    DMGTYP_BOULDER = 14,
    DMGTYP_BUBBOWL = 15,
    DMGTYP_THUNDER_TIKI_EXPLOSION = 16,
    DMGTYP_DAMAGE_SURFACE = 17,
    DMGTYP_BUNGEED = 18,
    DMGTYP_SURFACE = 19,
    DMGTYP_CARTWHEEL = 20,
    DMGTYP_CARSMASH = 21,
    DMGTYP_SLIDE = 22,
    DMGTYP_EXPLOSION = 23,
    DMGTYP_BBOWLZAP = 24,
    DMGTYP_NOMORE = 25,
    DMGTYP_FORCEINT = 2147483647,
};
// total size: 0x8
class CBFXData {
    // Members
public:
    class zNMEHazard * haz_speaker; // offset 0x0, size 0x4
    class zNMEHazard * haz_flight; // offset 0x4, size 0x4
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        float rest_dist; // offset 0x0, size 0x4
        float emax; // offset 0x4, size 0x4
        float spring; // offset 0x8, size 0x4
        float alpha; // offset 0xC, size 0x4
        float omega; // offset 0x10, size 0x4
    } vertical; // offset 0x0, size 0x14
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float vscale; // offset 0x0, size 0x4
        float hscale; // offset 0x4, size 0x4
        float roll_decay; // offset 0x8, size 0x4
    } camera; // offset 0x14, size 0xC
};
// total size: 0x38
class xModelAssetInst {
    // Members
public:
    unsigned int ModelID; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned char Parent; // offset 0x6, size 0x1
    unsigned char Bone; // offset 0x7, size 0x1
    float MatRight[3]; // offset 0x8, size 0xC
    float MatUp[3]; // offset 0x14, size 0xC
    float MatAt[3]; // offset 0x20, size 0xC
    float MatPos[3]; // offset 0x2C, size 0xC
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        class xAnimTransition * aim; // offset 0x0, size 0x4
        class xAnimTransition * fire; // offset 0x4, size 0x4
        class xAnimTransition * fire2; // offset 0x8, size 0x4
        class xAnimTransition * idle; // offset 0xC, size 0x4
        class xAnimTransition * end; // offset 0x10, size 0x4
    } player; // offset 0x0, size 0x14
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xAnimTransition * fly; // offset 0x0, size 0x4
    } missle; // offset 0x14, size 0x4
};
// total size: 0x68
class /* @class */ {
    // Members
public:
    float life; // offset 0x0, size 0x4
    float hit_dist; // offset 0x4, size 0x4
    float crash_angle; // offset 0x8, size 0x4
    float collide_twist; // offset 0xC, size 0x4
    signed int hit_tests; // offset 0x10, size 0x4
    // total size: 0x1C
    class /* @class */ {
        // Members
    public:
        float delay_show; // offset 0x0, size 0x4
        float delay_show_super; // offset 0x4, size 0x4
        float delay_fly; // offset 0x8, size 0x4
        float delay_fly_super; // offset 0xC, size 0x4
        class xVec3 offset; // offset 0x10, size 0xC
    } appear; // offset 0x14, size 0x1C
    // total size: 0x2C
    class /* @class */ {
        // Members
    public:
        float accel; // offset 0x0, size 0x4
        float max_vel; // offset 0x4, size 0x4
        float engine_pitch_max; // offset 0x8, size 0x4
        float engine_pitch_sensitivity; // offset 0xC, size 0x4
        float flash_interval; // offset 0x10, size 0x4
        // total size: 0x18
        class /* @class */ {
            // Members
        public:
            float xdelta; // offset 0x0, size 0x4
            float ydelta; // offset 0x4, size 0x4
            float xdecay; // offset 0x8, size 0x4
            float ydecay; // offset 0xC, size 0x4
            float ybound; // offset 0x10, size 0x4
            float roll_frac; // offset 0x14, size 0x4
        } turn; // offset 0x14, size 0x18
    } fly; // offset 0x30, size 0x2C
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float hit_radius; // offset 0x0, size 0x4
        float hit_radius_super; // offset 0x4, size 0x4
        float hit_duration; // offset 0x8, size 0x4
    } explode; // offset 0x5C, size 0xC
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x20
class teleport_asset : public xDynAsset {
    // Members
public:
    unsigned int marker; // offset 0x10, size 0x4
    unsigned int opened; // offset 0x14, size 0x4
    unsigned int camAngle; // offset 0x18, size 0x4
    unsigned int targetID; // offset 0x1C, size 0x4
};
// total size: 0x4
class explodeData {
    // Members
public:
    signed int placeholder; // offset 0x0, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    float free_fall_time; // offset 0x4, size 0x4
    float accel; // offset 0x8, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
// total size: 0x14
class /* @class */ {
    // Members
public:
    float rest_dist; // offset 0x0, size 0x4
    float emax; // offset 0x4, size 0x4
    float spring; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float omega; // offset 0x10, size 0x4
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    float in_wait_time; // offset 0x0, size 0x4
    float in_vel; // offset 0x4, size 0x4
    float in_stop_dist; // offset 0x8, size 0x4
    float out_wait_time; // offset 0xC, size 0x4
    float out_vel; // offset 0x10, size 0x4
    float out_start_dist; // offset 0x14, size 0x4
    float fade_start_time; // offset 0x18, size 0x4
    float fade_time; // offset 0x1C, size 0x4
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
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
// total size: 0x14
class /* @class */ {
    // Members
public:
    class xAnimTransition * aim; // offset 0x0, size 0x4
    class xAnimTransition * fire; // offset 0x4, size 0x4
    class xAnimTransition * fire2; // offset 0x8, size 0x4
    class xAnimTransition * idle; // offset 0xC, size 0x4
    class xAnimTransition * end; // offset 0x10, size 0x4
};
// total size: 0x210
class state_camera_survey : public state_type {
    // Members
public:
    float time; // offset 0x8, size 0x4
    class xVec2 start_sp; // offset 0xC, size 0x8
    float path_distance[127]; // offset 0x14, size 0x1FC
};
// total size: 0x8
class state_type {
    // Members
public:
    enum state_enum type; // offset 0x0, size 0x4
};
// total size: 0x90
class /* @class */ {
    // Members
public:
    union { // inferred
        class HAZTypical typical; // offset 0x0, size 0x50
        class HAZCollide collide; // offset 0x0, size 0x80
        class HAZLob lobdata; // offset 0x0, size 0x90
        class HAZBang bang; // offset 0x0, size 0x80
        class HAZMisc misctyp; // offset 0x0, size 0x60
    };
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum en_tunefx {
    TUNE_BANG_LEFT = 0,
    TUNE_BANG_RYHT = 1,
    TUNE_SPEAKER = 2,
    TUNE_FLIGHT = 3,
    TUNE_FIZZLE = 4,
    TUNE_EXPLODE = 5,
    TUNE_NOMORE = 6,
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
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
class Damage {
    // Members
public:
    float tym_invuln; // offset 0x0, size 0x4
};
// total size: 0x8
class RunTime {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
    float fac_damp; // offset 0x4, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    float size; // offset 0x0, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x60
class HAZMisc : public HAZTypical {
    // Members
public:
    void * ptr; // offset 0x50, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
enum radius_enum {
    RADIUS_CACHE = 0,
    RADIUS_RASTER = 1,
    MAX_RADIUS = 2,
};
// total size: 0x4
class xPlatformConvBeltData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
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
class zDustRingEmitter {
    // Members
public:
    class config_type * cfg; // offset 0x0, size 0x4
    class activity_data * data; // offset 0x4, size 0x4
};
// total size: 0xC
class zHitDecalData {
    // Members
public:
    unsigned int texture; // offset 0x0, size 0x4
    float x_size; // offset 0x4, size 0x4
    float y_size; // offset 0x8, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float sample_rate; // offset 0x0, size 0x4
    float bubble_rate; // offset 0x4, size 0x4
    float bubble_emit_radius; // offset 0x8, size 0x4
    float wake_emit_radius; // offset 0xC, size 0x4
};
// total size: 0x14
class state_player_aim : public state_type {
    // Members
public:
    float yaw; // offset 0x8, size 0x4
    float yaw_vel; // offset 0xC, size 0x4
    float turn_delay; // offset 0x10, size 0x4
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
// total size: 0xC
class zSurfTextureAnim {
    // Members
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0xC
class _ShadowParams {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    float at; // offset 0x4, size 0x4
    float rad; // offset 0x8, size 0x4
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    float delay; // offset 0x0, size 0x4
    float delay_super; // offset 0x4, size 0x4
    float blend_time; // offset 0x8, size 0x4
    float fade_dist; // offset 0xC, size 0x4
    float hide_dist; // offset 0x10, size 0x4
    float fov; // offset 0x14, size 0x4
};
// total size: 0x1C
class /* @class */ {
    // Members
public:
    float delay_show; // offset 0x0, size 0x4
    float delay_show_super; // offset 0x4, size 0x4
    float delay_fly; // offset 0x8, size 0x4
    float delay_fly_super; // offset 0xC, size 0x4
    class xVec3 offset; // offset 0x10, size 0xC
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
enum iSndGroupHandle {
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
// total size: 0x8
class zEntPickup_cbData {
    // Members
public:
    class xScene * sc; // offset 0x0, size 0x4
    float dt; // offset 0x4, size 0x4
};
enum iSndHandle {
};
enum RwFrustumTestResult {
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class LevelPickupScale {
    // Members
public:
    unsigned int levelID; // offset 0x0, size 0x4
    float * scaling; // offset 0x4, size 0x4
};
enum en_haztyp {
    HAZ_TYP_UNKNOWN = 0,
    HAZ_TYP_EXPLODE = 1,
    HAZ_TYP_IMPACT = 2,
    HAZ_TYP_IMPACTWET = 3,
    HAZ_TYP_IMPACTBOOM = 4,
    HAZ_TYP_DAZED = 5,
    HAZ_TYP_SPAWNBALL_XX = 6,
    HAZ_TYP_SPAWNBALL_GG = 7,
    HAZ_TYP_SPAWNBALL_TR = 8,
    HAZ_TYP_SPAWNBALL_PT = 9,
    HAZ_TYP_SPAWNGROW = 10,
    HAZ_TYP_BUCKOBOOM_V1 = 11,
    HAZ_TYP_TIKIBOOM = 12,
    HAZ_TYP_SLAMWAVE_V1 = 13,
    HAZ_TYP_SLAMWAVE_V2 = 14,
    HAZ_TYP_SLAMWAVE_V3 = 15,
    HAZ_TYP_FLING_V1 = 16,
    HAZ_TYP_FLING_V2 = 17,
    HAZ_TYP_FLING_V3 = 18,
    HAZ_TYP_FLING_FROGFISH = 19,
    HAZ_TYP_SPITPUDDLE_V1 = 20,
    HAZ_TYP_SPITPUDDLE_V2 = 21,
    HAZ_TYP_SPITPUDDLE_V3 = 22,
    HAZ_TYP_ICECREAMSPLAT = 23,
    HAZ_TYP_SPITSTEAM = 24,
    HAZ_TYP_SPITSPLASH = 25,
    HAZ_TYP_POPPER_V1 = 26,
    HAZ_TYP_POPPER_V2 = 27,
    HAZ_TYP_POPPER_V3 = 28,
    HAZ_TYP_MERVBOMB_V1 = 29,
    HAZ_TYP_MERVBOMB_V2 = 30,
    HAZ_TYP_MERVBOMB_V3 = 31,
    HAZ_TYP_MERVLET_V1 = 32,
    HAZ_TYP_MERVLET_V2 = 33,
    HAZ_TYP_MERVLET_V3 = 34,
    HAZ_TYP_ZAPBALL_V1 = 35,
    HAZ_TYP_ZAPBALL_V2 = 36,
    HAZ_TYP_ZAPBOOM_V1 = 37,
    HAZ_TYP_ZAPBOOM_V2 = 38,
    HAZ_TYP_TURBALL_V1 = 39,
    HAZ_TYP_TURBALL_V2 = 40,
    HAZ_TYP_TURBALL_V3 = 41,
    HAZ_TYP_TURBOOM = 42,
    HAZ_TYP_GOLFBALL = 43,
    HAZ_TYP_GOLFBOOM = 44,
    HAZ_TYP_GOLFJUNK_A = 45,
    HAZ_TYP_GOLFJUNK_B = 46,
    HAZ_TYP_GOLFJUNK_C = 47,
    HAZ_TYP_GOLFJUNK_D = 48,
    HAZ_TYP_GOLFJUNK_E = 49,
    HAZ_TYP_DENNIS_KNIFE = 50,
    HAZ_TYP_DENNIS_KNIFEBOOM = 51,
    HAZ_TYP_TUNEBORN = 52,
    HAZ_TYP_TUNEBANG = 53,
    HAZ_TYP_TUNEBOOM = 54,
    HAZ_TYP_TUNEFLYT = 55,
    HAZ_TYP_SWIMWAKE = 56,
    HAZ_TYP_BOWWAVE = 57,
    HAZ_TYP_SPLASH_RING = 58,
    HAZ_TYP_SPLISH_DROP = 59,
    HAZ_TYP_VISSPLASH_WAVE = 60,
    HAZ_TYP_VISSPLASH_DROP = 61,
    HAZ_TYP_VISSPLASH_WATER = 62,
    HAZ_TYP_VISSPLASH_CHOC = 63,
    HAZ_TYP_VISSPLASH_LAVA = 64,
    HAZ_TYP_VISSPLASH_BILE = 65,
    HAZ_TYP_VISSPLASH_OIL = 66,
    HAZ_TYP_VISSPLASH_SAUCE = 67,
    HAZ_TYP_VISSPLASH_TOXIC = 68,
    HAZ_TYP_REFLECT_V1 = 69,
    HAZ_TYP_PLYRBANG_V1 = 70,
    HAZ_TYP_POWERUP_EXPLOSION_V1 = 71,
    HAZ_TYP_NOMORE = 72,
    HAZ_TYP_FORCE = 2147483647,
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
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float spring; // offset 0x0, size 0x4
    float decay; // offset 0x4, size 0x4
};
enum substate_enum {
    SS_INVALID = -1,
    SS_REORIENT = 0,
    SS_BEGIN_WAIT = 1,
    SS_MOVING_IN = 2,
    SS_STOPPING = 3,
    SS_STOPPED = 4,
    SS_STARTING = 5,
    SS_MOVING_OUT = 6,
    SS_START_FADE_OUT = 7,
    SS_FADE_OUT = 8,
    MAX_SS = 9,
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
// total size: 0x8
class Physics {
    // Members
public:
    float acc_grav; // offset 0x0, size 0x4
    float spd_maxFall; // offset 0x4, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0x18
class /* @class */ {
    // Members
public:
    signed int font; // offset 0x0, size 0x4
    float font_width; // offset 0x4, size 0x4
    float font_height; // offset 0x8, size 0x4
    float x; // offset 0xC, size 0x4
    float y; // offset 0x10, size 0x4
    float glow_size; // offset 0x14, size 0x4
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
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x1C
struct /* @anon18 */ {};
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
class activity_data {};
enum /* @enum */ {
    WallJumpResult_NoJump = 0,
    WallJumpResult_Jump = 1,
};
// total size: 0x8
class Size {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x14
class static_queue {
    // Members
public:
    unsigned int _first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int _max_size; // offset 0x8, size 0x4
    unsigned int _max_size_mask; // offset 0xC, size 0x4
    class unit_data * _buffer; // offset 0x10, size 0x4
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float vscale; // offset 0x0, size 0x4
    float hscale; // offset 0x4, size 0x4
    float roll_decay; // offset 0x8, size 0x4
};
// total size: 0x1A0
class /* @class */ {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state[3]; // offset 0x4, size 0xC
    class state_type * states[12]; // offset 0x10, size 0x30
    class xVec2 last_sp; // offset 0x40, size 0x8
    class xVec2 sp; // offset 0x48, size 0x8
    class xVec3 hit_loc; // offset 0x50, size 0xC
    class xVec3 hit_norm; // offset 0x5C, size 0xC
    class xModelInstance * missle_model; // offset 0x68, size 0x4
    class xEnt * hits[32]; // offset 0x6C, size 0x80
    signed int hits_size; // offset 0xEC, size 0x4
    unsigned int player_health; // offset 0xF0, size 0x4
    class xVec3 player_motion; // offset 0xF4, size 0xC
    float fov_default; // offset 0x100, size 0x4
    class zShrapnelAsset * droplet_shrapnel; // offset 0x104, size 0x4
    float dialog_freq; // offset 0x108, size 0x4
    float last_check_dist; // offset 0x10C, size 0x4
    // total size: 0x60
    class /* @class */ {
        // Members
    public:
        float samples; // offset 0x0, size 0x4
        float bubbles; // offset 0x4, size 0x4
        class xMat4x3 mat; // offset 0x10, size 0x40
        class xQuat dir; // offset 0x50, size 0x10
    } trail; // offset 0x110, size 0x60
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            class xAnimState * aim; // offset 0x0, size 0x4
            class xAnimState * fire; // offset 0x4, size 0x4
            class xAnimState * fire2; // offset 0x8, size 0x4
            class xAnimState * idle; // offset 0xC, size 0x4
        } player; // offset 0x0, size 0x10
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            class xAnimState * fire; // offset 0x0, size 0x4
            class xAnimState * fly; // offset 0x4, size 0x4
        } missle; // offset 0x10, size 0x8
    } astate; // offset 0x170, size 0x18
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        // total size: 0x14
        class /* @class */ {
            // Members
        public:
            class xAnimTransition * aim; // offset 0x0, size 0x4
            class xAnimTransition * fire; // offset 0x4, size 0x4
            class xAnimTransition * fire2; // offset 0x8, size 0x4
            class xAnimTransition * idle; // offset 0xC, size 0x4
            class xAnimTransition * end; // offset 0x10, size 0x4
        } player; // offset 0x0, size 0x14
        // total size: 0x4
        class /* @class */ {
            // Members
        public:
            class xAnimTransition * fly; // offset 0x0, size 0x4
        } missle; // offset 0x14, size 0x4
    } atran; // offset 0x188, size 0x18
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
enum en_tunetran {
    TUNE_TRAN_ENTER = 0,
    TUNE_TRAN_EXIT = 1,
    TUNE_TRAN_UPDATE = 2,
    TUNE_TRAN_NOMORE = 3,
};
// total size: 0x1C
struct /* @anon19 */ {};
// total size: 0x8
class xPlatformFallingData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
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
class /* @class */ {
    // Members
public:
    class xAnimTransition * fly; // offset 0x0, size 0x4
};
// total size: 0x8
class in_state_type : public state_type {};
// total size: 0x4
class xPlatformFMData {
    // Members
public:
    signed int nothingyet; // offset 0x0, size 0x4
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
// total size: 0x1C
class uv_animated_model {
    // Members
public:
    class RpAtomic * model; // offset 0x0, size 0x4
    class RwTexCoords * uv; // offset 0x4, size 0x4
    signed int uvsize; // offset 0x8, size 0x4
    class xVec2 offset; // offset 0xC, size 0x8
    class xVec2 offset_vel; // offset 0x14, size 0x8
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x14
class HAZFXRibbon {
    // Members
public:
    union { // inferred
        class xFXRibbon * ribbon; // offset 0x0, size 0x4
        class xFXRibbon * riblist[4]; // offset 0x0, size 0x10
    };
    signed int cnt_skipRibInsert; // offset 0x10, size 0x4
};
enum en_allow {
    ALLOW_NEVER = 0,
    ALLOW_NORMAL = 1,
    ALLOW_ALWAYS = 2,
    ALLOW_NOMORE = 3,
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
// total size: 0x28
class /* @class */ {
    // Members
public:
    class HAZFXRibbon ribdata; // offset 0x0, size 0x14
    class HAZFXLightning lytdata; // offset 0x14, size 0x14
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
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
// total size: 0xC
struct /* @anon20 */ {};
// total size: 0x30
class xShadowPoly {
    // Members
public:
    class xVec4 vert[3]; // offset 0x0, size 0x30
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
// total size: 0x1C
class /* @class */ {
    // Members
public:
    class RwTexture * asset; // offset 0x0, size 0x4
    unsigned int units; // offset 0x4, size 0x4
    class xVec2 size; // offset 0x8, size 0x8
    class xVec2 isize; // offset 0x10, size 0x8
    signed int prev; // offset 0x18, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x4
class Flags {
    // Members
public:
    signed char enable; // offset 0x0, size 0x1
    signed char makeAdditive; // offset 0x1, size 0x1
    signed char dev_enable; // offset 0x2, size 0x1
    signed char unused; // offset 0x3, size 0x1
};
// total size: 0x1C
class /* @class */ {
    // Members
public:
    float in_vel; // offset 0x0, size 0x4
    float in_stop_dist; // offset 0x4, size 0x4
    float out_wait_time; // offset 0x8, size 0x4
    float out_vel; // offset 0xC, size 0x4
    float out_start_dist; // offset 0x10, size 0x4
    float fade_start_time; // offset 0x14, size 0x4
    float fade_time; // offset 0x18, size 0x4
};
// total size: 0x1C
struct /* @anon21 */ {};
// total size: 0x10
class /* @class */ {
    // Members
public:
    unsigned int emit; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float vel; // offset 0x8, size 0x4
    float rand_vel; // offset 0xC, size 0x4
};
enum state_enum {
    STATE_INVALID = -1,
    BEGIN_STATE = 0,
    STATE_IN = 0,
    STATE_OUT = 1,
    STATE_GRAB = 2,
    STATE_DROP = 3,
    END_STATE = 4,
    MAX_STATE = 4,
};
enum eSFX {
    eSFXBegin = 0,
    eFailure = 0,
    eGoofyGooberCollect = 1,
    eTreasureChestCollect = 2,
    eSpringBoardBounce = 3,
    eHealthCollect = 4,
    eSFXCount = 5,
};
// total size: 0x18
class /* @class */ {
    // Members
public:
    float frequency; // offset 0x0, size 0x4
    float gravity; // offset 0x4, size 0x4
    float dive; // offset 0x8, size 0x4
    float min_dist; // offset 0xC, size 0x4
    float max_dist; // offset 0x10, size 0x4
    float damp; // offset 0x14, size 0x4
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
// total size: 0x4
class xModelBlur {
    // Members
public:
    class activity_data * activity; // offset 0x0, size 0x4
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
class /* @class */ {
    // Members
public:
    float duration; // offset 0x0, size 0x4
    float min_duration; // offset 0x4, size 0x4
    float min_dist; // offset 0x8, size 0x4
    float cut_dist; // offset 0xC, size 0x4
    float drift_dist; // offset 0x10, size 0x4
    float drift_softness; // offset 0x14, size 0x4
    float jerk_offset; // offset 0x18, size 0x4
    float jerk_deflect; // offset 0x1C, size 0x4
};
// total size: 0x2C
class /* @class */ {
    // Members
public:
    float accel; // offset 0x0, size 0x4
    float max_vel; // offset 0x4, size 0x4
    float engine_pitch_max; // offset 0x8, size 0x4
    float engine_pitch_sensitivity; // offset 0xC, size 0x4
    float flash_interval; // offset 0x10, size 0x4
    // total size: 0x18
    class /* @class */ {
        // Members
    public:
        float xdelta; // offset 0x0, size 0x4
        float ydelta; // offset 0x4, size 0x4
        float xdecay; // offset 0x8, size 0x4
        float ydecay; // offset 0xC, size 0x4
        float ybound; // offset 0x10, size 0x4
        float roll_frac; // offset 0x14, size 0x4
    } turn; // offset 0x14, size 0x18
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
// total size: 0x10
class Damage {
    // Members
public:
    float rad_collide; // offset 0x0, size 0x4
    float pam_collide[2]; // offset 0x4, size 0x8
    unsigned char alf_collide; // offset 0xC, size 0x1
    signed char unused[3]; // offset 0xD, size 0x3
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
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
enum /* @enum */ {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
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
// total size: 0x1C
struct /* @anon22 */ {};
// total size: 0x10
class xPlatformFRData {
    // Members
public:
    float fspeed; // offset 0x0, size 0x4
    float rspeed; // offset 0x4, size 0x4
    float ret_delay; // offset 0x8, size 0x4
    float post_ret_delay; // offset 0xC, size 0x4
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0xC
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
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
class zPickupAuraInfo {
    // Members
public:
    float size; // offset 0x0, size 0x4
    float yoffset; // offset 0x4, size 0x4
    class xColor_tag color; // offset 0x8, size 0x4
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

