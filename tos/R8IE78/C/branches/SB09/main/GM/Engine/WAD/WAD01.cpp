/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80051F80 -> 0x800AF098
*/
extern class hkMonitorStream * hkMonitorStream__m_instance; // size: 0x4
extern class hkTransform hkTransformIdentity; // size: 0x40
// total size: 0x208
class zAchievementsMgr : public zModule {
    // Members
    class fixed_queue _queue1; // offset 0x18, size 0xD4
    class fixed_queue _queue2; // offset 0xEC, size 0xD4
    class fixed_queue * waitingQueue; // offset 0x1C0, size 0x4
    class fixed_queue * processingQueue; // offset 0x1C4, size 0x4
    unsigned long long currentAchievementsDispatcherID; // offset 0x1C8, size 0x8
    char awardStatus[50]; // offset 0x1D0, size 0x32
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
// total size: 0xD4
class fixed_queue {
    // Members
    unsigned long _first; // offset 0x0, size 0x4
    unsigned long _last; // offset 0x4, size 0x4
    enum eAchievementType _buffer[51]; // offset 0x8, size 0xCC
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
    eAchievementType_43 = 43,
    eAchievementType_44 = 44,
    eAchievementType_45 = 45,
    eAchievementType_46 = 46,
    eAchievementType_47 = 47,
    eAchievementType_48 = 48,
    eAchievementType_49 = 49,
    eAchievementType_50 = 50,
    eAchievementTypeEnd = 51,
    eAchievementTypeForceInt = 2147483647,
};
// total size: 0x1B0
class MyCollisionCollector : public hkpAllCdPointCollector {
    // Members
    class hkpCollidable * skipThis; // offset 0x1A0, size 0x4
};
// total size: 0x30
class zVariableBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    enum eVarType type; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    class DelegateP0 * observers[8]; // offset 0xC, size 0x20
};
enum eVarType {
    eVarType_Invalid = 0,
    eVarType_S32 = 1,
    eVarType_F32 = 2,
    eVarType_xVec3 = 3,
    eVarType_xBasePtr = 4,
    eVarType_zInteractionUpPtr = 5,
    eVarType_zPlayerPtr = 6,
    eVarType_xMovePointPtr = 7,
    eVarType_UID = 8,
    eVarType_zUpFloatingObjectPtr = 9,
    eVarType_zVariableEventData = 10,
};
// total size: 0x8
class DelegateP0 {
    // Members
    void * obj; // offset 0x0, size 0x4
    void (* invoker)(void *); // offset 0x4, size 0x4
};
// total size: 0x8
class zBlackboard {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    class zVariableBase * * variables; // offset 0x4, size 0x4
};
// total size: 0x1A4
class zNPCBTClientBase : public zBTClient {
    // Members
    class zNPCBase * owner; // offset 0x1A0, size 0x4
};
// total size: 0x1A0
class zBTClient {
    // Members
    class zBTSet treeSet; // offset 0x0, size 0xC
    class zBTInterpreter interpreter; // offset 0xC, size 0x7C
    class zBlackboard blackboard; // offset 0x88, size 0x8
    class zBTActionBuilder * actionBuilder; // offset 0x90, size 0x4
    class zBTConditionBuilder * conditionBuilder; // offset 0x94, size 0x4
    class DelegateP3 * eventObservers[64]; // offset 0x98, size 0x100
    int eventObserverCount; // offset 0x198, size 0x4
};
// total size: 0xC
class zBTSet {
    // Members
    class zBT * root; // offset 0x0, size 0x4
    int goalCount; // offset 0x4, size 0x4
    class Goal * goals; // offset 0x8, size 0x4
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
// total size: 0xC
class Goal {
    // Members
    unsigned int goalID; // offset 0x0, size 0x4
    int treeCount; // offset 0x4, size 0x4
    class zBT * * trees; // offset 0x8, size 0x4
};
// total size: 0x7C
class zBTInterpreter {
    // Members
    class zScheduler scheduler; // offset 0x0, size 0x34
    int schedulerMaxTask; // offset 0x34, size 0x4
    int schedulerAddLimit; // offset 0x38, size 0x4
    class zBTClient * client; // offset 0x3C, size 0x4
    class PoolList running; // offset 0x40, size 0x1C
    class PoolList dead; // offset 0x5C, size 0x1C
    class DelegateP2 * releaseObserver; // offset 0x78, size 0x4
};
// total size: 0x34
class zScheduler {
    // Members
    class CircularQueue active; // offset 0x0, size 0x10
    class CircularQueue entries; // offset 0x10, size 0x10
    int maxTasks; // offset 0x20, size 0x4
    float timeLimit; // offset 0x24, size 0x4
    unsigned int entryLimit; // offset 0x28, size 0x4
    unsigned int entriesAdded; // offset 0x2C, size 0x4
    bool updating; // offset 0x30, size 0x1
    bool setupDone; // offset 0x31, size 0x1
};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class Entry * * pool; // offset 0xC, size 0x4
};
// total size: 0x18
class Entry {
    // Members
    class zSchedulerTask * task; // offset 0x0, size 0x4
    enum eTaskState state; // offset 0x4, size 0x4
    class DelegateP2 * stateChangeObserver; // offset 0x8, size 0x4
    class DelegateP2 * releaseObserver; // offset 0xC, size 0x4
    bool processing; // offset 0x10, size 0x1
    bool duplicate; // offset 0x11, size 0x1
    class Entry * next; // offset 0x14, size 0x4
};
// total size: 0x4
class zSchedulerTask {};
enum eTaskState {
    eTaskState_Unknown = 0,
    eTaskState_Running = 1,
    eTaskState_Suspend = 2,
    eTaskState_Complete = 3,
    eTaskState_Fail = 4,
    eTaskState_Abort = 5,
};
// total size: 0x8
class DelegateP2 {
    // Members
    void * obj; // offset 0x0, size 0x4
    void (* invoker)(void *, class zSchedulerTask *, enum eTaskState); // offset 0x4, size 0x4
};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0x8
class zBTActionBuilder {
    // Members
    class zBTClient * client; // offset 0x0, size 0x4
};
// total size: 0x8
class zBTConditionBuilder {
    // Members
    class zBTClient * client; // offset 0x0, size 0x4
};
// total size: 0x8
class DelegateP3 {
    // Members
    void * obj; // offset 0x0, size 0x4
    bool (* invoker)(void *, class xBase *, unsigned int, class EventAny *); // offset 0x4, size 0x4
};
// total size: 0x48
class zNPCSteering : public zNPCComponent {
    // Members
    class zNPCSteeringCollisionHandler * steeringCollisionListener; // offset 0x8, size 0x4
    class zNPCSteeringRigidBodyCollisionHandler * steeringCollisionRigidBodyListener; // offset 0xC, size 0x4
    class xVec3 externalAccAccum; // offset 0x10, size 0xC
    class xVec3 externalVelocityAccum; // offset 0x1C, size 0xC
    class xVec3 externalMomentumlessVelAccum; // offset 0x28, size 0xC
    class zWallNet * wallNet; // offset 0x34, size 0x4
    float turnSpringK; // offset 0x38, size 0x4
    float headingCalcInteropRatio; // offset 0x3C, size 0x4
    float gravity; // offset 0x40, size 0x4
    int steeringNeedsUpdate; // offset 0x44, size 0x4
};
// total size: 0x44
class zCombatHitSpot {
    // Members
    class HitSpot * asset; // offset 0x0, size 0x4
    class xEnt * owner; // offset 0x4, size 0x4
    class xVec3 boneOffset; // offset 0x8, size 0xC
    class xVec3 localDirection; // offset 0x14, size 0xC
    float cosAngle; // offset 0x20, size 0x4
    bool active; // offset 0x24, size 0x1
    class xVec3 position; // offset 0x28, size 0xC
    class xVec3 direction; // offset 0x34, size 0xC
    class hkpShapePhantom * havokPhantom; // offset 0x40, size 0x4
};
// total size: 0x10
class zNPCInfoNode {
    // Members
    class zNPCInfoNode * next; // offset 0x0, size 0x4
    class zNPCBase * owner; // offset 0x4, size 0x4
    enum eNPCInfoNodeType infoNodeType; // offset 0x8, size 0x4
};
enum eNPCInfoNodeType {
    eNPCInfoNodeType_First = 0,
    eNPCInfoNodeType_AnimationSignaler = 0,
    eNPCInfoNodeType_MovePointSave = 1,
    eNPCInfoNodeType_PathInfo = 2,
    eNPCInfoNodeType_Bouncer = 3,
    eNPCInfoNodeTypeCount = 4,
    eNPCInfoNodeTypeForceInt = 2147483647,
};
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
// total size: 0x1D50
class zBoardPlayer : public zCommonPlayer {
    // Members
    enum SBGooFilledState gooState; // offset 0x898, size 0x4
    bool FillWithGooShouldTurn; // offset 0x89C, size 0x1
    class xVec3 FillWithGooTurnTarget; // offset 0x8A0, size 0xC
    enum BoardPowerupState powerupState; // offset 0x8AC, size 0x4
    enum BoardPowerupState powerupModelState; // offset 0x8B0, size 0x4
    bool powerupPerformDeferredModelSwap; // offset 0x8B4, size 0x1
    float powerupTimer; // offset 0x8B8, size 0x4
    float CapsuleYOffset; // offset 0x8BC, size 0x4
    enum eRPSAttackTypes attackState; // offset 0x8C0, size 0x4
    float attackStateTimer; // offset 0x8C4, size 0x4
    float RPSKnockbackTimer; // offset 0x8C8, size 0x4
    float spinCooldownTimer; // offset 0x8CC, size 0x4
    float puckCooldownTimer; // offset 0x8D0, size 0x4
    enum SBEnemyState nearbyEnemyState; // offset 0x8D4, size 0x4
    float enemyProximityCheckTimer; // offset 0x8D8, size 0x4
    float successAnimTimer; // offset 0x8DC, size 0x4
    class zEntSimpleObj * aimer; // offset 0x8E0, size 0x4
    class zFXSpawn * gooSplashFXScript; // offset 0x8E4, size 0x4
    class zFXSpawn * invincibilityFXScript; // offset 0x8E8, size 0x4
    class zFXSpawn * invincibilityFXSpawnPt; // offset 0x8EC, size 0x4
    class zFXSpawn * invincibilityMovingFXScript; // offset 0x8F0, size 0x4
    class zFXSpawn * invincibilityMovingFXSpawnPt; // offset 0x8F4, size 0x4
    bool invincibilityFXEnabled; // offset 0x8F8, size 0x1
    class zSBPlayerHoseMode hoseMode; // offset 0x8FC, size 0x7C
    float maxSpeed; // offset 0x978, size 0x4
    class zSBProjectileManager projectileManager; // offset 0x97C, size 0x1
    class xBase * trampolineLink; // offset 0x980, size 0x4
    bool canDoubleJump; // offset 0x984, size 0x1
    bool canSpinGlide; // offset 0x985, size 0x1
    bool inRubberBand; // offset 0x986, size 0x1
    class xVec3 surfaceVelocity; // offset 0x988, size 0xC
    float surfaceAngularVelocity; // offset 0x994, size 0x4
    float quicksandSinkDistance; // offset 0x998, size 0x4
    float spinPowerupFloatHeight; // offset 0x99C, size 0x4
    class zBungeeBall * bungeeBallLink; // offset 0x9A0, size 0x4
    class zBungeeBall * bungeeBallActiveLink; // offset 0x9A4, size 0x4
    class xVec3 bungeeBallOffset; // offset 0x9A8, size 0xC
    class zPlantTrap * kelpTrapLink; // offset 0x9B4, size 0x4
    bool performCelebration; // offset 0x9B8, size 0x1
    bool boardSnowboardStyle; // offset 0x9B9, size 0x1
    unsigned int surfaceDefeatedByType; // offset 0x9BC, size 0x4
    class zSlope * slideSurface; // offset 0x9C0, size 0x4
    float slideCooldown; // offset 0x9C4, size 0x4
    bool lockInput; // offset 0x9C8, size 0x1
    class xVec2 lastStickInput; // offset 0x9CC, size 0x8
    class xVec3 lastCamRelativeInput; // offset 0x9D4, size 0xC
    float leanLerp[2]; // offset 0x9E0, size 0x8
    float leanBlendSpeed; // offset 0x9E8, size 0x4
    class xVec3 inputAcceleration; // offset 0x9EC, size 0xC
    float maxInputAcceleration; // offset 0x9F8, size 0x4
    float spinPowerupInputAcceleration; // offset 0x9FC, size 0x4
    float spinPowerupInputFriction; // offset 0xA00, size 0x4
    float airTurnRate; // offset 0xA04, size 0x4
    float airResistance; // offset 0xA08, size 0x4
    float dynamicFrictionDeceleration; // offset 0xA0C, size 0x4
    float spinPowerupConstDecelFric; // offset 0xA10, size 0x4
    float staticFrictionDeceleration; // offset 0xA14, size 0x4
    class xBase * frictionBoostLastFloor; // offset 0xA18, size 0x4
    bool frictionBoostActive; // offset 0xA1C, size 0x1
    bool frictionBoostEnabled; // offset 0xA1D, size 0x1
    float frictionBoostMaxSpeed; // offset 0xA20, size 0x4
    float frictionBoostMinFriction; // offset 0xA24, size 0x4
    float frictionBoostPerpVelThreshold; // offset 0xA28, size 0x4
    float normalTurnRate; // offset 0xA2C, size 0x4
    float normalWalkStartSpeed; // offset 0xA30, size 0x4
    float normalWalkSpeed; // offset 0xA34, size 0x4
    float normalRunSpeed; // offset 0xA38, size 0x4
    float normalRunStart; // offset 0xA3C, size 0x4
    float normalWalkStart; // offset 0xA40, size 0x4
    float jumpRunSpeed; // offset 0xA44, size 0x4
    float jumpRunStart; // offset 0xA48, size 0x4
    float jumpWalkStart; // offset 0xA4C, size 0x4
    float spinAttackRunSpeed; // offset 0xA50, size 0x4
    float spinGlideRunSpeed; // offset 0xA54, size 0x4
    float spinSpongebuffRunSpeed; // offset 0xA58, size 0x4
    float spinSpongebuffGlideRunSpeed; // offset 0xA5C, size 0x4
    float spinPowerupRunSpeed; // offset 0xA60, size 0x4
    float spinPowerupGlideRunSpeed; // offset 0xA64, size 0x4
    float gooTurnRate; // offset 0xA68, size 0x4
    float gooRunSpeed; // offset 0xA6C, size 0x4
    float gooJumpSpeed; // offset 0xA70, size 0x4
    float gooRunStart; // offset 0xA74, size 0x4
    float gooWalkStart; // offset 0xA78, size 0x4
    float maxSlopeCosine; // offset 0xA7C, size 0x4
    float floorRayCastDistanceUp; // offset 0xA80, size 0x4
    float floorRayCastDistanceDown; // offset 0xA84, size 0x4
    float stairDetectionTolerance; // offset 0xA88, size 0x4
    float stairClimbEpsilon; // offset 0xA8C, size 0x4
    float stairClimbLastHeight; // offset 0xA90, size 0x4
    class hkVector4 halfExtents; // offset 0xAA0, size 0x10
    class zBoardPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0xAB0, size 0x4
    class zCombatAttack SBAttackStates[22]; // offset 0xAB8, size 0x1290
};
enum SBGooFilledState {
    eGoo_NoGoo = 0,
    eGoo_AbsorbingGoo = 1,
    eGoo_FilledWithGoo = 2,
    eGoo_FilledWithGoo75 = 3,
    eGoo_FilledWithGoo50 = 4,
    eGoo_FilledWithGoo25 = 5,
    eGoo_DrainingGoo = 6,
    eGoo_Count = 7,
};
enum BoardPowerupState {
    eBoardPowerup_None = 0,
    eBoardPowerup_Spongebuff = 1,
    eBoardPowerup_Spin = 2,
    eBoardPowerup_Hammer = 3,
    eBoardPowerup_Puck = 4,
    eBoardPowerup_Invincibility = 5,
    eBoardPowerup_DefeatedIce = 6,
    eBoardPowerup_Gravestone = 7,
    eBoardPowerup_HitByHammer = 8,
    eBoardPowerup_SpinIn = 9,
    eBoardPowerup_HammerIn = 10,
    eBoardPowerup_PuckIn = 11,
    eBoardPowerup_Count = 12,
};
enum SBEnemyState {
    eEnemy_None = 0,
    eEnemy_Nearby = 1,
    eEnemy_AllDefeated = 2,
    eEnemy_ForcedSuccess = 3,
};
// total size: 0x7C
class zSBPlayerHoseMode {
    // Members
    bool isSquirting; // offset 0x0, size 0x1
    bool shouldStopSquirting; // offset 0x1, size 0x1
    float elapsed; // offset 0x4, size 0x4
    float fluidTimeLeft; // offset 0x8, size 0x4
    float fluidTransitionOutTime; // offset 0xC, size 0x4
    float extraRatio; // offset 0x10, size 0x4
    float blendY; // offset 0x14, size 0x4
    float blendX; // offset 0x18, size 0x4
    float blendVelY; // offset 0x1C, size 0x4
    float blendVelX; // offset 0x20, size 0x4
    float bezierCurveOffsetPoint1; // offset 0x24, size 0x4
    float bezierCurveOffsetPoint2; // offset 0x28, size 0x4
    float bezierCurveOffsetPoint3; // offset 0x2C, size 0x4
    class xMat3x3 initialMat; // offset 0x30, size 0x30
    class zSBPlayer * player; // offset 0x60, size 0x4
    class ElectricArc * hose; // offset 0x64, size 0x4
    float currAng; // offset 0x68, size 0x4
    class xBase * hitObj; // offset 0x6C, size 0x4
    float elapsedFluidContinue; // offset 0x70, size 0x4
    int lastAlphaScaleIdx; // offset 0x74, size 0x4
    float hoseRotationSpeed; // offset 0x78, size 0x4
};
// total size: 0x1DD0
class zSBPlayer : public zCommonPlayer {
    // Members
    enum SBGooFilledState gooState; // offset 0x898, size 0x4
    enum SBGooFilledState lastGooState; // offset 0x89C, size 0x4
    bool FillWithGooShouldTurn; // offset 0x8A0, size 0x1
    class xVec3 FillWithGooTurnTarget; // offset 0x8A4, size 0xC
    enum SBPowerupState powerupState; // offset 0x8B0, size 0x4
    enum SBPowerupState powerupModelState; // offset 0x8B4, size 0x4
    bool returnToBuff; // offset 0x8B8, size 0x1
    bool powerupPerformDeferredModelSwap; // offset 0x8B9, size 0x1
    float powerupTimer; // offset 0x8BC, size 0x4
    float CapsuleYOffset; // offset 0x8C0, size 0x4
    float buffInvincibilityTimer; // offset 0x8C4, size 0x4
    enum eRPSAttackTypes attackState; // offset 0x8C8, size 0x4
    float RPSKnockbackTimer; // offset 0x8CC, size 0x4
    class xCounter * puckAmmoCounter; // offset 0x8D0, size 0x4
    float spinCooldownTimer; // offset 0x8D4, size 0x4
    float puckCooldownTimer; // offset 0x8D8, size 0x4
    bool spinEnabled; // offset 0x8DC, size 0x1
    bool hammerEnabled; // offset 0x8DD, size 0x1
    bool puckEnabled; // offset 0x8DE, size 0x1
    enum SBEnemyState nearbyEnemyState; // offset 0x8E0, size 0x4
    float enemyProximityCheckTimer; // offset 0x8E4, size 0x4
    float successAnimTimer; // offset 0x8E8, size 0x4
    enum SBHappinessState happinessState; // offset 0x8EC, size 0x4
    class zFXSpawn * gooSplashFXScript; // offset 0x8F0, size 0x4
    class zFXSpawn * acidSplashFXScript; // offset 0x8F4, size 0x4
    class zFXSpawn * bungeeBallBreakFreeFXScript; // offset 0x8F8, size 0x4
    class zFXSpawn * bungeeBallHitObjectFXScript; // offset 0x8FC, size 0x4
    class zFXSpawn * invincibilityFXScript; // offset 0x900, size 0x4
    class zFXSpawn * invincibilityFXSpawnPt; // offset 0x904, size 0x4
    class zFXSpawn * invincibilityMovingFXScript; // offset 0x908, size 0x4
    class zFXSpawn * invincibilityMovingFXSpawnPt; // offset 0x90C, size 0x4
    class zFXSpawn * SBB3SmokeTrailFXScript; // offset 0x910, size 0x4
    class zFXSpawn * SBB3SmokeTrailFXSpawnPt; // offset 0x914, size 0x4
    class zFXSpawn * losePowerupFXScript; // offset 0x918, size 0x4
    class zFXSpawn * nullAttackFXScript; // offset 0x91C, size 0x4
    class zFXSpawn * minibossLyleVortexFXSpawnPt; // offset 0x920, size 0x4
    class zFXSpawn * breathFXScript; // offset 0x924, size 0x4
    class zFXSpawn * breathFXSpawnPt; // offset 0x928, size 0x4
    class zSoundFX * nearDeathSound; // offset 0x92C, size 0x4
    class zSoundCue * scBuff; // offset 0x930, size 0x4
    class zSoundCue * scHammer; // offset 0x934, size 0x4
    class zSoundCue * scSpin; // offset 0x938, size 0x4
    class zSoundCue * scPuck; // offset 0x93C, size 0x4
    class zSoundCue * scInvincible; // offset 0x940, size 0x4
    bool invincibilityFXEnabled; // offset 0x944, size 0x1
    bool SBB3smokeTrailFXEnabled; // offset 0x945, size 0x1
    bool breathFXEnabled; // offset 0x946, size 0x1
    bool coldArea; // offset 0x947, size 0x1
    float hitBlinkTimer; // offset 0x948, size 0x4
    bool hitBlinkRed; // offset 0x94C, size 0x1
    class xVec3 frozenGooVentMoveDir; // offset 0x950, size 0xC
    class zSBPlayerHoseMode hoseMode; // offset 0x95C, size 0x7C
    int attackID; // offset 0x9D8, size 0x4
    float maxSpeed; // offset 0x9DC, size 0x4
    class zSBProjectileManager projectileManager; // offset 0x9E0, size 0x1
    class xBase * trampolineLink; // offset 0x9E4, size 0x4
    class xBase * prevTrampoline; // offset 0x9E8, size 0x4
    float lastTrampolineBounceY; // offset 0x9EC, size 0x4
    bool activeTrampoline; // offset 0x9F0, size 0x1
    bool canDoubleJump; // offset 0x9F1, size 0x1
    bool canSpinGlide; // offset 0x9F2, size 0x1
    bool inRubberBand; // offset 0x9F3, size 0x1
    class zProjectileSBBombNPC * bombLink; // offset 0x9F4, size 0x4
    class xVec3 bombRollOffset; // offset 0x9F8, size 0xC
    float bombMountTimer; // offset 0xA04, size 0x4
    bool floorSupportOnBothSides; // offset 0xA08, size 0x1
    class xVec3 surfaceVelocity; // offset 0xA0C, size 0xC
    float surfaceAngularVelocity; // offset 0xA18, size 0x4
    float quicksandSinkDistance; // offset 0xA1C, size 0x4
    float spinPowerupFloatHeight; // offset 0xA20, size 0x4
    class zBungeeBall * bungeeBallLink; // offset 0xA24, size 0x4
    class zBungeeBall * bungeeBallActiveLink; // offset 0xA28, size 0x4
    class xVec3 bungeeBallOffset; // offset 0xA2C, size 0xC
    class zPlantTrap * kelpTrapLink; // offset 0xA38, size 0x4
    bool performCelebration; // offset 0xA3C, size 0x1
    int npcsKilled; // offset 0xA40, size 0x4
    unsigned int surfaceDefeatedByType; // offset 0xA44, size 0x4
    bool lockInput; // offset 0xA48, size 0x1
    class xVec2 lastStickInput; // offset 0xA4C, size 0x8
    class xVec3 lastCamRelativeInput; // offset 0xA54, size 0xC
    float leanLerp; // offset 0xA60, size 0x4
    float leanBlendSpeed; // offset 0xA64, size 0x4
    class xVec3 inputAcceleration; // offset 0xA68, size 0xC
    float maxInputAcceleration; // offset 0xA74, size 0x4
    float spinPowerupInputAcceleration; // offset 0xA78, size 0x4
    float spinPowerupInputFriction; // offset 0xA7C, size 0x4
    float airTurnRate; // offset 0xA80, size 0x4
    float airResistance; // offset 0xA84, size 0x4
    float dynamicFrictionDeceleration; // offset 0xA88, size 0x4
    float spinPowerupConstDecelFric; // offset 0xA8C, size 0x4
    float staticFrictionDeceleration; // offset 0xA90, size 0x4
    class xBase * frictionBoostLastFloor; // offset 0xA94, size 0x4
    bool frictionBoostActive; // offset 0xA98, size 0x1
    bool frictionBoostEnabled; // offset 0xA99, size 0x1
    float frictionBoostMaxSpeed; // offset 0xA9C, size 0x4
    float frictionBoostMinFriction; // offset 0xAA0, size 0x4
    float frictionBoostPerpVelThreshold; // offset 0xAA4, size 0x4
    float normalTurnRate; // offset 0xAA8, size 0x4
    float normalWalkStartSpeed; // offset 0xAAC, size 0x4
    float normalWalkSpeed; // offset 0xAB0, size 0x4
    float normalRunSpeed; // offset 0xAB4, size 0x4
    float normalRunStart; // offset 0xAB8, size 0x4
    float normalWalkStart; // offset 0xABC, size 0x4
    float jumpRunSpeed; // offset 0xAC0, size 0x4
    float jumpRunStart; // offset 0xAC4, size 0x4
    float jumpWalkStart; // offset 0xAC8, size 0x4
    float spinAttackRunSpeed; // offset 0xACC, size 0x4
    float spinGlideRunSpeed; // offset 0xAD0, size 0x4
    float spinSpongebuffRunSpeed; // offset 0xAD4, size 0x4
    float spinSpongebuffGlideRunSpeed; // offset 0xAD8, size 0x4
    float spinPowerupRunSpeed; // offset 0xADC, size 0x4
    float spinPowerupGlideRunSpeed; // offset 0xAE0, size 0x4
    float gooTurnRate; // offset 0xAE4, size 0x4
    float gooRunSpeed; // offset 0xAE8, size 0x4
    float gooJumpSpeed; // offset 0xAEC, size 0x4
    float gooRunStart; // offset 0xAF0, size 0x4
    float gooWalkStart; // offset 0xAF4, size 0x4
    float candyRunSpeed; // offset 0xAF8, size 0x4
    float maxSlopeCosine; // offset 0xAFC, size 0x4
    float floorRayCastDistanceUp; // offset 0xB00, size 0x4
    float floorRayCastDistanceDown; // offset 0xB04, size 0x4
    float stairDetectionTolerance; // offset 0xB08, size 0x4
    float stairClimbEpsilon; // offset 0xB0C, size 0x4
    float stairClimbLastHeight; // offset 0xB10, size 0x4
    class hkVector4 halfExtents; // offset 0xB20, size 0x10
    class zSBPlayerCharacterProxyCollisionListener * pCharacterProxyListener; // offset 0xB30, size 0x4
    class hkpAabbPhantom * floorSupportPhantom; // offset 0xB34, size 0x4
    class zCombatAttack SBAttackStates[22]; // offset 0xB38, size 0x1290
    int buffKillCounter; // offset 0x1DC8, size 0x4
};
enum SBPowerupState {
    ePowerup_None = 0,
    ePowerup_Spongebuff = 1,
    ePowerup_Spin = 2,
    ePowerup_Hammer = 3,
    ePowerup_Puck = 4,
    ePowerup_Invincibility = 5,
    ePowerup_DefeatedIce = 6,
    ePowerup_Gravestone = 7,
    ePowerup_HitByHammer = 8,
    ePowerup_SpinIn = 9,
    ePowerup_HammerIn = 10,
    ePowerup_PuckIn = 11,
    ePowerup_DeathBones = 12,
    ePowerup_FragBob = 13,
    ePowerup_Count = 14,
};
enum SBHappinessState {
    eHappy_Normal = 0,
    eHappy_Happy = 1,
    eHappy_Happier = 2,
    eHappy_Count = 3,
};
// total size: 0x48
class zSoundCue : public xOGEntity {
    // Members
    class zSoundCueAsset * asset; // offset 0x3C, size 0x4
    class MusicPrompt * musicPrompt; // offset 0x40, size 0x4
};
// total size: 0x20
class zSoundCueAsset : public xBaseScene {
    // Members
    int cueID; // offset 0x10, size 0x4
    class LinkAsset EventLinksNew; // offset 0x14, size 0x8
};
// total size: 0x4
class MusicPrompt {};
// total size: 0x1
class zSBProjectileManager {};
// total size: 0x1E0
class zProjectileSBBombNPC : public zProjectile {
    // Members
    float quicksandTimer; // offset 0x198, size 0x4
    float attackTimer; // offset 0x19C, size 0x4
    enum FXStage fxStage; // offset 0x1A0, size 0x4
    class zFXSpawn * activeFXAsset1; // offset 0x1A4, size 0x4
    class zFXSpawn * activeFXAsset2; // offset 0x1A8, size 0x4
    class zFXSpawn * activeFXAsset3; // offset 0x1AC, size 0x4
    class zFXSpawn * activeFXSpawn; // offset 0x1B0, size 0x4
    float yellowStateTime; // offset 0x1B4, size 0x4
    float redStateTime; // offset 0x1B8, size 0x4
    enum MountState mountState; // offset 0x1BC, size 0x4
    class xVec3 lastAngSpeed; // offset 0x1C0, size 0xC
    class xVec3 lastMovementDir; // offset 0x1CC, size 0xC
    float unmountedAngDamping; // offset 0x1D8, size 0x4
};
// total size: 0x198
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
    class zSoundSourcesPhysics soundSourcesPhysics; // offset 0x40, size 0x18
    class xBase * owner; // offset 0x58, size 0x4
    class zProjectileEntity renderEntity; // offset 0x5C, size 0x98
    class zProjectileHavok physicsEntity; // offset 0xF8, size 0x98
    bool projectileSpawnComplete; // offset 0x194, size 0x1
};
enum ProjectileType {
    BASE = 0,
    UP_PLAYGROUND_LAUNCHABLE = 1,
    UP_PLAYGROUND_ROLLABLE = 2,
    UP_PLAYER_THROWABLE = 3,
    SB_PUCK = 4,
    SB_BOMBNPC = 5,
    SB_CLARINET = 6,
    MM_GRENADE = 7,
    MM_MISSILE = 8,
    RB_HOMING = 9,
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
// total size: 0x98
class zProjectileHavok : public xBase {
    // Members
    class HavokSimObj havokSimObj; // offset 0x34, size 0x4
    class EntityHandleBase dummyHandle; // offset 0x38, size 0x48
    class zProjectile * ownerProjectile; // offset 0x80, size 0x4
    class xVec3 permenantAcceleration; // offset 0x84, size 0xC
    enum eHavok_Mode havokMode; // offset 0x90, size 0x4
    class ProjectileCollisionListener * projectileCollisionListener; // offset 0x94, size 0x4
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
// total size: 0x58
class ProjectileCollisionListener : public EntCollisionListener {
    // Members
    float dampeningFactor; // offset 0x50, size 0x4
    bool collisionFrameDampeningProcessed : 1; // offset 0x54, size 0x1, bit offset 0
    bool collisionFrameHitProcessed : 1; // offset 0x54, size 0x1, bit offset 1
    bool collisionFrameRibbonProcessed : 1; // offset 0x54, size 0x1, bit offset 2
    unsigned char pad : 5; // offset 0x54, size 0x1, bit offset 3
};
enum FXStage {
    FX_INIT = 0,
    FX_GREEN = 1,
    FX_GREEN_EXIT_TRANSITION = 2,
    FX_YELLOW = 3,
    FX_YELLOW_EXIT_TRANSITION = 4,
    FX_RED = 5,
    FX_RED_EXIT_TRANSITION = 6,
};
enum MountState {
    MOUNT_NONE = 0,
    MOUNT_MOUNTING = 1,
    MOUNT_ATTACHED = 2,
};
// total size: 0x158
class zBungeeBall : public xOGEntity {
    // Members
    class zBungeeBallAsset * asset; // offset 0x3C, size 0x4
    class xMat4x3 ballMat; // offset 0x40, size 0x40
    class xMat4x3 baseMat; // offset 0x80, size 0x40
    bool isActive; // offset 0xC0, size 0x1
    bool isVisible; // offset 0xC1, size 0x1
    bool isBSPVisible; // offset 0xC2, size 0x1
    bool releasePlayer; // offset 0xC3, size 0x1
    bool readyToCapturePlayer; // offset 0xC4, size 0x1
    enum PopStateEnum popState; // offset 0xC8, size 0x4
    enum FlingStateEnum flingState; // offset 0xCC, size 0x4
    float inflation; // offset 0xD0, size 0x4
    class xVec3 flingStart; // offset 0xD4, size 0xC
    class xVec3 flingTarget; // offset 0xE0, size 0xC
    float flingTargetTime; // offset 0xEC, size 0x4
    float flingTime; // offset 0xF0, size 0x4
    float flingProportion; // offset 0xF4, size 0x4
    float wobble; // offset 0xF8, size 0x4
    float wobble2; // offset 0xFC, size 0x4
    float wobble3; // offset 0x100, size 0x4
    class ImmediatePrototypeEntity * cordEntity; // offset 0x104, size 0x4
    class zFXSpawn * PopfxAsset; // offset 0x108, size 0x4
    class zSoundAsset InflateSound; // offset 0x110, size 0x48
};
enum PopStateEnum {
    POP_Ready = 0,
    POP_Popped = 1,
    POP_Reinflating = 2,
};
enum FlingStateEnum {
    FLING_Ready = 0,
    FLING_Outgoing = 1,
    FLING_Returning = 2,
};
// total size: 0xA8
class zPlantTrap : public xEffectAttachIntf {
    // Members
    int Strength; // offset 0x3C, size 0x4
    class zPlantTrapAsset * asset; // offset 0x40, size 0x4
    bool Active; // offset 0x44, size 0x1
    bool Alive; // offset 0x45, size 0x1
    bool inWarnRad; // offset 0x46, size 0x1
    bool firstWarn; // offset 0x47, size 0x1
    int holdingSpittableObject; // offset 0x48, size 0x4
    int numObjectsInWarningRadius; // offset 0x4C, size 0x4
    int chewCount; // offset 0x50, size 0x4
    class hkpRigidBody * body; // offset 0x54, size 0x4
    class bitePair * simpObjListInfo; // offset 0x58, size 0x4
    enum plantState currentState; // offset 0x5C, size 0x4
    class zCommonPlayer * trappedPlayer; // offset 0x60, size 0x4
    float stateTimer; // offset 0x64, size 0x4
    bool keepProne; // offset 0x68, size 0x1
    bool warn; // offset 0x69, size 0x1
    bool waitForProne; // offset 0x6A, size 0x1
    float waitToBite; // offset 0x6C, size 0x4
    float CaptureTimeLeft; // offset 0x70, size 0x4
    float CooldownTimeLeft; // offset 0x74, size 0x4
    float SPHEREOFFSET; // offset 0x78, size 0x4
    int checkCount; // offset 0x7C, size 0x4
    unsigned int firstLoop; // offset 0x80, size 0x4
    class xVec3 plantPos; // offset 0x84, size 0xC
    class xVec3 plantPosDelta; // offset 0x90, size 0xC
    class zNPCBase * npcBeingEaten; // offset 0x9C, size 0x4
    class CustomBehavior * cb; // offset 0xA0, size 0x4
};
// total size: 0xF0
class zPlantTrapAsset : public zManEatingPlantAsset {
    // Members
    enum eTrapType trapType; // offset 0xC0, size 0x4
    class __trapUnion__ trapUnion; // offset 0xC8, size 0x18
    float captureWaitTime; // offset 0xE0, size 0x4
};
enum eTrapType {
    Default = 0,
    SB_KelpTrap = 1,
    END_eTrapTypeENUM = 2,
};
// total size: 0x18
class __trapUnion__ {
    // Members
    enum eTrapType type; // offset 0x0, size 0x4
    class @class u; // offset 0x8, size 0x10
};
// total size: 0x10
class @class {
    // Members
    class Default_CustomData _Default; // offset 0x0, size 0x1
    class SB_KelpTrap_CustomData _SB_KelpTrap; // offset 0x0, size 0x10
};
// total size: 0x1
class Default_CustomData {};
// total size: 0x10
class SB_KelpTrap_CustomData {
    // Members
    class uid mowFXSpawnID; // offset 0x0, size 0x8
    class uid collectiblesID; // offset 0x8, size 0x8
};
// total size: 0x4
class bitePair {
    // Members
    short collLayer; // offset 0x0, size 0x2
    bool inBelly; // offset 0x2, size 0x1
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
    PLANT_Invisible = 11,
    PLANT_Destroyed = 12,
};
// total size: 0x18
class CustomBehavior {
    // Members
    class zPlantTrap * owner; // offset 0x0, size 0x4
    enum eTrapType type; // offset 0x4, size 0x4
    float captureSphereRadius; // offset 0x8, size 0x4
    class xVec3 * captureSpheres; // offset 0xC, size 0x4
    unsigned int captureSpheresCount; // offset 0x10, size 0x4
};
// total size: 0x18
class zSBPlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {
    // Members
    float dt; // offset 0xC, size 0x4
    bool inCheckSupport; // offset 0x10, size 0x1
    class zSBPlayer * player; // offset 0x14, size 0x4
};
// total size: 0xC
class zPlayerCharacterProxyCollisionListener : public hkReferencedObject, public hkpCharacterProxyListener {};
// total size: 0x110
class ElectricArc : public xOGEntity {
    // Members
    class ElectricArcAsset * asset; // offset 0x3C, size 0x4
    class ElectricPoint * p1; // offset 0x40, size 0x4
    class ElectricPoint * p2; // offset 0x44, size 0x4
    bool active; // offset 0x48, size 0x1
    float detectedTimer; // offset 0x4C, size 0x4
    float damageTimer; // offset 0x50, size 0x4
    class zDecal * decalGenerator; // offset 0x54, size 0x4
    class xMat4x3 decalMat; // offset 0x58, size 0x40
    class xMat4x3 m; // offset 0x98, size 0x40
    int geomsCount; // offset 0xD8, size 0x4
    class CylinderRenderable * * cGeoms; // offset 0xDC, size 0x4
    class ImmediatePrototypeEntity * * iModels; // offset 0xE0, size 0x4
    float t; // offset 0xE4, size 0x4
    float activateTimer; // offset 0xE8, size 0x4
    float deactivateTimer; // offset 0xEC, size 0x4
    class xVec3 lastProximityVec; // offset 0xF0, size 0xC
    void * decalPtr; // offset 0xFC, size 0x4
    class xVec3 lastGoodPos; // offset 0x100, size 0xC
    bool mBspVisible; // offset 0x10C, size 0x1
};
// total size: 0xD0
class ElectricPoint : public xOGEntity {
    // Members
    class MovePointData mpData; // offset 0x3C, size 0x4C
    class ElectricPointAsset * asset; // offset 0x88, size 0x4
    class xMat4x3 matrix; // offset 0x8C, size 0x40
    bool atVecChanged; // offset 0xCC, size 0x1
    bool isDriving; // offset 0xCD, size 0x1
};
// total size: 0xC
class CylinderRenderable {
    // Members
    class ElectricCylinder * cg; // offset 0x0, size 0x4
    int framecounter; // offset 0x8, size 0x4
};
// total size: 0x98
class ElectricCylinder : public xOGEntity {
    // Members
    class CylinderAsset * asset; // offset 0x3C, size 0x4
    class xVec3 * verts; // offset 0x40, size 0x4
    unsigned short * indices; // offset 0x44, size 0x4
    int rowsCount; // offset 0x48, size 0x4
    int colsCount; // offset 0x4C, size 0x4
    float radiusX; // offset 0x50, size 0x4
    float radiusY; // offset 0x54, size 0x4
    int vertCount; // offset 0x58, size 0x4
    int primCount; // offset 0x5C, size 0x4
    int indxCount; // offset 0x60, size 0x4
    int step; // offset 0x64, size 0x4
    float scale; // offset 0x68, size 0x4
    float scaleSign; // offset 0x6C, size 0x4
    float timerIdleAsset; // offset 0x70, size 0x4
    float timerIdleVariationAsset; // offset 0x74, size 0x4
    float timerIdle; // offset 0x78, size 0x4
    int lockFront; // offset 0x7C, size 0x4
    int lockBack; // offset 0x80, size 0x4
    int reference; // offset 0x84, size 0x4
    int flags; // offset 0x88, size 0x4
    class xVec2 mUVAnim; // offset 0x8C, size 0x8
};
// total size: 0x90
class CylinderAsset : public xBaseScene {
    // Members
    unsigned int rows; // offset 0x10, size 0x4
    unsigned int cols; // offset 0x14, size 0x4
    float radiusX; // offset 0x18, size 0x4
    float radiusY; // offset 0x1C, size 0x4
    float yStretch; // offset 0x20, size 0x4
    float dradius; // offset 0x24, size 0x4
    unsigned int frequency; // offset 0x28, size 0x4
    class uid modelUID; // offset 0x30, size 0x8
    class FloatColorRGBA colorPt1; // offset 0x38, size 0x10
    class FloatColorRGBA colorPt2; // offset 0x48, size 0x10
    float flicker; // offset 0x58, size 0x4
    float scale; // offset 0x5C, size 0x4
    float scaleVariation; // offset 0x60, size 0x4
    float variationWeighting; // offset 0x64, size 0x4
    float timerIdle; // offset 0x68, size 0x4
    float timerIdleVariation; // offset 0x6C, size 0x4
    int lockFront; // offset 0x70, size 0x4
    int lockBack; // offset 0x74, size 0x4
    int reference; // offset 0x78, size 0x4
    unsigned int flags; // offset 0x7C, size 0x4
    class _uvAnim uvAnim; // offset 0x80, size 0x8
    int MotionRate; // offset 0x88, size 0x4
    bool OuterOnly; // offset 0x8C, size 0x1
    bool Smoothing; // offset 0x8D, size 0x1
};
// total size: 0x8
class _uvAnim {
    // Members
    float U; // offset 0x0, size 0x4
    float V; // offset 0x4, size 0x4
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
// total size: 0x58
class zDirection : public xOGEntity {
    // Members
    class zDirectionAsset * asset; // offset 0x3C, size 0x4
    class vec3 location; // offset 0x40, size 0xC
    class Rotation3 rotation; // offset 0x4C, size 0xC
};
// total size: 0x48
class zAnimPackage : public xOGEntity {
    // Members
    class AnimPackage * asset; // offset 0x3C, size 0x4
    class Pointer32 variationID; // offset 0x40, size 0x4
    class AnimEntry * entries; // offset 0x44, size 0x4
};
// total size: 0x28
class AnimEntry {
    // Members
    unsigned int stateID; // offset 0x0, size 0x4
    enum ePlayerName characterName; // offset 0x4, size 0x4
    void * rawData; // offset 0x8, size 0x4
    void * rawDataL; // offset 0xC, size 0x4
    void * rawDataR; // offset 0x10, size 0x4
    bool overwriteSound; // offset 0x14, size 0x1
    class xAnimSoundEffect * SoundEffects; // offset 0x18, size 0x4
    bool overwriteVFX; // offset 0x1C, size 0x1
    unsigned int mNumVFXEffects; // offset 0x20, size 0x4
    class xAnimVFX_Effect * VFXEffects; // offset 0x24, size 0x4
};
// total size: 0x18
class zBoardPlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {
    // Members
    float dt; // offset 0xC, size 0x4
    bool inCheckSupport; // offset 0x10, size 0x1
    class zBoardPlayer * player; // offset 0x14, size 0x4
};
// total size: 0x1C
class zBoardPlayerSpinAttack : public zBoardPlayerAction {
    // Members
    int numSpinsQueued; // offset 0x10, size 0x4
    int numSpinsExecuted; // offset 0x14, size 0x4
    float rotationOffset; // offset 0x18, size 0x4
};
// total size: 0x10
class zBoardPlayerAction : public zCommonPlayerAction {};
// total size: 0x10
class zCommonPlayerAction : public zPlayerAction {};
// total size: 0x1C
class zBoardPlayerHammerAttack : public zBoardPlayerAction {
    // Members
    enum interruptLevel interrupt; // offset 0x10, size 0x4
    bool airHammer; // offset 0x14, size 0x1
    float sideAmount; // offset 0x18, size 0x4
};
enum interruptLevel {
    eHammerInterrupt_None = 0,
    eHammerInterrupt_High = 1,
    eHammerInterrupt_Med = 2,
    eHammerInterrupt_Count = 3,
};
// total size: 0x10
class zBoardPlayerCandy : public zBoardPlayerAction {};
// total size: 0x1C
class zBoardPlayerBungeeBall : public zBoardPlayerAction {
    // Members
    float lastYaw; // offset 0x10, size 0x4
    float aimerDelayTimer; // offset 0x14, size 0x4
    bool bungeeBallTransfer; // offset 0x18, size 0x1
};
// total size: 0x10
class zBoardPlayerSpinPowerupAttack : public zBoardPlayerAction {};
// total size: 0x10
class zBoardPlayerHammerPowerupAttack : public zBoardPlayerAction {};
// total size: 0x3C
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
    int attackID; // offset 0x38, size 0x4
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
// total size: 0x8
class EventActionDirection : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0xC
class EventActionVector : public EventActionNew {
    // Members
    class vec3 param0; // offset 0x0, size 0xC
};
// total size: 0x2
class EventActionOneInt : public EventActionNew {
    // Members
    short param0; // offset 0x0, size 0x2
};
// total size: 0x1
class EventActionSBPowerup : public EventActionNew {
    // Members
    unsigned char type; // offset 0x0, size 0x1
};
// total size: 0x60
class zSBCastCollector : public hkpClosestRayHitCollector {};
// total size: 0x60
class hkpClosestRayHitCollector : public hkpRayHitCollector {
    // Members
    class hkpWorldRayCastOutput m_rayHit; // offset 0x10, size 0x50
};
// total size: 0x30
class hkpWorldRayCastInput {
    // Members
    class hkVector4 m_from; // offset 0x0, size 0x10
    class hkVector4 m_to; // offset 0x10, size 0x10
    class hkBool m_enableShapeCollectionFilter; // offset 0x20, size 0x1
    unsigned int m_filterInfo; // offset 0x24, size 0x4
};
// total size: 0x198
class fixed_stack_list {
    // Members
    unsigned long _size; // offset 0x0, size 0x4
    class empty_node_type head; // offset 0x4, size 0x8
    class empty_node_type tail; // offset 0xC, size 0x8
    class node_type * stack; // offset 0x14, size 0x4
    class node_type buffer[32]; // offset 0x18, size 0x180
};
// total size: 0x8
class empty_node_type {
    // Members
    class node_type * prev; // offset 0x0, size 0x4
    class node_type * next; // offset 0x4, size 0x4
};
// total size: 0xC
class node_type : public empty_node_type {
    // Members
    class zNPCBase * value; // offset 0x8, size 0x4
};
// total size: 0xA4
class zPlayerIdleBoard : public zBoardPlayerAction {
    // Members
    class ExtraIdleTableEntry extraIdleTable[2]; // offset 0x10, size 0x90
    float extraIdleTimer; // offset 0xA0, size 0x4
};
// total size: 0x48
class ExtraIdleTableEntry {
    // Members
    class xAnimState * variants[15]; // offset 0x0, size 0x3C
    int numVariants; // offset 0x3C, size 0x4
    int numValid; // offset 0x40, size 0x4
    bool noRepeats; // offset 0x44, size 0x1
};
// total size: 0x10
class zPlayerWalkBoard : public zBoardPlayerAction {};
// total size: 0x10
class zPlayerRunBoard : public zBoardPlayerAction {};
// total size: 0x20
class zPlayerTurn180Board : public zBoardPlayerAction {
    // Members
    class xVec3 targetVector; // offset 0x10, size 0xC
    bool turn180Done; // offset 0x1C, size 0x1
};
// total size: 0x3C
class zPlayerJumpBoard : public zBoardPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float JUMP_TIME_TOTAL_PARAM; // offset 0x18, size 0x4
    float scaleJump; // offset 0x1C, size 0x4
    float Jump_Time_Total; // offset 0x20, size 0x4
    float Jump_Time_Decel; // offset 0x24, size 0x4
    float Jump_Height; // offset 0x28, size 0x4
    float Jump_Float; // offset 0x2C, size 0x4
    float Jump_Velocity; // offset 0x30, size 0x4
    float Jump_Decel; // offset 0x34, size 0x4
    float Jump_Time_Const; // offset 0x38, size 0x4
};
// total size: 0x20
class zPlayerSlamStartBoard : public zBoardPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float AIRTIME; // offset 0x14, size 0x4
    float ACCELERATION; // offset 0x18, size 0x4
    float VELTHRESHOLD; // offset 0x1C, size 0x4
};
// total size: 0x20
class zPlayerSlamFallBoard : public zBoardPlayerAction {
    // Members
    float radius; // offset 0x10, size 0x4
    float damage; // offset 0x14, size 0x4
    float awayKnockback; // offset 0x18, size 0x4
    float upKnockback; // offset 0x1C, size 0x4
};
// total size: 0x10
class zPlayerSlamLandBoard : public zBoardPlayerAction {};
// total size: 0x20
class zPlayerFluidBurstBoard : public zBoardPlayerAction {
    // Members
    float radius; // offset 0x10, size 0x4
    float damage; // offset 0x14, size 0x4
    float awayKnockback; // offset 0x18, size 0x4
    float upKnockback; // offset 0x1C, size 0x4
};
// total size: 0x14
class zPlayerFallBoard : public zBoardPlayerAction {
    // Members
    float fallYPos; // offset 0x10, size 0x4
};
// total size: 0x10
class zPlayerLandBoard : public zBoardPlayerAction {};
// total size: 0x10
class zPlayerLandHighBoard : public zPlayerLandBoard {};
// total size: 0x18
class zPlayerDoubleJumpBoard : public zBoardPlayerAction {
    // Members
    float timer; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
};
// total size: 0x10
class zPlayerSpringboardBoard : public zBoardPlayerAction {};
// total size: 0x18
class zBoardPlayerPuckAttack : public zBoardPlayerAction {
    // Members
    float chargingTimer; // offset 0x10, size 0x4
    bool charging; // offset 0x14, size 0x1
};
// total size: 0x60
class zPlayerLedgeBoard : public zCommonPlayerInterAction {
    // Members
    class xMat4x3 startUpMat; // offset 0x14, size 0x40
    class xVec3 curveStart; // offset 0x54, size 0xC
};
// total size: 0x14
class zCommonPlayerInterAction : public zCommonPlayerAction {
    // Members
    class zInteractionUP * theInteraction; // offset 0x10, size 0x4
};
// total size: 0x5C
class zPlayerHitBoard : public zPlayerHit {
    // Members
    float hitHammerTimer; // offset 0x10, size 0x4
    class xAnimState * variants[15]; // offset 0x14, size 0x3C
    int numVariants; // offset 0x50, size 0x4
    int numValid; // offset 0x54, size 0x4
    bool noRepeats; // offset 0x58, size 0x1
};
// total size: 0x10
class zPlayerHit : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerHitLaunchBoard : public zPlayerHitLaunch {};
// total size: 0x10
class zPlayerHitLaunch : public zCommonPlayerAction {};
// total size: 0x20
class zBoardPlayerFillWithGoo : public zBoardPlayerAction {
    // Members
    class xVec3 targetVector; // offset 0x10, size 0xC
    bool turnDone; // offset 0x1C, size 0x1
};
// total size: 0x10
class zBoardPlayerDrainGoo : public zBoardPlayerAction {};
// total size: 0x10
class zBoardPlayerGainPowerup : public zBoardPlayerAction {};
// total size: 0x10
class zBoardPlayerPuckPowerupAttack : public zBoardPlayerAction {};
// total size: 0x10
class zBoardPlayerLosePowerup : public zBoardPlayerAction {};
// total size: 0x18
class zBoardPlayerQuicksandJump : public zBoardPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float distance; // offset 0x14, size 0x4
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
// total size: 0x10
class zBoardPlayerQuicksandStuck : public zBoardPlayerAction {};
// total size: 0x10
class zPlayerCheatBoard : public zPlayerCheat {};
// total size: 0x10
class zPlayerCheat : public zCommonPlayerAction {};
// total size: 0x14
class zBoardPlayerKelpTrap : public zBoardPlayerAction {
    // Members
    float buttonsMashed; // offset 0x10, size 0x4
};
// total size: 0x58
class zPlayerDefeatedBoard : public zBoardPlayerAction {
    // Members
    class xAnimState * variants[15]; // offset 0x10, size 0x3C
    int numVariants; // offset 0x4C, size 0x4
    int numValid; // offset 0x50, size 0x4
    bool noRepeats; // offset 0x54, size 0x1
};
// total size: 0x10
class zPlayerCelebrationBoard : public zBoardPlayerAction {};
// total size: 0x48
class zPlayerSlide : public zBoardPlayerAction {
    // Members
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float ForwardSpeed; // offset 0x18, size 0x4
    float LeftRightSpeed; // offset 0x1C, size 0x4
    float ForwardAcceleration; // offset 0x20, size 0x4
    float LeftRightAcceleration; // offset 0x24, size 0x4
    float CurrentSpeedMult; // offset 0x28, size 0x4
    float SlowDownMeter; // offset 0x2C, size 0x4
    float RestoreLeanValue; // offset 0x30, size 0x4
    bool PlayersTakeHit; // offset 0x34, size 0x1
    float WaitingButSlidingTimer; // offset 0x38, size 0x4
    int lastStickPos; // offset 0x3C, size 0x4
    float actualLeftRightSpeed; // offset 0x40, size 0x4
    float pitch; // offset 0x44, size 0x4
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
// total size: 0xC0
class zInflatablePlatform : public xOGEntity {
    // Members
    class zInflatablePlatformAsset * asset; // offset 0x3C, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x40, size 0x4
    class xVec3 scale; // offset 0x44, size 0xC
    bool scaleChanged; // offset 0x50, size 0x1
    class xVec3 scaleVel; // offset 0x54, size 0xC
    float keyFrameTime; // offset 0x60, size 0x4
    float playSpeed; // offset 0x64, size 0x4
    int keyframe; // offset 0x68, size 0x4
    bool paused; // offset 0x6C, size 0x1
    bool reversed; // offset 0x6D, size 0x1
    bool fluidHitting; // offset 0x6E, size 0x1
    bool fluidResponsive; // offset 0x6F, size 0x1
    float fluidPulsePhase; // offset 0x70, size 0x4
    float fluidTime; // offset 0x74, size 0x4
    class xVec3 scaleBegin; // offset 0x78, size 0xC
    class xVec3 scaleEnd; // offset 0x84, size 0xC
    class xVec3 scaleTime; // offset 0x90, size 0xC
    class xVec3 totalTime; // offset 0x9C, size 0xC
    class xVec3 accelIn; // offset 0xA8, size 0xC
    class xVec3 decelOut; // offset 0xB4, size 0xC
};
// total size: 0x30
class ProjectileCollisionDetails {
    // Members
    class xBase * hitObject; // offset 0x0, size 0x4
    class hkpWorldObject * havokHitObject; // offset 0x4, size 0x4
    class xVec3 contactPosition; // offset 0x8, size 0xC
    class xVec3 contactNormal; // offset 0x14, size 0xC
    class xVec3 projectileVelocity; // offset 0x20, size 0xC
    class SurfaceGamePlay * hitSurface; // offset 0x2C, size 0x4
};
// total size: 0xE0
class zTrampoline : public zEnt {
    // Members
    class zTrampolineAsset * asset; // offset 0xC0, size 0x4
    class zBouncer bouncer; // offset 0xC4, size 0x1C
};
// total size: 0x1C
class zBouncer {
    // Members
    class xBase * owner; // offset 0x0, size 0x4
    class xVec3 normal; // offset 0x4, size 0xC
    float minBounce; // offset 0x10, size 0x4
    float maxBounce; // offset 0x14, size 0x4
    float maxBounceAngle; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCInfoNodeBouncer : public zNPCInfoNode {
    // Members
    class zBouncer * bouncer; // offset 0x10, size 0x4
};
// total size: 0x22AC
class zBombManager {
    // Members
    class StaticArray pendingBombs; // offset 0x0, size 0x484
    class StaticArray pendingDamages; // offset 0x484, size 0x1E04
    bool inUpdateInUpdate; // offset 0x2288, size 0x1
    class CriticalSection bombManagerCS; // offset 0x228C, size 0x20
};
// total size: 0x484
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class zBombInfo pool[16]; // offset 0x4, size 0x480
};
// total size: 0x48
class zBombInfo {
    // Members
    class xSphere sphere; // offset 0x0, size 0x10
    class xBase * fromEnt; // offset 0x10, size 0x4
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
    int attackID; // offset 0x44, size 0x4
};
// total size: 0x1E04
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class zBombDamageInfo pool[128]; // offset 0x4, size 0x1E00
};
// total size: 0x3C
class zBombDamageInfo {
    // Members
    class xBase * toEnt; // offset 0x0, size 0x4
    int flags; // offset 0x4, size 0x4
    class xBase * from; // offset 0x8, size 0x4
    float player_damage; // offset 0xC, size 0x4
    float obj_damage; // offset 0x10, size 0x4
    float npc_damage; // offset 0x14, size 0x4
    enum eHitSource source; // offset 0x18, size 0x4
    enum zHitTarget target; // offset 0x1C, size 0x4
    class xVec3 knockback; // offset 0x20, size 0xC
    class xVec3 hitLocation; // offset 0x2C, size 0xC
    int attackID; // offset 0x38, size 0x4
};
// total size: 0x20
class CriticalSection {
    // Members
    int refcount; // offset 0x0, size 0x4
    class OSMutex mutex; // offset 0x4, size 0x18
    class OSThread * owner; // offset 0x1C, size 0x4
};
// total size: 0x18
class OSMutex {
    // Members
    class OSThreadQueue queue; // offset 0x0, size 0x8
    class OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    class OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
class OSThreadQueue {
    // Members
    class OSThread * head; // offset 0x0, size 0x4
    class OSThread * tail; // offset 0x4, size 0x4
};
// total size: 0x318
class OSThread {
    // Members
    class OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    class OSThreadQueue * queue; // offset 0x2DC, size 0x4
    class OSThreadLink link; // offset 0x2E0, size 0x8
    class OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    class OSMutex * mutex; // offset 0x2F0, size 0x4
    class OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    class OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
// total size: 0x2C8
class OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// total size: 0x8
class OSThreadLink {
    // Members
    class OSThread * next; // offset 0x0, size 0x4
    class OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class OSMutexQueue {
    // Members
    class OSMutex * head; // offset 0x0, size 0x4
    class OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x8
class OSMutexLink {
    // Members
    class OSMutex * next; // offset 0x0, size 0x4
    class OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x10
class xEntAndPos {
    // Members
    class xBase * ent; // offset 0x0, size 0x4
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
// total size: 0x30
class xTransform {
    // Members
    float lx; // offset 0x0, size 0x4
    float ux; // offset 0x4, size 0x4
    float fx; // offset 0x8, size 0x4
    float px; // offset 0xC, size 0x4
    float ly; // offset 0x10, size 0x4
    float uy; // offset 0x14, size 0x4
    float fy; // offset 0x18, size 0x4
    float py; // offset 0x1C, size 0x4
    float lz; // offset 0x20, size 0x4
    float uz; // offset 0x24, size 0x4
    float fz; // offset 0x28, size 0x4
    float pz; // offset 0x2C, size 0x4
};
// total size: 0x18
class EventActionDrivenBy : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    bool param1; // offset 0x1, size 0x1
    bool param2; // offset 0x2, size 0x1
    bool cam; // offset 0x3, size 0x1
    class uid specificPassenger; // offset 0x8, size 0x8
    int bone; // offset 0x10, size 0x4
};
// total size: 0x10
class zBTActionAlwaysComplete : public zBTActionBaseFamily {};
// total size: 0x10
class zBTActionBaseFamily : public zBTAction {};
// total size: 0x10
class zBTAction {
    // Members
    class ActionBase * actionAsset; // offset 0x0, size 0x4
    class DelegateP0 * resumeCB; // offset 0x4, size 0x4
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
// total size: 0x4
class VariableStruct {
    // Members
    unsigned int VariableName; // offset 0x0, size 0x4
};
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
    class DelegateP3 eventObserver; // offset 0x14, size 0x8
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
// total size: 0x48
class zVariableEventData {
    // Members
    unsigned int eventID; // offset 0x0, size 0x4
    class EventAny * dataPointer; // offset 0x4, size 0x4
    char eventDataBuffer[64]; // offset 0x8, size 0x40
};
// total size: 0x254
class zNPCBTFollowPerceptionTargetAction : public zNPCBTAction {
    // Members
    class zNPCSteeringMoveToControl moveToControl; // offset 0x14, size 0x20C
    class zNPCBTActionAnim actionAnim; // offset 0x220, size 0x18
    class zNPCBTStuckRangeMultiplier stuckRangeMultiplier; // offset 0x238, size 0x10
    float arriveRangeMultiplier2; // offset 0x248, size 0x4
    bool endWhenArrived; // offset 0x24C, size 0x1
    unsigned int targetNum; // offset 0x250, size 0x4
};
// total size: 0x14
class zNPCBTAction : public zBTAction {
    // Members
    class zNPCBase * npcBase; // offset 0x10, size 0x4
};
// total size: 0x20C
class zNPCSteeringMoveToControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x4C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x68, size 0x10
    class zPlayerAvoidanceData playerAvoidanceData; // offset 0x78, size 0x10
    class zObjectAvoidanceData objectAvoidanceData; // offset 0x88, size 0x10
    class zNPCSteeringDest destination; // offset 0x98, size 0x10
    class zPIDController3 pidController; // offset 0xA8, size 0x11C
    float arriveTolerance2; // offset 0x1C4, size 0x4
    int arriveToDest; // offset 0x1C8, size 0x4
    bool useWallNet; // offset 0x1CC, size 0x1
    class zNPCSteeringAccumulator accAccum; // offset 0x1D0, size 0x10
    class zWallNetDestinationXZ wallNetDestination; // offset 0x1E0, size 0x2C
};
// total size: 0x4C
class zNPCSteeringControl {
    // Members
    class zNPCSteering * steering; // offset 0x0, size 0x4
    class zNPCBase * npcBase; // offset 0x4, size 0x4
    class zNPCEntity * npcEntity; // offset 0x8, size 0x4
    class zWallNetPositionXZ * wallNetPosition; // offset 0xC, size 0x4
    enum eHeadingCalcType headingCalcType; // offset 0x10, size 0x4
    class zNPCSteeringDest customHeading; // offset 0x14, size 0x10
    float speedLimitXZ; // offset 0x24, size 0x4
    float speedLimitY; // offset 0x28, size 0x4
    bool gravityEnabled : 1; // offset 0x2C, size 0x1, bit offset 0
    bool forceApplyGravity : 1; // offset 0x2C, size 0x1, bit offset 1
    bool turnSpringEnabled : 1; // offset 0x2C, size 0x1, bit offset 2
    bool ignoreYComponent : 1; // offset 0x2C, size 0x1, bit offset 3
    unsigned int pad : 28; // offset 0x2C, size 0x4, bit offset 4
    unsigned char movementStyle; // offset 0x30, size 0x1
    float maxAcc; // offset 0x34, size 0x4
    class zNPCSteeringVecLimiter accLimiter; // offset 0x38, size 0x10
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
// total size: 0x18
class zNPCFlyingBTWritePerceptionTargetPositionAction : public zNPCBTWritePerceptionTargetPositionAction {};
// total size: 0x18
class zNPCBTWritePerceptionTargetPositionAction : public zNPCBTAction {
    // Members
    unsigned int targetNum; // offset 0x14, size 0x4
};
// total size: 0x1C
class zNPCBTChumbotFistFlashAction : public zNPCBTAction {
    // Members
    float flashDuration; // offset 0x14, size 0x4
    float flashTime; // offset 0x18, size 0x4
};
// total size: 0x28
class zNPCBTWriteSquidBlockTimeAction : public zNPCBTAction {
    // Members
    unsigned int indexIntegerVariable; // offset 0x14, size 0x4
    unsigned int timeFloatVariable; // offset 0x18, size 0x4
    unsigned int multiplierFloatVariable; // offset 0x1C, size 0x4
    class xCounter * stageCounter; // offset 0x20, size 0x4
    bool block; // offset 0x24, size 0x1
};
// total size: 0x14
class zNPCBT_Turret_GetVariantData_Action : public zNPCBTAction {};
// total size: 0x14
class zNPCBT_Bomb_Shoot_Action : public zNPCBTShootAction {};
// total size: 0x14
class zNPCBTShootAction : public zNPCBTAction {};
// total size: 0x1C
class zNPCBT_SplashDamage_Action : public zNPCBTAction {
    // Members
    float radius; // offset 0x14, size 0x4
    float acceleration; // offset 0x18, size 0x4
};
// total size: 0x1C
class zNPCBTMonitorPerceptionAction : public zNPCBTAction {
    // Members
    bool perceptionStates[6]; // offset 0x14, size 0x6
};
// total size: 0x1C
class zNPCBTGenerateSpinVortexAction : public zNPCBTAction {
    // Members
    float radiusSq; // offset 0x14, size 0x4
    float acceleration; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTRespondToKnockbackAction : public zNPCBTAction {};
// total size: 0x3C
class zNPCBTBounceAction : public zNPCBTAction {
    // Members
    bool attached; // offset 0x14, size 0x1
    class Action_NPC_Bounce * bounceAsset; // offset 0x18, size 0x4
    class zBouncer bouncer; // offset 0x1C, size 0x1C
    class zNPCInfoNodeBouncer * infoNode; // offset 0x38, size 0x4
};
// total size: 0x14
class Action_NPC_Bounce : public ActionBase {
    // Members
    float MinBounce; // offset 0x0, size 0x4
    float MaxBounce; // offset 0x4, size 0x4
    class Rotation3 Orientation; // offset 0x8, size 0xC
};
// total size: 0x18
class zNPCBTSetPlanktonShakableAction : public zNPCBTAction {
    // Members
    bool setTo; // offset 0x14, size 0x1
};
// total size: 0xD8
class zNPCBTPlanktonShakeAction : public zNPCBTAction {
    // Members
    class zNPCBTActionAnim dropAnim; // offset 0x14, size 0x18
    class zNPCBTActionAnim slamPrepAnim; // offset 0x2C, size 0x18
    class zNPCBTActionAnim slamAnim; // offset 0x44, size 0x18
    class zNPCBTActionAnim shakeAnim; // offset 0x5C, size 0x18
    class xVec3 initialPos; // offset 0x74, size 0xC
    class xSpringyVec3 posSpring; // offset 0x80, size 0x28
    class xSpringyAngle angleSpring; // offset 0xA8, size 0x18
    float blendx; // offset 0xC0, size 0x4
    float blendy; // offset 0xC4, size 0x4
    bool released; // offset 0xC8, size 0x1
    bool hitGround; // offset 0xC9, size 0x1
    bool performingSlam; // offset 0xCA, size 0x1
    bool performingSlamPrep; // offset 0xCB, size 0x1
    bool damaged; // offset 0xCC, size 0x1
    float height; // offset 0xD0, size 0x4
    float amplitude; // offset 0xD4, size 0x4
};
// total size: 0x18
class xSpringyAngle : public xSpringyF32 {};
// total size: 0x14
class zNPCBTWriteGopherNextMovepointAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTClearDamageInfoAction : public zNPCBTAction {};
// total size: 0x1C
class zNPCBTSetRPSAttackStateAction : public zNPCBTAction {
    // Members
    enum eRPSAttackTypes state; // offset 0x14, size 0x4
    float delay; // offset 0x18, size 0x4
};
// total size: 0x554
class zNPCBTPathThruMPsShiftedAction : public zNPCBTMoveToAction {
    // Members
    class xVec3 pathThruDest; // offset 0x538, size 0xC
    class xMovePoint * startMP; // offset 0x544, size 0x4
    class xMovePoint * endMP; // offset 0x548, size 0x4
    class xMovePoint * currentMP; // offset 0x54C, size 0x4
    class xMovePoint * nextMP; // offset 0x550, size 0x4
};
// total size: 0x538
class zNPCBTMoveToAction : public zNPCBTAction {
    // Members
    class Action_NPC_MoveTo * asset; // offset 0x14, size 0x4
    class zNPCSteeringMoveToControl moveToControl; // offset 0x18, size 0x20C
    class zNPCBTActionAnim actionAnim; // offset 0x224, size 0x18
    class zNPCBTStuckRangeMultiplier stuckRangeMultiplier; // offset 0x23C, size 0x10
    bool endWhenArrived; // offset 0x24C, size 0x1
    class zPathFinder pathFinder; // offset 0x250, size 0x2A8
    class xVec3 currentDest; // offset 0x4F8, size 0xC
    class xVec3 finalDest; // offset 0x504, size 0xC
    float updateDestTimer; // offset 0x510, size 0x4
    float updatePathTimer; // offset 0x514, size 0x4
    enum eNavLinkActionCode actionCode; // offset 0x518, size 0x4
    enum ePathEvalResult pathResult; // offset 0x51C, size 0x4
    bool pathFinderSetupDone; // offset 0x520, size 0x1
    class zNPCSearchMapLinkCostCalculator costCalculator; // offset 0x524, size 0x14
};
// total size: 0x2C
class Action_NPC_MoveTo : public ActionBase {
    // Members
    class NPC_Action_MovementData MovementData; // offset 0x0, size 0x24
    bool UsePathFinding; // offset 0x24, size 0x1
    bool EnableObjectAvoidance; // offset 0x25, size 0x1
    bool CheckForWallNetEdges; // offset 0x26, size 0x1
    bool ExitWhenAnimationIsDone; // offset 0x27, size 0x1
    bool DontExitBeforeAnimationIsDone; // offset 0x28, size 0x1
    bool FastMove; // offset 0x29, size 0x1
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
    bool StopAtExit; // offset 0x1C, size 0x1
    bool Arrive; // offset 0x1D, size 0x1
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
// total size: 0x2A8
class zPathFinder {
    // Members
    class xBase * owner; // offset 0x0, size 0x4
    class zSearchStrategyAStar * strategy; // offset 0x4, size 0x4
    class xVec3 source; // offset 0x8, size 0xC
    class xVec3 currentGoal; // offset 0x14, size 0xC
    class xVec3 currentPos; // offset 0x20, size 0xC
    float boundRadius; // offset 0x2C, size 0x4
    class zWallNet * sourceWN; // offset 0x30, size 0x4
    class zWallNet * goalWN; // offset 0x34, size 0x4
    class zSearchPath wallNetPath; // offset 0x38, size 0x10C
    class zSearchPath wallNetGroupPath; // offset 0x144, size 0x10C
    class DelegateP0 observer; // offset 0x250, size 0x8
    class zPathFinderSearchMapLinkCostCalculator * costCalculator; // offset 0x258, size 0x4
    enum ePathLevel searchLevel; // offset 0x25C, size 0x4
    enum ePathLevel highestEvalLevel; // offset 0x260, size 0x4
    enum ePathLevel evalLevel; // offset 0x264, size 0x4
    enum eWallNetUserType wallNetUserType; // offset 0x268, size 0x4
    class zPathFinderSearchPathEvaluator wallNetEvaluator; // offset 0x26C, size 0x14
    class zPathFinderSearchPathEvaluator wallNetGroupEvaluator; // offset 0x280, size 0x14
    class zPathFinderNavMeshHeuristicCalculator wallNetHeuristicCalculator; // offset 0x294, size 0x10
    class zPathFinderNavMeshGroupHeuristicCalculator wallNetGroupHeuristicCalculator; // offset 0x2A4, size 0x4
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
class zNPCSearchMapLinkCostCalculator : public zPathFinderSearchMapLinkCostCalculator {
    // Members
    class zNPCBase * npcBase; // offset 0x10, size 0x4
};
// total size: 0x24
class zNPCBT_InstantSpawnNPC_Action : public zNPCBTAction {
    // Members
    class Action_NPC_InstantSpawnNPC * asset; // offset 0x14, size 0x4
    class zNPCGenericSpawner * spawner; // offset 0x18, size 0x4
    class zNPCGeneric * NPCToSpawn; // offset 0x1C, size 0x4
    class xMovePoint * pMovePoint; // offset 0x20, size 0x4
};
// total size: 0x8
class Action_NPC_InstantSpawnNPC : public ActionBase {
    // Members
    unsigned int MPVariableName; // offset 0x0, size 0x4
    bool SetMovePoint; // offset 0x4, size 0x1
};
// total size: 0x1E8
class zNPCGenericSpawner : public zNPCGeneric {
    // Members
    class GenericSpawner * assetSpawner; // offset 0x1CC, size 0x4
    class zNPCGenericPool * genericPool; // offset 0x1D0, size 0x4
    class zNPCGeneric * myReservedNPC; // offset 0x1D4, size 0x4
    unsigned int spawnCounter; // offset 0x1D8, size 0x4
    float timeSinceSpawn; // offset 0x1DC, size 0x4
    bool doNonstopSpawn; // offset 0x1E0, size 0x1
    bool spawningEnabled; // offset 0x1E1, size 0x1
};
// total size: 0x1D0
class zNPCGeneric : public zNPCBase {
    // Members
    class zBoneTracker headTracker; // offset 0xC0, size 0x7C
    bool headTrackEnabled; // offset 0x13C, size 0x1
    class xEnt * headTrackPrevLookAtEnt; // offset 0x140, size 0x4
    class xEnt * headTrackPoiEnt; // offset 0x144, size 0x4
    class xVec3 headTrackPoi; // offset 0x148, size 0xC
    bool headTrackValidPoi; // offset 0x154, size 0x1
    bool headTrackBlendToLookAt; // offset 0x155, size 0x1
    class xEnt * headTrackOverrideEnt; // offset 0x158, size 0x4
    class zJawFlapper jawFlapper; // offset 0x15C, size 0x4C
    bool jawFlappingEnabled; // offset 0x1A8, size 0x1
    float leanSpringTension; // offset 0x1AC, size 0x4
    float maxLean; // offset 0x1B0, size 0x4
    class xSpringyF32 leanSpring; // offset 0x1B4, size 0x18
};
// total size: 0x1C0
class GenericSpawner : public NPCGeneric {
    // Members
    class uid enemyList; // offset 0x1A8, size 0x8
    unsigned int spawnLimit; // offset 0x1B0, size 0x4
    float spawnDelay; // offset 0x1B4, size 0x4
};
// total size: 0x1B0
class NPCGeneric : public NPCAsset {
    // Members
    class TeamsUnion Team; // offset 0x188, size 0x8
    class __variantUnion__ variantUnion; // offset 0x190, size 0x18
};
// total size: 0x18
class __variantUnion__ {
    // Members
    enum _Types type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x14
};
enum _Types {
    T_Default = 0,
    T_SB_BombEnemy = 1,
    T_SB_TurretEnemy = 2,
};
// total size: 0x14
class @class {
    // Members
    class CustomParams_Default _Default; // offset 0x0, size 0x4
    class CustomParams_SB_BombEnemy _SB_BombEnemy; // offset 0x0, size 0x14
    class CustomParams_SB_TurretEnemy _SB_TurretEnemy; // offset 0x0, size 0x14
};
// total size: 0x4
class CustomParams_Default {
    // Members
    int pad; // offset 0x0, size 0x4
};
// total size: 0x14
class CustomParams_SB_BombEnemy {
    // Members
    class __fuseDurationData__ fuseDurationData; // offset 0x0, size 0x10
    unsigned int fuseDurationOverride; // offset 0x10, size 0x4
};
// total size: 0x10
class __fuseDurationData__ {
    // Members
    enum eFuseDuration type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
enum eFuseDuration {
    eFuseDuration_Disabled = 0,
    eFuseDuration_Enabled = 1,
    END_eFuseDuration_ENUM = 2,
};
// total size: 0xC
class @class {
    // Members
    class DisabledStruct _Disabled; // offset 0x0, size 0x1
    class EnabledStruct _Enabled; // offset 0x0, size 0xC
};
// total size: 0x1
class DisabledStruct {};
// total size: 0xC
class EnabledStruct {
    // Members
    float fuseDuration; // offset 0x0, size 0x4
    float redStateDuration; // offset 0x4, size 0x4
    float yellowStateDuration; // offset 0x8, size 0x4
};
// total size: 0x14
class CustomParams_SB_TurretEnemy {
    // Members
    class __rateOfFireData__ rateOfFireData; // offset 0x0, size 0x10
    unsigned int rateOfFire; // offset 0x10, size 0x4
};
// total size: 0x10
class __rateOfFireData__ {
    // Members
    enum eRateOfFire type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
enum eRateOfFire {
    eRateOfFire_Disabled = 0,
    eRateOfFire_Enabled = 1,
    END_eRateOfFire_ENUM = 2,
};
// total size: 0xC
class EnabledStruct {
    // Members
    int ShootCycleCount; // offset 0x0, size 0x4
    float ShootCycleDelay; // offset 0x4, size 0x4
    float ShootDelay; // offset 0x8, size 0x4
};
// total size: 0x50
class zNPCGenericPool : private xOGEntity {
    // Members
    class EntityHandleBase * handle; // offset 0x3C, size 0x4
    bool * ReservedList; // offset 0x40, size 0x4
    unsigned long long * SpawnerList; // offset 0x44, size 0x4
    class zNPCGenericPoolAsset * asset; // offset 0x48, size 0x4
};
// total size: 0x14
class zNPCBT_Spawner_UnreserveNPC : public zNPCBTAction {};
// total size: 0x14
class zNPCBT_Spawner_SetRotateToFaceVariable : public zNPCBTAction {};
// total size: 0x54
class zNPCBT_SpawnNPC_ThrowToLocation_Action : public zNPCBTAction {
    // Members
    class zNPCGeneric * NPCToSpawn; // offset 0x14, size 0x4
    float t; // offset 0x18, size 0x4
    float tMax; // offset 0x1C, size 0x4
    float t_passed; // offset 0x20, size 0x4
    class xVec3 initVel; // offset 0x24, size 0xC
    class xVec3 initPos; // offset 0x30, size 0xC
    class xVec3 targetPos; // offset 0x3C, size 0xC
    float maxHeight; // offset 0x48, size 0x4
    float dAngle; // offset 0x4C, size 0x4
    bool playAnim; // offset 0x50, size 0x1
};
// total size: 0x18
class zNPCBT_GenericSpawnerInit_Action : public zNPCBTAction {
    // Members
    class Action_NPC_GenericSpawnerInit * asset; // offset 0x14, size 0x4
};
// total size: 0x8
class Action_NPC_GenericSpawnerInit : public ActionBase {
    // Members
    unsigned int spawnDelayVar; // offset 0x0, size 0x4
    float spawnDelayDefault; // offset 0x4, size 0x4
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
// total size: 0x7C
class zNPCSteeringFollowPathControl : public zNPCSteeringControl {
    // Members
    class zWanderData wanderData; // offset 0x4C, size 0x1C
    class zNPCSteeringAccumulator accAccum; // offset 0x68, size 0x10
    class zSteeringPath * path; // offset 0x78, size 0x4
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
// total size: 0x54
class zNPCBTSnapToFloorAction : public zNPCBTAction {
    // Members
    class xMat4x3 destMat; // offset 0x14, size 0x40
};
// total size: 0x14
class zNPCBTSetFlyingAction : public zNPCBTAction {};
// total size: 0x568
class zNPCBTOrbitAction : public zNPCBTMoveToAction {
    // Members
    class zNPCBTActionAnim actionAnim; // offset 0x538, size 0x18
    class zPlayer * player; // offset 0x550, size 0x4
    bool orbitLeft; // offset 0x554, size 0x1
    float orbitTimer; // offset 0x558, size 0x4
    float orbitExpireTime; // offset 0x55C, size 0x4
    float orbitRadius; // offset 0x560, size 0x4
    unsigned int playerVarID; // offset 0x564, size 0x4
};
// total size: 0x98
class zNPCBTFaceFromEventAction : public zNPCBTAction {
    // Members
    unsigned int animID; // offset 0x14, size 0x4
    unsigned int eventVarID; // offset 0x18, size 0x4
    class zNPCBTActionAnim actionAnim; // offset 0x1C, size 0x18
    bool valid; // offset 0x34, size 0x1
    class zNPCSteeringDest target; // offset 0x38, size 0x10
    class zNPCSteeringStopControl stopControl; // offset 0x48, size 0x4C
    float acceleration; // offset 0x94, size 0x4
};
// total size: 0x4C
class zNPCSteeringStopControl : public zNPCSteeringControl {};
// total size: 0x68
class zNPCBTStopAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    enum eHeadingCalcType headingCalcType; // offset 0x60, size 0x4
    float acceleration; // offset 0x64, size 0x4
};
// total size: 0x138
class zNPCBTPathFollowMPAction : public zNPCBTAction {
    // Members
    class zNPCSteeringFollowPathControl followControl; // offset 0x14, size 0x7C
    class zNPCBTActionAnim actionAnim; // offset 0x90, size 0x18
    class zNPCBTStuckRangeMultiplier stuckRangeMultiplier; // offset 0xA8, size 0x10
    class zSteeringPathMovePoints path; // offset 0xB8, size 0x5C
    float pathHalfWidth; // offset 0x114, size 0x4
    float maxSpeed; // offset 0x118, size 0x4
    float arriveTol2; // offset 0x11C, size 0x4
    enum eNPCMoveType moveType; // offset 0x120, size 0x4
    enum eHeadingCalcType headingCalcType; // offset 0x124, size 0x4
    bool arriveToDest; // offset 0x128, size 0x1
    float customMaxSpeed; // offset 0x12C, size 0x4
    float customMaxAcc; // offset 0x130, size 0x4
    char * customAnimName; // offset 0x134, size 0x4
};
// total size: 0x58
class zNPCBTTeleportAction : public zNPCBTAction {
    // Members
    class xMat4x3 destMat; // offset 0x14, size 0x40
    unsigned int destVar; // offset 0x54, size 0x4
};
// total size: 0x53C
class zNPCBTFollowProjectileAction : public zNPCBTMoveToAction {
    // Members
    class zProjectile * projectile; // offset 0x538, size 0x4
};
// total size: 0x538
class zNPCBTFlutterAction : public zNPCBTMoveToAction {};
// total size: 0x53C
class zNPCBTFleeAction : public zNPCBTMoveToAction {
    // Members
    class zPlayer * player; // offset 0x538, size 0x4
};
// total size: 0x780
class zNPCBTEscortAction : public zNPCBTMoveToAction {
    // Members
    class zNPCSteeringEscortControl escortControl; // offset 0x538, size 0x248
};
// total size: 0x248
class zNPCSteeringEscortControl : public zNPCSteeringMoveToControl {
    // Members
    class zWanderData wanderData; // offset 0x20C, size 0x1C
    class zWallAvoidanceData wallAvoidanceData; // offset 0x228, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x238, size 0x10
};
// total size: 0x548
class zNPCBTFollowPlayerAction : public zNPCBTMoveToAction {
    // Members
    class DelegateP0 observer; // offset 0x538, size 0x8
    unsigned int playerVariable; // offset 0x540, size 0x4
    class zPlayer * player; // offset 0x544, size 0x4
};
// total size: 0xBC
class zNPCBTJumpAction : public zNPCBTAction {
    // Members
    class zNPCSteeringJumpControl jumpControl; // offset 0x14, size 0x7C
    class zNPCBTActionAnim actionAnim; // offset 0x90, size 0x18
    unsigned int jumpState; // offset 0xA8, size 0x4
    bool useJumpStartAnim; // offset 0xAC, size 0x1
    bool useJumpEndAnim; // offset 0xAD, size 0x1
    char * jumpAnimName; // offset 0xB0, size 0x4
    char * jumpStartAnimName; // offset 0xB4, size 0x4
    char * jumpEndAnimName; // offset 0xB8, size 0x4
};
// total size: 0x7C
class zNPCSteeringJumpControl : public zNPCSteeringControl {
    // Members
    float apexHeight; // offset 0x4C, size 0x4
    float launchVelXZ; // offset 0x50, size 0x4
    float maxLaunchVelY; // offset 0x54, size 0x4
    class zNPCSteeringDest destination; // offset 0x58, size 0x10
    class zNPCSteeringAccumulator accAccum; // offset 0x68, size 0x10
    bool useHeight; // offset 0x78, size 0x1
    bool jumped; // offset 0x79, size 0x1
};
// total size: 0x14
class zNPCBTSetHitProfileAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSetCurrentHitPointsAction : public zNPCBTAction {};
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
// total size: 0x78
class zNPCBTStrikeAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    class zNPCBTActionAnim actionAnim; // offset 0x60, size 0x18
};
// total size: 0x14
class zNPCBTRemoveAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTKillAction : public zNPCBTAction {};
// total size: 0x18
class zNPCBTDamagePlayerOnContactAction : public zNPCBTAction {
    // Members
    class zNPCCollisionListener * collisionListener; // offset 0x14, size 0x4
};
// total size: 0x78
class zNPCBTHitAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    class zNPCBTActionAnim actionAnim; // offset 0x60, size 0x18
};
// total size: 0x78
class zNPCBTStunAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    class zNPCBTActionAnim actionAnim; // offset 0x60, size 0x18
};
// total size: 0x78
class zNPCBTDefeatedAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    class zNPCBTActionAnim actionAnim; // offset 0x60, size 0x18
};
// total size: 0x14
class zNPCBTSetNeedCombatTargetingCleanupAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTSetNeedCombatCleanupAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTResetCurrentPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCFlyingBTWriteCurrentPosition : public zNPCBTWriteCurrentPosition {};
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
class zNPCFlyingBTWritePlayerPositionAction : public zNPCBTWritePlayerPositionAction {};
// total size: 0x14
class zNPCBTWritePlayerPositionAction : public zNPCBTAction {};
// total size: 0x14
class zNPCFlyingBTWriteWanderPositionAction : public zNPCBTWriteWanderPositionAction {};
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
// total size: 0x18
class zNPCBTWriteTargetPlayerAction : public zNPCBTAction {
    // Members
    float timer; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTWriteClosestPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteLockedPlayerAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteNumberOfMovepointsAction : public zNPCBTAction {};
// total size: 0x14
class zNPCFlyingBTWriteInsideWallnetAction : public zNPCBTWriteInsideWallnetAction {};
// total size: 0x14
class zNPCBTWriteInsideWallnetAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteMaxHitPointsAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTWriteCurHitPointsAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTTextureSwapAction : public zNPCBTAction {};
// total size: 0x14
class zNPCBTPositionEntAtBoneAction : public zNPCBTAction {};
// total size: 0x40
class zNPCBTExtraCollisionAction : public zNPCBTAction {
    // Members
    class xHavokPhysicsObject physicsObject; // offset 0x20, size 0x20
};
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
    OnPlanktonDeath = 3,
    OnSpinAttackDeath = 4,
    OnHammerAttackDeath = 5,
    OnPuckAttackDeath = 6,
    END_eNPCCollectibleTypeENUM = 7,
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
// total size: 0xA0
class zNPCBTPlayAnimationTypeAction : public zNPCBTAction {
    // Members
    unsigned int animID; // offset 0x14, size 0x4
    unsigned int eventVarID; // offset 0x18, size 0x4
    class zNPCBTActionAnim actionAnim; // offset 0x1C, size 0x18
    bool valid; // offset 0x34, size 0x1
    class zNPCSteeringStopControl stopControl; // offset 0x38, size 0x4C
    enum eHeadingCalcType headingCalcType; // offset 0x84, size 0x4
    class zNPCSteeringDest steeringDest; // offset 0x88, size 0x10
    float acceleration; // offset 0x98, size 0x4
    bool forceRestart; // offset 0x9C, size 0x1
};
// total size: 0x88
class zNPCBTPlayAnimationAction : public zNPCBTAction {
    // Members
    unsigned long long animID; // offset 0x18, size 0x8
    class zNPCBTActionAnim actionAnim; // offset 0x20, size 0x18
    bool valid; // offset 0x38, size 0x1
    class zNPCSteeringStopControl stopControl; // offset 0x3C, size 0x4C
};
// total size: 0x1C
class zNPCBTPlayEELFXAction : public zNPCBTAction {
    // Members
    class ElectricArc * arc; // offset 0x14, size 0x4
    class Action_NPC_PlayEELFX * asset; // offset 0x18, size 0x4
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
// total size: 0x84
class zNPCBTIdleAction : public zNPCBTAction {
    // Members
    class zNPCSteeringStopControl stopControl; // offset 0x14, size 0x4C
    class zNPCBTActionAnim actionAnim; // offset 0x60, size 0x18
    bool fidget; // offset 0x78, size 0x1
    unsigned int animationPlays; // offset 0x7C, size 0x4
    enum IdleType idleType; // offset 0x80, size 0x4
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
    P5 = 4,
    P6 = 5,
    P7 = 6,
    P8 = 7,
    P9 = 8,
    P10 = 9,
    P11 = 10,
    P12 = 11,
    P13 = 12,
    P14 = 13,
    P15 = 14,
    P16 = 15,
    None = 16,
    END_ePlayerTypeENUM = 17,
};
// total size: 0xC
class VectorStruct {
    // Members
    class vec3 Value; // offset 0x0, size 0xC
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
// total size: 0x14
class zNPCBTActionBossMeterSet : public zNPCBTAction {};
// total size: 0x14
class zNPCBTActionBossMeterHide : public zNPCBTAction {};
// total size: 0x14
class zNPCBTActionBossMeterShow : public zNPCBTAction {};
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
    class DelegateP2 * observer; // offset 0x14, size 0x4
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
    class DelegateP0 * resumeCB; // offset 0x20, size 0x4
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
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
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
// total size: 0xC
class ChildIterator : public ChildIteratorBase {
    // Members
    class zBTNode * owner; // offset 0x4, size 0x4
    int current; // offset 0x8, size 0x4
};
// total size: 0x2C
class zBTLoopDecoratorTask : public zBTDecoratorTask {
    // Members
    int loopCount; // offset 0x20, size 0x4
    unsigned int variableName; // offset 0x24, size 0x4
    bool frameDelay; // offset 0x28, size 0x1
    bool loopNextFrame; // offset 0x29, size 0x1
};
// total size: 0x1C
class DecoratorNode : public BTNodeBase {
    // Members
    class @class __anon; // offset 0x8, size 0x10
    class LoopStruct Loop; // offset 0x8, size 0x10
    class ForceStatusStruct ForceStatus; // offset 0x8, size 0x1
    class TimerStruct Timer; // offset 0x8, size 0x8
    class RandomChanceStruct RandomChance; // offset 0x8, size 0xC
    class TimeDelayStruct TimeDelay; // offset 0x8, size 0xC
    class EventHandlerStruct EventHandler; // offset 0x8, size 0x10
    class TryAndCatchStruct TryAndCatch; // offset 0x8, size 0x4
    unsigned char decoratorType; // offset 0x18, size 0x1
};
// total size: 0x10
class @class {
    // Members
    class LoopStruct Loop; // offset 0x0, size 0x10
    class ForceStatusStruct ForceStatus; // offset 0x0, size 0x1
    class TimerStruct Timer; // offset 0x0, size 0x8
    class RandomChanceStruct RandomChance; // offset 0x0, size 0xC
    class TimeDelayStruct TimeDelay; // offset 0x0, size 0xC
    class EventHandlerStruct EventHandler; // offset 0x0, size 0x10
    class TryAndCatchStruct TryAndCatch; // offset 0x0, size 0x4
};
// total size: 0x10
class LoopStruct {
    // Members
    int loopCount; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class LoopSingleConstStruct SingleConst; // offset 0x4, size 0x4
    class LoopSingleVarStruct SingleVar; // offset 0x4, size 0x4
    unsigned int loopType; // offset 0x8, size 0x4
    bool FrameDelay; // offset 0xC, size 0x1
};
// total size: 0x4
class @class {
    // Members
    class LoopSingleConstStruct SingleConst; // offset 0x0, size 0x4
    class LoopSingleVarStruct SingleVar; // offset 0x0, size 0x4
};
// total size: 0x4
class LoopSingleConstStruct {
    // Members
    int loopNum; // offset 0x0, size 0x4
};
// total size: 0x4
class LoopSingleVarStruct {
    // Members
    unsigned int varName; // offset 0x0, size 0x4
};
// total size: 0x1
class ForceStatusStruct {
    // Members
    unsigned char status; // offset 0x0, size 0x1
};
// total size: 0x8
class TimerStruct {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class TimerConstantStruct Constant; // offset 0x0, size 0x4
    class TimerVariableStruct Variable; // offset 0x0, size 0x4
    unsigned int timerType; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class TimerConstantStruct Constant; // offset 0x0, size 0x4
    class TimerVariableStruct Variable; // offset 0x0, size 0x4
};
// total size: 0x4
class TimerConstantStruct {
    // Members
    float timer; // offset 0x0, size 0x4
};
// total size: 0x4
class TimerVariableStruct {
    // Members
    unsigned int timerVariable; // offset 0x0, size 0x4
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
// total size: 0x1C
class zBTNodeLoopDecorator : public zBTNodeDecorator {
    // Members
    int loop; // offset 0x10, size 0x4
    unsigned int variable; // offset 0x14, size 0x4
    bool frameDelay; // offset 0x18, size 0x1
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
    class DelegateP3 eventObserver; // offset 0x2C, size 0x8
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
// total size: 0x3C
class Factory {
    // Members
    class FactoryPageInfo * formattedPages[8]; // offset 0x0, size 0x20
    class FactoryPageInfo * freePages; // offset 0x20, size 0x4
    void * pagesStart; // offset 0x24, size 0x4
    void * pageInfosStart; // offset 0x28, size 0x4
    unsigned int pagesNum; // offset 0x2C, size 0x4
    unsigned int pageSize; // offset 0x30, size 0x4
    unsigned int * format; // offset 0x34, size 0x4
    unsigned int pageInfoSize; // offset 0x38, size 0x4
};
// total size: 0x1
class FactoryMemTypeLeakCBRegisterer {};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class zBTTask * value; // offset 0x8, size 0x4
};
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
// total size: 0x1C
class zNPCBTIsInWallnetCondition : public zNPCBTCondition {
    // Members
    enum CheckType check; // offset 0x14, size 0x4
    unsigned int target; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTCondition : public zBTCondition {
    // Members
    class zNPCBase * npcBase; // offset 0xC, size 0x4
    class ConditionBase * asset; // offset 0x10, size 0x4
};
enum CheckType {
    PerceptionTarget = 0,
    Self = 1,
    END_CheckTypeENUM = 2,
};
// total size: 0x14
class zNPCBTIsInPuppetModeCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTCheckPerceptionTargetInWallnetCondition : public zNPCBTCondition {
    // Members
    unsigned int target; // offset 0x14, size 0x4
};
// total size: 0x18
class zNPCBTCheckPerceptionTargetChangedCondition : public zNPCBTCondition {
    // Members
    class xEnt * originalTarget; // offset 0x14, size 0x4
};
// total size: 0x1C
class zNPCBTCheckPerceptionTargetStatusCondition : public zNPCBTCondition {
    // Members
    enum eNPCPerceptionTargetStatusType perceptionTargetStatusType; // offset 0x14, size 0x4
    unsigned int target; // offset 0x18, size 0x4
};
enum eNPCPerceptionTargetStatusType {
    eNPCPerceptionTargetStatus_TargetAlive = 0,
    eNPCPerceptionTargetStatus_TargetDead = 1,
    eNPCPerceptionTargetStatus_TargetFriendly = 2,
    eNPCPerceptionTargetStatus_TargetHostile = 3,
    END_eNPCPerceptionTargetStatus_ENUM = 4,
};
// total size: 0x20
class zNPCBTCheckPerceptionCondition : public zNPCBTCondition {
    // Members
    enum eNPCPerceptionType perceptionType; // offset 0x14, size 0x4
    unsigned int targets; // offset 0x18, size 0x4
    bool anded; // offset 0x1C, size 0x1
};
enum eNPCPerceptionType {
    eNPCPerception_TargetReachable = 0,
    eNPCPerception_TargetChargable = 1,
    eNPCPerception_TargetAttackable = 2,
    eNPCPerception_TargetVisible = 3,
    eNPCPerception_TargetShootable = 4,
    eNPCPerception_TargetEngageable = 5,
    END_eNPCPerception_ENUM = 6,
};
// total size: 0x1C
class zNPCBTFacingPerceptionTargetCondition : public zNPCBTCondition {
    // Members
    unsigned char target; // offset 0x14, size 0x1
    float tolerance; // offset 0x18, size 0x4
};
// total size: 0x14
class zNPCBTSBPlayerIsBuff : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTBossSquidwardDestroyCover : public zNPCBTCondition {};
// total size: 0x14
class zNPCBTBossSquidwardBlockPlayer : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTNearbyProjectileCondition : public zNPCBTCondition {
    // Members
    class hkpCylinderShape * collisionCheckShape; // offset 0x14, size 0x4
};
// total size: 0x60
class hkpCylinderShape : public hkpConvexShape {
    // Members
    float m_cylRadius; // offset 0x14, size 0x4
    float m_cylBaseRadiusFactorForHeightFieldCollisions; // offset 0x18, size 0x4
    class hkVector4 m_vertexA; // offset 0x20, size 0x10
    class hkVector4 m_vertexB; // offset 0x30, size 0x10
    class hkVector4 m_perpendicular1; // offset 0x40, size 0x10
    class hkVector4 m_perpendicular2; // offset 0x50, size 0x10
};
// total size: 0x18
class zNPCBTPokedCondition : public zNPCBTCondition {
    // Members
    enum PokeType pokeType; // offset 0x14, size 0x4
};
enum PokeType {
    PokeType_A = 0,
    PokeType_B = 1,
    END_PokeType_ENUM = 2,
};
// total size: 0x14
class zNPCBTIsPlanktonShakingCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTInRPSAttackStateCondition : public zNPCBTCondition {
    // Members
    enum eRPSAttackTypes state; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTDamagedByKnockbackCondition : public zNPCBTCondition {};
// total size: 0x18
class zNPCBTDamagedByTypeCondition : public zNPCBTCondition {
    // Members
    enum eHitSource type; // offset 0x14, size 0x4
};
// total size: 0x18
class zNPCBTDamagedCondition : public zNPCBTCondition {
    // Members
    bool nonzero; // offset 0x14, size 0x1
};
// total size: 0x18
class zNPCBTBlockedTypeCondition : public zNPCBTCondition {
    // Members
    enum eHitSource type; // offset 0x14, size 0x4
};
// total size: 0x14
class zNPCBTBlockedCondition : public zNPCBTCondition {};
// total size: 0x14
class zNPCBT_GenericSpawner_CanSpawnLater_Condition : public zNPCBTCondition {};
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
// total size: 0x14
class zNPCBTHitPointCountCondition : public zNPCBTCondition {};
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
// total size: 0x18
class BehaviorSet {
    // Members
    class __VariableDefinitions__ VariableDefinitions; // offset 0x0, size 0x8
    class uid RootBehavior; // offset 0x8, size 0x8
    class __Goals__ Goals; // offset 0x10, size 0x8
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
// total size: 0xC
class RubberCylinder : public CylinderRenderable {};
// total size: 0x2C
class ImmediateContext {
    // Members
    class DecalVertex * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
    class ImmediateGeometryContext igeomCtxt; // offset 0x20, size 0xC
};
// total size: 0x30
class DecalVertex : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    unsigned int color; // offset 0xC, size 0x4
    float tu; // offset 0x10, size 0x4
    float tv; // offset 0x14, size 0x4
    float nx; // offset 0x18, size 0x4
    float ny; // offset 0x1C, size 0x4
    float nz; // offset 0x20, size 0x4
    float tx; // offset 0x24, size 0x4
    float ty; // offset 0x28, size 0x4
    float tz; // offset 0x2C, size 0x4
};
enum StateEnum {
    STATE_ERROR = 4294967295,
    STATE_Constructed = 0,
    STATE_Committed = 1,
    STATE_Added = 2,
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
// total size: 0x8
class EventActionSwitch : public EventActionNew {
    // Members
    unsigned int viewport; // offset 0x0, size 0x4
    bool forceRestart; // offset 0x4, size 0x1
};
enum TapHoldStatus {
    TapHold_Undetermined = 0,
    TapHold_Tap = 1,
    TapHold_Hold = 2,
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
// total size: 0x10
class zRayHitCollector : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    float nearDist; // offset 0xC, size 0x4
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
    class binary_poi * mAsset; // offset 0x3C, size 0x4
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
// total size: 0x58
class zCameraCurve : public xOGEntity {
    // Members
    class zCameraCurveAsset * mAsset; // offset 0x3C, size 0x4
    class CurveEntity * mCurve[2]; // offset 0x40, size 0x8
    float mRenderIncU[2]; // offset 0x48, size 0x8
    class zCamPoolBase * mCamPool; // offset 0x50, size 0x4
    class xCam * mCamera; // offset 0x54, size 0x4
};
// total size: 0x78
class zCameraCurveAsset : public CurveCamera {};
// total size: 0x5C
class Follower {
    // Members
    bool mValidPlayerPathPos; // offset 0x0, size 0x1
    class zCameraCurve * mCurves; // offset 0x4, size 0x4
    class BeadInfo mInfo; // offset 0x8, size 0x54
};
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
// total size: 0x34
class TwoCurveBeads {
    // Members
    float Curve1; // offset 0x0, size 0x4
    float Curve2; // offset 0x4, size 0x4
    class CameraBeadProperty Properties; // offset 0x8, size 0x2C
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
// total size: 0x40
class zCamTweak {
    // Members
    unsigned long long owner; // offset 0x0, size 0x8
    float priority; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float pitch; // offset 0x10, size 0x4
    float distAdjust; // offset 0x14, size 0x4
    float pivotHeight; // offset 0x18, size 0x4
    float FOV; // offset 0x1C, size 0x4
    class xBase * * target; // offset 0x20, size 0x4
    float dirYaw; // offset 0x24, size 0x4
    float dirYawRange; // offset 0x28, size 0x4
    float dirPitch; // offset 0x2C, size 0x4
    float dirPitchRange; // offset 0x30, size 0x4
    float rigidity; // offset 0x34, size 0x4
    class CurveEntity * curve; // offset 0x38, size 0x4
    class zCamTweakCurveAsset * beadAsset; // offset 0x3C, size 0x4
};
// total size: 0x48
class zCameraTweak : public xOGEntity {
    // Members
    class Camera_Tweak * casset; // offset 0x3C, size 0x4
    class xBase * target; // offset 0x40, size 0x4
};
// total size: 0x48
class zCamTweakCurve : public xOGEntity {
    // Members
    class zCamTweakCurveAsset * asset; // offset 0x3C, size 0x4
    class CurveEntity * curve; // offset 0x40, size 0x4
    class xBase * * targetList; // offset 0x44, size 0x4
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
// total size: 0x24
class FindTargetNPC {
    // Members
    class xVec3 ownerPos; // offset 0x0, size 0xC
    class xVec3 ownerFacing; // offset 0xC, size 0xC
    class zNPCBase * result; // offset 0x18, size 0x4
    float currentDist; // offset 0x1C, size 0x4
    float currentDot; // offset 0x20, size 0x4
};
// total size: 0x40
class zCamFixed : public xOGEntity {
    // Members
    class xCamAsset * mAsset; // offset 0x3C, size 0x4
};
// total size: 0x1A8
class zCamWorldFixed : public xCam {
    // Members
    class xCamAsset * mAsset; // offset 0x148, size 0x4
    class xMat4x3 curMat; // offset 0x14C, size 0x40
    bool fakeDriving; // offset 0x18C, size 0x1
    class zPlatform * platDriver; // offset 0x190, size 0x4
    class xVec3 position; // offset 0x194, size 0xC
    class xBase * originObj; // offset 0x1A0, size 0x4
    class xVec3 * origin; // offset 0x1A4, size 0x4
};
// total size: 0x1D0
class zPlatform : public zEnt {
    // Members
    class xEntMotionAsset * plat_asset; // offset 0xC0, size 0x4
    class xEntMotion motion; // offset 0xC4, size 0x98
    unsigned short state; // offset 0x15C, size 0x2
    unsigned short plat_flags; // offset 0x15E, size 0x2
    float tmr; // offset 0x160, size 0x4
    int ctr; // offset 0x164, size 0x4
    class xMovePoint * src; // offset 0x168, size 0x4
    int moving; // offset 0x16C, size 0x4
    int num_updates; // offset 0x170, size 0x4
    class zPlatFMRunTime * fmrt; // offset 0x174, size 0x4
    class zDestructible * destructible; // offset 0x178, size 0x4
    float idleMax; // offset 0x17C, size 0x4
    bool idle; // offset 0x180, size 0x1
    bool biplanable; // offset 0x181, size 0x1
    class zTransparentHelper TransparentHelper; // offset 0x184, size 0x8
    class xMat4x3 boneMat; // offset 0x18C, size 0x40
    class zJawFlapper * jawFlapper; // offset 0x1CC, size 0x4
};
// total size: 0x200
class zPlatFMRunTime {
    // Members
    unsigned int animChannelFlags; // offset 0x0, size 0x4
    float timer[17]; // offset 0x4, size 0x44
    float totalTime[17]; // offset 0x48, size 0x44
    float accelTime[17]; // offset 0x8C, size 0x44
    float decelTime[17]; // offset 0xD0, size 0x44
    float maxSpeed[17]; // offset 0x114, size 0x44
    float distRemaining[17]; // offset 0x158, size 0x44
    float total_change[17]; // offset 0x19C, size 0x44
    class xQuat startQuat; // offset 0x1E0, size 0x10
    class xQuat destQuat; // offset 0x1F0, size 0x10
};
// total size: 0x48
class zCamDrivable : public zCamFixed {
    // Members
    class xCamAssetD * mAssetD; // offset 0x40, size 0x4
};
// total size: 0x270
class zCamWorldDrivable : public zCamWorldFixed {
    // Members
    class xMat4x3 startMat; // offset 0x1A8, size 0x40
    class xMat4x3 relMat; // offset 0x1E8, size 0x40
    class xMat4x3 curMat; // offset 0x228, size 0x40
    bool fakeDriving; // offset 0x268, size 0x1
    class zPlatform * platDriver; // offset 0x26C, size 0x4
};
// total size: 0x44
class zCamPlayerTarget : public zCamTarget {
    // Members
    unsigned int playerIdx; // offset 0x34, size 0x4
    class xVec3 blended_loc; // offset 0x38, size 0xC
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
// total size: 0x2A0
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
    bool mUsePitchLimit; // offset 0x291, size 0x1
    float mPitchLimitUpper; // offset 0x294, size 0x4
    float mPitchLimitLower; // offset 0x298, size 0x4
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
// total size: 0x518
class zCamTargetSpline : public zCam2Player, public zCamSplineCommonMix {
    // Members
    class xCamSpatialInfo oldSpatial; // offset 0x490, size 0x30
    class xMat4x3 oldMat; // offset 0x4C0, size 0x40
    class xSpringyF32 mYOffset; // offset 0x500, size 0x18
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
// total size: 0x8
class zCatapultCollisionListener : public hkpCollisionListener {
    // Members
    class zCatapult * owner; // offset 0x4, size 0x4
};
// total size: 0x1
class zGameCheats {
    // Members
    bool blackWhite : 1; // offset 0x0, size 0x1, bit offset 0
    bool unlockAllCostumes : 1; // offset 0x0, size 0x1, bit offset 1
    bool unlockAllLevel : 1; // offset 0x0, size 0x1, bit offset 2
    bool addHappyNuggets : 1; // offset 0x0, size 0x1, bit offset 3
    bool spongeBuffMode : 1; // offset 0x0, size 0x1, bit offset 4
    bool superStrongMode : 1; // offset 0x0, size 0x1, bit offset 5
    bool superWeakMode : 1; // offset 0x0, size 0x1, bit offset 6
    bool unlockBonusMaterials : 1; // offset 0x0, size 0x1, bit offset 7
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
// total size: 0x1F8
class zCinematic : public xOGEntity, public IHackCinematicCallbackSink {
    // Members
    class zSoundAsset assetSound; // offset 0x40, size 0x48
    class zCinematicAsset * asset; // offset 0x88, size 0x4
    class CinematicBlobEntity * ngCinematic; // offset 0x8C, size 0x4
    class xBase * caller; // offset 0x90, size 0x4
    bool skippable; // offset 0x94, size 0x1
    float totalTime; // offset 0x98, size 0x4
    float runningTime; // offset 0x9C, size 0x4
    int runningFrame; // offset 0xA0, size 0x4
    unsigned int currentClipIdx; // offset 0xA4, size 0x4
    bool fadingAtEnd; // offset 0xA8, size 0x1
    class xVec3 gameCamPos; // offset 0xAC, size 0xC
    enum eCinematicStatus status; // offset 0xB8, size 0x4
    int tryNumber; // offset 0xBC, size 0x4
    int soundLoadingWaitCounter; // offset 0xC0, size 0x4
    class zCinematicSyncTable * cinematicSyncTable; // offset 0xC4, size 0x4
    class zPIDController soundVideoSyncPID; // offset 0xC8, size 0x94
    class zPIDController soundGameTimeSyncPID; // offset 0x15C, size 0x94
    float gameTimeMultiplier; // offset 0x1F0, size 0x4
};
// total size: 0x4
class IHackCinematicCallbackSink {};
// total size: 0xA8
class CinematicBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class IHackCinematicCallbackSink * cbSink; // offset 0x1C, size 0x4
    class Scene * scene; // offset 0x20, size 0x4
    class ModelInstanceTableEntry * instanceTable; // offset 0x24, size 0x4
    class AnimTableEntry * animTable; // offset 0x28, size 0x4
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
// total size: 0x4
class ICinematicElement {};
// total size: 0x124
class ModelInstanceTableEntry {
    // Members
    class ModelInstanceArticle modelInstance; // offset 0x0, size 0x98
    unsigned char * modelMem; // offset 0x98, size 0x4
    int modelMemSize; // offset 0x9C, size 0x4
    class Visibility visParts[64]; // offset 0xA0, size 0x80
    signed char visCount; // offset 0x120, size 0x1
    bool active; // offset 0x121, size 0x1
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
// total size: 0x1C
class ComboAnimBlobEntity : public BlobEntity {
    // Members
    class ComboAnimBlobAssetV2 * v2data; // offset 0x18, size 0x4
};
// total size: 0x4
class Interpolator {
    // Members
    float time; // offset 0x0, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x38
class CameraFlyBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class CameraFlyAsset * asset; // offset 0x1C, size 0x4
    class IHackCameraFlyCallbackSink * cbSink; // offset 0x20, size 0x4
    float time; // offset 0x24, size 0x4
    bool playing; // offset 0x28, size 0x1
    class Vector3 xform; // offset 0x2C, size 0xC
};
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
// total size: 0x4
class IHackCameraFlyCallbackSink {};
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
// total size: 0x114
class hkpCombatCdBodyPairCollector : public hkpAllCdBodyPairCollector {};
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
// total size: 0x114
class hkpCombatCdBodyPairCollectorNoBSP : public hkpCombatCdBodyPairCollector {};
// total size: 0x40
class hkpCapsuleShape : public hkpConvexShape {
    // Members
    class hkVector4 m_vertexA; // offset 0x20, size 0x10
    class hkVector4 m_vertexB; // offset 0x30, size 0x10
};
// total size: 0xB0
class zHitButton : public xEffectAttachIntf {
    // Members
    class zHitButtonAsset * asset; // offset 0x3C, size 0x4
    class hkpRigidBody * rigidBody; // offset 0x40, size 0x4
    enum zButtonType buttonType; // offset 0x44, size 0x4
    float timer; // offset 0x48, size 0x4
    bool pressed; // offset 0x4C, size 0x1
    bool lockInPressed; // offset 0x4D, size 0x1
    class xMat4x3 accumRelMat; // offset 0x50, size 0x40
    float spinTime; // offset 0x90, size 0x4
    float remainingSpinUpTime; // offset 0x94, size 0x4
    float angVel; // offset 0x98, size 0x4
    bool collisionOn; // offset 0x9C, size 0x1
    bool isBSPVisible; // offset 0x9D, size 0x1
    bool isVisible; // offset 0x9E, size 0x1
    bool requiresPhysicsUpdate; // offset 0x9F, size 0x1
    bool requiresPhysicsFreeze; // offset 0xA0, size 0x1
    int lastHammerStrength; // offset 0xA4, size 0x4
    bool isUnwinding; // offset 0xA8, size 0x1
};
enum zButtonType {
    ButtonSpin = 0,
    ButtonSpinWheel = 1,
    ButtonHammer = 2,
    ButtonPuck = 3,
    ButtonHammerStrength = 4,
    ButtonEnumEnd = 5,
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
// total size: 0x10
class EventActionMoveToTarget : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x28
class zPlayerTriggered : public zCommonPlayerAction {
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
// total size: 0x10
class EventActionSetPlayerPosition : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
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
// total size: 0x8
class EventActionEnt : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
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
// total size: 0x8
class EventActionGoodPosDrive : public EventActionNew {
    // Members
    class uid DrivePos; // offset 0x0, size 0x8
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
// total size: 0x20
class zPlayerJump : public zCommonPlayerAction {
    // Members
    bool jumped; // offset 0x10, size 0x1
    float time; // offset 0x14, size 0x4
    float y; // offset 0x18, size 0x4
    float gustTime; // offset 0x1C, size 0x4
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
// total size: 0x18
class zPlayerDoubleJump : public zCommonPlayerAction {
    // Members
    bool doubleJumped; // offset 0x10, size 0x1
    float timer; // offset 0x14, size 0x4
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
// total size: 0xD0
class AnimSequence {
    // Members
    class Step mSteps[16]; // offset 0x0, size 0xC0
    int mNumSteps; // offset 0xC0, size 0x4
    int mCurStep; // offset 0xC4, size 0x4
    unsigned int mLoopsLeft; // offset 0xC8, size 0x4
    class xModelInstance * mModel; // offset 0xCC, size 0x4
};
// total size: 0xC
class Step {
    // Members
    class StateConfig * stateCfg; // offset 0x0, size 0x4
    unsigned int blendFrames; // offset 0x4, size 0x4
    unsigned int numRepeats; // offset 0x8, size 0x4
};
// total size: 0x158
class zAnimViewerCamera : public xCam {
    // Members
    float distance; // offset 0x148, size 0x4
    class xVec3 target; // offset 0x14C, size 0xC
};
// total size: 0x48
class zConditional : public xOGEntity {
    // Members
    class zCondAsset * asset; // offset 0x3C, size 0x4
    class zConditionalUnit * units; // offset 0x40, size 0x4
    int unitTotal; // offset 0x44, size 0x4
};
// total size: 0x8
class zConditionalUnit {
    // Members
    class ConditionDef * conditionDef; // offset 0x0, size 0x4
    class zVarEntry * varEntry; // offset 0x4, size 0x4
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
// total size: 0x110
class zExplosiveObject : public zEntSimpleObj {
    // Members
    class ExplosiveObject * explosiveAsset; // offset 0xF4, size 0x4
    class ExplosiveProperties * explosiveProperties; // offset 0xF8, size 0x4
    bool shouldExplodeHit; // offset 0xFC, size 0x1
    bool alive; // offset 0xFD, size 0x1
    bool exploding; // offset 0xFE, size 0x1
    bool timerRunning; // offset 0xFF, size 0x1
    float explosionTimer; // offset 0x100, size 0x4
    float chainExplodeDelayTimer; // offset 0x104, size 0x4
};
// total size: 0x130
class ExplosiveObject : public xSimpleObjAsset {
    // Members
    class uid ExplosiveProperties; // offset 0x120, size 0x8
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
    class binary_poi * mAsset; // offset 0x404, size 0x4
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
// total size: 0x30
class hkpCdPoint {
    // Members
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkpCdBody & m_cdBodyA; // offset 0x20, size 0x4
    class hkpCdBody & m_cdBodyB; // offset 0x24, size 0x4
};
// total size: 0xC0
class zVariable : public zVariableBase {
    // Members
    class zVariableEventData defaultValue; // offset 0x30, size 0x48
    class zVariableEventData value; // offset 0x78, size 0x48
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
