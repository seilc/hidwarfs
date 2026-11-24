/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800998D0 -> 0x80158318
*/
extern void (zUPHumanPlayer::* __ptmf_null)(void * this, void * this, float x, float y, float stickMag, float dt); // size: 0x4
extern class hkVector4 hkVector4Zero; // size: 0x10
extern struct {} __vt__25hkpAllCdBodyPairCollector; // size: 0x10
extern class hkMonitorStream * hkMonitorStream__m_instance; // size: 0x4
extern class hkTransform hkTransformIdentity; // size: 0x40
// total size: 0x1C0
class zAchievementsMgr : public zModule {
    // Members
    class fixed_queue _queue1; // offset 0x18, size 0xB4
    class fixed_queue _queue2; // offset 0xCC, size 0xB4
    class fixed_queue * waitingQueue; // offset 0x180, size 0x4
    class fixed_queue * processingQueue; // offset 0x184, size 0x4
    unsigned long long currentAchievementsDispatcherID; // offset 0x188, size 0x8
    char awardStatus[42]; // offset 0x190, size 0x2A
};
// total size: 0x18
class zModule {
    // Members
    int flg_skipUpdates : 1; // offset 0x0, size 0x4, bit offset 0
    int flg_skipRenders : 1; // offset 0x0, size 0x4, bit offset 1
    int flg_useBucketRender : 1; // offset 0x0, size 0x4, bit offset 2
    int flg_useLayerRender : 1; // offset 0x0, size 0x4, bit offset 3
    int flg_updateWhenPaused : 1; // offset 0x0, size 0x4, bit offset 4
    int flg_updateInCinematic : 1; // offset 0x0, size 0x4, bit offset 5
    int flg_notUsed : 26; // offset 0x0, size 0x4, bit offset 6
    int tag_module; // offset 0x4, size 0x4
    char * nam_module; // offset 0x8, size 0x4
    enum enModulePriority updatePriority; // offset 0xC, size 0x4
    enum enModulePriority renderPriority; // offset 0x10, size 0x4
};
enum enModulePriority {
    MODULE_PRIORITY_EARLY = 0,
    MODULE_PRIORITY_NORMAL = 1,
    MODULE_PRIORITY_LATE = 2,
};
// total size: 0xB4
class fixed_queue {
    // Members
    unsigned long _first; // offset 0x0, size 0x4
    unsigned long _last; // offset 0x4, size 0x4
    enum eAchievementType _buffer[43]; // offset 0x8, size 0xAC
};
enum eAchievementType {
    eAchievementTypeBegin = 1,
    eAchievementType_01 = 1,
    eAchievementType_02 = 2,
    eAchievementType_03 = 3,
    eAchievementType_04 = 4,
    eAchievementType_05 = 5,
    eAchievementType_06 = 6,
    eAchievementType_07 = 7,
    eAchievementType_08 = 8,
    eAchievementType_09 = 9,
    eAchievementType_10 = 10,
    eAchievementType_11 = 11,
    eAchievementType_12 = 12,
    eAchievementType_13 = 13,
    eAchievementType_14 = 14,
    eAchievementType_15 = 15,
    eAchievementType_16 = 16,
    eAchievementType_17 = 17,
    eAchievementType_18 = 18,
    eAchievementType_19 = 19,
    eAchievementType_20 = 20,
    eAchievementType_21 = 21,
    eAchievementType_22 = 22,
    eAchievementType_23 = 23,
    eAchievementType_24 = 24,
    eAchievementType_25 = 25,
    eAchievementType_26 = 26,
    eAchievementType_27 = 27,
    eAchievementType_28 = 28,
    eAchievementType_29 = 29,
    eAchievementType_30 = 30,
    eAchievementType_31 = 31,
    eAchievementType_32 = 32,
    eAchievementType_33 = 33,
    eAchievementType_34 = 34,
    eAchievementType_35 = 35,
    eAchievementType_36 = 36,
    eAchievementType_37 = 37,
    eAchievementType_38 = 38,
    eAchievementType_39 = 39,
    eAchievementType_40 = 40,
    eAchievementType_41 = 41,
    eAchievementType_42 = 42,
    eAchievementTypeEnd = 43,
    eAchievementTypeForceInt = 2147483647,
};
// total size: 0x1B0
class MyCollisionCollector : public hkpAllCdPointCollector {
    // Members
    class hkpCollidable * skipThis; // offset 0x1A0, size 0x4
};
// total size: 0x18
class zBiplaneCurveAsset : public xBaseAsset {
    // Members
    class __points__ points; // offset 0x10, size 0x8
};
// total size: 0x8
class __points__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x18
class zBT {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    class zBTNode * root; // offset 0x8, size 0x4
    class zBTNode * * nodes; // offset 0xC, size 0x4
    int nodeCount; // offset 0x10, size 0x4
};
// total size: 0x10
class zBTNode {
    // Members
    class zBTNode * parent; // offset 0x0, size 0x4
    int childCount; // offset 0x4, size 0x4
    class zBTNode * * children; // offset 0x8, size 0x4
};
// total size: 0x8
class zDelegateP2 {
    // Members
    void * obj; // offset 0x0, size 0x4
    void (* invoker)(void *, class zSchedulerTask *, enum eTaskState); // offset 0x4, size 0x4
};
// total size: 0x4C
class zNPCSteering : public zNPCComponent {
    // Members
    class zNPCSteeringCollisionHandler * steeringCollisionListener; // offset 0x8, size 0x4
    class xVec3 externalAccAccum; // offset 0xC, size 0xC
    class xVec3 externalVelocityAccum; // offset 0x18, size 0xC
    class xVec3 externalMomentumlessVelAccum; // offset 0x24, size 0xC
    class zWallNet * wallNet; // offset 0x30, size 0x4
    float speedLimitDownY; // offset 0x34, size 0x4
    float speedLimitUpY; // offset 0x38, size 0x4
    float turnSpringK; // offset 0x3C, size 0x4
    float headingCalcInteropRatio; // offset 0x40, size 0x4
    float gravity; // offset 0x44, size 0x4
    int steeringNeedsUpdate; // offset 0x48, size 0x4
};
// total size: 0x68
class SystemInstance {
    // Members
    class zRibbon * mSystem; // offset 0x0, size 0x4
    class xFXRibbon * mRibbon; // offset 0x4, size 0x4
    class xVec3 mVelocity; // offset 0x8, size 0xC
    class xVec3 mOffset; // offset 0x14, size 0xC
    class xBaseTransform mBaseTransform; // offset 0x20, size 0x48
};
// total size: 0x78
class zRibbon : public xOGEntity {
    // Members
    class Ribbon * asset; // offset 0x3C, size 0x4
    class config_type config; // offset 0x40, size 0x30
    class curve_node * curveNodes; // offset 0x70, size 0x4
};
// total size: 0x58
class Ribbon : public xBaseScene {
    // Members
    float life; // offset 0x10, size 0x4
    unsigned char emitType; // offset 0x14, size 0x1
    class @class Emit_Data; // offset 0x18, size 0x20
    class uid entity; // offset 0x38, size 0x8
    float size; // offset 0x40, size 0x4
    bool autoCalcNorm; // offset 0x44, size 0x1
    class _uvAnim uvAnim; // offset 0x48, size 0x8
    class __curveNodes__ curveNodes; // offset 0x50, size 0x8
};
// total size: 0x20
class @class {
    // Members
    class _Fixed Fixed; // offset 0x0, size 0x20
    class _Follow Follow; // offset 0x0, size 0x1
};
// total size: 0x20
class _Fixed {
    // Members
    class vec3 velocity; // offset 0x0, size 0xC
    bool velocityWorldSpace; // offset 0xC, size 0x1
    float velConeAngle; // offset 0x10, size 0x4
    class vec3 accel; // offset 0x14, size 0xC
};
// total size: 0x1
class _Follow {};
// total size: 0x8
class _uvAnim {
    // Members
    float U; // offset 0x0, size 0x4
    float V; // offset 0x4, size 0x4
};
// total size: 0x8
class __curveNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x68
class zPolygonalVolume : public xOGEntity {
    // Members
    class zPolygonalVolumeAsset * asset; // offset 0x3C, size 0x4
    int vertexCount; // offset 0x40, size 0x4
    class xVec3 * vertices; // offset 0x44, size 0x4
    float minY; // offset 0x48, size 0x4
    float height; // offset 0x4C, size 0x4
    class xVec3 upper; // offset 0x50, size 0xC
    class xVec3 lower; // offset 0x5C, size 0xC
};
// total size: 0x20
class zPolygonalVolumeAsset : public xBaseScene {
    // Members
    class PVBounds Bounds; // offset 0x10, size 0x8
    float Height; // offset 0x18, size 0x4
};
// total size: 0x8
class PVBounds {
    // Members
    class __Points__ Points; // offset 0x0, size 0x8
};
// total size: 0x8
class __Points__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class zDelegateP2 {
    // Members
    void * obj; // offset 0x0, size 0x4
    void (* invoker)(void *, unsigned int, class xBase *); // offset 0x4, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x1840
class zBiplanePlayer : public zUPPlayer {
    // Members
    class hkBaseObject * shootFilterList[2]; // offset 0x10D8, size 0x8
    int pipperEnabled; // offset 0x10E0, size 0x4
    class BiplaneEngineSound engineSound; // offset 0x10E8, size 0xB0
    class zBiplanePlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0x1198, size 0x4
    float crashDelay; // offset 0x119C, size 0x4
    float invincibleTimer; // offset 0x11A0, size 0x4
    float propSpin; // offset 0x11A4, size 0x4
    float currentHP; // offset 0x11A8, size 0x4
    float maxHP; // offset 0x11AC, size 0x4
    float specWeapTime; // offset 0x11B0, size 0x4
    float lastHitTime; // offset 0x11B4, size 0x4
    float heavyDartTime; // offset 0x11B8, size 0x4
    unsigned int teamNumber; // offset 0x11BC, size 0x4
    int targetIndex; // offset 0x11C0, size 0x4
    enum SpecialWeaponType swType; // offset 0x11C4, size 0x4
    enum SpecialWeaponType swFiredType; // offset 0x11C8, size 0x4
    enum eBiplaneModelType modelType; // offset 0x11CC, size 0x4
    enum eBiplaneDialogCharacter dialogCharacterType; // offset 0x11D0, size 0x4
    class xVec3 turnToDest; // offset 0x11D4, size 0xC
    class xVec3 bounceNormal; // offset 0x11E0, size 0xC
    bool bouncing; // offset 0x11EC, size 0x1
    bool turningTowards; // offset 0x11ED, size 0x1
    bool flyMode; // offset 0x11EE, size 0x1
    bool shouldCrash; // offset 0x11EF, size 0x1
    bool switchCam; // offset 0x11F0, size 0x1
    bool propForward; // offset 0x11F1, size 0x1
    bool exploded; // offset 0x11F2, size 0x1
    bool firedSpecWeap; // offset 0x11F3, size 0x1
    bool lookAtSpecWeap; // offset 0x11F4, size 0x1
    bool firing; // offset 0x11F5, size 0x1
    bool instantDeath; // offset 0x11F6, size 0x1
    bool droppingSpecWeap; // offset 0x11F7, size 0x1
    bool resetFrame; // offset 0x11F8, size 0x1
    class zCamBiplaneGlide flyingCam; // offset 0x1200, size 0x340
    class RenderedPhysicsModel leftAileron; // offset 0x1540, size 0x50
    class RenderedPhysicsModel rightAileron; // offset 0x1590, size 0x50
    class RenderedPhysicsModel rudder; // offset 0x15E0, size 0x50
    class RenderedPhysicsModel leftElevator; // offset 0x1630, size 0x50
    class RenderedPhysicsModel rightElevator; // offset 0x1680, size 0x50
    class RenderedPhysicsModel propeller; // offset 0x16D0, size 0x50
    class RenderedPhysicsModel planeBody; // offset 0x1720, size 0x50
    class RenderedPhysicsModel swModel; // offset 0x1770, size 0x50
    unsigned long long newStartPosID; // offset 0x17C0, size 0x8
    class zPlayer * lastAttacker; // offset 0x17C8, size 0x4
    class zBiplanePlayer * currentTarget; // offset 0x17CC, size 0x4
    class zFXSpawn * lightSmokeFXScript; // offset 0x17D0, size 0x4
    class zFXSpawn * lightFireFXScript; // offset 0x17D4, size 0x4
    class zFXSpawn * mediumSmokeFXScript; // offset 0x17D8, size 0x4
    class zFXSpawn * mediumFireFXScript; // offset 0x17DC, size 0x4
    class zFXSpawn * heavySmokeFXScript; // offset 0x17E0, size 0x4
    class zFXSpawn * heavyFireFXScript; // offset 0x17E4, size 0x4
    class zFXSpawn * smokeSpawnPt; // offset 0x17E8, size 0x4
    class zFXSpawn * fireSpawnPt; // offset 0x17EC, size 0x4
    class zFXSpawn * contrailFXScript; // offset 0x17F0, size 0x4
    class zFXSpawn * contrailSpawnPt; // offset 0x17F4, size 0x4
    class zUIImage * tennisImage; // offset 0x17F8, size 0x4
    class zUIImage * squirrelImage; // offset 0x17FC, size 0x4
    class zUIImage * heavyDartImage; // offset 0x1800, size 0x4
    class zUIImage * mineImage; // offset 0x1804, size 0x4
    class zUIImage * turretImage; // offset 0x1808, size 0x4
    class xCounter * houseHealth; // offset 0x180C, size 0x4
    class zSoundFX * lastPlayingDialog; // offset 0x1810, size 0x4
    void * carlAnimData; // offset 0x1814, size 0x4
    void * russellAnimData; // offset 0x1818, size 0x4
    void * dugAnimData; // offset 0x181C, size 0x4
    void * kevinAnimData; // offset 0x1820, size 0x4
    void * alphaAnimData; // offset 0x1824, size 0x4
    void * betaAnimData; // offset 0x1828, size 0x4
    void * gammaAnimData; // offset 0x182C, size 0x4
    void * muntzAnimData; // offset 0x1830, size 0x4
};
// total size: 0x10E0
class zUPPlayer : public zCommonPlayer, public RagdollCallbackListener {
    // Members
    float playerFatigue; // offset 0xCEC, size 0x4
    float p2DisplayDelay; // offset 0xCF0, size 0x4
    class xVec3 accumulatedPushVelocity; // offset 0xCF4, size 0xC
    int trapLink; // offset 0xD00, size 0x4
    int plantLink; // offset 0xD04, size 0x4
    int wormLink; // offset 0xD08, size 0x4
    float originalWormHeight; // offset 0xD0C, size 0x4
    class zUPPlayer * summon; // offset 0xD10, size 0x4
    bool isSummon; // offset 0xD14, size 0x1
    bool hitBoostButton; // offset 0xD15, size 0x1
    bool switchLock; // offset 0xD16, size 0x1
    bool goodPosAddition; // offset 0xD17, size 0x1
    bool goodPosSubtraction; // offset 0xD18, size 0x1
    bool goodPosLock; // offset 0xD19, size 0x1
    class zHouseFloat * houseFloat; // offset 0xD1C, size 0x4
    class zHouseBalloonBounce * hbb; // offset 0xD20, size 0x4
    class zTrap * holdingTrap; // offset 0xD24, size 0x4
    class zManEatingPlant * holdingPlant; // offset 0xD28, size 0x4
    class zCaveWorm * holdingWorm; // offset 0xD2C, size 0x4
    class zSwim * bodyOfWater; // offset 0xD30, size 0x4
    class zSlope * slideSurface; // offset 0xD34, size 0x4
    float slideCooldown; // offset 0xD38, size 0x4
    class zStepUp * ledgeZone; // offset 0xD3C, size 0x4
    class zSinkingSurface * sinkingSurface; // offset 0xD40, size 0x4
    float timeInWater; // offset 0xD44, size 0x4
    float waterSpin; // offset 0xD48, size 0x4
    float maxSpeed; // offset 0xD4C, size 0x4
    float lastAngle; // offset 0xD50, size 0x4
    class zCrank * crankHold; // offset 0xD54, size 0x4
    float crankSpeed; // offset 0xD58, size 0x4
    bool inWater; // offset 0xD5C, size 0x1
    class @class overheadImage; // offset 0xD60, size 0xC
    char lastGoodPosStored; // offset 0xD6C, size 0x1
    class xVec3 lastGoodPos[10]; // offset 0xD70, size 0x78
    float lastGoodPosTimeCheck; // offset 0xDE8, size 0x4
    class zBalloonCluster * balloon; // offset 0xDEC, size 0x4
    float balloonHeightMod; // offset 0xDF0, size 0x4
    float balloonFallHeight; // offset 0xDF4, size 0x4
    float balloonTimeLeft; // offset 0xDF8, size 0x4
    bool balloonRise; // offset 0xDFC, size 0x1
    class xVec3 balloonPos; // offset 0xE00, size 0xC
    char power; // offset 0xE0C, size 0x1
    char maxPower; // offset 0xE0D, size 0x1
    bool panic; // offset 0xE0E, size 0x1
    bool inChase; // offset 0xE0F, size 0x1
    class CurrentRagdollRequestData currentRagdollRequestData; // offset 0xE10, size 0x1C
    class RagdollCallbackListener * nonPlayerRagdollListener; // offset 0xE2C, size 0x4
    float leanLerp[2]; // offset 0xE30, size 0x8
    float leanBlendSpeed; // offset 0xE38, size 0x4
    class xVec3 inputAcceleration; // offset 0xE3C, size 0xC
    float maxInputAcceleration; // offset 0xE48, size 0x4
    float dynamicFrictionDeceleration; // offset 0xE4C, size 0x4
    float airDragDecelerationFactor; // offset 0xE50, size 0x4
    float staticFrictionDeceleration; // offset 0xE54, size 0x4
    float turnRate; // offset 0xE58, size 0x4
    float normalRunSpeed; // offset 0xE5C, size 0x4
    float normalRunStart; // offset 0xE60, size 0x4
    float normalWalkStart; // offset 0xE64, size 0x4
    float jumpRunSpeed; // offset 0xE68, size 0x4
    float jumpRunStart; // offset 0xE6C, size 0x4
    float jumpWalkStart; // offset 0xE70, size 0x4
    bool lockInput; // offset 0xE74, size 0x1
    class xVec2 lastStickInput; // offset 0xE78, size 0x8
    class xVec3 lastCamRelativeInput; // offset 0xE80, size 0xC
    class zUpCombat upCombat; // offset 0xE8C, size 0x210
    class xVec3 lookAtTarget; // offset 0x109C, size 0xC
    float prevStickAngle; // offset 0x10A8, size 0x4
    float inputAngVels[5]; // offset 0x10AC, size 0x14
    unsigned int inputAngVelIndex; // offset 0x10C0, size 0x4
    float inputSpinningTimer; // offset 0x10C4, size 0x4
    float inputNotSpinningTimer; // offset 0x10C8, size 0x4
    int currAutotargetIndex; // offset 0x10CC, size 0x4
    class zUIImage * offScreenArrow; // offset 0x10D0, size 0x4
    class zUIImage * offScreenFace; // offset 0x10D4, size 0x4
};
// total size: 0x3C0
class zHouseFloat : public zInteractionUP {
    // Members
    float humanLean; // offset 0x50, size 0x4
    class zHouse * theHouse; // offset 0x54, size 0x4
    enum houseFloatState theState; // offset 0x58, size 0x4
    bool Alive; // offset 0x5C, size 0x1
    bool firstRun; // offset 0x5D, size 0x1
    bool Auto; // offset 0x5E, size 0x1
    bool aIsEntry; // offset 0x5F, size 0x1
    bool toldToPrep; // offset 0x60, size 0x1
    bool p1Past; // offset 0x61, size 0x1
    bool p2Past; // offset 0x62, size 0x1
    class xEntFrame frame; // offset 0x64, size 0x124
    class xEntFrame preFrame; // offset 0x188, size 0x124
    float pointLength; // offset 0x2AC, size 0x4
    float pointTime; // offset 0x2B0, size 0x4
    float strafeTime; // offset 0x2B4, size 0x4
    float driftSpeedX; // offset 0x2B8, size 0x4
    float driftSpeedZ; // offset 0x2BC, size 0x4
    float maxX; // offset 0x2C0, size 0x4
    float minX; // offset 0x2C4, size 0x4
    float maxZ; // offset 0x2C8, size 0x4
    float minZ; // offset 0x2CC, size 0x4
    float curX; // offset 0x2D0, size 0x4
    float curZ; // offset 0x2D4, size 0x4
    float offsetSpeed; // offset 0x2D8, size 0x4
    float moveSpeed; // offset 0x2DC, size 0x4
    float liftTime; // offset 0x2E0, size 0x4
    class xVec3 playerAvector; // offset 0x2E4, size 0xC
    class xVec3 playerBvector; // offset 0x2F0, size 0xC
    class xVec3 playerAstart; // offset 0x2FC, size 0xC
    class xVec3 playerBstart; // offset 0x308, size 0xC
    class xVec3 prePos; // offset 0x314, size 0xC
    class xVec3 startPos; // offset 0x320, size 0xC
    class xVec3 endPos; // offset 0x32C, size 0xC
    class xVec3 newLoc; // offset 0x338, size 0xC
    class xVec3 sideVec; // offset 0x344, size 0xC
    class xVec3 toVec; // offset 0x350, size 0xC
    class xVec3 sideVecNOY; // offset 0x35C, size 0xC
    class xVec3 toVecNOY; // offset 0x368, size 0xC
    class xVec3 dir; // offset 0x374, size 0xC
    class xVec3 playerOffset; // offset 0x380, size 0xC
    class zInWorldIcon iconCarlRussell; // offset 0x38C, size 0x30
    class zHouseFloatAsset * asset; // offset 0x3BC, size 0x4
};
// total size: 0x1100
class zUPHumanPlayer : public zUPPlayer {
    // Members
    class zDragRope * rope; // offset 0x10D8, size 0x4
    class zFXSpawn * spawnPtCanteen_Asset; // offset 0x10DC, size 0x4
    class zFXSpawn * spawnPtMusicSpecial_Asset; // offset 0x10E0, size 0x4
    class zFXSpawn * spawnPtMusicSpecial; // offset 0x10E4, size 0x4
    class zSwingVine * vine; // offset 0x10E8, size 0x4
    class zNPCBase * attachedNPC; // offset 0x10EC, size 0x4
    bool attachOnBack; // offset 0x10F0, size 0x1
    bool nearBugs; // offset 0x10F1, size 0x1
    float nearestBugHeight; // offset 0x10F4, size 0x4
};
// total size: 0x4B8
class zSwingVine : public zInteractionUP {
    // Members
    class xOGModel * leaves[20]; // offset 0x50, size 0x50
    float leafOffset[20]; // offset 0xA0, size 0x50
    class zSwingVineAsset * asset; // offset 0xF0, size 0x4
    class zUpRope rope; // offset 0xF4, size 0x118
    class xVec3 axis; // offset 0x20C, size 0xC
    class xVec3 rightVector; // offset 0x218, size 0xC
    class zUPHumanPlayer * attachedPlayer; // offset 0x224, size 0x4
    float playerPosOnRope; // offset 0x228, size 0x4
    float currentForceMag; // offset 0x22C, size 0x4
    float targetAngle; // offset 0x230, size 0x4
    enum SwingDirection swingDir; // offset 0x234, size 0x4
    float maxAngle; // offset 0x238, size 0x4
    int targetNode; // offset 0x23C, size 0x4
    bool enableTimerInactive; // offset 0x240, size 0x1
    float timerInactive; // offset 0x244, size 0x4
    class xVec3 * landingPositions; // offset 0x248, size 0x4
    class zSwingVine * neighborA; // offset 0x24C, size 0x4
    class zSwingVine * neighborB; // offset 0x250, size 0x4
    class zSoundAsset soundGrab; // offset 0x258, size 0x90
    class zSoundAsset soundRelease; // offset 0x2E8, size 0x90
    class zSoundAsset soundSwing; // offset 0x378, size 0x90
    class zSoundAsset soundLower; // offset 0x408, size 0x90
    class xVec3 playerDest; // offset 0x498, size 0xC
    bool setPlayerDest; // offset 0x4A4, size 0x1
    float playerY; // offset 0x4A8, size 0x4
    bool playerFinishedAttached; // offset 0x4AC, size 0x1
    bool isFlipped; // offset 0x4AD, size 0x1
    float reverseDelay; // offset 0x4B0, size 0x4
};
// total size: 0xA0
class zSwingVineAsset : public InteractionUP {
    // Members
    class UpSpringAsset vineSpringAsset; // offset 0x10, size 0x30
    class uid neighborA; // offset 0x40, size 0x8
    class uid neighborB; // offset 0x48, size 0x8
    class vec3 swingDir; // offset 0x50, size 0xC
    float maxAngle; // offset 0x5C, size 0x4
    class SoundBankSource SoundGrab; // offset 0x60, size 0xC
    class SoundBankSource SoundLower; // offset 0x6C, size 0xC
    class SoundBankSource SoundSwing; // offset 0x78, size 0xC
    class SoundBankSource SoundRelease; // offset 0x84, size 0xC
    class __Stops__ Stops; // offset 0x90, size 0x8
    class __Landings__ Landings; // offset 0x98, size 0x8
};
// total size: 0x8
class __Stops__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Landings__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x118
class zUpRope {
    // Members
    class xVec3 P1; // offset 0x0, size 0xC
    class xVec3 P2; // offset 0xC, size 0xC
    int ANC1; // offset 0x18, size 0x4
    int ANC2; // offset 0x1C, size 0x4
    int SEGS; // offset 0x20, size 0x4
    bool deadWeight; // offset 0x24, size 0x1
    bool isAVine; // offset 0x25, size 0x1
    float deadWeightNode; // offset 0x28, size 0x4
    class AttachedObject * m_pAttachedObject; // offset 0x2C, size 0x4
    float m_ObjectPosition; // offset 0x30, size 0x4
    class AttachedObject * m_pRootObject; // offset 0x34, size 0x4
    class RopeVertex * m_aRopeVertices[20]; // offset 0x38, size 0x50
    int numberOfVertices; // offset 0x88, size 0x4
    float initialSegmentLength; // offset 0x8C, size 0x4
    float m_MinRopeDt; // offset 0x90, size 0x4
    float m_fSpringConstant; // offset 0x94, size 0x4
    float m_fFrictionConstant; // offset 0x98, size 0x4
    float m_fAirFrictionConstant; // offset 0x9C, size 0x4
    float m_fDetailLevel; // offset 0xA0, size 0x4
    class Sphere m_BoundingSphere; // offset 0xA4, size 0x10
    bool m_bHidden; // offset 0xB4, size 0x1
    bool m_bTestCollisions; // offset 0xB5, size 0x1
    float m_Radius; // offset 0xB8, size 0x4
    bool m_LastFrameOnScreen; // offset 0xBC, size 0x1
    bool m_bTestPlaneCollision; // offset 0xBD, size 0x1
    class Plane m_PlaneCollision; // offset 0xC0, size 0x18
    bool m_bForceOnPlane; // offset 0xD8, size 0x1
    class xVec3 m_vForcesPlane; // offset 0xDC, size 0xC
    int m_ClingID; // offset 0xE8, size 0x4
    class PivotPoint * m_PivotOne; // offset 0xEC, size 0x4
    class PivotPoint * m_PivotTwo; // offset 0xF0, size 0x4
    float m_TimeSpeedLow; // offset 0xF4, size 0x4
    class xVec3 m_vStraigthPos; // offset 0xF8, size 0xC
    bool m_bCrossDraw; // offset 0x104, size 0x1
    float m_fCurrentLeftDt; // offset 0x108, size 0x4
    float m_fLastFrameMaxForce; // offset 0x10C, size 0x4
    class ImmediatePrototypeEntity * hoseIM; // offset 0x114, size 0x4
};
// total size: 0x8
class AttachedObject {
    // Members
    float ropePos; // offset 0x0, size 0x4
};
// total size: 0x60
class RopeVertex {
    // Members
    class xVec3 m_OldPosition; // offset 0x0, size 0xC
    class xVec3 m_OldSpeed; // offset 0xC, size 0xC
    class xVec3 m_Position; // offset 0x18, size 0xC
    class xVec3 m_Speed; // offset 0x24, size 0xC
    class xVec3 m_Force; // offset 0x30, size 0xC
    float m_Mass; // offset 0x3C, size 0x4
    bool m_bOnGround; // offset 0x40, size 0x1
    float m_InitialDeltaLength; // offset 0x44, size 0x4
    class xVec3 m_AddedForce; // offset 0x48, size 0xC
    float m_AddedMass; // offset 0x54, size 0x4
    float m_AddedAirFriction; // offset 0x58, size 0x4
    float m_UVy; // offset 0x5C, size 0x4
};
// total size: 0x10
class Sphere {
    // Members
    class xVec3 Center; // offset 0x0, size 0xC
    float Radius; // offset 0xC, size 0x4
};
// total size: 0x18
class Plane {
    // Members
    class xVec3 m_Origin; // offset 0x0, size 0xC
    class xVec3 m_Normal; // offset 0xC, size 0xC
};
// total size: 0x1C
class PivotPoint {
    // Members
    int m_PivotId; // offset 0x0, size 0x4
    class xVec3 m_vRelativeNodePos; // offset 0x4, size 0xC
    class xVec3 m_vOldConnectPos; // offset 0x10, size 0xC
};
enum SwingDirection {
    SWING_NONE = 0,
    SWING_POSITIVE = 1,
    SWING_NEGATIVE = 2,
};
enum houseFloatState {
    HOUSEFLOAT_Ready = 1,
    HOUSEFLOAT_Rising = 2,
    HOUSEFLOAT_Going = 3,
    HOUSEFLOAT_Done = 4,
    HOUSEFLOAT_Reset = 5,
    HOUSEFLOAT_Dead = 6,
};
// total size: 0xD0
class zHouseFloatAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    class vec3 entryZ; // offset 0x20, size 0xC
    class vec3 entryA; // offset 0x2C, size 0xC
    class vec3 entryB; // offset 0x38, size 0xC
    class Matrix43POD startArea; // offset 0x50, size 0x30
    class Matrix43POD preStartArea; // offset 0x80, size 0x30
    float horizontalWidth; // offset 0xB0, size 0x4
    float verticalWidth; // offset 0xB4, size 0x4
    float houseSpeed; // offset 0xB8, size 0x4
    float adjustmentSpeed; // offset 0xBC, size 0x4
    class uid house; // offset 0xC0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xC8, size 0x8
};
// total size: 0xD8
class zHouseBalloonBounce : public zInteractionUPWithIcons {
    // Members
    bool Alive; // offset 0x82, size 0x1
    class xMat4x3 balloonMat; // offset 0x84, size 0x40
    class zHouseBalloonBounceAsset * asset; // offset 0xC4, size 0x4
    class zAnimPackage * dugBounceAnim; // offset 0xC8, size 0x4
    class zAnimPackage * carlBounceAnim; // offset 0xCC, size 0x4
    class zAnimPackage * russellBounceAnim; // offset 0xD0, size 0x4
    bool playBounceAnim; // offset 0xD4, size 0x1
};
// total size: 0x88
class zInteractionUPWithIcons : public zInteractionUP {
    // Members
    class zInWorldIcon icon; // offset 0x50, size 0x30
    bool iconEnabled; // offset 0x80, size 0x1
    bool iconEventEnabled; // offset 0x81, size 0x1
};
// total size: 0xB0
class zHouseBalloonBounceAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    float BounceHeight; // offset 0x20, size 0x4
    unsigned char IconType; // offset 0x24, size 0x1
    class vec3 balloonPos; // offset 0x28, size 0xC
    float balloonRad; // offset 0x34, size 0x4
    class ModelInstanceAsset balloonModel; // offset 0x40, size 0x40
    class uid balloonAnimSet; // offset 0x80, size 0x8
    class uid DugHouseBounceAnim; // offset 0x88, size 0x8
    class uid RussellHouseBounceAnim; // offset 0x90, size 0x8
    class uid CarlHouseBounceAnim; // offset 0x98, size 0x8
    class LinkAsset EventLinksNew; // offset 0xA0, size 0x8
};
// total size: 0xA0
class zTrap : public zInteractionUP {
    // Members
    class xVec3 untierPos; // offset 0x50, size 0xC
    enum trapState currentStatus; // offset 0x5C, size 0x4
    bool Alive; // offset 0x60, size 0x1
    unsigned int Strength; // offset 0x64, size 0x4
    unsigned int holdCount; // offset 0x68, size 0x4
    class zTrapAsset * asset; // offset 0x6C, size 0x4
    class ImmediatePrototypeEntity * ropeIM; // offset 0x70, size 0x4
    class zAnimPackage * carlAnimTrap; // offset 0x74, size 0x4
    class zAnimPackage * russellAnimTrap; // offset 0x78, size 0x4
    class zAnimPackage * dugAnimTrap; // offset 0x7C, size 0x4
    float WarningLength; // offset 0x80, size 0x4
    float WarningTimeLeft; // offset 0x84, size 0x4
    float OriginalYaw; // offset 0x88, size 0x4
    class xVec3 apexPosition; // offset 0x8C, size 0xC
    class xOGModel * knot; // offset 0x98, size 0x4
    class hkpRigidBody * body; // offset 0x9C, size 0x4
};
enum trapState {
    TRAP_Ready = 1,
    TRAP_Holding = 2,
    TRAP_Empty = 3,
    TRAP_Released = 4,
    TRAP_Disabled = 5,
    TRAP_Attacking = 6,
};
// total size: 0x120
class zTrapAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class __POWGroup__ POWGroup; // offset 0x14, size 0x8
    class __SimpleObjects__ SimpleObjects; // offset 0x1C, size 0x8
    class vec3 knotPosition; // offset 0x24, size 0xC
    class Rotation3 knotOrientation; // offset 0x30, size 0xC
    class ModelInstanceAsset knotModel; // offset 0x40, size 0x40
    class vec3 knotRopePosition; // offset 0x80, size 0xC
    class vec3 trapPosition; // offset 0x8C, size 0xC
    class Rotation3 trapOrientation; // offset 0x98, size 0xC
    class ModelInstanceAsset trapModel; // offset 0xB0, size 0x40
    class uid CarlTrapAnim; // offset 0xF0, size 0x8
    class uid DugTrapAnim; // offset 0xF8, size 0x8
    class uid RussellTrapAnim; // offset 0x100, size 0x8
    class uid AnimationSetID; // offset 0x108, size 0x8
    class LinkAsset EventLinksNew; // offset 0x110, size 0x8
};
// total size: 0x8
class __POWGroup__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __SimpleObjects__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x138
class zManEatingPlant : public zInteractionUP {
    // Members
    enum plantState currentStatus; // offset 0x50, size 0x4
    int Strength; // offset 0x54, size 0x4
    class zManEatingPlantAsset * asset; // offset 0x58, size 0x4
    bool Active; // offset 0x5C, size 0x1
    bool Alive; // offset 0x5D, size 0x1
    bool inWarnRad; // offset 0x5E, size 0x1
    bool firstWarn; // offset 0x5F, size 0x1
    int holdingSpittableObject; // offset 0x60, size 0x4
    int numObjectsInWarningRadius; // offset 0x64, size 0x4
    int chewCount; // offset 0x68, size 0x4
    class hkpRigidBody * body; // offset 0x6C, size 0x4
    class bitePair * simpObjListInfo; // offset 0x70, size 0x4
    class zAnimPackage * carlAnimPlant; // offset 0x74, size 0x4
    class zAnimPackage * russellAnimPlant; // offset 0x78, size 0x4
    class zAnimPackage * dugAnimPlant; // offset 0x7C, size 0x4
    class zAnimPackage * kevinAnimPlant; // offset 0x80, size 0x4
    bool keepProne; // offset 0x84, size 0x1
    bool warn; // offset 0x85, size 0x1
    bool waitForProne; // offset 0x86, size 0x1
    float waitToBite; // offset 0x88, size 0x4
    float CaptureTimeLeft; // offset 0x8C, size 0x4
    float CooldownTimeLeft; // offset 0x90, size 0x4
    float SPHEREOFFSET; // offset 0x94, size 0x4
    int checkCount; // offset 0x98, size 0x4
    unsigned int firstLoop; // offset 0x9C, size 0x4
    class xVec3 plantPos; // offset 0xA0, size 0xC
    class xVec3 plantPosDelta; // offset 0xAC, size 0xC
    class xVec3 leaves[10]; // offset 0xB8, size 0x78
    class zNPCBase * npcBeingEaten; // offset 0x130, size 0x4
    class zUPPlayer * lastPlayerToHitUs; // offset 0x134, size 0x4
};
enum plantState {
    PLANT_Ready = 1,
    PLANT_Warning = 2,
    PLANT_Snapping = 3,
    PLANT_Chewing = 4,
    PLANT_Hurting = 5,
    PLANT_Releasing = 6,
    PLANT_Spitting = 7,
    PLANT_Spitted = 8,
    PLANT_Prone = 9,
    PLANT_Disabled = 10,
};
// total size: 0xC0
class zManEatingPlantAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class __SimpleObjects__ SimpleObjects; // offset 0x14, size 0x8
    class __NPC__ NPC; // offset 0x1C, size 0x8
    class vec3 plantPosition; // offset 0x24, size 0xC
    class Rotation3 plantOrientation; // offset 0x30, size 0xC
    class ModelInstanceAsset plantModel; // offset 0x40, size 0x40
    class vec3 Scale; // offset 0x80, size 0xC
    bool Prone; // offset 0x8C, size 0x1
    class uid CarlPlantAnim; // offset 0x90, size 0x8
    class uid DugPlantAnim; // offset 0x98, size 0x8
    class uid KevinPlantAnim; // offset 0xA0, size 0x8
    class uid RussellPlantAnim; // offset 0xA8, size 0x8
    class uid AnimationSetID; // offset 0xB0, size 0x8
    class LinkAsset EventLinksNew; // offset 0xB8, size 0x8
};
// total size: 0x8
class __NPC__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class bitePair {
    // Members
    short collLayer; // offset 0x0, size 0x2
    bool inBelly; // offset 0x2, size 0x1
};
// total size: 0xA8
class zCaveWorm : public zInteractionUP {
    // Members
    enum wormState currentStatus; // offset 0x50, size 0x4
    int Strength; // offset 0x54, size 0x4
    class zCaveWormAsset * asset; // offset 0x58, size 0x4
    bool Active; // offset 0x5C, size 0x1
    bool Alive; // offset 0x5D, size 0x1
    bool inWarnRad; // offset 0x5E, size 0x1
    int playerInWarnRad; // offset 0x60, size 0x4
    class zAnimPackage * carlAnimCaveWorm; // offset 0x64, size 0x4
    class zAnimPackage * russellAnimCaveWorm; // offset 0x68, size 0x4
    class zAnimPackage * dugAnimCaveWorm; // offset 0x6C, size 0x4
    class zAnimPackage * kevinAnimCaveWorm; // offset 0x70, size 0x4
    bool warn; // offset 0x74, size 0x1
    bool forceClosed; // offset 0x75, size 0x1
    float lickLengthLeft; // offset 0x78, size 0x4
    float lickLength; // offset 0x7C, size 0x4
    float lickMoveSpeed; // offset 0x80, size 0x4
    float CooldownLength; // offset 0x84, size 0x4
    float CooldownTimeLeft; // offset 0x88, size 0x4
    class xVec3 tongueTip; // offset 0x8C, size 0xC
    class xVec3 tongueTipDelta; // offset 0x98, size 0xC
    unsigned int firstLoop; // offset 0xA4, size 0x4
};
enum wormState {
    CAVEWORM_Ready = 1,
    CAVEWORM_Warning = 2,
    CAVEWORM_Licking = 3,
    CAVEWORM_Chewing = 4,
    CAVEWORM_Recovering = 5,
    CAVEWORM_Disabled = 6,
    CAVEWORM_Closed = 7,
    CAVEWORM_Lowering = 8,
};
// total size: 0xC0
class zCaveWormAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class vec3 wormPosition; // offset 0x14, size 0xC
    class Rotation3 wormOrientation; // offset 0x20, size 0xC
    class ModelInstanceAsset wormModel; // offset 0x30, size 0x40
    class vec3 Scale; // offset 0x70, size 0xC
    class uid CarlCaveWormAnim; // offset 0x80, size 0x8
    class uid DugCaveWormAnim; // offset 0x88, size 0x8
    class uid KevinCaveWormAnim; // offset 0x90, size 0x8
    class uid RussellCaveWormAnim; // offset 0x98, size 0x8
    unsigned char TongueLength; // offset 0xA0, size 0x1
    class uid AnimationSetID; // offset 0xA8, size 0x8
    class LinkAsset EventLinksNew; // offset 0xB0, size 0x8
};
// total size: 0x80
class zSwim : public zInteractionUP {
    // Members
    class zWaterAsset * asset; // offset 0x50, size 0x4
    bool Alive; // offset 0x54, size 0x1
    bool Current; // offset 0x55, size 0x1
    class xVec3 directionVec; // offset 0x58, size 0xC
    class xVec2 targetForCarl; // offset 0x64, size 0x8
    class zTrigger * * triggers; // offset 0x6C, size 0x4
    class zDirection * direction; // offset 0x70, size 0x4
    class zAnimPackage * dugAnimSwim; // offset 0x74, size 0x4
    class zAnimPackage * carlAnimSwim; // offset 0x78, size 0x4
    class zAnimPackage * russellAnimSwim; // offset 0x7C, size 0x4
};
// total size: 0x58
class zWaterAsset : public InteractionUP {
    // Members
    bool Current; // offset 0x10, size 0x1
    class __triggers__ triggers; // offset 0x14, size 0x8
    float Strength; // offset 0x1C, size 0x4
    class uid DirID; // offset 0x20, size 0x8
    bool Alive; // offset 0x28, size 0x1
    class vec3 middle; // offset 0x2C, size 0xC
    class uid DugSwimAnim; // offset 0x38, size 0x8
    class uid RussellSwimAnim; // offset 0x40, size 0x8
    class uid CarlSwimAnim; // offset 0x48, size 0x8
    class LinkAsset EventLinksNew; // offset 0x50, size 0x8
};
// total size: 0x8
class __triggers__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x58
class zDirection : public xOGEntity {
    // Members
    class zDirectionAsset * asset; // offset 0x3C, size 0x4
    class vec3 location; // offset 0x40, size 0xC
    class Rotation3 rotation; // offset 0x4C, size 0xC
};
// total size: 0x30
class zDirectionAsset : public xBaseScene {
    // Members
    class vec3 location; // offset 0x10, size 0xC
    class Rotation3 direction; // offset 0x1C, size 0xC
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x88
class zSlope : public zInteractionUP {
    // Members
    class CurveEntity * SlopeCurve; // offset 0x50, size 0x4
    class CurveEntity * AICurve; // offset 0x54, size 0x4
    bool Alive; // offset 0x58, size 0x1
    float SlideSpeed; // offset 0x5C, size 0x4
    float MoveLRSpeed; // offset 0x60, size 0x4
    float MoveLRAccel; // offset 0x64, size 0x4
    class zSlopeAsset * asset; // offset 0x68, size 0x4
    class zTrigger * * triggers; // offset 0x6C, size 0x4
    class zDirection * direction; // offset 0x70, size 0x4
    class zAnimPackage * dugAnimSlide; // offset 0x74, size 0x4
    class zAnimPackage * carlAnimSlide; // offset 0x78, size 0x4
    class zAnimPackage * russellAnimSlide; // offset 0x7C, size 0x4
    class zAnimPackage * kevinAnimSlide; // offset 0x80, size 0x4
};
// total size: 0x60
class zSlopeAsset : public InteractionUP {
    // Members
    class __triggers__ triggers; // offset 0x10, size 0x8
    class uid SlopeCurve; // offset 0x18, size 0x8
    class uid AICurve; // offset 0x20, size 0x8
    float SlideSpeed; // offset 0x28, size 0x4
    float MoveSpeed; // offset 0x2C, size 0x4
    float MoveAccel; // offset 0x30, size 0x4
    bool Alive; // offset 0x34, size 0x1
    class uid DugSlideAnim; // offset 0x38, size 0x8
    class uid RussellSlideAnim; // offset 0x40, size 0x8
    class uid CarlSlideAnim; // offset 0x48, size 0x8
    class uid KevinSlideAnim; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x188
class zStepUp : public zInteractionUP {
    // Members
    class zAnimPackage * carlAnimLedge; // offset 0x50, size 0x4
    class zAnimPackage * russellAnimLedge; // offset 0x54, size 0x4
    class zAnimPackage * dugAnimLedge; // offset 0x58, size 0x4
    class xEntFrame frame; // offset 0x5C, size 0x124
    class zStepUpAsset * asset; // offset 0x180, size 0x4
};
// total size: 0x70
class zStepUpAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    class Matrix43POD zone; // offset 0x20, size 0x30
    class uid CarlAnimLedge; // offset 0x50, size 0x8
    class uid RussellAnimLedge; // offset 0x58, size 0x8
    class uid DugAnimLedge; // offset 0x60, size 0x8
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x88
class zSinkingSurface : public zInteractionUP {
    // Members
    class zSinkingSurfaceAsset * asset; // offset 0x50, size 0x4
    bool Alive; // offset 0x54, size 0x1
    bool canJump; // offset 0x55, size 0x1
    bool hasSurfaceLevelSet; // offset 0x56, size 0x1
    bool deathUseCharHeight; // offset 0x57, size 0x1
    class zTrigger * * triggers; // offset 0x58, size 0x4
    float sinkingSpeed; // offset 0x5C, size 0x4
    float surfaceSpeed; // offset 0x60, size 0x4
    float submergedSpeed; // offset 0x64, size 0x4
    float jumpSpeed; // offset 0x68, size 0x4
    float jumpTimerMax; // offset 0x6C, size 0x4
    float surfaceYValue; // offset 0x70, size 0x4
    float deathDepth; // offset 0x74, size 0x4
    class zAnimPackage * dugAnimSink; // offset 0x78, size 0x4
    class zAnimPackage * carlAnimSink; // offset 0x7C, size 0x4
    class zAnimPackage * russellAnimSink; // offset 0x80, size 0x4
    class zAnimPackage * kevinAnimSink; // offset 0x84, size 0x4
};
// total size: 0x70
class zSinkingSurfaceAsset : public InteractionUP {
    // Members
    class __triggers__ triggers; // offset 0x10, size 0x8
    bool CanJump; // offset 0x18, size 0x1
    float JumpSpeed; // offset 0x1C, size 0x4
    float JumpTimerMax; // offset 0x20, size 0x4
    unsigned char SurfaceType; // offset 0x24, size 0x1
    class @class __anon; // offset 0x28, size 0x8
    class ObjectSurface_Type Object; // offset 0x28, size 0x8
    class PositionSurface_Type Position; // offset 0x28, size 0x8
    float SinkingRate; // offset 0x30, size 0x4
    float SurfaceWalkingSpeed; // offset 0x34, size 0x4
    float SubmergedWalkingSpeed; // offset 0x38, size 0x4
    bool Alive; // offset 0x3C, size 0x1
    unsigned char DeathType; // offset 0x3D, size 0x1
    class @class __anon; // offset 0x40, size 0x4
    class CharacterHeight_Type Character; // offset 0x40, size 0x4
    class SpecifiedDepth_Type Specified; // offset 0x40, size 0x4
    class uid DugSinkingAnim; // offset 0x48, size 0x8
    class uid RussellSinkingAnim; // offset 0x50, size 0x8
    class uid CarlSinkingAnim; // offset 0x58, size 0x8
    class uid KevinSinkingAnim; // offset 0x60, size 0x8
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x8
class @class {
    // Members
    class ObjectSurface_Type Object; // offset 0x0, size 0x8
    class PositionSurface_Type Position; // offset 0x0, size 0x8
};
// total size: 0x8
class ObjectSurface_Type {
    // Members
    class uid SurfaceEntity; // offset 0x0, size 0x8
};
// total size: 0x8
class PositionSurface_Type {
    // Members
    class uid PositionDirWidget; // offset 0x0, size 0x8
};
// total size: 0x4
class @class {
    // Members
    class CharacterHeight_Type Character; // offset 0x0, size 0x4
    class SpecifiedDepth_Type Specified; // offset 0x0, size 0x4
};
// total size: 0x4
class CharacterHeight_Type {
    // Members
    float HiddenDeathDepth; // offset 0x0, size 0x4
};
// total size: 0x4
class SpecifiedDepth_Type {
    // Members
    float DeathDepth; // offset 0x0, size 0x4
};
// total size: 0x8B0
class zCrank : public zInteractionUPWithIcons {
    // Members
    float heightRaised; // offset 0x84, size 0x4
    float radsPlatformRotated; // offset 0x88, size 0x4
    float platformLength; // offset 0x8C, size 0x4
    class zCrankAsset * asset; // offset 0x90, size 0x4
    int failResponses; // offset 0x94, size 0x4
    class zPlayer * playerA; // offset 0x98, size 0x4
    class zPlayer * playerB; // offset 0x9C, size 0x4
    class xMat4x3 original_matrix; // offset 0xA0, size 0x40
    class xMat4x3 playerAMatrix; // offset 0xE0, size 0x40
    class xMat4x3 playerBMatrix; // offset 0x120, size 0x40
    class xMat4x3 pAo; // offset 0x160, size 0x40
    class xMat4x3 pBo; // offset 0x1A0, size 0x40
    class xVec3 original_pos; // offset 0x1E0, size 0xC
    class xVec3 playerAPos; // offset 0x1EC, size 0xC
    class xVec3 playerBPos; // offset 0x1F8, size 0xC
    bool forceMove; // offset 0x204, size 0x1
    unsigned int megaDrop; // offset 0x208, size 0x4
    float initialWait; // offset 0x20C, size 0x4
    float maxTilt; // offset 0x210, size 0x4
    class xQuat quatA; // offset 0x214, size 0x10
    class xQuat quatB; // offset 0x224, size 0x10
    float crankARot; // offset 0x234, size 0x4
    float crankBRot; // offset 0x238, size 0x4
    class hkpRigidBody * body; // offset 0x23C, size 0x4
    class RenderedPhysicsModel crankModelA; // offset 0x240, size 0x50
    class RenderedPhysicsModel crankModelB; // offset 0x290, size 0x50
    class xVec3 dirA; // offset 0x2E0, size 0xC
    class xVec3 posA; // offset 0x2EC, size 0xC
    class xVec3 dirB; // offset 0x2F8, size 0xC
    class xVec3 posB; // offset 0x304, size 0xC
    class xVec3 dirAo; // offset 0x310, size 0xC
    class xVec3 posAo; // offset 0x31C, size 0xC
    class xVec3 dirBo; // offset 0x328, size 0xC
    class xVec3 posBo; // offset 0x334, size 0xC
    class zAnimPackage * carlCrankAnim; // offset 0x340, size 0x4
    class zAnimPackage * russellCrankAnim; // offset 0x344, size 0x4
    class zAnimPackage * dugCrankAnim; // offset 0x348, size 0x4
    bool Alive; // offset 0x34C, size 0x1
    bool stopRot; // offset 0x34D, size 0x1
    int direction; // offset 0x350, size 0x4
    class xEntFrame frameA; // offset 0x354, size 0x124
    class xEntFrame frameB; // offset 0x478, size 0x124
    class xEntFrame frameAo; // offset 0x59C, size 0x124
    class xEntFrame frameBo; // offset 0x6C0, size 0x124
    class zInWorldIcon iconB; // offset 0x7E4, size 0x30
    bool iconBEnabled; // offset 0x814, size 0x1
    bool playerInA; // offset 0x815, size 0x1
    bool playerInB; // offset 0x816, size 0x1
    class zSoundAsset soundThud; // offset 0x818, size 0x90
};
// total size: 0x210
class zCrankAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD fieldA; // offset 0x20, size 0x30
    class Matrix43POD fieldB; // offset 0x50, size 0x30
    class SoundBankSource SoundThud; // offset 0x80, size 0xC
    bool NoPlat; // offset 0x8C, size 0x1
    bool ZPlat; // offset 0x8D, size 0x1
    bool NoTilt; // offset 0x8E, size 0x1
    bool FieldAFixed; // offset 0x8F, size 0x1
    bool FieldBFixed; // offset 0x90, size 0x1
    bool Dual; // offset 0x91, size 0x1
    bool CarlAllowed; // offset 0x92, size 0x1
    bool RussellAllowed; // offset 0x93, size 0x1
    bool DugAllowed; // offset 0x94, size 0x1
    bool Alive; // offset 0x95, size 0x1
    bool direction; // offset 0x96, size 0x1
    float CrankSpeed; // offset 0x98, size 0x4
    float UncrankSpeed; // offset 0x9C, size 0x4
    float MaxNoTiltHeight; // offset 0xA0, size 0x4
    float Height; // offset 0xA4, size 0x4
    class uid DirIDA; // offset 0xA8, size 0x8
    class uid DirIDB; // offset 0xB0, size 0x8
    unsigned char PlatformAxis; // offset 0xB8, size 0x1
    unsigned char crankAAxis; // offset 0xB9, size 0x1
    unsigned char crankBAxis; // offset 0xBA, size 0x1
    class uid CarlCrankAnim; // offset 0xC0, size 0x8
    class uid RussellCrankAnim; // offset 0xC8, size 0x8
    class uid DugCrankAnim; // offset 0xD0, size 0x8
    class vec3 firstCrankPosition; // offset 0xD8, size 0xC
    class Rotation3 firstCrankOrientation; // offset 0xE4, size 0xC
    class ModelInstanceAsset firstCrankModel; // offset 0xF0, size 0x40
    class vec3 secondCrankPosition; // offset 0x130, size 0xC
    class Rotation3 secondCrankOrientation; // offset 0x13C, size 0xC
    class ModelInstanceAsset secondCrankModel; // offset 0x150, size 0x40
    class vec3 platformPosition; // offset 0x190, size 0xC
    class Rotation3 platformOrientation; // offset 0x19C, size 0xC
    class ModelInstanceAsset platformModel; // offset 0x1B0, size 0x40
    class vec3 Scale; // offset 0x1F0, size 0xC
    class LinkAsset EventLinksNew; // offset 0x1FC, size 0x8
};
// total size: 0xC
class @class {
    // Members
    class zUIImage * uiImage; // offset 0x0, size 0x4
    unsigned int curTextureRefHash; // offset 0x4, size 0x4
    float displayTimer; // offset 0x8, size 0x4
};
// total size: 0x1D0
class zBalloonCluster {
    // Members
    bool isActive; // offset 0x0, size 0x1
    class RenderedPhysicsModel rpModel; // offset 0x10, size 0x50
    class zUpSpring cord; // offset 0x60, size 0x14C
    class xVec3 localAttachPoint; // offset 0x1AC, size 0xC
    class AttachedObject * attachedTo; // offset 0x1B8, size 0x4
    unsigned char numBalloons; // offset 0x1BC, size 0x1
    float lifeSpan; // offset 0x1C0, size 0x4
    float lifeTimer; // offset 0x1C4, size 0x4
    unsigned char index; // offset 0x1C8, size 0x1
    bool die; // offset 0x1C9, size 0x1
};
// total size: 0x4
class AttachedObject {};
// total size: 0x1C
class CurrentRagdollRequestData {
    // Members
    float duration; // offset 0x0, size 0x4
    class xVec3 initialLinearVelocity; // offset 0x4, size 0xC
    class xVec3 initialAngularVelocity; // offset 0x10, size 0xC
};
// total size: 0x210
class zUpCombat {
    // Members
    class zUPPlayer * ownerPlayer; // offset 0x0, size 0x4
    unsigned int numEnemies; // offset 0x4, size 0x4
    unsigned int numTargetingEnemies; // offset 0x8, size 0x4
    bool targetable; // offset 0xC, size 0x1
    class xBase * enemyList[64]; // offset 0x10, size 0x100
    class xBase * targetingEnemyList[64]; // offset 0x110, size 0x100
};
// total size: 0xB0
class BiplaneEngineSound {
    // Members
    class zSoundAsset engineSound; // offset 0x0, size 0x90
    class xSpringyF32 parameter; // offset 0x90, size 0x18
    bool isPlaying; // offset 0xA8, size 0x1
};
// total size: 0x28
class zBiplanePlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {
    // Members
    class zPlayer * player; // offset 0xC, size 0x4
    class xVec3 reflectVec; // offset 0x10, size 0xC
    float minXZDotProd; // offset 0x1C, size 0x4
    float maxYDiff; // offset 0x20, size 0x4
    bool rightWall; // offset 0x24, size 0x1
    bool upWall; // offset 0x25, size 0x1
    bool noHBounce; // offset 0x26, size 0x1
    bool noVBounce; // offset 0x27, size 0x1
};
// total size: 0xC
class zPlayerCharacterProxyCollisionListener : public hkReferencedObject, public hkpCharacterProxyListener {};
enum SpecialWeaponType {
    SW_NONE = 0,
    SW_TENNIS_BALL = 1,
    SW_BALLOON = 2,
    SW_MINE = 3,
    SW_TURRET = 4,
    SW_HEAVY_DART = 5,
};
enum eBiplaneModelType {
    eBMT_Generic = 0,
    eBMT_Carl = 1,
    eBMT_Russell = 2,
    eBMT_Dug = 3,
    eBMT_Kevin = 4,
    eBMT_Alpha = 5,
    eBMT_Beta = 6,
    eBMT_Gamma = 7,
    eBMT_Muntz = 8,
};
enum eBiplaneDialogCharacter {
    eBDC_Alpha = 0,
    eBDC_Beta = 1,
    eBDC_Carl = 2,
    eBDC_Dug = 3,
    eBDC_Gamma = 4,
    eBDC_Kevin = 5,
    eBDC_Muntz = 6,
    eBDC_Russell = 7,
    eBDC_Total = 8,
};
// total size: 0x340
class zCamBiplaneGlide : public xCam {
    // Members
    class xEnt * player; // offset 0x148, size 0x4
    float yaw; // offset 0x14C, size 0x4
    float yawPos; // offset 0x150, size 0x4
    float pitch; // offset 0x154, size 0x4
    float roll; // offset 0x158, size 0x4
    float yawVel; // offset 0x15C, size 0x4
    float pitchVel; // offset 0x160, size 0x4
    float rollVel; // offset 0x164, size 0x4
    float accel; // offset 0x168, size 0x4
    float goalYaw; // offset 0x16C, size 0x4
    float goalYawPos; // offset 0x170, size 0x4
    float goalPitch; // offset 0x174, size 0x4
    float goalRoll; // offset 0x178, size 0x4
    float speed; // offset 0x17C, size 0x4
    float smSpeed; // offset 0x180, size 0x4
    float goalSpeed; // offset 0x184, size 0x4
    float brakeFov; // offset 0x188, size 0x4
    float brakeFovVel; // offset 0x18C, size 0x4
    float boostOffset; // offset 0x190, size 0x4
    float boostFov; // offset 0x194, size 0x4
    float boostFovVel; // offset 0x198, size 0x4
    float gravityFov; // offset 0x19C, size 0x4
    float goalCamTheta; // offset 0x1A0, size 0x4
    float lastCamTheta; // offset 0x1A4, size 0x4
    float currentCamTheta; // offset 0x1A8, size 0x4
    float goalCamDistRatio; // offset 0x1AC, size 0x4
    float lastCamDist; // offset 0x1B0, size 0x4
    float lastCamYPos; // offset 0x1B4, size 0x4
    float goalCamDist; // offset 0x1B8, size 0x4
    float startPlayerTheta; // offset 0x1BC, size 0x4
    float swYawDir; // offset 0x1C0, size 0x4
    float autoLevelTime; // offset 0x1C4, size 0x4
    float swChaseTime; // offset 0x1C8, size 0x4
    int currentMoveStage; // offset 0x1CC, size 0x4
    unsigned int currentCamMoveFrame; // offset 0x1D0, size 0x4
    enum SpecialWeaponType currentSWType; // offset 0x1D4, size 0x4
    class xMat4x3 playerMat; // offset 0x1D8, size 0x40
    class xMat4x3 prevPlayerMat; // offset 0x218, size 0x40
    class xQuat flightOrientation; // offset 0x258, size 0x10
    class xQuat pitchedOrientation; // offset 0x268, size 0x10
    class xQuat flightCamOrientation; // offset 0x278, size 0x10
    class xVec3 flightPos; // offset 0x288, size 0xC
    class xQuat prevFlightOrientation; // offset 0x294, size 0x10
    class xQuat prevPitchedOrientation; // offset 0x2A4, size 0x10
    class xQuat prevFlightCamOrientation; // offset 0x2B4, size 0x10
    class xVec3 prevFlightPos; // offset 0x2C4, size 0xC
    class xQuat smCamStartOrientation; // offset 0x2D0, size 0x10
    class xQuat smCamGoalOrientation; // offset 0x2E0, size 0x10
    class xQuat smCamCurrentOrientation; // offset 0x2F0, size 0x10
    class xVec3 smCamCurrentPos; // offset 0x300, size 0xC
    class xVec3 camOffset; // offset 0x30C, size 0xC
    class xVec2 swFinalDirection; // offset 0x318, size 0x8
    class xVec2 swGoalPos; // offset 0x320, size 0x8
    class zUIImage * reticle; // offset 0x328, size 0x4
    class UI_Motion * reticleMotionAsset; // offset 0x32C, size 0x4
    class zBiplaneCurveAsset * currentMove; // offset 0x330, size 0x4
    bool firstFrame; // offset 0x334, size 0x1
    bool braking; // offset 0x335, size 0x1
    bool boosting; // offset 0x336, size 0x1
    bool rearView; // offset 0x337, size 0x1
    bool perfSpecialMove; // offset 0x338, size 0x1
    bool camFinishingSM; // offset 0x339, size 0x1
    bool chasingSpecWeap; // offset 0x33A, size 0x1
    bool swStage2; // offset 0x33B, size 0x1
    bool swRollOut; // offset 0x33C, size 0x1
};
// total size: 0x28
class CreateInfo {
    // Members
    int memSize; // offset 0x0, size 0x4
    int memAlign; // offset 0x4, size 0x4
    class ModelPrototypeEntity * protoEnt; // offset 0x8, size 0x4
    int modelCreateSize; // offset 0xC, size 0x4
    int modelCreateAlign; // offset 0x10, size 0x4
    int allParamDataBufferSize; // offset 0x14, size 0x4
    int validRenderCustomizerCount; // offset 0x18, size 0x4
    class LightKitEntity * lightKitEnt; // offset 0x1C, size 0x4
    class CreateInfo paramCargoInfo; // offset 0x20, size 0x8
};
// total size: 0x2
class EventActionOneInt : public EventActionNew {
    // Members
    short param0; // offset 0x0, size 0x2
};
// total size: 0x4
class EventActionOneFloat : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x80
class hkpCharacterProxyCinfo {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    float m_dynamicFriction; // offset 0x20, size 0x4
    float m_staticFriction; // offset 0x24, size 0x4
    float m_keepContactTolerance; // offset 0x28, size 0x4
    class hkVector4 m_up; // offset 0x30, size 0x10
    float m_extraUpStaticFriction; // offset 0x40, size 0x4
    float m_extraDownStaticFriction; // offset 0x44, size 0x4
    class hkpShapePhantom * m_shapePhantom; // offset 0x48, size 0x4
    float m_keepDistance; // offset 0x4C, size 0x4
    float m_contactAngleSensitivity; // offset 0x50, size 0x4
    unsigned int m_userPlanes; // offset 0x54, size 0x4
    float m_maxCharacterSpeedForSolver; // offset 0x58, size 0x4
    float m_characterStrength; // offset 0x5C, size 0x4
    float m_characterMass; // offset 0x60, size 0x4
    float m_maxSlope; // offset 0x64, size 0x4
    float m_penetrationRecoverySpeed; // offset 0x68, size 0x4
    int m_maxCastIterations; // offset 0x6C, size 0x4
    bool m_refreshManifoldInCheckSupport; // offset 0x70, size 0x1
};
// total size: 0xC
class hkArray {
    // Members
    class hkpShape * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x14
class EventActionSpecWeapHit : public EventActionNew {
    // Members
    unsigned int hitType; // offset 0x0, size 0x4
    float xPos; // offset 0x4, size 0x4
    float zPos; // offset 0x8, size 0x4
    float xDir; // offset 0xC, size 0x4
    float zDir; // offset 0x10, size 0x4
};
// total size: 0xC
class EventActionVector : public EventActionNew {
    // Members
    class vec3 param0; // offset 0x0, size 0xC
};
// total size: 0x38
class zCombatDamageInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    float damage; // offset 0x8, size 0x4
    enum eHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    class xVec3 knockback; // offset 0x14, size 0xC
    class xVec3 hitLocation; // offset 0x20, size 0xC
    class xVec3 hitNormal; // offset 0x2C, size 0xC
};
// total size: 0x20
class zNPCBiplaneActiveArray {
    // Members
    class zNPCBiplane * activeArray[7]; // offset 0x0, size 0x1C
    unsigned int numActive; // offset 0x1C, size 0x4
};
// total size: 0x120
class zNPCBiplane : public zNPCBase {
    // Members
    class zNPCBiplaneProxyCollisionListener collisionListener; // offset 0xB8, size 0x24
    enum eBiplaneActionType currentActionType; // offset 0xDC, size 0x4
    class xVec3 bounceNormal; // offset 0xE0, size 0xC
    class zFXSpawn * deathFXScript; // offset 0xEC, size 0x4
    class zFXSpawn * lightSmokeFXScript; // offset 0xF0, size 0x4
    class zFXSpawn * lightFireFXScript; // offset 0xF4, size 0x4
    class zFXSpawn * mediumSmokeFXScript; // offset 0xF8, size 0x4
    class zFXSpawn * mediumFireFXScript; // offset 0xFC, size 0x4
    class zFXSpawn * heavySmokeFXScript; // offset 0x100, size 0x4
    class zFXSpawn * heavyFireFXScript; // offset 0x104, size 0x4
    class zFXSpawn * smokeSpawnPt; // offset 0x108, size 0x4
    class zFXSpawn * fireSpawnPt; // offset 0x10C, size 0x4
    class zPlayer * currentTarget; // offset 0x110, size 0x4
    class xVec3 * curDest; // offset 0x114, size 0x4
    bool bouncing; // offset 0x118, size 0x1
    bool bounced; // offset 0x119, size 0x1
    bool alive; // offset 0x11A, size 0x1
    bool attacked; // offset 0x11B, size 0x1
    bool canAttack; // offset 0x11C, size 0x1
};
// total size: 0x24
class zNPCBiplaneProxyCollisionListener : public zNPCCollisionListener {
    // Members
    class zNPCBiplane * owner; // offset 0x8, size 0x4
    class xVec3 reflectVec; // offset 0xC, size 0xC
    float minXZDotProd; // offset 0x18, size 0x4
    float maxYDiff; // offset 0x1C, size 0x4
    bool rightWall; // offset 0x20, size 0x1
    bool upWall; // offset 0x21, size 0x1
    bool noHBounce; // offset 0x22, size 0x1
    bool noVBounce; // offset 0x23, size 0x1
};
enum eBiplaneActionType {
    eBiplaneActionOther = 0,
    eBiplaneActionStartingPatrol = 1,
    eBiplaneActionPatrolling = 2,
    eBiplaneActionAttacking = 3,
    eBiplaneActionEvading = 4,
};
// total size: 0x14
class BiplaneTargetTypePosition {
    // Members
    enum eBiplaneTargetType type; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    bool visible; // offset 0x10, size 0x1
    bool yellowTeam; // offset 0x11, size 0x1
    bool joined; // offset 0x12, size 0x1
};
enum eBiplaneTargetType {
    eBTT_NPC = 0,
    eBTT_PLAYER1 = 1,
    eBTT_PLAYER2 = 2,
    eBTT_PLAYER3 = 3,
    eBTT_PLAYER4 = 4,
    eBTT_HOUSE = 5,
    eBTT_YELLOW_DIRIGIBLE = 6,
    eBTT_BLUE_DIRIGIBLE = 7,
};
// total size: 0x20
class zRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    class xBase * hitObj; // offset 0xC, size 0x4
    float nearDist; // offset 0x10, size 0x4
    class xVec3 hitNormal; // offset 0x14, size 0xC
};
// total size: 0x14
class hkMonitorStream {
    // Members
    class hkPadSpu m_start; // offset 0x0, size 0x4
    class hkPadSpu m_end; // offset 0x4, size 0x4
    class hkPadSpu m_capacity; // offset 0x8, size 0x4
    class hkPadSpu m_capacityMinus16; // offset 0xC, size 0x4
    class hkBool m_isBufferAllocatedOnTheHeap; // offset 0x10, size 0x1
};
// total size: 0x4
class hkPadSpu {
    // Members
    char * m_storage; // offset 0x0, size 0x4
};
// total size: 0xC
class TimerCommand : public Command {
    // Members
    unsigned int m_time0; // offset 0x4, size 0x4
    unsigned int m_time1; // offset 0x8, size 0x4
};
// total size: 0x4
class Command {
    // Members
    char * m_commandAndMonitor; // offset 0x0, size 0x4
};
// total size: 0x168
class zBiplanePlayerFlyAndShoot : public zPlayerIdleUP {
    // Members
    float pitch; // offset 0xA8, size 0x4
    float roll; // offset 0xAC, size 0x4
    float yaw; // offset 0xB0, size 0x4
    float glideFXTimer; // offset 0xB4, size 0x4
    float boostCoolDownTimer; // offset 0xB8, size 0x4
    float specialMoveTimer; // offset 0xBC, size 0x4
    enum eBiplaneSpecialMoveType curAvailableMove; // offset 0xC0, size 0x4
    bool boostReleased; // offset 0xC4, size 0x1
    bool eventForceStart; // offset 0xC5, size 0x1
    bool boosting; // offset 0xC6, size 0x1
    bool glideBoosting; // offset 0xC7, size 0x1
    bool hudFlashing; // offset 0xC8, size 0x1
    bool hudKeepFlashing; // offset 0xC9, size 0x1
    class xEnt * lastHitObject; // offset 0xCC, size 0x4
    class xVec3 lastHitPos; // offset 0xD0, size 0xC
    class xVec3 autoTargetDirection; // offset 0xDC, size 0xC
    float shootTimer; // offset 0xE8, size 0x4
    unsigned int hitType; // offset 0xEC, size 0x4
    class xVec3 dpos; // offset 0xF0, size 0xC
    class zFXSpawn * impactSparkFXScript; // offset 0xFC, size 0x4
    class zFXSpawn * impactSparkBiplaneFXScript; // offset 0x100, size 0x4
    class zFXSpawn * floatingSparksFXScript; // offset 0x104, size 0x4
    class zFXSpawn * outgoingBulletStreakFXScript; // offset 0x108, size 0x4
    class zFXSpawn * heavyBulletStreakFXScript; // offset 0x10C, size 0x4
    class zFXSpawn * muzzleFlashFXScript; // offset 0x110, size 0x4
    class zFXSpawn * muzzleFlashSpawnPt; // offset 0x114, size 0x4
    class zFXSpawn * bulletSoundFXScript; // offset 0x118, size 0x4
    class zFXSpawn * bulletSoundHeavyFXScript; // offset 0x11C, size 0x4
    class zFXSpawn * bulletSoundCheatFXScript; // offset 0x120, size 0x4
    class zFXSpawn * impactSmokeFXScript; // offset 0x124, size 0x4
    class zFXSpawn * boostContrailFXScript; // offset 0x128, size 0x4
    class zFXSpawn * boostContrailSpawnPt; // offset 0x12C, size 0x4
    class xEnt * jetFlameObj; // offset 0x130, size 0x4
    class zRibbon * boostRibbonEffect; // offset 0x134, size 0x4
    class xFXRibbon * boostRibbonInstance[2]; // offset 0x138, size 0x8
    class zRibbon * ribbonEffect; // offset 0x140, size 0x4
    class xFXRibbon * ribbonInstance[2]; // offset 0x144, size 0x8
    class zSoundFX * brakeSnd; // offset 0x14C, size 0x4
    class zSoundFX * boostSnd; // offset 0x150, size 0x4
    class zSoundFX * fallSnd; // offset 0x154, size 0x4
    class zSoundFX * collideSnd; // offset 0x158, size 0x4
    class xVec3 effectPos; // offset 0x15C, size 0xC
};
// total size: 0xA8
class zPlayerIdleUP : public zUPPlayerAction {
    // Members
    class ExtraIdleTableEntry extraIdleTable[2]; // offset 0x10, size 0x90
    float extraIdleTimer; // offset 0xA0, size 0x4
    enum @enum idleType; // offset 0xA4, size 0x4
};
// total size: 0x10
class zUPPlayerAction : public zCommonPlayerAction {};
// total size: 0x10
class zCommonPlayerAction : public zPlayerAction {};
// total size: 0x48
class ExtraIdleTableEntry {
    // Members
    class xAnimState * variants[15]; // offset 0x0, size 0x3C
    int numVariants; // offset 0x3C, size 0x4
    int numValid; // offset 0x40, size 0x4
    bool noRepeats; // offset 0x44, size 0x1
};
enum @enum {
    Idle_Normal = 0,
    Idle_Scared = 1,
    Idle_Angry = 2,
    Idle_Action = 3,
};
enum eBiplaneSpecialMoveType {
    eBiplaneSM_None = 0,
    eBiplaneSM_Up = 1,
    eBiplaneSM_Down = 2,
};
// total size: 0x8
class EventActionEnt : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x8
class EventActionTwoInts : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
    unsigned int param1; // offset 0x4, size 0x4
};
// total size: 0x20
class zPlayerJump : public zCommonPlayerAction {
    // Members
    bool jumped; // offset 0x10, size 0x1
    float time; // offset 0x14, size 0x4
    float y; // offset 0x18, size 0x4
    float gustTime; // offset 0x1C, size 0x4
};
// total size: 0x194
class zBiplanePlayerFallToDeath : public zBiplanePlayerFlyAndShoot {
    // Members
    float explosionTime; // offset 0x168, size 0x4
    float deathTime; // offset 0x16C, size 0x4
    class xVec3 dpos; // offset 0x170, size 0xC
    class zBiplaneCurveAsset * death1; // offset 0x17C, size 0x4
    class zBiplaneCurveAsset * death2; // offset 0x180, size 0x4
    bool exploding; // offset 0x184, size 0x1
    class zFXSpawn * explosionFXScript; // offset 0x188, size 0x4
    class zFXSpawn * explosionSpawnPt; // offset 0x18C, size 0x4
    class zFXSpawn * deathSpiralSoundFXScript; // offset 0x190, size 0x4
};
// total size: 0x10
class zBiplanePlayerCheat : public zPlayerCheat {};
// total size: 0x10
class zPlayerCheat : public zCommonPlayerAction {};
// total size: 0x40
class hkpSurfaceConstraintInfo {
    // Members
    class hkVector4 m_plane; // offset 0x0, size 0x10
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    float m_staticFriction; // offset 0x20, size 0x4
    float m_extraUpStaticFriction; // offset 0x24, size 0x4
    float m_extraDownStaticFriction; // offset 0x28, size 0x4
    float m_dynamicFriction; // offset 0x2C, size 0x4
    int m_priority; // offset 0x30, size 0x4
};
// total size: 0xD0
class hkpWorldCinfo : public hkReferencedObject {
    // Members
    class hkVector4 m_gravity; // offset 0x10, size 0x10
    int m_broadPhaseQuerySize; // offset 0x20, size 0x4
    float m_contactRestingVelocity; // offset 0x24, size 0x4
    class hkEnum m_broadPhaseBorderBehaviour; // offset 0x28, size 0x1
    class hkAabb m_broadPhaseWorldAabb; // offset 0x30, size 0x20
    float m_collisionTolerance; // offset 0x50, size 0x4
    class hkRefPtr m_collisionFilter; // offset 0x54, size 0x4
    class hkRefPtr m_convexListFilter; // offset 0x58, size 0x4
    float m_expectedMaxLinearVelocity; // offset 0x5C, size 0x4
    int m_sizeOfToiEventQueue; // offset 0x60, size 0x4
    float m_expectedMinPsiDeltaTime; // offset 0x64, size 0x4
    class hkRefPtr m_memoryWatchDog; // offset 0x68, size 0x4
    int m_broadPhaseNumMarkers; // offset 0x6C, size 0x4
    class hkEnum m_contactPointGeneration; // offset 0x70, size 0x1
    float m_solverTau; // offset 0x74, size 0x4
    float m_solverDamp; // offset 0x78, size 0x4
    int m_solverIterations; // offset 0x7C, size 0x4
    int m_solverMicrosteps; // offset 0x80, size 0x4
    class hkBool m_forceCoherentConstraintOrderingInSolver; // offset 0x84, size 0x1
    float m_snapCollisionToConvexEdgeThreshold; // offset 0x88, size 0x4
    float m_snapCollisionToConcaveEdgeThreshold; // offset 0x8C, size 0x4
    class hkBool m_enableToiWeldRejection; // offset 0x90, size 0x1
    class hkBool m_enableDeprecatedWelding; // offset 0x91, size 0x1
    float m_iterativeLinearCastEarlyOutDistance; // offset 0x94, size 0x4
    int m_iterativeLinearCastMaxIterations; // offset 0x98, size 0x4
    float m_highFrequencyDeactivationPeriod; // offset 0x9C, size 0x4
    float m_lowFrequencyDeactivationPeriod; // offset 0xA0, size 0x4
    unsigned char m_deactivationNumInactiveFramesSelectFlag0; // offset 0xA4, size 0x1
    unsigned char m_deactivationNumInactiveFramesSelectFlag1; // offset 0xA5, size 0x1
    unsigned char m_deactivationIntegrateCounter; // offset 0xA6, size 0x1
    class hkBool m_shouldActivateOnRigidBodyTransformChange; // offset 0xA7, size 0x1
    float m_deactivationReferenceDistance; // offset 0xA8, size 0x4
    float m_toiCollisionResponseRotateNormal; // offset 0xAC, size 0x4
    int m_maxSectorsPerCollideTask; // offset 0xB0, size 0x4
    class hkBool m_processToisMultithreaded; // offset 0xB4, size 0x1
    int m_maxEntriesPerToiCollideTask; // offset 0xB8, size 0x4
    class hkBool m_enableDeactivation; // offset 0xBC, size 0x1
    class hkEnum m_simulationType; // offset 0xBD, size 0x1
    class hkBool m_enableSimulationIslands; // offset 0xBE, size 0x1
    unsigned int m_minDesiredIslandSize; // offset 0xC0, size 0x4
    class hkBool m_processActionsInSingleThread; // offset 0xC4, size 0x1
    float m_frameMarkerPsiSnap; // offset 0xC8, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkpCollisionFilter * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkpConvexListFilter * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x4
class hkRefPtr {
    // Members
    class hkWorldMemoryAvailableWatchDog * m_pntr; // offset 0x0, size 0x4
};
// total size: 0x150
class zCamBiplaneCrash : public xCam {
    // Members
    class xEnt * player; // offset 0x148, size 0x4
};
// total size: 0x20
class BlackboardWritePayload {
    // Members
    unsigned int WriteTo; // offset 0x0, size 0x4
    enum eSourceType SourceType; // offset 0x4, size 0x4
    class @class __anon; // offset 0x8, size 0x18
    class VariableStruct Variable; // offset 0x8, size 0x4
    class ValueStruct Value; // offset 0x8, size 0x18
    class ResetStruct Reset; // offset 0x8, size 0x1
};
enum eSourceType {
    eSourceType_Variable = 0,
    eSourceType_Value = 1,
    eSourceType_Reset = 2,
    END_eSourceType_ENUM = 3,
};
// total size: 0x18
class @class {
    // Members
    class VariableStruct Variable; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x18
    class ResetStruct Reset; // offset 0x0, size 0x1
};
// total size: 0x4
class VariableStruct {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
};
// total size: 0x18
class ValueStruct {
    // Members
    class __VariableTypeUnion__ VariableTypeUnion; // offset 0x0, size 0x18
};
// total size: 0x18
class __VariableTypeUnion__ {
    // Members
    enum eBlackboardVariableType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x10
};
enum eBlackboardVariableType {
    eBlackboardVariableType_Integer = 0,
    eBlackboardVariableType_Float = 1,
    eBlackboardVariableType_Boolean = 2,
    eBlackboardVariableType_Player = 3,
    eBlackboardVariableType_Vector3 = 4,
    eBlackboardVariableType_UID = 5,
    eBlackboardVariableType_EventData = 6,
    END_eBlackboardVariableType_ENUM = 7,
};
// total size: 0x10
class @class {
    // Members
    class IntStruct _Integer; // offset 0x0, size 0x8
    class FloatStruct _Float; // offset 0x0, size 0x8
    class BoolStruct _Boolean; // offset 0x0, size 0x1
    class PlayerStruct _Player; // offset 0x0, size 0x4
    class VectorStruct _Vector3; // offset 0x0, size 0xC
    class UIDStruct _UID; // offset 0x0, size 0x8
};
// total size: 0x8
class IntStruct {
    // Members
    enum eNumericWriteType WriteType; // offset 0x0, size 0x4
    int Value; // offset 0x4, size 0x4
};
enum eNumericWriteType {
    eNumericWriteType_SetTo = 0,
    eNumericWriteType_Increment = 1,
    END_eNumericWriteType_ENUM = 2,
};
// total size: 0x8
class FloatStruct {
    // Members
    enum eNumericWriteType WriteType; // offset 0x0, size 0x4
    float Value; // offset 0x4, size 0x4
};
// total size: 0x1
class BoolStruct {
    // Members
    bool Value; // offset 0x0, size 0x1
};
// total size: 0x4
class PlayerStruct {
    // Members
    enum ePlayerType Value; // offset 0x0, size 0x4
};
enum ePlayerType {
    P1 = 0,
    P2 = 1,
    P3 = 2,
    P4 = 3,
    None = 4,
    END_ePlayerTypeENUM = 5,
};
// total size: 0xC
class VectorStruct {
    // Members
    class vec3 Value; // offset 0x0, size 0xC
};
// total size: 0x8
class UIDStruct {
    // Members
    class uid Value; // offset 0x0, size 0x8
};
// total size: 0x1
class ResetStruct {};
// total size: 0x40
class zVariable : public zVariableBase {
    // Members
    class uid defaultValue; // offset 0x30, size 0x8
    class uid value; // offset 0x38, size 0x8
};
// total size: 0x48
class zVariable : public zVariableBase {
    // Members
    class xVec3 defaultValue; // offset 0x30, size 0xC
    class xVec3 value; // offset 0x3C, size 0xC
};
// total size: 0x38
class zVariable : public zVariableBase {
    // Members
    class zPlayer * defaultValue; // offset 0x30, size 0x4
    class zPlayer * value; // offset 0x34, size 0x4
};
// total size: 0x38
class zVariable : public zVariableBase {
    // Members
    float defaultValue; // offset 0x30, size 0x4
    float value; // offset 0x34, size 0x4
};
// total size: 0x38
class zVariable : public zVariableBase {
    // Members
    int defaultValue; // offset 0x30, size 0x4
    int value; // offset 0x34, size 0x4
};
// total size: 0x206C
class zBombManager {
    // Members
    class StaticArray pendingBombs; // offset 0x0, size 0x444
    class StaticArray pendingDamages; // offset 0x444, size 0x1C04
    bool inUpdateInUpdate; // offset 0x2048, size 0x1
    class CriticalSection bombManagerCS; // offset 0x204C, size 0x20
};
// total size: 0x444
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class zBombInfo pool[16]; // offset 0x4, size 0x440
};
// total size: 0x44
class zBombInfo {
    // Members
    class xSphere sphere; // offset 0x0, size 0x10
    class xEnt * fromEnt; // offset 0x10, size 0x4
    float player_damage; // offset 0x14, size 0x4
    float obj_damage; // offset 0x18, size 0x4
    float npc_damage; // offset 0x1C, size 0x4
    float awayKnockback; // offset 0x20, size 0x4
    float upKnockback; // offset 0x24, size 0x4
    enum eHitSource hitSource; // offset 0x28, size 0x4
    enum zHitTarget hitTarget; // offset 0x2C, size 0x4
    unsigned int hitFlags; // offset 0x30, size 0x4
    class xVec3 optNormalToChkStorage; // offset 0x34, size 0xC
    class xVec3 * optNormalToChk; // offset 0x40, size 0x4
};
// total size: 0x1C04
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class zBombDamageInfo pool[128]; // offset 0x4, size 0x1C00
};
// total size: 0x38
class zBombDamageInfo {
    // Members
    class xEnt * toEnt; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    class xBase * from; // offset 0x8, size 0x4
    float player_damage; // offset 0xC, size 0x4
    float obj_damage; // offset 0x10, size 0x4
    float npc_damage; // offset 0x14, size 0x4
    enum eHitSource source; // offset 0x18, size 0x4
    enum zHitTarget target; // offset 0x1C, size 0x4
    class xVec3 knockback; // offset 0x20, size 0xC
    class xVec3 hitLocation; // offset 0x2C, size 0xC
};
// total size: 0x20
class CriticalSection {
    // Members
    int refcount; // offset 0x0, size 0x4
    class OSMutex mutex; // offset 0x4, size 0x18
    class OSThread * owner; // offset 0x1C, size 0x4
};
// total size: 0x10
class xEntAndPos {
    // Members
    class xEnt * ent; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
};
// total size: 0x414
class hkBombCdBodyPairCollector : public hkpCdBodyPairCollector {
    // Members
    class hkpCollidable * ignored; // offset 0x8, size 0x4
    class xEntAndPos collidingEntities[64]; // offset 0xC, size 0x400
    unsigned int collidingEntitiesCount; // offset 0x40C, size 0x4
    unsigned int nextEnt; // offset 0x410, size 0x4
};
// total size: 0x8
class hkpCdBodyPairCollector {
    // Members
    class hkBool m_earlyOut; // offset 0x4, size 0x1
};
// total size: 0x10
class EventActionDrivenBy : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    bool param1; // offset 0x1, size 0x1
    bool param2; // offset 0x2, size 0x1
    class uid specificPassenger; // offset 0x8, size 0x8
};
// total size: 0x10
class zBTActionAlwaysComplete : public zBTActionBaseFamily {};
// total size: 0x10
class zBTActionBaseFamily : public zBTAction {};
// total size: 0x10
class zBTAction {
    // Members
    class ActionBase * actionAsset; // offset 0x0, size 0x4
    class zDelegateP0 * resumeCB; // offset 0x4, size 0x4
    class zBTClient * btClient; // offset 0x8, size 0x4
};
// total size: 0x1
class ActionBase {};
// total size: 0x10
class zBTActionAlwaysFail : public zBTActionBaseFamily {};
// total size: 0x10
class zBTActionSendEvent : public zBTActionBaseFamily {};
// total size: 0x18
class Action_SendEvent : public ActionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    class OwnerStruct Owner; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
    class WidgetStruct Widget; // offset 0x0, size 0x8
    class PlayerStruct Player; // offset 0x0, size 0x1
    unsigned char EventTargetType; // offset 0x8, size 0x1
    class __DestEvent__ DestEvent; // offset 0xC, size 0x8
};
// total size: 0x8
class @class {
    // Members
    class OwnerStruct Owner; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
    class WidgetStruct Widget; // offset 0x0, size 0x8
    class PlayerStruct Player; // offset 0x0, size 0x1
};
// total size: 0x1
class OwnerStruct {};
// total size: 0x8
class WidgetStruct {
    // Members
    class uid Widget; // offset 0x0, size 0x8
};
// total size: 0x1
class PlayerStruct {
    // Members
    unsigned char Player; // offset 0x0, size 0x1
};
// total size: 0x8
class __DestEvent__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x1C
class zBTActionHandleEvent : public zBTActionBaseFamily {
    // Members
    enum eTaskState returnStatus; // offset 0x10, size 0x4
    class zDelegateP3 eventObserver; // offset 0x14, size 0x8
};
// total size: 0x14
class Action_HandleEvent : public ActionBase {
    // Members
    class __Event__ Event; // offset 0x0, size 0x8
    unsigned int SenderVariable; // offset 0x8, size 0x4
    unsigned int DataVariable; // offset 0xC, size 0x4
    bool SkipOtherHandlersIfHandled; // offset 0x10, size 0x1
};
// total size: 0x8
class __Event__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x14
class zNPCBiplaneBTSelectTargetAction : public zNPCBiplaneBTAction {};
// total size: 0x14
class zNPCBiplaneBTAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTAction : public zBTAction {
    // Members
    class zNPCBase * npcBase; // offset 0x10, size 0x4
};
// total size: 0x8C
class zNPCBiplaneBTChaseSpecialWeaponAction : public zNPCBiplaneBTAction {
    // Members
    class xVec2 finalDir; // offset 0x14, size 0x8
    class zNPCBiplaneSpecialControl specialControl; // offset 0x1C, size 0x6C
    bool chaseUp; // offset 0x88, size 0x1
};
// total size: 0x6C
class zNPCBiplaneSpecialControl : public zNPCSteeringControl {
    // Members
    class xVec2 finalDirection; // offset 0x48, size 0x8
    class xVec2 weaponPos; // offset 0x50, size 0x8
    float yawDir; // offset 0x58, size 0x4
    float maxPitchRatio; // offset 0x5C, size 0x4
    float maxRollRatio; // offset 0x60, size 0x4
    float chaseTime; // offset 0x64, size 0x4
    bool finishingMove; // offset 0x68, size 0x1
    bool chaseUp; // offset 0x69, size 0x1
    bool rollOut; // offset 0x6A, size 0x1
    bool finished; // offset 0x6B, size 0x1
};
// total size: 0x48
class zNPCSteeringControl {
    // Members
    class zNPCSteering * steering; // offset 0x0, size 0x4
    class zNPCBase * npcBase; // offset 0x4, size 0x4
    class zNPCEntity * npcEntity; // offset 0x8, size 0x4
    class zWallNetPositionXZ * wallNetPosition; // offset 0xC, size 0x4
    enum eHeadingCalcType headingCalcType; // offset 0x10, size 0x4
    class zNPCSteeringDest customHeading; // offset 0x14, size 0x10
    float speedLimitXZ; // offset 0x24, size 0x4
    bool gravityEnabled : 1; // offset 0x28, size 0x1, bit offset 0
    bool forceApplyGravity : 1; // offset 0x28, size 0x1, bit offset 1
    bool turnSpringEnabled : 1; // offset 0x28, size 0x1, bit offset 2
    bool ignoreYComponent : 1; // offset 0x28, size 0x1, bit offset 3
    unsigned int pad : 28; // offset 0x28, size 0x4, bit offset 4
    unsigned char movementStyle; // offset 0x2C, size 0x1
    float maxAcc; // offset 0x30, size 0x4
    class zNPCSteeringVecLimiter accLimiter; // offset 0x34, size 0x10
};
// total size: 0x14
class zWallNetPositionXZ {
    // Members
    class xVec3 curPos; // offset 0x0, size 0xC
    class zWallNet * curWallNet; // offset 0xC, size 0x4
    int curTriangleId; // offset 0x10, size 0x4
};
enum eHeadingCalcType {
    eHeadingCalcType_UsePreviousFrameHeading = 0,
    eHeadingCalcType_UseAcc = 1,
    eHeadingCalcType_UseVel = 2,
    eHeadingCalcType_UseVelNeg = 3,
    eHeadingCalcType_UseVelAcc = 4,
    eHeadingCalcType_UsePercTarget0 = 5,
    eHeadingCalcType_UsePercTargetClosest = 6,
    eHeadingCalcType_UseCustomDir = 7,
    eHeadingCalcType_UseCustomPos = 8,
    eHeadingCalcType_UseCustomCalculation = 9,
    END_eHeadingCalcType_UseENUM = 10,
};
// total size: 0x10
class zNPCSteeringDest {
    // Members
    class xVec3 dest; // offset 0x0, size 0xC
    class xVec3 * pDest; // offset 0xC, size 0x4
};
// total size: 0x10
class zNPCSteeringVecLimiter {
    // Members
    class xVec3 limitV; // offset 0x0, size 0xC
    int isSphere; // offset 0xC, size 0x4
};
// total size: 0x7C
class zNPCBiplaneBTMoveToHouseAttackAction : public zNPCBiplaneBTMoveToAction {};
// total size: 0x7C
class zNPCBiplaneBTMoveToAction : public zNPCBiplaneBTAction {
    // Members
    class xVec3 curDest; // offset 0x14, size 0xC
    class zNPCBiplaneMoveToControl moveControl; // offset 0x20, size 0x58
    bool destValid; // offset 0x78, size 0x1
};
// total size: 0x58
class zNPCBiplaneMoveToControl : public zNPCSteeringControl {
    // Members
    class xVec3 curDest; // offset 0x48, size 0xC
    bool destValid; // offset 0x54, size 0x1
};
// total size: 0x18
class zNPCBiplaneBTSetAttackedAction : public zNPCBiplaneBTAction {
    // Members
    bool newValue; // offset 0x14, size 0x1
};
// total size: 0x80
class zNPCBiplaneBTAvoidAction : public zNPCBiplaneBTMoveToAction {
    // Members
    class xEnt * curTargetEnt; // offset 0x7C, size 0x4
};
// total size: 0x80
class zNPCBiplaneBTPatrolAction : public zNPCBiplaneBTMoveToAction {
    // Members
    class xMovePoint * curMovePoint; // offset 0x7C, size 0x4
};
// total size: 0x80
class zNPCBiplaneBTStartPatrolAction : public zNPCBiplaneBTMoveToAction {
    // Members
    class xMovePoint * curMovePoint; // offset 0x7C, size 0x4
};
// total size: 0x14
class zNPCBiplaneBTSpecialMoveAction : public zNPCBiplaneBTAction {};
// total size: 0x28
class zNPCBiplaneBTAttackFireAction : public zNPCBiplaneBTAction {
    // Members
    class zFXSpawn * impactSparkFXScript; // offset 0x14, size 0x4
    class zFXSpawn * impactSparkBiplaneFXScript; // offset 0x18, size 0x4
    class zFXSpawn * impactSmokeFXScript; // offset 0x1C, size 0x4
    class zFXSpawn * muzzleFlashFXScript; // offset 0x20, size 0x4
    class zFXSpawn * bulletFXScript; // offset 0x24, size 0x4
};
// total size: 0x80
class zNPCBiplaneBTAttackMoveAction : public zNPCBiplaneBTMoveToAction {
    // Members
    class xEnt * curTargetEnt; // offset 0x7C, size 0x4
};
// total size: 0x18
class zLaserTurretAIActionHit : public zLaserTurretAIAction {
    // Members
    class zFXSpawn * fxAsset; // offset 0x14, size 0x4
};
// total size: 0x14
class zLaserTurretAIAction : public zBTAction {
    // Members
    class zLaserTurret * turret; // offset 0x10, size 0x4
};
// total size: 0x1C
class zLaserTurretAIActionFire : public zLaserTurretAIAction {
    // Members
    class zFXSpawn * fxAsset; // offset 0x14, size 0x4
    float timer; // offset 0x18, size 0x4
};
// total size: 0x40
class zLaserTurretAIActionLockon : public zLaserTurretAIAction {
    // Members
    bool hasSentStartTurningEvent; // offset 0x14, size 0x1
    class xSpringyVec3 rotSpring; // offset 0x18, size 0x28
};
// total size: 0x18
class zPlayerAIActionGetOutOfVineSwing : public zPlayerAIAction {
    // Members
    bool jumpPressed; // offset 0x14, size 0x1
};
// total size: 0x14
class zPlayerAIAction : public zBTAction {
    // Members
    class zCommonPlayer * thePlayer; // offset 0x10, size 0x4
};
// total size: 0x1C
class zPlayerAIActionDugDig : public zPlayerAIAction {
    // Members
    class zSniff * theDig; // offset 0x14, size 0x4
    bool pressButton; // offset 0x18, size 0x1
};
// total size: 0xE8
class zSniff : public zInteractionUPWithIcons {
    // Members
    class zTrigger * trigger; // offset 0x84, size 0x4
    class xMat4x3 matrix; // offset 0x88, size 0x40
    class buried * objects; // offset 0xC8, size 0x4
    class zSniffAsset * asset; // offset 0xCC, size 0x4
    class xOGEntity * buriedObject; // offset 0xD0, size 0x4
    int collType; // offset 0xD4, size 0x4
    class zDugPlayer * dug; // offset 0xD8, size 0x4
    class zAnimPackage * dugAnimSniff; // offset 0xDC, size 0x4
    class zFXSpawn * fxSpawnPtReveal_Asset; // offset 0xE0, size 0x4
};
// total size: 0x1C
class buried {
    // Members
    class zFXSpawn * fxSpawnPtReveal; // offset 0x0, size 0x4
    bool real; // offset 0x4, size 0x1
    float exposureTime; // offset 0x8, size 0x4
    enum buriedObjectStatus status; // offset 0xC, size 0x4
    class xVec3 pos; // offset 0x10, size 0xC
};
enum buriedObjectStatus {
    buried_firstReveal = 0,
    buried_hidden = 1,
    buried_revealed = 2,
    buried_showing = 3,
};
// total size: 0x60
class zSniffAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    class uid trigger; // offset 0x20, size 0x8
    unsigned char Type; // offset 0x28, size 0x1
    class uid Object; // offset 0x30, size 0x8
    class uid VFXRevealSpawn; // offset 0x38, size 0x8
    float exposure; // offset 0x40, size 0x4
    class uid DugSniffAnim; // offset 0x48, size 0x8
    class __ItemList__ ItemList; // offset 0x50, size 0x8
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x8
class __ItemList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1230
class zDugPlayer : public zUPAnimalPlayer {
    // Members
    float isCrawling; // offset 0x1208, size 0x4
    class zCarlPlayer * deadWeight; // offset 0x120C, size 0x4
    class zCrawl * crawlLink; // offset 0x1210, size 0x4
    class zDugLever * leverLink; // offset 0x1214, size 0x4
    class zSniff * sniffSet; // offset 0x1218, size 0x4
    class zFXSpawn * collarFX_Asset; // offset 0x121C, size 0x4
    class zUPPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0x1220, size 0x4
};
// total size: 0x1210
class zUPAnimalPlayer : public zUPPlayer {
    // Members
    class zCombatAttack playerAttackStates[2]; // offset 0x10D8, size 0x120
    bool unsummoning; // offset 0x11F8, size 0x1
    class xVec3 unsummonPos; // offset 0x11FC, size 0xC
};
// total size: 0x1380
class zCarlPlayer : public zUPHumanPlayer {
    // Members
    class zRussellRope * russellRope; // offset 0x10F8, size 0x4
    class zUpFloatingObjectGenerator * generator; // offset 0x10FC, size 0x4
    class zDugPlayer * guideDog; // offset 0x1100, size 0x4
    float dugAttachWait; // offset 0x1104, size 0x4
    class xVec3 dogSet; // offset 0x1108, size 0xC
    class xVec3 curSet; // offset 0x1114, size 0xC
    bool readyToAttachToDug; // offset 0x1120, size 0x1
    class zPry * pryPoint; // offset 0x1124, size 0x4
    float dogLength; // offset 0x1128, size 0x4
    float curLength; // offset 0x112C, size 0x4
    float freedomInWaterTime; // offset 0x1130, size 0x4
    class zUPPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0x1134, size 0x4
    bool hearingAidOn; // offset 0x1138, size 0x1
    float hearingAidTimer; // offset 0x113C, size 0x4
    class zCombatAttack playerAttackStates[4]; // offset 0x1140, size 0x240
};
// total size: 0x218
class zRussellRope : public zInteractionUPWithIcons {
    // Members
    bool carlJustAttached; // offset 0x82, size 0x1
    class zRussellRopeAsset * asset; // offset 0x84, size 0x4
    class zRussellPlayer * russellPlayer; // offset 0x88, size 0x4
    class zCarlPlayer * carlPlayer; // offset 0x8C, size 0x4
    float ropeLengthTotal; // offset 0x90, size 0x4
    float ropeLengthCurrent; // offset 0x94, size 0x4
    class xVec3 ropeLedgePivotPoint; // offset 0x98, size 0xC
    class xVec3 ropeEnd; // offset 0xA4, size 0xC
    float rusDistToLedge; // offset 0xB0, size 0x4
    float carlDistToRussell; // offset 0xB4, size 0x4
    bool carlLedgeUp; // offset 0xB8, size 0x1
    float timerInactive; // offset 0xBC, size 0x4
    class zAnimPackage * carlRussellRopeAnim; // offset 0xC0, size 0x4
    class zAnimPackage * russellRussellRopeAnim; // offset 0xC4, size 0x4
    class ImmediatePrototypeEntity * hoseIM; // offset 0xC8, size 0x4
    bool russellReachedLedge; // offset 0xCC, size 0x1
    class zTrigger * carlTrigger; // offset 0xD0, size 0x4
    class zTrigger * russellTrigger; // offset 0xD4, size 0x4
    class zDelegateP2 carlTriggerObserver; // offset 0xD8, size 0x8
    class zDelegateP2 russellTriggerObserver; // offset 0xE0, size 0x8
    bool carlInTrigger; // offset 0xE8, size 0x1
    bool russellInTrigger; // offset 0xE9, size 0x1
    class zSoundAsset soundLower; // offset 0xF0, size 0x90
    class zSoundAsset soundMove; // offset 0x180, size 0x90
    bool wasPulling; // offset 0x210, size 0x1
    bool isPulling; // offset 0x211, size 0x1
    class zLedge * ledge; // offset 0x214, size 0x4
};
// total size: 0x70
class zRussellRopeAsset : public InteractionUpWithIcons {
    // Members
    class uid Ledge; // offset 0x20, size 0x8
    bool CarlAlwaysHoldOn; // offset 0x28, size 0x1
    class uid CarlRussellRopeAnim; // offset 0x30, size 0x8
    class uid RussellRussellRopeAnim; // offset 0x38, size 0x8
    class uid CarlTrigger; // offset 0x40, size 0x8
    class uid RussellTrigger; // offset 0x48, size 0x8
    class SoundBankSource SoundLower; // offset 0x50, size 0xC
    class SoundBankSource SoundMove; // offset 0x5C, size 0xC
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0x1490
class zRussellPlayer : public zUPHumanPlayer {
    // Members
    class zRopeCut * ropeCutPoint; // offset 0x10F8, size 0x4
    class zRussellRope * russellRope; // offset 0x10FC, size 0x4
    class zLedgeShimmy * ledgeShimmy; // offset 0x1100, size 0x4
    class zEntSimpleObj * backpack; // offset 0x1104, size 0x4
    bool backpackTeleported; // offset 0x1108, size 0x1
    class hkBaseObject * shootFilterList[2]; // offset 0x110C, size 0x8
    bool lockTargeting; // offset 0x1114, size 0x1
    class zUPPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0x1118, size 0x4
    bool bugleOn; // offset 0x111C, size 0x1
    float bugleTimer; // offset 0x1120, size 0x4
    float netCooldownTimer; // offset 0x1124, size 0x4
    float canteenTimer; // offset 0x1128, size 0x4
    class zFXSpawn * spawnPtSparkle; // offset 0x112C, size 0x4
    class zCombatAttack playerAttackStates[6]; // offset 0x1130, size 0x360
};
// total size: 0xE0
class zEntSimpleObj : public zEnt {
    // Members
    unsigned int sflags; // offset 0xC0, size 0x4
    unsigned int orientRef; // offset 0xC4, size 0x4
    float settleTimer; // offset 0xC8, size 0x4
    class zDestructible * destructible; // offset 0xCC, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0xD0, size 0x4
    int textureNum; // offset 0xD4, size 0x4
};
// total size: 0xC0
class zDestructible {
    // Members
    bool active; // offset 0x0, size 0x1
    bool swapModel; // offset 0x1, size 0x1
    bool didSwapModel; // offset 0x2, size 0x1
    class DestructibleAsset * asset; // offset 0x4, size 0x4
    class zDestructibleState * states; // offset 0x8, size 0x4
    class xEnt * root_ent; // offset 0xC, size 0x4
    class ModelInstanceAsset * modelInstanceSwap; // offset 0x10, size 0x4
    unsigned int totalStateNum; // offset 0x14, size 0x4
    unsigned int totalHitPoints; // offset 0x18, size 0x4
    unsigned int hitTypeFilter; // offset 0x1C, size 0x4
    unsigned int hitTypeExcludeFilter; // offset 0x20, size 0x4
    unsigned int playerFilter; // offset 0x24, size 0x4
    int currentStateNum; // offset 0x28, size 0x4
    unsigned int currentDamageTotal; // offset 0x2C, size 0x4
    class zSoundAsset soundIdle; // offset 0x30, size 0x90
};
// total size: 0x40
class DestructibleAsset : public xBaseAsset {
    // Members
    unsigned int HitPoints; // offset 0x10, size 0x4
    unsigned int HitFilter; // offset 0x14, size 0x4
    unsigned int HitFilterExcluded; // offset 0x18, size 0x4
    unsigned int PlayerFilter; // offset 0x1C, size 0x4
    class __States__ States; // offset 0x20, size 0x8
    class uid InitialFX; // offset 0x28, size 0x8
    class SoundBankSource SoundIdle; // offset 0x30, size 0xC
};
// total size: 0x8
class __States__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1C8
class zDestructibleState {
    // Members
    unsigned int percent; // offset 0x0, size 0x4
    class ModelInstanceAsset * modelInstance; // offset 0x4, size 0x4
    class zFXSpawn * idleFX; // offset 0x8, size 0x4
    class zFXSpawn * hitFX; // offset 0xC, size 0x4
    class zFXSpawn * switchFX; // offset 0x10, size 0x4
    class zSoundAsset soundIdle; // offset 0x18, size 0x90
    class zSoundAsset soundHit; // offset 0xA8, size 0x90
    class zSoundAsset soundSwitch; // offset 0x138, size 0x90
};
// total size: 0x18
class zUPPlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {
    // Members
    class zPlayer * player; // offset 0xC, size 0x4
    float m_timerRippleInterval; // offset 0x10, size 0x4
    float m_timerRippleNextAllowed; // offset 0x14, size 0x4
};
// total size: 0xA8
class zLedge : public xOGEntity {
    // Members
    class Ledge * asset; // offset 0x3C, size 0x4
    class xEnt * driver; // offset 0x40, size 0x4
    class xMat3x3 original_matrix; // offset 0x44, size 0x30
    class xVec3 original_pos; // offset 0x74, size 0xC
    class @class __anon; // offset 0x80, size 0x24
    class xRay3 lineLedge; // offset 0x80, size 0x24
    class CurveEntity * curveLedge; // offset 0x80, size 0x4
};
// total size: 0x38
class Ledge : public xBaseScene {
    // Members
    unsigned char LedgeType; // offset 0x10, size 0x1
    class @class __anon; // offset 0x18, size 0x8
    class LineLedge_Type Line; // offset 0x18, size 0x8
    class CurveLedge_Type Curve; // offset 0x18, size 0x8
    bool ReverseDirection; // offset 0x20, size 0x1
    class @class __anon; // offset 0x28, size 0x8
    class DriveTypeNone_Type DrivenByNone; // offset 0x28, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0x28, size 0x8
    unsigned char DriveType; // offset 0x30, size 0x1
};
// total size: 0x8
class @class {
    // Members
    class LineLedge_Type Line; // offset 0x0, size 0x8
    class CurveLedge_Type Curve; // offset 0x0, size 0x8
};
// total size: 0x8
class LineLedge_Type {
    // Members
    class __Points__ Points; // offset 0x0, size 0x8
};
// total size: 0x8
class CurveLedge_Type {
    // Members
    class uid Curve; // offset 0x0, size 0x8
};
// total size: 0x8
class @class {
    // Members
    class DriveTypeNone_Type DrivenByNone; // offset 0x0, size 0x1
    class DriveTypeObject_Type DrivenByObject; // offset 0x0, size 0x8
};
// total size: 0x1
class DriveTypeNone_Type {};
// total size: 0x8
class DriveTypeObject_Type {
    // Members
    class uid DriverObject; // offset 0x0, size 0x8
};
// total size: 0x24
class @class {
    // Members
    class xRay3 lineLedge; // offset 0x0, size 0x24
    class CurveEntity * curveLedge; // offset 0x0, size 0x4
};
// total size: 0x14C0
class zUpFloatingObjectGenerator : public zInteractionUP {
    // Members
    unsigned char firstInactive; // offset 0x50, size 0x1
    class zUpFloatingObject pool[10]; // offset 0x60, size 0x1400
    class zUpFloatingObject_BalloonAdaptee balloonAdaptees[10]; // offset 0x1460, size 0x50
    class zUpFloatingObjectGeneratorAsset * asset; // offset 0x14B0, size 0x4
};
// total size: 0x200
class zUpFloatingObject : public xOGEntity {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x40, size 0x48
    class UpFloatingObjectCollisionListener * collisionListener; // offset 0x88, size 0x4
    unsigned char index; // offset 0x8C, size 0x1
    bool die; // offset 0x8D, size 0x1
    bool collisionOccured; // offset 0x8E, size 0x1
    class hkVector4 collisionVelocity; // offset 0x90, size 0x10
    bool isActive; // offset 0xA0, size 0x1
    class RenderedPhysicsModel rpModel; // offset 0xB0, size 0x50
    class zUpFloatingObjectGeneratorAsset * asset; // offset 0x100, size 0x4
    class xMat4x3 matForDriving; // offset 0x104, size 0x40
    class zBalloonCluster * balloon; // offset 0x144, size 0x4
    class xVec3 localAttachPoint; // offset 0x148, size 0xC
    bool balloonAnimal; // offset 0x154, size 0x1
    float popTimer; // offset 0x158, size 0x4
    float bounceTimer; // offset 0x15C, size 0x4
    int bounceCount; // offset 0x160, size 0x4
    class xVec3 position; // offset 0x164, size 0xC
    class zSoundAsset soundBounce; // offset 0x170, size 0x90
};
// total size: 0x8
class UpFloatingObjectCollisionListener : public hkpCollisionListener, public hkpEntityListener {};
// total size: 0x140
class zUpFloatingObjectGeneratorAsset : public InteractionUP {
    // Members
    class vec3 interactPos; // offset 0x10, size 0xC
    float interactRadius; // offset 0x1C, size 0x4
    class RenderedPhysicsModelAsset rpmAsset; // offset 0x20, size 0x70
    class vec3 objAttachPoint; // offset 0x90, size 0xC
    float velDown; // offset 0x9C, size 0x4
    float linDamp; // offset 0xA0, size 0x4
    float bumpSpeedFactor; // offset 0xA4, size 0x4
    float meleeSpeedFactor; // offset 0xA8, size 0x4
    float superMeleeSpeedFactor; // offset 0xAC, size 0x4
    bool isPlatformType; // offset 0xB0, size 0x1
    class vec3 destination; // offset 0xB4, size 0xC
    class vec3 balloonPos; // offset 0xC0, size 0xC
    class ModelInstanceAsset balloonModel; // offset 0xD0, size 0x40
    class vec3 balloonAttachPoint; // offset 0x110, size 0xC
    float lifeSpan; // offset 0x11C, size 0x4
    class SoundBankSource soundBounce; // offset 0x120, size 0xC
    unsigned char numBalloons; // offset 0x12C, size 0x1
    float cordLength; // offset 0x130, size 0x4
    float cordForceUp; // offset 0x134, size 0x4
    unsigned char cordNodes; // offset 0x138, size 0x1
};
// total size: 0x8
class zUpFloatingObject_BalloonAdaptee : public AttachedObject {
    // Members
    class zUpFloatingObject * floatingObject; // offset 0x4, size 0x4
};
// total size: 0x1C8
class zPry : public zInteractionUPWithIcons {
    // Members
    bool Alive; // offset 0x82, size 0x1
    class xEntFrame frame; // offset 0x84, size 0x124
    class zAnimPackage * carlPryAnim; // offset 0x1A8, size 0x4
    class xVec3 dirRot; // offset 0x1AC, size 0xC
    class xVec3 dirLoc; // offset 0x1B8, size 0xC
    class zPryAsset * asset; // offset 0x1C4, size 0x4
};
// total size: 0x80
class zPryAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class uid DirID; // offset 0x50, size 0x8
    class uid Script; // offset 0x58, size 0x8
    class uid CarlPryAnim; // offset 0x60, size 0x8
    bool Alive; // offset 0x68, size 0x1
    bool OneShot; // offset 0x69, size 0x1
    class LinkAsset EventLinksNew; // offset 0x6C, size 0x8
};
// total size: 0x240
class zCrawl : public zInteractionUPWithIcons {
    // Members
    bool Auto; // offset 0x82, size 0x1
    bool Alive; // offset 0x83, size 0x1
    bool firstRun; // offset 0x84, size 0x1
    bool aIsEntry; // offset 0x85, size 0x1
    class xEntFrame frame; // offset 0x88, size 0x124
    class xMat4x3 originalMat; // offset 0x1AC, size 0x40
    float moveSpeed; // offset 0x1EC, size 0x4
    float pointLength; // offset 0x1F0, size 0x4
    float pointTime; // offset 0x1F4, size 0x4
    class xVec3 entryA; // offset 0x1F8, size 0xC
    class xVec3 entryB; // offset 0x204, size 0xC
    class xVec3 entryDir; // offset 0x210, size 0xC
    class xVec3 Ra; // offset 0x21C, size 0xC
    class xVec3 Rb; // offset 0x228, size 0xC
    class zCrawlAsset * asset; // offset 0x234, size 0x4
    class zAnimPackage * dugAnimCrawl; // offset 0x238, size 0x4
};
// total size: 0x80
class zCrawlAsset : public InteractionUpWithIcons {
    // Members
    bool Alive; // offset 0x1C, size 0x1
    bool Automated; // offset 0x1D, size 0x1
    bool OrientSnap; // offset 0x1E, size 0x1
    class vec3 entryA; // offset 0x20, size 0xC
    class vec3 entryB; // offset 0x2C, size 0xC
    class Matrix43POD tunnel; // offset 0x40, size 0x30
    class uid DugCrawlAnim; // offset 0x70, size 0x8
    class LinkAsset EventLinksNew; // offset 0x78, size 0x8
};
// total size: 0x150
class zDugLever : public zInteractionUPWithIcons {
    // Members
    bool dugReady; // offset 0x82, size 0x1
    class hkpRigidBody * leverHandleRigidBody; // offset 0x84, size 0x4
    class RenderedPhysicsModel casingModel; // offset 0x90, size 0x50
    bool Alive; // offset 0xE0, size 0x1
    float handleMoveTimer; // offset 0xE4, size 0x4
    class zDugLeverAsset * asset; // offset 0xE8, size 0x4
    class xVec3 dirLoc; // offset 0xEC, size 0xC
    class xVec3 dirRot; // offset 0xF8, size 0xC
    class xMat4x3 originalMatrixForHandle; // offset 0x104, size 0x40
    class zAnimPackage * dugLeverAnim; // offset 0x144, size 0x4
};
// total size: 0x120
class zDugLeverAsset : public InteractionUpWithIcons {
    // Members
    class vec3 leverPosition; // offset 0x1C, size 0xC
    class Rotation3 leverOrientation; // offset 0x28, size 0xC
    class ModelInstanceAsset leverModel; // offset 0x40, size 0x40
    class vec3 Scale; // offset 0x80, size 0xC
    class vec3 casingPosition; // offset 0x8C, size 0xC
    class Rotation3 casingOrientation; // offset 0x98, size 0xC
    class ModelInstanceAsset casingModel; // offset 0xB0, size 0x40
    class vec3 casingScale; // offset 0xF0, size 0xC
    class uid dugLeverAnim; // offset 0x100, size 0x8
    bool Alive; // offset 0x108, size 0x1
    class LinkAsset EventLinksNew; // offset 0x10C, size 0x8
};
// total size: 0x14
class zPlayerAIActionKevinSpringboard : public zPlayerAIAction {};
// total size: 0x18
class zPlayerAIActionFakeFightDog : public zPlayerAIAction {
    // Members
    bool started; // offset 0x14, size 0x1
};
// total size: 0x20
class zPlayerAIActionFleeFromNPCs : public zPlayerAIAction {
    // Members
    class xVec3 heading; // offset 0x14, size 0xC
};
// total size: 0x14
class zPlayerAIActionWriteInteractionData : public zPlayerAIAction {};
// total size: 0x18
class zPlayerAIActionCarlLowerCane : public zPlayerAIAction {
    // Members
    bool grabbed; // offset 0x14, size 0x1
};
// total size: 0x18
class zPlayerAIActionRussellDropRope : public zPlayerAIAction {
    // Members
    bool grabbed; // offset 0x14, size 0x1
};
// total size: 0x1C
class zPlayerAIActionCrank : public zPlayerAIAction {
    // Members
    bool startedCranking; // offset 0x14, size 0x1
    float timer; // offset 0x18, size 0x4
};
// total size: 0x24
class zPlayerAIActionPushPull : public zPlayerAIAction {
    // Members
    class zPushPull * pushPull; // offset 0x14, size 0x4
    class xVec3 initialDirection; // offset 0x18, size 0xC
};
// total size: 0x28
class zPlayerAIActionRotateToFace : public zPlayerAIAction {
    // Members
    class Action_PlayerAI_RotateToFace * myAsset; // offset 0x14, size 0x4
    class xVec3 desiredFacing; // offset 0x18, size 0xC
    bool stopWhenFacing; // offset 0x24, size 0x1
    bool valid; // offset 0x25, size 0x1
};
// total size: 0x10
class Action_PlayerAI_RotateToFace : public ActionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    class HumanPlayerStruct HumanPlayer; // offset 0x0, size 0x1
    class ClosestNPCStruct ClosestNPC; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x8
    unsigned int TargetType; // offset 0x8, size 0x4
    bool StopIfFacing; // offset 0xC, size 0x1
};
// total size: 0x8
class @class {
    // Members
    class HumanPlayerStruct HumanPlayer; // offset 0x0, size 0x1
    class ClosestNPCStruct ClosestNPC; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x8
};
// total size: 0x1
class HumanPlayerStruct {};
// total size: 0x1
class ClosestNPCStruct {};
// total size: 0x8
class VariableStruct {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
    bool VecAsPos; // offset 0x4, size 0x1
};
// total size: 0x1C
class zPlayerAIActionWritePlayerPos : public zPlayerAIAction {
    // Members
    class zPlayer * targetPlayer; // offset 0x14, size 0x4
    float timer; // offset 0x18, size 0x4
};
// total size: 0x14
class zPlayerAIActionCancelAICommand : public zPlayerAIAction {};
// total size: 0x24
class zPlayerAIActionJumpTo : public zPlayerAIAction {
    // Members
    class xVec3 goal; // offset 0x14, size 0xC
    bool jumped; // offset 0x20, size 0x1
    bool jumpPressed; // offset 0x21, size 0x1
};
// total size: 0x18
class zPlayerAIActionJump : public zPlayerAIAction {
    // Members
    bool jumped; // offset 0x14, size 0x1
    bool jumpPressed; // offset 0x15, size 0x1
};
// total size: 0x318
class zPlayerAIActionMoveTo : public zPlayerAIAction {
    // Members
    class zDelegateP0 observer; // offset 0x14, size 0x8
    float updateGoalTimer; // offset 0x1C, size 0x4
    class zPathFinder pathFinder; // offset 0x20, size 0x2A4
    class xVec3 goal; // offset 0x2C4, size 0xC
    class xVec3 currGoal; // offset 0x2D0, size 0xC
    enum eNavLinkActionCode actionCode; // offset 0x2DC, size 0x4
    class zPlayerAISearchMapLinkCostCalculator linkCostCalculator; // offset 0x2E0, size 0x14
    float retryPathingTimer; // offset 0x2F4, size 0x4
    float stuckTimer; // offset 0x2F8, size 0x4
    float bossJumpTimer; // offset 0x2FC, size 0x4
    class xVec3 stuckPos; // offset 0x300, size 0xC
    bool doingStuckJump; // offset 0x30C, size 0x1
    class MoveToSwingHelper * swingHelper; // offset 0x310, size 0x4
    bool actionCodeChanged; // offset 0x314, size 0x1
    bool jumped; // offset 0x315, size 0x1
    bool jumpPressed; // offset 0x316, size 0x1
};
// total size: 0x2A4
class zPathFinder {
    // Members
    class xBase * owner; // offset 0x0, size 0x4
    class zSearchStrategyAStar * strategy; // offset 0x4, size 0x4
    class xVec3 source; // offset 0x8, size 0xC
    class xVec3 currentGoal; // offset 0x14, size 0xC
    class xVec3 currentPos; // offset 0x20, size 0xC
    class zWallNet * sourceWN; // offset 0x2C, size 0x4
    class zWallNet * goalWN; // offset 0x30, size 0x4
    class zSearchPath wallNetPath; // offset 0x34, size 0x10C
    class zSearchPath wallNetGroupPath; // offset 0x140, size 0x10C
    class zDelegateP0 observer; // offset 0x24C, size 0x8
    class zPathFinderSearchMapLinkCostCalculator * costCalculator; // offset 0x254, size 0x4
    enum ePathLevel searchLevel; // offset 0x258, size 0x4
    enum ePathLevel highestEvalLevel; // offset 0x25C, size 0x4
    enum ePathLevel evalLevel; // offset 0x260, size 0x4
    enum eWallNetUserType wallNetUserType; // offset 0x264, size 0x4
    class zPathFinderSearchPathEvaluator wallNetEvaluator; // offset 0x268, size 0x14
    class zPathFinderSearchPathEvaluator wallNetGroupEvaluator; // offset 0x27C, size 0x14
    class zPathFinderNavMeshHeuristicCalculator wallNetHeuristicCalculator; // offset 0x290, size 0x10
    class zPathFinderNavMeshGroupHeuristicCalculator wallNetGroupHeuristicCalculator; // offset 0x2A0, size 0x4
};
// total size: 0x34
class zSearchStrategyAStar : public zSearchStrategy {
    // Members
    class zSearchMap * map; // offset 0x4, size 0x4
    class zSearchMapNode * goal; // offset 0x8, size 0x4
    class zSearchMapLinkCostCalculator * costCalculator; // offset 0xC, size 0x4
    class SearchNode * searchNodes; // offset 0x10, size 0x4
    int maxNodes; // offset 0x14, size 0x4
    class zBinaryHeap open; // offset 0x18, size 0x10
    class SearchNode * pathStart; // offset 0x28, size 0x4
    class HeuristicCalculator * calcHeuristic; // offset 0x2C, size 0x4
    bool isDone; // offset 0x30, size 0x1
};
// total size: 0x4
class zSearchStrategy {};
// total size: 0x18
class zSearchMap {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    int nodeCount; // offset 0x8, size 0x4
    class zSearchMapNode * nodes; // offset 0xC, size 0x4
    class xBase * source; // offset 0x10, size 0x4
};
// total size: 0xC
class zSearchMapNode {
    // Members
    int id; // offset 0x0, size 0x4
    int linkCount; // offset 0x4, size 0x4
    class zSearchMapLink * links; // offset 0x8, size 0x4
};
// total size: 0x8
class zSearchMapLink {
    // Members
    class zSearchMapNode * target; // offset 0x0, size 0x4
    class xBase * linkData; // offset 0x4, size 0x4
};
// total size: 0x4
class zSearchMapLinkCostCalculator {};
// total size: 0x30
class SearchNode {
    // Members
    class zSearchMapNode * mapNode; // offset 0x0, size 0x4
    float f; // offset 0x4, size 0x4
    float g; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    unsigned char userData[16]; // offset 0x14, size 0x10
    class SearchNode * parent; // offset 0x24, size 0x4
    class SearchNode * pathNext; // offset 0x28, size 0x4
    class zSearchMapLink * pathLink; // offset 0x2C, size 0x4
};
// total size: 0x10
class zBinaryHeap {
    // Members
    enum eHeapType heapType; // offset 0x0, size 0x4
    int maxHeapSize; // offset 0x4, size 0x4
    int heapSize; // offset 0x8, size 0x4
    class SearchNode * * heapArray; // offset 0xC, size 0x4
};
enum eHeapType {
    eHeapType_Min = 0,
    eHeapType_Max = 1,
};
// total size: 0x4
class HeuristicCalculator {};
// total size: 0x10C
class zSearchPath {
    // Members
    class zSearchMap * map; // offset 0x0, size 0x4
    int tail; // offset 0x4, size 0x4
    class Step path[32]; // offset 0x8, size 0x100
    bool completePath; // offset 0x108, size 0x1
};
// total size: 0x8
class Step {
    // Members
    class zSearchMapNode * node; // offset 0x0, size 0x4
    class zSearchMapLink * link; // offset 0x4, size 0x4
};
// total size: 0x10
class zPathFinderSearchMapLinkCostCalculator : public zSearchMapLinkCostCalculator {
    // Members
    class xVec3 startPos; // offset 0x4, size 0xC
};
enum ePathLevel {
    ePathLevel_None = 0,
    ePathLevel_WallNet = 1,
    ePathLevel_WallNetGroup = 2,
};
enum eWallNetUserType {
    eWallNetUserType_Player = 0,
    eWallNetUserType_NPC = 1,
};
// total size: 0x14
class zPathFinderSearchPathEvaluator {
    // Members
    float testRadius; // offset 0x0, size 0x4
    int currentStep; // offset 0x4, size 0x4
    int totalSteps; // offset 0x8, size 0x4
    class Step * steps; // offset 0xC, size 0x4
    class xBase * owner; // offset 0x10, size 0x4
};
// total size: 0x10
class zPathFinderNavMeshHeuristicCalculator : public HeuristicCalculator {
    // Members
    class xVec3 goal; // offset 0x4, size 0xC
};
// total size: 0x4
class zPathFinderNavMeshGroupHeuristicCalculator : public HeuristicCalculator {};
enum eNavLinkActionCode {
    eNavLinkActionCode_None = 0,
    eNavLinkActionCode_TraverseWallnet = 1,
    eNavLinkActionCode_Jump = 2,
    eNavLinkActionCode_Swing = 3,
};
// total size: 0x14
class zPlayerAISearchMapLinkCostCalculator : public zPathFinderSearchMapLinkCostCalculator {
    // Members
    class zCommonPlayer * thePlayer; // offset 0x10, size 0x4
};
// total size: 0x3C
class zPlayerAIActionIdle : public zPlayerAIAction {
    // Members
    float getAwayTimer; // offset 0x14, size 0x4
    class xVec3 awayDir; // offset 0x18, size 0xC
    class zPlayerCharacterProxyCollisionListener * collListener; // offset 0x24, size 0x4
    enum eAwayDirs prevDirs[4]; // offset 0x28, size 0x10
    bool playerHasCollided[4]; // offset 0x38, size 0x4
};
enum eAwayDirs {
    eAwayDir_Left = 0,
    eAwayDir_Right = 1,
    eAwayDir_Forward = 2,
    eAwayDir_Count = 3,
};
// total size: 0x14
class zNPCBTSquishAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTUpdateUPBugCatchingContextActionAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTKillFloatingObjectAction : public zNPCBTAction {};
// total size: 0x520
class zNPCBTFollowFloatingObjectAction : public zNPCBTMoveToAction {
    // Members
    class zUpFloatingObject * floatingObj; // offset 0x51C, size 0x4
};
// total size: 0x51C
class zNPCBTMoveToAction : public zNPCBTAction {
    // Members
    class Action_NPC_MoveTo * asset; // offset 0x14, size 0x4
    class zNPCSteeringMoveToControl moveToControl; // offset 0x18, size 0x208
    class zNPCBTActionAnim actionAnim; // offset 0x220, size 0x18
    class zNPCBTStuckRangeMultiplier stuckRangeMultiplier; // offset 0x238, size 0x10
    bool endWhenArrived; // offset 0x248, size 0x1
    class zPathFinder pathFinder; // offset 0x24C, size 0x2A4
    class xVec3 currentDest; // offset 0x4F0, size 0xC
    class xVec3 finalDest; // offset 0x4FC, size 0xC
    float updateDestTimer; // offset 0x508, size 0x4
    float updatePathTimer; // offset 0x50C, size 0x4
    enum eNavLinkActionCode actionCode; // offset 0x510, size 0x4
    enum ePathEvalResult pathResult; // offset 0x514, size 0x4
    bool pathFinderSetupDone; // offset 0x518, size 0x1
};
// total size: 0x2C
class Action_NPC_MoveTo : public ActionBase {
    // Members
    class NPC_Action_MovementData MovementData; // offset 0x0, size 0x24
    bool UsePathFinding; // offset 0x24, size 0x1
    bool EnableObjectAvoidance; // offset 0x25, size 0x1
    bool CheckForWallNetEdges; // offset 0x26, size 0x1
    bool ExitWhenAnimationIsDone; // offset 0x27, size 0x1
    bool FastMove; // offset 0x28, size 0x1
};
// total size: 0x24
class NPC_Action_MovementData {
    // Members
    class @class __anon; // offset 0x0, size 0x14
    class MoseyStruct Mosey; // offset 0x0, size 0x1
    class WalkStruct Walk; // offset 0x0, size 0x1
    class JogStruct Jog; // offset 0x0, size 0x1
    class RunStruct Run; // offset 0x0, size 0x1
    class SprintStruct Sprint; // offset 0x0, size 0x1
    class StalkStruct Stalk; // offset 0x0, size 0x1
    class ChargeStruct Charge; // offset 0x0, size 0x1
    class CustomStruct Custom; // offset 0x0, size 0x14
    enum eNPCMoveType MoveType; // offset 0x14, size 0x4
    enum eHeadingCalcType Heading; // offset 0x18, size 0x4
    bool Arrive; // offset 0x1C, size 0x1
    float ArriveTolerance; // offset 0x20, size 0x4
};
// total size: 0x14
class @class {
    // Members
    class MoseyStruct Mosey; // offset 0x0, size 0x1
    class WalkStruct Walk; // offset 0x0, size 0x1
    class JogStruct Jog; // offset 0x0, size 0x1
    class RunStruct Run; // offset 0x0, size 0x1
    class SprintStruct Sprint; // offset 0x0, size 0x1
    class StalkStruct Stalk; // offset 0x0, size 0x1
    class ChargeStruct Charge; // offset 0x0, size 0x1
    class CustomStruct Custom; // offset 0x0, size 0x14
};
// total size: 0x1
class MoseyStruct {};
// total size: 0x1
class WalkStruct {};
// total size: 0x1
class JogStruct {};
// total size: 0x1
class RunStruct {};
// total size: 0x1
class SprintStruct {};
// total size: 0x1
class StalkStruct {};
// total size: 0x1
class ChargeStruct {};
// total size: 0x14
class CustomStruct {
    // Members
    float MaxSpeed; // offset 0x0, size 0x4
    float MaxAcceleration; // offset 0x4, size 0x4
    float TurningRadius; // offset 0x8, size 0x4
    float TurnSpring; // offset 0xC, size 0x4
    class Pointer32 AnimationName; // offset 0x10, size 0x4
};
enum eNPCMoveType {
    eNPCMoveType_Mosey = 0,
    eNPCMoveType_Walk = 1,
    eNPCMoveType_Jog = 2,
    eNPCMoveType_Run = 3,
    eNPCMoveType_Sprint = 4,
    eNPCMoveType_Stalk = 5,
    eNPCMoveType_Charge = 6,
    eNPCMoveType_Custom = 7,
    END_eNPCMoveType_ENUM = 8,
};
// total size: 0x208
class zNPCSteeringMoveToControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x48, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x64, size 0x10
    class zPlayerAvoidanceData playerAvoidanceData; // offset 0x74, size 0x10
    class zObjectAvoidanceData objectAvoidanceData; // offset 0x84, size 0x10
    class zNPCSteeringDest destination; // offset 0x94, size 0x10
    class zPIDController3 pidController; // offset 0xA4, size 0x11C
    float arriveTolerance2; // offset 0x1C0, size 0x4
    int arriveToDest; // offset 0x1C4, size 0x4
    bool useWallNet; // offset 0x1C8, size 0x1
    class zNPCSteeringAccumulator accAccum; // offset 0x1CC, size 0x10
    class zWallNetDestinationXZ wallNetDestination; // offset 0x1DC, size 0x2C
};
// total size: 0x1C
class zWanderData {
    // Members
    class xVec3 prevWanderDir; // offset 0x0, size 0xC
    float wanderAcc; // offset 0xC, size 0x4
    float wanderFOV; // offset 0x10, size 0x4
    float wanderJitterPerSec; // offset 0x14, size 0x4
    bool ignoreY; // offset 0x18, size 0x1
    bool enabled; // offset 0x19, size 0x1
};
// total size: 0x10
class zWallAvoidanceData {
    // Members
    float avoidanceMaxAcc; // offset 0x0, size 0x4
    float avoidanceTime; // offset 0x4, size 0x4
    float avoidanceMinDist; // offset 0x8, size 0x4
    bool enabled; // offset 0xC, size 0x1
};
// total size: 0x10
class zPlayerAvoidanceData {
    // Members
    float avoidanceAcc; // offset 0x0, size 0x4
    float avoidanceMaxAcc; // offset 0x4, size 0x4
    float avoidanceMaxDist; // offset 0x8, size 0x4
    bool ignoreY; // offset 0xC, size 0x1
    bool enabled; // offset 0xD, size 0x1
};
// total size: 0x10
class zObjectAvoidanceData {
    // Members
    float avoidanceMaxAcc; // offset 0x0, size 0x4
    float avoidanceTime; // offset 0x4, size 0x4
    float avoidanceMinDist; // offset 0x8, size 0x4
    bool enabled; // offset 0xC, size 0x1
};
// total size: 0x11C
class zPIDController3 {
    // Members
    class xVec3 errorsArray[16]; // offset 0x0, size 0xC0
    float dtArray[16]; // offset 0xC0, size 0x40
    int lastPos; // offset 0x100, size 0x4
    float kP; // offset 0x104, size 0x4
    float kI; // offset 0x108, size 0x4
    float kD; // offset 0x10C, size 0x4
    class xVec3 estimatedDestSpeed; // offset 0x110, size 0xC
};
// total size: 0x10
class zNPCSteeringAccumulator {
    // Members
    class xVec3 curAccumulatedVec; // offset 0x0, size 0xC
    float curAccumulatedMag; // offset 0xC, size 0x4
};
// total size: 0x2C
class zWallNetDestinationXZ {
    // Members
    class zWallNetPositionXZ wantedDestination; // offset 0x0, size 0x14
    class zWallNetPositionXZ modifiedDestination; // offset 0x14, size 0x14
    bool isWantedModified; // offset 0x28, size 0x1
    bool isWantedReachable; // offset 0x29, size 0x1
    bool isValid; // offset 0x2A, size 0x1
};
// total size: 0x18
class zNPCBTActionAnim {
    // Members
    char * animationName; // offset 0x0, size 0x4
    unsigned int animStateID; // offset 0x4, size 0x4
    float blendTime; // offset 0x8, size 0x4
    float animStartTime; // offset 0xC, size 0x4
    float leanMaxAngle; // offset 0x10, size 0x4
    bool enabled; // offset 0x14, size 0x1
};
// total size: 0x10
class zNPCBTStuckRangeMultiplier {
    // Members
    float stuckVel2; // offset 0x0, size 0x4
    float multiplierRate; // offset 0x4, size 0x4
    float maxMultiplier; // offset 0x8, size 0x4
    float curMultiplier; // offset 0xC, size 0x4
};
enum ePathEvalResult {
    ePathEvalResult_Ok = 0,
    ePathEvalResult_Searching = 1,
    ePathEvalResult_NoPath_OutsideOfWallNet = 2,
    ePathEvalResult_NoPath_NoConnection = 3,
    ePathEvalResult_NoPath_InvalidSetup = 4,
    ePathEvalResult_Pause = 5,
    ePathEvalResult_PathEnd = 6,
};
// total size: 0x14
class zNPCWaspBTWriteAttackDestinationAction : public zNPCBTAction {};
// total size: 0x530
class zNPCWaspBTFollowPlayerAction : public zNPCBTMoveToAction {
    // Members
    class zDelegateP0 observer; // offset 0x51C, size 0x8
    unsigned int playerVariable; // offset 0x524, size 0x4
    class zPlayer * player; // offset 0x528, size 0x4
    bool forceExit; // offset 0x52C, size 0x1
};
// total size: 0x520
class zNPCWaspBTFollowFloatingObjectAction : public zNPCBTFollowFloatingObjectAction {};
// total size: 0x74
class zNPCWaspBTStunAction : public zNPCBTStunAction {};
// total size: 0x74
class zNPCBTStunAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0x48
class zNPCSteeringStopControl : public zNPCSteeringControl {};
// total size: 0x78
class zNPCWaspBTHitAction : public zNPCBTHitAction {
    // Members
    float knockbackVel; // offset 0x74, size 0x4
};
// total size: 0x74
class zNPCBTHitAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0x51C
class zNPCWaspBTAttackEndAction : public zNPCBTMoveToAction {};
// total size: 0x74
class zNPCWaspBTAttackAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0x51C
class zNPCWaspBTAttackRunAction : public zNPCBTMoveToAction {};
// total size: 0x78
class zNPCWaspBTAttackBeginAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
    class zPlayer * player; // offset 0x74, size 0x4
};
// total size: 0x560
class zNPCWaspBTAttackOrbitAction : public zNPCBTMoveToAction {
    // Members
    class zDelegateP0 observer; // offset 0x51C, size 0x8
    class zNPCBTActionAnim actionAnim; // offset 0x524, size 0x18
    class zPlayer * player; // offset 0x53C, size 0x4
    bool forceExit; // offset 0x540, size 0x1
    bool orbitLeft; // offset 0x541, size 0x1
    float orbitRadius; // offset 0x544, size 0x4
    float goalDestOffsetAngle; // offset 0x548, size 0x4
    float currentDestBaseAngle; // offset 0x54C, size 0x4
    float currentDestOffsetAngle; // offset 0x550, size 0x4
    bool destAtGoalDest; // offset 0x554, size 0x1
    float idleTimer; // offset 0x558, size 0x4
    bool idling; // offset 0x55C, size 0x1
};
// total size: 0x34
class zNPCCrocBTKODrift : public zNPCBTAction {
    // Members
    class xVec3 startPos; // offset 0x14, size 0xC
    class xVec3 endPos; // offset 0x20, size 0xC
    float timeSinceStarted; // offset 0x2C, size 0x4
    float duration; // offset 0x30, size 0x4
};
// total size: 0x14
class zNPCCrocBTWriteKODriftPoint : public zNPCBTAction {};
// total size: 0x18
class zNPCBTCrocBossKnockOutOnContactBspAction : public zNPCBTAction {
    // Members
    class zNPCCollisionListener * collisionListener; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCCrocBTWriteTargetPositionAction : public zNPCBTAction {};
// total size: 0x20
class zNPCCrocBTBrainAction : public zNPCBTAction {
    // Members
    class zFXSpawn * fxAssetCrocRipple; // offset 0x14, size 0x4
    float ripplePeriod; // offset 0x18, size 0x4
    float timeUntilNextRipple; // offset 0x1C, size 0x4
};
// total size: 0x14
class zNPCSnakeBTWriteTargetPositionAction : public zNPCBTAction {};
// total size: 0x18
class zNPCSnakeBTTailUpdateAction : public zNPCBTAction {
    // Members
    class MatrixSample * sampleList; // offset 0x14, size 0x4
};
// total size: 0x44
class MatrixSample {
    // Members
    class xMat4x3 mat; // offset 0x0, size 0x40
    float distToNext; // offset 0x40, size 0x4
};
// total size: 0x2C
class zNPCSpiderBTFaceTargetAction : public zNPCBTAction {
    // Members
    class zNPCBTActionAnim actionAnim; // offset 0x14, size 0x18
};
// total size: 0x64
class zNPCSpiderBTKnockbackAction : public zNPCBTAction {
    // Members
    float timer; // offset 0x14, size 0x4
    bool applied; // offset 0x18, size 0x1
    class zNPCSteeringStopControl stopControl; // offset 0x1C, size 0x48
};
// total size: 0x154
class zNPCSpiderBTJumpAttackAction : public zNPCBTAction {
    // Members
    class zNPCSteeringJumpControl jumpControl; // offset 0x14, size 0x78
    class zNPCSteeringStopControl stopControl; // offset 0x8C, size 0x48
    class zNPCSteeringNoMoveControl noMoveControl; // offset 0xD4, size 0x48
    class zSpiderJumpPlayerCollisionListener collisionListener; // offset 0x11C, size 0xC
    class zNPCBTActionAnim actionAnim; // offset 0x128, size 0x18
    class zUPHumanPlayer * player; // offset 0x140, size 0x4
    bool onBack; // offset 0x144, size 0x1
    unsigned int attackState; // offset 0x148, size 0x4
    float damageTimer; // offset 0x14C, size 0x4
    float shakeTimer; // offset 0x150, size 0x4
};
// total size: 0x78
class zNPCSteeringJumpControl : public zNPCSteeringControl {
    // Members
    float apexHeight; // offset 0x48, size 0x4
    float launchVelXZ; // offset 0x4C, size 0x4
    float maxLaunchVelY; // offset 0x50, size 0x4
    class zNPCSteeringDest destination; // offset 0x54, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x64, size 0x10
    bool useHeight; // offset 0x74, size 0x1
    bool jumped; // offset 0x75, size 0x1
};
// total size: 0x48
class zNPCSteeringNoMoveControl : public zNPCSteeringControl {};
// total size: 0xC
class zSpiderJumpPlayerCollisionListener : public zNPCCollisionListener {
    // Members
    class zNPCSpiderBTJumpAttackAction * owner; // offset 0x8, size 0x4
};
// total size: 0x80
class zNPCDogBTHitAction : public zNPCBTHitAction, public RagdollCallbackListener {
    // Members
    bool knockbackApplied; // offset 0x78, size 0x1
    float timer; // offset 0x7C, size 0x4
};
// total size: 0x524
class zNPCDogBTFollowProjectileAction : public zNPCBTFollowProjectileAction {
    // Members
    float timer; // offset 0x520, size 0x4
};
// total size: 0x520
class zNPCBTFollowProjectileAction : public zNPCBTMoveToAction {
    // Members
    class zProjectile * projectile; // offset 0x51C, size 0x4
};
// total size: 0x188
class zProjectile {
    // Members
    class zProjectile * nextProjectile; // offset 0x0, size 0x4
    bool updateEnabled; // offset 0x4, size 0x1
    bool projectileDied; // offset 0x5, size 0x1
    bool projectileCollided; // offset 0x6, size 0x1
    bool decalCast; // offset 0x7, size 0x1
    enum ProjectileType projectileType; // offset 0x8, size 0x4
    class ProjectileAsset * projectileAsset; // offset 0xC, size 0x4
    unsigned int projectileID; // offset 0x10, size 0x4
    float currentAge; // offset 0x14, size 0x4
    class zFXSpawn * timeoutFXAsset; // offset 0x18, size 0x4
    class zFXSpawn * explosionFXAsset; // offset 0x1C, size 0x4
    class zFXSpawn * bounceFXAsset; // offset 0x20, size 0x4
    class zFXSpawn * muzzleFXAsset; // offset 0x24, size 0x4
    class zDecal * decalGenerator; // offset 0x28, size 0x4
    class zFXSpawn * timeoutFXScriptSpawnPoint; // offset 0x2C, size 0x4
    class zFXSpawn * explosionFXScriptSpawnPoint; // offset 0x30, size 0x4
    class zFXSpawn * bounceFXScriptSpawnPoint; // offset 0x34, size 0x4
    class zFXSpawn * muzzleFXScriptSpawnPoint; // offset 0x38, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x3C, size 0x4
    class xBase * owner; // offset 0x40, size 0x4
    class zProjectileEntity renderEntity; // offset 0x44, size 0x98
    class zProjectileHavok physicsEntity; // offset 0xE0, size 0xA0
    bool projectileSpawnComplete; // offset 0x184, size 0x1
};
enum ProjectileType {
    BASE = 0,
    UP_PLAYGROUND_LAUNCHABLE = 1,
    UP_PLAYGROUND_ROLLABLE = 2,
    UP_PLAYER_THROWABLE = 3,
    SB_PUCK = 4,
    SB_BOMBNPC = 5,
    MM_GRENADE = 6,
    MM_MISSILE = 7,
};
// total size: 0x130
class ProjectileAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class Projectile_Physics_Data_Struct ProjectilePhysicsData; // offset 0x40, size 0x58
    enum eProjectileType projectileType; // offset 0x98, size 0x4
    class __projectileUnion__ projectileUnion; // offset 0xA0, size 0x40
    enum eLifetimeType lifetimeType; // offset 0xE0, size 0x4
    class @class lifetime; // offset 0xE8, size 0x10
    float launchSpeed; // offset 0xF8, size 0x4
    enum eExplosionType explosionType; // offset 0xFC, size 0x4
    class @class explosionBehavior; // offset 0x100, size 0x18
    class uid BounceFXSpawnID; // offset 0x118, size 0x8
    class uid MuzzleFlashFXSpawnID; // offset 0x120, size 0x8
    class uid DecalGenID; // offset 0x128, size 0x8
};
// total size: 0x58
class Projectile_Physics_Data_Struct : public PhysicsDataStruct {
    // Members
    float addedGravity; // offset 0x54, size 0x4
};
enum eProjectileType {
    Default = 0,
    SB_BombNPC = 1,
    SB_Puck = 2,
    MM_Grenade = 3,
    MM_Missile = 4,
    Up_Playground_Launchable = 5,
    Up_Playground_Rollable = 6,
    Up_Player_Throwable = 7,
    END_eProjectileTypeENUM = 8,
};
// total size: 0x40
class __projectileUnion__ {
    // Members
    enum eProjectileType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x38
};
// total size: 0x38
class @class {
    // Members
    class Default_Custom_Params _Default; // offset 0x0, size 0x4
    class SB_BombNPC_Custom_Params _SB_BombNPC; // offset 0x0, size 0x4
    class SB_Puck_Custom_Params _SB_Puck; // offset 0x0, size 0x18
    class MM_Grenade_Custom_Params _MM_Grenade; // offset 0x0, size 0x8
    class MM_Missile_Custom_Params _MM_Missile; // offset 0x0, size 0x38
    class UP_Playground_Launchable_Custom_Params _Up_Playground_Launchable; // offset 0x0, size 0x8
    class UP_Playground_Rollable_Custom_Params _Up_Playground_Rollable; // offset 0x0, size 0x14
    class Default_Custom_Params _Up_Player_Throwable; // offset 0x0, size 0x4
};
// total size: 0x4
class Default_Custom_Params {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x4
class SB_BombNPC_Custom_Params : public Default_Custom_Params {};
// total size: 0x18
class SB_Puck_Custom_Params {
    // Members
    enum ePuckType puckType; // offset 0x0, size 0x4
    bool homing; // offset 0x4, size 0x1
    float hitDamage; // offset 0x8, size 0x4
    float inertiaTensorMassMult; // offset 0xC, size 0x4
    class uid activeFXSpawnID; // offset 0x10, size 0x8
};
enum ePuckType {
    Player_Basic = 0,
    Player_Spongebuff = 1,
    Player_Powerup = 2,
    Turret = 3,
    END_ePuckTypeENUM = 4,
};
// total size: 0x8
class MM_Grenade_Custom_Params {
    // Members
    class uid activeFXSpawnID; // offset 0x0, size 0x8
};
// total size: 0x38
class MM_Missile_Custom_Params {
    // Members
    class uid activeFXSpawnID; // offset 0x0, size 0x8
    bool onlyDisplayActiveFXWhileThrusting; // offset 0x8, size 0x1
    float thrusterAccel; // offset 0xC, size 0x4
    float thrusterMaxSpeed; // offset 0x10, size 0x4
    enum eMM_Missile_TargetingMode targetingMode; // offset 0x14, size 0x4
    class @class targetingModeUnion; // offset 0x18, size 0x4
    enum eMM_Missile_ThrusterActivation thrusterActivation; // offset 0x1C, size 0x4
    class @class thrusterActivationUnion; // offset 0x20, size 0x4
    enum eMM_Missile_ThrusterDuration thrusterDuration; // offset 0x24, size 0x4
    class @class thrusterDurationUnion; // offset 0x28, size 0x4
    enum eMM_Missile_DeflectionMode deflectionMode; // offset 0x2C, size 0x4
    class @class deflectionModeUnion; // offset 0x30, size 0x4
    unsigned char pad0; // offset 0x34, size 0x1
    unsigned char pad1; // offset 0x35, size 0x1
    unsigned char pad2; // offset 0x36, size 0x1
};
enum eMM_Missile_TargetingMode {
    e_MM_Missile_TargetingMode_DumbFire = 0,
    e_MM_Missile_TargetingMode_Homing = 1,
    e_MM_Missile_TargetingMode_PredictiveHoming = 2,
    END_e_MM_Missile_TargetingMode_ENUM = 3,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct DumbFire; // offset 0x0, size 0x4
    class MM_Missile_TargetingMode_Homing_Struct Homing; // offset 0x0, size 0x4
    class MM_Missile_TargetingMode_Homing_Struct PredictiveHoming; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_Pad_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_TargetingMode_Homing_Struct {
    // Members
    float homing_TurnSpeed; // offset 0x0, size 0x4
};
enum eMM_Missile_ThrusterActivation {
    e_MM_Missile_ThrusterActivation_On = 0,
    e_MM_Missile_ThrusterActivation_Off = 1,
    e_MM_Missile_ThrusterActivation_Timed = 2,
    END_e_MM_Missile_ThrusterActivation_ENUM = 3,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct On; // offset 0x0, size 0x4
    class MM_Missile_Pad_Struct Off; // offset 0x0, size 0x4
    class MM_Missile_ThrusterActivation_Timed_Struct Timed; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_ThrusterActivation_Timed_Struct {
    // Members
    float thrusterActivation_Time; // offset 0x0, size 0x4
};
enum eMM_Missile_ThrusterDuration {
    e_MM_Missile_ThrusterDuration_Unlimited = 0,
    e_MM_Missile_ThrusterDuration_Timed = 1,
    END_e_MM_Missile_ThrusterDuration_ENUM = 2,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_Pad_Struct Unlimited; // offset 0x0, size 0x4
    class MM_Missile_ThrusterDuration_Timed_Struct Timed; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_ThrusterDuration_Timed_Struct {
    // Members
    float thrusterDuration_Time; // offset 0x0, size 0x4
};
enum eMM_Missile_DeflectionMode {
    e_MM_Missile_DeflectionMode_Enabled = 0,
    e_MM_Missile_DeflectionMode_Disabled = 1,
    END_e_MM_Missile_DeflectionMode_ENUM = 2,
};
// total size: 0x4
class @class {
    // Members
    class MM_Missile_DeflectionMode_Enabled_Struct Enabled; // offset 0x0, size 0x4
    class MM_Missile_Pad_Struct Disabled; // offset 0x0, size 0x4
};
// total size: 0x4
class MM_Missile_DeflectionMode_Enabled_Struct {
    // Members
    float deflectionMode_Angle; // offset 0x0, size 0x4
};
// total size: 0x8
class UP_Playground_Launchable_Custom_Params : public UP_Playground_Base_Custom_Params {
    // Members
    float apexHeight; // offset 0x4, size 0x4
};
// total size: 0x4
class UP_Playground_Base_Custom_Params {
    // Members
    bool freezeOnGround; // offset 0x0, size 0x1
    unsigned char pad0; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
};
// total size: 0x14
class UP_Playground_Rollable_Custom_Params : public UP_Playground_Base_Custom_Params {
    // Members
    float maxRollSpeed; // offset 0x4, size 0x4
    float timeToStopMoving; // offset 0x8, size 0x4
    float targetSpeed; // offset 0xC, size 0x4
    float minHitSpeed; // offset 0x10, size 0x4
};
enum eLifetimeType {
    e_Lifetime_Finite = 0,
    e_Lifetime_Infinite = 1,
    END_e_Lifetime_ENUM = 2,
};
// total size: 0x10
class @class {
    // Members
    class Finite_Lifetime_Struct Finite; // offset 0x0, size 0x10
    class Infinite_Lifetime_Struct Infinite; // offset 0x0, size 0x4
};
// total size: 0x10
class Finite_Lifetime_Struct {
    // Members
    float lifetime; // offset 0x0, size 0x4
    float TimeFXLeadTime; // offset 0x4, size 0x4
    class uid TimeoutFXSpawnID; // offset 0x8, size 0x8
};
// total size: 0x4
class Infinite_Lifetime_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
enum eExplosionType {
    e_Explosion_Explodes = 0,
    e_Explosion_NeverExplodes = 1,
    END_e_Explosion_ENUM = 2,
};
// total size: 0x18
class @class {
    // Members
    class Explodes_Struct Explodes; // offset 0x0, size 0x18
    class Never_Explodes_Struct NeverExplodes; // offset 0x0, size 0x4
};
// total size: 0x18
class Explodes_Struct {
    // Members
    float explosionRadius; // offset 0x0, size 0x4
    float damage; // offset 0x4, size 0x4
    class uid ExplosionFXSpawnID; // offset 0x8, size 0x8
    bool explodesOnContact; // offset 0x10, size 0x1
    bool explodesOnTimeout; // offset 0x11, size 0x1
    bool damagesOwner; // offset 0x12, size 0x1
};
// total size: 0x4
class Never_Explodes_Struct {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x98
class zProjectileEntity {
    // Members
    class xMat4x3 matrix; // offset 0x0, size 0x40
    class xMat4x3 prevMatrix; // offset 0x40, size 0x40
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x80, size 0x4
    class xOGModel * modelRenderData; // offset 0x84, size 0x4
    class zProjectile * ownerProjectile; // offset 0x88, size 0x4
    float boundRadius; // offset 0x8C, size 0x4
    class xEnt * attachedEnt; // offset 0x90, size 0x4
    int attachedEntBone : 31; // offset 0x94, size 0x4, bit offset 0
    bool visible : 1; // offset 0x97, size 0x1, bit offset 7
};
// total size: 0xA0
class zProjectileHavok : public xBase {
    // Members
    class HavokSimObj havokSimObj; // offset 0x38, size 0x4
    class EntityHandleBase dummyHandle; // offset 0x40, size 0x48
    class zProjectile * ownerProjectile; // offset 0x88, size 0x4
    class xVec3 permenantAcceleration; // offset 0x8C, size 0xC
    enum eHavok_Mode havokMode; // offset 0x98, size 0x4
    class ProjectileCollisionListener * projectileCollisionListener; // offset 0x9C, size 0x4
};
// total size: 0x4
class HavokSimObj {
    // Members
    class hkpRigidBody * pRigidBody; // offset 0x0, size 0x4
};
enum eHavok_Mode {
    KEYFRAME_HAVOK = 0,
    NORMAL_HAVOK = 1,
    NUM_HAVOK_MODES = 2,
};
// total size: 0x9C
class zNPCDogBTFloatOffScreenAction : public zNPCBTAction {
    // Members
    class zNPCSteeringFloatControl floatControl; // offset 0x14, size 0x54
    class zNPCBTActionAnim actionAnim; // offset 0x68, size 0x18
    float targetY; // offset 0x80, size 0x4
    class xOGModelHandle balloonModel; // offset 0x84, size 0x4
    unsigned int state; // offset 0x88, size 0x4
    float collisionOffDelay; // offset 0x8C, size 0x4
    unsigned int animCycleNum; // offset 0x90, size 0x4
    unsigned int numAnim; // offset 0x94, size 0x4
    unsigned int fidgetWeight; // offset 0x98, size 0x4
};
// total size: 0x54
class zNPCSteeringFloatControl : public zNPCSteeringControl {
    // Members
    class xVec3 floatAcc; // offset 0x48, size 0xC
};
// total size: 0x14
class zNPCDogBTCleanupCombatAction : public zNPCBTAction {};
// total size: 0x78
class zNPCDogBTAttackEndAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
    unsigned int attackEndState; // offset 0x74, size 0x4
};
// total size: 0x74
class zNPCDogBTAttackAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0xB8
class zNPCDogBTAttackJumpAction : public zNPCBTJumpAction {};
// total size: 0xB8
class zNPCBTJumpAction : public zNPCBTAction {
    // Members
    class zNPCSteeringJumpControl jumpControl; // offset 0x14, size 0x78
    class zNPCBTActionAnim actionAnim; // offset 0x8C, size 0x18
    unsigned int jumpState; // offset 0xA4, size 0x4
    bool useJumpStartAnim; // offset 0xA8, size 0x1
    bool useJumpEndAnim; // offset 0xA9, size 0x1
    char * jumpAnimName; // offset 0xAC, size 0x4
    char * jumpStartAnimName; // offset 0xB0, size 0x4
    char * jumpEndAnimName; // offset 0xB4, size 0x4
};
// total size: 0x52C
class zNPCDogBTAttackRunAction : public zNPCBTMoveToAction {
    // Members
    class zNPCDogAttackRunCollisionListener collisionListener; // offset 0x51C, size 0xC
    bool collided; // offset 0x528, size 0x1
};
// total size: 0xC
class zNPCDogAttackRunCollisionListener : public zNPCCollisionListener {
    // Members
    class zNPCDogBTAttackRunAction * action; // offset 0x8, size 0x4
};
// total size: 0x84
class zNPCDogBTAttackIdleAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
    class zPlayer * player; // offset 0x74, size 0x4
    bool rotating; // offset 0x78, size 0x1
    char * idleAnimName; // offset 0x7C, size 0x4
    char * rotateAnimName; // offset 0x80, size 0x4
};
// total size: 0x78
class zNPCDogBTAttackBeginAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
    class zPlayer * player; // offset 0x74, size 0x4
};
// total size: 0x548
class zNPCDogBTAttackPrepareAction : public zNPCBTMoveToAction {
    // Members
    class zNPCBTActionAnim actionAnim; // offset 0x51C, size 0x18
    class zPlayer * player; // offset 0x534, size 0x4
    bool orbitLeft; // offset 0x538, size 0x1
    float orbitTimer; // offset 0x53C, size 0x4
    float orbitExpireTime; // offset 0x540, size 0x4
    float orbitRadius; // offset 0x544, size 0x4
};
// total size: 0x14
class zNPCDogBTWriteAttackDestinationAction : public zNPCBTAction {};
// total size: 0x534
class zNPCBTPathThruMPsShiftedAction : public zNPCBTMoveToAction {
    // Members
    class xVec3 pathThruDest; // offset 0x51C, size 0xC
    class xMovePoint * current; // offset 0x528, size 0x4
    class xMovePoint * target; // offset 0x52C, size 0x4
    bool initialized; // offset 0x530, size 0x1
};
// total size: 0x24
class zNPCBT_InstantSpawnNPC_Action : public zNPCBTAction {
    // Members
    class Action_NPC_InstantSpawnNPC * asset; // offset 0x14, size 0x4
    class zNPCGeneric * NPCToSpawn; // offset 0x18, size 0x4
    bool launching; // offset 0x1C, size 0x1
    class xMovePoint * pMovePoint; // offset 0x20, size 0x4
};
// total size: 0x8
class Action_NPC_InstantSpawnNPC : public ActionBase {
    // Members
    unsigned int MPVariableName; // offset 0x0, size 0x4
    bool SetMovePoint; // offset 0x4, size 0x1
};
// total size: 0x178
class zNPCGeneric : public zNPCBase {
    // Members
    class zBoneTracker headTracker; // offset 0xB8, size 0x7C
    bool headTrackEnabled; // offset 0x134, size 0x1
    class xEnt * headTrackPrevLookAtEnt; // offset 0x138, size 0x4
    class xEnt * headTrackPoiEnt; // offset 0x13C, size 0x4
    class xVec3 headTrackPoi; // offset 0x140, size 0xC
    bool headTrackValidPoi; // offset 0x14C, size 0x1
    bool headTrackBlendToLookAt; // offset 0x14D, size 0x1
    class xEnt * headTrackOverrideEnt; // offset 0x150, size 0x4
    float leanSpringTension; // offset 0x154, size 0x4
    float maxLean; // offset 0x158, size 0x4
    class xSpringyF32 leanSpring; // offset 0x15C, size 0x18
};
// total size: 0x14
class zNPCBT_Spawner_SetRotateToFaceVariable : public zNPCBTAction {};
// total size: 0x58
class zNPCBT_SpawnPreallocatedNPC_Action : public zNPCBTAction {
    // Members
    class Action_NPC_SpawnPreallocatedNPC * asset; // offset 0x14, size 0x4
    class zNPCGeneric * NPCToSpawn; // offset 0x18, size 0x4
    bool launching; // offset 0x1C, size 0x1
    float t; // offset 0x20, size 0x4
    float tMax; // offset 0x24, size 0x4
    float t_passed; // offset 0x28, size 0x4
    class xVec3 initVel; // offset 0x2C, size 0xC
    class xVec3 initPos; // offset 0x38, size 0xC
    class xVec3 targetPos; // offset 0x44, size 0xC
    float maxHeight; // offset 0x50, size 0x4
    float dAngle; // offset 0x54, size 0x4
};
// total size: 0x10
class Action_NPC_SpawnPreallocatedNPC : public ActionBase {
    // Members
    float atDistance; // offset 0x0, size 0x4
    int spawnBone; // offset 0x4, size 0x4
    float h0; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
};
// total size: 0x18
class zNPCBT_GenericSpawnerInit_Action : public zNPCBTAction {
    // Members
    class Action_NPC_GenericSpawnerInit * asset; // offset 0x14, size 0x4
};
// total size: 0x4
class Action_NPC_GenericSpawnerInit : public ActionBase {
    // Members
    unsigned int spawnDelayVar; // offset 0x0, size 0x4
};
// total size: 0x14
class zNPCBTSwarmResetKilledMembersAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSwarmBadgeCollectedAction : public zNPCBTBadgeCollectedAction {};
// total size: 0x14
class zNPCBTBadgeCollectedAction : public zNPCBTAction {};
// total size: 0x24
class zNPCBTSwarmPathFollowCircleAction : public zNPCBTAction {
    // Members
    class zNPCSteeringFollowPathControl * * followControls; // offset 0x14, size 0x4
    class zNPCBTActionAnim * * actionAnims; // offset 0x18, size 0x4
    class zSteeringPathCircle * * paths; // offset 0x1C, size 0x4
    bool setupDone; // offset 0x20, size 0x1
};
// total size: 0x78
class zNPCSteeringFollowPathControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x48, size 0x1C
    class zNPCSteeringAccumulator accAccum; // offset 0x64, size 0x10
    class zSteeringPath * path; // offset 0x74, size 0x4
};
// total size: 0xC
class zSteeringPath {
    // Members
    float halfWidth; // offset 0x0, size 0x4
    float halfWidthSqr; // offset 0x4, size 0x4
};
// total size: 0x30
class zSteeringPathCircle : public zSteeringPath {
    // Members
    class xVec3 center; // offset 0xC, size 0xC
    class xPlane plane; // offset 0x18, size 0x10
    float radius; // offset 0x28, size 0x4
    bool clockwise; // offset 0x2C, size 0x1
};
// total size: 0x2C
class zNPCBTSwarmPathFollowMPAction : public zNPCBTAction {
    // Members
    class zNPCSteeringFollowPathControl * * followControls; // offset 0x14, size 0x4
    class zNPCBTActionAnim * * actionAnims; // offset 0x18, size 0x4
    class zSteeringPathMovePoints * * paths; // offset 0x1C, size 0x4
    float pathHalfWidth; // offset 0x20, size 0x4
    float maxSpeed; // offset 0x24, size 0x4
    bool setupDone; // offset 0x28, size 0x1
};
// total size: 0x5C
class zSteeringPathMovePoints : public zSteeringPath {
    // Members
    class xMovePoint * currMP; // offset 0xC, size 0x4
    class xMovePoint * prevMP; // offset 0x10, size 0x4
    class zSteeringPathLine linePath; // offset 0x14, size 0x30
    class zSteeringPathSpline splinePath; // offset 0x44, size 0x10
    class zSteeringPath * currPath; // offset 0x54, size 0x4
    float arriveTol2; // offset 0x58, size 0x4
};
// total size: 0x30
class zSteeringPathLine : public zSteeringPath {
    // Members
    class xRay3 line; // offset 0xC, size 0x24
};
// total size: 0x10
class zSteeringPathSpline : public zSteeringPath {
    // Members
    class xSpline3 * spline; // offset 0xC, size 0x4
};
// total size: 0x28
class zNPCBTSwarmMoveToAction : public zNPCBTAction {
    // Members
    class zNPCSteeringMoveToControl * * moveToControls; // offset 0x14, size 0x4
    class zNPCBTActionAnim * * actionAnims; // offset 0x18, size 0x4
    class zNPCBTStuckRangeMultiplier * * stuckRangeMultipliers; // offset 0x1C, size 0x4
    float arriveTolerance; // offset 0x20, size 0x4
    bool exitWhenAllArrive; // offset 0x24, size 0x1
    bool setupDone; // offset 0x25, size 0x1
};
// total size: 0x1C
class zNPCBTSwarmBugCollectedAction : public zNPCBTAction {
    // Members
    int bugType; // offset 0x14, size 0x4
    int bugColor; // offset 0x18, size 0x4
};
// total size: 0x18
class zNPCBTWriteSwarmPosKilledByPlayerAsBadgePosAction : public zNPCBTAction {
    // Members
    unsigned int playerIndex; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTWriteSwarmHidePointAction : public zNPCBTAction {};
// total size: 0x2C
class zNPCBTSwarmFlutterAction : public zNPCBTSwarmMoveToAction {
    // Members
    bool * gliding; // offset 0x28, size 0x4
};
// total size: 0x230
class zNPCBTSwarmFlockAction : public zNPCBTSwarmMoveToAction {
    // Members
    class xMovePoint * prevMPs[64]; // offset 0x28, size 0x100
    class xMovePoint * curMPs[64]; // offset 0x128, size 0x100
    float RANDOM_ANGLE_RANGE; // offset 0x228, size 0x4
    float ARRIVED_COS_TOLERANCE; // offset 0x22C, size 0x4
};
// total size: 0x28
class zNPCBTSwarmWanderAction : public zNPCBTSwarmMoveToAction {};
// total size: 0x14
class zNPCBTSetFlyingAction : public zNPCBTAction {};
// total size: 0x54C
class zNPCBTOrbitAction : public zNPCBTMoveToAction {
    // Members
    class zNPCBTActionAnim actionAnim; // offset 0x51C, size 0x18
    class zPlayer * player; // offset 0x534, size 0x4
    bool orbitLeft; // offset 0x538, size 0x1
    float orbitTimer; // offset 0x53C, size 0x4
    float orbitExpireTime; // offset 0x540, size 0x4
    float orbitRadius; // offset 0x544, size 0x4
    unsigned int playerVarID; // offset 0x548, size 0x4
};
// total size: 0x94
class zNPCBTFaceFromEventAction : public zNPCBTAction {
    // Members
    unsigned int animID; // offset 0x14, size 0x4
    unsigned int eventVarID; // offset 0x18, size 0x4
    class zNPCBTActionAnim actionAnim; // offset 0x1C, size 0x18
    bool valid; // offset 0x34, size 0x1
    class zNPCSteeringDest target; // offset 0x38, size 0x10
    class zNPCSteeringStopControl stopControl; // offset 0x48, size 0x48
    float acceleration; // offset 0x90, size 0x4
};
// total size: 0x64
class zNPCBTStopAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    enum eHeadingCalcType headingCalcType; // offset 0x5C, size 0x4
    float acceleration; // offset 0x60, size 0x4
};
// total size: 0x134
class zNPCBTPathFollowMPAction : public zNPCBTAction {
    // Members
    class zNPCSteeringFollowPathControl followControl; // offset 0x14, size 0x78
    class zNPCBTActionAnim actionAnim; // offset 0x8C, size 0x18
    class zNPCBTStuckRangeMultiplier stuckRangeMultiplier; // offset 0xA4, size 0x10
    class zSteeringPathMovePoints path; // offset 0xB4, size 0x5C
    float pathHalfWidth; // offset 0x110, size 0x4
    float maxSpeed; // offset 0x114, size 0x4
    float arriveTol2; // offset 0x118, size 0x4
    enum eNPCMoveType moveType; // offset 0x11C, size 0x4
    enum eHeadingCalcType headingCalcType; // offset 0x120, size 0x4
    bool arriveToDest; // offset 0x124, size 0x1
    float customMaxSpeed; // offset 0x128, size 0x4
    float customMaxAcc; // offset 0x12C, size 0x4
    char * customAnimName; // offset 0x130, size 0x4
};
// total size: 0x58
class zNPCBTTeleportAction : public zNPCBTAction {
    // Members
    class xMat4x3 destMat; // offset 0x14, size 0x40
    unsigned int destVar; // offset 0x54, size 0x4
};
// total size: 0x51C
class zNPCBTFlutterAction : public zNPCBTMoveToAction {};
// total size: 0x520
class zNPCBTFleeAction : public zNPCBTMoveToAction {
    // Members
    class zPlayer * player; // offset 0x51C, size 0x4
};
// total size: 0x52C
class zNPCBTFollowPlayerAction : public zNPCBTMoveToAction {
    // Members
    class zDelegateP0 observer; // offset 0x51C, size 0x8
    unsigned int playerVariable; // offset 0x524, size 0x4
    class zPlayer * player; // offset 0x528, size 0x4
};
// total size: 0x14
class zNPCBTSetCurrentHitPoints : public zNPCBTAction {};
// total size: 0x14
class zNPCBTReleaseAttackAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTRequestAttackAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSetUndamageableAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSetInvulnerableAction : public zNPCBTAction {};
// total size: 0x24
class zNPCBTDamagePlayerInRangeAction : public zNPCBTAction {
    // Members
    float damageTimers[4]; // offset 0x14, size 0x10
};
// total size: 0x74
class zNPCBTStrikeAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0x14
class zNPCBTRemoveAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTKillAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTShootAction : public zNPCBTAction {};
// total size: 0x18
class zNPCBTDamagePlayerOnContactAction : public zNPCBTAction {
    // Members
    class zNPCCollisionListener * collisionListener; // offset 0x14, size 0x4
};
// total size: 0x74
class zNPCBTDefeatedAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
};
// total size: 0x14
class zNPCBTSetNeedCombatTargetingCleanupAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSetNeedCombatCleanupAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTResetCurrentPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteCurrentPosition : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteBlackboardUidPosition : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteNetworkMovePointAction : public zNPCBTAction {};
// total size: 0x20
class zNPCBTWriteTrapPositionAction : public zNPCBTAction {
    // Members
    class xVec3 trapPos; // offset 0x14, size 0xC
};
// total size: 0x14
class zNPCBTWritePlayerPositionAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteWanderPositionAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteChildMovePointAction : public zNPCBTAction {};
// total size: 0x18
class zNPCBTWritePatrolMovePointShiftedAction : public zNPCBTAction {
    // Members
    unsigned int laneMax; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTWritePatrolMovePointAction : public zNPCBTAction {};
// total size: 0x1C
class zNPCBTWriteTargetPlayerAction : public zNPCBTAction {
    // Members
    float timer; // offset 0x14, size 0x4
    class zPlayer * tauntingPlayer; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTWriteClosestPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteLockedPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTStopHeadTrackingAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTStartHeadTrackingAction : public zNPCBTAction {};
// total size: 0x18
class zNPCBTFadeInAction : public zNPCBTAction {
    // Members
    float elapsedTime; // offset 0x14, size 0x4
};
// total size: 0x18
class zNPCBTFadeOutAction : public zNPCBTAction {
    // Members
    float elapsedTime; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTSetCollectibleAction : public zNPCBTAction {};
// total size: 0x28
class zNPCBTGenerateCollectiblesAction : public zNPCBTAction {
    // Members
    unsigned int boneIndex; // offset 0x14, size 0x4
    class xVec3 offset; // offset 0x18, size 0xC
    enum eNPCCollectibleType type; // offset 0x24, size 0x4
};
enum eNPCCollectibleType {
    OnDeath = 0,
    ShakeVertical = 1,
    ShakeHorizontal = 2,
    END_eNPCCollectibleTypeENUM = 3,
};
// total size: 0x18
class zNPCBTSetCollidesAction : public zNPCBTAction {
    // Members
    bool collides; // offset 0x14, size 0x1
};
// total size: 0x14
class zNPCBTHideAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTShowAction : public zNPCBTAction {};
// total size: 0x88
class zNPCBTPlayAnimationTypeAction : public zNPCBTAction {
    // Members
    unsigned int animID; // offset 0x14, size 0x4
    unsigned int eventVarID; // offset 0x18, size 0x4
    class zNPCBTActionAnim actionAnim; // offset 0x1C, size 0x18
    bool valid; // offset 0x34, size 0x1
    class zNPCSteeringStopControl stopControl; // offset 0x38, size 0x48
    enum eHeadingCalcType headingCalcType; // offset 0x80, size 0x4
    float acceleration; // offset 0x84, size 0x4
};
// total size: 0x88
class zNPCBTPlayAnimationAction : public zNPCBTAction {
    // Members
    unsigned long long animID; // offset 0x18, size 0x8
    class zNPCBTActionAnim actionAnim; // offset 0x20, size 0x18
    bool valid; // offset 0x38, size 0x1
    class zNPCSteeringStopControl stopControl; // offset 0x3C, size 0x48
};
// total size: 0x1C
class zNPCBTPlayEELFXAction : public zNPCBTAction {
    // Members
    class ElectricArc * arc; // offset 0x14, size 0x4
    class Action_NPC_PlayEELFX * asset; // offset 0x18, size 0x4
};
// total size: 0x70
class ElectricArc : public xOGEntity {
    // Members
    class ElectricArcAsset * asset; // offset 0x3C, size 0x4
    class ElectricPoint * p1; // offset 0x40, size 0x4
    class ElectricPoint * p2; // offset 0x44, size 0x4
    bool active; // offset 0x48, size 0x1
    float detectedTimer; // offset 0x4C, size 0x4
    float damageTimer; // offset 0x50, size 0x4
    int geomsCount; // offset 0x54, size 0x4
    class ElectricCylinder * * cGeoms; // offset 0x58, size 0x4
    class ImmediatePrototypeEntity * * iModels; // offset 0x5C, size 0x4
    float t; // offset 0x60, size 0x4
    float activateTimer; // offset 0x64, size 0x4
    float deactivateTimer; // offset 0x68, size 0x4
};
// total size: 0x50
class ElectricArcAsset : public xBaseScene {
    // Members
    class __Geoms__ Geoms; // offset 0x10, size 0x8
    unsigned int InteractionFlags; // offset 0x18, size 0x4
    unsigned int DamageFlags; // offset 0x1C, size 0x4
    float DamageAmount; // offset 0x20, size 0x4
    float DamageTimer; // offset 0x24, size 0x4
    enum enMode Mode; // offset 0x28, size 0x4
    class uid Point1; // offset 0x30, size 0x8
    class uid Point2; // offset 0x38, size 0x8
    float ProximityDistance; // offset 0x40, size 0x4
    float ProximityDetectTimer; // offset 0x44, size 0x4
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x8
class __Geoms__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
enum enMode {
    enMode_ElectricArc = 0,
    enMode_SecurityLaser = 1,
    enMode_ElectricityMapped = 2,
    enMode_ElectricityVolume = 3,
    enMode_LaserMapped = 4,
    enMode_SpotLight = 5,
    END_enMode_ENUM = 6,
};
// total size: 0xD0
class ElectricPoint : public xOGEntity {
    // Members
    class MovePointData mpData; // offset 0x3C, size 0x4C
    class ElectricPointAsset * asset; // offset 0x88, size 0x4
    class xMat4x3 matrix; // offset 0x8C, size 0x40
    bool atVecChanged; // offset 0xCC, size 0x1
};
// total size: 0x80
class ElectricPointAsset : public xBaseScene {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x10, size 0x40
    class vec3 Position; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    class uid Attach; // offset 0x68, size 0x8
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0x60
class ElectricCylinder {
    // Members
    class xVec3 * verts; // offset 0x4, size 0x4
    unsigned short * indices; // offset 0x8, size 0x4
    int rowsCount; // offset 0xC, size 0x4
    int colsCount; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float width; // offset 0x18, size 0x4
    int vertCount; // offset 0x1C, size 0x4
    int primCount; // offset 0x20, size 0x4
    int indxCount; // offset 0x24, size 0x4
    int randomize; // offset 0x28, size 0x4
    int step; // offset 0x2C, size 0x4
    float scaleAsset; // offset 0x30, size 0x4
    float scaleVariation; // offset 0x34, size 0x4
    float scale; // offset 0x38, size 0x4
    float scaleSign; // offset 0x3C, size 0x4
    float alphaScale; // offset 0x40, size 0x4
    float timerIdleAsset; // offset 0x44, size 0x4
    float timerIdleVariationAsset; // offset 0x48, size 0x4
    float timerIdle; // offset 0x4C, size 0x4
    int lockFront; // offset 0x50, size 0x4
    int lockBack; // offset 0x54, size 0x4
    int reference; // offset 0x58, size 0x4
    int flags; // offset 0x5C, size 0x4
};
// total size: 0x18
class Action_NPC_PlayEELFX : public ActionBase {
    // Members
    class uid ElectricArcUID; // offset 0x0, size 0x8
    class __BoneIndex__ BoneIndex; // offset 0x8, size 0x8
    class __SectionIndex__ SectionIndex; // offset 0x10, size 0x8
};
// total size: 0x8
class __BoneIndex__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __SectionIndex__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1C
class zNPCBTPlayNPCFXAction : public zNPCBTAction {
    // Members
    unsigned int FXNameHash; // offset 0x14, size 0x4
    bool FXFound; // offset 0x18, size 0x1
};
// total size: 0x24
class zNPCBTPlayFXAction : public zNPCBTAction {
    // Members
    class zFXSpawn * fxSpawn; // offset 0x14, size 0x4
    class xVec3 pos; // offset 0x18, size 0xC
};
// total size: 0x14
class zNPCBTRotateToFaceAction : public zNPCBTAction {};
// total size: 0x80
class zNPCBTIdleAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x48
    class zNPCBTActionAnim actionAnim; // offset 0x5C, size 0x18
    bool fidget; // offset 0x74, size 0x1
    unsigned int animationPlays; // offset 0x78, size 0x4
    enum IdleType idleType; // offset 0x7C, size 0x4
};
enum IdleType {
    Normal = 0,
    FidgetCommon = 1,
    FidgetRare = 2,
};
// total size: 0x10
class zBTActionWriteToBlackboard : public zBTActionBaseFamily {};
// total size: 0x14
class zBTActionWriteVariable : public zBTActionBaseFamily {
    // Members
    class Action_WriteVariable * asset; // offset 0x10, size 0x4
};
// total size: 0x18
class Action_WriteVariable : public ActionBase {
    // Members
    unsigned int WriteTo; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x10
    class VariableStruct Variable; // offset 0x4, size 0x4
    class ValueStruct Value; // offset 0x4, size 0x10
    enum eSourceType SourceType; // offset 0x14, size 0x4
};
// total size: 0x10
class @class {
    // Members
    class VariableStruct Variable; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x10
};
// total size: 0x10
class ValueStruct {
    // Members
    class @class __anon; // offset 0x0, size 0xC
    class IntStruct Integer; // offset 0x0, size 0x4
    class FloatStruct Float; // offset 0x0, size 0x4
    class BoolStruct Boolean; // offset 0x0, size 0x1
    class PlayerStruct Player; // offset 0x0, size 0x4
    class VectorStruct Vector; // offset 0x0, size 0xC
    enum eVariableType VariableType; // offset 0xC, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class IntStruct Integer; // offset 0x0, size 0x4
    class FloatStruct Float; // offset 0x0, size 0x4
    class BoolStruct Boolean; // offset 0x0, size 0x1
    class PlayerStruct Player; // offset 0x0, size 0x4
    class VectorStruct Vector; // offset 0x0, size 0xC
};
// total size: 0x4
class IntStruct {
    // Members
    int Value; // offset 0x0, size 0x4
};
// total size: 0x4
class FloatStruct {
    // Members
    float Value; // offset 0x0, size 0x4
};
enum eVariableType {
    eVariableType_Integer = 0,
    eVariableType_Float = 1,
    eVariableType_Boolean = 2,
    eVariableType_Player = 3,
    eVariableType_Vector3 = 4,
    END_eVariableType_ENUM = 5,
};
enum eSourceType {
    eSourceType_Variable = 0,
    eSourceType_Value = 1,
    END_eSourceType_ENUM = 2,
};
// total size: 0x20
class NodeRecord {
    // Members
    class BTNodeBase * nodeAsset; // offset 0x0, size 0x4
    class zBTNode * node; // offset 0x4, size 0x4
    enum eNodeType nodeType; // offset 0x8, size 0x4
    int id; // offset 0xC, size 0x4
    int parentId; // offset 0x10, size 0x4
    int childOrder; // offset 0x14, size 0x4
    int childCount; // offset 0x18, size 0x4
    bool parsed; // offset 0x1C, size 0x1
};
// total size: 0x8
class BTNodeBase {
    // Members
    int id; // offset 0x0, size 0x4
    int order; // offset 0x4, size 0x4
};
enum eNodeType {
    eNodeType_Sequence = 0,
    eNodeType_Selector = 1,
    eNodeType_Parallel = 2,
    eNodeType_Decorator = 3,
    eNodeType_Condition = 4,
    eNodeType_Action = 5,
    eNodeType_Reference = 6,
};
// total size: 0x18
class zBTTask : public zSchedulerTask {
    // Members
    class zBTInterpreter * interpreter; // offset 0x4, size 0x4
    class zBTNode * node; // offset 0x8, size 0x4
    class zBTTask * owner; // offset 0xC, size 0x4
    class zBTClient * btClient; // offset 0x10, size 0x4
    class zDelegateP2 * observer; // offset 0x14, size 0x4
};
// total size: 0x18
class RandomChildIterator : public ChildIteratorBase {
    // Members
    class zBTNode * owner; // offset 0x4, size 0x4
    int currIdx; // offset 0x8, size 0x4
    int current; // offset 0xC, size 0x4
    int validCount; // offset 0x10, size 0x4
    int * indices; // offset 0x14, size 0x4
};
// total size: 0x4
class ChildIteratorBase {};
// total size: 0x2C
class zBTActionTask : public zBTTask {
    // Members
    class ActionNode * actionAsset; // offset 0x18, size 0x4
    class zBTAction * action; // offset 0x1C, size 0x4
    class zDelegateP0 * resumeCB; // offset 0x20, size 0x4
    class zBTActionBuilder * actionBuilder; // offset 0x24, size 0x4
    bool started; // offset 0x28, size 0x1
};
// total size: 0x10
class ActionNode : public BTNodeBase {
    // Members
    class __action__ action; // offset 0x8, size 0x8
};
// total size: 0x8
class __action__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0x14
class zBTNodeAction : public zBTNode {
    // Members
    class ActionNode * actionAsset; // offset 0x10, size 0x4
};
// total size: 0x28
class zBTConditionTask : public zBTTask {
    // Members
    class ConditionNode * conditionAsset; // offset 0x18, size 0x4
    class zBTCondition * condition; // offset 0x1C, size 0x4
    class zBTConditionBuilder * conditionBuilder; // offset 0x20, size 0x4
    bool negate; // offset 0x24, size 0x1
};
// total size: 0x18
class ConditionNode : public BTNodeBase {
    // Members
    unsigned int conditionType; // offset 0x8, size 0x4
    class __condition__ condition; // offset 0xC, size 0x8
    bool Negate; // offset 0x14, size 0x1
};
// total size: 0x8
class __condition__ {
    // Members
    int type; // offset 0x0, size 0x4
    class Pointer32 v; // offset 0x4, size 0x4
};
// total size: 0xC
class zBTCondition {
    // Members
    class ConditionBase * conditionAsset; // offset 0x0, size 0x4
    class zBTClient * btClient; // offset 0x4, size 0x4
};
// total size: 0x1
class ConditionBase {};
// total size: 0x28
class zBTInstantConditionTask : public zBTConditionTask {};
// total size: 0x28
class zBTMonitoringConditionTask : public zBTConditionTask {};
// total size: 0x18
class zBTNodeCondition : public zBTNode {
    // Members
    class ConditionNode * conditionAsset; // offset 0x10, size 0x4
    bool negate; // offset 0x14, size 0x1
};
// total size: 0x20
class zBTDecoratorTask : public zBTTask {
    // Members
    class zBTTask * currChildTask; // offset 0x18, size 0x4
    enum eTaskState childState; // offset 0x1C, size 0x4
};
// total size: 0x10
class zBTNodeDecorator : public zBTNode {};
// total size: 0x28
class zBTLoopDecoratorTask : public zBTDecoratorTask {
    // Members
    int loopCount; // offset 0x20, size 0x4
    bool frameDelay; // offset 0x24, size 0x1
    bool loopNextFrame; // offset 0x25, size 0x1
};
// total size: 0x1C
class DecoratorNode : public BTNodeBase {
    // Members
    class @class __anon; // offset 0x8, size 0x10
    class LoopStruct Loop; // offset 0x8, size 0x8
    class ForceStatusStruct ForceStatus; // offset 0x8, size 0x1
    class TimerStruct Timer; // offset 0x8, size 0x4
    class RandomChanceStruct RandomChance; // offset 0x8, size 0xC
    class TimeDelayStruct TimeDelay; // offset 0x8, size 0xC
    class EventHandlerStruct EventHandler; // offset 0x8, size 0x10
    class TryAndCatchStruct TryAndCatch; // offset 0x8, size 0x4
    unsigned char decoratorType; // offset 0x18, size 0x1
};
// total size: 0x10
class @class {
    // Members
    class LoopStruct Loop; // offset 0x0, size 0x8
    class ForceStatusStruct ForceStatus; // offset 0x0, size 0x1
    class TimerStruct Timer; // offset 0x0, size 0x4
    class RandomChanceStruct RandomChance; // offset 0x0, size 0xC
    class TimeDelayStruct TimeDelay; // offset 0x0, size 0xC
    class EventHandlerStruct EventHandler; // offset 0x0, size 0x10
    class TryAndCatchStruct TryAndCatch; // offset 0x0, size 0x4
};
// total size: 0x8
class LoopStruct {
    // Members
    int loopCount; // offset 0x0, size 0x4
    bool FrameDelay; // offset 0x4, size 0x1
};
// total size: 0x1
class ForceStatusStruct {
    // Members
    unsigned char status; // offset 0x0, size 0x1
};
// total size: 0x4
class TimerStruct {
    // Members
    float timer; // offset 0x0, size 0x4
};
// total size: 0xC
class RandomChanceStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    class ChanceSingleStruct Single; // offset 0x0, size 0x4
    class ChanceRangeStruct Range; // offset 0x0, size 0x8
    unsigned int chanceType; // offset 0x8, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class ChanceSingleStruct Single; // offset 0x0, size 0x4
    class ChanceRangeStruct Range; // offset 0x0, size 0x8
};
// total size: 0x4
class ChanceSingleStruct {
    // Members
    float chance; // offset 0x0, size 0x4
};
// total size: 0x8
class ChanceRangeStruct {
    // Members
    float minChance; // offset 0x0, size 0x4
    float maxChance; // offset 0x4, size 0x4
};
// total size: 0xC
class TimeDelayStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x8
    class DelaySingleConstStruct SingleConst; // offset 0x0, size 0x4
    class DelayRangeStruct Range; // offset 0x0, size 0x8
    class DelaySingleVarStruct SingleVar; // offset 0x0, size 0x4
    unsigned int delayType; // offset 0x8, size 0x4
};
// total size: 0x8
class @class {
    // Members
    class DelaySingleConstStruct SingleConst; // offset 0x0, size 0x4
    class DelayRangeStruct Range; // offset 0x0, size 0x8
    class DelaySingleVarStruct SingleVar; // offset 0x0, size 0x4
};
// total size: 0x4
class DelaySingleConstStruct {
    // Members
    float delay; // offset 0x0, size 0x4
};
// total size: 0x8
class DelayRangeStruct {
    // Members
    float minDelay; // offset 0x0, size 0x4
    float maxDelay; // offset 0x4, size 0x4
};
// total size: 0x4
class DelaySingleVarStruct {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
};
// total size: 0x10
class EventHandlerStruct {
    // Members
    class __Event__ Event; // offset 0x0, size 0x8
    bool SkipOtherHandlersIfHandled; // offset 0x8, size 0x1
    unsigned int ReturnStatus; // offset 0xC, size 0x4
};
// total size: 0x4
class TryAndCatchStruct {
    // Members
    unsigned int OnAbort; // offset 0x0, size 0x4
};
// total size: 0x18
class zBTNodeLoopDecorator : public zBTNodeDecorator {
    // Members
    int loop; // offset 0x10, size 0x4
    bool frameDelay; // offset 0x14, size 0x1
};
// total size: 0x24
class zBTForceStatusDecoratorTask : public zBTDecoratorTask {
    // Members
    enum eTaskState forcedState; // offset 0x20, size 0x4
};
// total size: 0x14
class zBTNodeForceStatusDecorator : public zBTNodeDecorator {
    // Members
    enum eTaskState forcedStatus; // offset 0x10, size 0x4
};
// total size: 0x28
class zBTTimerDecoratorTask : public zBTDecoratorTask {
    // Members
    float time; // offset 0x20, size 0x4
    unsigned int variableName; // offset 0x24, size 0x4
};
// total size: 0x18
class zBTNodeTimerDecorator : public zBTNodeDecorator {
    // Members
    float timeMax; // offset 0x10, size 0x4
    unsigned int variableName; // offset 0x14, size 0x4
};
// total size: 0x24
class zBTRandomChanceDecoratorTask : public zBTDecoratorTask {
    // Members
    float chance; // offset 0x20, size 0x4
};
// total size: 0x1C
class zBTNodeRandomChanceDecorator : public zBTNodeDecorator {
    // Members
    bool isRange; // offset 0x10, size 0x1
    float chance1; // offset 0x14, size 0x4
    float chance2; // offset 0x18, size 0x4
};
// total size: 0x28
class zBTTimeDelayDecoratorTask : public zBTDecoratorTask {
    // Members
    float delay; // offset 0x20, size 0x4
    unsigned int variableName; // offset 0x24, size 0x4
};
// total size: 0x20
class zBTNodeTimeDelayDecorator : public zBTNodeDecorator {
    // Members
    bool isRange; // offset 0x10, size 0x1
    bool isVariable; // offset 0x11, size 0x1
    float delay1; // offset 0x14, size 0x4
    float delay2; // offset 0x18, size 0x4
    unsigned int variable; // offset 0x1C, size 0x4
};
// total size: 0x34
class zBTEventHandlerDecoratorTask : public zBTDecoratorTask {
    // Members
    unsigned int checkEvent; // offset 0x20, size 0x4
    enum eTaskState returnStatus; // offset 0x24, size 0x4
    bool skipOtherHandlersIfHandled; // offset 0x28, size 0x1
    class zDelegateP3 eventObserver; // offset 0x2C, size 0x8
};
// total size: 0x1C
class zBTNodeEventHandlerDecorator : public zBTNodeDecorator {
    // Members
    unsigned int checkEvent; // offset 0x10, size 0x4
    enum eTaskState returnStatus; // offset 0x14, size 0x4
    bool skipOtherHandlersIfHandled; // offset 0x18, size 0x1
};
// total size: 0x24
class zBTTryAndCatchDecoratorTask : public zBTDecoratorTask {
    // Members
    class DecoratorNode * asset; // offset 0x20, size 0x4
};
// total size: 0x14
class zBTNodeTryAndCatchDecorator : public zBTNodeDecorator {
    // Members
    class DecoratorNode * asset; // offset 0x10, size 0x4
};
// total size: 0x30
class zBTParallelTask : public zBTTask {
    // Members
    unsigned short successPolicy; // offset 0x18, size 0x2
    unsigned short failPolicy; // offset 0x1A, size 0x2
    class zBTTask * * children; // offset 0x1C, size 0x4
    int childrenCount; // offset 0x20, size 0x4
    int runningCount; // offset 0x24, size 0x4
    int failCount; // offset 0x28, size 0x4
    int doneCount; // offset 0x2C, size 0x4
};
// total size: 0xC
class ParallelNode : public BTNodeBase {
    // Members
    unsigned char SuccessPolicy; // offset 0x8, size 0x1
    unsigned char FailPolicy; // offset 0x9, size 0x1
};
// total size: 0x14
class zBTNodeParallel : public zBTNode {
    // Members
    unsigned short successPolicy; // offset 0x10, size 0x2
    unsigned short failPolicy; // offset 0x12, size 0x2
};
// total size: 0x24
class zBTReferenceTask : public zBTTask {
    // Members
    unsigned int taskID; // offset 0x18, size 0x4
    class zBTTask * currChildTask; // offset 0x1C, size 0x4
    enum eTaskState childState; // offset 0x20, size 0x4
};
// total size: 0x14
class zBTNodeReference : public zBTNode {
    // Members
    unsigned int taskID; // offset 0x10, size 0x4
};
// total size: 0x24
class zBTSelectorTask : public zBTTask {
    // Members
    class ChildIteratorBase * iterator; // offset 0x18, size 0x4
    class zBTTask * currChildTask; // offset 0x1C, size 0x4
    enum eTaskState childState; // offset 0x20, size 0x4
};
// total size: 0x10
class zBTNodeSelector : public zBTNode {};
// total size: 0x18
class ProbabilityChildIterator : public ChildIteratorBase {
    // Members
    class zBTNodeProbabilitySelector * owner; // offset 0x4, size 0x4
    int currIdx; // offset 0x8, size 0x4
    int current; // offset 0xC, size 0x4
    int validCount; // offset 0x10, size 0x4
    int * indices; // offset 0x14, size 0x4
};
// total size: 0x14
class zBTNodeProbabilitySelector : public zBTNodeSelector {
    // Members
    float * probabilities; // offset 0x10, size 0x4
};
// total size: 0x14
class SelectorNode : public BTNodeBase {
    // Members
    class @class __anon; // offset 0x8, size 0x8
    class PriorityStruct Priority; // offset 0x8, size 0x1
    class ProbabilityStruct Probability; // offset 0x8, size 0x8
    class RandnomStruct Random; // offset 0x8, size 0x1
    unsigned char selectorType; // offset 0x10, size 0x1
};
// total size: 0x8
class @class {
    // Members
    class PriorityStruct Priority; // offset 0x0, size 0x1
    class ProbabilityStruct Probability; // offset 0x0, size 0x8
    class RandnomStruct Random; // offset 0x0, size 0x1
};
// total size: 0x1
class PriorityStruct {};
// total size: 0x8
class ProbabilityStruct {
    // Members
    class __probabilities__ probabilities; // offset 0x0, size 0x8
};
// total size: 0x8
class __probabilities__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x1
class RandnomStruct {};
// total size: 0x10
class zBTNodeRandomSelector : public zBTNodeSelector {};
// total size: 0x24
class zBTSequenceTask : public zBTTask {
    // Members
    class ChildIteratorBase * iterator; // offset 0x18, size 0x4
    class zBTTask * currChildTask; // offset 0x1C, size 0x4
    enum eTaskState childState; // offset 0x20, size 0x4
};
// total size: 0x14
class zBTNodeSequence : public zBTNode {
    // Members
    unsigned int sequenceType; // offset 0x10, size 0x4
};
// total size: 0x10
class zDepot {
    // Members
    class ItemEntry * items; // offset 0x0, size 0x4
    int itemCount; // offset 0x4, size 0x4
    class zDepotItemCreator * * creators; // offset 0x8, size 0x4
    int creatorCount; // offset 0xC, size 0x4
};
// total size: 0x10
class ItemEntry {
    // Members
    class zBT * item; // offset 0x0, size 0x4
    unsigned long long sourceID; // offset 0x8, size 0x8
};
// total size: 0x8
class zDepotItemCreator : public zDepotItemCreatorBase {
    // Members
    class zBT * item; // offset 0x4, size 0x4
};
// total size: 0x4
class zDepotItemCreatorBase {};
// total size: 0x8
class zBTDepotItemCreator : public zDepotItemCreator {};
// total size: 0x34
class zFactory {
    // Members
    class zFactoryPageInfo * formattedPages[8]; // offset 0x0, size 0x20
    class zFactoryPageInfo * freePages; // offset 0x20, size 0x4
    void * pagesStart; // offset 0x24, size 0x4
    class zFactoryPageInfo * allPages; // offset 0x28, size 0x4
    int pagesNum; // offset 0x2C, size 0x4
    unsigned int * format; // offset 0x30, size 0x4
};
// total size: 0x2C
class zFactoryPageInfo {
    // Members
    class zBitArray32 usageData[4]; // offset 0x0, size 0x10
    class zFactory * factory; // offset 0x10, size 0x4
    class zFactoryPageInfo * next; // offset 0x14, size 0x4
    void * firstBlockAddress; // offset 0x18, size 0x4
    unsigned int numBlocks; // offset 0x1C, size 0x4
    unsigned int usedBlocks; // offset 0x20, size 0x4
    unsigned int blockSize; // offset 0x24, size 0x4
    class zFactoryBlockInfo * blockInfos; // offset 0x28, size 0x4
};
// total size: 0x4
class zBitArray32 {
    // Members
    unsigned int data; // offset 0x0, size 0x4
};
// total size: 0x0
class zFactoryBlockInfo {};
// total size: 0x14
class Condition_CheckVariable : public ConditionBase {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0xC
    class IntStruct Integer; // offset 0x4, size 0xC
    class FloatStruct Float; // offset 0x4, size 0xC
    class BoolStruct Boolean; // offset 0x4, size 0x1
    class PlayerStruct Player; // offset 0x4, size 0x8
    enum eVariableType VariableType; // offset 0x10, size 0x4
};
// total size: 0xC
class @class {
    // Members
    class IntStruct Integer; // offset 0x0, size 0xC
    class FloatStruct Float; // offset 0x0, size 0xC
    class BoolStruct Boolean; // offset 0x0, size 0x1
    class PlayerStruct Player; // offset 0x0, size 0x8
};
// total size: 0xC
class IntStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
    enum eCompareType CompareType; // offset 0x4, size 0x4
    unsigned int Operator; // offset 0x8, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
};
// total size: 0x4
class ValueStruct {
    // Members
    int Value; // offset 0x0, size 0x4
};
enum eCompareType {
    eCompareType_Variable = 0,
    eCompareType_Value = 1,
    END_eCompareType_ENUM = 2,
};
// total size: 0xC
class FloatStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
    enum eCompareType CompareType; // offset 0x4, size 0x4
    unsigned int Operator; // offset 0x8, size 0x4
};
// total size: 0x4
class ValueStruct {
    // Members
    float Value; // offset 0x0, size 0x4
};
// total size: 0x1
class BoolStruct {};
// total size: 0x8
class PlayerStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class ValueStruct Value; // offset 0x0, size 0x4
    class VariableStruct Variable; // offset 0x0, size 0x4
    enum eCompareType CompareType; // offset 0x4, size 0x4
};
// total size: 0x4
class ValueStruct {
    // Members
    enum ePlayerType Value; // offset 0x0, size 0x4
};
// total size: 0x14
class zBTConditionDistanceFromClosestPlayer : public zBTConditionBaseFamily {
    // Members
    float dist2; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
};
// total size: 0xC
class zBTConditionBaseFamily : public zBTCondition {};
// total size: 0x8
class Condition_DistanceFromClosestPlayer : public ConditionBase {
    // Members
    float distance; // offset 0x0, size 0x4
    unsigned int compOperator; // offset 0x4, size 0x4
};
// total size: 0x18
class zBTConditionDistanceFromPlayer : public zBTConditionBaseFamily {
    // Members
    float dist2; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
    unsigned int variableName; // offset 0x14, size 0x4
};
// total size: 0xC
class Condition_DistanceFromPlayer : public ConditionBase {
    // Members
    float distance; // offset 0x0, size 0x4
    unsigned int compOperator; // offset 0x4, size 0x4
    unsigned int variableName; // offset 0x8, size 0x4
};
// total size: 0x10
class zBTConditionPlayerIsInAction : public zBTConditionBaseFamily {
    // Members
    class Condition_PlayerIsInAction * asset; // offset 0xC, size 0x4
};
// total size: 0xC
class Condition_PlayerIsInAction : public ConditionBase {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class PlayerStruct Player; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
    class OwnerStruct Owner; // offset 0x0, size 0x1
    unsigned int PlayerTargetType; // offset 0x4, size 0x4
    unsigned int Action; // offset 0x8, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class PlayerStruct Player; // offset 0x0, size 0x1
    class VariableStruct Variable; // offset 0x0, size 0x4
    class OwnerStruct Owner; // offset 0x0, size 0x1
};
// total size: 0xC
class zBTConditionTrue : public zBTConditionBaseFamily {};
// total size: 0xC
class zBTConditionFalse : public zBTConditionBaseFamily {};
// total size: 0x14
class zNPCBTCrocPlayerInAttackRangeCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTCondition : public zBTCondition {
    // Members
    class zNPCBase * npcBase; // offset 0xC, size 0x4
    class ConditionBase * asset; // offset 0x10, size 0x4
};
// total size: 0x14
class zNPCSnakeBTTargetRippleAvailable : public zNPCBTCondition {};
// total size: 0x24
class zNPCBTBiplaneTargetChangedCondition : public zNPCBTBiplaneBaseCondition {
    // Members
    class xBase * originalTarget; // offset 0x14, size 0x4
    class xBase * newTarget; // offset 0x18, size 0x4
    class zDelegateP0 observer; // offset 0x1C, size 0x8
};
// total size: 0x14
class zNPCBTBiplaneBaseCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTBiplaneTargetIsStaticCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneTargetIsPlaneCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneAnyNPCUnderAttackCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplanePlayerUnderAttackCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplanePlayerAttackingCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneChaseSpecWeapCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneAvoidPlaneCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneEnemyInSightsCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x14
class zNPCBTBiplaneEnemyPlaneVisibleCondition : public zNPCBTBiplaneBaseCondition {};
// total size: 0x10
class zLaserTurretAIBTConditionHasDartRemain : public zLaserTurretAIBTCondition {};
// total size: 0x10
class zLaserTurretAIBTCondition : public zBTCondition {
    // Members
    class zLaserTurret * turret; // offset 0xC, size 0x4
};
// total size: 0x10
class zPlayerAIBTConditionDistXZToDestLessThan : public zPlayerAIBTCondition {};
// total size: 0x10
class zPlayerAIBTCondition : public zBTCondition {
    // Members
    class zCommonPlayer * player; // offset 0xC, size 0x4
};
// total size: 0x10
class zPlayerAIBTConditionCanStartCrank : public zPlayerAIBTCondition {};
// total size: 0x10
class zPlayerAIBTConditionCombatWhichNPC : public zPlayerAIBTCondition {};
// total size: 0x10
class zPlayerAIBTConditionIsInCombat : public zPlayerAIBTCondition {};
// total size: 0x14
class zPlayerAIBTConditionShouldKeepDoing : public zPlayerAIBTCondition {
    // Members
    unsigned int move; // offset 0x10, size 0x4
};
// total size: 0x14
class zPlayerAIBTConditionCheckCommand : public zPlayerAIBTCondition {
    // Members
    int command; // offset 0x10, size 0x4
};
// total size: 0x14
class zPlayerAIBTConditionShouldDoAutoMove : public zPlayerAIBTCondition {
    // Members
    unsigned int move; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerAIBTConditionStopFollow : public zPlayerAIBTCondition {};
// total size: 0x10
class zPlayerAIBTConditionStartFollow : public zPlayerAIBTCondition {};
// total size: 0x14
class zNPCBT_GenericSpawner_CanSpawn_Condition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBT_GenericSpawner_NonstopSpawn_Condition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTMovingCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTIsOnGroundCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTSwarmKilledByPlayerCondition : public zNPCBTCondition {
    // Members
    int checkPlayer; // offset 0x14, size 0x4
};
// total size: 0x18
class zNPCBTSpecialAbilityOnCondition : public zNPCBTCondition {
    // Members
    unsigned int type; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTPlayerIsBeingAttackedCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTPlayerIsTargetableCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTPlayerIsPlayerCondition : public zNPCBTCondition {
    // Members
    enum ePlayerName playerName; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTPlayerIsHumanCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTPlayerInAttackRangeCondition : public zNPCBTCondition {
    // Members
    bool checkInWallNet; // offset 0x14, size 0x1
};
// total size: 0x18
class zNPCBTPlayerInVisibleRangeCondition : public zNPCBTCondition {
    // Members
    bool checkInWallNet; // offset 0x14, size 0x1
};
// total size: 0x14
class zNPCBTOffScreenCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTNeedCombatTargetingCleanupCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTNeedCombatCleanupCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTLockedPlayerIsHumanCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTIsToLockedPlayerSideCondition : public zNPCBTCondition {
    // Members
    unsigned int side; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTIsPlayerValidCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTIsFloatingObjectValidCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTIsFloatingObjectActiveCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTInHearingAidRangeCondition : public zNPCBTCondition {};
// total size: 0x1C
class zNPCBTHitCountCondition : public zNPCBTCondition {
    // Members
    int numHits; // offset 0x14, size 0x4
    unsigned int op; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTHitCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTExitedTrapCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTEnteredTrapCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTDistanceFromFloatingObjectCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTDefeatedCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTCurrPlayerIsPlayerCondition : public zNPCBTCondition {
    // Members
    enum ePlayerName playerName; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTCurrPlayerIsHumanCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTCounterSuccessCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTCounterNoneCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTCounterFailCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTLastLiveEnemyCondition : public zNPCBTCondition {};
// total size: 0x1C
class zNPCBTCheckPlayerTypeCondition : public zNPCBTCondition {
    // Members
    unsigned int playerType; // offset 0x14, size 0x4
    unsigned int varID; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTAliveCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTActiveCondition : public zNPCBTCondition {};
// total size: 0xC
class zBTConditionIsAnyPlayerInCombat : public zBTConditionBaseFamily {};
// total size: 0xC
class zBTConditionCheckConditional : public zBTConditionBaseFamily {};
// total size: 0xC
class zBTConditionCheckVariable : public zBTConditionBaseFamily {};
// total size: 0x20
class BehaviorSet {
    // Members
    class __Variables__ Variables; // offset 0x0, size 0x8
    class __VariableDefinitions__ VariableDefinitions; // offset 0x8, size 0x8
    class uid RootBehavior; // offset 0x10, size 0x8
    class __Goals__ Goals; // offset 0x18, size 0x8
};
// total size: 0x8
class __Variables__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __VariableDefinitions__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __Goals__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x48
class zVariableEventData {
    // Members
    unsigned int eventID; // offset 0x0, size 0x4
    class EventAny * dataPointer; // offset 0x4, size 0x4
    char eventDataBuffer[64]; // offset 0x8, size 0x40
};
// total size: 0xA0
class zBugSpawner : public xOGEntity {
    // Members
    class zBugSpawnerAsset * asset; // offset 0x3C, size 0x4
    class zNPCGenericSwarm * * npcBugs; // offset 0x40, size 0x4
    float spawnDelayLeft; // offset 0x44, size 0x4
    class RenderedPhysicsModel spawnerModel; // offset 0x50, size 0x50
};
// total size: 0x90
class zBugSpawnerAsset : public xBaseScene {
    // Members
    class RenderedPhysicsModelAsset renderedPhysicsModel; // offset 0x10, size 0x70
    class __bugs__ bugs; // offset 0x80, size 0x8
    class LinkAsset EventLinksNew; // offset 0x88, size 0x8
};
// total size: 0x8
class __bugs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x270
class zNPCGenericSwarm : public zNPCBase {
    // Members
    class zNPCEntity * entities[32]; // offset 0xB8, size 0x80
    class zNPCFX * entFXs[32]; // offset 0x138, size 0x80
    int memberStatus[32]; // offset 0x1B8, size 0x80
    int numberOfSwarmers; // offset 0x238, size 0x4
    class xVec3 averagePos; // offset 0x23C, size 0xC
    float memberSpawnTimeAcc; // offset 0x248, size 0x4
    float avgMemberSpawnPeriod; // offset 0x24C, size 0x4
    float nextMemberSpawnPeriod; // offset 0x250, size 0x4
    int remainingSpawns; // offset 0x254, size 0x4
    class zWallNet * wallNet; // offset 0x258, size 0x4
    class xVec3 hidePoint; // offset 0x25C, size 0xC
    int numberOfKilledMembers; // offset 0x268, size 0x4
    unsigned int killedMembers; // offset 0x26C, size 0x4
};
// total size: 0x4
class EventActionBugSpawnerHit : public EventActionNew {
    // Members
    unsigned int bugSpawnerPtr; // offset 0x0, size 0x4
};
// total size: 0x68
class zTrip : public zInteractionUP {
    // Members
    class zTripAsset * asset; // offset 0x50, size 0x4
    float trigRad; // offset 0x54, size 0x4
    float warnRad; // offset 0x58, size 0x4
    bool Alive; // offset 0x5C, size 0x1
    bool inWarnRad; // offset 0x5D, size 0x1
    unsigned int playerInWarnRad; // offset 0x60, size 0x4
    bool playersInWarnRad[4]; // offset 0x64, size 0x4
};
// total size: 0x40
class zTripAsset : public InteractionUP {
    // Members
    class uid linkedTrap; // offset 0x10, size 0x8
    bool Alive; // offset 0x18, size 0x1
    class @class tripTypeData; // offset 0x1C, size 0x18
    unsigned int tripType; // offset 0x34, size 0x4
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x18
class @class {
    // Members
    class ProximityType Proximity; // offset 0x0, size 0x18
};
// total size: 0x18
class ProximityType {
    // Members
    class vec3 tripPosition; // offset 0x0, size 0xC
    class Rotation3 tripOrientation; // offset 0xC, size 0xC
};
// total size: 0x10
class EventNotifyTrap : public EventNotifyNew {
    // Members
    class vec3 trapPosition; // offset 0x0, size 0xC
    unsigned char trapType; // offset 0xC, size 0x1
};
// total size: 0x118
class StepUpCollisionCollector : public hkpAllCdBodyPairCollector {
    // Members
    class zCommonPlayer * player; // offset 0x114, size 0x4
};
// total size: 0x114
class hkpAllCdBodyPairCollector : public hkpCdBodyPairCollector {
    // Members
    class hkInplaceArray m_hits; // offset 0x8, size 0x10C
};
// total size: 0x10C
class hkInplaceArray : public hkArray {
    // Members
    class hkpRootCdBodyPair m_storage[16]; // offset 0xC, size 0x100
};
// total size: 0xC
class hkArray {
    // Members
    class hkpRootCdBodyPair * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x10
class hkpRootCdBodyPair {
    // Members
    class hkpCollidable * m_rootCollidableA; // offset 0x0, size 0x4
    unsigned int m_shapeKeyA; // offset 0x4, size 0x4
    class hkpCollidable * m_rootCollidableB; // offset 0x8, size 0x4
    unsigned int m_shapeKeyB; // offset 0xC, size 0x4
};
// total size: 0x70
class zCurrent : public zInteractionUP {
    // Members
    bool Alive; // offset 0x50, size 0x1
    class xVec3 directionVec; // offset 0x54, size 0xC
    class zDirection * direction; // offset 0x60, size 0x4
    class zTrigger * * triggers; // offset 0x64, size 0x4
    class zCurrentAsset * asset; // offset 0x68, size 0x4
};
// total size: 0x30
class zCurrentAsset : public InteractionUP {
    // Members
    bool Alive; // offset 0x10, size 0x1
    float Strength; // offset 0x14, size 0x4
    class uid DirID; // offset 0x18, size 0x8
    class __triggers__ triggers; // offset 0x20, size 0x8
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x58
class zWhirlpool : public zInteractionUP {
    // Members
    bool Alive; // offset 0x50, size 0x1
    bool clockwise; // offset 0x51, size 0x1
    class zWhirlpoolAsset * asset; // offset 0x54, size 0x4
};
// total size: 0x38
class zWhirlpoolAsset : public InteractionUP {
    // Members
    class vec3 WhirlPosition; // offset 0x10, size 0xC
    float Strength; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
    float SpinSpeed; // offset 0x24, size 0x4
    bool Clockwise; // offset 0x28, size 0x1
    bool Alive; // offset 0x29, size 0x1
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x1F0
class zKevinSpringboard : public zInteractionUP {
    // Members
    bool canBigBounce; // offset 0x50, size 0x1
    class zKevinPlayer * kevin; // offset 0x54, size 0x4
    int kevinReady; // offset 0x58, size 0x4
    bool Alive; // offset 0x5C, size 0x1
    bool drawRussellIcon; // offset 0x5D, size 0x1
    class xEntFrame frame; // offset 0x60, size 0x124
    float kevinHeight; // offset 0x184, size 0x4
    float bias; // offset 0x188, size 0x4
    class xVec3 kevinPos; // offset 0x18C, size 0xC
    class xVec3 kevinDir; // offset 0x198, size 0xC
    float bounceHeight; // offset 0x1A4, size 0x4
    float bigBounceHeight; // offset 0x1A8, size 0x4
    class zInWorldIcon iconRussell; // offset 0x1AC, size 0x30
    class zKevinSpringboardAsset * asset; // offset 0x1DC, size 0x4
    class zAnimPackage * kevinSpringboardAnim; // offset 0x1E0, size 0x4
    class zAnimPackage * dugSpringboardAnim; // offset 0x1E4, size 0x4
    class zAnimPackage * carlSpringboardAnim; // offset 0x1E8, size 0x4
    class zAnimPackage * russellSpringboardAnim; // offset 0x1EC, size 0x4
};
// total size: 0x1240
class zKevinPlayer : public zUPAnimalPlayer {
    // Members
    bool isBentOver; // offset 0x1208, size 0x1
    class zKevinSpringboard * sbLink; // offset 0x120C, size 0x4
    class zKevinDanglePoint * dangleLink; // offset 0x1210, size 0x4
    float chaseTurnRate; // offset 0x1214, size 0x4
    float chaseSideMoveFactor; // offset 0x1218, size 0x4
    float chaseMaxInputAccel; // offset 0x121C, size 0x4
    float chaseRunSpeed; // offset 0x1220, size 0x4
    float chaseJumpSpeed; // offset 0x1224, size 0x4
    float curChaseMaxSpeed; // offset 0x1228, size 0x4
    float chaseStumblePenaltyPercent; // offset 0x122C, size 0x4
    bool bHasMountedBranch; // offset 0x1230, size 0x1
    bool stumblePending; // offset 0x1231, size 0x1
    bool aiStartSpringboard; // offset 0x1232, size 0x1
    class zUPPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0x1234, size 0x4
};
// total size: 0xD8
class zKevinDanglePoint : public zInteractionUP {
    // Members
    class xVec3 pos; // offset 0x50, size 0xC
    class xVec3 dir; // offset 0x5C, size 0xC
    class xVec3 RussellLandingPos; // offset 0x68, size 0xC
    class xVec3 KevinLandingPos; // offset 0x74, size 0xC
    class xVec3 CarlLandingPos; // offset 0x80, size 0xC
    class KevinDanglePoint * asset; // offset 0x8C, size 0x4
    float cooldownTime; // offset 0x90, size 0x4
    class zInWorldIcon iconRussell; // offset 0x94, size 0x30
    bool holding; // offset 0xC4, size 0x1
    bool alive; // offset 0xC5, size 0x1
    bool kevinAttached; // offset 0xC6, size 0x1
    class zAnimPackage * kevinBranchAnim; // offset 0xC8, size 0x4
    class zAnimPackage * carlSwingAnim; // offset 0xCC, size 0x4
    class zAnimPackage * russellSwingAnim; // offset 0xD0, size 0x4
    bool inBigSphere; // offset 0xD4, size 0x1
};
// total size: 0x70
class KevinDanglePoint : public InteractionUpWithIcons {
    // Members
    bool alive; // offset 0x1C, size 0x1
    class vec3 Position; // offset 0x20, size 0xC
    class Rotation3 Rotation; // offset 0x2C, size 0xC
    class uid RussellLandingPosition; // offset 0x38, size 0x8
    class uid KevinLandingPosition; // offset 0x40, size 0x8
    class uid CarlLandingPosition; // offset 0x48, size 0x8
    class uid KevinBranchAnim; // offset 0x50, size 0x8
    class uid CarlSwingAnim; // offset 0x58, size 0x8
    class uid RussellSwingAnim; // offset 0x60, size 0x8
    class LinkAsset EventLinksNew; // offset 0x68, size 0x8
};
// total size: 0xA0
class zKevinSpringboardAsset : public InteractionUpWithIcons {
    // Members
    class Matrix43POD field; // offset 0x20, size 0x30
    class uid kevinLookDir; // offset 0x50, size 0x8
    class uid russellTargetDir; // offset 0x58, size 0x8
    float influence; // offset 0x60, size 0x4
    bool ForceKevinPos; // offset 0x64, size 0x1
    bool ForceTargetPos; // offset 0x65, size 0x1
    float BounceHeight; // offset 0x68, size 0x4
    float BigBounceHeight; // offset 0x6C, size 0x4
    bool Alive; // offset 0x70, size 0x1
    class uid KevinSpringboardAnim; // offset 0x78, size 0x8
    class uid DugSpringboardAnim; // offset 0x80, size 0x8
    class uid RussellSpringboardAnim; // offset 0x88, size 0x8
    class uid CarlSpringboardAnim; // offset 0x90, size 0x8
    class LinkAsset EventLinksNew; // offset 0x98, size 0x8
};
// total size: 0x8
class EventActionDirection : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x98
class zInteractRopeTie : public zInteractionUPWithIcons {
    // Members
    class zInteractRopeTieAsset * asset; // offset 0x84, size 0x4
    int numPlayersIn; // offset 0x88, size 0x4
    float tieDelay; // offset 0x8C, size 0x4
    class zPlayer * holdPlayer; // offset 0x90, size 0x4
};
// total size: 0x48
class zInteractRopeTieAsset : public InteractionUpWithIcons {
    // Members
    class uid rope; // offset 0x20, size 0x8
    class vec3 position; // offset 0x28, size 0xC
    float xzRadius; // offset 0x34, size 0x4
    bool tieToPlayer; // offset 0x38, size 0x1
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x8
class AutotargetObject {
    // Members
    void * object; // offset 0x0, size 0x4
    enum ObjectType objectType; // offset 0x4, size 0x4
};
enum ObjectType {
    NONE = 0,
    ENTITY = 1,
    PHANTOM = 2,
};
enum CombatPlayer {
    NotInCombat = 0,
    PickAFighter = 1,
    InCombat = 2,
    ExitingCombat = 3,
};
enum SlidePlayer {
    NotSliding = 0,
    SetSlidingMsg = 1,
    PickASlider = 2,
    Sliding = 3,
    ExitingSlide = 4,
};
// total size: 0x8
class IconCache {
    // Members
    unsigned int textureRefHash; // offset 0x0, size 0x4
    class EntityHandle * textureHandle; // offset 0x4, size 0x4
};
// total size: 0x1D0
class TriggerIdentifyingPointCollectorNoShrapnel : public TriggerIdentifyingPointCollector {
    // Members
    class hkArray m_shrapnelObjectsWeHit; // offset 0x1B8, size 0xC
    class hkArray m_floatingObjectsWeHit; // offset 0x1C4, size 0xC
};
// total size: 0x1C0
class TriggerIdentifyingPointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_objectsWeHit; // offset 0x1A0, size 0xC
    class hkArray m_contacts; // offset 0x1AC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpWorldObject * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkContactPoint * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class ShrapnelContactData * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class ShrapnelContactData {
    // Members
    class hkpRigidBody * rBody; // offset 0x0, size 0x4
    class hkContactPoint contact; // offset 0x10, size 0x20
};
// total size: 0x190
class zProjectileUPPlaygroundLaunchable : public zProjectile {
    // Members
    bool hasCollided; // offset 0x185, size 0x1
    bool recentlyLaunched; // offset 0x186, size 0x1
    class zPlayer * playerOwner; // offset 0x188, size 0x4
};
// total size: 0x198
class zProjectileUPPlaygroundRollable : public zProjectile {
    // Members
    bool hasCollided; // offset 0x185, size 0x1
    class zPlayer * playerOwner; // offset 0x188, size 0x4
    float currentSpeedSquared; // offset 0x18C, size 0x4
    float timeUntilLaunchable; // offset 0x190, size 0x4
};
// total size: 0x30
class hkpCdPoint {
    // Members
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkpCdBody & m_cdBodyA; // offset 0x20, size 0x4
    class hkpCdBody & m_cdBodyB; // offset 0x24, size 0x4
};
// total size: 0x40
class hkpCharacterObjectInteractionEvent {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_normal; // offset 0x10, size 0x10
    float m_objectImpulse; // offset 0x20, size 0x4
    float m_timestep; // offset 0x24, size 0x4
    float m_projectedVelocity; // offset 0x28, size 0x4
    float m_objectMassInv; // offset 0x2C, size 0x4
    class hkpRigidBody * m_body; // offset 0x30, size 0x4
};
// total size: 0x20
class hkpCharacterObjectInteractionResult {
    // Members
    class hkVector4 m_objectImpulse; // offset 0x0, size 0x10
    class hkVector4 m_impulsePosition; // offset 0x10, size 0x10
};
// total size: 0x10
class EventActionSummonToLoc : public EventActionNew {
    // Members
    bool balloon; // offset 0x0, size 0x1
    class uid direction; // offset 0x8, size 0x8
};
// total size: 0x18
class zUPHumanPlayerAIFakeFightDog : public zUPPlayerAction {
    // Members
    class xBase * npc; // offset 0x10, size 0x4
    bool shouldStart; // offset 0x14, size 0x1
    bool fightingStarted; // offset 0x15, size 0x1
};
// total size: 0xC
class zUPHumanPlayer_CollectibleNPCWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    class xVec3 * at; // offset 0x4, size 0x4
    float npcY; // offset 0x8, size 0x4
};
// total size: 0xC
class zUPHumanPlayer_BugWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    class xVec3 * at; // offset 0x4, size 0x4
    float closestBugY; // offset 0x8, size 0x4
};
// total size: 0x3E50
class zBalloonGenerator {
    // Members
    bool wasSetup; // offset 0x0, size 0x1
    class zBalloonCluster balloons[20]; // offset 0x10, size 0x2440
    unsigned char firstInactiveA; // offset 0x2450, size 0x1
    unsigned char firstInactiveB; // offset 0x2451, size 0x1
    unsigned char firstInactiveC; // offset 0x2452, size 0x1
    class zUpSpring cords[20]; // offset 0x2454, size 0x19F0
};
// total size: 0x20
class BalloonAnimalRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitSurface; // offset 0x8, size 0x1
    bool hitBalloon; // offset 0x9, size 0x1
    float nearDist; // offset 0xC, size 0x4
    float balloonBound; // offset 0x10, size 0x4
    unsigned int shapeKey; // offset 0x14, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x18, size 0x4
    class xEnt * entity; // offset 0x1C, size 0x4
};
// total size: 0x8
class zUpFloatingBridge_BalloonAdapter : public AttachedObject {
    // Members
    class zUpFloatingBridge * bridge; // offset 0x4, size 0x4
};
// total size: 0x260
class zUpFloatingBridge : public zInteractionUPWithIcons {
    // Members
    class RenderedPhysicsModel rpModel; // offset 0x90, size 0x50
    class xVec3 physicsPosition; // offset 0xE0, size 0xC
    float balloonRiseTimer; // offset 0xEC, size 0x4
    class State * currentState; // offset 0xF0, size 0x4
    class zBalloonCluster * balloon; // offset 0xF4, size 0x4
    class zUpFloatingBridgeAsset * asset; // offset 0xF8, size 0x4
    class zUpFloatingBridge_BalloonAdapter balloonAdapter; // offset 0xFC, size 0x8
    class zSoundAsset soundRising; // offset 0x108, size 0x90
    class zSoundAsset soundCollapsing; // offset 0x198, size 0x90
    bool isPlayingSound; // offset 0x228, size 0x1
    class zInWorldIcon iconArrow; // offset 0x22C, size 0x30
};
// total size: 0x4
class State {};
// total size: 0xE0
class zUpFloatingBridgeAsset : public InteractionUpWithIcons {
    // Members
    class vec3 interactPos; // offset 0x1C, size 0xC
    float interactRadius; // offset 0x28, size 0x4
    class RenderedPhysicsModelAsset rpmAsset; // offset 0x30, size 0x70
    class uid AnimationSetID; // offset 0xA0, size 0x8
    class vec3 Scale; // offset 0xA8, size 0xC
    class SoundBankSource SoundRising; // offset 0xB4, size 0xC
    class SoundBankSource SoundCollapsing; // offset 0xC0, size 0xC
    class vec3 balloonPos; // offset 0xCC, size 0xC
    class LinkAsset EventLinksNew; // offset 0xD8, size 0x8
};
// total size: 0xC
class zLaserTurretAIBTActionBuilder : public zBTActionBuilder {
    // Members
    class zLaserTurret * turret; // offset 0x8, size 0x4
};
// total size: 0xC
class zLaserTurretAIBTConditionBuilder : public zBTConditionBuilder {
    // Members
    class zLaserTurret * turret; // offset 0x8, size 0x4
};
// total size: 0x18
class zButtonMashIcon {
    // Members
    class zUPPlayer * player; // offset 0x0, size 0x4
    bool iconMashUp; // offset 0x4, size 0x1
    float iconSwitchTime; // offset 0x8, size 0x4
    float currentTime; // offset 0xC, size 0x4
    unsigned int StrHashButtonUp; // offset 0x10, size 0x4
    unsigned int StrHashButtonDown; // offset 0x14, size 0x4
};
// total size: 0x68
class zButtonMasherMashChecker : public xOGEntity {
    // Members
    class PrivateFlags privateFlags; // offset 0x3C, size 0x8
    class zButtonMasherWidgetAsset * asset; // offset 0x44, size 0x4
    class zPlayerInput * playerInput; // offset 0x48, size 0x4
    bool cycleDone; // offset 0x4C, size 0x1
    bool pressed; // offset 0x4D, size 0x1
    unsigned int button; // offset 0x50, size 0x4
    float timer; // offset 0x54, size 0x4
    float curRate; // offset 0x58, size 0x4
    float curVelocity; // offset 0x5C, size 0x4
    int objectArrayIdx; // offset 0x60, size 0x4
};
// total size: 0x8
class PrivateFlags {
    // Members
    bool on : 1; // offset 0x0, size 0x1, bit offset 0
    bool doCalcRate : 1; // offset 0x0, size 0x1, bit offset 1
    unsigned int pad : 31; // offset 0x4, size 0x4, bit offset 0
};
// total size: 0x30
class zButtonMasherWidgetAsset : public xBaseAsset {
    // Members
    unsigned long long playerId; // offset 0x10, size 0x8
    unsigned int buttonId; // offset 0x18, size 0x4
    float lowRateThreshold; // offset 0x1C, size 0x4
    float medRateThreshold; // offset 0x20, size 0x4
    float highRateThreshold; // offset 0x24, size 0x4
    float decayTime; // offset 0x28, size 0x4
    float decayRate; // offset 0x2C, size 0x4
};
// total size: 0x38
class Button_Masher_Widget : public xBaseScene {
    // Members
    class uid Player; // offset 0x10, size 0x8
    enum ButtonType Button; // offset 0x18, size 0x4
    float Low_Rate_Threshold; // offset 0x1C, size 0x4
    float Medium_Rate_Threshold; // offset 0x20, size 0x4
    float High_Rate_Threshold; // offset 0x24, size 0x4
    float Time_Before_Decay; // offset 0x28, size 0x4
    float Decay_Rate; // offset 0x2C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x30, size 0x8
};
enum ButtonType {
    Start = 0,
    Select = 1,
    Aux1 = 2,
    Aux2 = 3,
    Up = 4,
    Right = 5,
    Down = 6,
    Left = 7,
    L1 = 8,
    L2 = 9,
    L3 = 10,
    L4 = 11,
    R1 = 12,
    R2 = 13,
    R3 = 14,
    R4 = 15,
    A = 16,
    B = 17,
    C = 18,
    D = 19,
    E = 20,
    F = 21,
    END_ButtonTypeENUM = 22,
};
// total size: 0x408
class zCam2Player : public xCam {
    // Members
    class @class mSecondary; // offset 0x148, size 0x18
    bool mHaveSecondary; // offset 0x160, size 0x1
    class rest_config rest; // offset 0x164, size 0x14
    float mPivotYOffset; // offset 0x178, size 0x4
    bool mFirstFrame; // offset 0x17C, size 0x1
    bool mIsLocked; // offset 0x17D, size 0x1
    bool mCancelNearWall; // offset 0x17E, size 0x1
    bool mCurveAsCenter; // offset 0x17F, size 0x1
    class xCamSupportLOSBar mLOSBar; // offset 0x180, size 0x38
    float mPreCollideThetaRestoreGoal; // offset 0x1B8, size 0x4
    enum COLLISION_AVOID_METHOD mCollisionAvoidMethod; // offset 0x1BC, size 0x4
    float mCollisionAvoidValue; // offset 0x1C0, size 0x4
    class xSpringyVec3 mTargetPos; // offset 0x1C4, size 0x28
    class basis_traits mBasis; // offset 0x1EC, size 0xDC
    class basis_traits mLastBasis; // offset 0x2C8, size 0xDC
    class xSpringyF32 mMountY; // offset 0x3A4, size 0x18
    class xSpringyAngle mPitchOffset; // offset 0x3BC, size 0x18
    class xSpringyAngle mYawOffset; // offset 0x3D4, size 0x18
    class xSpringyAngle mRollOffset; // offset 0x3EC, size 0x18
};
// total size: 0x18
class @class {
    // Members
    class xEnt * ent; // offset 0x0, size 0x4
    class xVec3 position; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float marginAngle; // offset 0x14, size 0x4
};
// total size: 0x14
class rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
    float roll_offset; // offset 0x10, size 0x4
};
enum COLLISION_AVOID_METHOD {
    no_collision = 0,
    increase_theta = 1,
    decrease_theta = 2,
    increase_phi = 3,
};
// total size: 0xDC
class basis_traits {
    // Members
    class xVec3 location; // offset 0x0, size 0xC
    class xSpringyVec3 origin; // offset 0xC, size 0x28
    class xSpringyAngle theta; // offset 0x34, size 0x18
    class xSpringyAngle phi; // offset 0x4C, size 0x18
    class xSpringyF32 dist; // offset 0x64, size 0x18
    class xSpringyAngle yaw; // offset 0x7C, size 0x18
    class xSpringyAngle thetaRestore; // offset 0x94, size 0x18
    class xSpringyF32 phiRestore; // offset 0xAC, size 0x18
    class xSpringyF32 distRestore; // offset 0xC4, size 0x18
};
// total size: 0x18
class xSpringyAngle : public xSpringyF32 {};
// total size: 0x10
class zRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    float nearDist; // offset 0xC, size 0x4
};
// total size: 0x20
class zCamPool : public zCamPoolBase {};
// total size: 0x20
class zCamPoolBase {
    // Members
    class xCam * mCameras[6]; // offset 0x0, size 0x18
    int mNumCameras; // offset 0x18, size 0x4
    int mNextCamera; // offset 0x1C, size 0x4
};
// total size: 0x40
class zCamBinaryPOI : public xOGEntity {
    // Members
    class xCamBinaryAsset * mAsset; // offset 0x3C, size 0x4
};
// total size: 0x58
class xCamBinaryAsset : public xBaseAsset {
    // Members
    unsigned short mVersion; // offset 0x10, size 0x2
    unsigned short mFlags; // offset 0x12, size 0x2
    unsigned long long mTargetID; // offset 0x18, size 0x8
    float mTargetMarginAngle; // offset 0x20, size 0x4
    float mTargetRadiusScale; // offset 0x24, size 0x4
    float mDistanceScale; // offset 0x28, size 0x4
    float mPhiOffset; // offset 0x2C, size 0x4
    float mYawOffset; // offset 0x30, size 0x4
    float mNearWallScale; // offset 0x34, size 0x4
    float mFarWallScale; // offset 0x38, size 0x4
    bool dofEnabled; // offset 0x3C, size 0x1
    float dofBlur; // offset 0x40, size 0x4
    float dofNearFocusPoint; // offset 0x44, size 0x4
    float dofNearFocusFalloff; // offset 0x48, size 0x4
    float dofFarFocusPoint; // offset 0x4C, size 0x4
    float dofFarFocusFalloff; // offset 0x50, size 0x4
};
// total size: 0x60
class binary_poi : public xBaseScene {
    // Members
    unsigned short pad1; // offset 0x10, size 0x2
    unsigned short pad2; // offset 0x12, size 0x2
    class uid PointOfInterest; // offset 0x18, size 0x8
    float TargetMarginAngle; // offset 0x20, size 0x4
    float TargetRadiusScale; // offset 0x24, size 0x4
    float DistanceScale; // offset 0x28, size 0x4
    float PhiOffset; // offset 0x2C, size 0x4
    float YawOffset; // offset 0x30, size 0x4
    float NearWallScale; // offset 0x34, size 0x4
    float FarWallScale; // offset 0x38, size 0x4
    bool dofEnabled; // offset 0x3C, size 0x1
    float dofBlur; // offset 0x40, size 0x4
    float dofNearFocusPoint; // offset 0x44, size 0x4
    float dofNearFocusFalloff; // offset 0x48, size 0x4
    float dofFarFocusPoint; // offset 0x4C, size 0x4
    float dofFarFocusFalloff; // offset 0x50, size 0x4
    class LinkAsset EventLinksNew; // offset 0x54, size 0x8
};
// total size: 0x1
class zCamRayHelper {};
// total size: 0x1C
class rayInfo {
    // Members
    bool hit; // offset 0x0, size 0x1
    float hitDist; // offset 0x4, size 0x4
    float nearestDist; // offset 0x8, size 0x4
    float offset; // offset 0xC, size 0x4
    class xVec3 endpoint; // offset 0x10, size 0xC
};
// total size: 0x20
class zNearFarHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    float nearDist; // offset 0xC, size 0x4
    float farDist; // offset 0x10, size 0x4
    float minDistance; // offset 0x14, size 0x4
    unsigned int filter; // offset 0x18, size 0x4
    bool allHits; // offset 0x1C, size 0x1
};
// total size: 0x5C
class Follower {
    // Members
    bool mValidPlayerPathPos; // offset 0x0, size 0x1
    class zCameraCurve * mCurves; // offset 0x4, size 0x4
    class BeadInfo mInfo; // offset 0x8, size 0x54
};
// total size: 0x58
class zCameraCurve : public xOGEntity {
    // Members
    class zCameraCurveAsset * mAsset; // offset 0x3C, size 0x4
    class CurveEntity * mCurve[2]; // offset 0x40, size 0x8
    float mRenderIncU[2]; // offset 0x48, size 0x8
    class zCamPoolBase * mCamPool; // offset 0x50, size 0x4
    class xCam * mCamera; // offset 0x54, size 0x4
};
// total size: 0x70
class zCameraCurveAsset : public CurveCamera {};
// total size: 0x54
class BeadInfo {
    // Members
    int mBeadIndex; // offset 0x0, size 0x4
    float mBeadIndexFrac; // offset 0x4, size 0x4
    float mCurveU[2]; // offset 0x8, size 0x8
    class xVec3 mCurvePos[2]; // offset 0x10, size 0x18
    float mDistanceScale; // offset 0x28, size 0x4
    float mYawOffset; // offset 0x2C, size 0x4
    float mPitchOffset; // offset 0x30, size 0x4
    float mRollOffset; // offset 0x34, size 0x4
    float mTargetRadius; // offset 0x38, size 0x4
    float mTargetMarginAngle; // offset 0x3C, size 0x4
    float mLeadOffset; // offset 0x40, size 0x4
    float mYOffset; // offset 0x44, size 0x4
    float mNearWallScale; // offset 0x48, size 0x4
    float mFarWallScale; // offset 0x4C, size 0x4
    float mFOV; // offset 0x50, size 0x4
};
// total size: 0x2C
class CameraBeadProperty {
    // Members
    float LeadOffset; // offset 0x0, size 0x4
    float NearWallScale; // offset 0x4, size 0x4
    float FarWallScale; // offset 0x8, size 0x4
    float DistanceScale; // offset 0xC, size 0x4
    float YawOffset; // offset 0x10, size 0x4
    float PitchOffset; // offset 0x14, size 0x4
    float RollOffset; // offset 0x18, size 0x4
    float YOffset; // offset 0x1C, size 0x4
    float TargetRadius; // offset 0x20, size 0x4
    float TargetMarginAngle; // offset 0x24, size 0x4
    float FOV; // offset 0x28, size 0x4
};
// total size: 0x8C
class zCamSplineCommonMix {
    // Members
    class zCameraCurve * mCurveInfo; // offset 0x4, size 0x4
    class Follower mCurveFollower; // offset 0x8, size 0x5C
    class xSpringyVec3 mCameraPathPosSprung; // offset 0x64, size 0x28
};
enum eCamCurve {
    eCamCurve_Player = 0,
    eCamCurve_Camera = 1,
    eCamCurve_NumCurve = 2,
};
// total size: 0x30
class xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned long long dstAssetID; // offset 0x8, size 0x8
    float param[4]; // offset 0x10, size 0x10
    unsigned long long paramWidgetAssetID; // offset 0x20, size 0x8
    unsigned long long chkAssetID; // offset 0x28, size 0x8
};
// total size: 0xF0
class zCameraFly : public xOGEntity, public IHackCameraFlyCallbackSink {
    // Members
    class Flythrough * casset; // offset 0x40, size 0x4
    class CameraFlyBlobEntity * ngFly; // offset 0x44, size 0x4
    class zSoundAsset assetSound; // offset 0x48, size 0x90
    class xVec3 gameCamPos; // offset 0xD8, size 0xC
    bool skippable; // offset 0xE4, size 0x1
    int viewportIndex; // offset 0xE8, size 0x4
};
// total size: 0x4
class IHackCameraFlyCallbackSink {};
// total size: 0x30
class Flythrough : public xBaseScene {
    // Members
    class uid Flythrough_asset; // offset 0x10, size 0x8
    class SoundBankSource source; // offset 0x18, size 0xC
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x3C
class CameraFlyBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class CameraFlyAsset * asset; // offset 0x20, size 0x4
    class IHackCameraFlyCallbackSink * cbSink; // offset 0x24, size 0x4
    float time; // offset 0x28, size 0x4
    bool playing; // offset 0x2C, size 0x1
    class Vector3 xform; // offset 0x30, size 0xC
};
// total size: 0x4
class ICinematicElement {};
// total size: 0x48
class CameraFlyAsset {
    // Members
    float fps; // offset 0x0, size 0x4
    unsigned int numFrames; // offset 0x4, size 0x4
    unsigned int numBreaks; // offset 0x8, size 0x4
    class Pointer32 breakKeys; // offset 0xC, size 0x4
    class Key keys[1]; // offset 0x10, size 0x38
};
// total size: 0x38
class Key {
    // Members
    float quat[4]; // offset 0x0, size 0x10
    float xform[3]; // offset 0x10, size 0xC
    float yfov; // offset 0x1C, size 0x4
    unsigned char dofEnabled; // offset 0x20, size 0x1
    float dofBlurAmt; // offset 0x24, size 0x4
    float dofNearPt; // offset 0x28, size 0x4
    float dofNearFalloff; // offset 0x2C, size 0x4
    float dofFarPt; // offset 0x30, size 0x4
    float dofFarFalloff; // offset 0x34, size 0x4
};
// total size: 0x38
class zCamTweak {
    // Members
    unsigned long long owner; // offset 0x0, size 0x8
    float priority; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float pitch; // offset 0x10, size 0x4
    float distMult; // offset 0x14, size 0x4
    float pivotHeight; // offset 0x18, size 0x4
    float FOV; // offset 0x1C, size 0x4
    float dirYaw; // offset 0x20, size 0x4
    float dirYawRange; // offset 0x24, size 0x4
    float dirPitch; // offset 0x28, size 0x4
    float dirPitchRange; // offset 0x2C, size 0x4
    float rigidity; // offset 0x30, size 0x4
};
// total size: 0x48
class Camera_Tweak : public xBaseScene {
    // Members
    int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
    float pivot_height_adjust; // offset 0x20, size 0x4
    float fov_adjust; // offset 0x24, size 0x4
    class dirTweak dir_adjust; // offset 0x28, size 0x14
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x14
class dirTweak {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float yaw_range; // offset 0x8, size 0x4
    float pitch_range; // offset 0xC, size 0x4
    float rigidity; // offset 0x10, size 0x4
};
// total size: 0x40
class zCameraTweak : public xOGEntity {
    // Members
    class CameraTweak_asset * casset; // offset 0x3C, size 0x4
};
// total size: 0x40
class CameraTweak_asset : public xBaseAsset {
    // Members
    int priority; // offset 0x10, size 0x4
    float time; // offset 0x14, size 0x4
    float pitch_adjust; // offset 0x18, size 0x4
    float dist_adjust; // offset 0x1C, size 0x4
    float pivot_height_adjust; // offset 0x20, size 0x4
    float fov_adjust; // offset 0x24, size 0x4
    class CameraTweak_direction dir_adjust; // offset 0x28, size 0x14
};
// total size: 0x14
class CameraTweak_direction {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float yaw_range; // offset 0x8, size 0x4
    float pitch_range; // offset 0xC, size 0x4
    float rigidity; // offset 0x10, size 0x4
};
// total size: 0x58
class zCamFollowTarget : public zCamTarget {
    // Members
    class xVec3 blended_loc; // offset 0x34, size 0xC
    float floor_height; // offset 0x40, size 0x4
    float mount_height; // offset 0x44, size 0x4
    float mount_offset; // offset 0x48, size 0x4
    float last_mount_offset; // offset 0x4C, size 0x4
    unsigned int playerIdx; // offset 0x50, size 0x4
    float mount_vel; // offset 0x54, size 0x4
};
// total size: 0x40
class zCamFixed : public xOGEntity {
    // Members
    class xCamAsset * mAsset; // offset 0x3C, size 0x4
};
// total size: 0x70
class xCamAsset : public xBaseAsset {
    // Members
    class xVec3 pos; // offset 0x10, size 0xC
    class xVec3 at; // offset 0x1C, size 0xC
    class xVec3 up; // offset 0x28, size 0xC
    class xVec3 right; // offset 0x34, size 0xC
    float editorYaw; // offset 0x40, size 0x4
    float editorPitch; // offset 0x44, size 0x4
    float editorRoll; // offset 0x48, size 0x4
    float fov; // offset 0x4C, size 0x4
    float trans_time; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    bool dofEnabled; // offset 0x58, size 0x1
    float dofBlur; // offset 0x5C, size 0x4
    float dofNearFocusPoint; // offset 0x60, size 0x4
    float dofNearFocusFalloff; // offset 0x64, size 0x4
    float dofFarFocusPoint; // offset 0x68, size 0x4
    float dofFarFocusFalloff; // offset 0x6C, size 0x4
};
// total size: 0x78
class xCamAsset : public xBaseScene {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    class vec3 at; // offset 0x1C, size 0xC
    class vec3 up; // offset 0x28, size 0xC
    class vec3 right; // offset 0x34, size 0xC
    class Rotation3 orientation; // offset 0x40, size 0xC
    float FOV; // offset 0x4C, size 0x4
    float trans_time; // offset 0x50, size 0x4
    unsigned int valid_flags; // offset 0x54, size 0x4
    bool dofEnabled; // offset 0x58, size 0x1
    float dofBlur; // offset 0x5C, size 0x4
    float dofNearFocusPoint; // offset 0x60, size 0x4
    float dofNearFocusFalloff; // offset 0x64, size 0x4
    float dofFarFocusPoint; // offset 0x68, size 0x4
    float dofFarFocusFalloff; // offset 0x6C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x70, size 0x8
};
// total size: 0x150
class zCamWorldFixed : public xCam {
    // Members
    class xCamAsset * mAsset; // offset 0x148, size 0x4
};
// total size: 0x44
class zCamPlayerTarget : public zCamTarget {
    // Members
    unsigned int playerIdx; // offset 0x34, size 0x4
    class xVec3 blended_loc; // offset 0x38, size 0xC
};
// total size: 0x218
class zCamWidget : public xCam {
    // Members
    bool transitioning; // offset 0x148, size 0x1
    bool restore_original; // offset 0x149, size 0x1
    class xCamAsset * asset; // offset 0x14C, size 0x4
    float time; // offset 0x150, size 0x4
    float end_time; // offset 0x154, size 0x4
    float start_fov; // offset 0x158, size 0x4
    float end_fov; // offset 0x15C, size 0x4
    class xVec3 start_loc; // offset 0x160, size 0xC
    class xQuat start_dir; // offset 0x16C, size 0x10
    class xQuat end_dir; // offset 0x17C, size 0x10
    float last_s; // offset 0x18C, size 0x4
    class xEnt * target_ent; // offset 0x190, size 0x4
    class xMat4x3 end_mat; // offset 0x194, size 0x40
    class xMat4x3 original_mat; // offset 0x1D4, size 0x40
};
// total size: 0x38
class camera_param_asset : public xBaseScene {
    // Members
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float blend_time; // offset 0x1C, size 0x4
    float fovfilter_period; // offset 0x20, size 0x4
    float start_fov; // offset 0x24, size 0x4
    float end_fov; // offset 0x28, size 0x4
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x30
class zStaticCameraAsset : public xBaseAsset {
    // Members
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float blend_time; // offset 0x1C, size 0x4
    float fovfilter_period; // offset 0x20, size 0x4
    float start_fov; // offset 0x24, size 0x4
    float end_fov; // offset 0x28, size 0x4
};
// total size: 0x40
class zCamMG2PWidget : public xOGEntity {
    // Members
    class zMG2PCamAsset * mAsset; // offset 0x3C, size 0x4
};
// total size: 0x28
class zMG2PCamAsset : public xBaseAsset {
    // Members
    class xVec3 pos; // offset 0x10, size 0xC
    float FOV; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
};
// total size: 0x30
class zMG2PCamAsset : public xBaseScene {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    float FOV; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x4E0
class zCamPlayer : public xCam {
    // Members
    class target_traits target_goal; // offset 0x148, size 0x30
    class target_traits target; // offset 0x178, size 0x30
    class @class input; // offset 0x1A8, size 0x14
    class @class blend_vel; // offset 0x1BC, size 0x30
    class @class vel_drift; // offset 0x1EC, size 0xC
    class @class zone; // offset 0x1F8, size 0x6C
    class @class aggression; // offset 0x264, size 0xC
    class @class mSecondary; // offset 0x270, size 0x18
    class @class start_zone; // offset 0x288, size 0x18
    class basis_traits basis; // offset 0x2A0, size 0x24
    class basis_traits last_basis; // offset 0x2C4, size 0x24
    class basis_traits result; // offset 0x2E8, size 0x24
    class basis_traits last_result; // offset 0x30C, size 0x24
    float pitch_rest; // offset 0x330, size 0x4
    float pitch_clamp; // offset 0x334, size 0x4
    float result_pitch; // offset 0x338, size 0x4
    class xVec3 look_loc; // offset 0x33C, size 0xC
    class xVec3 losbar_loc; // offset 0x348, size 0xC
    class xVec3 last_losbar_loc; // offset 0x354, size 0xC
    float losbar_rail_yoffset; // offset 0x360, size 0x4
    float last_losbar_rail_yoffset; // offset 0x364, size 0x4
    float dist_extend; // offset 0x368, size 0x4
    float dist_extend_vel; // offset 0x36C, size 0x4
    float speed_input_theta; // offset 0x370, size 0x4
    float rest_dist; // offset 0x374, size 0x4
    float rest_dist_vel; // offset 0x378, size 0x4
    float rest_phi; // offset 0x37C, size 0x4
    float rest_phi_vel; // offset 0x380, size 0x4
    float drest_phi; // offset 0x384, size 0x4
    float look_pitch; // offset 0x388, size 0x4
    class xCamSupportPath path; // offset 0x38C, size 0xAC
    class xCamSupportLOSBar losbar; // offset 0x438, size 0x38
    float floor_height; // offset 0x470, size 0x4
    float mount_height; // offset 0x474, size 0x4
    float mount_offset; // offset 0x478, size 0x4
    float last_mount_offset; // offset 0x47C, size 0x4
    bool grounded; // offset 0x480, size 0x1
    bool was_colliding; // offset 0x481, size 0x1
    bool first_frame; // offset 0x482, size 0x1
    class xMat4x3 snap_mat; // offset 0x484, size 0x40
    float pivot_height; // offset 0x4C4, size 0x4
    float pitch_offset; // offset 0x4C8, size 0x4
    float look_xz; // offset 0x4CC, size 0x4
    float defaultFOV; // offset 0x4D0, size 0x4
    int rest_owner; // offset 0x4D4, size 0x4
    class @class blend_speed; // offset 0x4D8, size 0x8
};
// total size: 0x30
class target_traits {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 vel; // offset 0xC, size 0xC
    class xVec3 motion; // offset 0x18, size 0xC
    class xVec3 extra_motion; // offset 0x24, size 0xC
};
// total size: 0x14
class @class {
    // Members
    float phi; // offset 0x0, size 0x4
    float vel_theta; // offset 0x4, size 0x4
    float vel_phi; // offset 0x8, size 0x4
    float dphi; // offset 0xC, size 0x4
    float pitch_offset; // offset 0x10, size 0x4
};
// total size: 0x30
class @class {
    // Members
    float input_theta; // offset 0x0, size 0x4
    float input_pitch_offset; // offset 0x4, size 0x4
    float restore_dist; // offset 0x8, size 0x4
    float restore_phi; // offset 0xC, size 0x4
    float target_xz; // offset 0x10, size 0x4
    float target_y; // offset 0x14, size 0x4
    float pitch; // offset 0x18, size 0x4
    float mount; // offset 0x1C, size 0x4
    float look_xz; // offset 0x20, size 0x4
    float collide_dist; // offset 0x24, size 0x4
    float pitch_rest; // offset 0x28, size 0x4
    float pitch_clamp; // offset 0x2C, size 0x4
};
// total size: 0xC
class @class {
    // Members
    float dtheta; // offset 0x0, size 0x4
    float dphi; // offset 0x4, size 0x4
    float ddist; // offset 0x8, size 0x4
};
// total size: 0x6C
class @class {
    // Members
    float dist; // offset 0x0, size 0x4
    float dist_goal; // offset 0x4, size 0x4
    float dist_vel; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
    float pitch_offset_goal; // offset 0x10, size 0x4
    float pitch_offset_vel; // offset 0x14, size 0x4
    float pitch_offset_speed; // offset 0x18, size 0x4
    class rest_config start; // offset 0x1C, size 0x10
    class rest_config end; // offset 0x2C, size 0x10
    class rest_config vel; // offset 0x3C, size 0x10
    class rest_config cur; // offset 0x4C, size 0x10
    class rest_config goal; // offset 0x5C, size 0x10
};
// total size: 0x10
class rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
};
// total size: 0xC
class @class {
    // Members
    float delay_start; // offset 0x0, size 0x4
    float precollide_theta; // offset 0x4, size 0x4
    float theta_vel; // offset 0x8, size 0x4
};
// total size: 0x18
class @class {
    // Members
    class xEnt * ent; // offset 0x0, size 0x4
    class xVec3 position; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float margin_angle; // offset 0x14, size 0x4
};
// total size: 0x18
class @class {
    // Members
    int which; // offset 0x0, size 0x4
    float phi; // offset 0x4, size 0x4
    float dist; // offset 0x8, size 0x4
    float theta; // offset 0xC, size 0x4
    float pitch_offset; // offset 0x10, size 0x4
    float yaw_offset; // offset 0x14, size 0x4
};
// total size: 0x24
class basis_traits : public xCamCoordPolar {
    // Members
    class xVec3 loc; // offset 0x18, size 0xC
};
// total size: 0x8
class @class {
    // Members
    float rest_dist; // offset 0x0, size 0x4
    float collide_dist; // offset 0x4, size 0x4
};
// total size: 0x298
class zCamSpline : public xCam, public zCamSplineCommonMix {
    // Members
    float mTargetyOffset; // offset 0x1D4, size 0x4
    class xSpringyVec3 mSprungTargetPos; // offset 0x1D8, size 0x28
    class xSpringyF32 mMountY; // offset 0x200, size 0x18
    class xSpringyF32 mXOffset; // offset 0x218, size 0x18
    class xSpringyF32 mYOffset; // offset 0x230, size 0x18
    class xSpringyAngle mYaw; // offset 0x248, size 0x18
    class xSpringyAngle mPitch; // offset 0x260, size 0x18
    class xSpringyAngle mRoll; // offset 0x278, size 0x18
    bool mCurveAsCenter; // offset 0x290, size 0x1
};
// total size: 0x30
class OOBExtent {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float nearFarDist; // offset 0x4, size 0x4
    float sideDist; // offset 0x8, size 0x4
    class xVec3 position; // offset 0xC, size 0xC
    class xVec3 depen; // offset 0x18, size 0xC
    float magDepen; // offset 0x24, size 0x4
    float leftXMargin; // offset 0x28, size 0x4
    float rightXMargin; // offset 0x2C, size 0x4
};
// total size: 0x1C8
class zCamTail : public xCam {
    // Members
    float collisionFrac; // offset 0x148, size 0x4
    float tailToFollowBlend; // offset 0x14C, size 0x4
    class xVec3 prevFollowPos; // offset 0x150, size 0xC
    float smoothSpeed; // offset 0x15C, size 0x4
    float atOffset; // offset 0x160, size 0x4
    float upOffset; // offset 0x164, size 0x4
    float poleDist; // offset 0x168, size 0x4
    class xMat4x3 railCameraBlend; // offset 0x16C, size 0x40
    float blurFactorBlend; // offset 0x1AC, size 0x4
    float blurZoomBlend; // offset 0x1B0, size 0x4
    float blurScaleBlend; // offset 0x1B4, size 0x4
    float m_pitchAngle; // offset 0x1B8, size 0x4
    float m_zoom; // offset 0x1BC, size 0x4
    class xEnt * driver; // offset 0x1C0, size 0x4
    class xVec3 * m_lockTargetPos; // offset 0x1C4, size 0x4
};
// total size: 0x30
class zNearHitSphereCollector : public hkpCdPointCollector {
    // Members
    float minDistance; // offset 0x8, size 0x4
    bool hit; // offset 0xC, size 0x1
    float closestDistance; // offset 0x10, size 0x4
    class hkVector4 hitNormal; // offset 0x20, size 0x10
};
// total size: 0x518
class zCamTargetSpline : public zCam2Player, public zCamSplineCommonMix {
    // Members
    class xCamSpatialInfo oldSpatial; // offset 0x490, size 0x30
    class xMat4x3 oldMat; // offset 0x4C0, size 0x40
    class xSpringyF32 mYOffset; // offset 0x500, size 0x18
};
// total size: 0xA8
class zUPHumanPlayer_Idle : public zPlayerIdleUP {};
// total size: 0x10
class zUPHumanPlayer_Walk : public zPlayerWalkUP {};
// total size: 0x10
class zPlayerWalkUP : public zUPPlayerAction {};
// total size: 0x10
class zUPHumanPlayer_Run : public zPlayerRunUP {};
// total size: 0x10
class zPlayerRunUP : public zUPPlayerAction {};
// total size: 0x1C
class zUPHumanPlayer_Jump : public zPlayerJumpUP {};
// total size: 0x1C
class zPlayerJumpUP : public zUPPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float hackPrevYVel; // offset 0x18, size 0x4
};
// total size: 0x54
class zUPHumanPlayer_AIJump : public zPlayerAIJump {};
// total size: 0x54
class zPlayerAIJump : public zUPPlayerAction {
    // Members
    class xVec3 dest; // offset 0x10, size 0xC
    class xVec3 facing; // offset 0x1C, size 0xC
    float time; // offset 0x28, size 0x4
    class xParabola path; // offset 0x2C, size 0x24
    bool startFalling; // offset 0x50, size 0x1
};
// total size: 0x14
class zUPHumanPlayer_Fall : public zPlayerFallUP {};
// total size: 0x14
class zPlayerFallUP : public zUPPlayerAction {
    // Members
    float fallYPos; // offset 0x10, size 0x4
};
// total size: 0x10
class zUPHumanPlayer_Land : public zPlayerLandUP {};
// total size: 0x10
class zPlayerLandUP : public zUPPlayerAction {};
// total size: 0x14
class zUPHumanPlayer_RopeTie : public zUPPlayerInterAction {};
// total size: 0x14
class zUPPlayerInterAction : public zUPPlayerAction {
    // Members
    class zInteractionUP * theInteraction; // offset 0x10, size 0x4
};
// total size: 0x70
class zUPHumanPlayer_VineSwing : public zUPPlayerAction {
    // Members
    int chillOutForForce; // offset 0x10, size 0x4
    float forceAttachTimer; // offset 0x14, size 0x4
    bool noSpecificLanding; // offset 0x18, size 0x1
    bool bottomedOut; // offset 0x19, size 0x1
    float impactTime; // offset 0x1C, size 0x4
    class xVec3 entryDir; // offset 0x20, size 0xC
    bool flipOffset; // offset 0x2C, size 0x1
    class xVec3 target; // offset 0x30, size 0xC
    class xParabola path; // offset 0x3C, size 0x24
    float timePassed; // offset 0x60, size 0x4
    class zSwingVine * vine; // offset 0x64, size 0x4
    float airTime; // offset 0x68, size 0x4
    bool restarting; // offset 0x6C, size 0x1
};
// total size: 0x14
class zUPHumanPlayerCombatBlock : public zUPPlayerAction {
    // Members
    bool blocked; // offset 0x10, size 0x1
};
// total size: 0xC
class zUPHumanPlayerCombatBlock_CatchNPCWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    class zPlayer * player; // offset 0x8, size 0x4
};
// total size: 0x10
class zUPHumanPlayerCombatTaunt : public zUPPlayerAction {};
// total size: 0x14
class zUPHumanPlayerCombatFinisher : public zUPPlayerAction {
    // Members
    class zNPCBase * closestNPC; // offset 0x10, size 0x4
};
// total size: 0x10
class zUPHumanPlayerHit : public zUPPlayerHit {};
// total size: 0x10
class zUPPlayerHit : public zPlayerHit {};
// total size: 0x10
class zPlayerHit : public zCommonPlayerAction {};
// total size: 0x10
class zUPHumanPlayerHitLaunch : public zUPPlayerHitLaunch {};
// total size: 0x10
class zUPPlayerHitLaunch : public zPlayerHitLaunch {};
// total size: 0x10
class zPlayerHitLaunch : public zCommonPlayerAction {};
// total size: 0x2C
class zUPHumanPlayerSpiderAttached : public zUPPlayerAction {
    // Members
    float buttonMashTimer; // offset 0x10, size 0x4
    class zButtonMashIcon masher; // offset 0x14, size 0x18
};
// total size: 0x10
class zCarlPlayerMelee : public zPlayerMelee {};
// total size: 0x10
class zPlayerMelee : public zUPPlayerAction {};
// total size: 0x10
class zCarlPlayerCaneBug : public zUPPlayerAction {};
// total size: 0x18
class zPlayerRagdollFallUP : public zUPPlayerAction, public RagdollCallbackListener {
    // Members
    float ragdollTimeRemaining; // offset 0x14, size 0x4
};
// total size: 0xA8
class zCarlPlayerIdle : public zUPHumanPlayer_Idle {};
// total size: 0x10
class zCarlPlayerWalk : public zUPHumanPlayer_Walk {};
// total size: 0x10
class zCarlPlayerRun : public zUPHumanPlayer_Run {};
// total size: 0x1C
class zCarlPlayerJump : public zUPHumanPlayer_Jump {};
// total size: 0x54
class zCarlPlayerAIJump : public zUPHumanPlayer_AIJump {};
// total size: 0x14
class zCarlPlayerFall : public zUPHumanPlayer_Fall {};
// total size: 0x10
class zCarlPlayerLand : public zUPHumanPlayer_Land {};
// total size: 0x10
class zCarlPlayerHit : public zUPHumanPlayerHit {};
// total size: 0x18
class zCarlPlayerLedgeHoist : public zUPPlayerInterAction {
    // Members
    bool grabbed; // offset 0x14, size 0x1
};
// total size: 0x8
class EventActionHudContextAction : public EventActionNew {
    // Members
    enum ePlayerTypeUp player; // offset 0x0, size 0x4
    unsigned char action; // offset 0x4, size 0x1
};
enum ePlayerTypeUp {
    ePlayerTypeUp_None = 4294967295,
    ePlayerTypeUp_Carl = 0,
    ePlayerTypeUp_Russell = 1,
    ePlayerTypeUp_Dug = 2,
    ePlayerTypeUp_Kevin = 3,
    END_ePlayerTypeUp_ENUM = 4,
};
// total size: 0x74
class zCarlPlayerRussellSwing : public zUPPlayerComboAction {
    // Members
    bool waitForLand; // offset 0x14, size 0x1
    bool attached; // offset 0x15, size 0x1
    class xVec3 target; // offset 0x18, size 0xC
    class xVec3 entryDir; // offset 0x24, size 0xC
    bool aligned; // offset 0x30, size 0x1
    class xParabola path; // offset 0x34, size 0x24
    float timePassed; // offset 0x58, size 0x4
    class zButtonMashIcon masher; // offset 0x5C, size 0x18
};
// total size: 0x14
class zUPPlayerComboAction : public zUPPlayerAction {
    // Members
    class zAnimPackage * currentPackage; // offset 0x10, size 0x4
};
// total size: 0x4C
class zRussellPlayerDangle : public zUPPlayerInterAction {
    // Members
    bool grabbed; // offset 0x14, size 0x1
    bool drop; // offset 0x15, size 0x1
    class xVec3 target; // offset 0x18, size 0xC
    class xParabola path; // offset 0x24, size 0x24
    float timePassed; // offset 0x48, size 0x4
};
// total size: 0x58
class zCarlPlayerKevinSwing : public zUPPlayerComboAction {
    // Members
    bool waitForLand; // offset 0x14, size 0x1
    bool attached; // offset 0x15, size 0x1
    class xVec3 target; // offset 0x18, size 0xC
    class xParabola path; // offset 0x24, size 0x24
    float timePassed; // offset 0x48, size 0x4
    float launchTime; // offset 0x4C, size 0x4
    bool releaseCarl; // offset 0x50, size 0x1
    unsigned int loffset; // offset 0x54, size 0x4
};
// total size: 0x4C
class zKevinPlayerDangle : public zUPPlayerInterAction {
    // Members
    bool grabbed; // offset 0x14, size 0x1
    bool fakeGrabbed; // offset 0x15, size 0x1
    bool drop; // offset 0x16, size 0x1
    class xVec3 target; // offset 0x18, size 0xC
    class xParabola path; // offset 0x24, size 0x24
    float timePassed; // offset 0x48, size 0x4
};
// total size: 0xC
class zCarlPlayerCaneBug_SquashNPCWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    class zPlayer * player; // offset 0x8, size 0x4
};
// total size: 0x10
class zCarlPlayerCaneBug_SquashWithinDistance_CB {
    // Members
    class xVec3 * pos; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    class zPlayer * player; // offset 0x8, size 0x4
    bool showSplatDecal; // offset 0xC, size 0x1
};
// total size: 0x30
class zCarlPlayer_BlowBalloon : public zUPPlayerInterAction {
    // Members
    int numPressed; // offset 0x14, size 0x4
    class zButtonMashIcon masher; // offset 0x18, size 0x18
};
// total size: 0x30
class zCarlPlayerPry : public zUPPlayerInterAction {
    // Members
    int numPressed; // offset 0x14, size 0x4
    class zButtonMashIcon masher; // offset 0x18, size 0x18
};
// total size: 0x18
class zCarlPlayerRussellRope : public zUPPlayerComboAction {
    // Members
    bool detachFromRope; // offset 0x14, size 0x1
    bool ledgeUp; // offset 0x15, size 0x1
};
// total size: 0x10
class zCarlPlayerHearingAid : public zUPPlayerAction {};
// total size: 0x14
class zCarlPlayerHeliumTank : public zUPPlayerAction {
    // Members
    float rechargeTimer; // offset 0x10, size 0x4
};
// total size: 0x50
class hkpSimplexSolverInput {
    // Members
    class hkVector4 m_position; // offset 0x0, size 0x10
    class hkVector4 m_velocity; // offset 0x10, size 0x10
    class hkVector4 m_maxSurfaceVelocity; // offset 0x20, size 0x10
    class hkVector4 m_upVector; // offset 0x30, size 0x10
    float m_deltaTime; // offset 0x40, size 0x4
    float m_minDeltaTime; // offset 0x44, size 0x4
    class hkpSurfaceConstraintInfo * m_constraints; // offset 0x48, size 0x4
    int m_numConstraints; // offset 0x4C, size 0x4
};
// total size: 0x40
class CarlLedgeHoist : public InteractionUP {
    // Members
    class uid Ledge; // offset 0x10, size 0x8
    class uid Animations; // offset 0x18, size 0x8
    class uid CarlTrigger; // offset 0x20, size 0x8
    class uid RussellTrigger; // offset 0x28, size 0x8
    class uid JumpHint; // offset 0x30, size 0x8
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0xF0
class zCarlLedgeHoist : public zInteractionUP {
    // Members
    class zLedge * ledge; // offset 0x50, size 0x4
    class xVec3 startPos; // offset 0x54, size 0xC
    class xVec3 startDir; // offset 0x60, size 0xC
    class CarlLedgeHoist * asset; // offset 0x6C, size 0x4
    class xVec3 startPosLocal; // offset 0x70, size 0xC
    class xVec3 startDirLocal; // offset 0x7C, size 0xC
    class xVec3 carlPosLocal; // offset 0x88, size 0xC
    class xMat3x3 diffMat; // offset 0x94, size 0x30
    class zCommonPlayer * hoistingPlayer; // offset 0xC4, size 0x4
    class xEnt * driver; // offset 0xC8, size 0x4
    class zTrigger * carlTrigger; // offset 0xCC, size 0x4
    class zTrigger * russellTrigger; // offset 0xD0, size 0x4
    class zDelegateP2 carlTriggerObserver; // offset 0xD4, size 0x8
    class zDelegateP2 russellTriggerObserver; // offset 0xDC, size 0x8
    bool carlInTrigger; // offset 0xE4, size 0x1
    bool russellInTrigger; // offset 0xE5, size 0x1
    class zDirection * jumpHint; // offset 0xE8, size 0x4
    class zAnimPackage * anims; // offset 0xEC, size 0x4
};
// total size: 0x88
class zCatapult : public xOGEntity {
    // Members
    class Catapult * asset; // offset 0x3C, size 0x4
    class xEnt * drivenBy; // offset 0x40, size 0x4
    float targetDistance; // offset 0x44, size 0x4
    float targetHeight; // offset 0x48, size 0x4
    float targetDrift; // offset 0x4C, size 0x4
    float arcHeight; // offset 0x50, size 0x4
    float throwTime; // offset 0x54, size 0x4
    float qA; // offset 0x58, size 0x4
    float qB; // offset 0x5C, size 0x4
    class xVec3 startPoint; // offset 0x60, size 0xC
    class xVec3 horizontalDisplacement; // offset 0x6C, size 0xC
    class hkpRigidBody * body; // offset 0x78, size 0x4
    class zCatapultCollisionListener * collisionListener; // offset 0x7C, size 0x4
    float airTime; // offset 0x80, size 0x4
    float totalTime; // offset 0x84, size 0x4
};
// total size: 0x38
class Catapult : public xBaseScene {
    // Members
    class uid DrivenBy; // offset 0x10, size 0x8
    float TargetDistance; // offset 0x18, size 0x4
    float TargetHeight; // offset 0x1C, size 0x4
    float TargetDrift; // offset 0x20, size 0x4
    float ArcHeight; // offset 0x24, size 0x4
    float ThrowTime; // offset 0x28, size 0x4
    class LinkAsset EventLinksNew; // offset 0x2C, size 0x8
};
// total size: 0x8
class zCatapultCollisionListener : public hkpCollisionListener {
    // Members
    class zCatapult * owner; // offset 0x4, size 0x4
};
// total size: 0x3
class zGameCheats {
    // Members
    bool unlimitedHealth : 1; // offset 0x0, size 0x1, bit offset 0
    bool upCollect100Badges : 1; // offset 0x0, size 0x1, bit offset 1
    bool upCollectCanteen : 1; // offset 0x0, size 0x1, bit offset 2
    bool upCollectHearingAid : 1; // offset 0x0, size 0x1, bit offset 3
    bool upCollectBugle : 1; // offset 0x0, size 0x1, bit offset 4
    bool upCollectBalloonAnimals : 1; // offset 0x0, size 0x1, bit offset 5
    bool upActionCarl : 1; // offset 0x0, size 0x1, bit offset 6
    bool upActionRussell : 1; // offset 0x0, size 0x1, bit offset 7
    bool unlockMultiplayerMaps : 1; // offset 0x1, size 0x1, bit offset 0
    bool unlockBonusMaterials : 1; // offset 0x1, size 0x1, bit offset 1
    bool giveAllUnlockables : 1; // offset 0x1, size 0x1, bit offset 2
    bool pitchUpDialog : 1; // offset 0x1, size 0x1, bit offset 3
    bool upDoubleBadgePoints : 1; // offset 0x1, size 0x1, bit offset 4
    bool upUnlimitedSpecialAbility : 1; // offset 0x1, size 0x1, bit offset 5
    bool upUnlockAllLevel : 1; // offset 0x1, size 0x1, bit offset 6
    bool upBalloonExplode : 1; // offset 0x1, size 0x1, bit offset 7
    bool upShootingDogBark : 1; // offset 0x2, size 0x1, bit offset 0
    bool upBlackWhiteMPLevel : 1; // offset 0x2, size 0x1, bit offset 1
    bool upBlackWhiteStoryLevel : 1; // offset 0x2, size 0x1, bit offset 2
};
// total size: 0x18
class CheatCode {
    // Members
    enum eCheats cheat; // offset 0x0, size 0x4
    unsigned int numButtons; // offset 0x4, size 0x4
    unsigned long long code; // offset 0x8, size 0x8
    char * activationString; // offset 0x10, size 0x4
    bool allowSaving; // offset 0x14, size 0x1
};
enum eCheats {
    zCheat_unlimitedHealth = 0,
    zCheat_UpCollect100Badges = 1,
    zCheat_UpCollectCanteen = 2,
    zCheat_UpCollectHearingAid = 3,
    zCheat_UpCollectBugle = 4,
    zCheat_UpCollectBalloonAnimals = 5,
    zCheat_UpActionCarl = 6,
    zCheat_UpActionRussell = 7,
    zCheat_unlockMultiplayerMaps = 8,
    zCheat_unlockBonusMaterials = 9,
    zCheat_giveAllUnlockables = 10,
    zCheat_pitchUpDialog = 11,
    zCheat_upDoubleBadgePoints = 12,
    zCheat_upUnlimitedSpecialAbility = 13,
    zCheat_upUnlockAllLevel = 14,
    zCheat_upBalloonExplode = 15,
    zCheat_upShootingDogBark = 16,
    zCheat_upBlackWhiteMPLevel = 17,
    zCheat_upBlackWhiteStoryLevel = 18,
    zCheat_MaxCheats = 19,
};
// total size: 0xA8
class zCheckpoint : public xOGEntity {
    // Members
    class zCheckpointAsset * asset; // offset 0x3C, size 0x4
    class zTrigger * trigger; // offset 0x40, size 0x4
    class zDirection * * positions; // offset 0x44, size 0x4
    class xLinkAsset triggerLink; // offset 0x48, size 0x30
    class RuntimeLinkAsset triggerLinkNewAsset; // offset 0x78, size 0x8
    class LinkAssetBaseNew triggerLinkNew; // offset 0x80, size 0x28
};
// total size: 0x68
class zCheckpointAsset : public xBaseScene {
    // Members
    unsigned int type; // offset 0x10, size 0x4
    int index; // offset 0x14, size 0x4
    class uid triggerID; // offset 0x18, size 0x8
    class uid scriptID; // offset 0x20, size 0x8
    class uid cameraID; // offset 0x28, size 0x8
    class __Positions__ Positions; // offset 0x30, size 0x8
    class uid HousePosition; // offset 0x38, size 0x8
    class uid house; // offset 0x40, size 0x8
    bool houseTie; // offset 0x48, size 0x1
    class uid houseTieOffPoint; // offset 0x50, size 0x8
    bool savePoint; // offset 0x58, size 0x1
    class LinkAsset EventLinksNew; // offset 0x5C, size 0x8
};
// total size: 0x8
class __Positions__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class RuntimeLinkAsset {
    // Members
    class __RuntimeEventLinksArray__ RuntimeEventLinksArray; // offset 0x0, size 0x8
};
// total size: 0x8
class __RuntimeEventLinksArray__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x130
class xEntPlayerAsset : public xEntAsset {
    // Members
    class uid ChrAsset; // offset 0xF8, size 0x8
    unsigned int PlayerIndex; // offset 0x100, size 0x4
    class uid lightKit; // offset 0x108, size 0x8
    unsigned int shadowColor; // offset 0x110, size 0x4
    float shadowMaxDepth; // offset 0x114, size 0x4
    float shadowStartDepth; // offset 0x118, size 0x4
    unsigned int shadowMinBlur; // offset 0x11C, size 0x4
    unsigned int shadowMaxBlur; // offset 0x120, size 0x4
    class LinkAsset EventLinksNew; // offset 0x124, size 0x8
};
// total size: 0x8
class EventActionSetGlobalReverb : public EventActionNew {
    // Members
    unsigned int reverbType; // offset 0x0, size 0x4
    float fadeTime; // offset 0x4, size 0x4
};
// total size: 0xC
class zCinematicSyncTableEntry {
    // Members
    float regionStart; // offset 0x0, size 0x4
    float regionEnd; // offset 0x4, size 0x4
    float offset; // offset 0x8, size 0x4
};
// total size: 0xC
class zCinematicSyncTable {
    // Members
    unsigned int cinematicUID; // offset 0x0, size 0x4
    class zCinematicSyncTableEntry * tableEntries; // offset 0x4, size 0x4
    unsigned int tableSize; // offset 0x8, size 0x4
};
// total size: 0x240
class zCinematic : public xOGEntity, public IHackCinematicCallbackSink {
    // Members
    class zSoundAsset assetSound; // offset 0x40, size 0x90
    class zCinematicAsset * asset; // offset 0xD0, size 0x4
    class CinematicBlobEntity * ngCinematic; // offset 0xD4, size 0x4
    class xBase * caller; // offset 0xD8, size 0x4
    bool skippable; // offset 0xDC, size 0x1
    float totalTime; // offset 0xE0, size 0x4
    float runningTime; // offset 0xE4, size 0x4
    int runningFrame; // offset 0xE8, size 0x4
    unsigned int currentClipIdx; // offset 0xEC, size 0x4
    bool fadingAtEnd; // offset 0xF0, size 0x1
    class xVec3 gameCamPos; // offset 0xF4, size 0xC
    enum eCinematicStatus status; // offset 0x100, size 0x4
    int tryNumber; // offset 0x104, size 0x4
    int soundLoadingWaitCounter; // offset 0x108, size 0x4
    class zCinematicSyncTable * cinematicSyncTable; // offset 0x10C, size 0x4
    class zPIDController soundVideoSyncPID; // offset 0x110, size 0x94
    class zPIDController soundGameTimeSyncPID; // offset 0x1A4, size 0x94
    float gameTimeMultiplier; // offset 0x238, size 0x4
};
// total size: 0x4
class IHackCinematicCallbackSink {};
// total size: 0x30
class zCinematicAsset : public xBaseScene {
    // Members
    class uid CinematicNG; // offset 0x10, size 0x8
    class SoundBankSource source; // offset 0x18, size 0xC
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0xA8
class CinematicBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class IHackCinematicCallbackSink * cbSink; // offset 0x20, size 0x4
    class Scene * scene; // offset 0x24, size 0x4
    class ModelInstanceTableEntry * instanceTable; // offset 0x28, size 0x4
    class AnimTableEntry * animTable; // offset 0x2C, size 0x4
    class EntityHandle camHandle; // offset 0x30, size 0x48
    class CameraFlyBlobEntity * camera; // offset 0x78, size 0x4
    unsigned char * animMem; // offset 0x7C, size 0x4
    unsigned int animMemSize; // offset 0x80, size 0x4
    unsigned char * interpMem; // offset 0x84, size 0x4
    unsigned int interpMemSize; // offset 0x88, size 0x4
    float timeMultiplier; // offset 0x8C, size 0x4
    float currentCinematicTime; // offset 0x90, size 0x4
    class CinematicAsset * asset; // offset 0x94, size 0x4
    class CinematicChunkHeader * activeChunk; // offset 0x98, size 0x4
    unsigned int nextChunkIndex; // offset 0x9C, size 0x4
    enum CinematicState state; // offset 0xA0, size 0x4
    float time; // offset 0xA4, size 0x4
};
// total size: 0x128
class ModelInstanceTableEntry {
    // Members
    class ModelInstanceArticle modelInstance; // offset 0x0, size 0x9C
    unsigned char * modelMem; // offset 0x9C, size 0x4
    int modelMemSize; // offset 0xA0, size 0x4
    class Visibility visParts[64]; // offset 0xA4, size 0x80
    signed char visCount; // offset 0x124, size 0x1
    bool active; // offset 0x125, size 0x1
};
// total size: 0x2
class Visibility {
    // Members
    unsigned char partIndex; // offset 0x0, size 0x1
    unsigned char stateMask; // offset 0x1, size 0x1
};
// total size: 0xC
class AnimTableEntry {
    // Members
    class EntityHandle * animHandle; // offset 0x0, size 0x4
    class ComboAnimBlobEntity * animEntity; // offset 0x4, size 0x4
    class Interpolator interpolator; // offset 0x8, size 0x4
};
// total size: 0x20
class ComboAnimBlobEntity : public BlobEntity {
    // Members
    class ComboAnimBlobAssetV2 * v2data; // offset 0x1C, size 0x4
};
// total size: 0x4
class Interpolator {
    // Members
    float time; // offset 0x0, size 0x4
};
// total size: 0x220
class CinematicAsset {
    // Members
    unsigned int numModels; // offset 0x0, size 0x4
    unsigned int numClips; // offset 0x4, size 0x4
    unsigned int numChunks; // offset 0x8, size 0x4
    class Pointer32 dataBlock; // offset 0xC, size 0x4
    class Pointer32 chunkTOC; // offset 0x10, size 0x4
    class ClipsTableEntry clipsTable[32]; // offset 0x18, size 0x200
    class ModelTableEntry modelTable[1]; // offset 0x218, size 0x8
};
// total size: 0x10
class ClipsTableEntry {
    // Members
    unsigned long long clipID; // offset 0x0, size 0x8
    unsigned int startFrame; // offset 0x8, size 0x4
    unsigned int endFrame; // offset 0xC, size 0x4
};
// total size: 0x8
class ModelTableEntry {
    // Members
    unsigned int modelSize; // offset 0x0, size 0x4
    class Pointer32 model; // offset 0x4, size 0x4
};
// total size: 0x1C
class CinematicChunkHeader {
    // Members
    unsigned int numAnims; // offset 0x0, size 0x4
    unsigned int cameraSize; // offset 0x4, size 0x4
    class Pointer32 cameraAnim; // offset 0x8, size 0x4
    float chunkTime; // offset 0xC, size 0x4
    class CinematicAnim anims[1]; // offset 0x10, size 0xC
};
// total size: 0xC
class CinematicAnim {
    // Members
    unsigned int modelIndex; // offset 0x0, size 0x4
    unsigned int animSize; // offset 0x4, size 0x4
    class Pointer32 anim; // offset 0x8, size 0x4
};
enum CinematicState {
    CIN_STOPPED = 0,
    CIN_PREPARE_TO_PLAY = 1,
    CIN_PLAYING = 2,
    CIN_PAUSED = 3,
};
enum eCinematicStatus {
    eStatus_Stopped = 0,
    eStatus_Started_WaitingOnSound = 1,
    eStatus_Started_PlayingNoSound = 2,
    eStatus_Started_Playing = 3,
};
// total size: 0x94
class zPIDController {
    // Members
    float errorsArray[16]; // offset 0x0, size 0x40
    float dtArray[16]; // offset 0x40, size 0x40
    int lastPos; // offset 0x80, size 0x4
    float kP; // offset 0x84, size 0x4
    float kI; // offset 0x88, size 0x4
    float kD; // offset 0x8C, size 0x4
    float estimatedDestSpeed; // offset 0x90, size 0x4
};
enum eSoundStatus {
    eSoundFailed = 0,
    eSoundLoading = 1,
    eSoundStarted = 2,
};
// total size: 0x1
class ChannelGroup {};
// total size: 0x1
class EventNotifyCinematicDone : public EventNotifyNew {
    // Members
    bool shouldReset; // offset 0x0, size 0x1
};
// total size: 0x40
class effect : public emitterBase {};
// total size: 0x114
class hkpAllCdBodyPairCollectorNoBSP : public hkpAllCdBodyPairCollector {};
// total size: 0x40
class hkpCapsuleShape : public hkpConvexShape {
    // Members
    class hkVector4 m_vertexA; // offset 0x20, size 0x10
    class hkVector4 m_vertexB; // offset 0x30, size 0x10
};
// total size: 0x20
class zComboReward {
    // Members
    int numHits; // offset 0x0, size 0x4
    int powerMult; // offset 0x4, size 0x4
    unsigned long long textAssetID; // offset 0x8, size 0x8
    class xTextAsset * textAsset; // offset 0x10, size 0x4
    float minScale; // offset 0x14, size 0x4
    float maxScale; // offset 0x18, size 0x4
};
// total size: 0x4
class xTextAsset {
    // Members
    unsigned int len; // offset 0x0, size 0x4
};
enum zComboType {
    eComboType_NonDecreasing = 0,
    eComboType_StandHit = 1,
    eComboType_removeMe1 = 2,
    eComboType_JumpHit = 3,
    eComboType_StandFierceHit = 4,
    eComboType_RunFierceHit = 5,
    eComboType_removeMe2 = 6,
    eComboType_JumpFierceHit = 7,
    eComboType_Throw = 8,
    eComboType_CrouchRoll = 9,
    eComboType_StretchHit = 10,
    eComboType_Count = 11,
    eComboType_ForceSizeInt = 2147483647,
};
// total size: 0xC0
class compositeEffect : public emitterBase {
    // Members
    class EntityHandleBase dummyHandle; // offset 0x40, size 0x48
    class effectAsset asset; // offset 0x88, size 0x38
};
// total size: 0x14
class BadgePoint {
    // Members
    int Gold; // offset 0x0, size 0x4
    int Silver; // offset 0x4, size 0x4
    int Bronze; // offset 0x8, size 0x4
    int Health; // offset 0xC, size 0x4
    float Probability; // offset 0x10, size 0x4
};
// total size: 0x28
class zPlayerTriggered : public zPlayerAction {
    // Members
    class xAnimState * triggeredAnims[4]; // offset 0x10, size 0x10
    class xBase * triggeredAnimSender; // offset 0x20, size 0x4
    int triggeredAnimIndex; // offset 0x24, size 0x4
};
// total size: 0x4
class EventActionHealth : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x8
class EventActionHealthF : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0x40
class zPlayerCustomAnim : public zCommonPlayerAction {
    // Members
    class PlayerAnimSeq * currSeq; // offset 0x10, size 0x4
    unsigned int nextEntry; // offset 0x14, size 0x4
    bool startNewState; // offset 0x18, size 0x1
    bool stop; // offset 0x19, size 0x1
    bool looping; // offset 0x1A, size 0x1
    float loopTime; // offset 0x1C, size 0x4
    float blend; // offset 0x20, size 0x4
    class xAnimState * tranStates[2]; // offset 0x24, size 0x8
    class xAnimState * loopStates[2]; // offset 0x2C, size 0x8
    unsigned int tranBackBuffer; // offset 0x34, size 0x4
    unsigned int loopBackBuffer; // offset 0x38, size 0x4
    bool aiState; // offset 0x3C, size 0x1
};
// total size: 0xC
class PlayerAnimSeq {
    // Members
    class OptionFlags Options; // offset 0x0, size 0x1
    class __Entries__ Entries; // offset 0x4, size 0x8
};
// total size: 0x1
class OptionFlags {
    // Members
    bool LoopSeq; // offset 0x0, size 0x1
};
// total size: 0x8
class __Entries__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class EventActionJawboneAnimateOnPlayer : public EventActionNew {
    // Members
    enum eJawboneSpeechType paramSpeechType; // offset 0x0, size 0x4
    float paramMinAngle; // offset 0x4, size 0x4
    float paramMaxAngle; // offset 0x8, size 0x4
    float paramSpeechPeriod; // offset 0xC, size 0x4
    class uid paramVFXAssetID; // offset 0x10, size 0x8
    int paramVFXBone; // offset 0x18, size 0x4
};
enum eJawboneSpeechType {
    JAWBONE_SPEECH_TYPE_JAWBONE_TALK = 0,
    JAWBONE_SPEECH_TYPE_JAWBONE_YELL = 1,
    END_JAWBONE_SPEECH_TYPE_ENUM = 2,
};
// total size: 0x18
class zPlayerIdle : public zCommonPlayerAction {
    // Members
    int previousExtraIdle; // offset 0x10, size 0x4
    int nextExtraIdle; // offset 0x14, size 0x4
};
// total size: 0x18
class zPlayerFall : public zCommonPlayerAction {
    // Members
    float fallYPos; // offset 0x10, size 0x4
    int beginFall; // offset 0x14, size 0x4
};
// total size: 0x10
class zPlayerSkidStop : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerWalkStart : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerWalk : public zCommonPlayerAction {};
// total size: 0x14
class zPlayerRun : public zCommonPlayerAction {
    // Members
    float runTimer; // offset 0x10, size 0x4
};
// total size: 0x14
class zPlayerSlip : public zCommonPlayerAction {
    // Members
    int slipping; // offset 0x10, size 0x4
};
enum SpecialActions {
    DefaultAction = 0,
    SpecialAction1 = 1,
    SpecialAction2 = 2,
    SpecialAction3 = 3,
    SpecialAction4 = 4,
    SpecialAction5 = 5,
    SpecialAction6 = 6,
    SpecialAction7 = 7,
    SpecialAction8 = 8,
    SpecialAction9 = 9,
    SpecialAction10 = 10,
};
// total size: 0x14
class zPlayerLand : public zCommonPlayerAction {
    // Members
    unsigned int landHint; // offset 0x10, size 0x4
};
// total size: 0x4
class EventNotifyTriggeredAnimDone : public EventNotifyNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x10
class zPlayerLedge : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerDefeated : public zCommonPlayerAction {};
// total size: 0x14
class zPlayerFallToDeath : public zCommonPlayerAction {
    // Members
    float timer; // offset 0x10, size 0x4
};
// total size: 0x14
class zCommonPlayerDash : public zCommonPlayerAction {
    // Members
    float dashAmount; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerMGWin : public zPlayerAction {};
// total size: 0x10
class zPlayerMGLose : public zPlayerAction {};
// total size: 0x18
class zPlayerDoubleJump : public zCommonPlayerAction {
    // Members
    bool doubleJumped; // offset 0x10, size 0x1
    float timer; // offset 0x14, size 0x4
};
// total size: 0x14
class zCommonPlayerInterAction : public zCommonPlayerAction {
    // Members
    class zInteractionUP * theInteraction; // offset 0x10, size 0x4
};
// total size: 0x18
class zCompLogicAnimViewer : public zNPCLogic {
    // Members
    float mCurAnimCycleDuration; // offset 0x8, size 0x4
    float mAutoActionTimer; // offset 0xC, size 0x4
    int mAutoActionCount; // offset 0x10, size 0x4
    float mTimer; // offset 0x14, size 0x4
};
// total size: 0x20
class AnimFrameStepper {
    // Members
    bool paused; // offset 0x0, size 0x1
    bool pendingStep; // offset 0x1, size 0x1
    float timer; // offset 0x4, size 0x4
    float timeScale; // offset 0x8, size 0x4
    unsigned int stepFPS; // offset 0xC, size 0x4
    float timeToAdvance; // offset 0x10, size 0x4
    unsigned int frame; // offset 0x14, size 0x4
    bool needsAligning; // offset 0x18, size 0x1
    class xModelInstance * model; // offset 0x1C, size 0x4
};
// total size: 0x828
class AnimViewerStates {
    // Members
    int mNumStates; // offset 0x0, size 0x4
    int mNumActive; // offset 0x4, size 0x4
    class StateConfig mStates[26]; // offset 0x8, size 0x820
};
// total size: 0x50
class StateConfig {
    // Members
    char * mName; // offset 0x0, size 0x4
    unsigned int mHashID; // offset 0x4, size 0x4
    char mFileName[64]; // offset 0x8, size 0x40
    bool mLooped; // offset 0x48, size 0x1
    bool mHasInfo; // offset 0x49, size 0x1
    class xAnimState * mAnimState; // offset 0x4C, size 0x4
};
// total size: 0xC
class Step {
    // Members
    class StateConfig * stateCfg; // offset 0x0, size 0x4
    unsigned int blendFrames; // offset 0x4, size 0x4
    unsigned int numRepeats; // offset 0x8, size 0x4
};
// total size: 0xD0
class AnimSequence {
    // Members
    class Step mSteps[16]; // offset 0x0, size 0xC0
    int mNumSteps; // offset 0xC0, size 0x4
    int mCurStep; // offset 0xC4, size 0x4
    unsigned int mLoopsLeft; // offset 0xC8, size 0x4
    class xModelInstance * mModel; // offset 0xCC, size 0x4
};
// total size: 0x158
class zAnimViewerCamera : public xCam {
    // Members
    float distance; // offset 0x148, size 0x4
    class xVec3 target; // offset 0x14C, size 0xC
};
// total size: 0x30
class zCondAsset : public xBaseScene {
    // Members
    class _Condition Condition; // offset 0x10, size 0x18
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
};
// total size: 0x18
class _Condition {
    // Members
    class uid Widget; // offset 0x0, size 0x8
    unsigned int Value; // offset 0x8, size 0x4
    unsigned int Expression; // offset 0xC, size 0x4
    unsigned int Operand; // offset 0x10, size 0x4
};
// total size: 0x28
class zCondAsset : public xBaseAsset {
    // Members
    unsigned long long value_asset; // offset 0x10, size 0x8
    unsigned int constNum; // offset 0x18, size 0x4
    unsigned int expr1; // offset 0x1C, size 0x4
    unsigned int op; // offset 0x20, size 0x4
};
// total size: 0x48
class zConditional : public xOGEntity {
    // Members
    class zCondAsset * asset; // offset 0x3C, size 0x4
    class zVarEntry * varEntry; // offset 0x40, size 0x4
};
// total size: 0x8
class zVarEntry {
    // Members
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int (* varCB)(void * context); // offset 0x4, size 0x4
};
// total size: 0x1
class EventActionDestructableFlag : public EventActionNew {
    // Members
    bool sentByDestructable; // offset 0x0, size 0x1
};
// total size: 0x10
class zDugPlayerMelee : public zPlayerMelee {};
// total size: 0x40
class ClosestNonTriggerCheckNoShrapnel : public hkpClosestCdPointCollector {};
// total size: 0x40
class hkpClosestCdPointCollector : public hkpCdPointCollector {
    // Members
    class hkpRootCdPoint m_hitPoint; // offset 0x10, size 0x30
};
// total size: 0xAC
class zDugPlayerIdle : public zPlayerIdleUP {
    // Members
    bool timeToShakeOff; // offset 0xA8, size 0x1
};
// total size: 0x10
class zDugPlayerWalk : public zPlayerWalkUP {};
// total size: 0x10
class zDugPlayerRun : public zPlayerRunUP {};
// total size: 0x10
class zDugPlayerLand : public zPlayerLandUP {};
// total size: 0x38
class zDugPlayerPlant : public zPlayerPlant {};
// total size: 0x38
class zPlayerPlant : public zUPPlayerAction {
    // Members
    float buttonsMashed; // offset 0x10, size 0x4
    float releaseDriftTime; // offset 0x14, size 0x4
    class xVec2 releaseDrift; // offset 0x18, size 0x8
    class zButtonMashIcon masher; // offset 0x20, size 0x18
};
// total size: 0x60
class zDugFainted : public zPlayerFainted {};
// total size: 0x60
class zPlayerFainted : public zUPPlayerAction {
    // Members
    float oX; // offset 0x10, size 0x4
    float oZ; // offset 0x14, size 0x4
    bool calledReveal; // offset 0x18, size 0x1
    class xMat4x3 newMat; // offset 0x1C, size 0x40
    float resetTimer; // offset 0x5C, size 0x4
};
// total size: 0x14
class zDugPlayerCrawl : public zUPPlayerAction {
    // Members
    class zAnimPackage * currentPackage; // offset 0x10, size 0x4
};
// total size: 0x18
class zDugPlayerSniff : public zUPPlayerInterAction {
    // Members
    int digLoops; // offset 0x14, size 0x4
};
// total size: 0x1C
class zDugPlayerLever : public zUPPlayerInterAction {
    // Members
    class zAnimPackage * currentPackage; // offset 0x14, size 0x4
    bool sentA; // offset 0x18, size 0x1
    bool sentB; // offset 0x19, size 0x1
};
// total size: 0x14
class zDugPlayerUnsummon : public zUPPlayerAction {
    // Members
    bool animationPlayed; // offset 0x10, size 0x1
};
// total size: 0x50
class zEventSpy : public xOGEntity {
    // Members
    class zEventSpyAsset * asset; // offset 0x3C, size 0x4
    int timesTrapped; // offset 0x40, size 0x4
    bool FlagLog; // offset 0x44, size 0x1
    bool FlagLogStack; // offset 0x45, size 0x1
    bool FlagAssert; // offset 0x46, size 0x1
    bool FlagAssertOnce; // offset 0x47, size 0x1
    bool FlagSound; // offset 0x48, size 0x1
    bool FlagSkip; // offset 0x49, size 0x1
};
// total size: 0x30
class zEventSpyAsset : public xBaseScene {
    // Members
    bool FlagLog; // offset 0x10, size 0x1
    bool FlagLogStack; // offset 0x11, size 0x1
    bool FlagAssert; // offset 0x12, size 0x1
    bool FlagAssertOnce; // offset 0x13, size 0x1
    bool FlagSound; // offset 0x14, size 0x1
    bool FlagSkip; // offset 0x15, size 0x1
    class __from__ from; // offset 0x18, size 0x8
    class __to__ to; // offset 0x20, size 0x8
    class __events__ events; // offset 0x28, size 0x8
};
// total size: 0x8
class __from__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __to__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __events__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0xF0
class zExplosiveObject : public zEntSimpleObj {
    // Members
    class ExplosiveObject * explosiveAsset; // offset 0xD8, size 0x4
    class ExplosiveProperties * explosiveProperties; // offset 0xDC, size 0x4
    bool shouldExplodeHit; // offset 0xE0, size 0x1
    bool alive; // offset 0xE1, size 0x1
    bool exploding; // offset 0xE2, size 0x1
    bool timerRunning; // offset 0xE3, size 0x1
    float explosionTimer; // offset 0xE4, size 0x4
    float chainExplodeDelayTimer; // offset 0xE8, size 0x4
};
// total size: 0x120
class ExplosiveObject : public xSimpleObjAsset {
    // Members
    class uid ExplosiveProperties; // offset 0x118, size 0x8
};
// total size: 0x120
class xSimpleObjAsset : public xEntAsset {
    // Members
    class uid Destructible; // offset 0xF8, size 0x8
    float AnimationSpeed; // offset 0x100, size 0x4
    unsigned int InitialState; // offset 0x104, size 0x4
    unsigned char Collision; // offset 0x108, size 0x1
    bool CameraCollisionOff; // offset 0x109, size 0x1
    unsigned char SimpleFlags; // offset 0x10A, size 0x1
    unsigned char orientRef; // offset 0x10B, size 0x1
    class LinkAsset EventLinksNew; // offset 0x10C, size 0x8
};
// total size: 0x40
class ExplosiveProperties {
    // Members
    class uid HitExplodeFXSpawn; // offset 0x0, size 0x8
    float HitExplodeRadius; // offset 0x8, size 0x4
    float HitExplodeDamage; // offset 0xC, size 0x4
    class uid ChainExplodeFXSpawn; // offset 0x10, size 0x8
    float ChainExplodeRadius; // offset 0x18, size 0x4
    float ChainExplodeDamage; // offset 0x1C, size 0x4
    class uid TouchedExplodeFXSpawn; // offset 0x20, size 0x8
    float TouchedExplodeRadius; // offset 0x28, size 0x4
    float TouchedExplodeDamage; // offset 0x2C, size 0x4
    float TouchedExplodeDelay; // offset 0x30, size 0x4
    float OverrideMass; // offset 0x34, size 0x4
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x8
class zFactoryMemTypeInfo {
    // Members
    char * typeName; // offset 0x0, size 0x4
    void (* leakCB)(void * leakedBlock, int leakedBlockSize); // offset 0x4, size 0x4
};
// total size: 0x1B8
class zCamMG2P : public xCam {
    // Members
    class zMG2PCamAsset * mAsset; // offset 0x148, size 0x4
    class xVec3 target; // offset 0x14C, size 0xC
    class xVec3 thePole; // offset 0x158, size 0xC
    class xSpringyVec3 goalPos; // offset 0x164, size 0x28
    class xSpringyVec3 poleEnd; // offset 0x18C, size 0x28
    bool firstFrame; // offset 0x1B4, size 0x1
};
// total size: 0x410
class zCamPlayerPOI : public zCam2Player {
    // Members
    class xCamBinaryAsset * mAsset; // offset 0x404, size 0x4
    class xBase * mTarget; // offset 0x408, size 0x4
};
enum BT_FAMILY {
    eBT_STANDARD_FAMILY = 0,
    eBT_PLAYER_FAMILY = 1,
    eBT_UP_LASER_TURRET_FAMILY = 2,
    eBT_NPC_FAMILY = 3,
    eBT_NPC_BIPLANE_FAMILY = 4,
    eBT_NPC_JET_FAMILY = 5,
};
// total size: 0xC0
class zVariable : public zVariableBase {
    // Members
    class zVariableEventData defaultValue; // offset 0x30, size 0x48
    class zVariableEventData value; // offset 0x78, size 0x48
};
// total size: 0x1E0
class zTailTracker {
    // Members
    class zNPCBase * npc; // offset 0x0, size 0x4
    int headSample; // offset 0x4, size 0x4
    bool samplesNeedReset; // offset 0x8, size 0x1
    class xHavokPhysicsObject tailCollisionSphere[14]; // offset 0x10, size 0x1C0
    class xVec3 snakeHeadPos; // offset 0x1D0, size 0xC
    float playerInvulnerabilityAfterHit; // offset 0x1DC, size 0x4
};
// total size: 0x10B8
class zPlayerInventory {
    // Members
    bool initialized; // offset 0x0, size 0x1
    bool soundInitialized; // offset 0x1, size 0x1
    class zBadgeAnimation goldBadge[20]; // offset 0x4, size 0x4B0
    class zBadgeAnimation silverBadge[20]; // offset 0x4B4, size 0x4B0
    class zBadgeAnimation bronzeBadge[20]; // offset 0x964, size 0x4B0
    class zBadgeAnimation healthBadge[5]; // offset 0xE14, size 0x12C
    class zFXSpawn * lostGoldFxAsset; // offset 0xF40, size 0x4
    class zFXSpawn * lostSilverFxAsset; // offset 0xF44, size 0x4
    class zFXSpawn * lostBronzeFxAsset; // offset 0xF48, size 0x4
    signed char uniqueCollectibleList[34]; // offset 0xF4C, size 0x22
    class zSoundAsset soundSource; // offset 0xF70, size 0x90
    int totalBadgePoint; // offset 0x1000, size 0x4
    short bugList[14]; // offset 0x1004, size 0x1C
    signed char numTank; // offset 0x1020, size 0x1
    signed char numBattery; // offset 0x1021, size 0x1
    signed char numCanteen; // offset 0x1022, size 0x1
    signed char numSheetMusic; // offset 0x1023, size 0x1
    class zUpQuestCard * QuestCard; // offset 0x1024, size 0x4
    class xGroup * questCardUnlockTextBoxGroup; // offset 0x1028, size 0x4
    class xGroup * questCardCompleteTextBoxGroup; // offset 0x102C, size 0x4
    class LevelFlagType LevelFlag[15]; // offset 0x1030, size 0x78
    short DogKilled; // offset 0x10A8, size 0x2
    short FreeBuddyCount; // offset 0x10AA, size 0x2
    short DestroyDestructible; // offset 0x10AC, size 0x2
    short numUseCanteen; // offset 0x10AE, size 0x2
    short numUseSheetMusic; // offset 0x10B0, size 0x2
    short numSquishBug; // offset 0x10B2, size 0x2
    bool EverDieInLevel; // offset 0x10B4, size 0x1
};
// total size: 0x3C
class zBadgeAnimation {
    // Members
    bool initialized; // offset 0x0, size 0x1
    class xOGModel * model; // offset 0x4, size 0x4
    bool isPlaying; // offset 0x8, size 0x1
    bool isShowing; // offset 0x9, size 0x1
    float delayTime; // offset 0xC, size 0x4
    class xVec3 startPoint; // offset 0x10, size 0xC
    class xVec3 middlePoint; // offset 0x1C, size 0xC
    float timer; // offset 0x28, size 0x4
    int value; // offset 0x2C, size 0x4
    class zGradientCurve * flyingCurve; // offset 0x30, size 0x4
    float widescreenMultiplier; // offset 0x34, size 0x4
    float randomPathParameter; // offset 0x38, size 0x4
};
// total size: 0x48
class zGradientCurve : public xOGEntity {
    // Members
    unsigned int numPoints; // offset 0x3C, size 0x4
    class sCurvePoint * points; // offset 0x40, size 0x4
    float * lookupTable; // offset 0x44, size 0x4
};
// total size: 0xC
class sCurvePoint {
    // Members
    float time; // offset 0x0, size 0x4
    float val; // offset 0x4, size 0x4
    enum eInterpolationType type; // offset 0x8, size 0x4
};
enum eInterpolationType {
    LINEAR = 0,
    EXPONENTIAL = 1,
    SMOOTH = 2,
};
// total size: 0x60
class zUpQuestCard : public xOGEntity {
    // Members
    class zUpQuestCardAsset * asset; // offset 0x3C, size 0x4
    signed char cardStatus[15]; // offset 0x40, size 0xF
    bool statusChange[15]; // offset 0x4F, size 0xF
};
// total size: 0x20
class zUpQuestCardAsset : public xBaseScene {
    // Members
    class __QuestCard__ QuestCard; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __QuestCard__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class LevelFlagType {
    // Members
    unsigned int levelID; // offset 0x0, size 0x4
    signed char finished; // offset 0x4, size 0x1
};
