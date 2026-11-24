/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80084580 -> 0x800CFAB8
*/
extern class hkMonitorStream * hkMonitorStream__m_instance; // size: 0x4
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
    eAchievementTypeEnd = 47,
    eAchievementTypeForceInt = 2147483647,
};
// total size: 0x2224
class zBombManager {
    // Members
    class StaticArray pendingBombs; // offset 0x0, size 0x604
    class StaticArray pendingDamages; // offset 0x604, size 0x1C04
    bool inUpdateInUpdate; // offset 0x2208, size 0x1
    class CriticalSection bombManagerCS; // offset 0x220C, size 0x18
};
// total size: 0x604
class StaticArray {
    // Members
    int size; // offset 0x0, size 0x4
    class zBombInfo pool[16]; // offset 0x4, size 0x600
};
// total size: 0x60
class zBombInfo {
    // Members
    class xBound bound; // offset 0x0, size 0x2C
    class xEnt * fromEnt; // offset 0x2C, size 0x4
    float player_damage; // offset 0x30, size 0x4
    float obj_damage; // offset 0x34, size 0x4
    float npc_damage; // offset 0x38, size 0x4
    float awayKnockback; // offset 0x3C, size 0x4
    float upKnockback; // offset 0x40, size 0x4
    enum zHitSource hitSource; // offset 0x44, size 0x4
    enum zHitTarget hitTarget; // offset 0x48, size 0x4
    unsigned int hitFlags; // offset 0x4C, size 0x4
    class xVec3 optNormalToChkStorage; // offset 0x50, size 0xC
    class xVec3 * optNormalToChk; // offset 0x5C, size 0x4
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
    enum zHitSource source; // offset 0x18, size 0x4
    enum zHitTarget target; // offset 0x1C, size 0x4
    class xVec3 knockback; // offset 0x20, size 0xC
    class xVec3 hitLocation; // offset 0x2C, size 0xC
};
// total size: 0x18
class CriticalSection {
    // Members
    class OSMutex mutex; // offset 0x0, size 0x18
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
// total size: 0x1D0
class zBoneSwivelManager : public zModule {
    // Members
    class xBase selfbase; // offset 0x18, size 0x20
    int numEntries; // offset 0x38, size 0x4
    class zBoneSwivelEntry entries[10]; // offset 0x3C, size 0x190
    float last_dt; // offset 0x1CC, size 0x4
};
// total size: 0x28
class zBoneSwivelEntry {
    // Members
    bool used; // offset 0x0, size 0x1
    class zNPCBase * npc; // offset 0x4, size 0x4
    int bone; // offset 0x8, size 0x4
    enum Axis axis; // offset 0xC, size 0x4
    float thresholdDistanceSquared; // offset 0x10, size 0x4
    float maxRotationAngle; // offset 0x14, size 0x4
    float turningSpeed; // offset 0x18, size 0x4
    class xVec3 * target; // offset 0x1C, size 0x4
    enum TrackingState state; // offset 0x20, size 0x4
    float accumAngle; // offset 0x24, size 0x4
};
// total size: 0x8
class zNPCSteeringOld : public zNPCComponent {};
// total size: 0x3C
class zNPCFX : public zNPCComponent {
    // Members
    class zNPCFXNode * FXs[8]; // offset 0x8, size 0x20
    bool isRunning[8]; // offset 0x28, size 0x8
    unsigned int numberOfFXs; // offset 0x30, size 0x4
    class zNPCFXParams * params; // offset 0x34, size 0x4
    class zNPCEntity * customEnt; // offset 0x38, size 0x4
};
// total size: 0xC
class zNPCFXNode {
    // Members
    enum FXType fxType; // offset 0x0, size 0x4
    class zNPCFX * owner; // offset 0x4, size 0x4
};
enum FXType {
    eFXTypeActivateFXOS = 0,
    eFXTypeActivateFXLoop = 1,
    eFXTypeDeactivateFXOS = 2,
    eFXTypeSwarmSquishFXOS = 3,
    eFXTypeAttackFXOS = 4,
    eFXTypeAttackFXLoop = 5,
    eFXTypeStunnedFXLoop = 6,
    eFXTypeThiefBombFXLoop = 7,
    eFXTypeThiefBombFXOS = 8,
    eFXTypeGenericActionFXOS = 9,
    eFXTypeAnimationSignal1FXOS = 10,
    eFXTypeAnimationSignal2FXOS = 11,
    END_eFXTypeENUM = 12,
};
// total size: 0x28
class zNPCFXParams {
    // Members
    float stunnedCardScale; // offset 0x0, size 0x4
    float stunnedCardTurnRadius; // offset 0x4, size 0x4
    float stunnedCardTurnRate; // offset 0x8, size 0x4
    float stunnedCardTurnRateVarFreq; // offset 0xC, size 0x4
    class xVec3 stunnedNPCOffset; // offset 0x10, size 0xC
    unsigned int stunnedNumberOfCards; // offset 0x1C, size 0x4
    float stunnedFadeInTime; // offset 0x20, size 0x4
    float stunnedDelayTime; // offset 0x24, size 0x4
};
enum Axis {
    eAxis_Pos_Y = 0,
    eAxis_Neg_Y = 1,
    eAxis_Pos_X = 2,
    eAxis_Neg_X = 3,
    eAxis_Pos_Z = 4,
    eAxis_Neg_Z = 5,
    eAxis_Max = 6,
};
enum TrackingState {
    eTracking_On = 0,
    eTracking_Off = 1,
    eTracking_UseThresholdDistance = 2,
    eTracking_Max = 3,
};
// total size: 0x18
class xOGSchema : public Schema {};
// total size: 0x10
class _OGButton_Masher_WidgetEntity : public xOGEntity {};
// total size: 0x18
class _OGButton_Masher_WidgetSchema : public Schema {};
// total size: 0x48
class zButtonMasherMashChecker : public xBase {
    // Members
    class PrivateFlags privateFlags; // offset 0x20, size 0x8
    class zButtonMasherWidgetAsset * asset; // offset 0x28, size 0x4
    class zPlayerInput * playerInput; // offset 0x2C, size 0x4
    bool cycleDone; // offset 0x30, size 0x1
    bool pressed; // offset 0x31, size 0x1
    unsigned int button; // offset 0x34, size 0x4
    float timer; // offset 0x38, size 0x4
    float curRate; // offset 0x3C, size 0x4
    float curVelocity; // offset 0x40, size 0x4
    int objectArrayIdx; // offset 0x44, size 0x4
};
// total size: 0x8
class PrivateFlags {
    // Members
    bool on : 1; // offset 0x0, size 0x1, bit offset 0
    bool doCalcRate : 1; // offset 0x0, size 0x1, bit offset 1
    unsigned int pad : 31; // offset 0x4, size 0x4, bit offset 0
};
// total size: 0x40
class zButtonMasherWidgetAsset : public xDynAsset {
    // Members
    unsigned long long playerId; // offset 0x20, size 0x8
    unsigned int buttonId; // offset 0x28, size 0x4
    float lowRateThreshold; // offset 0x2C, size 0x4
    float medRateThreshold; // offset 0x30, size 0x4
    float highRateThreshold; // offset 0x34, size 0x4
    float decayTime; // offset 0x38, size 0x4
    float decayRate; // offset 0x3C, size 0x4
};
// total size: 0x50
class zFXScript : public xBase {
    // Members
    class FXScriptAsset * asset; // offset 0x20, size 0x4
    class xVec3 * fxOffsets; // offset 0x24, size 0x4
    class FXScriptResource * fxRes; // offset 0x28, size 0x4
    int * fxLookUp; // offset 0x2C, size 0x4
    float fxCycleEndTime; // offset 0x30, size 0x4
    int stoppables; // offset 0x34, size 0x4
    int numPGSpawnPts; // offset 0x38, size 0x4
    int numOGSpawnPts; // offset 0x3C, size 0x4
    int numShrapSpawnPts; // offset 0x40, size 0x4
    int numDecSpawnPts; // offset 0x44, size 0x4
    int numRibbonSpawnPts; // offset 0x48, size 0x4
    int numDLSpawnPts; // offset 0x4C, size 0x4
};
// total size: 0x7C
class FXScriptResource {
    // Members
    void * asset; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    class zSoundAsset sndAsset; // offset 0x8, size 0x74
};
// total size: 0x88
class zParticleGeneratorSpawnPt : public xBase {
    // Members
    bool removeParticles; // offset 0x20, size 0x1
    class PartGenSpawnPtAsset * asset; // offset 0x24, size 0x4
    class zParticleGenerator * pgOwner; // offset 0x28, size 0x4
    class xEnt * driver; // offset 0x2C, size 0x4
    unsigned int state; // offset 0x30, size 0x4
    float cullDistance; // offset 0x34, size 0x4
    int cullPriority; // offset 0x38, size 0x4
    int generatorSpawnPtIdx; // offset 0x3C, size 0x4
    class xBaseTransform baseTransform; // offset 0x40, size 0x48
};
// total size: 0x38
class PartGenSpawnPtAsset : public xBaseAsset {
    // Members
    class vec3 position; // offset 0x10, size 0xC
    class Rotation3 orientation; // offset 0x1C, size 0xC
    class uid particleGenerator; // offset 0x28, size 0x8
    float cullDistance; // offset 0x30, size 0x4
    int cullPriority; // offset 0x34, size 0x4
};
// total size: 0x50
class zParticleGenerator : public xBase {
    // Members
    class particle_generator * asset; // offset 0x20, size 0x4
    int flags; // offset 0x24, size 0x4
    float lifetime; // offset 0x28, size 0x4
    bool preRollThisUpdate; // offset 0x2C, size 0x1
    int uvAnimCount; // offset 0x30, size 0x4
    class xVec4 * uvAnimList; // offset 0x34, size 0x4
    float rateLifeTime; // offset 0x38, size 0x4
    float emitRateScale; // offset 0x3C, size 0x4
    float lifeTimeScale; // offset 0x40, size 0x4
    float waitTime; // offset 0x44, size 0x4
    class zGradientCurve * rateCurve; // offset 0x48, size 0x4
};
// total size: 0x190
class particle_generator : public xDynAsset {
    // Members
    unsigned char generalFlags; // offset 0x20, size 0x1
    unsigned char locationFlags; // offset 0x21, size 0x1
    unsigned char motionFlags; // offset 0x22, size 0x1
    unsigned char volumeFlags; // offset 0x23, size 0x1
    class rate rate; // offset 0x28, size 0x18
    class uid visual_effect; // offset 0x40, size 0x8
    unsigned char anim_rows; // offset 0x48, size 0x1
    unsigned char anim_cols; // offset 0x49, size 0x1
    float cullDistance; // offset 0x4C, size 0x4
    int cullPriority; // offset 0x50, size 0x4
    unsigned char motion_type; // offset 0x54, size 0x1
    unsigned char volume_type; // offset 0x55, size 0x1
    unsigned char system_type; // offset 0x56, size 0x1
    class @class motion_data; // offset 0x58, size 0x14
    class @class volume_data; // offset 0x70, size 0x40
    class @class system_data; // offset 0xB0, size 0xE0
};
// total size: 0x18
class rate {
    // Members
    class uid rateCurve; // offset 0x0, size 0x8
    float minRate; // offset 0x8, size 0x4
    float maxRate; // offset 0xC, size 0x4
    float lifeTime; // offset 0x10, size 0x4
};
// total size: 0x14
class @class {
    // Members
    class NoneMotion None; // offset 0x0, size 0x1
    class SpiralMotion Spiral; // offset 0x0, size 0x14
};
// total size: 0x1
class NoneMotion {};
// total size: 0x14
class SpiralMotion {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char points; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float radius_inner; // offset 0x4, size 0x4
    float radius_outer; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    float frequency; // offset 0x10, size 0x4
};
// total size: 0x40
class @class {
    // Members
    class PointVolume Point; // offset 0x0, size 0x1
    class SphereVolume Sphere; // offset 0x0, size 0x4
    class CircleVolume Circle; // offset 0x0, size 0x10
    class LineVolume Line; // offset 0x0, size 0x10
    class ModelVolume Model; // offset 0x0, size 0x40
    class BoxVolume Box; // offset 0x0, size 0xC
    class CurveVolume Curve; // offset 0x0, size 0x8
};
// total size: 0x1
class PointVolume {};
// total size: 0x4
class SphereVolume {
    // Members
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class CircleVolume {
    // Members
    float xRadius; // offset 0x0, size 0x4
    float yRadius; // offset 0x4, size 0x4
    float arc_length; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
};
// total size: 0x10
class LineVolume {
    // Members
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float xRadius; // offset 0x4, size 0x4
    float yRadius; // offset 0x8, size 0x4
    float length; // offset 0xC, size 0x4
};
// total size: 0x40
class ModelVolume {
    // Members
    class ModelInstanceAsset ModelInstances; // offset 0x0, size 0x40
};
// total size: 0xC
class BoxVolume {
    // Members
    class vec3 dimensions; // offset 0x0, size 0xC
};
// total size: 0x8
class CurveVolume {
    // Members
    class uid curve; // offset 0x0, size 0x8
};
// total size: 0xE0
class @class {
    // Members
    class UberStruct Uber; // offset 0x0, size 0xE0
};
// total size: 0xE0
class UberStruct {
    // Members
    float life; // offset 0x0, size 0x4
    float life_var; // offset 0x4, size 0x4
    class velocity velocity; // offset 0x8, size 0x38
    class acceleration acceleration; // offset 0x40, size 0x20
    class color color; // offset 0x60, size 0x28
    class alpha alpha; // offset 0x88, size 0x10
    class scale scale; // offset 0x98, size 0x28
    class rotation rotation; // offset 0xC0, size 0x18
    class animation animation; // offset 0xD8, size 0x8
};
// total size: 0x38
class velocity {
    // Members
    unsigned char dirType; // offset 0x0, size 0x1
    float velHAngle; // offset 0x4, size 0x4
    float velWAngle; // offset 0x8, size 0x4
    class uid speedCurve; // offset 0x10, size 0x8
    class vec3 velDir; // offset 0x18, size 0xC
    bool velWrldSpc; // offset 0x24, size 0x1
    float minSpeed; // offset 0x28, size 0x4
    float maxSpeed; // offset 0x2C, size 0x4
    float speedDelta; // offset 0x30, size 0x4
};
// total size: 0x20
class acceleration {
    // Members
    class vec3 accelDir; // offset 0x0, size 0xC
    bool accelWrldSpc; // offset 0xC, size 0x1
    class uid accelCurve; // offset 0x10, size 0x8
    float minAccel; // offset 0x18, size 0x4
    float maxAccel; // offset 0x1C, size 0x4
};
// total size: 0x28
class color {
    // Members
    class uid colorCurve; // offset 0x0, size 0x8
    class FloatColorRGBA minColor; // offset 0x8, size 0x10
    class FloatColorRGBA maxColor; // offset 0x18, size 0x10
};
// total size: 0x10
class alpha {
    // Members
    class uid alphaCurve; // offset 0x0, size 0x8
    float minAlpha; // offset 0x8, size 0x4
    float maxAlpha; // offset 0xC, size 0x4
};
// total size: 0x28
class scale {
    // Members
    class uid widthCurve; // offset 0x0, size 0x8
    float minWidth; // offset 0x8, size 0x4
    float maxWidth; // offset 0xC, size 0x4
    class uid heightCurve; // offset 0x10, size 0x8
    float minHeight; // offset 0x18, size 0x4
    float maxHeight; // offset 0x1C, size 0x4
    float scale_var; // offset 0x20, size 0x4
};
// total size: 0x18
class rotation {
    // Members
    unsigned char rotationType; // offset 0x0, size 0x1
    class uid omegaCurve; // offset 0x8, size 0x8
    float minOmega; // offset 0x10, size 0x4
    float maxOmega; // offset 0x14, size 0x4
};
// total size: 0x8
class animation {
    // Members
    bool startRnd; // offset 0x0, size 0x1
    float fps; // offset 0x4, size 0x4
};
// total size: 0x18
class zGradientCurve {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    unsigned int numPoints; // offset 0x8, size 0x4
    class sCurvePoint * points; // offset 0xC, size 0x4
    float * lookupTable; // offset 0x10, size 0x4
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
// total size: 0x70
class zDecalEmitter : public xBase {
    // Members
    class xBaseTransform baseTransform; // offset 0x20, size 0x48
    class zDecal * decal; // offset 0x68, size 0x4
    class DecalEmitter * asset; // offset 0x6C, size 0x4
};
// total size: 0x38
class zDecal : public xBase {
    // Members
    class AssetType * asset; // offset 0x20, size 0x4
    class xResponseCurve curve; // offset 0x24, size 0x10
    class emit_context * emitInfo; // offset 0x34, size 0x4
};
// total size: 0x48
class AssetType : public xBaseAsset {
    // Members
    float life; // offset 0x10, size 0x4
    float range; // offset 0x14, size 0x4
    unsigned long long entity; // offset 0x18, size 0x8
    float width; // offset 0x20, size 0x4
    float height; // offset 0x24, size 0x4
    unsigned int animRows; // offset 0x28, size 0x4
    unsigned int animCols; // offset 0x2C, size 0x4
    float fps; // offset 0x30, size 0x4
    float animTime; // offset 0x34, size 0x4
    bool randomStart; // offset 0x38, size 0x1
    class __curveNodes__ curveNodes; // offset 0x3C, size 0x8
};
// total size: 0x8
class __curveNodes__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
// total size: 0x40
class DecalEmitter : public xBaseAsset {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    class Rotation3 rot; // offset 0x1C, size 0xC
    bool rotAbs; // offset 0x28, size 0x1
    class uid decal; // offset 0x30, size 0x8
    class LinkAsset EventLinksNew; // offset 0x38, size 0x8
};
// total size: 0x98
class zRibbonEmitter : public xBase {
    // Members
    class xBaseTransform baseTransform; // offset 0x20, size 0x48
    class zRibbon * ribbonEffect; // offset 0x68, size 0x4
    class xFXRibbon * ribbon; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
    class xVec3 offset; // offset 0x74, size 0xC
    class xVec3 vel; // offset 0x80, size 0xC
    float time; // offset 0x8C, size 0x4
    class RibbonEmitter * asset; // offset 0x90, size 0x4
};
// total size: 0x58
class zRibbon : private xBase {
    // Members
    class AssetType * asset; // offset 0x20, size 0x4
    class config_type config; // offset 0x28, size 0x28
    class curve_node * curveNodes; // offset 0x50, size 0x4
};
// total size: 0x38
class RibbonEmitter : public xBaseAsset {
    // Members
    class vec3 pos; // offset 0x10, size 0xC
    class Rotation3 rot; // offset 0x1C, size 0xC
    class uid ribbon; // offset 0x28, size 0x8
    class LinkAsset EventLinksNew; // offset 0x30, size 0x8
};
// total size: 0x3D0
class zCam2Player : public xCam {
    // Members
    class @class mSecondary; // offset 0x138, size 0x18
    bool mHaveSecondary; // offset 0x150, size 0x1
    class rest_config rest; // offset 0x154, size 0x10
    float mPivotYOffset; // offset 0x164, size 0x4
    bool mFirstFrame; // offset 0x168, size 0x1
    bool mIsLocked; // offset 0x169, size 0x1
    class xCamSupportLOSBar mLOSBar; // offset 0x16C, size 0x38
    float mPreCollideThetaRestoreGoal; // offset 0x1A4, size 0x4
    class xSpringyVec3 mTargetPos; // offset 0x1A8, size 0x28
    class basis_traits mBasis; // offset 0x1D0, size 0xDC
    class basis_traits mLastBasis; // offset 0x2AC, size 0xDC
    class xSpringyF32 mMountY; // offset 0x388, size 0x18
    class xSpringyAngle mPitchOffset; // offset 0x3A0, size 0x18
    class xSpringyAngle mYawOffset; // offset 0x3B8, size 0x18
};
// total size: 0x18
class @class {
    // Members
    class xEnt * ent; // offset 0x0, size 0x4
    class xVec3 position; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float marginAngle; // offset 0x14, size 0x4
};
// total size: 0x10
class rest_config {
    // Members
    float dist; // offset 0x0, size 0x4
    float input_center_phi; // offset 0x4, size 0x4
    float yaw_offset; // offset 0x8, size 0x4
    float pitch_offset; // offset 0xC, size 0x4
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
// total size: 0x1C
class rayInfo {
    // Members
    bool hit; // offset 0x0, size 0x1
    float hitDist; // offset 0x4, size 0x4
    float nearestDist; // offset 0x8, size 0x4
    float offset; // offset 0xC, size 0x4
    class xVec3 endpoint; // offset 0x10, size 0xC
};
// total size: 0x44
class zCamPlayerTarget : public zCamTarget {
    // Members
    unsigned int playerIdx; // offset 0x34, size 0x4
    class xVec3 blended_loc; // offset 0x38, size 0xC
};
// total size: 0x10
class _OGbinary_poiEntity : public xOGEntity {};
// total size: 0x18
class _OGbinary_poiSchema : public Schema {};
// total size: 0x20
class zCamPool : public zCamPoolBase {};
// total size: 0x20
class zCamPoolBase {
    // Members
    class xCam * mCameras[6]; // offset 0x0, size 0x18
    int mNumCameras; // offset 0x18, size 0x4
    int mNextCamera; // offset 0x1C, size 0x4
};
// total size: 0x28
class zCamBinaryPOI : public xBase {
    // Members
    class xCamBinaryAsset * mAsset; // offset 0x20, size 0x4
};
// total size: 0x68
class xCamBinaryAsset : public xDynAsset {
    // Members
    unsigned short mVersion; // offset 0x20, size 0x2
    unsigned short mFlags; // offset 0x22, size 0x2
    unsigned long long mTargetID; // offset 0x28, size 0x8
    float mTargetMarginAngle; // offset 0x30, size 0x4
    float mTargetRadiusScale; // offset 0x34, size 0x4
    float mDistanceScale; // offset 0x38, size 0x4
    float mPhiOffset; // offset 0x3C, size 0x4
    float mYawOffset; // offset 0x40, size 0x4
    float mNearWallScale; // offset 0x44, size 0x4
    float mFarWallScale; // offset 0x48, size 0x4
    bool dofEnabled; // offset 0x4C, size 0x1
    float dofBlur; // offset 0x50, size 0x4
    float dofNearFocusPoint; // offset 0x54, size 0x4
    float dofNearFocusFalloff; // offset 0x58, size 0x4
    float dofFarFocusPoint; // offset 0x5C, size 0x4
    float dofFarFocusFalloff; // offset 0x60, size 0x4
};
// total size: 0xA0
class zCamChaseBlendValues {
    // Members
    class @class goal; // offset 0x0, size 0x94
    class @class collision; // offset 0x94, size 0x8
    class @class rest; // offset 0x9C, size 0x4
};
// total size: 0x94
class @class {
    // Members
    float follow_threshold_min; // offset 0x0, size 0x4
    float follow_threshold_max; // offset 0x4, size 0x4
    float chase_blend_min; // offset 0x8, size 0x4
    float phi_max; // offset 0xC, size 0x4
    class zcamChaseZoneBlendValues zone_slow; // offset 0x10, size 0x2C
    class zcamChaseZoneBlendValues zone_center; // offset 0x3C, size 0x2C
    class zcamChaseZoneBlendValues zone_fast; // offset 0x68, size 0x2C
};
// total size: 0x2C
class zcamChaseZoneBlendValues {
    // Members
    float speed; // offset 0x0, size 0x4
    float pitch_offset; // offset 0x4, size 0x4
    float dist; // offset 0x8, size 0x4
    float phi_look_min; // offset 0xC, size 0x4
    float phi_look_max; // offset 0x10, size 0x4
    float theta_look_min; // offset 0x14, size 0x4
    float theta_look_max; // offset 0x18, size 0x4
    float fov; // offset 0x1C, size 0x4
    float blur_scale; // offset 0x20, size 0x4
    float blur_factor; // offset 0x24, size 0x4
    float blur_zoom; // offset 0x28, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float castbackConeRadius; // offset 0x0, size 0x4
    float castbackConeRadiusScale; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float drift_speed; // offset 0x0, size 0x4
};
// total size: 0x2B8
class zCamChase : public zCamDriver {
    // Members
    class zTunnelCurve * tunnelCurve; // offset 0x2A4, size 0x4
    class zCamChaseBlendValues * chaseBlendValues; // offset 0x2A8, size 0x4
    class xVec3 targetAt; // offset 0x2AC, size 0xC
};
// total size: 0x100
class zTunnelCurve : public xBase {
    // Members
    class zTunnelCurveAsset * asset; // offset 0x20, size 0x4
    class xNurbs curve; // offset 0x24, size 0x4C
    class xQuat * beadDirections; // offset 0x70, size 0x4
    class xMat4x3 playerMat; // offset 0x74, size 0x40
    class xMat4x3 cameraMat; // offset 0xB4, size 0x40
    float prevPlayerU; // offset 0xF4, size 0x4
    float prevCamU; // offset 0xF8, size 0x4
    float playerDistToCurve; // offset 0xFC, size 0x4
};
// total size: 0x30
class zTunnelCurveAsset : public xBaseAsset {
    // Members
    class uid CurveID; // offset 0x10, size 0x8
    class __OrientationBeads__ OrientationBeads; // offset 0x18, size 0x8
    unsigned char flags; // offset 0x20, size 0x1
    unsigned short pad; // offset 0x22, size 0x2
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x8
class __OrientationBeads__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x3778
class zEvePlayer : public zCommonPlayer {
    // Members
    float flightSpeed; // offset 0x1454, size 0x4
    float leanBlend; // offset 0x1458, size 0x4
    float pitchBlend; // offset 0x145C, size 0x4
    float boostTimeRemaining; // offset 0x1460, size 0x4
    bool boostDoSpecialMove; // offset 0x1464, size 0x1
    class xQuat chevronOrientation; // offset 0x1468, size 0x10
    float chevronTurnTimeRemaining; // offset 0x1478, size 0x4
    float chevronInfluence; // offset 0x147C, size 0x4
    class xVec3 yawUpVectorBlend; // offset 0x1480, size 0xC
    class zFXScriptSpawnPt * spawnPtLightDamageElectricity; // offset 0x148C, size 0x4
    class zFXScriptSpawnPt * spawnPtLightDamageSparks; // offset 0x1490, size 0x4
    class zFXScriptSpawnPt * spawnPtHeavyDamage; // offset 0x1494, size 0x4
    class zFXScriptSpawnPt * spawnPtProximity; // offset 0x1498, size 0x4
    class zFXScriptSpawnPt * spawnPtAccelerate_Asset; // offset 0x149C, size 0x4
    class zFXScriptSpawnPt * spawnPtAccelerate; // offset 0x14A0, size 0x4
    class zFXScriptSpawnPt * spawnPtBrake_Asset; // offset 0x14A4, size 0x4
    class zFXScriptSpawnPt * spawnPtBrake; // offset 0x14A8, size 0x4
    class xVec3 spawnVFXOffset; // offset 0x14AC, size 0xC
    class xVec3 dpos; // offset 0x14B8, size 0xC
    float updateDelay; // offset 0x14C4, size 0x4
    class xBase * priorityBase; // offset 0x14C8, size 0x4
    class xVec3 priorityBasePos; // offset 0x14CC, size 0xC
    bool outOfBounds; // offset 0x14D8, size 0x1
    bool outOfBoundsFromTrigger; // offset 0x14D9, size 0x1
    class xQuat turnAroundAdjustQuat; // offset 0x14DC, size 0x10
    float retainDamageTimer; // offset 0x14EC, size 0x4
    class xBase * damageSurfaceObject; // offset 0x14F0, size 0x4
    class SurfaceGamePlay * damageSurface; // offset 0x14F4, size 0x4
    float damageSurfaceRate; // offset 0x14F8, size 0x4
    float damageSurfaceElapsedTime; // offset 0x14FC, size 0x4
    class xBase * lastDamageSurfaceObject; // offset 0x1500, size 0x4
    class SurfaceGamePlay * lastDamageSurface; // offset 0x1504, size 0x4
    float lastDamageSurfaceRate; // offset 0x1508, size 0x4
    class zLaser laser[16]; // offset 0x1510, size 0x1C00
    class zRuntimeEntityCreateInfo laserCI; // offset 0x3110, size 0x8
    class zRuntimeEntityCreateInfo laserUpgradedCI; // offset 0x3118, size 0x8
    class hkBaseObject * laserFilterList[1]; // offset 0x3120, size 0x4
    class zPlayerEveRigidBodyCollisionListener * pcollisionListenerDeath; // offset 0x3124, size 0x4
    bool wantEndScan; // offset 0x3128, size 0x1
    bool isCollectingScannable; // offset 0x3129, size 0x1
    bool isScanning; // offset 0x312A, size 0x1
    class xQuat orientation; // offset 0x312C, size 0x10
    class zTunnelCurve * tunnelCurve; // offset 0x313C, size 0x4
    class zPowerSurge powerSurge; // offset 0x3140, size 0xF8
    bool inPowerSurge; // offset 0x3238, size 0x1
    float poweSurgeCoolDownTime; // offset 0x323C, size 0x4
    class EveTweaks stdTweaks; // offset 0x3240, size 0xA0
    class EveTweaks openAreaTweaks; // offset 0x32E0, size 0xA0
    class EveTweaks tunnelAreaTweaks; // offset 0x3380, size 0xA0
    bool inOpenArea; // offset 0x3420, size 0x1
    float speedFraction; // offset 0x3424, size 0x4
    class zSoundWalleEngine engineSound; // offset 0x3428, size 0x5C
    int lastUsedPadMRI; // offset 0x3484, size 0x4
    class xVec3 bone_adjust; // offset 0x3488, size 0xC
    class zCamTail flyTailCam; // offset 0x3498, size 0x1B0
    bool inSpaceHub; // offset 0x3648, size 0x1
    class zUIImage * pPipperTarget; // offset 0x364C, size 0x4
    class zUIImage * pPipperCenter; // offset 0x3650, size 0x4
    float pipperReturnTimer; // offset 0x3654, size 0x4
    float pipperXPosBuf[3]; // offset 0x3658, size 0xC
    float pipperYPosBuf[3]; // offset 0x3664, size 0xC
    signed char pipperBufReadIndex; // offset 0x3670, size 0x1
    signed char pipperBufWriteIndex; // offset 0x3671, size 0x1
    bool autoReturnState; // offset 0x3672, size 0x1
    bool lastAutoReturnState; // offset 0x3673, size 0x1
    enum IRStatus pipperStatus; // offset 0x3674, size 0x4
    float boostVel; // offset 0x3678, size 0x4
    float hubYaw; // offset 0x367C, size 0x4
    float hubPitch; // offset 0x3680, size 0x4
    float hubRoll; // offset 0x3684, size 0x4
    float yawTurnSpeed; // offset 0x3688, size 0x4
    float pitchTurnSpeed; // offset 0x368C, size 0x4
    int newPitchDir; // offset 0x3690, size 0x4
    class zProjectileController LaserBasicParams; // offset 0x3694, size 0x40
    class zProjectileController LaserPowerUpCParams; // offset 0x36D4, size 0x40
    class zProjectileController LaserReflectParams; // offset 0x3714, size 0x40
    enum eProjectileType curLaserType; // offset 0x3754, size 0x4
    float laserDrawnTimer; // offset 0x3758, size 0x4
    float rapidFireTimer; // offset 0x375C, size 0x4
    float holdFireTimer; // offset 0x3760, size 0x4
    class zFXScriptSpawnPt * treadSpawnPtRt; // offset 0x3764, size 0x4
    class zFXScriptSpawnPt * treadSpawnPtLf; // offset 0x3768, size 0x4
    unsigned long long lastTreadFXScriptID; // offset 0x3770, size 0x8
};
// total size: 0xF8
class zPowerSurge {
    // Members
    class xEnt * owner; // offset 0x0, size 0x4
    class xVec3 originOffset; // offset 0x4, size 0xC
    class zFXScriptSpawnPt * spawnPtCharge; // offset 0x10, size 0x4
    class zFXScriptSpawnPt * spawnPtHold; // offset 0x14, size 0x4
    class zFXScriptSpawnPt * spawnPtDischarge; // offset 0x18, size 0x4
    bool started; // offset 0x1C, size 0x1
    bool discharged; // offset 0x1D, size 0x1
    float expansionSpeed; // offset 0x20, size 0x4
    float currentRadius; // offset 0x24, size 0x4
    float time; // offset 0x28, size 0x4
    int numChargedEnts; // offset 0x2C, size 0x4
    class xEnt * chargedEnts[50]; // offset 0x30, size 0xC8
};
// total size: 0xA0
class EveTweaks {
    // Members
    float WAIT_BEFORE_RETURN; // offset 0x0, size 0x4
    float AUTO_RETURN_THRESHOLD; // offset 0x4, size 0x4
    float PIPPER_TARGET_SPEED; // offset 0x8, size 0x4
    float PIPPER_CENTER_SPEED; // offset 0xC, size 0x4
    float AUTO_RETURN_STEP_X; // offset 0x10, size 0x4
    float AUTO_RETURN_STEP_Y; // offset 0x14, size 0x4
    float CENTER_PIPPER_LAG; // offset 0x18, size 0x4
    float CONTROLLER_DEADZONE; // offset 0x1C, size 0x4
    bool INVERT_DPAD; // offset 0x20, size 0x1
    bool LOCK_CAM_TO_RAIL; // offset 0x21, size 0x1
    float CURVE_ASSIST_AMOUNT; // offset 0x24, size 0x4
    float RADIUS; // offset 0x28, size 0x4
    float XCENTER; // offset 0x2C, size 0x4
    float YCENTER; // offset 0x30, size 0x4
    float MAX_BOOST_VEL; // offset 0x34, size 0x4
    float ACCEL_INTO_BOOST; // offset 0x38, size 0x4
    float DECEL_OUTOF_BOOST; // offset 0x3C, size 0x4
    float MIN_BRAKE_VEL; // offset 0x40, size 0x4
    float DECEL_INTO_BRAKE; // offset 0x44, size 0x4
    float ACCEL_OUTOF_BRAKE; // offset 0x48, size 0x4
    float MAX_FLIGHT_SPEED; // offset 0x4C, size 0x4
    float MIN_FLIGHT_SPEED; // offset 0x50, size 0x4
    float FORCED_SPEED; // offset 0x54, size 0x4
    float YAW_TURN_MAX_SPEED; // offset 0x58, size 0x4
    float YAW_TURN_MAX_SPEED_SLOW; // offset 0x5C, size 0x4
    float YAW_TURN_SPEED_THRESHOLD; // offset 0x60, size 0x4
    float YAW_TURN_ACCEL; // offset 0x64, size 0x4
    float PITCH_TURN_MAX_SPEED; // offset 0x68, size 0x4
    float PITCH_TURN_MAX_SPEED_SLOW; // offset 0x6C, size 0x4
    float PITCH_TURN_SPEED_THRESHOLD; // offset 0x70, size 0x4
    float PITCH_TURN_ACCEL; // offset 0x74, size 0x4
    float PITCH_ALLOWED_THRESHOLD; // offset 0x78, size 0x4
    float ROLL_TURN_MAX_SPEED; // offset 0x7C, size 0x4
    float MIN_MAX_ALTITUDE; // offset 0x80, size 0x4
    float COLLISION_DEFLECTION_SPEED; // offset 0x84, size 0x4
    float AUTO_LEVELING_SPEED; // offset 0x88, size 0x4
    float RAPID_FIRE_DELAY; // offset 0x8C, size 0x4
    float HOLD_FIRE_DELAY; // offset 0x90, size 0x4
    float LASER_DRAWN_TIME; // offset 0x94, size 0x4
    float SCAN_SPEED; // offset 0x98, size 0x4
    float CONTRAIL_VISIBLE_THRESHOLD; // offset 0x9C, size 0x4
};
// total size: 0x1B0
class zCamTail : public xCam {
    // Members
    float collisionFrac; // offset 0x138, size 0x4
    float tailToFollowBlend; // offset 0x13C, size 0x4
    class xVec3 prevFollowPos; // offset 0x140, size 0xC
    float smoothSpeed; // offset 0x14C, size 0x4
    float atOffset; // offset 0x150, size 0x4
    float upOffset; // offset 0x154, size 0x4
    float poleDist; // offset 0x158, size 0x4
    class zTunnelCurve * tunnelCurve; // offset 0x15C, size 0x4
    class xMat4x3 railCameraBlend; // offset 0x160, size 0x40
    float blurFactorBlend; // offset 0x1A0, size 0x4
    float blurZoomBlend; // offset 0x1A4, size 0x4
    float blurScaleBlend; // offset 0x1A8, size 0x4
    class xEnt * driver; // offset 0x1AC, size 0x4
};
// total size: 0x1
class zCamRayHelper {};
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
// total size: 0x50
class Follower {
    // Members
    bool mValidPlayerPathPos; // offset 0x0, size 0x1
    class zCameraCurve * mCurves; // offset 0x4, size 0x4
    class BeadInfo mInfo; // offset 0x8, size 0x48
};
// total size: 0xD8
class zCameraCurve : public xBase {
    // Members
    class zCameraCurveAsset * mAsset; // offset 0x20, size 0x4
    class xNurbs mCurve[2]; // offset 0x24, size 0x98
    float mCurveLength[2]; // offset 0xBC, size 0x8
    float mRenderIncU[2]; // offset 0xC4, size 0x8
    class zCamPoolBase * mCamPool; // offset 0xCC, size 0x4
    class xCam * mCamera; // offset 0xD0, size 0x4
};
// total size: 0x70
class zCameraCurveAsset : public CurveCamera {};
// total size: 0x48
class BeadInfo {
    // Members
    int mBeadIndex; // offset 0x0, size 0x4
    float mBeadIndexFrac; // offset 0x4, size 0x4
    float mCurveU[2]; // offset 0x8, size 0x8
    class xVec3 mCurvePos[2]; // offset 0x10, size 0x18
    float mDistanceScale; // offset 0x28, size 0x4
    float mPitchOffset; // offset 0x2C, size 0x4
    float mTargetRadius; // offset 0x30, size 0x4
    float mTargetMarginAngle; // offset 0x34, size 0x4
    float mLeadOffset; // offset 0x38, size 0x4
    float mYOffset; // offset 0x3C, size 0x4
    float mNearWallScale; // offset 0x40, size 0x4
    float mFarWallScale; // offset 0x44, size 0x4
};
// total size: 0x20
class CameraBeadProperty {
    // Members
    float LeadOffset; // offset 0x0, size 0x4
    float NearWallScale; // offset 0x4, size 0x4
    float FarWallScale; // offset 0x8, size 0x4
    float DistanceScale; // offset 0xC, size 0x4
    float PitchOffset; // offset 0x10, size 0x4
    float YOffset; // offset 0x14, size 0x4
    float TargetRadius; // offset 0x18, size 0x4
    float TargetMarginAngle; // offset 0x1C, size 0x4
};
// total size: 0x80
class zCamSplineCommonMix {
    // Members
    class zCameraCurve * mCurveInfo; // offset 0x4, size 0x4
    class Follower mCurveFollower; // offset 0x8, size 0x50
    class xSpringyVec3 mCameraPathPosSprung; // offset 0x58, size 0x28
};
enum eCamCurve {
    eCamCurve_Player = 0,
    eCamCurve_Camera = 1,
    eCamCurve_NumCurve = 2,
};
// total size: 0x10
class _OGCurveCameraEntity : public xOGEntity {};
// total size: 0x18
class _OGCurveCameraSchema : public Schema {};
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
// total size: 0x10
class _OGFlythroughEntity : public xOGEntity {};
// total size: 0x18
class _OGFlythroughSchema : public Schema {};
// total size: 0xB8
class zCameraFly : public xBase, public IHackCameraFlyCallbackSink {
    // Members
    class Flythrough * casset; // offset 0x24, size 0x4
    class CameraFlyBlobEntity * ngFly; // offset 0x28, size 0x4
    class zSoundAsset assetSound; // offset 0x2C, size 0x74
    class xVec3 gameCamPos; // offset 0xA0, size 0xC
    bool skippable; // offset 0xAC, size 0x1
    int viewportIndex; // offset 0xB0, size 0x4
};
// total size: 0x4
class IHackCameraFlyCallbackSink {};
// total size: 0x40
class Flythrough : public xDynAsset {
    // Members
    class uid Flythrough_asset; // offset 0x20, size 0x8
    class SoundBankSource source; // offset 0x28, size 0xC
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x34
class CameraFlyBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class CameraFlyAsset * asset; // offset 0x14, size 0x4
    int assetSize; // offset 0x18, size 0x4
    class IHackCameraFlyCallbackSink * cbSink; // offset 0x1C, size 0x4
    float time; // offset 0x20, size 0x4
    bool playing; // offset 0x24, size 0x1
    class Vector3 xform; // offset 0x28, size 0xC
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
// total size: 0x10
class _OGCamera_TweakEntity : public xOGEntity {};
// total size: 0x18
class _OGCamera_TweakSchema : public Schema {};
// total size: 0x20
class zCamTweak {
    // Members
    unsigned long long owner; // offset 0x0, size 0x8
    float priority; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
    float pitch; // offset 0x10, size 0x4
    float distMult; // offset 0x14, size 0x4
    float pivotHeight; // offset 0x18, size 0x4
    float FOV; // offset 0x1C, size 0x4
};
// total size: 0x28
class zCameraTweak : public xBase {
    // Members
    class CameraTweak_asset * casset; // offset 0x20, size 0x4
};
// total size: 0x38
class CameraTweak_asset : public xDynAsset {
    // Members
    int priority; // offset 0x20, size 0x4
    float time; // offset 0x24, size 0x4
    float pitch_adjust; // offset 0x28, size 0x4
    float dist_adjust; // offset 0x2C, size 0x4
    float pivot_height_adjust; // offset 0x30, size 0x4
    float fov_adjust; // offset 0x34, size 0x4
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
// total size: 0x10
class _OGCameraEntity : public xOGEntity {};
// total size: 0x18
class _OGCameraSchema : public Schema {};
// total size: 0x10
class _OGcamera_param_assetEntity : public xOGEntity {};
// total size: 0x18
class _OGcamera_param_assetSchema : public Schema {};
// total size: 0x208
class zCamWidget : public xCam {
    // Members
    bool transitioning; // offset 0x138, size 0x1
    bool restore_original; // offset 0x139, size 0x1
    class xCamAsset * asset; // offset 0x13C, size 0x4
    float time; // offset 0x140, size 0x4
    float end_time; // offset 0x144, size 0x4
    float start_fov; // offset 0x148, size 0x4
    float end_fov; // offset 0x14C, size 0x4
    class xVec3 start_loc; // offset 0x150, size 0xC
    class xQuat start_dir; // offset 0x15C, size 0x10
    class xQuat end_dir; // offset 0x16C, size 0x10
    float last_s; // offset 0x17C, size 0x4
    class xEnt * target_ent; // offset 0x180, size 0x4
    class xMat4x3 end_mat; // offset 0x184, size 0x40
    class xMat4x3 original_mat; // offset 0x1C4, size 0x40
};
// total size: 0x40
class zStaticCameraAsset : public xDynAsset {
    // Members
    float x; // offset 0x20, size 0x4
    float y; // offset 0x24, size 0x4
    float z; // offset 0x28, size 0x4
    float blend_time; // offset 0x2C, size 0x4
    float fovfilter_period; // offset 0x30, size 0x4
    float start_fov; // offset 0x34, size 0x4
    float end_fov; // offset 0x38, size 0x4
};
// total size: 0x8
class EventActionEnt : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x10
class _OGMG2PCameraEntity : public xOGEntity {};
// total size: 0x18
class _OGMG2PCameraSchema : public Schema {};
// total size: 0x28
class zMG2PCamAsset : public xBaseAsset {
    // Members
    class xVec3 pos; // offset 0x10, size 0xC
    float FOV; // offset 0x1C, size 0x4
    float Radius; // offset 0x20, size 0x4
};
// total size: 0x4D0
class zCamPlayer : public xCam {
    // Members
    class target_traits target_goal; // offset 0x138, size 0x30
    class target_traits target; // offset 0x168, size 0x30
    class @class input; // offset 0x198, size 0x14
    class @class blend_vel; // offset 0x1AC, size 0x30
    class @class vel_drift; // offset 0x1DC, size 0xC
    class @class zone; // offset 0x1E8, size 0x6C
    class @class aggression; // offset 0x254, size 0xC
    class @class secondary; // offset 0x260, size 0x18
    class @class start_zone; // offset 0x278, size 0x18
    class basis_traits basis; // offset 0x290, size 0x24
    class basis_traits last_basis; // offset 0x2B4, size 0x24
    class basis_traits result; // offset 0x2D8, size 0x24
    class basis_traits last_result; // offset 0x2FC, size 0x24
    float pitch_rest; // offset 0x320, size 0x4
    float pitch_clamp; // offset 0x324, size 0x4
    float result_pitch; // offset 0x328, size 0x4
    class xVec3 look_loc; // offset 0x32C, size 0xC
    class xVec3 losbar_loc; // offset 0x338, size 0xC
    class xVec3 last_losbar_loc; // offset 0x344, size 0xC
    float losbar_rail_yoffset; // offset 0x350, size 0x4
    float last_losbar_rail_yoffset; // offset 0x354, size 0x4
    float dist_extend; // offset 0x358, size 0x4
    float dist_extend_vel; // offset 0x35C, size 0x4
    float speed_input_theta; // offset 0x360, size 0x4
    float rest_dist; // offset 0x364, size 0x4
    float rest_dist_vel; // offset 0x368, size 0x4
    float rest_phi; // offset 0x36C, size 0x4
    float rest_phi_vel; // offset 0x370, size 0x4
    float drest_phi; // offset 0x374, size 0x4
    float look_pitch; // offset 0x378, size 0x4
    class xCamSupportPath path; // offset 0x37C, size 0xAC
    class xCamSupportLOSBar losbar; // offset 0x428, size 0x38
    float floor_height; // offset 0x460, size 0x4
    float mount_height; // offset 0x464, size 0x4
    float mount_offset; // offset 0x468, size 0x4
    float last_mount_offset; // offset 0x46C, size 0x4
    bool grounded; // offset 0x470, size 0x1
    bool was_colliding; // offset 0x471, size 0x1
    bool first_frame; // offset 0x472, size 0x1
    class xMat4x3 snap_mat; // offset 0x474, size 0x40
    float pivot_height; // offset 0x4B4, size 0x4
    float pitch_offset; // offset 0x4B8, size 0x4
    float look_xz; // offset 0x4BC, size 0x4
    float defaultFOV; // offset 0x4C0, size 0x4
    int rest_owner; // offset 0x4C4, size 0x4
    class @class blend_speed; // offset 0x4C8, size 0x8
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
    class xVec3 center; // offset 0x4, size 0xC
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
// total size: 0x260
class zCamSpline : public xCam, public zCamSplineCommonMix {
    // Members
    float mTargetyOffset; // offset 0x1B8, size 0x4
    class xSpringyVec3 mSprungTargetPos; // offset 0x1BC, size 0x28
    class xSpringyF32 mMountY; // offset 0x1E4, size 0x18
    class xSpringyF32 mXOffset; // offset 0x1FC, size 0x18
    class xSpringyF32 mYOffset; // offset 0x214, size 0x18
    class xSpringyAngle mYaw; // offset 0x22C, size 0x18
    class xSpringyAngle mPitch; // offset 0x244, size 0x18
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
// total size: 0x30
class zNearHitSphereCollector : public hkpCdPointCollector {
    // Members
    float minDistance; // offset 0x8, size 0x4
    bool hit; // offset 0xC, size 0x1
    float closestDistance; // offset 0x10, size 0x4
    class hkVector4 hitNormal; // offset 0x20, size 0x10
};
// total size: 0x4D8
class zCamTargetSpline : public zCam2Player, public zCamSplineCommonMix {
    // Members
    class xCamSpatialInfo oldSpatial; // offset 0x450, size 0x30
    class xMat4x3 oldMat; // offset 0x480, size 0x40
    class xSpringyF32 mYOffset; // offset 0x4C0, size 0x18
};
// total size: 0x10
class _OGCatapultEntity : public xOGEntity {};
// total size: 0x18
class _OGCatapultSchema : public Schema {};
// total size: 0x70
class zCatapult : public xBase {
    // Members
    class Catapult * asset; // offset 0x20, size 0x4
    class xEnt * drivenBy; // offset 0x24, size 0x4
    float targetDistance; // offset 0x28, size 0x4
    float targetHeight; // offset 0x2C, size 0x4
    float targetDrift; // offset 0x30, size 0x4
    float arcHeight; // offset 0x34, size 0x4
    float throwTime; // offset 0x38, size 0x4
    float qA; // offset 0x3C, size 0x4
    float qB; // offset 0x40, size 0x4
    class xVec3 startPoint; // offset 0x44, size 0xC
    class xVec3 horizontalDisplacement; // offset 0x50, size 0xC
    class hkpRigidBody * body; // offset 0x5C, size 0x4
    class zCatapultCollisionListener * collisionListener; // offset 0x60, size 0x4
    float airTime; // offset 0x64, size 0x4
    float totalTime; // offset 0x68, size 0x4
};
// total size: 0x48
class Catapult : public xDynAsset {
    // Members
    class uid DrivenBy; // offset 0x20, size 0x8
    float TargetDistance; // offset 0x28, size 0x4
    float TargetHeight; // offset 0x2C, size 0x4
    float TargetDrift; // offset 0x30, size 0x4
    float ArcHeight; // offset 0x34, size 0x4
    float ThrowTime; // offset 0x38, size 0x4
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x8
class zCatapultCollisionListener : public hkpCollisionListener {
    // Members
    class zCatapult * owner; // offset 0x4, size 0x4
};
// total size: 0x10
class EventActionDrivenBy : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
    class uid paramWidgetAssetID; // offset 0x8, size 0x8
};
// total size: 0x10
class _OGGeneric_Use_PropertyEntity : public xOGEntity {};
// total size: 0x18
class _OGGeneric_Use_PropertySchema : public Schema {};
// total size: 0x10
class _OGUse_Property_AttractEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_AttractSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_RepelEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_RepelSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_SwipeEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_SwipeSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_HideEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_HideSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_GlideEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_GlideSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_RollEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_RollSchema : public Schema {};
// total size: 0x10
class _OGUse_Property_BombEntity : public xOGEntity {};
// total size: 0x18
class _OGUse_Property_BombSchema : public Schema {};
// total size: 0x10
class _OGCarryableTypeEntity : public xOGEntity {};
// total size: 0x18
class _OGCarryableTypeSchema : public Schema {};
// total size: 0x10
class _OGCharacterAssetsEntity : public xOGEntity {};
// total size: 0x18
class _OGCharacterAssetsSchema : public Schema {};
// total size: 0x2
class zWalleCheats {
    // Members
    bool eveSuperLaser : 1; // offset 0x0, size 0x1, bit offset 0
    bool walleLaser : 1; // offset 0x0, size 0x1, bit offset 1
    bool walleAnyCube : 1; // offset 0x0, size 0x1, bit offset 2
    bool wallEveLaser : 1; // offset 0x0, size 0x1, bit offset 3
    bool wallEveAnyCube : 1; // offset 0x0, size 0x1, bit offset 4
    bool walleSuperLaser : 1; // offset 0x0, size 0x1, bit offset 5
    bool unlimitedHealth : 1; // offset 0x0, size 0x1, bit offset 6
    bool unlock1PLevels : 1; // offset 0x0, size 0x1, bit offset 7
    bool unlockHolidayCostumes : 1; // offset 0x1, size 0x1, bit offset 0
    bool unlockMultiplayerCostumes : 1; // offset 0x1, size 0x1, bit offset 1
    bool unlockMultiplayerMaps : 1; // offset 0x1, size 0x1, bit offset 2
    bool unlockBonusMaterials : 1; // offset 0x1, size 0x1, bit offset 3
    bool giveAllUnlockables : 1; // offset 0x1, size 0x1, bit offset 4
};
// total size: 0x10
class _OGCheckpointEntity : public xOGEntity {};
// total size: 0x18
class _OGCheckpointSchema : public Schema {};
// total size: 0x90
class zCheckpoint : private xBase {
    // Members
    class zCheckpointAsset * asset; // offset 0x20, size 0x4
    class zTrigger * trigger; // offset 0x24, size 0x4
    class zDirection * * positions; // offset 0x28, size 0x4
    class xLinkAsset triggerLink; // offset 0x30, size 0x30
    class RuntimeLinkAsset triggerLinkNewAsset; // offset 0x60, size 0x8
    class LinkAssetBaseNew triggerLinkNew; // offset 0x68, size 0x28
};
// total size: 0x50
class zCheckpointAsset : public xDynAsset {
    // Members
    unsigned int type; // offset 0x20, size 0x4
    class uid triggerID; // offset 0x28, size 0x8
    class uid scriptID; // offset 0x30, size 0x8
    class uid cameraID; // offset 0x38, size 0x8
    class __Positions__ Positions; // offset 0x40, size 0x8
    class LinkAsset EventLinksNew; // offset 0x48, size 0x8
};
// total size: 0x8
class __Positions__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x40
class zDirection : public xBase {
    // Members
    class zDirectionAsset * asset; // offset 0x20, size 0x4
    class vec3 location; // offset 0x24, size 0xC
    class Rotation3 rotation; // offset 0x30, size 0xC
};
// total size: 0x30
class zDirectionAsset : public xBaseAsset {
    // Members
    class vec3 location; // offset 0x10, size 0xC
    class Rotation3 direction; // offset 0x1C, size 0xC
    class LinkAsset EventLinksNew; // offset 0x28, size 0x8
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
// total size: 0x10
class _OGCinematicPlayerEntity : public xOGEntity {};
// total size: 0x18
class _OGCinematicPlayerSchema : public Schema {};
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
// total size: 0x200
class zCinematic : public xBase, public IHackCinematicCallbackSink {
    // Members
    class zSoundAsset assetSound; // offset 0x24, size 0x74
    class zCinematicAsset * asset; // offset 0x98, size 0x4
    class CinematicBlobEntity * ngCinematic; // offset 0x9C, size 0x4
    class xBase * caller; // offset 0xA0, size 0x4
    bool skippable; // offset 0xA4, size 0x1
    float totalTime; // offset 0xA8, size 0x4
    float runningTime; // offset 0xAC, size 0x4
    int runningFrame; // offset 0xB0, size 0x4
    bool fadingAtEnd; // offset 0xB4, size 0x1
    class xVec3 gameCamPos; // offset 0xB8, size 0xC
    enum eCinematicStatus status; // offset 0xC4, size 0x4
    int tryNumber; // offset 0xC8, size 0x4
    int soundLoadingWaitCounter; // offset 0xCC, size 0x4
    class zCinematicSyncTable * cinematicSyncTable; // offset 0xD0, size 0x4
    class zPIDController soundVideoSyncPID; // offset 0xD4, size 0x94
    class zPIDController soundGameTimeSyncPID; // offset 0x168, size 0x94
    float gameTimeMultiplier; // offset 0x1FC, size 0x4
};
// total size: 0x4
class IHackCinematicCallbackSink {};
// total size: 0x30
class zCinematicAsset : public xBaseAsset {
    // Members
    class uid CinematicNG; // offset 0x10, size 0x8
    class SoundBankSource source; // offset 0x18, size 0xC
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
};
// total size: 0x6C
class CinematicBlobEntity : public BlobEntity, public ICinematicElement {
    // Members
    class IHackCinematicCallbackSink * cbSink; // offset 0x14, size 0x4
    class Scene * scene; // offset 0x18, size 0x4
    class ModelInstanceTableEntry * instanceTable; // offset 0x1C, size 0x4
    class AnimTableEntry * animTable; // offset 0x20, size 0x4
    class EntityHandle camHandle; // offset 0x24, size 0x14
    class CameraFlyBlobEntity * camera; // offset 0x38, size 0x4
    unsigned char * animMem; // offset 0x3C, size 0x4
    unsigned int animMemSize; // offset 0x40, size 0x4
    unsigned char * interpMem; // offset 0x44, size 0x4
    unsigned int interpMemSize; // offset 0x48, size 0x4
    float timeMultiplier; // offset 0x4C, size 0x4
    float currentCinematicTime; // offset 0x50, size 0x4
    class CinematicAsset * asset; // offset 0x54, size 0x4
    int assetSize; // offset 0x58, size 0x4
    class CinematicChunkHeader * activeChunk; // offset 0x5C, size 0x4
    unsigned int nextChunkIndex; // offset 0x60, size 0x4
    enum CinematicState state; // offset 0x64, size 0x4
    float time; // offset 0x68, size 0x4
};
// total size: 0x9C
class ModelInstanceTableEntry {
    // Members
    class ModelInstanceArticle modelInstance; // offset 0x0, size 0x90
    unsigned char * modelMem; // offset 0x90, size 0x4
    int modelMemSize; // offset 0x94, size 0x4
    bool inLastUpdate; // offset 0x98, size 0x1
    bool inCurrentUpdate; // offset 0x99, size 0x1
};
// total size: 0xC
class AnimTableEntry {
    // Members
    class EntityHandle * animHandle; // offset 0x0, size 0x4
    class ComboAnimBlobEntity * animEntity; // offset 0x4, size 0x4
    class Interpolator * interpolator; // offset 0x8, size 0x4
};
// total size: 0x3C
class ComboAnimBlobEntity : public AnimBlobEntity {
    // Members
    class ComboAnimBlobAssetV2 * v2data; // offset 0x10, size 0x4
    int memSize; // offset 0x14, size 0x4
    class ComboStream comboStream; // offset 0x18, size 0x24
};
// total size: 0x10
class AnimBlobEntity : public BlobEntity {};
// total size: 0x24
class ComboStream : public Stream {
    // Members
    class ComboAnimBlobAssetV2 * v2data; // offset 0x20, size 0x4
};
// total size: 0x20
class Stream {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    class Interpolator * (* fpCreateInterpolator)(class Stream * stream, void * buffer, int bufferSize); // offset 0x4, size 0x4
    void (* fpEvaluateWrite)(class Stream * stream, void * context, int contextSize, void * out, class Interpolator * interpolator); // offset 0x8, size 0x4
    void (* fpEvaluateBlend)(class Stream * stream, void * context, int contextSize, void * out, class Interpolator * interpolator, float outFactor, float inFactor); // offset 0xC, size 0x4
    void * evaluateContext; // offset 0x10, size 0x4
    int evaluateContextSize; // offset 0x14, size 0x4
    float maxTime; // offset 0x18, size 0x4
    int interpolatorSize; // offset 0x1C, size 0x4
};
// total size: 0x4
class Interpolator {
    // Members
    float time; // offset 0x0, size 0x4
};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
// total size: 0x18
class CinematicAsset {
    // Members
    unsigned int numModels; // offset 0x0, size 0x4
    unsigned int numChunks; // offset 0x4, size 0x4
    class Pointer32 dataBlock; // offset 0x8, size 0x4
    class Pointer32 chunkTOC; // offset 0xC, size 0x4
    class ModelTableEntry modelTable[1]; // offset 0x10, size 0x8
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
    CIN_PLAYING = 1,
    CIN_PAUSED = 2,
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
// total size: 0x98
class zLocator : public xBase {
    // Members
    int currentTimeRange; // offset 0x20, size 0x4
    float currentTimer; // offset 0x24, size 0x4
    class Locator * asset; // offset 0x28, size 0x4
    class zFXScriptSpawnPt * spawnPt; // offset 0x2C, size 0x4
    class zFXScriptSpawnPt * spawnPtAsset; // offset 0x30, size 0x4
    class ModelInstanceArticle * modelArticle; // offset 0x34, size 0x4
    class xMat4x3 mat; // offset 0x38, size 0x40
    class xVec3 oldPos; // offset 0x78, size 0xC
    class xVec3 dPos; // offset 0x84, size 0xC
    class Matrix43 * mMat; // offset 0x90, size 0x4
    bool hasSkeleton; // offset 0x94, size 0x1
    bool active; // offset 0x95, size 0x1
};
// total size: 0x60
class Locator : public xBaseAsset {
    // Members
    class Pointer32 name; // offset 0x10, size 0x4
    class uid clipID; // offset 0x18, size 0x8
    int model; // offset 0x20, size 0x4
    int bone; // offset 0x24, size 0x4
    class vec3 pos; // offset 0x28, size 0xC
    class vec3 offset; // offset 0x34, size 0xC
    class Rotation3 orientation; // offset 0x40, size 0xC
    class __startTime__ startTime; // offset 0x4C, size 0x8
    class __stopTime__ stopTime; // offset 0x54, size 0x8
};
// total size: 0x8
class __startTime__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __stopTime__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
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
// total size: 0x13C
class zCombat {
    // Members
    class xHierarchyBound bounds; // offset 0x0, size 0x18
    unsigned int lastBoundUpdateTime; // offset 0x18, size 0x4
    float currentHitPoints; // offset 0x1C, size 0x4
    float maximumHitPoints; // offset 0x20, size 0x4
    unsigned short stateTableSize; // offset 0x24, size 0x2
    class zCombatAttack * stateTable; // offset 0x28, size 0x4
    class xAnimState * animationState; // offset 0x2C, size 0x4
    class zCombatAttack * runningAttack; // offset 0x30, size 0x4
    float runningAttackTimer; // offset 0x34, size 0x4
    class xEnt * lastNPCDamaged; // offset 0x38, size 0x4
    bool disableMovement; // offset 0x3C, size 0x1
    bool runningEffect; // offset 0x3D, size 0x1
    bool runningBlur; // offset 0x3E, size 0x1
    bool hitting; // offset 0x3F, size 0x1
    bool hitEnv; // offset 0x40, size 0x1
    bool hitObject; // offset 0x41, size 0x1
    bool forceReset; // offset 0x42, size 0x1
    unsigned char hitObjectCount; // offset 0x43, size 0x1
    class xEnt * hitObjects[24]; // offset 0x44, size 0x60
    float currentDamage; // offset 0xA4, size 0x4
    float lastHitDamage; // offset 0xA8, size 0x4
    enum zHitSource lastHitSource; // offset 0xAC, size 0x4
    enum zHitTarget lastHitTarget; // offset 0xB0, size 0x4
    class sphereInfo location[4]; // offset 0xB4, size 0x80
    int (* envCollisionCB)(class xEnt * ent, class xSweptSphere * sphere, class xEnv * env); // offset 0x134, size 0x4
    unsigned int effectParam; // offset 0x138, size 0x4
};
// total size: 0xB8
class zCombatAttack {
    // Members
    unsigned int state; // offset 0x0, size 0x4
    float attackStart; // offset 0x4, size 0x4
    float attackEnd; // offset 0x8, size 0x4
    float attackRadius; // offset 0xC, size 0x4
    class hitBoneInfo hitBones[4]; // offset 0x10, size 0x40
    short damage; // offset 0x50, size 0x2
    unsigned short source; // offset 0x52, size 0x2
    float velocityUp; // offset 0x54, size 0x4
    float velocityAway; // offset 0x58, size 0x4
    unsigned int flags; // offset 0x5C, size 0x4
    unsigned short effect; // offset 0x60, size 0x2
    unsigned short hitEffect; // offset 0x62, size 0x2
    float effectStart; // offset 0x64, size 0x4
    float effectEnd; // offset 0x68, size 0x4
    class RumbleEffectParams rumbleEffect; // offset 0x70, size 0x10
    class ShrapnelEffectParams shrapnelEffect; // offset 0x80, size 0x10
    class BlurEffectParams blurEffect; // offset 0x90, size 0x18
    class FlashEffectParams flashEffect; // offset 0xA8, size 0x8
    void (* hitCB)(class xEnt * hitter, class zCombatAttack * runningAttack, class xEnt * hittee, class xVec3 * hit_loc, class xVec3 * hit_norm); // offset 0xB0, size 0x4
};
// total size: 0x10
class hitBoneInfo {
    // Members
    unsigned short bone; // offset 0x0, size 0x2
    class xVec3 boneOffset; // offset 0x4, size 0xC
};
// total size: 0x10
class RumbleEffectParams {
    // Members
    float startTime; // offset 0x0, size 0x4
    unsigned long long emitterID; // offset 0x8, size 0x8
};
// total size: 0x10
class ShrapnelEffectParams {
    // Members
    unsigned long long id; // offset 0x0, size 0x8
    class ShrapnelAssetDef * asset; // offset 0x8, size 0x4
    float startTime; // offset 0xC, size 0x4
};
// total size: 0x28
class ShrapnelAssetDef : public xDynAsset {
    // Members
    class __fragList__ fragList; // offset 0x20, size 0x8
};
// total size: 0x8
class __fragList__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x18
class BlurEffectParams {
    // Members
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float life; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
    float fadeInTime; // offset 0x10, size 0x4
    float fadeOutTime; // offset 0x14, size 0x4
};
// total size: 0x8
class FlashEffectParams {
    // Members
    short alpha; // offset 0x0, size 0x2
    float time; // offset 0x4, size 0x4
};
// total size: 0x20
class sphereInfo {
    // Members
    class xSphere sphere; // offset 0x0, size 0x10
    class xSphere previousSphere; // offset 0x10, size 0x10
};
// total size: 0x28
class effect : public emitterBase {};
// total size: 0x38
class zCombatDamageInfo {
    // Members
    int flags; // offset 0x0, size 0x4
    class xBase * from; // offset 0x4, size 0x4
    float damage; // offset 0x8, size 0x4
    enum zHitSource source; // offset 0xC, size 0x4
    enum zHitTarget target; // offset 0x10, size 0x4
    class xVec3 knockback; // offset 0x14, size 0xC
    class xVec3 hitLocation; // offset 0x20, size 0xC
    class xVec3 direction; // offset 0x2C, size 0xC
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
// total size: 0x70
class compositeEffect : public emitterBase {
    // Members
    class effectAsset asset; // offset 0x28, size 0x48
};
// total size: 0x24
class zPlayerTriggered : public zPlayerAction {
    // Members
    class xAnimState * triggeredAnims[4]; // offset 0xC, size 0x10
    class xBase * triggeredAnimSender; // offset 0x1C, size 0x4
    int triggeredAnimIndex; // offset 0x20, size 0x4
};
// total size: 0x90
class zNPCTrapProjectile : public zNPCBase {
    // Members
    class zRuntimeEntityCreateInfo laserCI; // offset 0x7C, size 0x8
    int numTargets; // offset 0x84, size 0x4
    int health; // offset 0x88, size 0x4
};
// total size: 0x88
class zNPCSteward : public zNPCBase {
    // Members
    class zRuntimeEntityCreateInfo laserCI; // offset 0x7C, size 0x8
};
// total size: 0xC
class xHierarchyBoundInitData {
    // Members
    signed char bone; // offset 0x0, size 0x1
    float radius; // offset 0x4, size 0x4
    unsigned short userData; // offset 0x8, size 0x2
};
// total size: 0x30
class zCommonPlayerActionPushPull : public zCommonPlayerAction {
    // Members
    class zPushableObject * object; // offset 0xC, size 0x4
    class zPushableObject * nextObject; // offset 0x10, size 0x4
    int held; // offset 0x14, size 0x4
    unsigned char state; // offset 0x18, size 0x1
    class @class __anon; // offset 0x1C, size 0xC
    class xVec3 blendVel; // offset 0x1C, size 0xC
    float distance; // offset 0x1C, size 0x4
    float targetAngle; // offset 0x28, size 0x4
    float speed; // offset 0x2C, size 0x4
};
// total size: 0xC
class zCommonPlayerAction : public zPlayerAction {};
// total size: 0xD0
class zPushableObject : public xEnt {
    // Members
    class Pushable_Object * asset; // offset 0xB8, size 0x4
    float speed; // offset 0xBC, size 0x4
    class xVec3 dir; // offset 0xC0, size 0xC
};
// total size: 0x80
class Pushable_Object : public xDynAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x20, size 0x40
    int X_Position; // offset 0x60, size 0x4
    float Y_Position; // offset 0x64, size 0x4
    int Z_Position; // offset 0x68, size 0x4
    class LinkAsset EventLinksNew; // offset 0x6C, size 0x8
};
// total size: 0xC
class @class {
    // Members
    class xVec3 blendVel; // offset 0x0, size 0xC
    float distance; // offset 0x0, size 0x4
};
// total size: 0x18
class zPlayerIdle : public zCommonPlayerAction {
    // Members
    int previousExtraIdle; // offset 0xC, size 0x4
    int nextExtraIdle; // offset 0x10, size 0x4
    class zFXScriptSpawnPt * slipSpawnPt; // offset 0x14, size 0x4
};
// total size: 0x14
class zPlayerFall : public zCommonPlayerAction {
    // Members
    float fallYPos; // offset 0xC, size 0x4
    int beginFall; // offset 0x10, size 0x4
};
// total size: 0xC
class zPlayerSkidStop : public zCommonPlayerAction {};
// total size: 0xC
class zPlayerWalkStart : public zCommonPlayerAction {};
// total size: 0xC
class zPlayerWalk : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerRun : public zCommonPlayerAction {
    // Members
    float runTimer; // offset 0xC, size 0x4
};
// total size: 0x10
class zPlayerSlip : public zCommonPlayerAction {
    // Members
    int slipping; // offset 0xC, size 0x4
};
// total size: 0x1C
class zPlayerJump : public zCommonPlayerAction {
    // Members
    bool jumped; // offset 0xC, size 0x1
    float time; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float gustTime; // offset 0x18, size 0x4
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
// total size: 0x30
class zPlayerBoardLaunch : public zCommonPlayerAction {
    // Members
    bool faceVel; // offset 0xC, size 0x1
    class xVec3 launchVelocity; // offset 0x10, size 0xC
    class xVec3 launchVelocityApplied; // offset 0x1C, size 0xC
    float fadeOutTimer; // offset 0x28, size 0x4
    float fadeOutTime; // offset 0x2C, size 0x4
};
// total size: 0x10
class zPlayerLand : public zCommonPlayerAction {
    // Members
    unsigned int landHint; // offset 0xC, size 0x4
};
// total size: 0x4
class EventNotifyTriggeredAnimDone : public EventNotifyNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0x28
class zPlayerDodge : public zPlayerAction {
    // Members
    enum DodgeState dodgeState; // offset 0xC, size 0x4
    enum DodgeDir dodgeDir; // offset 0x10, size 0x4
    float dodgeDRot; // offset 0x14, size 0x4
    bool dodgeBlurring; // offset 0x18, size 0x1
    float dodgeRollVelocity; // offset 0x1C, size 0x4
    float dodgeRunVelocity; // offset 0x20, size 0x4
    float dodgeTimer; // offset 0x24, size 0x4
};
enum DodgeState {
    DODGE_NONE = 0,
    DODGE_START = 1,
    DODGE_EXECUTE = 2,
};
enum DodgeDir {
    DODGE_FRONT = 0,
    DODGE_LEFT = 1,
    DODGE_BACK = 2,
    DODGE_RIGHT = 3,
};
// total size: 0xC
class zPlayerLedge : public zCommonPlayerAction {};
// total size: 0xC
class zPlayerHitLaunch : public zCommonPlayerAction {};
// total size: 0xC
class zPlayerDefeated : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerFallToDeath : public zCommonPlayerAction {
    // Members
    float timer; // offset 0xC, size 0x4
};
// total size: 0x10
class zPlayerCheat : public zCommonPlayerAction {
    // Members
    class zCarryableObject * carryableToDrop; // offset 0xC, size 0x4
};
// total size: 0xC
class zPlayerInteraction : public zCommonPlayerAction {};
// total size: 0x14
class zPlayerSwitchLever : public zPlayerInteraction {
    // Members
    float switchTime; // offset 0xC, size 0x4
    bool started; // offset 0x10, size 0x1
};
enum zSwitchLeverState {
    eSwitchLeverOff = 0,
    eSwitchLeverOn = 1,
    eSwitchLeverSwitchingOff = 2,
    eSwitchLeverSwitchingOn = 3,
    eSwitchLeverCount = 4,
};
// total size: 0x10
class zCommonPlayerDash : public zCommonPlayerAction {
    // Members
    float dashAmount; // offset 0xC, size 0x4
};
// total size: 0xC
class zPlayerMGWin : public zPlayerAction {};
// total size: 0xC
class zPlayerMGLose : public zPlayerAction {};
// total size: 0x14
class zPlayerDoubleJump : public zCommonPlayerAction {
    // Members
    bool doubleJumped; // offset 0xC, size 0x1
    float timer; // offset 0x10, size 0x4
};
// total size: 0x2C
class zPlayerActionBeamRun : public zPlayerContextAction {
    // Members
    float u; // offset 0xC, size 0x4
    float leanAngle; // offset 0x10, size 0x4
    float leanSpeed; // offset 0x14, size 0x4
    float angleDiff; // offset 0x18, size 0x4
    float speed; // offset 0x1C, size 0x4
    float camBlendTimer; // offset 0x20, size 0x4
    float magnitude; // offset 0x24, size 0x4
    bool forward; // offset 0x28, size 0x1
    bool hitEnd; // offset 0x29, size 0x1
};
// total size: 0xC
class zPlayerContextAction : public zCommonPlayerAction {};
// total size: 0x90
class zContextObjectBeam : public zContextObject {
    // Members
    class xBox bound; // offset 0x24, size 0x18
    class xNurbs curve; // offset 0x3C, size 0x4C
    class xEnt * object; // offset 0x88, size 0x4
    class zContextObjectBeamAsset * asset; // offset 0x8C, size 0x4
};
// total size: 0x38
class zContextObjectBeamAsset : public xDynAsset {
    // Members
    unsigned long long curveID; // offset 0x20, size 0x8
    unsigned long long objectID; // offset 0x28, size 0x8
    bool fallBelow; // offset 0x30, size 0x1
    unsigned char flags; // offset 0x31, size 0x1
};
// total size: 0x18
class zPlayerPoleSwing : public zPlayerContextAction {
    // Members
    float angle; // offset 0xC, size 0x4
    bool pressed; // offset 0x10, size 0x1
    bool rotate; // offset 0x11, size 0x1
    float animTime; // offset 0x14, size 0x4
};
// total size: 0x30
class zContextObjectPoleSwing : public zContextObject {
    // Members
    class xEnt * pole; // offset 0x24, size 0x4
    float length; // offset 0x28, size 0x4
    class zContextObjectPoleSwingAsset * asset; // offset 0x2C, size 0x4
};
// total size: 0x30
class zContextObjectPoleSwingAsset : public xDynAsset {
    // Members
    unsigned long long poleID; // offset 0x20, size 0x8
    float length; // offset 0x28, size 0x4
};
// total size: 0xC
class zPlayerSpringboard : public zCommonPlayerAction {};
// total size: 0x10
class zPlayerTrampoline : public zPlayerSpringboard {
    // Members
    enum @enum state; // offset 0xC, size 0x4
};
enum @enum {
    NO_INPUT = 0,
    SUCCESS = 1,
    FAILURE = 2,
};
// total size: 0x18
class zPlayerChargeboard : public zPlayerSpringboard {
    // Members
    float scale; // offset 0xC, size 0x4
    class zSpringboard * springboard; // offset 0x10, size 0x4
    bool failed; // offset 0x14, size 0x1
};
// total size: 0xC
class zPlayerActionLaunch : public zPlayerInteraction {};
// total size: 0x118
class zLaunch : public zInteraction {
    // Members
    float jumpYaw; // offset 0x34, size 0x4
    class xVec3 * target; // offset 0x38, size 0x4
    float initYaw; // offset 0x3C, size 0x4
    float deltaYaw; // offset 0x40, size 0x4
    class xVec3 initPos; // offset 0x44, size 0xC
    class xMat4x3 markerMat; // offset 0x50, size 0x40
    float currAlpha; // offset 0x90, size 0x4
    class xParabola path; // offset 0x94, size 0x24
    float param; // offset 0xB8, size 0x4
    enum zLaunchState launchState; // offset 0xBC, size 0x4
    class ModelInstanceArticle * modelArticle; // offset 0xC0, size 0x4
    class xMat4x3 playerMat; // offset 0xC4, size 0x40
    class LeavesState leaves; // offset 0x104, size 0x14
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
// total size: 0x14
class LeavesState {
    // Members
    bool have_bone_pos; // offset 0x0, size 0x1
    class xVec3 last_bone_pos; // offset 0x4, size 0xC
    float num_leaves; // offset 0x10, size 0x4
};
// total size: 0x3C
class zPlayerActionPipeClimb : public zPlayerContextAction {
    // Members
    float u; // offset 0xC, size 0x4
    float angleDiff; // offset 0x10, size 0x4
    float speed; // offset 0x14, size 0x4
    float magnitude; // offset 0x18, size 0x4
    bool hitEnd; // offset 0x1C, size 0x1
    bool upright; // offset 0x1D, size 0x1
    int beginControl; // offset 0x20, size 0x4
    class xVec3 dismountDirection; // offset 0x24, size 0xC
    class xVec3 dismountPosition; // offset 0x30, size 0xC
};
// total size: 0xA8
class zContextObjectPipe : public zContextObject {
    // Members
    class xBox bound; // offset 0x24, size 0x18
    class xNurbs curve; // offset 0x3C, size 0x4C
    class zContextObjectPipeAsset * asset; // offset 0x88, size 0x4
    class xVec3 facingVec; // offset 0x8C, size 0xC
    class xQuat * beadDirections; // offset 0x98, size 0x4
    float lowerU; // offset 0x9C, size 0x4
    float upperU; // offset 0xA0, size 0x4
};
// total size: 0x30
class zContextObjectPipeAsset : public xBaseAsset {
    // Members
    class uid CurveID; // offset 0x10, size 0x8
    class __OrientationBeads__ OrientationBeads; // offset 0x18, size 0x8
    unsigned char flags; // offset 0x20, size 0x1
    unsigned short pad; // offset 0x22, size 0x2
    class LinkAsset EventLinksNew; // offset 0x24, size 0x8
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
// total size: 0x148
class zAnimViewerCamera : public xCam {
    // Members
    float distance; // offset 0x138, size 0x4
    class xVec3 target; // offset 0x13C, size 0xC
};
// total size: 0x10
class _OGConditionalEntity : public xOGEntity {};
// total size: 0x18
class _OGConditionalSchema : public Schema {};
// total size: 0x28
class zCondAsset : public xBaseAsset {
    // Members
    unsigned long long value_asset; // offset 0x10, size 0x8
    unsigned int constNum; // offset 0x18, size 0x4
    unsigned int expr1; // offset 0x1C, size 0x4
    unsigned int op; // offset 0x20, size 0x4
};
// total size: 0x28
class _zConditional : public xBase {
    // Members
    class zCondAsset * asset; // offset 0x20, size 0x4
    class zVarEntry * varEntry; // offset 0x24, size 0x4
};
// total size: 0x8
class zVarEntry {
    // Members
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int (* varCB)(void * context); // offset 0x4, size 0x4
};
// total size: 0x4
class BeamContext : public xOGEntityContext {
    // Members
    class zContextObjectBeam * widget; // offset 0x0, size 0x4
};
// total size: 0x14
class zContextObjectPriority {
    // Members
    enum zContextObjectType type; // offset 0x0, size 0x4
    float distance2; // offset 0x4, size 0x4
    class xVec3 mountPoint; // offset 0x8, size 0xC
};
enum zContextObjectType {
    ezContextObjectType_Tightrope = 0,
    ezContextObjectType_PoleSwing = 1,
    ezContextObjectType_ClimbableRope = 2,
    ezContextObjectType_PointJump = 3,
    ezContextObjectType_Beam = 4,
    ezContextObjectType_Pipe = 5,
    ezContextObjectType_Count = 6,
};
// total size: 0x10
class _OGDebrisPileEntity : public xOGEntity {};
// total size: 0x18
class _OGDebrisPileSchema : public Schema {};
// total size: 0x80
class zDebrisPile : public xBase {
    // Members
    class zDebrisPileAsset * asset; // offset 0x20, size 0x4
    class xMat4x3 mat; // offset 0x24, size 0x40
    int foodLeft; // offset 0x64, size 0x4
    int healthLeft; // offset 0x68, size 0x4
    bool playerInRange; // offset 0x6C, size 0x1
    class xModelInstance * model; // offset 0x70, size 0x4
    class ModelHelperInfo * renderHelperInfo; // offset 0x74, size 0x4
    bool noUpdate; // offset 0x78, size 0x1
};
// total size: 0x90
class zDebrisPileAsset : public xBaseAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x10, size 0x40
    class vec3 Position; // offset 0x50, size 0xC
    class Rotation3 Orientation; // offset 0x5C, size 0xC
    float Radius; // offset 0x68, size 0x4
    bool GiveHealth; // offset 0x6C, size 0x1
    unsigned int FoodCount; // offset 0x70, size 0x4
    class __FoodModels__ FoodModels; // offset 0x74, size 0x8
    class LinkAsset EventLinksNew; // offset 0x7C, size 0x8
};
// total size: 0x8
class __FoodModels__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGDecalEntity : public xOGEntity {};
// total size: 0x18
class _OGDecalSchema : public Schema {};
// total size: 0x10
class _OGDecalEmitterEntity : public xOGEntity {};
// total size: 0x18
class _OGDecalEmitterSchema : public Schema {};
// total size: 0x10
class _OGDestructibleEntity : public xOGEntity {};
// total size: 0x18
class _OGDestructibleSchema : public Schema {};
// total size: 0x1
class EventActionDestructableFlag : public EventActionNew {
    // Members
    bool sentByDestructable; // offset 0x0, size 0x1
};
// total size: 0x10
class _OGDirectionEntity : public xOGEntity {};
// total size: 0x18
class _OGDirectionSchema : public Schema {};
// total size: 0x98
class zGust : public xBase {
    // Members
    class zGustAsset * asset; // offset 0x20, size 0x4
    class zPolygonalVolume * boundingVolume; // offset 0x24, size 0x4
    class zPolygonalVolume * fxBoundingVolume; // offset 0x28, size 0x4
    class zDirection * direction; // offset 0x2C, size 0x4
    class zFXScript * * fxScripts; // offset 0x30, size 0x4
    class xVec3 * gustsAt; // offset 0x34, size 0x4
    class xVec3 gustVoxelHalfDimension; // offset 0x38, size 0xC
    class xMat3x3 mat; // offset 0x44, size 0x30
    unsigned int numGusts; // offset 0x74, size 0x4
    unsigned int numGustEffects; // offset 0x78, size 0x4
    unsigned int nextGustSpawnIndex; // offset 0x7C, size 0x4
    float strength; // offset 0x80, size 0x4
    float timePassed; // offset 0x84, size 0x4
    float emissionsPerSecond; // offset 0x88, size 0x4
    float secondsPerEmission; // offset 0x8C, size 0x4
    bool isOn; // offset 0x90, size 0x1
};
// total size: 0x48
class zGustAsset : public xBaseAsset {
    // Members
    class uid BoundsID; // offset 0x10, size 0x8
    class uid FXBoundsID; // offset 0x18, size 0x8
    float Strength; // offset 0x20, size 0x4
    class uid DirID; // offset 0x28, size 0x8
    class __FXIDs__ FXIDs; // offset 0x30, size 0x8
    unsigned int NumberOfGusts; // offset 0x38, size 0x4
    unsigned int EmissionsPerSecond; // offset 0x3C, size 0x4
    class LinkAsset EventLinksNew; // offset 0x40, size 0x8
};
// total size: 0x8
class __FXIDs__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGEnvEntity : public xOGEntity {};
// total size: 0x18
class _OGEnvSchema : public Schema {};
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
// total size: 0x10
class _OGEventSpyEntity : public xOGEntity {};
// total size: 0x18
class _OGEventSpySchema : public Schema {};
// total size: 0x30
class zEventSpy : public xBase {
    // Members
    class zEventSpyAsset * asset; // offset 0x20, size 0x4
    int timesTrapped; // offset 0x24, size 0x4
    bool FlagLog; // offset 0x28, size 0x1
    bool FlagLogStack; // offset 0x29, size 0x1
    bool FlagAssert; // offset 0x2A, size 0x1
    bool FlagAssertOnce; // offset 0x2B, size 0x1
    bool FlagSound; // offset 0x2C, size 0x1
    bool FlagSkip; // offset 0x2D, size 0x1
};
// total size: 0x30
class zEventSpyAsset : public xBaseAsset {
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
// total size: 0x1B0
class zExplosiveObject : public zEntSimpleObj {
    // Members
    class zExplosiveObject * nextExplosiveObject; // offset 0xDC, size 0x4
    class zExplosiveObject * priorExplosiveObject; // offset 0xE0, size 0x4
    class ExplosiveObject * explosiveAsset; // offset 0xE4, size 0x4
    class ExplosiveProperties * explosiveProperties; // offset 0xE8, size 0x4
    bool shouldExplodeHit; // offset 0xEC, size 0x1
    bool alive; // offset 0xED, size 0x1
    bool exploding; // offset 0xEE, size 0x1
    bool timerRunning; // offset 0xEF, size 0x1
    float explosionTimer; // offset 0xF0, size 0x4
    float chainExplodeDelayTimer; // offset 0xF4, size 0x4
    class xEntDrive drv; // offset 0xF8, size 0xB8
};
// total size: 0x130
class ExplosiveObject : public xSimpleObjAsset {
    // Members
    class uid ExplosiveProperties; // offset 0x120, size 0x8
};
// total size: 0x120
class xSimpleObjAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char subtype; // offset 0x11, size 0x1
    unsigned char pad; // offset 0x12, size 0x1
    unsigned char moreFlags; // offset 0x13, size 0x1
    class uid Surface; // offset 0x18, size 0x8
    class Rotation3 Orientation; // offset 0x20, size 0xC
    class vec3 Pos; // offset 0x2C, size 0xC
    class vec3 Scale; // offset 0x38, size 0xC
    class vec3 colorMult; // offset 0x44, size 0xC
    class ClearToOpaque ClearToOpaque; // offset 0x50, size 0x8
    class ModelInstanceAsset ModelInstance; // offset 0x60, size 0x40
    class uid AnimList; // offset 0xA0, size 0x8
    class PhysicsDataStruct PhysicsData; // offset 0xA8, size 0x48
    unsigned int Pad1; // offset 0xF0, size 0x4
    unsigned int Pad2; // offset 0xF4, size 0x4
    unsigned int Pad3; // offset 0xF8, size 0x4
    class uid Destructible; // offset 0x100, size 0x8
    float AnimationSpeed; // offset 0x108, size 0x4
    unsigned int InitialState; // offset 0x10C, size 0x4
    unsigned char Collision; // offset 0x110, size 0x1
    unsigned char SimpleFlags; // offset 0x111, size 0x1
    unsigned char orientRef; // offset 0x112, size 0x1
    class LinkAsset EventLinksNew; // offset 0x114, size 0x8
};
// total size: 0x8
class ClearToOpaque {
    // Members
    float Value; // offset 0x0, size 0x4
    float Speed; // offset 0x4, size 0x4
};
// total size: 0x60
class ExplosiveProperties : public xDynAsset {
    // Members
    class uid HitExplodeFXID; // offset 0x20, size 0x8
    float HitExplodeRadius; // offset 0x28, size 0x4
    float HitExplodeDamage; // offset 0x2C, size 0x4
    class uid ChainExplodeFXID; // offset 0x30, size 0x8
    float ChainExplodeRadius; // offset 0x38, size 0x4
    float ChainExplodeDamage; // offset 0x3C, size 0x4
    class uid TouchedExplodeFXID; // offset 0x40, size 0x8
    float TouchedExplodeRadius; // offset 0x48, size 0x4
    float TouchedExplodeDamage; // offset 0x4C, size 0x4
    float TouchedExplodeDelay; // offset 0x50, size 0x4
    float OverrideMass; // offset 0x54, size 0x4
    class LinkAsset EventLinksNew; // offset 0x58, size 0x8
};
// total size: 0x10
class _OGExplosivePropertiesEntity : public xOGEntity {};
// total size: 0x18
class _OGExplosivePropertiesSchema : public Schema {};
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
// total size: 0x8
class zFactoryMemTypeInfo {
    // Members
    char * typeName; // offset 0x0, size 0x4
    void (* leakCB)(void * leakedBlock, int leakedBlockSize); // offset 0x4, size 0x4
};
// total size: 0xC
class zEvePlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {};
// total size: 0xC
class zPlayerCharacterProxyCollisionListener : public hkReferencedObject, public hkpCharacterProxyListener {};
// total size: 0x14
class zNPCControl : public zNPCState {};
// total size: 0x14
class zNPCState {
    // Members
    class zNPCBase * npcBase; // offset 0x0, size 0x4
    class zNPCControl * parent; // offset 0x4, size 0x4
    int refCount; // offset 0x8, size 0x4
    char * stateDebugName; // offset 0xC, size 0x4
};
// total size: 0x1A8
class zCamMG2P : public xCam {
    // Members
    class zMG2PCamAsset * mAsset; // offset 0x138, size 0x4
    class xVec3 target; // offset 0x13C, size 0xC
    class xVec3 thePole; // offset 0x148, size 0xC
    class xSpringyVec3 goalPos; // offset 0x154, size 0x28
    class xSpringyVec3 poleEnd; // offset 0x17C, size 0x28
    bool firstFrame; // offset 0x1A4, size 0x1
};
// total size: 0x140
class zCamWorldFixed : public xCam {
    // Members
    class xCamAsset * mAsset; // offset 0x138, size 0x4
};
// total size: 0x3D8
class zCamPlayerPOI : public zCam2Player {
    // Members
    class xCamBinaryAsset * mAsset; // offset 0x3D0, size 0x4
    class xBase * mTarget; // offset 0x3D4, size 0x4
};
// total size: 0x38
class zOneLinerSystem {
    // Members
    unsigned long long oneLinerEventWidgetId; // offset 0x0, size 0x8
    float globalNoRepeatTime; // offset 0x8, size 0x4
    int noRepeatIter; // offset 0xC, size 0x4
    float gameTime; // offset 0x10, size 0x4
    int lastestOneLinersIndex; // offset 0x14, size 0x4
    class OneLiner * pLatestOneLiners[5]; // offset 0x18, size 0x14
    class OneLiner * pCurLine; // offset 0x2C, size 0x4
    class OneLiner * pEventOneLinerList; // offset 0x30, size 0x4
};
// total size: 0x58
class OneLiner : public xBase {
    // Members
    enum ePriority priority; // offset 0x20, size 0x4
    class zSoundFX * pSfx; // offset 0x24, size 0x4
    char eventName[32]; // offset 0x28, size 0x20
    float nextAllowPlayTime; // offset 0x48, size 0x4
    float noRepeatTime[2]; // offset 0x4C, size 0x8
    class OneLiner * pNext; // offset 0x54, size 0x4
};
enum ePriority {
    Low = 0,
    Medium = 1,
    High = 2,
    END_ePriorityENUM = 3,
};
