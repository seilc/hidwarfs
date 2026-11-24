/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015C1D0 -> 0x801DEF28
*/
extern class Global * gGlobal; // size: 0x4
extern class hkError * s_instance; // size: 0x4
// total size: 0x18
class zEvePlayerIdle : public zPlayerIdle {};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
// total size: 0x1C
class ImmediateInstanceArticle : public Article {
    // Members
    int rendCount; // offset 0x4, size 0x4
    int memSize; // offset 0x8, size 0x4
    class ImmediatePrototypeEntity * protoEnt; // offset 0xC, size 0x4
    class ParamCargo * paramCargos; // offset 0x10, size 0x4
    void * * paramDatas; // offset 0x14, size 0x4
    int * paramSizes; // offset 0x18, size 0x4
};
// total size: 0x60
class AssetType : public xDynAsset {
    // Members
    float life; // offset 0x20, size 0x4
    unsigned char emitType; // offset 0x24, size 0x1
    class @class Emit_Data; // offset 0x28, size 0x20
    unsigned long long entity; // offset 0x48, size 0x8
    float size; // offset 0x50, size 0x4
    bool autoCalcNorm; // offset 0x54, size 0x1
    class __curveNodes__ curveNodes; // offset 0x58, size 0x8
};
// total size: 0x20
class @class {
    // Members
    class Fixed Fixed; // offset 0x0, size 0x20
    class Follow Follow; // offset 0x0, size 0x1
};
// total size: 0x20
class Fixed {
    // Members
    class xVec3 vel; // offset 0x0, size 0xC
    bool velWorldSpace; // offset 0xC, size 0x1
    float velConeAngle; // offset 0x10, size 0x4
    class xVec3 accel; // offset 0x14, size 0xC
};
// total size: 0x1
class Follow {};
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
// total size: 0x10
class zEvePlayerCheat : public zPlayerCheat {};
// total size: 0xC
class zEvePlayerFly : public zCommonPlayerAction {};
// total size: 0xC
class zEvePlayerBoost : public zCommonPlayerAction {};
// total size: 0xC
class zEvePlayerBrake : public zCommonPlayerAction {};
// total size: 0xC
class zEvePlayerBoostBrake : public zCommonPlayerAction {};
// total size: 0x38
class zEvePlayerTurnAround : public zCommonPlayerAction {
    // Members
    class xQuat prevQuat; // offset 0xC, size 0x10
    bool adjustedOrientation; // offset 0x1C, size 0x1
    float adjustTimer; // offset 0x20, size 0x4
    float blendAmt; // offset 0x24, size 0x4
    class xQuat initOrientation; // offset 0x28, size 0x10
};
// total size: 0x40
class zPlayerEveRigidBodyCollisionListener : public EntCollisionListener {
    // Members
    class zEvePlayer * pPlayer; // offset 0x38, size 0x4
    short numPoints; // offset 0x3C, size 0x2
};
// total size: 0x34
class zEvePlayerScan : public zCommonPlayerAction {
    // Members
    class zLaserScanner laserScanner; // offset 0xC, size 0x28
};
// total size: 0x10
class zEvePlayerDefeated : public zPlayerDefeated {
    // Members
    float defeatedTimer; // offset 0xC, size 0x4
};
// total size: 0xC
class zEvePlayerDamaged : public zCommonPlayerAction {};
// total size: 0x240
class zObjectGeneratorUber : public zObjectGenerator {
    // Members
    bool firstTime; // offset 0x2C, size 0x1
    class HelperInfo * modelHelperInfo; // offset 0x30, size 0x4
    class UVMovementInstanceData instanceData[4]; // offset 0x34, size 0x180
    class zObjectSystemUber * system; // offset 0x1B4, size 0x4
    class UberStruct * uberAsset; // offset 0x1B8, size 0x4
    class zObjectLocator locator; // offset 0x1BC, size 0x8
    float emitted; // offset 0x1C4, size 0x4
    class xMat4x3 worldMat; // offset 0x1C8, size 0x40
    class xVec3 accelDir; // offset 0x208, size 0xC
    class xVec3 velDir; // offset 0x214, size 0xC
    class zGradientCurve * speedCurve; // offset 0x220, size 0x4
    class zGradientCurve * accelCurve; // offset 0x224, size 0x4
    class zGradientCurve * colorCurve; // offset 0x228, size 0x4
    class zGradientCurve * alphaCurve; // offset 0x22C, size 0x4
    class zGradientCurve * widthCurve; // offset 0x230, size 0x4
    class zGradientCurve * heightCurve; // offset 0x234, size 0x4
    class zGradientCurve * depthCurve; // offset 0x238, size 0x4
    class zGradientCurve * omegaCurve; // offset 0x23C, size 0x4
};
// total size: 0x20
class zObjectSystemUber : public zObjectSystem {};
// total size: 0x58
class object_instance {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 velDir; // offset 0xC, size 0xC
    class xVec3 accelVel; // offset 0x18, size 0xC
    float velModifier; // offset 0x24, size 0x4
    float age; // offset 0x28, size 0x4
    float ageRate; // offset 0x2C, size 0x4
    float forcedAgeRate; // offset 0x30, size 0x4
    class xColor_tag color; // offset 0x34, size 0x4
    float rot; // offset 0x38, size 0x4
    float animCell; // offset 0x3C, size 0x4
    class xMat3x3 * mat; // offset 0x40, size 0x4
    class xVec3 * dLoc; // offset 0x44, size 0x4
    float dLocScale; // offset 0x48, size 0x4
    class ModelInstanceArticle * modelArt; // offset 0x4C, size 0x4
    class zObjectGeneratorUber * generator; // offset 0x50, size 0x4
    class zObjectGeneratorSpawnPt * generatorSpawnPoint; // offset 0x54, size 0x4
};
// total size: 0x408
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class object_instance * data[256]; // offset 0x8, size 0x400
};
// total size: 0x20
class zParticleSystemUber : public zParticleSystem {};
// total size: 0xD8
class zParticleGeneratorUber : public zParticleGenerator {
    // Members
    class zParticleSystemUber * system; // offset 0x4C, size 0x4
    class UberStruct * uberAsset; // offset 0x50, size 0x4
    class zParticleLocator locator; // offset 0x54, size 0x8
    int sysID; // offset 0x5C, size 0x4
    float emitted; // offset 0x60, size 0x4
    class xMat4x3 worldMat; // offset 0x64, size 0x40
    class xVec3 accelDir; // offset 0xA4, size 0xC
    class xVec3 velDir; // offset 0xB0, size 0xC
    class zGradientCurve * speedCurve; // offset 0xBC, size 0x4
    class zGradientCurve * accelCurve; // offset 0xC0, size 0x4
    class zGradientCurve * colorCurve; // offset 0xC4, size 0x4
    class zGradientCurve * alphaCurve; // offset 0xC8, size 0x4
    class zGradientCurve * widthCurve; // offset 0xCC, size 0x4
    class zGradientCurve * heightCurve; // offset 0xD0, size 0x4
    class zGradientCurve * omegaCurve; // offset 0xD4, size 0x4
};
// total size: 0x4C
class particle_instance {
    // Members
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    class xVec3 accelVel; // offset 0x18, size 0xC
    float velModifier; // offset 0x24, size 0x4
    float age; // offset 0x28, size 0x4
    float ageRate; // offset 0x2C, size 0x4
    class xColor_tag color; // offset 0x30, size 0x4
    float rot; // offset 0x34, size 0x4
    float animCell; // offset 0x38, size 0x4
    class xVec3 * dPos; // offset 0x3C, size 0x4
    float dPosScale; // offset 0x40, size 0x4
    float scaleDelta; // offset 0x44, size 0x4
    class zParticleGeneratorSpawnPt * particleSpawnPoint; // offset 0x48, size 0x4
};
// total size: 0x48
class zPhysicsObject : public xBase {
    // Members
    class zPhysicsObject * nextPhysicsObject; // offset 0x20, size 0x4
    class zPOWGroup * owner; // offset 0x24, size 0x4
    enum E_HAVOK_COLLIDE_FILTER_LAYER initialCollisionLayer; // offset 0x28, size 0x4
    float lifetime; // offset 0x2C, size 0x4
    class zPhysicsObjectEntity * entity; // offset 0x30, size 0x4
    unsigned int collFilterInfo; // offset 0x34, size 0x4
    int count; // offset 0x38, size 0x4
    class HavokSimObj havokSimObj; // offset 0x3C, size 0x4
    bool killedByManager : 1; // offset 0x40, size 0x1, bit offset 0
    bool update : 1; // offset 0x40, size 0x1, bit offset 1
    bool visible : 1; // offset 0x40, size 0x1, bit offset 2
    bool collidedWithWater : 1; // offset 0x40, size 0x1, bit offset 3
    bool collidedWithWaterHandled : 1; // offset 0x40, size 0x1, bit offset 4
    bool lifetimeSet : 1; // offset 0x40, size 0x1, bit offset 5
    bool locked : 1; // offset 0x40, size 0x1, bit offset 6
    unsigned char pad : 1; // offset 0x40, size 0x1, bit offset 7
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x44, size 0x4
};
// total size: 0xE0
class zPOWGroup : public xBase {
    // Members
    class zPOWGroupAsset * asset; // offset 0x20, size 0x4
    class zEntSimpleObj * destObj; // offset 0x24, size 0x4
    bool collisionDisabled; // offset 0x28, size 0x1
    int countdownToActivation; // offset 0x2C, size 0x4
    class xMat4x3 mat; // offset 0x30, size 0x40
    float moveToTime; // offset 0x70, size 0x4
    class zPhysicsObject * * objPtrs; // offset 0x74, size 0x4
    int numObjs; // offset 0x78, size 0x4
    int collidedWithPlayer; // offset 0x7C, size 0x4
    int collidedWithPlayerHandled; // offset 0x80, size 0x4
    int lifetimeSet; // offset 0x84, size 0x4
    int infiniteLife; // offset 0x88, size 0x4
    class zTrigger * * triggers; // offset 0x8C, size 0x4
    class xEnt * driver; // offset 0x90, size 0x4
    class xMat4x3 driveInfoMat; // offset 0x94, size 0x40
    bool driveMode; // offset 0xD4, size 0x1
    bool wasEnabled; // offset 0xD5, size 0x1
    class zPOWObjectAsset * powObjAsset; // offset 0xD8, size 0x4
};
// total size: 0x70
class zPOWObjectAsset : public xBaseAsset {
    // Members
    class uid ModelInstanceReference; // offset 0x10, size 0x8
    bool InfiniteLife; // offset 0x18, size 0x1
    class PhysicsDataStruct PhysicsData; // offset 0x1C, size 0x48
    class LinkAsset EventLinksNew; // offset 0x64, size 0x8
};
// total size: 0x130
class zPhysicsObjectEntity {
    // Members
    class ModelHelperInfo * modelRenderInfo; // offset 0x0, size 0x4
    float boundRadius; // offset 0x4, size 0x4
    float alpha; // offset 0x8, size 0x4
    bool renderEnabled : 1; // offset 0xC, size 0x1, bit offset 0
    class ShadowSimpleCache simpleShadowCache; // offset 0x10, size 0xCC
    class xMat4x3 matrix; // offset 0xDC, size 0x40
    class xVec3 origPos; // offset 0x11C, size 0xC
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x128, size 0x4
    class ModelInstanceArticle * modelInstanceArticle; // offset 0x12C, size 0x4
};
enum magCharge {
    Repel = 4294967295,
    Neutral = 0,
    Attract = 1,
    END_magChargeENUM = 2,
};
enum eCollisionLayer {
    eCollisionALL = 0,
    eFixedLayer = 1,
    eFixedNoCamLayer = 2,
    eKeyFrameObjLayer = 3,
    eDynamicSimpleObjLayer = 4,
    eShrapnelObjLayer = 5,
    ePOWLayer = 6,
    ePOWNoPlayerLayer = 7,
    eFlyingDebrisLayer = 8,
    eRagdollsLayer = 9,
    eNPCLayer = 10,
    eProjectilesLayer = 11,
    eProjectilesNoPlayerNoProjectilesLayer = 12,
    ePlayerLayer = 13,
    eFXParticlesLayer = 14,
    eTriggersLayer = 15,
    eCameraLayer = 16,
    eNoCollisionLayer = 31,
    eDefaultCollision = 32,
    END_ENUM = 33,
};
// total size: 0x18
class xOGSchema : public Schema {};
// total size: 0x4
class EventActionChangeSpeed : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x8
class EventActionShrapnel : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x4
class EventActionSetShadowCastDepth : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0xBC
class PlayerEntityOG : public xOGEntityWithModel {};
// total size: 0x140
class xEntPlayerAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char Type; // offset 0x11, size 0x1
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
    class uid ChrAsset; // offset 0x100, size 0x8
    unsigned int PlayerIndex; // offset 0x108, size 0x4
    class uid lightKit; // offset 0x110, size 0x8
    unsigned int shadowColor; // offset 0x118, size 0x4
    float shadowMaxDepth; // offset 0x11C, size 0x4
    float shadowStartDepth; // offset 0x120, size 0x4
    unsigned int shadowMinBlur; // offset 0x124, size 0x4
    unsigned int shadowMaxBlur; // offset 0x128, size 0x4
    class LinkAsset EventLinksNew; // offset 0x12C, size 0x8
};
// total size: 0x8
class ClearToOpaque {
    // Members
    float Value; // offset 0x0, size 0x4
    float Speed; // offset 0x4, size 0x4
};
// total size: 0x4
class EventActionKill : public EventActionNew {
    // Members
    enum eKillType param0; // offset 0x0, size 0x4
};
enum eKillType {
    eKillType_Standing = 0,
    eKillType_Drowning = 1,
    eKillType_Falling = 2,
    END_eKillType_ENUM = 3,
};
// total size: 0x90
class SphereCollisionResults {
    // Members
    class xVec3 tested_dir; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    int collisionFlags; // offset 0x10, size 0x4
    class xVec3 contact; // offset 0x14, size 0xC
    class xVec3 normal; // offset 0x20, size 0xC
    float collidingSphereRadius; // offset 0x2C, size 0x4
    unsigned long long oid; // offset 0x30, size 0x8
    void * optr; // offset 0x38, size 0x4
    class xModelInstance * mptr; // offset 0x3C, size 0x4
    class xJSPHeader * jsp; // offset 0x40, size 0x4
    enum xCollideSphereHitType hitTriangleType; // offset 0x44, size 0x4
    class xPlane triPlane; // offset 0x48, size 0x10
    int sphereIndex; // offset 0x58, size 0x4
    class TriangleInfo * triInfo; // offset 0x5C, size 0x4
    unsigned long long surfaceID; // offset 0x60, size 0x8
    class xVec3 v[3]; // offset 0x68, size 0x24
};
// total size: 0x40
class zPlayerRigidBodyCollisionListener : public EntCollisionListener {
    // Members
    class zWallePlayer * pPlayer; // offset 0x38, size 0x4
    short numPoints; // offset 0x3C, size 0x2
};
// total size: 0x128
class zPlayerInputPadMgr {
    // Members
    class PadData allPads[4]; // offset 0x0, size 0x100
    class zPlayerInput * curDebugPad[4]; // offset 0x100, size 0x10
    class Pad * acquiredPads[4]; // offset 0x110, size 0x10
    bool updatePadStatus; // offset 0x120, size 0x1
};
// total size: 0x40
class PadData {
    // Members
    class zPlayerInput pad; // offset 0x0, size 0x38
    class zPlayer * owner; // offset 0x38, size 0x4
    unsigned int gamePort; // offset 0x3C, size 0x4
};
// total size: 0x8
class ButtonMap {
    // Members
    int buttonType; // offset 0x0, size 0x4
    int buttonCombo; // offset 0x4, size 0x4
};
enum PadTiltIndex {
    TILT_PRIMARY = 0,
    TILT_SECONDARY = 1,
};
enum PadTiltDirection {
    TILT_LEFT = 0,
    TILT_RIGHT = 1,
    TILT_BACK = 2,
    TILT_FORWARD = 3,
    TILT_LEFTRIGHT = 4,
    TILT_FORWARDBACK = 5,
    TILT_ANY = 6,
};
// total size: 0x8
class ColonyItemRecord {
    // Members
    int tollReq; // offset 0x0, size 0x4
    int total; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGPlayer_Location_Platform_ConnectorEntity : public xOGEntity {};
// total size: 0x18
class _OGPlayer_Location_Platform_ConnectorSchema : public Schema {};
// total size: 0x38
class zPlayerLocationPlatformConnector : public xBase {
    // Members
    class Player_Location_Platform_Connector * asset; // offset 0x20, size 0x4
    bool firstUpdate; // offset 0x24, size 0x1
    class xEnt * platform; // offset 0x28, size 0x4
    class xEnt * attachEnt; // offset 0x2C, size 0x4
    class zPlayerLocationPlatformConnector * next; // offset 0x30, size 0x4
};
// total size: 0x40
class Player_Location_Platform_Connector : public xDynAsset {
    // Members
    class uid Platform; // offset 0x20, size 0x8
    class uid Player; // offset 0x28, size 0x8
    bool WalleHack; // offset 0x30, size 0x1
    unsigned char pad1; // offset 0x31, size 0x1
    unsigned char pad2; // offset 0x32, size 0x1
    unsigned char pad3; // offset 0x33, size 0x1
    class LinkAsset EventLinksNew; // offset 0x34, size 0x8
};
// total size: 0x18
class zPlayerResourcesSceneEntry {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned int playerTypeIdxs[4]; // offset 0x4, size 0x10
    int playerCount; // offset 0x14, size 0x4
};
// total size: 0x10
class _OGPolygonalVolumeEntity : public xOGEntity {};
// total size: 0x18
class _OGPolygonalVolumeSchema : public Schema {};
// total size: 0x10
class _OGPortalEntity : public xOGEntity {};
// total size: 0x18
class _OGPortalSchema : public Schema {};
// total size: 0x10
class _OGPOWGroupEntity : public xOGEntity {};
// total size: 0x18
class _OGPOWGroupSchema : public Schema {};
enum positionDestination {
    CurrentPosition = 0,
    OriginalPosition = 1,
};
// total size: 0x48
class zPOWManager : public zModule {
    // Members
    class xEnt * water1; // offset 0x18, size 0x4
    class xEnt * water2; // offset 0x1C, size 0x4
    class xEnt * water3; // offset 0x20, size 0x4
    class xBase selfbase; // offset 0x28, size 0x20
};
// total size: 0x10
class _OGPOWObjectEntity : public xOGEntity {};
// total size: 0x18
class _OGPOWObjectSchema : public Schema {};
// total size: 0x40
class zProjectileControllerBasic : public zProjectileController {};
// total size: 0x40
class zProjectileControllerHeavy : public zProjectileController {};
// total size: 0x40
class zProjectileControllerSuperHeavy : public zProjectileControllerHeavy {};
// total size: 0x40
class zProjectileControllerHeavyFlagBlue : public zProjectileControllerHeavy {};
// total size: 0x40
class zProjectileControllerHeavyFlagRed : public zProjectileControllerHeavy {};
// total size: 0x40
class zProjectileControllerHeavyMultiplayer : public zProjectileController {};
// total size: 0x40
class zProjectileControllerMagneticAttract : public zProjectileController {};
// total size: 0x40
class zProjectileControllerMagneticRepel : public zProjectileControllerMagneticAttract {};
// total size: 0x40
class zProjectileControllerEnergy : public zProjectileController {};
// total size: 0x40
class zProjectileControllerSuperEnergy : public zProjectileControllerEnergy {};
// total size: 0x40
class zProjectileControllerSuperHeavyClusterBomb : public zProjectileController {};
// total size: 0x40
class ProjectileCollisionListener : public EntCollisionListener {
    // Members
    float dampeningFactor; // offset 0x38, size 0x4
    bool collisionFrameDampeningProcessed : 1; // offset 0x3C, size 0x1, bit offset 0
    bool collisionFrameHitProcessed : 1; // offset 0x3C, size 0x1, bit offset 1
    bool collisionFrameRibbonProcessed : 1; // offset 0x3C, size 0x1, bit offset 2
    unsigned char pad : 5; // offset 0x3C, size 0x1, bit offset 3
};
// total size: 0xC
class zProjectileCollDetect {
    // Members
    float sphereR; // offset 0x0, size 0x4
    class zProjectileController * controller; // offset 0x4, size 0x4
};
// total size: 0xB0
class ProjectileAsset {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0x0, size 0x40
    class uid RibbonEffectID; // offset 0x40, size 0x8
    class uid AuraFXScriptID; // offset 0x48, size 0x8
    class uid InAirAuraFXScriptID; // offset 0x50, size 0x8
    class uid TimeoutFXScriptID; // offset 0x58, size 0x8
    class uid ExplosionFXScriptID; // offset 0x60, size 0x8
    class uid PingFXScriptID; // offset 0x68, size 0x8
    class uid MuzzleFlashFXScriptID; // offset 0x70, size 0x8
    class SoundSourcesPhysics SoundsPhysics; // offset 0x78, size 0x38
};
// total size: 0x140
class hkpRagdollConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0x130
};
// total size: 0x130
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkpRagdollMotorConstraintAtom m_ragdollMotors; // offset 0x90, size 0x50
    class hkpAngFrictionConstraintAtom m_angFriction; // offset 0xE0, size 0xC
    class hkpTwistLimitConstraintAtom m_twistLimit; // offset 0xEC, size 0x14
    class hkpConeLimitConstraintAtom m_coneLimit; // offset 0x100, size 0x14
    class hkpConeLimitConstraintAtom m_planesLimit; // offset 0x114, size 0x14
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0x128, size 0x2
};
// total size: 0x90
class hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkTransform m_transformA; // offset 0x10, size 0x40
    class hkTransform m_transformB; // offset 0x50, size 0x40
};
// total size: 0x50
class hkpRagdollMotorConstraintAtom : public hkpConstraintAtom {
    // Members
    class hkBool m_isEnabled; // offset 0x2, size 0x1
    short m_initializedOffset; // offset 0x4, size 0x2
    short m_previousTargetAnglesOffset; // offset 0x6, size 0x2
    class hkMatrix3 m_targetFrameAinB; // offset 0x10, size 0x30
    class hkpConstraintMotor * m_motors[3]; // offset 0x40, size 0xC
};
// total size: 0xC
class hkpConstraintMotor : public hkReferencedObject {
    // Members
    class hkEnum m_type; // offset 0x8, size 0x1
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0xC
class hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_firstFrictionAxis; // offset 0x3, size 0x1
    unsigned char m_numFrictionAxes; // offset 0x4, size 0x1
    float m_maxFrictionTorque; // offset 0x8, size 0x4
};
// total size: 0x14
class hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_twistAxis; // offset 0x3, size 0x1
    unsigned char m_refAxis; // offset 0x4, size 0x1
    float m_minAngle; // offset 0x8, size 0x4
    float m_maxAngle; // offset 0xC, size 0x4
    float m_angularLimitsTauFactor; // offset 0x10, size 0x4
};
// total size: 0x14
class hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_isEnabled; // offset 0x2, size 0x1
    unsigned char m_twistAxisInA; // offset 0x3, size 0x1
    unsigned char m_refAxisInB; // offset 0x4, size 0x1
    class hkEnum m_angleMeasurementMode; // offset 0x5, size 0x1
    unsigned char m_memOffsetToAngleOffset; // offset 0x6, size 0x1
    float m_minAngle; // offset 0x8, size 0x4
    float m_maxAngle; // offset 0xC, size 0x4
    float m_angularLimitsTauFactor; // offset 0x10, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0x2
class hkpBallSocketConstraintAtom : public hkpConstraintAtom {};
enum CollisionDataType {
    XBASE = 0,
    ZPROJECTILE = 1,
    ZRUNENTLASER = 2,
};
// total size: 0x98
class zProjectileManager : public zModule {
    // Members
    class xBase selfbase; // offset 0x18, size 0x20
    unsigned int nextProjectileID; // offset 0x38, size 0x4
    class zProjectile * projectiles[23]; // offset 0x3C, size 0x5C
};
// total size: 0xA4
class zProjectileTrajWALLECubeMagnetic : public zProjectileTrajLinear {
    // Members
    bool repels; // offset 0x98, size 0x1
    class hkpAabbPhantom * magnetPhantom; // offset 0x9C, size 0x4
    float phantomShereRadius; // offset 0xA0, size 0x4
};
// total size: 0x98
class zProjectileTrajLinear : public zProjectileTrajectory {};
// total size: 0xA0
class zProjectileTrajEveLaser : public zProjectileTrajectory {
    // Members
    unsigned int targetedProjectileID; // offset 0x98, size 0x4
    bool killedByTrajectory; // offset 0x9C, size 0x1
};
// total size: 0xC4
class zProjectileTrajTrackTarget : public zProjectileTrajectory {
    // Members
    class xEnt * target; // offset 0x98, size 0x4
    float speed; // offset 0x9C, size 0x4
    class xVec3 pos; // offset 0xA0, size 0xC
    class xVec3 prevPos; // offset 0xAC, size 0xC
    class xVec3 dir; // offset 0xB8, size 0xC
};
// total size: 0x10
class _OGProjectileAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGProjectileAssetSchema : public Schema {};
// total size: 0x28
class zProjectileTypesTable {
    // Members
    enum eProjectileType projectileType; // offset 0x0, size 0x4
    char * projectileAssetName; // offset 0x4, size 0x4
    class zProjectileEntity * (* entityCompCreator)(class zFactory * factory); // offset 0x8, size 0x4
    class zProjectileCollDetect * (* collDetectCompCreator)(class zFactory * factory); // offset 0xC, size 0x4
    class zProjectileCollHandler * (* collHandlerCompCreator)(class zFactory * factory); // offset 0x10, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0x14, size 0x4
    unsigned long long modelInstanceUID; // offset 0x18, size 0x8
    class ProjectileAsset * asset; // offset 0x20, size 0x4
};
// total size: 0x10
class _OGProjectileSpawnerEntity : public xOGEntity {};
// total size: 0x18
class _OGProjectileSpawnerSchema : public Schema {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerBasic {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerHeavy {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerHeavyFlagBlue {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerHeavyFlagRed {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerHeavyMultiplayer {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerEnergy {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerSuperEnergy {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerMagneticAttract {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerMagneticRepel {};
// total size: 0x40
class SpawnerProjectileController : public zProjectileControllerSuperHeavy {};
// total size: 0x48
class zProjectileSpawner : public xBase {
    // Members
    class ProjectileSpawner * asset; // offset 0x20, size 0x4
    bool isOn; // offset 0x24, size 0x1
    class zProjectileController * projectileController; // offset 0x28, size 0x4
    class hkpSimpleShapePhantom * spawnPhantom; // offset 0x2C, size 0x4
    unsigned int numSpawnedActive; // offset 0x30, size 0x4
    unsigned int numQueued; // offset 0x34, size 0x4
    float elapsedTime; // offset 0x38, size 0x4
    class xVec3 launchVector; // offset 0x3C, size 0xC
};
// total size: 0x48
class ProjectileSpawner : public xBaseAsset {
    // Members
    class vec3 SpawnPosition; // offset 0x10, size 0xC
    class Rotation3 LaunchVector; // offset 0x1C, size 0xC
    float ProjectileVelocity; // offset 0x28, size 0x4
    float SpawnRate; // offset 0x2C, size 0x4
    unsigned int MaxNumActiveProjectiles; // offset 0x30, size 0x4
    enum ProjectileType ProjectileType; // offset 0x34, size 0x4
    bool DefaultOn; // offset 0x38, size 0x1
    class uid VFX; // offset 0x40, size 0x8
};
enum ProjectileType {
    BasicCube = 0,
    MagneticCubeAttractive = 1,
    MagneticCubeRepulsive = 2,
    HeavyCube = 3,
    HeavyCubeRedFlag = 4,
    HeavyCubeBlueFlag = 5,
    HeavyCubeMultiplayer = 6,
    SuperHeavyCube = 7,
    EnergyCube = 8,
    SuperEnergyCube = 9,
    END_ProjectileTypeENUM = 10,
};
// total size: 0x160
class hkpSimpleShapePhantom : public hkpShapePhantom {
    // Members
    class hkArray m_collisionDetails; // offset 0x150, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class CollisionDetail * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x4
class CollisionDetail {
    // Members
    class hkpCollidable * m_collidable; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGPushable_ObjectEntity : public xOGEntity {};
// total size: 0x18
class _OGPushable_ObjectSchema : public Schema {};
// total size: 0x10
class _OGReferenceEntity : public xOGEntity {};
// total size: 0x18
class _OGReferenceSchema : public Schema {};
// total size: 0x28
class zReference : public xBase {
    // Members
    class xBase * current; // offset 0x20, size 0x4
};
// total size: 0x1D0
class WalleProxyStartCollector : public TriggerIdentifyingPointCollector {
    // Members
    class zPlayer * m_player; // offset 0x1B8, size 0x4
    class hkArray m_contactPoints; // offset 0x1BC, size 0xC
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
    class ContactData * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class ContactData {
    // Members
    class hkpRigidBody * rBody; // offset 0x0, size 0x4
    class hkContactPoint contact; // offset 0x10, size 0x20
};
// total size: 0x20
class hkpCharacterObjectInteractionResult {
    // Members
    class hkVector4 m_objectImpulse; // offset 0x0, size 0x10
    class hkVector4 m_impulsePosition; // offset 0x10, size 0x10
};
// total size: 0x8
class EventActionDirectedChevronBoost : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x1
class EventActionSetPlayerAsPhysicsObject : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
};
// total size: 0x1
class EventActionUnSetPlayerAsPhysicsObject : public EventActionNew {
    // Members
    bool param0; // offset 0x0, size 0x1
};
// total size: 0x4
class EventActionContextSwitchLever : public EventActionNew {
    // Members
    enum eContextSwitchDirection param0; // offset 0x0, size 0x4
};
enum eContextSwitchDirection {
    eContextSwitchDirection_Right = 0,
    eContextSwitchDirection_Left = 1,
    END_eContextSwitchDirection_ENUM = 2,
};
// total size: 0x8
class EventActionGiveHealthOverTime : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
    float param1; // offset 0x4, size 0x4
};
// total size: 0x60
class hkpClosestRayHitCollector : public hkpRayHitCollector {
    // Members
    class hkpWorldRayCastOutput m_rayHit; // offset 0x10, size 0x50
};
// total size: 0x70
class TreadPointCollector : public hkpClosestRayHitCollector {
    // Members
    bool hit; // offset 0x60, size 0x1
    float distFrac; // offset 0x64, size 0x4
};
// total size: 0x18
class zWalleCubeLOSChecker : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    class xBase * ignoreTarget; // offset 0xC, size 0x4
    class xBase * hitObj; // offset 0x10, size 0x4
    bool hitIt; // offset 0x14, size 0x1
};
// total size: 0x8
class EventActionEnteredTunnelArea : public EventActionNew {
    // Members
    class uid paramWidgetAssetID; // offset 0x0, size 0x8
};
// total size: 0x14
class EveGroundChecker : public hkpRayHitCollector {
    // Members
    bool hitIt; // offset 0x8, size 0x1
    float hitDistance; // offset 0xC, size 0x4
    class SurfaceGamePlay * surface; // offset 0x10, size 0x4
};
// total size: 0x10
class _OGRibbonEntity : public xOGEntity {};
// total size: 0x18
class _OGRibbonSchema : public Schema {};
// total size: 0x10
class _OGRibbonEmitterEntity : public xOGEntity {};
// total size: 0x18
class _OGRibbonEmitterSchema : public Schema {};
// total size: 0x4
class EventActionActivate : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGRuntimeEntityAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGRuntimeEntityAssetSchema : public Schema {};
// total size: 0x38
class zRunEntLaserLOSChecker : public hkpRayHitCollector {
    // Members
    class xBase * ignoreStart; // offset 0x8, size 0x4
    int ignoreSize; // offset 0xC, size 0x4
    class xBase * ignoreList[4]; // offset 0x10, size 0x10
    class xBase * hitObj; // offset 0x20, size 0x4
    bool hitIt; // offset 0x24, size 0x1
    float hitFraction; // offset 0x28, size 0x4
    class xVec3 hitNormal; // offset 0x2C, size 0xC
};
// total size: 0x10
class _OGSceneEntity : public xOGEntity {};
// total size: 0x18
class _OGSceneSchema : public Schema {};
// total size: 0x18
class zSceneObjectInstanceDesc {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int sizeRuntime; // offset 0x4, size 0x4
    unsigned int (* func)(class zScene * s, class zSceneObjectInstanceDesc * desc, unsigned int base_idx); // offset 0x8, size 0x4
    void (* objectInitFunc)(void * runtime, void * asset); // offset 0xC, size 0x4
    unsigned int (* querySubObjects)(void * asset); // offset 0x10, size 0x4
    int loc_offset; // offset 0x14, size 0x4
};
// total size: 0x14
class dynamic_type_data {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    bool is_ent; // offset 0x8, size 0x1
    void (* load)(class xBase * data, class xDynAsset * asset, unsigned long asset_size); // offset 0xC, size 0x4
    int loc_offset; // offset 0x10, size 0x4
};
enum eSceneInitState {
    eSceneInit = 0,
    eLoadingPlayer = 1,
    eLoadingScenes = 2,
};
// total size: 0x4
class IDBasePair {
    // Members
    class xBase * base; // offset 0x0, size 0x4
};
// total size: 0x88
class DependencyEntry {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    class SceneRecord baseScene; // offset 0x4, size 0x84
};
// total size: 0x84
class SceneRecord {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    char sceneLayer[128]; // offset 0x4, size 0x80
};
// total size: 0x10
class _OGScriptEntity : public xOGEntity {};
// total size: 0x18
class _OGScriptSchema : public Schema {};
// total size: 0x4
class EventActionTimer : public EventActionNew {
    // Members
    float param0; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGShrapnelAssetDefEntity : public xOGEntity {};
// total size: 0x18
class _OGShrapnelAssetDefSchema : public Schema {};
// total size: 0x168
class zFrag : public xBase {
    // Members
    class zFragInfo info; // offset 0x20, size 0x58
    float alpha; // offset 0x78, size 0x4
    float delay; // offset 0x7C, size 0x4
    float alivetime; // offset 0x80, size 0x4
    float lifetime; // offset 0x84, size 0x4
    class HavokSimObj havokSimObj; // offset 0x88, size 0x4
    class ShadowSimpleCache simpleShadowCache; // offset 0x8C, size 0xCC
    class xModelInstance * parent; // offset 0x158, size 0x4
    class zFXScriptSpawnPt * owner; // offset 0x15C, size 0x4
    class zFrag * prev; // offset 0x160, size 0x4
    class zFrag * next; // offset 0x164, size 0x4
};
// total size: 0x58
class zFragInfo {
    // Members
    class zFragGroup group; // offset 0x0, size 0x54
    class zFragShrapnel shrapnel; // offset 0x0, size 0x4
    class zFragProjectile projectile; // offset 0x0, size 0x50
};
// total size: 0x54
class zFragGroup {
    // Members
    class zFrag * list[21]; // offset 0x0, size 0x54
};
// total size: 0x4
class zFragShrapnel {
    // Members
    class zFragShrapnelAsset * fasset; // offset 0x0, size 0x4
};
// total size: 0x18
class zFragShrapnelAsset : public zFragAsset {
    // Members
    unsigned long long shrapnelID; // offset 0x8, size 0x8
    class ShrapnelAssetDef * shrapAsset; // offset 0x10, size 0x4
};
// total size: 0x8
class zFragAsset {
    // Members
    float Lifetime; // offset 0x0, size 0x4
    float Delay; // offset 0x4, size 0x4
};
// total size: 0x50
class zFragProjectile {
    // Members
    class zFXScriptSpawnPt * spawnPt; // offset 0x0, size 0x4
    class Projectile * fasset; // offset 0x4, size 0x4
    class xModelInstance * model; // offset 0x8, size 0x4
    class ModelInstanceAsset * modelInstanceAsset; // offset 0xC, size 0x4
    class ModelHelperInfo * modelHelperInfo; // offset 0x10, size 0x4
    class zSoundSourcesPhysics * soundSourcesPhysics; // offset 0x14, size 0x4
    float alpha; // offset 0x18, size 0x4
    unsigned long long shrapnelID; // offset 0x20, size 0x8
    class xVec3 pos; // offset 0x28, size 0xC
    class xVec3 oldpos; // offset 0x34, size 0xC
    class xVec3 dpos; // offset 0x40, size 0xC
};
// total size: 0x118
class Projectile : public zFragAsset {
    // Members
    class uid ModelInstanceReference; // offset 0x8, size 0x8
    class PhysicsDataStruct PhysicsData; // offset 0x10, size 0x48
    int MaxBounces; // offset 0x58, size 0x4
    class zFragBoneRandomized LaunchPos; // offset 0x5C, size 0x14
    unsigned int ProjectileFlags; // offset 0x70, size 0x4
    class __Velocity__ Velocity; // offset 0x74, size 0x14
    class __VelocityRange__ VelocityRange; // offset 0x88, size 0x10
    class __AngularSpeed__ AngularSpeed; // offset 0x98, size 0x14
    class __AngularSpeedRange__ AngularSpeedRange; // offset 0xAC, size 0x10
    class __InitialRotation__ InitialRotation; // offset 0xBC, size 0x10
    int child; // offset 0xCC, size 0x4
    float minScale; // offset 0xD0, size 0x4
    float maxScale; // offset 0xD4, size 0x4
    float maxVelocity; // offset 0xD8, size 0x4
    class zFragLightInfo lightInfo; // offset 0xDC, size 0x20
    class uid fxScriptSpawn; // offset 0x100, size 0x8
    class SoundBankSource Sound; // offset 0x108, size 0xC
};
// total size: 0x14
class zFragBoneRandomized : public zFragBone {
    // Members
    float rand_radius; // offset 0x10, size 0x4
};
// total size: 0x10
class zFragBone {
    // Members
    int Index; // offset 0x0, size 0x4
    class vec3 Vector; // offset 0x4, size 0xC
};
// total size: 0x14
class __Velocity__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x10
};
enum eFieldEnable {
    Enabled = 0,
    Disabled = 1,
    END_eFieldEnableENUM = 2,
};
// total size: 0x10
class @class {
    // Members
    class zFragBoneVelocity _Enabled; // offset 0x0, size 0x10
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x10
class zFragBoneVelocity : public zFragBone {};
// total size: 0x1
class dummy {};
// total size: 0x10
class __VelocityRange__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0xC
class @class {
    // Members
    class vec3 _Enabled; // offset 0x0, size 0xC
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x14
class __AngularSpeed__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0x10
};
// total size: 0x10
class @class {
    // Members
    class zFragBoneRotationVelocity _Enabled; // offset 0x0, size 0x10
    class dummy _Disabled; // offset 0x0, size 0x1
};
// total size: 0x10
class zFragBoneRotationVelocity : public zFragBone {};
// total size: 0x10
class __AngularSpeedRange__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0x10
class __InitialRotation__ {
    // Members
    enum eFieldEnable type; // offset 0x0, size 0x4
    class @class u; // offset 0x4, size 0xC
};
// total size: 0x20
class zFragLightInfo {
    // Members
    class FloatColorRGBA lightColor; // offset 0x0, size 0x10
    float radius; // offset 0x10, size 0x4
    float fadeUpTime; // offset 0x14, size 0x4
    float fadeDownTime; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x10
class _OGShrapnelLauncherEntity : public xOGEntity {};
// total size: 0x18
class _OGShrapnelLauncherSchema : public Schema {};
// total size: 0x10
class _OGShrapnelSpawnPtAssetEntity : public xOGEntity {};
// total size: 0x18
class _OGShrapnelSpawnPtAssetSchema : public Schema {};
// total size: 0x4
class EventSystem {};
// total size: 0x1
class System {};
// total size: 0x48
class FileHandleData : public DVDFileInfo {
    // Members
    int curPos; // offset 0x3C, size 0x4
    int lastResult; // offset 0x40, size 0x4
    bool done; // offset 0x44, size 0x1
    bool abandoned; // offset 0x45, size 0x1
};
// total size: 0x4
class EventGroup {};
// total size: 0x4
class EventProject {};
// total size: 0x10
class @class {
    // Members
    unsigned long long aid; // offset 0x0, size 0x8
    char * name; // offset 0x8, size 0x4
};
// total size: 0x10
class _OGSoundFXEntity : public xOGEntity {};
// total size: 0x18
class _OGSoundFXSchema : public Schema {};
// total size: 0x1008
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zSoundAsset * data[1024]; // offset 0x8, size 0x1000
};
// total size: 0x40
class Thread {
    // Members
    long priority; // offset 0x0, size 0x4
    void * stackBase; // offset 0x4, size 0x4
    unsigned int startStackSize; // offset 0x8, size 0x4
    class OSThread * id; // offset 0xC, size 0x4
    class Runnable * runee; // offset 0x10, size 0x4
    char * name; // offset 0x14, size 0x4
    class SyncEvent stopEvent; // offset 0x18, size 0x24
    int extraStackSize; // offset 0x3C, size 0x4
};
// total size: 0x4
class Runnable {};
// total size: 0x24
class SyncEvent {
    // Members
    class OSCond cond; // offset 0x0, size 0x8
    class OSMutex mutex; // offset 0x8, size 0x18
    bool signalled; // offset 0x20, size 0x1
};
// total size: 0x8
class OSCond {
    // Members
    class OSThreadQueue queue; // offset 0x0, size 0x8
};
// total size: 0x4
class zSoundAssetPreloadRunnable : public Runnable {};
// total size: 0x7C
class FMOD_REVERB_PROPERTIES {
    // Members
    int Instance; // offset 0x0, size 0x4
    int Environment; // offset 0x4, size 0x4
    float EnvSize; // offset 0x8, size 0x4
    float EnvDiffusion; // offset 0xC, size 0x4
    int Room; // offset 0x10, size 0x4
    int RoomHF; // offset 0x14, size 0x4
    int RoomLF; // offset 0x18, size 0x4
    float DecayTime; // offset 0x1C, size 0x4
    float DecayHFRatio; // offset 0x20, size 0x4
    float DecayLFRatio; // offset 0x24, size 0x4
    int Reflections; // offset 0x28, size 0x4
    float ReflectionsDelay; // offset 0x2C, size 0x4
    float ReflectionsPan[3]; // offset 0x30, size 0xC
    int Reverb; // offset 0x3C, size 0x4
    float ReverbDelay; // offset 0x40, size 0x4
    float ReverbPan[3]; // offset 0x44, size 0xC
    float EchoTime; // offset 0x50, size 0x4
    float EchoDepth; // offset 0x54, size 0x4
    float ModulationTime; // offset 0x58, size 0x4
    float ModulationDepth; // offset 0x5C, size 0x4
    float AirAbsorptionHF; // offset 0x60, size 0x4
    float HFReference; // offset 0x64, size 0x4
    float LFReference; // offset 0x68, size 0x4
    float RoomRolloffFactor; // offset 0x6C, size 0x4
    float Diffusion; // offset 0x70, size 0x4
    float Density; // offset 0x74, size 0x4
    unsigned int Flags; // offset 0x78, size 0x4
};
// total size: 0x940
class ReverbManager {
    // Members
    class FMOD_REVERB_PROPERTIES m_reverbProperties[16]; // offset 0x0, size 0x7C0
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbient; // offset 0x7C0, size 0x7C
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbientFadeFrom; // offset 0x83C, size 0x7C
    class FMOD_REVERB_PROPERTIES m_reverbPropertiesAmbientFadeTo; // offset 0x8B8, size 0x7C
    unsigned int m_iReverbPropertiesLoaded; // offset 0x934, size 0x4
    float m_timeFadeRemaining; // offset 0x938, size 0x4
    float m_timeFadeTotalInv; // offset 0x93C, size 0x4
};
// total size: 0x808
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zSoundSourcesPhysics * data[512]; // offset 0x8, size 0x800
};
// total size: 0x10
class _OGSoundsNamedEntity : public xOGEntity {};
// total size: 0x18
class _OGSoundsNamedSchema : public Schema {};
// total size: 0x30
class zSoundsNamed : public xBase {
    // Members
    class zSoundNamed * m_pSounds; // offset 0x20, size 0x4
    unsigned int m_soundsQuantity; // offset 0x24, size 0x4
    class zSoundsNamed * m_pNext; // offset 0x28, size 0x4
};
// total size: 0x84
class zSoundNamed {
    // Members
    class SoundNamed m_asset; // offset 0x0, size 0x10
    class zSoundAsset m_soundAsset; // offset 0x10, size 0x74
};
// total size: 0x10
class SoundNamed {
    // Members
    class Pointer32 Name; // offset 0x0, size 0x4
    class SoundBankSource BankSource; // offset 0x4, size 0xC
};
// total size: 0x120
class zSurfaceProps {
    // Members
    class zSurfAssetIN * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    class zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x40
    unsigned int uvfx_flags; // offset 0x48, size 0x4
    class zSurfacePropUVFX uvfx[2]; // offset 0x4C, size 0xD0
};
// total size: 0x1F8
class zSurfAssetIN : public zSurfAssetBase {
    // Members
    unsigned char dash_impact_type; // offset 0x140, size 0x1
    float dash_impact_throw_back; // offset 0x144, size 0x4
    float dash_spray_magnitude; // offset 0x148, size 0x4
    float dash_cool_rate; // offset 0x14C, size 0x4
    float dash_cool_amount; // offset 0x150, size 0x4
    float dash_pass; // offset 0x154, size 0x4
    float dash_ramp_max_distance; // offset 0x158, size 0x4
    float dash_ramp_min_distance; // offset 0x15C, size 0x4
    float dash_ramp_key_speed; // offset 0x160, size 0x4
    float dash_ramp_height; // offset 0x164, size 0x4
    unsigned int dash_ramp_target_movepoint_id; // offset 0x168, size 0x4
    int damage_amount; // offset 0x16C, size 0x4
    enum zHitSource damage_type; // offset 0x170, size 0x4
    class zFootstepsData off_surface; // offset 0x178, size 0x20
    class zFootstepsData on_surface; // offset 0x198, size 0x20
    class zHitDecalData hit_decal_data[3]; // offset 0x1B8, size 0x30
    float off_surface_time; // offset 0x1E8, size 0x4
    unsigned char swimmable_surface; // offset 0x1EC, size 0x1
    unsigned char dash_fall; // offset 0x1ED, size 0x1
    unsigned char need_button_press; // offset 0x1EE, size 0x1
    unsigned char dash_attach; // offset 0x1EF, size 0x1
    unsigned char footstep_decals; // offset 0x1F0, size 0x1
    unsigned char pad1; // offset 0x1F1, size 0x1
    unsigned char pad2; // offset 0x1F2, size 0x1
    unsigned char pad3; // offset 0x1F3, size 0x1
    unsigned char pad4; // offset 0x1F4, size 0x1
    unsigned char driving_surface_type; // offset 0x1F5, size 0x1
};
// total size: 0x140
class zSurfAssetBase : public xBaseAsset {
    // Members
    unsigned char game_damage_type; // offset 0x10, size 0x1
    unsigned char game_sticky; // offset 0x11, size 0x1
    unsigned char game_damage_flags; // offset 0x12, size 0x1
    unsigned char surf_type; // offset 0x13, size 0x1
    unsigned char phys_pad; // offset 0x14, size 0x1
    unsigned char sld_start; // offset 0x15, size 0x1
    unsigned char sld_stop; // offset 0x16, size 0x1
    unsigned char phys_flags; // offset 0x17, size 0x1
    float friction; // offset 0x18, size 0x4
    class zSurfMatFX matfx; // offset 0x1C, size 0x18
    class zSurfColorFX colorfx; // offset 0x34, size 0x8
    unsigned int texture_anim_flags; // offset 0x3C, size 0x4
    class zSurfTextureAnim texture_anim[2]; // offset 0x40, size 0x18
    unsigned int uvfx_flags; // offset 0x58, size 0x4
    class zSurfUVFX uvfx[2]; // offset 0x5C, size 0xC0
    unsigned char on; // offset 0x11C, size 0x1
    unsigned char surf_pad[3]; // offset 0x11D, size 0x3
    float oob_delay; // offset 0x120, size 0x4
    float walljump_scale_xz; // offset 0x124, size 0x4
    float walljump_scale_y; // offset 0x128, size 0x4
    float damage_timer; // offset 0x12C, size 0x4
    float damage_bounce; // offset 0x130, size 0x4
    unsigned long long impact_sound; // offset 0x138, size 0x8
};
// total size: 0x18
class zSurfMatFX {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
// total size: 0x8
class zSurfColorFX {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
// total size: 0xC
class zSurfTextureAnim {
    // Members
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x60
class zSurfUVFX {
    // Members
    int mode; // offset 0x0, size 0x4
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
// total size: 0x20
class zFootstepsData {
    // Members
    unsigned long long particle_emitter; // offset 0x0, size 0x8
    unsigned long long sound; // offset 0x8, size 0x8
    unsigned long long texture; // offset 0x10, size 0x8
    float duration; // offset 0x18, size 0x4
};
// total size: 0x10
class zHitDecalData {
    // Members
    unsigned long long texture; // offset 0x0, size 0x8
    float x_size; // offset 0x8, size 0x4
    float y_size; // offset 0xC, size 0x4
};
// total size: 0x20
class zSurfacePropTexAnim {
    // Members
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned long long group; // offset 0x10, size 0x8
    unsigned int group_idx; // offset 0x18, size 0x4
    class xBase * group_ptr; // offset 0x1C, size 0x4
};
// total size: 0x68
class zSurfacePropUVFX {
    // Members
    int mode; // offset 0x0, size 0x4
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
// total size: 0x8
class zMaterialMapAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned int count; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGtext_boxEntity : public xOGEntity {};
// total size: 0x18
class _OGtext_boxSchema : public Schema {};
// total size: 0x100
class ztextbox : public xBase {
    // Members
    class @class flag; // offset 0x20, size 0x1
    class asset_type * asset; // offset 0x24, size 0x4
    class xtextbox tb; // offset 0x28, size 0x88
    char * segments[16]; // offset 0xB0, size 0x40
    unsigned long segments_size; // offset 0xF0, size 0x4
    class ztextbox * next; // offset 0xF4, size 0x4
    class ztextbox * prev; // offset 0xF8, size 0x4
};
// total size: 0x1
class @class {
    // Members
    bool active : 1; // offset 0x0, size 0x1, bit offset 0
    bool dirty : 1; // offset 0x0, size 0x1, bit offset 1
    bool show_backdrop : 1; // offset 0x0, size 0x1, bit offset 2
};
// total size: 0x98
class asset_type : public xDynAsset {
    // Members
    unsigned int text; // offset 0x20, size 0x4
    class basic_rect bounds; // offset 0x24, size 0x10
    unsigned int flags; // offset 0x34, size 0x4
    unsigned int font; // offset 0x38, size 0x4
    class @class size; // offset 0x3C, size 0x8
    class @class space; // offset 0x44, size 0x8
    class color_type color; // offset 0x4C, size 0x4
    class @class inset; // offset 0x50, size 0x10
    enum @enum xjustify; // offset 0x60, size 0x4
    enum @enum yjustify; // offset 0x64, size 0x4
    enum @enum expand; // offset 0x68, size 0x4
    float max_height; // offset 0x6C, size 0x4
    class @class backdrop; // offset 0x70, size 0x1C
    class color_type shadowColor; // offset 0x8C, size 0x4
    float shadowOffsetX; // offset 0x90, size 0x4
    float shadowOffsetY; // offset 0x94, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
class color_type {
    // Members
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
// total size: 0x10
class @class {
    // Members
    float left; // offset 0x0, size 0x4
    float top; // offset 0x4, size 0x4
    float right; // offset 0x8, size 0x4
    float bottom; // offset 0xC, size 0x4
};
enum @enum {
    XJ_LEFT = 0,
    XJ_CENTER = 1,
    XJ_RIGHT = 2,
};
enum @enum {
    YJ_TOP = 0,
    YJ_CENTER = 1,
    YJ_BOTTOM = 2,
};
enum @enum {
    EX_UP = 0,
    EX_CENTER = 1,
    EX_DOWN = 2,
    MAX_EX = 3,
};
// total size: 0x1C
class @class {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    class color_type color; // offset 0x4, size 0x4
    unsigned int texture; // offset 0x8, size 0x4
    float borderU; // offset 0xC, size 0x4
    float borderV; // offset 0x10, size 0x4
    float borderWidth; // offset 0x14, size 0x4
    float borderHeight; // offset 0x18, size 0x4
};
// total size: 0x4
class EventActionVisible : public EventActionNew {
    // Members
    unsigned int param0; // offset 0x0, size 0x4
};
// total size: 0xA08
class zTimeHandlerMgr : public zQueue {};
// total size: 0xA08
class zQueue {
    // Members
    int first; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class zTimeHandlerStruct data[64]; // offset 0x8, size 0xA00
};
// total size: 0x28
class zTimeHandlerStruct {
    // Members
    float elapsed; // offset 0x0, size 0x4
    float period; // offset 0x4, size 0x4
    void (* cb)(float dt, class zTimeHandlerStruct * data); // offset 0x8, size 0x4
    class xVec3 pos; // offset 0xC, size 0xC
    class xVec3 normal; // offset 0x18, size 0xC
    float num_particles; // offset 0x24, size 0x4
};
// total size: 0x10
class _OGTortureChamberEntity : public xOGEntity {};
// total size: 0x18
class _OGTortureChamberSchema : public Schema {};
// total size: 0x20
class zTortureChamberAsset : public xBaseAsset {
    // Members
    class __ChamberCells__ ChamberCells; // offset 0x10, size 0x8
    class LinkAsset EventLinksNew; // offset 0x18, size 0x8
};
// total size: 0x8
class __ChamberCells__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x10
class _OGTriggerOGEntity : public xOGEntity {};
// total size: 0x18
class _OGTriggerOGSchema : public Schema {};
// total size: 0x10
class _OGTriggerEntEntity : public xOGEntity {};
// total size: 0x18
class _OGTriggerEntSchema : public Schema {};
// total size: 0xC
class zTriggerEntityMgr {
    // Members
    int numberOfTriggers; // offset 0x0, size 0x4
    class zTriggerEntity * * triggers; // offset 0x4, size 0x4
    int curTrigger; // offset 0x8, size 0x4
};
// total size: 0x1A0
class zTriggerEntity : public zTrigger {
    // Members
    int threshold; // offset 0x188, size 0x4
    int numberOfEntitiesWasInside; // offset 0x18C, size 0x4
    int numberOfBaseStatus; // offset 0x190, size 0x4
    class zTriggerEntityStatus * baseStatus; // offset 0x194, size 0x4
    class TriggerEntityAsset * triggerEntAsset; // offset 0x198, size 0x4
    bool hasReplyLink : 1; // offset 0x19C, size 0x1, bit offset 0
    bool hasAnyLink : 1; // offset 0x19C, size 0x1, bit offset 1
    bool hasThresholdLink : 1; // offset 0x19C, size 0x1, bit offset 2
};
// total size: 0x8
class zTriggerEntityStatus {
    // Members
    class xBase * basePtr; // offset 0x0, size 0x4
    bool isInside : 1; // offset 0x4, size 0x1, bit offset 0
    bool crossedTrigger : 1; // offset 0x4, size 0x1, bit offset 1
};
// total size: 0x10
class _OGTunnelCurveEntity : public xOGEntity {};
// total size: 0x18
class _OGTunnelCurveSchema : public Schema {};
enum ePauseType {
    PAUSE_NORMAL = 0,
    PAUSE_STATS = 1,
    PAUSE_JOIN = 2,
    PAUSE_UPGRADE = 3,
    PAUSE_MAINMENU = 4,
    END_PAUSE_ENUM = 5,
};
// total size: 0x2C
class zUIMotionFrame {
    // Members
    float offsetX; // offset 0x0, size 0x4
    float offsetY; // offset 0x4, size 0x4
    float scaleX; // offset 0x8, size 0x4
    float scaleY; // offset 0xC, size 0x4
    float textScaleX; // offset 0x10, size 0x4
    float textScaleY; // offset 0x14, size 0x4
    float rotation; // offset 0x18, size 0x4
    float offsetU; // offset 0x1C, size 0x4
    float offsetV; // offset 0x20, size 0x4
    class xColor_tag color; // offset 0x24, size 0x4
    unsigned char brightness; // offset 0x28, size 0x1
    bool visible; // offset 0x29, size 0x1
};
// total size: 0x2C
class UIMotionCommandAsset {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    float startTime; // offset 0x4, size 0x4
    float endTime; // offset 0x8, size 0x4
    float accelTime; // offset 0xC, size 0x4
    float decelTime; // offset 0x10, size 0x4
    unsigned char enabled; // offset 0x14, size 0x1
    class @class __anon; // offset 0x18, size 0x14
    class UIMotionCommandMove move; // offset 0x18, size 0x8
    class UIMotionCommandScale scale; // offset 0x18, size 0x14
    class UIMotionCommandRotate rotate; // offset 0x18, size 0xC
    class UIMotionCommandOpacity opacity; // offset 0x18, size 0x2
    class UIMotionCommandAbsoluteScale absoluteScale; // offset 0x18, size 0x14
    class UIMotionCommandBrightness brightness; // offset 0x18, size 0x2
    class UIMotionCommandColor color; // offset 0x18, size 0x6
    class UIMotionCommandUVScroll uvScroll; // offset 0x18, size 0x8
    class UIMotionCommandVisibility visibility; // offset 0x18, size 0x1
};
// total size: 0x14
class @class {
    // Members
    class UIMotionCommandMove move; // offset 0x0, size 0x8
    class UIMotionCommandScale scale; // offset 0x0, size 0x14
    class UIMotionCommandRotate rotate; // offset 0x0, size 0xC
    class UIMotionCommandOpacity opacity; // offset 0x0, size 0x2
    class UIMotionCommandAbsoluteScale absoluteScale; // offset 0x0, size 0x14
    class UIMotionCommandBrightness brightness; // offset 0x0, size 0x2
    class UIMotionCommandColor color; // offset 0x0, size 0x6
    class UIMotionCommandUVScroll uvScroll; // offset 0x0, size 0x8
    class UIMotionCommandVisibility visibility; // offset 0x0, size 0x1
};
// total size: 0x8
class UIMotionCommandMove {
    // Members
    float distX; // offset 0x0, size 0x4
    float distY; // offset 0x4, size 0x4
};
// total size: 0x14
class UIMotionCommandScale {
    // Members
    float amountX; // offset 0x0, size 0x4
    float amountY; // offset 0x4, size 0x4
    bool centerPivot; // offset 0x8, size 0x1
    float centerOffsetX; // offset 0xC, size 0x4
    float centerOffsetY; // offset 0x10, size 0x4
};
// total size: 0xC
class UIMotionCommandRotate {
    // Members
    float rotation; // offset 0x0, size 0x4
    float centerOffsetX; // offset 0x4, size 0x4
    float centerOffsetY; // offset 0x8, size 0x4
};
// total size: 0x2
class UIMotionCommandOpacity {
    // Members
    unsigned char startOpacity; // offset 0x0, size 0x1
    unsigned char endOpacity; // offset 0x1, size 0x1
};
// total size: 0x14
class UIMotionCommandAbsoluteScale {
    // Members
    float startX; // offset 0x0, size 0x4
    float startY; // offset 0x4, size 0x4
    float endX; // offset 0x8, size 0x4
    float endY; // offset 0xC, size 0x4
    bool centerPivot; // offset 0x10, size 0x1
    bool textScale; // offset 0x11, size 0x1
};
// total size: 0x2
class UIMotionCommandBrightness {
    // Members
    unsigned char startBrightness; // offset 0x0, size 0x1
    unsigned char endBrightness; // offset 0x1, size 0x1
};
// total size: 0x6
class UIMotionCommandColor {
    // Members
    unsigned char startRed; // offset 0x0, size 0x1
    unsigned char startGreen; // offset 0x1, size 0x1
    unsigned char startBlue; // offset 0x2, size 0x1
    unsigned char endRed; // offset 0x3, size 0x1
    unsigned char endGreen; // offset 0x4, size 0x1
    unsigned char endBlue; // offset 0x5, size 0x1
};
// total size: 0x8
class UIMotionCommandUVScroll {
    // Members
    float amountU; // offset 0x0, size 0x4
    float amountV; // offset 0x4, size 0x4
};
// total size: 0x1
class UIMotionCommandVisibility {
    // Members
    bool makeVisible; // offset 0x0, size 0x1
};
// total size: 0x10
class _OGUI_ControllerEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_ControllerSchema : public Schema {};
// total size: 0xE0
class zUIController : public zUI {};
// total size: 0xC0
class UI_Controller : public zUI {
    // Members
    class LinkAsset EventLinksNew; // offset 0xB8, size 0x8
};
// total size: 0x10
class _OGUI_GroupEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_GroupSchema : public Schema {};
// total size: 0x48
class UI_Group : public zUIMessageTarget {
    // Members
    class __widgets__ widgets; // offset 0x20, size 0x8
    class __activations__ activations; // offset 0x28, size 0x8
    class __deactivations__ deactivations; // offset 0x30, size 0x8
    bool random; // offset 0x38, size 0x1
    class LinkAsset EventLinksNew; // offset 0x3C, size 0x8
};
// total size: 0x8
class __widgets__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __activations__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x8
class __deactivations__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x50
class zUIGroup : public xBase {
    // Members
    class UI_Group * asset; // offset 0x20, size 0x4
    class zUIGroupMemberInfo * items; // offset 0x24, size 0x4
    int count; // offset 0x28, size 0x4
    unsigned int flags; // offset 0x2C, size 0x4
    int toPrevious; // offset 0x30, size 0x4
    int toNext; // offset 0x34, size 0x4
    int fromNext; // offset 0x38, size 0x4
    int nextActivateTransition; // offset 0x3C, size 0x4
    int nextDeactivateTransition; // offset 0x40, size 0x4
    float deactivateTimer; // offset 0x44, size 0x4
    class zUIGroup * nextGroup; // offset 0x48, size 0x4
    class zUIGroup * previousGroup; // offset 0x4C, size 0x4
};
// total size: 0x4
class zUIGroupMemberInfo {
    // Members
    class xBase * member; // offset 0x0, size 0x4
};
// total size: 0x10
class _OGUI_ImageEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_ImageSchema : public Schema {};
// total size: 0x10
class iRect {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// total size: 0x1
class Referrer {};
// total size: 0x24
class ImmediateRenderUIImage {
    // Members
    class ImmediateContext immContext; // offset 0x0, size 0x20
    class Renderable3DTransform * xform; // offset 0x20, size 0x4
};
// total size: 0x30
class UICorners {
    // Members
    class UIVertex upperLeft; // offset 0x0, size 0xC
    class UIVertex lowerLeft; // offset 0xC, size 0xC
    class UIVertex lowerRight; // offset 0x18, size 0xC
    class UIVertex upperRight; // offset 0x24, size 0xC
};
// total size: 0x110
class UI_Image : public zUI {
    // Members
    class ImmediateInstanceAsset ImmediateData; // offset 0xC0, size 0x10
    class UICorners corners; // offset 0xD0, size 0x30
    class LinkAsset EventLinksNew; // offset 0x100, size 0x8
};
// total size: 0x10
class _OGUI_MotionEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_MotionSchema : public Schema {};
// total size: 0x180
class zUIText : public zUI {
    // Members
    class xColor_tag shadowColor; // offset 0xD8, size 0x4
    char * text; // offset 0xDC, size 0x4
    bool cached; // offset 0xE0, size 0x1
    bool clearLayoutCache; // offset 0xE1, size 0x1
    unsigned int textID; // offset 0xE4, size 0x4
    class xtextbox tb; // offset 0xE8, size 0x88
    bool dirty; // offset 0x170, size 0x1
};
// total size: 0xE0
class zUIModel : public zUI {
    // Members
    class xModelInstance * model; // offset 0xD8, size 0x4
    class xAnimTable * atbl; // offset 0xDC, size 0x4
};
// total size: 0x170
class zUIBox : public zUI {
    // Members
    class xTextureHandle textures[9]; // offset 0xD8, size 0x90
    float curRotation; // offset 0x168, size 0x4
};
// total size: 0x180
class zUIUserString : public zUIText {
    // Members
    char * textBuffer; // offset 0x174, size 0x4
    int length; // offset 0x178, size 0x4
    int maxLength; // offset 0x17C, size 0x4
};
// total size: 0x110
class UI_Model : public zUI {
    // Members
    class ModelInstanceAsset ModelInstance; // offset 0xC0, size 0x40
    class uid animationList; // offset 0x100, size 0x8
    class LinkAsset EventLinksNew; // offset 0x108, size 0x8
};
// total size: 0x10
class _OGUI_User_StringEntity : public xOGEntity {};
// total size: 0x18
class _OGUI_User_StringSchema : public Schema {};
// total size: 0xC
class var_type {
    // Members
    class substr name; // offset 0x0, size 0x8
    char * (* get_text)(); // offset 0x8, size 0x4
};
// total size: 0x10
class _OGWallNetEntity : public xOGEntity {};
// total size: 0x18
class _OGWallNetSchema : public Schema {};
// total size: 0x18
class xOGEntitySoundBankWrap : public xOGEntity {
    // Members
    unsigned long long assetID; // offset 0x10, size 0x8
};
// total size: 0xC
class zWallePlayerCharacterProxyCollisionListener : public zPlayerCharacterProxyCollisionListener {};
// total size: 0xC4
class zProjectileTrajHover : public zProjectileTrajectory {
    // Members
    class xVec3 pos; // offset 0x98, size 0xC
    class xVec3 prevPos; // offset 0xA4, size 0xC
    float maxY; // offset 0xB0, size 0x4
    float minY; // offset 0xB4, size 0x4
    bool flip; // offset 0xB8, size 0x1
    float speed; // offset 0xBC, size 0x4
    float fullHeight; // offset 0xC0, size 0x4
};
// total size: 0xC0
class zProjectileTrajParabola : public zProjectileTrajectory {
    // Members
    class xParabola parabola; // offset 0x98, size 0x24
    float speed; // offset 0xBC, size 0x4
};
// total size: 0xB4
class zProjectileTrajStraight : public zProjectileTrajectory {
    // Members
    class xVec3 start; // offset 0x98, size 0xC
    class xVec3 dir; // offset 0xA4, size 0xC
    float speed; // offset 0xB0, size 0x4
};
// total size: 0x30
class Global {
    // Members
    class SystemI * gSystemHead; // offset 0x0, size 0x4
    class MemPool * gSystemPool; // offset 0x4, size 0x4
    int gSystemInitCount; // offset 0x8, size 0x4
    unsigned int gDebugLevel; // offset 0xC, size 0x4
    enum FMOD_DEBUGMODE gDebugMode; // offset 0x10, size 0x4
    class FMOD_UINT64P gDSPClock; // offset 0x18, size 0x8
    unsigned int gDSPClockTimeStamp; // offset 0x20, size 0x4
    int gFileBusy; // offset 0x24, size 0x4
    enum FMOD_RESULT (* gMemoryAllocFailedCallback)(class FMOD_SYSTEM * system, enum FMOD_SYSTEM_CALLBACKTYPE type, unsigned int commanddata1, unsigned int commanddata2); // offset 0x28, size 0x4
};
// total size: 0x0
class SystemI {};
// total size: 0x144
class MemPool {
    // Members
    unsigned char * mBitmap; // offset 0x0, size 0x4
    unsigned char * mData; // offset 0x4, size 0x4
    bool mCustomPool; // offset 0x8, size 0x1
    int mSizeBytes; // offset 0xC, size 0x4
    int mSizeBlocks; // offset 0x10, size 0x4
    int mNumBlocks; // offset 0x14, size 0x4
    int mMaxBlocks; // offset 0x18, size 0x4
    unsigned int mCurrentAllocated[33]; // offset 0x1C, size 0x84
    unsigned int mCurrentAllocatedThreadID[32]; // offset 0xA0, size 0x80
    unsigned int mMaxAllocated; // offset 0x120, size 0x4
    int mActualMaxBytes; // offset 0x124, size 0x4
    int mWastage; // offset 0x128, size 0x4
    int mFirstFreeBlock; // offset 0x12C, size 0x4
    void * (* mAlloc)(unsigned int size, unsigned int type); // offset 0x130, size 0x4
    void * (* mRealloc)(void * ptr, unsigned int size, unsigned int type); // offset 0x134, size 0x4
    void (* mFree)(void * ptr, unsigned int type); // offset 0x138, size 0x4
    class FMOD_OS_CRITICALSECTION * mCrit; // offset 0x13C, size 0x4
    int mBlockSize; // offset 0x140, size 0x4
};
// total size: 0x0
class FMOD_OS_CRITICALSECTION {};
enum FMOD_DEBUGMODE {
    DEBUG_STDOUT = 0,
    DEBUG_FILE = 1,
};
// total size: 0x8
class FMOD_UINT64P {
    // Members
    unsigned long long mValue; // offset 0x0, size 0x8
    class @class __anon; // offset 0x0, size 0x8
    unsigned int mHi; // offset 0x0, size 0x4
    unsigned int mLo; // offset 0x4, size 0x4
};
// total size: 0x8
class @class {
    // Members
    unsigned int mHi; // offset 0x0, size 0x4
    unsigned int mLo; // offset 0x4, size 0x4
};
// total size: 0x0
class FMOD_SYSTEM {};
enum FMOD_SYSTEM_CALLBACKTYPE {
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELISTCHANGED = 0,
    FMOD_SYSTEM_CALLBACKTYPE_MEMORYALLOCATIONFAILED = 1,
    FMOD_SYSTEM_CALLBACKTYPE_MAX = 2,
    FMOD_SYSTEM_CALLBACKTYPE_FORCEINT = 65536,
};
// total size: 0x1C
class HDRSettings {
    // Members
    bool Enable; // offset 0x0, size 0x1
    float Threshold; // offset 0x4, size 0x4
    float BloomScale; // offset 0x8, size 0x4
    float BloomSize; // offset 0xC, size 0x4
    float BloomBrightness; // offset 0x10, size 0x4
    float StarScale; // offset 0x14, size 0x4
    float BlurScale; // offset 0x18, size 0x4
};
// total size: 0x8
class hkError : public hkReferencedObject, public hkSingleton {};
// total size: 0x1
class hkSingleton {};
